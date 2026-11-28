/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f8
 */

uint recovered_100033f8(uint a,uint b)

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
 * Address: 0x10003448
 */

uint recovered_10003448(uint param_1,uint param_2)

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
 * Address: 0x10003480
 */

int recovered_10003480(int a,int b)

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
 * Address: 0x100034f0
 */

uint recovered_100034f0(uint param_1,uint param_2)

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
 * Address: 0x10003558
 */

ulonglong recovered_10003558(ulonglong a,ulonglong b)

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
 * Address: 0x1000363c
 */

undefined8 recovered_1000363c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100036bc
 */

undefined8 recovered_100036bc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100037dc
 */

undefined8 recovered_100037dc(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003918
#define DAT_10003918 (*(double *)(0x10003918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003898
 */

ulonglong recovered_10003898(double value)

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

#undef DAT_10003918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003920
 */

longlong recovered_10003920(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  ulonglong uVar1;

  if (NAN(pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return 0;
  }
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    uVar1 = recovered_10003898(value);
    return CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  uVar1 = recovered_10003898(value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000396c
 */

ulonglong recovered_1000396c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_s1;
  ulonglong uVar1;

  uVar1 = recovered_10003898(pf_bits_double(CONCAT44(in_s1,param_1)));
  return uVar1;
}


#undef DAT_1000c004
#define DAT_1000c004 (*(code * *)(((uintptr_t)pf_module_state + 0x4a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000397c
 */

void recovered_1000397c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x428U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000c004)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_1000c004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000398c
 */

double recovered_1000398c(ulonglong value)

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
 * Address: 0x100039d4
 */

double recovered_100039d4(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (value < 0) {
    dVar1 = recovered_1000398c(CONCAT44(-((int)((ulonglong)value >> 0x20) + (uint)((int)value != 0))
                                        ,-(int)value));
    return dVar1;
  }
  dVar1 = recovered_1000398c(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039fc
 */

float recovered_100039fc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_1000398c(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

float recovered_10003a18(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100039d4(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_1000bf50
#define DAT_1000bf50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_1000bf58
#define DAT_1000bf58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3fcU)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
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
#undef UINT_4001090c
#define UINT_4001090c (*(uint *)(0x4001090cU))
#undef UINT_40010968
#define UINT_40010968 (*(uint *)(0x40010968U))
#undef str_1000bc7c
#define str_1000bc7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120U)))
#undef str_1000bca6
#define str_1000bca6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_1000bcb7
#define str_1000bcb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15bU)))
#define auStack_c40 (*(undefined1 (*)[3136])(pf_stack_frame + 32))
#define auStack_c28 (*(undefined1 (*)[3112])(pf_stack_frame + 56))
#define auStack_9b0 (*(undefined1 (*)[2480])(pf_stack_frame + 688))
#define local_c44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_c30 (*(int *)(pf_stack_frame + 48))
#define local_c18 (*(uint *)(pf_stack_frame + 72))
#define local_bf8 (*(uint *)(pf_stack_frame + 104))
#define local_bf4 (*(uint *)(pf_stack_frame + 108))
#define local_bf0 (*(int *)(pf_stack_frame + 112))
#define local_bec (*(int *)(pf_stack_frame + 116))
#define local_9ac (*(uint *)(pf_stack_frame + 692))
#define local_9a8 (*(uint *)(pf_stack_frame + 696))
#define local_984 (*(int *)(pf_stack_frame + 732))
#define local_670 (*(int *)(pf_stack_frame + 1520))
#define local_66c (*(uint *)(pf_stack_frame + 1524))
#define local_668 (*(int *)(pf_stack_frame + 1528))
#define local_664 (*(uint *)(pf_stack_frame + 1532))
#define local_660 (*(uint *)(pf_stack_frame + 1536))
#define local_65c (*(uint *)(pf_stack_frame + 1540))
#define local_654 (*(undefined4 *)(pf_stack_frame + 1548))
#define local_4a0 (*(int *)(pf_stack_frame + 1984))
#define local_48c (*(uint *)(pf_stack_frame + 2004))
#define local_488 (*(int *)(pf_stack_frame + 2008))
#define local_484 (*(byte *)(pf_stack_frame + 2012))
#define local_480 (*(int *)(pf_stack_frame + 2016))
#define local_47c (*(uint *)(pf_stack_frame + 2020))
#define local_440 (*(char *)(pf_stack_frame + 2080))
#define local_43c (*(uint *)(pf_stack_frame + 2084))
#define auStack_fc (*(undefined1 (*)[252])(pf_stack_frame + 2916))
#define local_2dc (*(undefined1 *)(pf_stack_frame + 2436))
#define local_12c (*(uint *)(pf_stack_frame + 2868))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 2936))
#define local_128 (*(uint *)(pf_stack_frame + 2872))
#define local_124 (*(uint *)(pf_stack_frame + 2876))
#define local_11c (*(uint *)(pf_stack_frame + 2884))
#define local_118 (*(int *)(pf_stack_frame + 2888))
#define local_114 (*(uint *)(pf_stack_frame + 2892))
#define local_104 (*(int *)(pf_stack_frame + 2908))
#define local_ec (*(char *)(pf_stack_frame + 2932))
#define local_e4 (*(int *)(pf_stack_frame + 2940))
#define local_e0 (*(int *)(pf_stack_frame + 2944))
#define local_dc (*(uint *)(pf_stack_frame + 2948))
#define local_d8 (*(uint *)(pf_stack_frame + 2952))
#define local_c4 (*(int *)(pf_stack_frame + 2972))
#define local_c0 (*(int *)(pf_stack_frame + 2976))
#define local_bc (*(int *)(pf_stack_frame + 2980))
#define local_b8 (*(int *)(pf_stack_frame + 2984))
#define local_b4 (*(int *)(pf_stack_frame + 2988))
#define local_b0 (*(int *)(pf_stack_frame + 2992))
#define local_ac (*(int *)(pf_stack_frame + 2996))
#define iStack_3c (*(int *)(pf_stack_frame + 3108))
#define local_a8 (*(int *)(pf_stack_frame + 3000))
#define local_a4 (*(int *)(pf_stack_frame + 3004))
#define local_a0 (*(uint *)(pf_stack_frame + 3008))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 3116))
#define local_9c (*(int *)(pf_stack_frame + 3012))
#define local_98 (*(int *)(pf_stack_frame + 3016))
#define local_40 (*(undefined4 *)(pf_stack_frame + 3104))
#define local_38 (*(uint *)(pf_stack_frame + 3112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a34
 */

undefined4 recovered_10003a34(void)

{
  unsigned char pf_stack_frame[3200] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r0 = 0;
  uint uVar12;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  int extraout_r2 = 0;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;

  thunk_memset(auStack_9b0,0,0x884);
  thunk_pf_app_window_spec(auStack_c28,str_1000bca6,DAT_1000c078,DAT_1000c07c);
  local_c18 = thunk_terror_ui_colour(0);
  local_bf8 = local_bf8 | 1;
  uVar7 = thunk_terror_ui_window_open(auStack_9b0,auStack_c28);
  if (uVar7 != 0) {
    local_670 = local_984;
    if (local_984 != 0) {
      DAT_1000c078 = local_9ac;
      local_654 = 0xffffffff;
      local_65c = 0xffffffff;
      DAT_1000c07c = local_9a8;
      local_c44 = 0;
      local_66c = 0;
      terror_ui_window_set_custom_menus(auStack_9b0,str_1000bcb7);
      recovered_10004718((int)auStack_9b0);
      recovered_10005a3c((uint)auStack_9b0);
      terror_ui_window_begin_frame(auStack_9b0);
      thunk_memset(auStack_c28,0,0x278);
      uVar14 = local_9a8;
      uVar7 = local_9ac;
      uVar8 = thunk_terror_ui_window_query(auStack_9b0,auStack_c28);
      if (uVar8 != 0) {
        do {
          uVar6 = thunk_terror_ui_window_info_requests_close(auStack_c28);
          if ((uVar6 != '\0') || (uVar8 = thunk_terror_ui_window_sync_buffer(auStack_9b0,auStack_c28), uVar8 == 0))
          break;
          DAT_1000c078 = local_9ac;
          local_670 = local_984;
          DAT_1000c07c = local_9a8;
          uVar8 = local_9ac;
          iVar13 = local_984;
          if (local_9ac != uVar7 || local_9a8 != uVar14) {
            recovered_10005a3c((uint)auStack_9b0);
            uVar8 = extraout_r1;
            iVar13 = extraout_r2;
          }
          if (local_bf4 != 0) {
            uVar8 = local_660;
          }
          if ((local_bf4 != 0 && local_bf4 != uVar8) && (local_660 = local_bf4, local_bf0 == 1)) {
            if (local_bec == 2) {
              recovered_100098b0((int)auStack_9b0,1,iVar13);
LAB_10004188:
              recovered_10005a3c((uint)auStack_9b0);
            }
            else if (local_bec == 1) {
              recovered_10009680((int)auStack_9b0,1,iVar13);
            }
            else if ((local_bec == 0) && (1 < local_65c + 1)) {
              iVar13 = Ram40010800;
              if ((iVar13 == 0x50414d57) && (iVar13 = Ram40010804, iVar13 != 0)) {
                uVar7 = Ram40010808;
                bVar16 = 0xb < uVar7;
                if (bVar16) {
                  uVar7 = Ram40010808;
                }
                if ((bVar16 && 0x10f < uVar7) &&
                   (pcVar2 = (code *)UINT_4001090c, pcVar2 != (code *)0x0)) {
                  (*pcVar2)(local_65c);
                }
              }
              local_2dc = 0;
              local_65c = 0xffffffff;
              recovered_10004718((int)auStack_9b0);
              goto LAB_10004188;
            }
          }
          thunk_memset(&local_12c,0,0x30);
          uVar9 = terror_ui_window_pointer_state_ex(auStack_9b0,&local_12c);
          uVar12 = local_114;
          iVar3 = local_118;
          uVar8 = local_11c;
          uVar14 = local_124;
          uVar7 = local_128;
          iVar13 = local_488;
          if (uVar9 != 0) {
            uVar9 = local_12c & 2;
            bVar16 = local_104 != local_488;
            local_488 = local_104;
            if ((((bVar16 && uVar9 != 0) && (0xf < local_118)) &&
                (local_118 < (int)(DAT_1000c078 - 0x10))) && (local_114 - 0x7c < 0xc6)) {
              lVar1 = (longlong)(local_104 - iVar13) * -3 + (ulonglong)local_48c;
              uVar15 = (uint)lVar1;
              iVar13 = (int)((ulonglong)lVar1 >> 0x20);
              uVar11 = uVar15;
              if (lVar1 < 0) {
                uVar11 = 0;
              }
              uVar10 = local_43c - 0xb;
              if (local_43c < 0xb) {
                uVar10 = 0;
              }
              if ((int)-(iVar13 + (uint)(uVar10 < uVar15)) < 0 ==
                  (SBORROW4(0,iVar13) != SBORROW4(-iVar13,(uint)(uVar10 < uVar15)))) {
                uVar10 = uVar11;
              }
              if (local_48c != uVar10) {
                local_48c = uVar10;
                recovered_10005a3c((uint)auStack_9b0);
              }
            }
            uVar11 = (uint)local_484;
            if (local_484 == 1) {
              if ((uVar7 & 1) == 0) {
                local_484 = 0;
                uVar11 = 0;
              }
              else {
                uVar11 = local_47c;
                if (uVar12 != local_47c) {
                  iVar13 = local_43c - 0xb;
                  if (local_43c < 0xb) {
                    iVar13 = 0;
                  }
                  uStack_34 = (undefined4)((ulonglong)DAT_1000bf58 >> 0x20);
                  uVar5 = uStack_34;
                  PF_PART8(local_38,0) = CONCAT44(uStack_34,local_48c);
                  local_40 = (undefined4)DAT_1000bf50;
                  uVar4 = local_40;
                  PF_PART8(local_40,0) = CONCAT44(iVar13,local_40);
                  thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_1000c078 - 0x20,0xc6,&local_40,(void *)0x0,
                                     auStack_fc);
                  iVar13 = local_43c - 0xb;
                  if (local_43c < 0xb) {
                    iVar13 = 0;
                  }
                  PF_PART8(local_40,0) = CONCAT44(iVar13,uVar4);
                  local_47c = uVar12;
                  PF_PART8(local_38,0) = CONCAT44(uVar5,local_48c);
                  uVar11 = local_48c;
                  if (local_ec == '\x01') {
                    uVar11 = thunk_terror_ui_scrollbar_value_from_point(auStack_e8,&local_40,uVar12,local_480);
                    uVar7 = local_43c - 0xb;
                    if (local_43c < 0xb) {
                      uVar7 = 0;
                    }
                    uVar15 = (int)uVar11 >> 0x1f;
                    if ((int)-(uVar15 + (uVar7 < uVar11)) < 0 ==
                        (SBORROW4(0,uVar15) != SBORROW4(-uVar15,(uint)(uVar7 < uVar11)))) {
                      uVar7 = uVar11 & ~uVar15;
                    }
                    if (local_48c != uVar7) {
                      local_48c = uVar7;
                      recovered_10005a3c((uint)auStack_9b0);
                      uVar11 = extraout_r0;
                    }
                  }
                }
              }
            }
            if ((uVar14 & 1) != 0) {
              if (uVar9 != 0) {
                uVar11 = local_664;
              }
              if (uVar9 != 0 && uVar8 != uVar11) {
                iVar13 = local_43c - 0xb;
                local_664 = uVar8;
                if (local_43c < 0xb) {
                  iVar13 = 0;
                }
                uStack_34 = (undefined4)((ulonglong)DAT_1000bf58 >> 0x20);
                uVar5 = uStack_34;
                PF_PART8(local_38,0) = CONCAT44(uStack_34,local_48c);
                local_40 = (undefined4)DAT_1000bf50;
                uVar4 = local_40;
                PF_PART8(local_40,0) = CONCAT44(iVar13,local_40);
                thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_1000c078 - 0x20,0xc6,&local_40,(void *)0x0,
                                   auStack_fc);
                uVar7 = extraout_r1_00;
                if (((local_ec == '\x01') && (uVar7 = extraout_r1_00, local_e4 <= iVar3)) &&
                   ((uVar7 = local_dc, iVar3 < (int)(local_dc + local_e4) &&
                    ((local_e0 <= (int)uVar12 &&
                     (uVar7 = local_d8, (int)uVar12 < (int)(local_d8 + local_e0))))))) {
                  if ((iVar3 < local_c4) ||
                     (((local_bc + local_c4 <= iVar3 || ((int)uVar12 < local_c0)) ||
                      (local_b8 + local_c0 <= (int)uVar12)))) {
                    if (((iVar3 < local_b4) || (local_ac + local_b4 <= iVar3)) ||
                       (((int)uVar12 < local_b0 || (local_a8 + local_b0 <= (int)uVar12)))) {
                      if ((local_a4 <= iVar3) && (iVar3 < local_9c + local_a4)) {
                        bVar16 = SBORROW4(uVar12,local_a0);
                        iVar13 = uVar12 - local_a0;
                        uVar7 = local_a0;
                        if ((int)local_a0 <= (int)uVar12) {
                          uVar7 = local_98 + local_a0;
                          bVar16 = SBORROW4(uVar7,uVar12);
                          iVar13 = uVar7 - uVar12;
                        }
                        if (uVar12 != uVar7 && iVar13 < 0 == bVar16) {
                          local_480 = uVar12 - local_a0;
                          local_47c = uVar12;
                          local_484 = 1;
                          goto LAB_1000436c;
                        }
                      }
                      iVar13 = local_43c - 0xb;
                      if (local_43c < 0xb) {
                        iVar13 = 0;
                      }
                      PF_PART8(local_40,0) = CONCAT44(iVar13,uVar4);
                      PF_PART8(local_38,0) = CONCAT44(uVar5,local_48c);
                      uVar7 = thunk_terror_ui_scrollbar_value_from_point(auStack_e8,&local_40,uVar12,local_98 / 2);
                      uVar14 = local_43c - 0xb;
                      if (local_43c < 0xb) {
                        uVar14 = 0;
                      }
                      uVar8 = (int)uVar7 >> 0x1f;
                      if ((int)-(uVar8 + (uVar14 < uVar7)) < 0 ==
                          (SBORROW4(0,uVar8) != SBORROW4(-uVar8,(uint)(uVar14 < uVar7)))) {
                        uVar14 = uVar7 & ~uVar8;
                      }
                      if (local_48c != uVar14) {
                        local_48c = uVar14;
                      }
                      goto LAB_1000436c;
                    }
                    uVar7 = local_43c - 0xb;
                    if (local_43c < 0xb) {
                      uVar7 = 0;
                    }
                    if (local_48c < uVar7) {
                      uVar7 = local_48c + 1;
                    }
                  }
                  else {
                    uVar14 = local_43c - 0xb;
                    if (local_43c < 0xb) {
                      uVar14 = 0;
                    }
                    uVar8 = local_48c - 1;
                    iVar13 = -(uint)(local_48c == 0);
                    uVar7 = uVar8;
                    if (iVar13 < 0) {
                      uVar7 = 0;
                    }
                    if ((int)-(iVar13 + (uint)(uVar14 < uVar8)) < 0 !=
                        (SBORROW4(0,iVar13) !=
                        SBORROW4((uint)(local_48c == 0),(uint)(uVar14 < uVar8)))) {
                      uVar7 = uVar14;
                    }
                  }
                  if (local_48c != uVar7) {
                    local_48c = uVar7;
                  }
                }
                else {
                  uVar14 = iVar3 - 0x5c;
                  if (0xffffffb3 < uVar14) {
                    uVar7 = uVar12 - 0x1e;
                  }
                  if (0xffffffb3 < uVar14 && 0xffffffed < uVar7) {
                    if (local_65c + 1 < 2) goto LAB_10004374;
                    iVar13 = Ram40010800;
                    if ((iVar13 == 0x50414d57) && (iVar13 = Ram40010804, iVar13 != 0)) {
                      uVar7 = Ram40010808;
                      bVar16 = 0xb < uVar7;
                      if (bVar16) {
                        uVar7 = Ram40010808;
                      }
                      if ((bVar16 && 0x10f < uVar7) &&
                         (pcVar2 = (code *)UINT_4001090c, pcVar2 != (code *)0x0)) {
                        (*pcVar2)(local_65c);
                      }
                    }
                    local_2dc = 0;
                    local_65c = 0xffffffff;
LAB_10004168:
                    recovered_10004718((int)auStack_9b0);
                  }
                  else {
                    if (0xffffffb3 < uVar14) {
                      uVar7 = uVar12 - 0x34;
                    }
                    if (0xffffffb3 < uVar14 && 0xffffffed < uVar7) {
                      recovered_10009680((int)auStack_9b0,uVar7,uVar12);
                    }
                    else {
                      bVar16 = 0xffffffb3 < uVar14;
                      if (bVar16) {
                        uVar14 = uVar12 - 0x4a;
                      }
                      if (bVar16 && 0xffffffed < uVar14) {
                        recovered_100098b0((int)auStack_9b0,uVar7,uVar12);
                      }
                      else if (((uVar12 - 0x7c < 0xc6) && (0xf < iVar3)) &&
                              (iVar3 < (int)(DAT_1000c078 - 0x10))) {
                        uVar7 = local_48c +
                                ((uint)((short)((ushort)(uVar12 - 0x7c) & 0xff) * 0x39) >> 10);
                        if (local_43c <= uVar7) goto LAB_10004374;
                        local_65c = *(uint *)(local_4a0 + uVar7 * 0x1b8);
                      }
                      else {
                        if ((local_66c & 0xfffffffe) == 2) {
                          uVar7 = iVar3 - 0x46;
                          bVar17 = 0xf8 < uVar7;
                          bVar16 = uVar7 == 0xf9;
                          if (uVar7 < 0xfa) {
                            bVar17 = 0x14 < uVar12 - 0x188;
                            bVar16 = uVar12 - 0x188 == 0x15;
                          }
                          if (!bVar17 || bVar16) {
                            recovered_10009bb4((int)auStack_9b0);
                            goto LAB_10004168;
                          }
                        }
                        uVar7 = iVar3 - 0xc6;
                        uVar12 = uVar12 - 0x164;
                        bVar17 = 0x72 < uVar7;
                        bVar16 = uVar7 == 0x73;
                        if (uVar7 < 0x74) {
                          uVar7 = 0;
                          bVar17 = 0x16 < uVar12;
                          bVar16 = uVar12 == 0x17;
                        }
                        if (bVar17 && !bVar16) {
                          uVar7 = iVar3 - 0x13a;
                          bVar16 = 0x86 < uVar7;
                          if (uVar7 < 0x88) {
                            uVar7 = 1;
                            bVar16 = 0x17 < uVar12;
                          }
                          if (bVar16) {
                            uVar7 = iVar3 - 0x1c2;
                            bVar16 = 0x72 < uVar7;
                            if (uVar7 < 0x74) {
                              uVar7 = 2;
                              bVar16 = 0x17 < uVar12;
                            }
                            if (bVar16) {
                              uVar7 = iVar3 - 0x24a;
                              bVar16 = 0x72 < uVar7;
                              if (uVar7 < 0x74) {
                                uVar7 = 3;
                                bVar16 = 0x17 < uVar12;
                              }
                              if (bVar16) {
                                uVar7 = iVar3 - 0x2be;
                                bVar16 = 0x72 < uVar7;
                                if (uVar7 < 0x74) {
                                  uVar7 = 4;
                                  bVar16 = 0x17 < uVar12;
                                }
                                if (bVar16) goto LAB_10004374;
                              }
                            }
                          }
                        }
                        local_66c = uVar7;
                      }
                    }
                  }
                }
LAB_1000436c:
                recovered_10005a3c((uint)auStack_9b0);
              }
            }
          }
LAB_10004374:
          thunk_memset(auStack_c40,0,0x18);
          iVar13 = Ram40010800;
          bVar16 = true;
          if (((iVar13 == 0x50414d57) && (iVar13 = Ram40010804, iVar13 != 0)) &&
             ((uVar7 = Ram40010808, 0xb < uVar7 &&
              ((uVar7 = Ram40010808, 0x16b < uVar7 &&
               (pcVar2 = (code *)UINT_40010968, pcVar2 != (code *)0x0)))))) {
            uVar7 = (*pcVar2)(auStack_c40);
            bVar16 = uVar7 == 0;
          }
          if ((local_440 != '\x01') || ((!bVar16 && (0x11 < (uint)(local_c30 - local_668))))) {
            recovered_10004718((int)auStack_9b0);
            recovered_10005a3c((uint)auStack_9b0);
          }
          thunk_terror_ui_yield_frames(4);
          terror_ui_window_begin_frame(auStack_9b0);
          thunk_memset(auStack_c28,0,0x278);
          uVar14 = local_9a8;
          uVar7 = local_9ac;
          uVar8 = thunk_terror_ui_window_query(auStack_9b0,auStack_c28);
        } while (uVar8 != 0);
      }
      thunk_terror_ui_window_close(auStack_9b0);
      goto LAB_100044a4;
    }
    thunk_terror_ui_window_close(auStack_9b0);
  }
  iVar13 = Ram40010800;
  local_c44 = 1;
  if ((iVar13 == 0x50414d57) && (iVar13 = Ram40010804, iVar13 != 0)) {
    uVar7 = Ram40010808;
    bVar16 = 0xb < uVar7;
    if (bVar16) {
      uVar7 = Ram40010808;
    }
    if ((bVar16 && 0x2b < uVar7) && (pcVar2 = (code *)UINT_40010828, pcVar2 != (code *)0x0)) {
      (*pcVar2)(str_1000bc7c);
    }
  }
LAB_100044a4:
  recovered_100044e4((int)auStack_9b0);
  return local_c44;
}

#undef DAT_1000bf50
#undef DAT_1000bf58
#undef DAT_1000c078
#undef DAT_1000c07c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010828
#undef UINT_4001090c
#undef UINT_40010968
#undef str_1000bc7c
#undef str_1000bca6
#undef str_1000bcb7
#undef auStack_c40
#undef auStack_c28
#undef auStack_9b0
#undef local_c44
#undef local_c30
#undef local_c18
#undef local_bf8
#undef local_bf4
#undef local_bf0
#undef local_bec
#undef local_9ac
#undef local_9a8
#undef local_984
#undef local_670
#undef local_66c
#undef local_668
#undef local_664
#undef local_660
#undef local_65c
#undef local_654
#undef local_4a0
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_440
#undef local_43c
#undef auStack_fc
#undef local_2dc
#undef local_12c
#undef auStack_e8
#undef local_128
#undef local_124
#undef local_11c
#undef local_118
#undef local_114
#undef local_104
#undef local_ec
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef iStack_3c
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_34
#undef local_9c
#undef local_98
#undef local_40
#undef local_38

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
 * Address: 0x100044e4
 */

void recovered_100044e4(int param_1)

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
      (*pcVar3)(*(void **)(param_1 + 0x500));
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
      (*pcVar3)(*(void **)(param_1 + 0x504));
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
      (*pcVar3)(*(void **)(param_1 + 0x510));
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
      (*pcVar3)(*(void **)(param_1 + 0x514));
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
      (*pcVar3)(*(void **)(param_1 + 0x518));
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
      (*pcVar3)(*(void **)(param_1 + 0x51c));
    }
  }
  *(undefined4 *)(param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#undef UINT_400108b8
#define UINT_400108b8 (*(uint *)(0x400108b8U))
#undef UINT_40010904
#define UINT_40010904 (*(uint *)(0x40010904U))
#undef UINT_40010908
#define UINT_40010908 (*(uint *)(0x40010908U))
#undef UINT_40010910
#define UINT_40010910 (*(uint *)(0x40010910U))
#define local_2dc (*(uint *)(pf_stack_frame + 20))
#define local_2d8 (*(int *)(pf_stack_frame + 24))
#define local_2d4 (*(uint *)(pf_stack_frame + 28))
#define local_2d0 (*(int *)(pf_stack_frame + 32))
#define local_2c8 (*(void * *)(pf_stack_frame + 40))
#define local_2c4 (*(int * *)(pf_stack_frame + 44))
#define local_2c0 (*(void * *)(pf_stack_frame + 48))
#define local_2b8 (*(uint *)(pf_stack_frame + 56))
#define local_2b4 (*(uint *)(pf_stack_frame + 60))
#define local_2b0 (*(int *)(pf_stack_frame + 64))
#define local_2ac (*(byte *)(pf_stack_frame + 68))
#define local_284 (*(uint *)(pf_stack_frame + 108))
#define local_280 (*(uint *)(pf_stack_frame + 112))
#define local_27c (*(uint *)(pf_stack_frame + 116))
#define local_278 (*(uint *)(pf_stack_frame + 120))
#define local_274 (*(uint *)(pf_stack_frame + 124))
#define local_270 (*(uint *)(pf_stack_frame + 128))
#define local_26c (*(uint *)(pf_stack_frame + 132))
#define local_268 (*(uint *)(pf_stack_frame + 136))
#define local_220 (*(int (*)[136])(pf_stack_frame + 208))
#define auStack_1d8 (*(undefined1 (*)[472])(pf_stack_frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004718
 */

void recovered_10004718(int param_1)

{
  unsigned char pf_stack_frame[784] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int *src;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  int *piVar27;
  int *piVar28;
  undefined2 uVar29;
  void *pvVar30;
  ulonglong *puVar31;
  bool bVar32;
  bool bVar33;
  uint128 auVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;

  local_2b4 = 0;
  local_2b8 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar20 = *(int *)(param_1 + 0x354);
  thunk_memset(local_220,0,0x44);
  thunk_memset(&local_2b0,0,0x8c);
  iVar22 = Ram40010800;
  if (iVar22 != 0x50414d57) {
    return;
  }
  iVar22 = Ram40010804;
  if (iVar22 == 0) {
    return;
  }
  uVar5 = Ram40010808;
  bVar32 = 0xb < uVar5;
  if (bVar32) {
    uVar5 = Ram40010808;
  }
  if (!bVar32 || uVar5 < 0x10c) {
    return;
  }
  pcVar2 = (code *)UINT_40010908;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar5 = (*pcVar2)(local_220);
  if (uVar5 == 0) {
    return;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x570);
  if (uVar5 == 1) {
    uVar11 = local_220[0] - *(int *)(param_1 + 0x3a4);
    if (uVar11 == 0) {
      uVar11 = uVar5;
    }
  }
  else {
    uVar11 = uVar5;
  }
  iVar22 = Ram40010800;
  if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
    uVar5 = Ram40010808;
    bVar32 = 0xb < uVar5;
    if (bVar32) {
      uVar5 = Ram40010808;
    }
    if ((!bVar32 || uVar5 < 0xbc) || (pcVar2 = (code *)UINT_400108b8, pcVar2 == (code *)0x0))
    goto LAB_10004820;
    uVar5 = (*pcVar2)();
    if (uVar5 == 0) {
      uVar5 = 1;
    }
  }
  else {
LAB_10004820:
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x57c) = uVar5;
  *(undefined4 *)(param_1 + 0x584) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  recovered_10009c60(param_1);
  if (((*(int *)(param_1 + 0x35c) < 0) || (iVar22 = Ram40010800, iVar22 != 0x50414d57)) ||
     (iVar22 = Ram40010804, iVar22 == 0)) {
LAB_1000487c:
    thunk_memset((void *)(param_1 + 1000),0,0x8c);
  }
  else {
    uVar5 = Ram40010808;
    bVar32 = 0xb < uVar5;
    if (bVar32) {
      uVar5 = Ram40010808;
    }
    if (((!bVar32 || uVar5 < 0x114) || (pcVar2 = (code *)UINT_40010910, pcVar2 == (code *)0x0)) ||
       (uVar5 = (*pcVar2)(*(int *)(param_1 + 0x35c),&local_2b0), uVar5 == 0)) goto LAB_1000487c;
    thunk_memcpy((void *)(param_1 + 1000),&local_2b0,0x8c);
  }
  iVar22 = Ram40010800;
  if (iVar22 != 0x50414d57) {
    return;
  }
  iVar22 = Ram40010804;
  if (iVar22 == 0) {
    return;
  }
  uVar5 = Ram40010808;
  bVar32 = uVar5 < 0xc;
  if (!bVar32) {
    uVar5 = Ram40010808;
  }
  if (bVar32 || uVar5 < 0x108) {
    return;
  }
  pcVar2 = (code *)UINT_40010904;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar5 = (*pcVar2)((void *)0x0,0,&local_2b4);
  if (uVar5 == 0) {
    return;
  }
  if ((int)local_2b4 < 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x520);
  if (uVar5 < local_2b4) {
    if (uVar5 == 0) {
      uVar5 = 0x10;
    }
    uVar7 = uVar5;
    do {
      uVar5 = uVar7;
      uVar7 = uVar5 << 1;
    } while (uVar5 < local_2b4);
    if (0x94f209 < uVar5) {
      return;
    }
    iVar22 = Ram40010800;
    local_2c8 = (void *)0x0;
    pvVar6 = (void *)0x0;
    if (iVar22 == 0x50414d57) {
      iVar22 = Ram40010804;
      pvVar6 = (void *)0x0;
      if (iVar22 != 0) {
        uVar7 = Ram40010808;
        pvVar6 = (void *)0x0;
        if (0xb < uVar7) {
          uVar7 = Ram40010808;
          pvVar6 = (void *)0x0;
          if ((0x4f < uVar7) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
            pvVar6 = (*pcVar2)(uVar5 * 0x1b8);
          }
        }
      }
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x4f < uVar7) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
        local_2c8 = (*pcVar2)(uVar5 << 4);
      }
    }
    iVar22 = Ram40010800;
    local_2c4 = (int *)0x0;
    local_2c0 = (void *)0x0;
    if (iVar22 == 0x50414d57) {
      iVar22 = Ram40010804;
      local_2c0 = (void *)0x0;
      if (iVar22 != 0) {
        uVar7 = Ram40010808;
        local_2c0 = (void *)0x0;
        if (0xb < uVar7) {
          uVar7 = Ram40010808;
          local_2c0 = (void *)0x0;
          if (0x4f < uVar7) {
            pcVar2 = (code *)UINT_4001084c;
            local_2c0 = (void *)0x0;
            if (pcVar2 != (code *)0x0) {
              local_2c0 = (*pcVar2)(uVar5 * 0x1c);
            }
          }
        }
      }
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x4f < uVar7) && (pcVar2 = (code *)UINT_4001084c, pcVar2 != (code *)0x0)) {
        local_2c4 = (*pcVar2)(uVar5 * 0x1b4);
      }
    }
    if (pvVar6 == (void *)0x0) {
LAB_10004a8c:
      iVar22 = Ram40010800;
      if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
        uVar5 = Ram40010808;
        bVar32 = 0xb < uVar5;
        if (bVar32) {
          uVar5 = Ram40010808;
        }
        if ((bVar32 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
          (*pcVar2)(pvVar6);
        }
      }
      iVar22 = Ram40010800;
      if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
        uVar5 = Ram40010808;
        bVar32 = 0xb < uVar5;
        if (bVar32) {
          uVar5 = Ram40010808;
        }
        if ((bVar32 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
          (*pcVar2)(local_2c8);
        }
      }
      iVar22 = Ram40010800;
      if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
        uVar5 = Ram40010808;
        bVar32 = 0xb < uVar5;
        if (bVar32) {
          uVar5 = Ram40010808;
        }
        if ((bVar32 && 0x53 < uVar5) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
          (*pcVar2)(local_2c0);
        }
      }
      iVar22 = Ram40010800;
      if (iVar22 != 0x50414d57) {
        return;
      }
      iVar22 = Ram40010804;
      if (iVar22 == 0) {
        return;
      }
      uVar5 = Ram40010808;
      bVar32 = 0xb < uVar5;
      if (bVar32) {
        uVar5 = Ram40010808;
      }
      if (!(!bVar32 || uVar5 < 0x54)) {
        pcVar2 = (code *)UINT_40010850;
        if (pcVar2 == (code *)0x0) {
          return;
        }
        (*pcVar2)(local_2c4);
        return;
      }
      return;
    }
    pvVar30 = (void *)0x0;
    if (local_2c8 != (void *)0x0) {
      pvVar30 = local_2c0;
    }
    if ((local_2c8 == (void *)0x0 || pvVar30 == (void *)0x0) || (local_2c4 == (int *)0x0))
    goto LAB_10004a8c;
    thunk_memset(pvVar6,0,uVar5 * 0x1b8);
    thunk_memset(local_2c8,0,uVar5 << 4);
    thunk_memset(local_2c0,0,uVar5 * 0x1c);
    if (*(int *)(param_1 + 0x520) != 0) {
      thunk_memcpy(pvVar6,*(void **)(param_1 + 0x510),*(int *)(param_1 + 0x520) * 0x1b8);
      thunk_memcpy(local_2c8,*(void **)(param_1 + 0x514),*(int *)(param_1 + 0x520) << 4);
      thunk_memcpy(local_2c0,*(void **)(param_1 + 0x518),*(int *)(param_1 + 0x520) * 0x1c);
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x53 < uVar7) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(*(void **)(param_1 + 0x510));
      }
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x53 < uVar7) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(*(void **)(param_1 + 0x514));
      }
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x53 < uVar7) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(*(void **)(param_1 + 0x518));
      }
    }
    iVar22 = Ram40010800;
    if ((iVar22 == 0x50414d57) && (iVar22 = Ram40010804, iVar22 != 0)) {
      uVar7 = Ram40010808;
      bVar32 = 0xb < uVar7;
      if (bVar32) {
        uVar7 = Ram40010808;
      }
      if ((bVar32 && 0x53 < uVar7) && (pcVar2 = (code *)UINT_40010850, pcVar2 != (code *)0x0)) {
        (*pcVar2)(*(void **)(param_1 + 0x51c));
      }
    }
    *(int **)(param_1 + 0x51c) = local_2c4;
    *(void **)(param_1 + 0x518) = local_2c0;
    *(void **)(param_1 + 0x514) = local_2c8;
    *(uint *)(param_1 + 0x520) = uVar5;
    *(void **)(param_1 + 0x510) = pvVar6;
  }
  else {
    local_2c4 = *(int **)(param_1 + 0x51c);
  }
  iVar22 = Ram40010800;
  if (iVar22 != 0x50414d57) {
    return;
  }
  iVar22 = Ram40010804;
  if (iVar22 == 0) {
    return;
  }
  uVar7 = Ram40010808;
  bVar32 = uVar7 < 0xc;
  if (!bVar32) {
    uVar7 = Ram40010808;
  }
  if (bVar32 || uVar7 < 0x108) {
    return;
  }
  pcVar2 = (code *)UINT_40010904;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar7 = (*pcVar2)(local_2c4,uVar5,&local_2b8);
  uVar5 = local_2b8;
  if (uVar7 == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x520);
  if (uVar7 < local_2b8) {
    return;
  }
  if (uVar7 != 0) {
    uVar21 = 0;
    do {
      pvVar6 = (void *)(*(int *)(param_1 + 0x518) + uVar21 * 0x1c);
      if (*(char *)((int)pvVar6 + 0x18) != '\0') {
        if (uVar5 != 0) {
          piVar27 = local_2c4;
          uVar23 = uVar5;
          do {
            if (*piVar27 == *(int *)(*(int *)(param_1 + 0x518) + uVar21 * 0x1c)) goto LAB_10004da8;
            uVar23 = uVar23 - 1;
            piVar27 = piVar27 + 0x6d;
          } while (uVar23 != 0);
        }
        thunk_memset(pvVar6,0,0x1c);
        uVar7 = *(uint *)(param_1 + 0x520);
      }
LAB_10004da8:
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar7);
  }
  bVar32 = iVar20 == -1;
  if (local_2b8 == 0) {
    local_2c8 = (void *)0x0;
    local_2d4 = 0;
    local_2dc = 0;
    local_2d0 = 0;
    local_2c0 = (void *)0x0;
  }
  else {
    uVar7 = 0;
    uVar5 = 1;
    if (1 < uVar11) {
      uVar5 = uVar11;
    }
    local_2d4 = 0;
    local_2d0 = 0;
    local_2dc = 0;
    local_2d8 = 0;
    do {
      uVar21 = 0;
      if ((*(char *)(param_1 + 0x570) == '\x01') &&
         (uVar23 = *(uint *)(param_1 + 0x520), uVar23 != 0)) {
        uVar16 = 0;
        bVar33 = true;
        do {
          if ((*(char *)(*(int *)(param_1 + 0x514) + uVar16 * 0x10) == '\x01') &&
             (iVar22 = *(int *)(param_1 + 0x514) + uVar16 * 0x10,
             *(int *)(iVar22 + 4) == local_2c4[uVar7 * 0x6d])) {
            uVar21 = 0;
            if (bVar33) {
              uVar21 = (local_2c4 + uVar7 * 0x6d)[5] - *(int *)(iVar22 + 0xc);
            }
            break;
          }
          uVar16 = uVar16 + 1;
          bVar33 = uVar16 < uVar23;
          uVar21 = 0;
        } while (uVar23 != uVar16);
      }
      src = local_2c4 + uVar7 * 0x6d;
      thunk_memcpy((void *)(uVar7 * 0x1b8 + *(int *)(param_1 + 0x510)),src,0x1b4);
      iVar20 = local_2c4[uVar7 * 0x6d];
      iVar22 = *(int *)(param_1 + 0x520);
      piVar28 = *(int **)(param_1 + 0x518);
      piVar27 = piVar28;
      if (iVar22 != 0) {
        piVar24 = (int *)0x0;
        do {
          piVar17 = piVar27;
          if (((char)piVar27[6] != '\0') && (piVar17 = (int *)0x0, *piVar27 == iVar20)) {
            local_2c8 = (void *)iVar20;
            goto LAB_100050dc;
          }
          piVar27 = piVar27 + 7;
          if (piVar24 == (int *)0x0) {
            piVar24 = piVar17;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        piVar27 = piVar24;
        if (piVar24 == (int *)0x0) {
          piVar27 = piVar28;
        }
      }
      thunk_memset(piVar27,0,0x1c);
      *piVar27 = iVar20;
      local_2c8 = (void *)*src;
LAB_100050dc:
      uVar23 = *(uint *)(param_1 + 0x57c);
      if (uVar23 < 2) {
        uVar23 = 1;
      }
      uVar36 = recovered_10003558((ulonglong)uVar21 * 1000,(ulonglong)uVar5 * (ulonglong)uVar23);
      uVar23 = (uint)uVar36;
      if (999 < uVar23) {
        uVar23 = 1000;
      }
      uVar29 = (undefined2)uVar23;
      if ((int)(uVar36 >> 0x20) != 0) {
        uVar29 = 1000;
      }
      if ((void *)iVar20 != local_2c8) {
        thunk_memset(piVar27,0,0x1c);
        *piVar27 = (int)local_2c8;
      }
      uVar23 = (uint)*(byte *)(piVar27 + 6);
      iVar22 = *(byte *)((int)piVar27 + 0x19) + 1;
      piVar28 = piVar27 + 1;
      if (uVar23 < 10) {
        uVar23 = uVar23 + 1;
        *(char *)(piVar27 + 6) = (char)uVar23;
      }
      *(undefined2 *)((int)piVar28 + (uint)*(byte *)((int)piVar27 + 0x19) * 2) = uVar29;
      *(char *)((int)piVar27 + 0x19) =
           (char)iVar22 + (char)((uint)((short)iVar22 * 0x199a) >> 0x10) * -10;
      uVar18 = 0;
      uVar16 = 0;
      if (uVar23 < 4) {
LAB_100051bc:
        iVar22 = uVar23 - uVar18;
        puVar14 = (ushort *)((int)piVar27 + uVar18 * 2 + 4);
        do {
          iVar22 = iVar22 + -1;
          uVar16 = uVar16 + *puVar14;
          puVar14 = puVar14 + 1;
        } while (iVar22 != 0);
      }
      else {
        uVar18 = uVar23 & 0xfc;
        auVar34 = (uint128)0x0;
        uVar16 = uVar18;
        do {
          uVar35 = *(undefined8 *)piVar28;
          piVar28 = piVar28 + 2;
          uVar16 = uVar16 - 4;
          auVar34 = PFVectorAddWide(auVar34,uVar35,2,1);
        } while (uVar16 != 0);
        uVar35 = VectorAdd(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),4);
        uVar16 = (int)uVar35 + (int)((ulonglong)uVar35 >> 0x20);
        if (uVar18 != uVar23) goto LAB_100051bc;
      }
      iVar22 = *(int *)(param_1 + 0x510);
      iVar20 = *(int *)(param_1 + 0x354);
      uVar23 = recovered_100033f8(uVar16,uVar23);
      *(uint *)(uVar7 * 0x1b8 + iVar22 + 0x1b4) = uVar23;
      uVar7 = uVar7 + 1;
      uVar18 = src[1];
      iVar22 = *src;
      uVar16 = (uVar18 & 0xffffff) >> 0x10;
      uVar23 = (uVar18 & 7) >> 2;
      if (uVar16 != 0) {
        uVar23 = uVar16;
      }
      *(uint *)(param_1 + 0x580) = uVar23 + *(int *)(param_1 + 0x580);
      iVar8 = src[2] - uVar23;
      if ((uint)src[2] < uVar23) {
        iVar8 = 0;
      }
      *(int *)(param_1 + 0x584) = iVar8 + *(int *)(param_1 + 0x584);
      if ((uVar18 & 1) == 0) {
        local_2d0 = local_2d0 + (uint)CARRY4(local_2d4,uVar21);
        local_2d4 = local_2d4 + uVar21;
      }
      if ((uVar18 & 1) != 0) {
        local_2d8 = local_2d8 + (uint)CARRY4(local_2dc,uVar21);
        local_2dc = local_2dc + uVar21;
      }
      bVar32 = (bool)(iVar22 == iVar20 | bVar32);
      local_2c0 = (void *)local_2b8;
    } while (uVar7 < local_2b8);
    uVar36 = (ulonglong)local_2dc;
    local_2c8 = (void *)(uVar36 * 1000);
    uVar37 = (ulonglong)local_2d4;
    local_2dc = (uint)(uVar37 * 1000);
    local_2d4 = local_2d8 * 1000 + (int)(uVar36 * 1000 >> 0x20);
    local_2d0 = local_2d0 * 1000 + (int)(uVar37 * 1000 >> 0x20);
  }
  *(void **)(param_1 + 0x574) = local_2c0;
  uVar5 = 0;
  if (10 < local_2c0) {
    uVar5 = (int)local_2c0 - 0xb;
  }
  if (uVar5 < *(uint *)(param_1 + 0x524)) {
    *(uint *)(param_1 + 0x524) = uVar5;
  }
  if ((1 < local_2c0) && (pvVar6 = *(void **)(param_1 + 0x510), pvVar6 != (void *)0x0)) {
    local_2c4 = (int *)((uint)local_2c0 >> 1);
    do {
      if (local_2c4 == (int *)0x0) {
        local_2c0 = (void *)((int)local_2c0 - 1);
        if (local_2c0 == (void *)0x0) break;
        pvVar30 = (void *)((int)local_2c0 * 0x1b8 + (int)pvVar6);
        thunk_memcpy(auStack_1d8,pvVar30,0x1b4);
        uVar5 = *(uint *)((int)pvVar30 + 0x1b4);
        thunk_memcpy(pvVar30,pvVar6,0x1b8);
        local_2c4 = (int *)0x0;
      }
      else {
        local_2c4 = (int *)((int)local_2c4 - 1);
        pvVar30 = (void *)((int)local_2c4 * 0x1b8 + (int)pvVar6);
        thunk_memcpy(auStack_1d8,pvVar30,0x1b4);
        uVar5 = *(uint *)((int)pvVar30 + 0x1b4);
      }
      uVar7 = (uint)local_2c4;
      if (local_2c4 < (uint)local_2c0 >> 1) {
        uVar21 = (uint)local_2c4;
        do {
          uVar7 = uVar21 << 1 | 1;
          uVar23 = uVar21 * 2 + 2;
          if ((uVar23 < local_2c0) &&
             (*(uint *)((int)pvVar6 + uVar23 * 0x1b8 + 0x1b4) <
              *(uint *)((int)pvVar6 + uVar7 * 0x1b8 + 0x1b4))) {
            uVar7 = uVar23;
          }
          pvVar30 = (void *)(uVar7 * 0x1b8 + (int)pvVar6);
          if (uVar5 <= *(uint *)((int)pvVar30 + 0x1b4)) {
            uVar7 = uVar21;
            break;
          }
          thunk_memcpy((void *)(uVar21 * 0x1b8 + (int)pvVar6),pvVar30,0x1b8);
          uVar21 = uVar7;
        } while (uVar7 < (uint)local_2c0 >> 1);
      }
      pvVar30 = (void *)(uVar7 * 0x1b8 + (int)pvVar6);
      thunk_memcpy(pvVar30,auStack_1d8,0x1b4);
      *(uint *)((int)pvVar30 + 0x1b4) = uVar5;
    } while( true );
  }
  piVar27 = (int *)(param_1 + 0x538);
  iVar22 = *piVar27;
  puVar9 = (undefined8 *)(param_1 + 0x53c);
  if (!bVar32) {
    *(undefined1 *)(param_1 + 0x6d4) = 0;
    *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x57c);
  uVar5 = 1;
  if (1 < uVar11) {
    uVar5 = uVar11;
  }
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar36 = recovered_10003558(CONCAT44(local_2d0,local_2dc),(ulonglong)uVar5 * (ulonglong)uVar7);
  uVar7 = (uint)uVar36;
  if (999 < uVar7) {
    uVar7 = 1000;
  }
  uVar29 = (undefined2)uVar7;
  if ((int)(uVar36 >> 0x20) != 0) {
    uVar29 = 1000;
  }
  if (iVar22 != 1) {
    thunk_memset(piVar27,0,0x1c);
    *piVar27 = 1;
  }
  iVar22 = *(byte *)(param_1 + 0x551) + 1;
  uVar7 = (uint)*(byte *)(param_1 + 0x550);
  *(undefined2 *)((int)puVar9 + (uint)*(byte *)(param_1 + 0x551) * 2) = uVar29;
  if (uVar7 < 10) {
    uVar7 = uVar7 + 1;
    *(char *)(param_1 + 0x550) = (char)uVar7;
  }
  *(char *)(param_1 + 0x551) = (char)iVar22 + (char)((uint)((short)iVar22 * 0x199a) >> 0x10) * -10;
  uVar23 = 0;
  uVar21 = 0;
  if (uVar7 < 4) {
LAB_100054e0:
    iVar22 = uVar7 - uVar23;
    puVar14 = (ushort *)(param_1 + uVar23 * 2 + 0x53c);
    do {
      iVar22 = iVar22 + -1;
      uVar21 = uVar21 + *puVar14;
      puVar14 = puVar14 + 1;
    } while (iVar22 != 0);
  }
  else {
    uVar23 = uVar7 & 0xfc;
    auVar34 = (uint128)0x0;
    uVar21 = uVar23;
    do {
      uVar35 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar21 = uVar21 - 4;
      auVar34 = PFVectorAddWide(auVar34,uVar35,2,1);
    } while (uVar21 != 0);
    uVar35 = VectorAdd(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),4);
    uVar21 = (int)uVar35 + (int)((ulonglong)uVar35 >> 0x20);
    if (uVar23 != uVar7) goto LAB_100054e0;
  }
  uVar7 = recovered_100033f8(uVar21,uVar7);
  piVar27 = (int *)(param_1 + 0x554);
  iVar22 = *piVar27;
  uVar21 = *(uint *)(param_1 + 0x57c);
  *(uint *)(param_1 + 0x588) = uVar7;
  if (uVar21 < 2) {
    uVar21 = 1;
  }
  uVar36 = recovered_10003558(CONCAT44(local_2d4,local_2c8),(ulonglong)uVar5 * (ulonglong)uVar21);
  uVar5 = (uint)uVar36;
  if (999 < uVar5) {
    uVar5 = 1000;
  }
  uVar29 = (undefined2)uVar5;
  if ((int)(uVar36 >> 0x20) != 0) {
    uVar29 = 1000;
  }
  if (iVar22 != 0) {
    thunk_memset(piVar27,0,0x1c);
    *piVar27 = 0;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x56c);
  iVar22 = *(byte *)(param_1 + 0x56d) + 1;
  if (uVar5 < 10) {
    uVar5 = uVar5 + 1;
    *(char *)(param_1 + 0x56c) = (char)uVar5;
  }
  puVar9 = (undefined8 *)(param_1 + 0x558);
  *(undefined2 *)((int)puVar9 + (uint)*(byte *)(param_1 + 0x56d) * 2) = uVar29;
  *(char *)(param_1 + 0x56d) = (char)iVar22 + (char)((uint)((short)iVar22 * 0x199a) >> 0x10) * -10;
  uVar21 = 0;
  uVar7 = 0;
  if (3 < uVar5) {
    uVar21 = uVar5 & 0xfc;
    auVar34 = (uint128)0x0;
    uVar7 = uVar21;
    do {
      uVar35 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 - 4;
      auVar34 = PFVectorAddWide(auVar34,uVar35,2,1);
    } while (uVar7 != 0);
    uVar35 = VectorAdd(PF_PART8(auVar34, 0),PF_PART8(auVar34, 8),4);
    uVar7 = (int)uVar35 + (int)((ulonglong)uVar35 >> 0x20);
    if (uVar21 == uVar5) goto LAB_10005608;
  }
  iVar22 = uVar5 - uVar21;
  puVar14 = (ushort *)(param_1 + uVar21 * 2 + 0x558);
  do {
    iVar22 = iVar22 + -1;
    uVar7 = uVar7 + *puVar14;
    puVar14 = puVar14 + 1;
  } while (iVar22 != 0);
LAB_10005608:
  uVar7 = recovered_100033f8(uVar7,uVar5);
  uVar5 = 1000 - *(int *)(param_1 + 0x588);
  if (uVar7 < uVar5) {
    uVar5 = uVar7;
  }
  *(uint *)(param_1 + 0x590) = 1000 - (*(int *)(param_1 + 0x588) + uVar5);
  *(uint *)(param_1 + 0x58c) = uVar5;
  thunk_memmove((void *)(param_1 + 0x5b4),(void *)(param_1 + 0x5b5),0x47);
  thunk_memmove((void *)(param_1 + 0x5fc),(void *)(param_1 + 0x5fd),0x47);
  *(char *)(param_1 + 0x5fb) = (char)(*(uint *)(param_1 + 0x588) / 10);
  *(char *)(param_1 + 0x643) = (char)(*(uint *)(param_1 + 0x58c) / 10);
  if (((*(char *)(param_1 + 0x571) == '\x01') && (uVar11 != 0)) &&
     (local_2b0 == *(int *)(param_1 + 0x474))) {
    uVar7 = *(uint *)(param_1 + 0x4a8);
    uVar21 = *(uint *)(param_1 + 0x4ac);
    uVar5 = local_27c - uVar7;
    bVar32 = (uint)(uVar7 <= local_27c) <= local_278 - uVar21;
    iVar22 = local_278 - (uVar21 + (uVar7 > local_27c));
    if (local_278 <= uVar21 && bVar32) {
      uVar5 = 0;
    }
    if (local_278 <= uVar21 && bVar32) {
      iVar22 = 0;
    }
    uVar7 = *(uint *)(param_1 + 0x4a0);
    uVar21 = *(uint *)(param_1 + 0x4a4);
    uVar36 = recovered_10003558(CONCAT44((int)((ulonglong)uVar5 * 0x12 >> 0x20) + iVar22 * 0x12,
                                         (int)((ulonglong)uVar5 * 0x12)),(ulonglong)uVar11);
    uVar10 = (undefined4)uVar36;
    if ((int)(uVar36 >> 0x20) != 0) {
      uVar10 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x598) = uVar10;
    uVar5 = local_284 - uVar7;
    bVar32 = (uint)(uVar7 <= local_284) <= local_280 - uVar21;
    iVar22 = local_280 - (uVar21 + (uVar7 > local_284));
    if (local_280 <= uVar21 && bVar32) {
      uVar5 = 0;
    }
    if (local_280 <= uVar21 && bVar32) {
      iVar22 = 0;
    }
    uVar36 = recovered_10003558(CONCAT44((int)((ulonglong)uVar5 * 0x12 >> 0x20) + iVar22 * 0x12,
                                         (int)((ulonglong)uVar5 * 0x12)),(ulonglong)uVar11);
    uVar10 = (undefined4)uVar36;
    uVar5 = *(uint *)(param_1 + 0x4b8);
    if ((int)(uVar36 >> 0x20) != 0) {
      uVar10 = 0xffffffff;
    }
    uVar21 = *(uint *)(param_1 + 0x4bc);
    uVar7 = local_26c - uVar5;
    iVar22 = local_268 - (uVar21 + (uVar5 > local_26c));
    if (local_268 <= uVar21 && (uint)(uVar5 <= local_26c) <= local_268 - uVar21) {
      uVar7 = 0;
      iVar22 = 0;
    }
    uVar36 = recovered_10003558(CONCAT44((int)((ulonglong)uVar7 * 0x12 >> 0x20) + iVar22 * 0x12,
                                         (int)((ulonglong)uVar7 * 0x12)),(ulonglong)uVar11);
    uVar7 = (uint)(uVar36 >> 0x20);
    uVar21 = *(uint *)(param_1 + 0x4b0);
    uVar23 = *(uint *)(param_1 + 0x4b4);
    uVar5 = local_274 - uVar21;
    iVar22 = local_270 - (uVar23 + (uVar21 > local_274));
    if (local_270 <= uVar23 && (uint)(uVar21 <= local_274) <= local_270 - uVar23) {
      uVar5 = 0;
      iVar22 = 0;
    }
    puVar31 = (ulonglong *)(param_1 + 0x5ac);
    uVar23 = *(uint *)puVar31;
    uVar21 = *(uint *)(param_1 + 0x5b0);
    uVar3 = *puVar31;
    *(ulonglong *)(param_1 + 0x5a4) = uVar36;
    uVar37 = recovered_10003558(CONCAT44((int)((ulonglong)uVar5 * 0x12 >> 0x20) + iVar22 * 0x12,
                                         (int)((ulonglong)uVar5 * 0x12)),(ulonglong)uVar11);
    uVar5 = (uint)(uVar37 >> 0x20);
    *(ulonglong *)(param_1 + 0x59c) = uVar37;
    *(undefined4 *)(param_1 + 0x594) = uVar10;
    if ((uVar21 <= uVar5 && (uint)((uint)uVar37 <= uVar23) <= uVar21 - uVar5) ||
       (uVar37 = uVar3, uVar21 <= uVar7 && (uint)((uint)uVar36 <= uVar23) <= uVar21 - uVar7)) {
      uVar5 = (uint)(uVar37 >> 0x20);
      if (uVar5 <= uVar7 && (uint)((uint)uVar36 <= (uint)uVar37) <= uVar5 - uVar7) {
        uVar37 = uVar36;
      }
      *puVar31 = uVar37;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x598) = 0;
    *(undefined4 *)(param_1 + 0x594) = 0;
    *(undefined4 *)(param_1 + 0x59c) = 0;
    *(undefined4 *)(param_1 + 0x5a0) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    *(undefined4 *)(param_1 + 0x5a4) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    *(undefined4 *)(param_1 + 0x5a8) =
         *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  }
  thunk_memmove((void *)(param_1 + 0x644),(void *)(param_1 + 0x645),0x47);
  thunk_memmove((void *)(param_1 + 0x68c),(void *)(param_1 + 0x68d),0x47);
  uVar19 = 0;
  puVar31 = (ulonglong *)(param_1 + 0x5ac);
  iVar22 = *(int *)puVar31;
  iVar20 = *(int *)(param_1 + 0x5b0);
  uVar36 = *puVar31;
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x59c) != 0 || *(int *)(param_1 + 0x5a0) != 0) &&
     (uVar4 = 0, iVar22 != 0 || iVar20 != 0)) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x59c) * 100;
    uVar37 = recovered_10003558(CONCAT44(*(int *)(param_1 + 0x5a0) * 100 +
                                         (int)((ulonglong)lVar1 >> 0x20),(int)lVar1),*puVar31);
    uVar5 = (uint)uVar37;
    if (99 < uVar5) {
      uVar5 = 100;
    }
    uVar4 = (undefined1)uVar5;
    if ((int)(uVar37 >> 0x20) != 0) {
      uVar4 = 100;
    }
  }
  *(undefined1 *)(param_1 + 0x68b) = uVar4;
  bVar32 = iVar22 == 0 && iVar20 == 0;
  if (iVar22 != 0 || iVar20 != 0) {
    bVar32 = *(uint *)(param_1 + 0x5a4) == 0 && *(int *)(param_1 + 0x5a8) == 0;
  }
  if (!bVar32) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x5a4) * 100;
    uVar36 = recovered_10003558(CONCAT44(*(int *)(param_1 + 0x5a8) * 100 +
                                         (int)((ulonglong)lVar1 >> 0x20),(int)lVar1),uVar36);
    uVar5 = (uint)uVar36;
    if (99 < uVar5) {
      uVar5 = 100;
    }
    uVar19 = (undefined1)uVar5;
    if ((int)(uVar36 >> 0x20) != 0) {
      uVar19 = 100;
    }
  }
  *(undefined1 *)(param_1 + 0x6d3) = uVar19;
  thunk_memcpy((void *)(param_1 + 0x3a4),local_220,0x44);
  thunk_memcpy((void *)(param_1 + 0x360),local_220,0x44);
  *(int *)(param_1 + 0x348) = local_220[0];
  thunk_memcpy((void *)(param_1 + 0x474),&local_2b0,0x8c);
  *(undefined1 *)(param_1 + 0x570) = 1;
  *(byte *)(param_1 + 0x571) = local_2ac & 1;
  if (*(int *)(param_1 + 0x520) != 0) {
    iVar22 = 0;
    thunk_memset(*(void **)(param_1 + 0x514),0,*(int *)(param_1 + 0x520) << 4);
    iVar20 = *(int *)(param_1 + 0x574);
    if (iVar20 != 0) {
      iVar12 = *(int *)(param_1 + 0x520);
      iVar8 = 0;
      do {
        bVar32 = -iVar8 != iVar12;
        if (bVar32) {
          puVar25 = (undefined4 *)(*(int *)(param_1 + 0x510) + iVar22);
          uVar10 = *puVar25;
          iVar22 = iVar22 + 0x1b8;
          uVar13 = puVar25[4];
          uVar26 = puVar25[5];
          puVar15 = (undefined1 *)(*(int *)(param_1 + 0x514) + iVar8 * -0x10);
          *puVar15 = 1;
          iVar8 = iVar8 + -1;
          *(undefined4 *)(puVar15 + 4) = uVar10;
          *(undefined4 *)(puVar15 + 8) = uVar13;
          *(undefined4 *)(puVar15 + 0xc) = uVar26;
        }
      } while (bVar32 && -iVar8 != iVar20);
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
#undef UINT_4001084c
#undef UINT_40010850
#undef UINT_400108b8
#undef UINT_40010904
#undef UINT_40010908
#undef UINT_40010910
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2c8
#undef local_2c4
#undef local_2c0
#undef local_2b8
#undef local_2b4
#undef local_2b0
#undef local_2ac
#undef local_284
#undef local_280
#undef local_27c
#undef local_278
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_220
#undef auStack_1d8

#undef DAT_1000bd67
#define DAT_1000bd67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20bU)))
#undef DAT_1000bd70
#define DAT_1000bd70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
#undef DAT_1000bd72
#define DAT_1000bd72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216U)))
#undef DAT_1000bd75
#define DAT_1000bd75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#undef DAT_1000bd78
#define DAT_1000bd78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#undef DAT_1000bf50
#define DAT_1000bf50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_1000bf58
#define DAT_1000bf58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3fcU)))
#undef DAT_1000bf60
#define DAT_1000bf60 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
#undef PTR_DAT_10010024
#define PTR_DAT_10010024 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x44c8U)))
#undef PTR_str_1000bd04_10010004
#define PTR_str_1000bd04_10010004 (*(char * *)(((uintptr_t)pf_module_state + 0x44a8U)))
#undef str_1000bca6
#define str_1000bca6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_1000bd6a
#define str_1000bd6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#undef str_1000bd7b
#define str_1000bd7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21fU)))
#undef str_1000bd8a
#define str_1000bd8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#undef str_1000bddb
#define str_1000bddb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_1000bdee
#define str_1000bdee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_1000be02
#define str_1000be02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_1000be2f
#define str_1000be2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d3U)))
#undef str_1000be3e
#define str_1000be3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e2U)))
#undef str_1000be4f
#define str_1000be4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_1000be5d
#define str_1000be5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x301U)))
#undef str_1000be6c
#define str_1000be6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_1000be7a
#define str_1000be7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_1000be8b
#define str_1000be8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32fU)))
#undef str_1000be9d
#define str_1000be9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x341U)))
#undef str_1000beb2
#define str_1000beb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x356U)))
#undef str_1000bed3
#define str_1000bed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x377U)))
#define local_1a8 (*(uint *)(pf_stack_frame + 40))
#define local_1a4 (*(uint *)(pf_stack_frame + 44))
#define local_1a0 (*(uint *)(pf_stack_frame + 48))
#define local_19c (*(uint *)(pf_stack_frame + 52))
#define local_198 (*(uint *)(pf_stack_frame + 56))
#define local_194 (*(uint *)(pf_stack_frame + 60))
#define local_190 (*(uint *)(pf_stack_frame + 64))
#define acStack_15c (*(char (*)[348])(pf_stack_frame + 116))
#define auStack_148 (*(undefined1 (*)[328])(pf_stack_frame + 136))
#define local_180 (*(uint *)(pf_stack_frame + 80))
#define acStack_a0 (*(char (*)[160])(pf_stack_frame + 304))
#define local_17c (*(uint *)(pf_stack_frame + 84))
#define local_178 (*(uint *)(pf_stack_frame + 88))
#define iStack_5c (*(int *)(pf_stack_frame + 372))
#define local_170 (*(int *)(pf_stack_frame + 96))
#define local_16c (*(int *)(pf_stack_frame + 100))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 380))
#define local_168 (*(int *)(pf_stack_frame + 104))
#define local_164 (*(int *)(pf_stack_frame + 108))
#define local_14c (*(char *)(pf_stack_frame + 132))
#define local_60 (*(undefined4 *)(pf_stack_frame + 368))
#define local_58 (*(undefined4 *)(pf_stack_frame + 376))
#define in_stack_fffffe4c (*(undefined * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a3c
 */

void recovered_10005a3c(uint param_1)

{
  unsigned char pf_stack_frame[496] __attribute__((aligned(16))) = {0};

  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  void *pixels;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  ulonglong uVar33;

  uVar20 = DAT_1000c07c;
  uVar13 = DAT_1000c078;
  local_190 = 0;
  uVar3 = thunk_terror_ui_colour(0);
  uVar8 = DAT_1000c07c;
  uVar7 = DAT_1000c078;
  uVar11 = 0;
  if ((int)DAT_1000c07c < 0) {
    uVar11 = DAT_1000c07c;
  }
  uVar26 = 0;
  if ((int)DAT_1000c078 < 0) {
    uVar26 = DAT_1000c078;
  }
  uVar17 = DAT_1000c07c;
  if ((int)uVar20 < (int)DAT_1000c07c) {
    uVar17 = uVar20;
  }
  if ((int)uVar20 < 0) {
    uVar17 = 0;
  }
  uVar23 = DAT_1000c078;
  if ((int)uVar13 < (int)DAT_1000c078) {
    uVar23 = uVar13;
  }
  if ((int)uVar13 < 0) {
    uVar23 = 0;
  }
  if ((int)uVar11 < (int)uVar17) {
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar4 = DAT_1000c078 * (uintptr_t)uVar11 * 4;
    uVar20 = DAT_1000c078;
    do {
      uVar13 = uVar26;
      if ((int)uVar26 < (int)uVar23) {
        do {
          uVar20 = param_1;
          if ((((param_1 != 0) && ((int)uVar11 < (int)uVar8)) &&
              (uVar20 = uVar13 | uVar11, -1 < (int)uVar20)) &&
             ((uVar20 = *(uint *)(param_1 + 0x340), uVar20 != 0 && ((int)uVar13 < (int)uVar7)))) {
            *(char *)(uVar20 + iVar4 + uVar13 * 4) = (char)(uVar3 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar13 * 4 + 1) = (char)(uVar3 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar13 * 4 + 2) = (char)uVar3;
            uVar20 = *(int *)(param_1 + 0x340) + iVar4 + uVar13 * 4;
            *(undefined1 *)(uVar20 + 3) = 0xff;
          }
          uVar13 = uVar13 + 1;
        } while (uVar23 != uVar13);
      }
      uVar11 = uVar11 + 1;
      iVar4 = iVar4 + iVar19;
    } while (uVar11 != uVar17);
  }
  bVar31 = param_1 != 0;
  if (bVar31) {
    uVar20 = *(uint *)(param_1 + 0x354);
  }
  if (bVar31 && uVar20 != 0xffffffff) {
    uVar8 = *(uint *)(param_1 + 0x574);
  }
  if ((bVar31 && uVar20 != 0xffffffff) && uVar8 != 0) {
    puVar25 = *(uint **)(param_1 + 0x510);
    do {
      if (*puVar25 == uVar20) {
        local_194 = (uint)(uVar20 != 0);
        local_190 = 1;
        goto LAB_10005be8;
      }
      uVar8 = uVar8 - 1;
      puVar25 = puVar25 + 0x6e;
    } while (uVar8 != 0);
  }
  local_194 = 0;
LAB_10005be8:
  uVar11 = thunk_terror_ui_colour(0x15);
  uVar3 = thunk_terror_ui_colour(0x2d);
  uVar8 = DAT_1000c07c;
  uVar20 = DAT_1000c078;
  uVar26 = DAT_1000c078 & ~((int)DAT_1000c078 >> 0x1f);
  local_170 = 0;
  iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
  uVar13 = 0;
  if ((int)DAT_1000c078 < 0) {
    uVar13 = DAT_1000c078;
  }
  uVar17 = 0;
  do {
    uVar5 = uVar17 + 1;
    uVar23 = uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar23 = uVar5;
    }
    if ((int)uVar17 < (int)uVar8) {
      iVar12 = 0x58 - uVar17;
      iVar6 = uVar17 * ((uVar3 & 0xffffff) >> 0x10);
      iVar9 = uVar17 * ((uVar3 & 0xffff) >> 8);
      iVar18 = uVar17 * (uVar3 & 0xff);
      iVar4 = local_170;
      do {
        uVar10 = uVar13;
        if ((int)uVar13 < (int)uVar26) {
          do {
            if (((param_1 != 0) && ((int)uVar17 < (int)uVar8)) &&
               ((-1 < (int)uVar10 &&
                ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar10 < (int)uVar20)))))) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar10 * 4) =
                   (char)((iVar12 * ((uVar11 & 0xffffff) >> 0x10) + iVar6 & 0xffff) / 0x58);
              *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar10 * 4 + 1) =
                   (char)((iVar12 * ((uVar11 & 0xffff) >> 8) + iVar9 & 0xffff) / 0x58);
              *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar10 * 4 + 2) =
                   (char)((iVar12 * (uVar11 & 0xff) + iVar18 & 0xffff) / 0x58);
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar4 + uVar10 * 4 + 3) = 0xff;
            }
            uVar10 = uVar10 + 1;
          } while (uVar26 != uVar10);
        }
        uVar17 = uVar17 + 1;
        iVar4 = iVar4 + iVar19;
      } while (uVar17 != uVar23);
    }
    local_170 = local_170 + iVar19;
    uVar17 = uVar5;
  } while (uVar5 != 0x58);
  uVar11 = thunk_terror_ui_colour(3);
  uVar8 = DAT_1000c078;
  uVar13 = DAT_1000c078;
  if (-1 < (int)DAT_1000c078) {
    uVar13 = 0;
  }
  uVar3 = DAT_1000c078;
  if ((int)uVar20 < (int)DAT_1000c078) {
    uVar3 = uVar20;
  }
  if ((int)uVar20 < 0) {
    uVar3 = 0;
  }
  if ((0x57 < (int)DAT_1000c07c) && ((int)uVar13 < (int)uVar3)) {
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x15c;
    do {
      if ((((param_1 != 0) && (-1 < (int)uVar13)) && (*(int *)(param_1 + 0x340) != 0)) &&
         ((int)uVar13 < (int)uVar8)) {
        *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4) = (char)(uVar11 >> 0x10);
        *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 1) = (char)(uVar11 >> 8);
        *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 2) = (char)uVar11;
        *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar13 * 4 + 3) = 0xff;
      }
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
  }
  uVar3 = 0xc;
  recovered_1000a0c8(param_1,0x10,0xc,0x4c,0x12,((uintptr_t)pf_module_state + 0x195U),local_194);
  recovered_1000a0c8(param_1,0x10,0x22,0x4c,0x12,((uintptr_t)pf_module_state + 0x19aU),local_190);
  recovered_1000a0c8(param_1,0x10,0x38,0x4c,0x12,((uintptr_t)pf_module_state + 0x1a0U),local_190);
  uVar11 = thunk_terror_ui_colour(0x1f);
  uVar8 = DAT_1000c07c;
  uVar20 = DAT_1000c078;
  uVar13 = DAT_1000c07c;
  if (0x49 < (int)DAT_1000c07c) {
    uVar13 = 0x4a;
  }
  uVar26 = DAT_1000c078;
  if (0x67 < (int)DAT_1000c078) {
    uVar26 = 0x68;
  }
  uVar17 = uVar7 - 0x10;
  if ((int)DAT_1000c078 <= (int)(uVar7 - 0x10)) {
    uVar17 = DAT_1000c078;
  }
  if ((int)uVar7 < 0x10) {
    uVar17 = 0;
  }
  if (0xc < (int)DAT_1000c07c) {
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x30;
    iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar23 = uVar26;
      if ((int)uVar26 < (int)uVar17) {
        do {
          if (((param_1 != 0) && ((int)uVar3 < (int)uVar8)) &&
             ((-1 < (int)uVar23 && ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar23 < (int)uVar20)))
              ))) {
            *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar23 * 4) = (char)(uVar11 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar23 * 4 + 1) = (char)(uVar11 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar19 + uVar23 * 4 + 2) = (char)uVar11;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar19 + uVar23 * 4 + 3) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar17 != uVar23);
      }
      uVar3 = uVar3 + 1;
      iVar19 = iVar19 + iVar4;
    } while (uVar3 != uVar13);
  }
  uVar20 = thunk_terror_ui_colour(3);
  recovered_1000a454(param_1,0x68,0xc,uVar7 - 0x78,0x3e,
                     uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
  uVar20 = thunk_terror_ui_colour(1);
  recovered_1000a86c(param_1,0x70,0x27,param_1 + 0x6d4,
                     uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,
                     uVar7 - 0x88);
  uVar20 = DAT_1000c078;
  uVar11 = thunk_terror_ui_colour(0x1f);
  uVar13 = DAT_1000c07c;
  uVar8 = DAT_1000c078;
  uVar3 = 0x6a;
  uVar7 = 0x156;
  if ((int)DAT_1000c07c < 0x156) {
    uVar7 = DAT_1000c07c;
  }
  uVar26 = uVar20 - 0x10;
  if ((int)DAT_1000c078 <= (int)(uVar20 - 0x10)) {
    uVar26 = DAT_1000c078;
  }
  if ((int)uVar20 < 0x10) {
    uVar26 = 0;
  }
  uVar17 = 0x10;
  if ((int)DAT_1000c078 < 0x10) {
    uVar17 = DAT_1000c078;
  }
  if (0x6a < (int)DAT_1000c07c) {
    iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x1a8;
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar23 = uVar17;
      if ((int)uVar17 < (int)uVar26) {
        do {
          if ((((param_1 != 0) && ((int)uVar3 < (int)uVar13)) && (-1 < (int)uVar23)) &&
             ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar23 < (int)uVar8)))) {
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4) = (char)(uVar11 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 1) = (char)(uVar11 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 2) = (char)uVar11;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 3) = 0xff;
          }
          uVar23 = uVar23 + 1;
        } while (uVar26 != uVar23);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + iVar19;
    } while (uVar3 != uVar7);
  }
  uVar8 = thunk_terror_ui_colour(3);
  recovered_1000a454(param_1,0x10,0x6a,uVar20 - 0x20,0xec,
                     uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10);
  uVar11 = thunk_terror_ui_colour(0x2a);
  uVar13 = DAT_1000c07c;
  uVar8 = DAT_1000c078;
  uVar7 = 0x7d;
  if ((int)DAT_1000c07c < 0x7d) {
    uVar7 = DAT_1000c07c;
  }
  uVar26 = uVar20 - 0x11;
  uVar3 = DAT_1000c078;
  if (0x10 < (int)DAT_1000c078) {
    uVar3 = 0x11;
  }
  uVar17 = DAT_1000c078;
  if ((int)uVar26 < (int)DAT_1000c078) {
    uVar17 = uVar26;
  }
  if ((int)uVar20 < 0x11) {
    uVar17 = 0;
  }
  if (0x6b < (int)DAT_1000c07c) {
    iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x1ac;
    uVar23 = 0x6b;
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar5 = uVar3;
      if ((int)uVar3 < (int)uVar17) {
        do {
          if (((param_1 != 0) && ((int)uVar23 < (int)uVar13)) &&
             ((-1 < (int)uVar5 && ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar5 < (int)uVar8))))))
          {
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar5 * 4) = (char)(uVar11 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar5 * 4 + 1) = (char)(uVar11 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar5 * 4 + 2) = (char)uVar11;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar4 + uVar5 * 4 + 3) = 0xff;
          }
          uVar5 = uVar5 + 1;
        } while (uVar17 != uVar5);
      }
      uVar23 = uVar23 + 1;
      iVar4 = iVar4 + iVar19;
    } while (uVar23 != uVar7);
  }
  iVar19 = 0;
  do {
    uVar8 = 1;
    if (iVar19 == 2) {
      uVar8 = 4;
    }
    puVar21 = (&PTR_str_1000bd04_10010004)[iVar19];
    iVar4 = (&DAT_1000bf60)[iVar19];
    uVar8 = thunk_terror_ui_colour(uVar8);
    recovered_1000a86c(param_1,iVar4 + 0x13,0x70,(int)puVar21,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x78);
    if (iVar19 != 0) {
      uVar11 = thunk_terror_ui_colour(0x15);
      uVar13 = DAT_1000c07c;
      uVar8 = DAT_1000c078;
      uVar7 = 0x7d;
      if ((int)DAT_1000c07c < 0x7d) {
        uVar7 = DAT_1000c07c;
      }
      uVar17 = iVar4 + 0xe;
      uVar3 = iVar4 + 0xfU;
      if ((int)DAT_1000c078 <= (int)(iVar4 + 0xfU)) {
        uVar3 = DAT_1000c078;
      }
      uVar23 = DAT_1000c078;
      if ((int)uVar17 < (int)DAT_1000c078) {
        uVar23 = uVar17;
      }
      if (0x6b < (int)DAT_1000c07c) {
        iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x1ac;
        iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
        uVar5 = 0x6b;
        do {
          uVar10 = uVar23;
          if ((int)uVar17 < (int)uVar8) {
            do {
              if ((((param_1 != 0) && ((int)uVar5 < (int)uVar13)) && (-1 < (int)uVar10)) &&
                 ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar10 < (int)uVar8)))) {
                *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4) = (char)(uVar11 >> 0x10);
                *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 1) = (char)(uVar11 >> 8);
                *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 2) = (char)uVar11;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar10 * 4 + 3) = 0xff;
              }
              uVar10 = uVar10 + 1;
            } while (uVar3 != uVar10);
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + iVar4;
        } while (uVar5 != uVar7);
      }
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 8);
  local_16c = 0x1f0;
  uVar8 = 0;
  do {
    uVar13 = *(int *)(param_1 + 0x524) + uVar8;
    local_178 = uVar13 * 0x1b8;
    if ((uVar13 < *(uint *)(param_1 + 0x574)) &&
       (*(int *)(*(int *)(param_1 + 0x510) + local_178) == *(int *)(param_1 + 0x354))) {
      local_180 = 0xe;
      uVar7 = 0x2b;
    }
    else {
      uVar7 = 0x2c;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0x1f;
      }
      local_180 = 1;
    }
    uVar23 = uVar8 * 0x12 + 0x7c;
    local_17c = uVar8 * 0x12;
    uVar17 = thunk_terror_ui_colour(uVar7);
    uVar11 = DAT_1000c07c;
    uVar7 = DAT_1000c078;
    uVar3 = DAT_1000c078;
    if (0x10 < (int)DAT_1000c078) {
      uVar3 = 0x11;
    }
    uVar5 = local_17c + 0x8e;
    if ((int)DAT_1000c07c <= (int)(local_17c + 0x8e)) {
      uVar5 = DAT_1000c07c;
    }
    uVar10 = DAT_1000c078;
    if ((int)uVar26 < (int)DAT_1000c078) {
      uVar10 = uVar26;
    }
    if ((int)uVar20 < 0x11) {
      uVar10 = 0;
    }
    if ((int)uVar23 < (int)DAT_1000c07c) {
      iVar4 = DAT_1000c078 * local_16c;
      iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      do {
        uVar28 = uVar3;
        if ((int)uVar3 < (int)uVar10) {
          do {
            if ((-1 < (int)uVar28) && (*(int *)(param_1 + 0x340) != 0)) {
              bVar32 = SBORROW4(uVar7,uVar28);
              iVar6 = uVar7 - uVar28;
              bVar31 = uVar7 == uVar28;
              if ((int)uVar28 < (int)uVar7) {
                bVar32 = SBORROW4(uVar11,uVar23);
                iVar6 = uVar11 - uVar23;
                bVar31 = uVar11 == uVar23;
              }
              if (!bVar31 && iVar6 < 0 == bVar32) {
                *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar28 * 4) = (char)(uVar17 >> 0x10);
                *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar28 * 4 + 1) = (char)(uVar17 >> 8);
                *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar28 * 4 + 2) = (char)uVar17;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar4 + uVar28 * 4 + 3) = 0xff;
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar10 != uVar28);
        }
        uVar23 = uVar23 + 1;
        iVar4 = iVar4 + iVar19;
      } while (uVar23 != uVar5);
    }
    if (uVar13 < *(uint *)(param_1 + 0x574)) {
      iVar19 = *(int *)(param_1 + 0x510);
      uVar7 = thunk_terror_ui_colour(local_180);
      puVar25 = (uint *)(iVar19 + local_178);
      thunk_snprintf(acStack_15c,0x40,&DAT_1000bd67,*puVar25);
      uVar3 = uVar7 & 0xff00;
      uVar13 = uVar7 << 0x10;
      uVar7 = (uVar7 & 0xff0000) >> 0x10;
      local_1a8 = local_1a8 & 0xff000000 | uVar3 | uVar13 & 0xffffff | uVar7;
      iVar19 = local_17c + 0x81;
      recovered_1000a86c(param_1,0x25,iVar19,(int)acStack_15c,local_1a8,0x46);
      local_1a4 = local_1a4 & 0xff000000 | uVar3 | uVar13 & 0xffffff | uVar7;
      recovered_1000a86c(param_1,0x6d,iVar19,(int)(puVar25 + 0x10),local_1a4,0xb4);
      thunk_snprintf(acStack_15c,0x40,str_1000bd6a,puVar25[0x6d] / 10,puVar25[0x6d] % 10);
      local_1a0 = local_1a0 & 0xff000000 | uVar3 | uVar13 & 0xffffff | uVar7;
      recovered_1000a86c(param_1,0x140,iVar19,(int)acStack_15c,local_1a0,0x2a);
      uVar17 = puVar25[2];
      uVar23 = (puVar25[1] & 0xffffff) >> 0x10;
      uVar11 = (puVar25[1] & 7) >> 2;
      if (uVar23 != 0) {
        uVar11 = uVar23;
      }
      thunk_snprintf(acStack_15c,0x40,&DAT_1000bd67,uVar11);
      local_19c = local_19c & 0xff000000 | uVar3 | uVar13 & 0xffffff | uVar7;
      recovered_1000a86c(param_1,0x18e,iVar19,(int)acStack_15c,local_19c,0x2e);
      uVar23 = uVar17 - uVar11;
      if (uVar17 < uVar11) {
        uVar23 = 0;
      }
      thunk_snprintf(acStack_15c,0x40,&DAT_1000bd67,uVar23);
      local_198 = local_198 & 0xff000000 | uVar3 | uVar13 & 0xffffff | uVar7;
      recovered_1000a86c(param_1,0x1e8,iVar19,(int)acStack_15c,local_198,0x2e);
      uVar11 = puVar25[8];
      uVar23 = 0x3fffffff;
      uVar17 = puVar25[9];
      iVar4 = 0x1e;
      if (-uVar17 < (uint)(uVar11 < 0x40000000)) {
        iVar4 = 0x14;
        uVar23 = 0xfffff;
        puVar21 = &DAT_1000bd75;
        if ((uint)(uVar11 < 0x100000) <= -uVar17) goto LAB_100069dc;
        if (uVar17 != 0 || uVar17 < (0x3ff < uVar11)) {
          uVar23 = 0x3ff;
          iVar4 = 10;
          puVar21 = &DAT_1000bd78;
          goto LAB_100069dc;
        }
        puVar14 = &DAT_1000bd70;
        pcVar15 = str_1000bd8a;
      }
      else {
        puVar21 = &DAT_1000bd72;
LAB_100069dc:
        lVar2 = (ulonglong)(uVar23 & uVar11) * 100;
        local_190 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar23 = uVar17 >> iVar4;
        uVar5 = iVar4 - 0x20;
        if (-1 < (int)uVar5) {
          uVar23 = 0;
        }
        puVar14 = (undefined *)((uint)lVar2 >> iVar4 | local_190 << (0x20U - iVar4 & 0xff));
        if (-1 < (int)uVar5) {
          puVar14 = (undefined *)(local_190 >> (uVar5 & 0xff));
        }
        local_190 = local_190 >> iVar4;
        if (-1 < (int)uVar5) {
          local_190 = 0;
        }
        uVar11 = uVar11 >> iVar4 | uVar17 << (0x20U - iVar4 & 0xff);
        if (-1 < (int)uVar5) {
          uVar11 = uVar17 >> (uVar5 & 0xff);
        }
        pcVar15 = str_1000bd7b;
        uVar17 = uVar23;
        in_stack_fffffe4c = puVar21;
      }
      thunk_snprintf(acStack_15c,0x40,pcVar15,uVar11,uVar17,(uint)puVar14,local_190,
                         (uint)in_stack_fffffe4c);
      uVar7 = uVar3 | uVar13 & 0xffffff | uVar7;
      recovered_1000a86c(param_1,0x22a,iVar19,(int)acStack_15c,uVar7,0x54);
      uVar13 = puVar25[10];
      uVar3 = 0x3fffffff;
      uVar11 = puVar25[0xb];
      iVar4 = 0x1e;
      if (-uVar11 < (uint)(uVar13 < 0x40000000)) {
        puVar21 = &DAT_1000bd75;
        iVar4 = 0x14;
        uVar3 = 0xfffff;
        if ((uint)(uVar13 < 0x100000) <= -uVar11) goto LAB_10006b08;
        if (uVar11 != 0 || uVar11 < (0x3ff < uVar13)) {
          uVar3 = 0x3ff;
          iVar4 = 10;
          puVar21 = &DAT_1000bd78;
          goto LAB_10006b08;
        }
        puVar14 = &DAT_1000bd70;
        pcVar15 = str_1000bd8a;
      }
      else {
        puVar21 = &DAT_1000bd72;
LAB_10006b08:
        lVar2 = (ulonglong)(uVar3 & uVar13) * 100;
        local_190 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar3 = uVar11 >> iVar4;
        uVar17 = iVar4 - 0x20;
        if (-1 < (int)uVar17) {
          uVar3 = 0;
        }
        puVar14 = (undefined *)((uint)lVar2 >> iVar4 | local_190 << (0x20U - iVar4 & 0xff));
        if (-1 < (int)uVar17) {
          puVar14 = (undefined *)(local_190 >> (uVar17 & 0xff));
        }
        local_190 = local_190 >> iVar4;
        if (-1 < (int)uVar17) {
          local_190 = 0;
        }
        uVar13 = uVar13 >> iVar4 | uVar11 << (0x20U - iVar4 & 0xff);
        if (-1 < (int)uVar17) {
          uVar13 = uVar11 >> (uVar17 & 0xff);
        }
        pcVar15 = str_1000bd7b;
        uVar11 = uVar3;
        in_stack_fffffe4c = puVar21;
      }
      thunk_snprintf(acStack_15c,0x40,pcVar15,uVar13,uVar11,(uint)puVar14,local_190,
                         (uint)in_stack_fffffe4c);
      recovered_1000a86c(param_1,0x28a,iVar19,(int)acStack_15c,uVar7,0x60);
      recovered_1000a86c(param_1,0x2f7,iVar19,(int)(puVar25 + 0x28),uVar7,0x60);
    }
    pcVar15 = acStack_15c;
    uVar8 = uVar8 + 1;
    local_16c = local_16c + 0x48;
  } while (uVar8 != 0xb);
  iVar19 = *(uint *)(param_1 + 0x574) - 0xb;
  if (*(uint *)(param_1 + 0x574) < 0xb) {
    iVar19 = 0;
  }
  PF_PART8(local_60,0) = CONCAT44(iVar19,(int)DAT_1000bf50);
  PF_PART8(local_58,0) = CONCAT44((int)((ulonglong)DAT_1000bf58 >> 0x20),*(undefined4 *)(param_1 + 0x524));
  local_170 = 0;
  thunk_pf_app_scrollbars_layout(0x10,0x7c,DAT_1000c078 - 0x20,0xc6,&local_60,(void *)0x0,pcVar15);
  if (local_14c != '\0') {
    terror_ui_scrollbar_draw((void *)param_1,auStack_148,0x20);
  }
  uVar20 = 0;
  do {
    uVar8 = 2;
    if (uVar20 == *(uint *)(param_1 + 0x344)) {
      uVar8 = 0x2b;
    }
    uVar7 = thunk_terror_ui_colour(uVar8);
    uVar13 = DAT_1000c07c;
    uVar8 = DAT_1000c078;
    iVar19 = 0xda;
    if (2 < uVar20) {
      iVar19 = 0xee;
    }
    if (uVar20 < 2) {
      iVar19 = 0xc6;
    }
    uVar11 = uVar20 * 0x74 + iVar19;
    iVar4 = 0x74;
    if (uVar20 == 1) {
      iVar4 = 0x88;
    }
    uVar3 = DAT_1000c07c;
    if (0x17b < (int)DAT_1000c07c) {
      uVar3 = 0x17c;
    }
    uVar26 = DAT_1000c078;
    if ((int)uVar11 < (int)DAT_1000c078) {
      uVar26 = uVar11;
    }
    if (0x164 < (int)DAT_1000c07c) {
      uVar23 = 0x164;
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x590;
      uVar17 = iVar19 + iVar4 + local_170;
      iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      if ((int)DAT_1000c078 < (int)uVar17) {
        uVar17 = DAT_1000c078;
      }
      do {
        uVar5 = uVar26;
        if ((int)uVar11 < (int)uVar8) {
          do {
            if (((((int)uVar23 < (int)uVar13) && (-1 < (int)uVar5)) &&
                (*(int *)(param_1 + 0x340) != 0)) && ((int)uVar5 < (int)uVar8)) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar5 * 4) = (char)(uVar7 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar5 * 4 + 1) = (char)(uVar7 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar5 * 4 + 2) = (char)uVar7;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar5 * 4 + 3) = 0xff;
            }
            uVar5 = uVar5 + 1;
          } while (uVar17 != uVar5);
        }
        uVar23 = uVar23 + 1;
        iVar6 = iVar6 + iVar19;
      } while (uVar23 != uVar3);
    }
    uVar8 = thunk_terror_ui_colour(3);
    local_17c = local_17c & 0xff000000 |
                uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10;
    recovered_1000a454(param_1,uVar11,0x164,iVar4,0x18,local_17c);
    uVar8 = thunk_terror_ui_colour(1);
    local_178 = local_178 & 0xff000000 |
                uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10;
    recovered_1000a86c(param_1,uVar11 + 0xf,0x16c,(int)(&PTR_DAT_10010024)[uVar20],local_178,
                       iVar4 - 0x16);
    uVar8 = DAT_1000c078;
    uVar20 = uVar20 + 1;
    local_170 = local_170 + 0x74;
  } while (uVar20 != 5);
  iVar19 = DAT_1000c078 - 0x20;
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x344))) {
  case 0:
    uVar11 = thunk_terror_ui_colour(0x2d);
    uVar13 = DAT_1000c07c;
    uVar20 = DAT_1000c078;
    uVar7 = DAT_1000c07c;
    if (0x1f7 < (int)DAT_1000c07c) {
      uVar7 = 0x1f8;
    }
    uVar3 = DAT_1000c078;
    if (0xf < (int)DAT_1000c078) {
      uVar3 = 0x10;
    }
    uVar26 = uVar8 - 0x10;
    if ((int)DAT_1000c078 <= (int)(uVar8 - 0x10)) {
      uVar26 = DAT_1000c078;
    }
    if ((int)uVar8 < 0x10) {
      uVar26 = 0;
    }
    if (0x17a < (int)DAT_1000c07c) {
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x5e8;
      iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      uVar8 = 0x17a;
      do {
        uVar17 = uVar3;
        if ((int)uVar3 < (int)uVar26) {
          do {
            if ((((int)uVar8 < (int)uVar13) && (-1 < (int)uVar17)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar17 < (int)uVar20)))) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4) = (char)(uVar11 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 1) = (char)(uVar11 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 2) = (char)uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 3) = 0xff;
            }
            uVar17 = uVar17 + 1;
          } while (uVar26 != uVar17);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + iVar4;
      } while (uVar8 != uVar7);
    }
    uVar20 = thunk_terror_ui_colour(3);
    recovered_1000a454(param_1,0x10,0x17a,iVar19,0x7e,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x56,0x19c,((uintptr_t)pf_module_state + 0x265U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x46)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000bd6a,*(uint *)(param_1 + 0x588) / 10,
                       *(uint *)(param_1 + 0x588) % 10);
    uVar20 = thunk_terror_ui_colour(0x11);
    recovered_1000a86c(param_1,0xab,0x19c,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x46)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x56,0x1b4,((uintptr_t)pf_module_state + 0x26dU),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x50)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000bd6a,*(uint *)(param_1 + 0x58c) / 10,
                       *(uint *)(param_1 + 0x58c) % 10);
    uVar20 = thunk_terror_ui_colour(0x12);
    recovered_1000a86c(param_1,0xab,0x1b4,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x46)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x56,0x1cc,((uintptr_t)pf_module_state + 0x277U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x46)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000bd6a,*(uint *)(param_1 + 0x590) / 10,
                       *(uint *)(param_1 + 0x590) % 10);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0xab,0x1cc,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x46)
    ;
    uVar20 = thunk_terror_ui_colour(0x23);
    recovered_1000ab9c(param_1,0xfe,0x196,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    uVar20 = thunk_terror_ui_colour(0x12);
    recovered_1000ab9c(param_1,0xfe,0x1ae,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    thunk_snprintf(acStack_15c,0x40,str_1000bddb,*(uint *)(param_1 + 0x580));
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x15a,0x19c,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xaa)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000bdee,*(uint *)(param_1 + 0x584));
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x15a,0x1b4,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xaa)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000be02,*(uint *)(param_1 + 900));
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x15a,0x1cc,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x78)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x23e,0x18c,((uintptr_t)pf_module_state + 0x2b4U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x50)
    ;
    uVar20 = 0x222;
    uVar13 = 1;
    iVar19 = param_1 + 0x5fc;
    iVar4 = param_1 + 0x5b4;
    uVar8 = 0x62;
    break;
  case 1:
    uVar23 = *(uint *)(param_1 + 0x364);
    uVar5 = *(uint *)(param_1 + 0x368);
    uVar17 = *(uint *)(param_1 + 0x36c);
    uVar26 = *(uint *)(param_1 + 0x370);
    uVar33 = *(ulonglong *)(param_1 + 0x36c);
    uVar11 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000c07c;
    uVar13 = DAT_1000c078;
    uVar3 = uVar17 - uVar23;
    uVar20 = uVar26 - (uVar5 + (uVar23 > uVar17));
    if (uVar26 <= uVar5 && (uint)(uVar23 <= uVar17) <= uVar26 - uVar5) {
      uVar20 = 0;
      uVar3 = 0;
    }
    uVar10 = DAT_1000c07c;
    if (0x1f7 < (int)DAT_1000c07c) {
      uVar10 = 0x1f8;
    }
    uVar28 = DAT_1000c078;
    if (0xf < (int)DAT_1000c078) {
      uVar28 = 0x10;
    }
    uVar22 = uVar8 - 0x10;
    if ((int)DAT_1000c078 <= (int)(uVar8 - 0x10)) {
      uVar22 = DAT_1000c078;
    }
    if ((int)uVar8 < 0x10) {
      uVar22 = 0;
    }
    if (0x17a < (int)DAT_1000c07c) {
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x5e8;
      uVar8 = 0x17a;
      iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      do {
        uVar30 = uVar28;
        if ((int)uVar28 < (int)uVar22) {
          do {
            if ((((int)uVar8 < (int)uVar7) && (-1 < (int)uVar30)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar30 < (int)uVar13)))) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4) = (char)(uVar11 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 1) = (char)(uVar11 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 2) = (char)uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 3) = 0xff;
            }
            uVar30 = uVar30 + 1;
          } while (uVar22 != uVar30);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + iVar4;
      } while (uVar8 != uVar10);
    }
    uVar8 = thunk_terror_ui_colour(3);
    recovered_1000a454(param_1,0x10,0x17a,iVar19,0x7e,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10);
    uVar8 = 0x3fffffff;
    if (-uVar5 < (uint)(uVar23 < 0x40000000)) {
      if ((uint)(uVar23 < 0x100000) <= -uVar5) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10007fb4;
      }
      if (uVar5 != 0 || uVar5 < (0x3ff < uVar23)) {
        uVar8 = 0x3ff;
        in_stack_fffffe4c = &DAT_1000bd78;
        iVar19 = 10;
        goto LAB_10007fb4;
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd8a,uVar23,uVar5,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10007fb4:
      lVar2 = (ulonglong)(uVar8 & uVar23) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar5 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      uVar11 = (uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar11 = uVar13 >> (uVar7 & 0xff);
      }
      pcVar15 = (char *)(uVar13 >> iVar19);
      if (-1 < (int)uVar7) {
        pcVar15 = (char *)0x0;
      }
      uVar13 = uVar23 >> iVar19 | uVar5 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar13 = uVar5 >> (uVar7 & 0xff);
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd7b,uVar13,uVar8,uVar11,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x5c,0x19c,((uintptr_t)pf_module_state + 0x2beU),
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x3c);
    uVar8 = thunk_terror_ui_colour(0x11);
    recovered_1000a86c(param_1,0x94,0x19c,(int)acStack_15c,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x6e);
    uVar8 = 0x3fffffff;
    if (-uVar20 < (uint)(uVar3 < 0x40000000)) {
      if ((uint)(uVar3 < 0x100000) <= -uVar20) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008ec0;
      }
      if (uVar20 != 0 || uVar20 < (0x3ff < uVar3)) {
        uVar8 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008ec0;
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd8a,uVar3,uVar20,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008ec0:
      lVar2 = (ulonglong)(uVar8 & uVar3) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar20 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      uVar11 = (uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar11 = uVar13 >> (uVar7 & 0xff);
      }
      pcVar15 = (char *)(uVar13 >> iVar19);
      if (-1 < (int)uVar7) {
        pcVar15 = (char *)0x0;
      }
      uVar13 = uVar3 >> iVar19 | uVar20 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar13 = uVar20 >> (uVar7 & 0xff);
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd7b,uVar13,uVar8,uVar11,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x5c,0x1b4,((uintptr_t)pf_module_state + 0x2c4U),
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x3c);
    uVar8 = thunk_terror_ui_colour(4);
    recovered_1000a86c(param_1,0x94,0x1b4,(int)acStack_15c,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x6e);
    uVar8 = 0x3fffffff;
    if (-uVar26 < (uint)(uVar17 < 0x40000000)) {
      if ((uint)(uVar17 < 0x100000) <= -uVar26) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        puVar21 = &DAT_1000bd75;
        goto LAB_1000902c;
      }
      if (uVar26 != 0 || uVar26 < (0x3ff < uVar17)) {
        uVar8 = 0x3ff;
        iVar19 = 10;
        puVar21 = &DAT_1000bd78;
        goto LAB_1000902c;
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd8a,uVar17,uVar26,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      puVar21 = &DAT_1000bd72;
LAB_1000902c:
      lVar2 = (ulonglong)(uVar8 & uVar17) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar26 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      uVar11 = (uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar11 = uVar13 >> (uVar7 & 0xff);
      }
      uVar13 = uVar13 >> iVar19;
      if (-1 < (int)uVar7) {
        uVar13 = 0;
      }
      uVar23 = uVar17 >> iVar19 | uVar26 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar23 = uVar26 >> (uVar7 & 0xff);
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd7b,uVar23,uVar8,uVar11,uVar13,(uint)puVar21);
    }
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x15a,0x19c,((uintptr_t)pf_module_state + 0x2caU),
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x50);
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x1a2,0x19c,(int)acStack_15c,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x6e);
    uVar7 = thunk_terror_ui_colour(0x23);
    uVar13 = DAT_1000c07c;
    uVar8 = DAT_1000c078;
    iVar18 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x660 + 0x851;
    iVar12 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x660 + 0x853;
    iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x660 + 0x852;
    iVar9 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x660;
    iVar4 = -0x20;
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar11 = iVar4 + 0x1b8;
      iVar27 = 0;
      do {
        if ((((uint)((iVar27 + -0x20) * (iVar27 + -0x20) + iVar4 * iVar4) < 0x401) && (param_1 != 0)
            ) && ((uVar23 = iVar27 + 0x214, -1 < (int)(uVar23 | uVar11) &&
                  (*(int *)(param_1 + 0x340) != 0)))) {
          bVar32 = SBORROW4(uVar8,uVar23);
          iVar1 = uVar8 - uVar23;
          bVar31 = uVar8 == uVar23;
          if ((int)uVar23 < (int)uVar8) {
            bVar32 = SBORROW4(uVar13,uVar11);
            iVar1 = uVar13 - uVar11;
            bVar31 = uVar13 == uVar11;
          }
          if (!bVar31 && iVar1 < 0 == bVar32) {
            *(char *)(*(int *)(param_1 + 0x340) + iVar9 + iVar27 * 4 + 0x850) =
                 (char)(uVar7 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar18 + iVar27 * 4) = (char)(uVar7 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar6 + iVar27 * 4) = (char)uVar7;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar12 + iVar27 * 4) = 0xff;
          }
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 != 0x41);
      iVar9 = iVar9 + iVar19;
      iVar18 = iVar18 + iVar19;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + iVar19;
      iVar12 = iVar12 + iVar19;
    } while (iVar4 != 0x21);
    if ((uVar17 != 0 || uVar26 != 0) &&
       (uVar33 = recovered_10003558(CONCAT44(uVar20 * 100 + (int)((ulonglong)uVar3 * 100 >> 0x20),
                                             (int)((ulonglong)uVar3 * 100)),uVar33),
       uVar20 = (uint)(uVar33 >> 0x20), uVar20 != 0 || uVar20 < (10 < (uint)uVar33))) {
      iVar4 = 0x198;
      iVar19 = -0x20;
      do {
        iVar6 = 0x234;
        do {
          if ((uint)((iVar6 + -0x234) * (iVar6 + -0x234) + iVar19 * iVar19) < 0x401) {
            uVar20 = thunk_terror_ui_colour(4);
            iVar9 = 0;
            if (param_1 != 0) {
              iVar9 = *(int *)(param_1 + 0x340);
            }
            if (((param_1 != 0 && iVar9 != 0) && (iVar6 < (int)DAT_1000c078)) &&
               (iVar19 + 0x1b8 < (int)DAT_1000c07c)) {
              iVar12 = iVar4 * DAT_1000c078 + iVar6;
              *(char *)(iVar9 + iVar12 * 4) = (char)(uVar20 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar12 * 4 + 1) = (char)(uVar20 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar12 * 4 + 2) = (char)uVar20;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar12 * 4 + 3) = 0xff;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x255);
        iVar4 = iVar4 + 1;
        bVar31 = iVar19 != 0;
        iVar19 = iVar19 + 1;
      } while (bVar31);
    }
    uVar20 = thunk_terror_ui_colour(1);
    uVar8 = 100;
    pcVar15 = acStack_15c;
    iVar4 = 0x1e2;
    uVar20 = uVar20 & 0xff00 | uVar20 << 0x10 | (uVar20 & 0xff0000) >> 0x10;
    iVar19 = 0x20c;
    goto LAB_100093d4;
  case 2:
    uVar11 = *(uint *)(param_1 + 0x414);
    uVar3 = *(uint *)(param_1 + 0x418);
    uVar26 = *(uint *)(param_1 + 0x41c);
    uVar17 = *(uint *)(param_1 + 0x420);
    uVar23 = *(uint *)(param_1 + 0x428);
    uVar5 = *(uint *)(param_1 + 0x424);
    uVar10 = *(uint *)(param_1 + 0x430);
    uVar28 = *(uint *)(param_1 + 0x42c);
    uVar22 = thunk_terror_ui_colour(0x2d);
    uVar13 = DAT_1000c07c;
    uVar20 = DAT_1000c078;
    uVar7 = DAT_1000c07c;
    if (0x1f7 < (int)DAT_1000c07c) {
      uVar7 = 0x1f8;
    }
    uVar30 = DAT_1000c078;
    if (0xf < (int)DAT_1000c078) {
      uVar30 = 0x10;
    }
    uVar24 = uVar8 - 0x10;
    if ((int)DAT_1000c078 <= (int)(uVar8 - 0x10)) {
      uVar24 = DAT_1000c078;
    }
    if ((int)uVar8 < 0x10) {
      uVar24 = 0;
    }
    if (0x17a < (int)DAT_1000c07c) {
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x5e8;
      uVar8 = 0x17a;
      iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      do {
        uVar29 = uVar30;
        if ((int)uVar30 < (int)uVar24) {
          do {
            if (((((int)uVar8 < (int)uVar13) && (-1 < (int)uVar29)) &&
                (*(int *)(param_1 + 0x340) != 0)) && ((int)uVar29 < (int)uVar20)) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar29 * 4) = (char)(uVar22 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar29 * 4 + 1) = (char)(uVar22 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar29 * 4 + 2) = (char)uVar22;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar29 * 4 + 3) = 0xff;
            }
            uVar29 = uVar29 + 1;
          } while (uVar24 != uVar29);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + iVar4;
      } while (uVar8 != uVar7);
    }
    uVar20 = thunk_terror_ui_colour(3);
    uVar20 = uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10;
    recovered_1000a454(param_1,0x10,0x17a,iVar19,0x7e,uVar20);
    recovered_1000b784(param_1,0x10,0x17a);
    thunk_snprintf(acStack_15c,0x40,str_1000be2f,uVar11,uVar3,uVar20,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    uVar20 = thunk_terror_ui_colour(1);
    uVar8 = 0x82;
    recovered_1000a86c(param_1,0x58,0x1a8,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x82)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000be3e,uVar26,uVar17,uVar8,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x58,0x1be,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x8c)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000be4f,*(uint *)(param_1 + 0x594));
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x58,0x1d4,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x82)
    ;
    thunk_snprintf(acStack_15c,0x40,str_1000be5d,*(uint *)(param_1 + 0x598));
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x58,0x1ea,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x8c)
    ;
    uVar20 = 0x3fffffff;
    if (-uVar23 < (uint)(uVar5 < 0x40000000)) {
      uVar20 = 0xfffff;
      if ((uint)(uVar5 < 0x100000) <= -uVar23) {
        iVar19 = 0x14;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008128;
      }
      if (uVar23 != 0 || uVar23 < (0x3ff < uVar5)) {
        uVar20 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008128;
      }
      thunk_snprintf(&local_60,0x40,str_1000bd8a,uVar5,uVar23,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008128:
      lVar2 = (ulonglong)(uVar20 & uVar5) * 100;
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar20 = uVar23 >> iVar19;
      uVar13 = iVar19 - 0x20;
      if (-1 < (int)uVar13) {
        uVar20 = 0;
      }
      uVar7 = (uint)lVar2 >> iVar19 | uVar8 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar13) {
        uVar7 = uVar8 >> (uVar13 & 0xff);
      }
      pcVar15 = (char *)(uVar8 >> iVar19);
      if (-1 < (int)uVar13) {
        pcVar15 = (char *)0x0;
      }
      uVar8 = uVar5 >> iVar19 | uVar23 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar13) {
        uVar8 = uVar23 >> (uVar13 & 0xff);
      }
      thunk_snprintf(&local_60,0x40,str_1000bd7b,uVar8,uVar20,uVar7,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    thunk_snprintf(acStack_15c,0x40,str_1000be6c,&local_60);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x12e,0x1a8,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xaa)
    ;
    uVar20 = 0x3fffffff;
    if (-uVar10 < (uint)(uVar28 < 0x40000000)) {
      uVar20 = 0xfffff;
      if ((uint)(uVar28 < 0x100000) <= -uVar10) {
        iVar19 = 0x14;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008274;
      }
      if (uVar10 != 0 || uVar10 < (0x3ff < uVar28)) {
        uVar20 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008274;
      }
      thunk_snprintf(&local_60,0x40,str_1000bd8a,uVar28,uVar10,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008274:
      lVar2 = (ulonglong)(uVar20 & uVar28) * 100;
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar20 = uVar10 >> iVar19;
      uVar13 = iVar19 - 0x20;
      if (-1 < (int)uVar13) {
        uVar20 = 0;
      }
      uVar7 = (uint)lVar2 >> iVar19 | uVar8 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar13) {
        uVar7 = uVar8 >> (uVar13 & 0xff);
      }
      pcVar15 = (char *)(uVar8 >> iVar19);
      if (-1 < (int)uVar13) {
        pcVar15 = (char *)0x0;
      }
      uVar8 = uVar28 >> iVar19 | uVar10 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar13) {
        uVar8 = uVar10 >> (uVar13 & 0xff);
      }
      thunk_snprintf(&local_60,0x40,str_1000bd7b,uVar8,uVar20,uVar7,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    thunk_snprintf(acStack_15c,0x40,str_1000be7a,&local_60);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x12e,0x1be,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xb4)
    ;
    uVar20 = *(uint *)(param_1 + 0x59c);
    uVar13 = 0x3fffffff;
    uVar8 = *(uint *)(param_1 + 0x5a0);
    if (-uVar8 < (uint)(uVar20 < 0x40000000)) {
      uVar13 = 0xfffff;
      if ((uint)(uVar20 < 0x100000) <= -uVar8) {
        iVar19 = 0x14;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_100083c0;
      }
      if (uVar8 != 0 || uVar8 < (0x3ff < uVar20)) {
        uVar13 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_100083c0;
      }
      pcVar16 = str_1000bd8a;
      puVar21 = &DAT_1000bd70;
      uVar13 = uVar8;
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_100083c0:
      lVar2 = (ulonglong)(uVar13 & uVar20) * 100;
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar13 = uVar8 >> iVar19;
      uVar11 = iVar19 - 0x20;
      if (-1 < (int)uVar11) {
        uVar13 = 0;
      }
      puVar21 = (undefined *)((uint)lVar2 >> iVar19 | uVar7 << (0x20U - iVar19 & 0xff));
      if (-1 < (int)uVar11) {
        puVar21 = (undefined *)(uVar7 >> (uVar11 & 0xff));
      }
      pcVar15 = (char *)(uVar7 >> iVar19);
      if (-1 < (int)uVar11) {
        pcVar15 = (char *)0x0;
      }
      uVar20 = uVar20 >> iVar19 | uVar8 << (0x20U - iVar19 & 0xff);
      pcVar16 = str_1000bd7b;
      if (-1 < (int)uVar11) {
        uVar20 = uVar8 >> (uVar11 & 0xff);
      }
    }
    thunk_snprintf(acStack_a0,0x20,pcVar16,uVar20,uVar13,(uint)puVar21,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    thunk_snprintf((char *)&local_60,0x40,str_1000bed3,acStack_a0);
    thunk_snprintf(acStack_15c,0x40,str_1000be8b,&local_60);
    uVar20 = thunk_terror_ui_colour(0x11);
    recovered_1000a86c(param_1,0x12e,0x1d4,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xbe)
    ;
    uVar20 = *(uint *)(param_1 + 0x5a4);
    uVar13 = 0x3fffffff;
    uVar8 = *(uint *)(param_1 + 0x5a8);
    if (-uVar8 < (uint)(uVar20 < 0x40000000)) {
      uVar13 = 0xfffff;
      if ((uint)(uVar20 < 0x100000) <= -uVar8) {
        iVar19 = 0x14;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008528;
      }
      if (uVar8 != 0 || uVar8 < (0x3ff < uVar20)) {
        uVar13 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008528;
      }
      pcVar16 = str_1000bd8a;
      puVar21 = &DAT_1000bd70;
      uVar13 = uVar8;
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008528:
      lVar2 = (ulonglong)(uVar13 & uVar20) * 100;
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar13 = uVar8 >> iVar19;
      uVar11 = iVar19 - 0x20;
      if (-1 < (int)uVar11) {
        uVar13 = 0;
      }
      puVar21 = (undefined *)((uint)lVar2 >> iVar19 | uVar7 << (0x20U - iVar19 & 0xff));
      if (-1 < (int)uVar11) {
        puVar21 = (undefined *)(uVar7 >> (uVar11 & 0xff));
      }
      pcVar15 = (char *)(uVar7 >> iVar19);
      if (-1 < (int)uVar11) {
        pcVar15 = (char *)0x0;
      }
      uVar20 = uVar20 >> iVar19 | uVar8 << (0x20U - iVar19 & 0xff);
      pcVar16 = str_1000bd7b;
      if (-1 < (int)uVar11) {
        uVar20 = uVar8 >> (uVar11 & 0xff);
      }
    }
    thunk_snprintf(acStack_a0,0x20,pcVar16,uVar20,uVar13,(uint)puVar21,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    thunk_snprintf((char *)&local_60,0x40,str_1000bed3,acStack_a0);
    thunk_snprintf(acStack_15c,0x40,str_1000be9d,&local_60);
    uVar20 = thunk_terror_ui_colour(0x12);
    recovered_1000a86c(param_1,0x12e,0x1ea,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,200);
    uVar20 = *(uint *)(param_1 + 0x5ac);
    uVar13 = 0x3fffffff;
    uVar8 = *(uint *)(param_1 + 0x5b0);
    if (-uVar8 < (uint)(uVar20 < 0x40000000)) {
      uVar13 = 0xfffff;
      if ((uint)(uVar20 < 0x100000) <= -uVar8) {
        iVar19 = 0x14;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008690;
      }
      if (uVar8 != 0 || uVar8 < (0x3ff < uVar20)) {
        uVar13 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008690;
      }
      pcVar16 = str_1000bd8a;
      puVar21 = &DAT_1000bd70;
      uVar13 = uVar8;
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008690:
      lVar2 = (ulonglong)(uVar13 & uVar20) * 100;
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar13 = uVar8 >> iVar19;
      uVar11 = iVar19 - 0x20;
      if (-1 < (int)uVar11) {
        uVar13 = 0;
      }
      puVar21 = (undefined *)((uint)lVar2 >> iVar19 | uVar7 << (0x20U - iVar19 & 0xff));
      if (-1 < (int)uVar11) {
        puVar21 = (undefined *)(uVar7 >> (uVar11 & 0xff));
      }
      pcVar15 = (char *)(uVar7 >> iVar19);
      if (-1 < (int)uVar11) {
        pcVar15 = (char *)0x0;
      }
      uVar20 = uVar20 >> iVar19 | uVar8 << (0x20U - iVar19 & 0xff);
      pcVar16 = str_1000bd7b;
      if (-1 < (int)uVar11) {
        uVar20 = uVar8 >> (uVar11 & 0xff);
      }
    }
    thunk_snprintf(acStack_a0,0x20,pcVar16,uVar20,uVar13,(uint)puVar21,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    thunk_snprintf((char *)&local_60,0x40,str_1000bed3,acStack_a0);
    thunk_snprintf(acStack_15c,0x40,str_1000beb2,&local_60);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x232,0x18c,(int)acStack_15c,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x82)
    ;
    recovered_1000ae94(param_1,0x224,0x19e,0x6a,0x48,param_1 + 0x644,param_1 + 0x68c,0);
    uVar20 = thunk_terror_ui_colour(0x23);
    recovered_1000ab9c(param_1,0x1de,0x1ce,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    uVar20 = thunk_terror_ui_colour(0x12);
    recovered_1000ab9c(param_1,0x1de,0x1e6,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    goto LAB_100093e4;
  case 3:
    uVar23 = *(uint *)(param_1 + 0x404);
    uVar5 = *(uint *)(param_1 + 0x408);
    uVar17 = *(uint *)(param_1 + 0x40c);
    uVar26 = *(uint *)(param_1 + 0x410);
    uVar33 = *(ulonglong *)(param_1 + 0x40c);
    uVar11 = thunk_terror_ui_colour(0x2d);
    uVar7 = DAT_1000c07c;
    uVar13 = DAT_1000c078;
    uVar3 = uVar17 - uVar23;
    uVar20 = uVar26 - (uVar5 + (uVar23 > uVar17));
    if (uVar26 <= uVar5 && (uint)(uVar23 <= uVar17) <= uVar26 - uVar5) {
      uVar20 = 0;
      uVar3 = 0;
    }
    uVar10 = DAT_1000c07c;
    if (0x1f7 < (int)DAT_1000c07c) {
      uVar10 = 0x1f8;
    }
    uVar28 = DAT_1000c078;
    if (0xf < (int)DAT_1000c078) {
      uVar28 = 0x10;
    }
    uVar22 = uVar8 - 0x10;
    if ((int)DAT_1000c078 <= (int)(uVar8 - 0x10)) {
      uVar22 = DAT_1000c078;
    }
    if ((int)uVar8 < 0x10) {
      uVar22 = 0;
    }
    if (0x17a < (int)DAT_1000c07c) {
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x5e8;
      iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      uVar8 = 0x17a;
      do {
        uVar30 = uVar28;
        if ((int)uVar28 < (int)uVar22) {
          do {
            if ((((int)uVar8 < (int)uVar7) && (-1 < (int)uVar30)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar30 < (int)uVar13)))) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4) = (char)(uVar11 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 1) = (char)(uVar11 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 2) = (char)uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar30 * 4 + 3) = 0xff;
            }
            uVar30 = uVar30 + 1;
          } while (uVar22 != uVar30);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + iVar4;
      } while (uVar8 != uVar10);
    }
    uVar8 = thunk_terror_ui_colour(3);
    recovered_1000a454(param_1,0x10,0x17a,iVar19,0x7e,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10);
    recovered_1000b784(param_1,0x10,0x17a);
    uVar8 = 0x3fffffff;
    if (-uVar5 < (uint)(uVar23 < 0x40000000)) {
      if ((uint)(uVar23 < 0x100000) <= -uVar5) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_1000883c;
      }
      if (uVar5 != 0 || uVar5 < (0x3ff < uVar23)) {
        uVar8 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_1000883c;
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd8a,uVar23,uVar5,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_1000883c:
      lVar2 = (ulonglong)(uVar8 & uVar23) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar5 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      uVar11 = (uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar11 = uVar13 >> (uVar7 & 0xff);
      }
      pcVar15 = (char *)(uVar13 >> iVar19);
      if (-1 < (int)uVar7) {
        pcVar15 = (char *)0x0;
      }
      uVar13 = uVar23 >> iVar19 | uVar5 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar13 = uVar5 >> (uVar7 & 0xff);
      }
      thunk_snprintf(acStack_15c,0x40,str_1000bd7b,uVar13,uVar8,uVar11,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    uVar8 = 0x3fffffff;
    if (-uVar20 < (uint)(uVar3 < 0x40000000)) {
      if ((uint)(uVar3 < 0x100000) <= -uVar20) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008930;
      }
      if (uVar20 != 0 || uVar20 < (0x3ff < uVar3)) {
        uVar8 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008930;
      }
      thunk_snprintf(&local_60,0x40,str_1000bd8a,uVar3,uVar20,((uintptr_t)pf_module_state + 0x214U),(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008930:
      lVar2 = (ulonglong)(uVar8 & uVar3) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar20 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      uVar11 = (uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar11 = uVar13 >> (uVar7 & 0xff);
      }
      pcVar15 = (char *)(uVar13 >> iVar19);
      if (-1 < (int)uVar7) {
        pcVar15 = (char *)0x0;
      }
      uVar13 = uVar3 >> iVar19 | uVar20 << (0x20U - iVar19 & 0xff);
      if (-1 < (int)uVar7) {
        uVar13 = uVar20 >> (uVar7 & 0xff);
      }
      thunk_snprintf(&local_60,0x40,str_1000bd7b,uVar13,uVar8,uVar11,(uint)pcVar15,
                         (uint)in_stack_fffffe4c);
    }
    uVar8 = 0x3fffffff;
    if (-uVar26 < (uint)(uVar17 < 0x40000000)) {
      if ((uint)(uVar17 < 0x100000) <= -uVar26) {
        iVar19 = 0x14;
        uVar8 = 0xfffff;
        in_stack_fffffe4c = &DAT_1000bd75;
        goto LAB_10008a18;
      }
      if (uVar26 != 0 || uVar26 < (0x3ff < uVar17)) {
        uVar8 = 0x3ff;
        iVar19 = 10;
        in_stack_fffffe4c = &DAT_1000bd78;
        goto LAB_10008a18;
      }
      pcVar16 = str_1000bd8a;
      puVar21 = &DAT_1000bd70;
      uVar13 = uVar17;
      uVar8 = uVar26;
    }
    else {
      iVar19 = 0x1e;
      in_stack_fffffe4c = &DAT_1000bd72;
LAB_10008a18:
      lVar2 = (ulonglong)(uVar8 & uVar17) * 100;
      uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar8 = uVar26 >> iVar19;
      uVar7 = iVar19 - 0x20;
      if (-1 < (int)uVar7) {
        uVar8 = 0;
      }
      puVar21 = (undefined *)((uint)lVar2 >> iVar19 | uVar13 << (0x20U - iVar19 & 0xff));
      if (-1 < (int)uVar7) {
        puVar21 = (undefined *)(uVar13 >> (uVar7 & 0xff));
      }
      pcVar15 = (char *)(uVar13 >> iVar19);
      if (-1 < (int)uVar7) {
        pcVar15 = (char *)0x0;
      }
      uVar13 = uVar17 >> iVar19 | uVar26 << (0x20U - iVar19 & 0xff);
      pcVar16 = str_1000bd7b;
      if (-1 < (int)uVar7) {
        uVar13 = uVar26 >> (uVar7 & 0xff);
      }
    }
    thunk_snprintf(acStack_a0,0x40,pcVar16,uVar13,uVar8,(uint)puVar21,(uint)pcVar15,
                       (uint)in_stack_fffffe4c);
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x4e,0x1c2,((uintptr_t)pf_module_state + 0x37eU),
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x82);
    uVar8 = thunk_terror_ui_colour(4);
    recovered_1000a86c(param_1,0xce,0x1c2,(int)&local_60,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x78);
    uVar8 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x4e,0x1da,((uintptr_t)pf_module_state + 0x38eU),
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,100);
    uVar8 = thunk_terror_ui_colour(0x11);
    recovered_1000a86c(param_1,0xce,0x1da,(int)acStack_15c,
                       uVar8 & 0xff00 | (uVar8 & 0xff) << 0x10 | (uVar8 & 0xff0000) >> 0x10,0x78);
    uVar7 = thunk_terror_ui_colour(0x23);
    uVar13 = DAT_1000c07c;
    uVar8 = DAT_1000c078;
    iVar18 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x6b0 + 0x851;
    iVar9 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x6b0 + 0x853;
    iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x6b0 + 0x852;
    iVar12 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x6b0;
    iVar4 = -0x20;
    iVar19 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar11 = iVar4 + 0x1cc;
      iVar27 = 0;
      do {
        if (((((uint)((iVar27 + -0x20) * (iVar27 + -0x20) + iVar4 * iVar4) < 0x401) &&
             (param_1 != 0)) && (uVar10 = iVar27 + 0x214, -1 < (int)(uVar10 | uVar11))) &&
           (*(int *)(param_1 + 0x340) != 0)) {
          bVar32 = SBORROW4(uVar8,uVar10);
          iVar1 = uVar8 - uVar10;
          bVar31 = uVar8 == uVar10;
          if ((int)uVar10 < (int)uVar8) {
            bVar32 = SBORROW4(uVar13,uVar11);
            iVar1 = uVar13 - uVar11;
            bVar31 = uVar13 == uVar11;
          }
          if (!bVar31 && iVar1 < 0 == bVar32) {
            *(char *)(*(int *)(param_1 + 0x340) + iVar12 + iVar27 * 4 + 0x850) =
                 (char)(uVar7 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x340) + iVar18 + iVar27 * 4) = (char)(uVar7 >> 8);
            *(char *)(*(int *)(param_1 + 0x340) + iVar6 + iVar27 * 4) = (char)uVar7;
            *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + iVar27 * 4) = 0xff;
          }
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 != 0x41);
      iVar12 = iVar12 + iVar19;
      iVar18 = iVar18 + iVar19;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + iVar19;
      iVar9 = iVar9 + iVar19;
    } while (iVar4 != 0x21);
    if ((uVar17 != 0 || uVar26 != 0) &&
       (uVar5 <= uVar26 && (uint)(uVar17 <= uVar23) <= uVar5 - uVar26)) {
      uVar33 = recovered_10003558(CONCAT44(uVar20 << 6 | uVar3 >> 0x1a,uVar3 << 6),uVar33);
      local_168 = -0x20;
      local_164 = 0x1ac;
      do {
        if (-1 < (int)uVar33) {
          uVar20 = 0x214;
          do {
            iVar19 = uVar20 - 0x234;
            if ((uint)(iVar19 * iVar19 + local_168 * local_168) < 0x401) {
              uVar8 = thunk_terror_ui_colour(4);
              if (((param_1 != 0) && (-1 < (int)(uVar20 | local_168 + 0x1ccU))) &&
                 ((*(int *)(param_1 + 0x340) != 0 &&
                  (((int)uVar20 < (int)DAT_1000c078 &&
                   ((int)(local_168 + 0x1ccU) < (int)DAT_1000c07c)))))) {
                iVar4 = local_164 * DAT_1000c078 + uVar20;
                *(char *)(*(int *)(param_1 + 0x340) + (uintptr_t)(uintptr_t)iVar4 * 4) = (char)(uVar8 >> 0x10);
                *(char *)(*(int *)(param_1 + 0x340) + (uintptr_t)(uintptr_t)iVar4 * 4 + 1) = (char)(uVar8 >> 8);
                *(char *)(*(int *)(param_1 + 0x340) + (uintptr_t)(uintptr_t)iVar4 * 4 + 2) = (char)uVar8;
                *(undefined1 *)(*(int *)(param_1 + 0x340) + (uintptr_t)(uintptr_t)iVar4 * 4 + 3) = 0xff;
              }
            }
            uVar20 = uVar20 + 1;
          } while (iVar19 < (int)uVar33 + -0x20);
        }
        local_164 = local_164 + 1;
        local_168 = local_168 + 1;
      } while (local_168 != 0x21);
    }
    uVar20 = thunk_terror_ui_colour(1);
    uVar8 = 0x78;
    pcVar15 = acStack_a0;
    iVar4 = 0x1f6;
    uVar20 = uVar20 & 0xff00 | uVar20 << 0x10 | (uVar20 & 0xff0000) >> 0x10;
    iVar19 = 0x212;
LAB_100093d4:
    recovered_1000a86c(param_1,iVar19,iVar4,(int)pcVar15,uVar20 & 0xffffff,uVar8);
    goto LAB_100093e4;
  default:
    uVar11 = thunk_terror_ui_colour(0x2d);
    uVar13 = DAT_1000c07c;
    uVar20 = DAT_1000c078;
    uVar7 = DAT_1000c07c;
    if (0x1f7 < (int)DAT_1000c07c) {
      uVar7 = 0x1f8;
    }
    uVar3 = 0x10;
    if ((int)DAT_1000c078 < 0x10) {
      uVar3 = DAT_1000c078;
    }
    uVar26 = uVar8 - 0x10;
    if ((int)DAT_1000c078 <= (int)(uVar8 - 0x10)) {
      uVar26 = DAT_1000c078;
    }
    if ((int)uVar8 < 0x10) {
      uVar26 = 0;
    }
    if (0x17a < (int)DAT_1000c07c) {
      iVar6 = (uintptr_t)(uintptr_t)DAT_1000c078 * 0x5e8;
      iVar4 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
      uVar8 = 0x17a;
      do {
        uVar17 = uVar3;
        if ((int)uVar3 < (int)uVar26) {
          do {
            if ((((int)uVar8 < (int)uVar13) && (-1 < (int)uVar17)) &&
               ((*(int *)(param_1 + 0x340) != 0 && ((int)uVar17 < (int)uVar20)))) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4) = (char)(uVar11 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 1) = (char)(uVar11 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 2) = (char)uVar11;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar6 + uVar17 * 4 + 3) = 0xff;
            }
            uVar17 = uVar17 + 1;
          } while (uVar26 != uVar17);
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + iVar4;
      } while (uVar8 != uVar7);
    }
    uVar20 = thunk_terror_ui_colour(3);
    recovered_1000a454(param_1,0x10,0x17a,iVar19,0x7e,
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10);
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x58,0x1a2,((uintptr_t)pf_module_state + 0x39aU),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x6e)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x58,0x1ba,((uintptr_t)pf_module_state + 0x3a8U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x78)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x130,0x1a2,((uintptr_t)pf_module_state + 0x3b7U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0xa0)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x130,0x1ba,((uintptr_t)pf_module_state + 0x3ceU),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x8c)
    ;
    uVar20 = thunk_terror_ui_colour(1);
    recovered_1000a86c(param_1,0x230,0x18c,((uintptr_t)pf_module_state + 0x3e1U),
                       uVar20 & 0xff00 | (uVar20 & 0xff) << 0x10 | (uVar20 & 0xff0000) >> 0x10,0x82)
    ;
    uVar20 = 0x224;
    uVar13 = 0;
    iVar19 = 0;
    uVar8 = 0x6a;
    iVar4 = 0;
  }
  recovered_1000ae94(param_1,uVar20,0x19e,uVar8,0x48,iVar4,iVar19,uVar13);
LAB_100093e4:
  uVar8 = DAT_1000c07c;
  uVar20 = DAT_1000c078;
  pixels = *(void **)(param_1 + 0x340);
  uVar13 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present((void *)param_1,str_1000bca6,pixels,uVar20,uVar8,uVar20 << 2,uVar13);
  return;
}

#undef DAT_1000bd67
#undef DAT_1000bd70
#undef DAT_1000bd72
#undef DAT_1000bd75
#undef DAT_1000bd78
#undef DAT_1000bf50
#undef DAT_1000bf58
#undef DAT_1000bf60
#undef DAT_1000c078
#undef DAT_1000c07c
#undef PTR_DAT_10010024
#undef PTR_str_1000bd04_10010004
#undef str_1000bca6
#undef str_1000bd6a
#undef str_1000bd7b
#undef str_1000bd8a
#undef str_1000bddb
#undef str_1000bdee
#undef str_1000be02
#undef str_1000be2f
#undef str_1000be3e
#undef str_1000be4f
#undef str_1000be5d
#undef str_1000be6c
#undef str_1000be7a
#undef str_1000be8b
#undef str_1000be9d
#undef str_1000beb2
#undef str_1000bed3
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190
#undef acStack_15c
#undef auStack_148
#undef local_180
#undef acStack_a0
#undef local_17c
#undef local_178
#undef iStack_5c
#undef local_170
#undef local_16c
#undef uStack_54
#undef local_168
#undef local_164
#undef local_14c
#undef local_60
#undef local_58
#undef in_stack_fffffe4c

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
 * Address: 0x10009630
 */

void recovered_10009630(void *in_r0)

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
                    /* WARNING: Could not recover jumptable at 0x1000967c. Too many branches */
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
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009680
 */

void recovered_10009680(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *records;
  uint uVar5;
  int *piVar6;
  bool bVar7;

  local_24 = 0;
  local_28 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x354);
  if (iVar4 != -1) {
    param_3 = *(int *)(param_1 + 0x574);
  }
  if (iVar4 == -1 || param_3 == 0) {
    return;
  }
  piVar6 = *(int **)(param_1 + 0x510);
  while (*piVar6 != iVar4) {
    param_3 = param_3 + -1;
    piVar6 = piVar6 + 0x6e;
    if (param_3 == 0) {
      return;
    }
  }
  uVar2 = thunk_terror_ui_window_list((void *)0x0,0,&local_24);
  if (uVar2 == 0) {
    return;
  }
  if (0x67b23a < local_24) {
    return;
  }
  if (local_24 == 0) {
    uVar2 = 0;
    pvVar3 = (void *)0x0;
LAB_100097a0:
    records = pvVar3;
    uVar2 = thunk_terror_ui_window_list(records,uVar2,&local_28);
    if ((uVar2 != 0) && (local_28 <= local_24)) {
      if (local_28 != 0) {
        piVar6 = (int *)((int)records + 0x30);
        uVar5 = 0;
        uVar2 = local_28;
        do {
          if (piVar6[-0xb] == *(int *)(param_1 + 0x354)) {
            thunk_terror_ui_window_configure(piVar6[-0xc],piVar6[-1],*piVar6,0xe,10);
            uVar2 = local_28;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 0x9e;
        } while (uVar5 < uVar2);
      }
      iVar4 = Ram40010800;
      if (iVar4 != 0x50414d57) {
        return;
      }
      iVar4 = Ram40010804;
      if (iVar4 == 0) {
        return;
      }
      uVar2 = Ram40010808;
      bVar7 = 0xb < uVar2;
      if (bVar7) {
        uVar2 = Ram40010808;
      }
      if (!bVar7 || uVar2 < 0x54) {
        return;
      }
      pcVar1 = (code *)UINT_40010850;
      goto joined_r0x100098a0;
    }
  }
  else {
    iVar4 = Ram40010800;
    records = (void *)0x0;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) &&
        (uVar2 = Ram40010808, 0xb < uVar2)) &&
       ((uVar2 = Ram40010808, 0x4f < uVar2 &&
        (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)))) {
      pvVar3 = (*pcVar1)(local_24 * 0x278);
    }
    else {
      pvVar3 = (void *)0x0;
    }
    uVar2 = local_24;
    if ((local_24 == 0) || (pvVar3 != (void *)0x0)) goto LAB_100097a0;
  }
  iVar4 = Ram40010800;
  if ((iVar4 == 0x50414d57) && (iVar4 = Ram40010804, iVar4 != 0)) {
    uVar2 = Ram40010808;
    bVar7 = 0xb < uVar2;
    if (bVar7) {
      uVar2 = Ram40010808;
    }
    if (bVar7 && 0x53 < uVar2) {
      pcVar1 = (code *)UINT_40010850;
joined_r0x100098a0:
      if (pcVar1 == (code *)0x0) {
        return;
      }
      (*pcVar1)(records);
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
#undef UINT_4001084c
#undef UINT_40010850
#undef local_28
#undef local_24

#undef DAT_1000bcdd
#define DAT_1000bcdd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181U)))
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
#undef str_1000bcd6
#define str_1000bcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_1000bce1
#define str_1000bce1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x185U)))
#define local_218 (*(char (*)[536])(pf_stack_frame + 24))
#define local_a4 (*(byte (*)[164])(pf_stack_frame + 396))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098b0
 */

void recovered_100098b0(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar10;
  char *pcVar9;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;

  if (param_1 == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x354);
  if (iVar5 != -1) {
    param_3 = *(int *)(param_1 + 0x574);
  }
  if (iVar5 != -1 && param_3 != 0) {
    pcVar8 = (char *)(*(int *)(param_1 + 0x510) + 0xc0);
    do {
      if (*(int *)(pcVar8 + -0xc0) == iVar5) {
        uVar7 = *(undefined4 *)(pcVar8 + -0x90);
        uVar11 = *(undefined4 *)(pcVar8 + -0x8c);
        local_218[0] = '\0';
        pcVar12 = str_1000bcd6;
        if ((*(uint *)(pcVar8 + -0xbc) & 1) == 0) {
          pcVar12 = &DAT_1000bcdd;
        }
        iVar5 = Ram40010800;
        pcVar10 = (char *)((uintptr_t)pf_module_state + 0x178U);
        if (*pcVar8 != '\0') {
          pcVar10 = pcVar8;
        }
        if ((iVar5 != 0x50414d57) || (iVar5 = Ram40010804, iVar5 == 0)) goto LAB_100099a4;
        uVar14 = Ram40010808;
        bVar15 = 0xb < uVar14;
        if (bVar15) {
          uVar14 = Ram40010808;
        }
        if ((!bVar15 || uVar14 < 0x224) || (iVar5 = Ram40010a20, iVar5 == 0)) goto LAB_100099a4;
        pcVar1 = (code *)Ram40010a20;
        iVar5 = (*pcVar1)(*(undefined4 *)(pcVar8 + -0x84),local_a4,0x80,uVar7);
        if ((iVar5 < 0) || (local_a4[0] == 0)) goto LAB_100099a4;
        iVar13 = 0;
        iVar5 = 1;
        uVar14 = 1;
        bVar3 = local_a4[0];
        goto LAB_10009a70;
      }
      pcVar8 = pcVar8 + 0x1b8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(undefined1 *)(param_1 + 0x6d4) = 0;
  return;
  while( true ) {
    if (bVar3 == 0x5c) {
      if (iVar13 == 0) goto LAB_100099a4;
      uVar14 = uVar14 + 1;
      iVar13 = 0;
      if (6 < uVar14) goto LAB_100099a4;
    }
    else {
      bVar15 = 9 < (byte)(bVar3 - 0x30U);
      bVar2 = bVar3;
      if (bVar15) {
        bVar2 = (bVar3 & 0xdf) + 0xbf;
      }
      if ((bVar15 && 0x19 < bVar2) && (bVar3 != 0x5f && bVar3 != 0x2d)) goto LAB_100099a4;
      iVar13 = iVar13 + 1;
    }
    bVar3 = local_a4[iVar5];
    iVar5 = iVar5 + 1;
    if (bVar3 == 0) break;
LAB_10009a70:
    if (iVar5 == 0x80) goto LAB_100099a4;
  }
  if ((iVar13 != 0) && (1 < uVar14)) {
    local_218[0] = '[';
    iVar5 = 0;
    do {
      iVar13 = iVar5;
      if (iVar13 + 2U >> 2 < 0x5d) {
        local_218[iVar13 + 1] = local_a4[0];
      }
      local_a4[0] = local_a4[iVar13 + 1];
      iVar5 = iVar13 + 1;
    } while (local_a4[0] != 0);
    uVar14 = iVar13 + 4;
    if (iVar13 + 3U < 0x174) {
      local_218[iVar13 + 2] = ']';
    }
    if (uVar14 >> 2 < 0x5d) {
      local_218[iVar13 + 3] = '\\';
    }
    do {
      pcVar9 = pcVar10 + 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar4 == '\\');
    bVar15 = true;
    while( true ) {
      while (cVar4 == '\\') {
        if (!bVar15) {
          bVar15 = true;
          if (uVar14 + 1 < 0x174) {
            local_218[uVar14] = '\\';
          }
          goto LAB_10009b3c;
        }
        bVar15 = true;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      }
      if (cVar4 == '\0') break;
      bVar15 = false;
      if (uVar14 + 1 >> 2 < 0x5d) {
        local_218[uVar14] = cVar4;
      }
LAB_10009b3c:
      uVar14 = uVar14 + 1;
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    }
    uVar6 = 0x173;
    if (uVar14 < 0x173) {
      uVar6 = uVar14;
    }
    local_218[uVar6] = '\0';
  }
LAB_100099a4:
  thunk_snprintf((char *)(param_1 + 0x6d4),0x1b0,str_1000bce1,uVar7,uVar11,local_218,pcVar12,
                     *(undefined4 *)(pcVar8 + -0x88));
  return;
}

#undef DAT_1000bcdd
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010a20
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram40010a20
#undef str_1000bcd6
#undef str_1000bce1
#undef local_218
#undef local_a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bb4
 */

void recovered_10009bb4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_1 == 0) {
    return;
  }
  recovered_10009c60(param_1);
  if (*(uint *)(param_1 + 0x578) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x500);
    uVar1 = recovered_10003448(*(int *)(param_1 + 0x358) + 1,*(uint *)(param_1 + 0x578));
    *(uint *)(param_1 + 0x358) = uVar1;
    uVar2 = *(undefined4 *)(iVar3 + uVar1 * 0x1c + 0x14);
  }
  *(undefined4 *)(param_1 + 0x35c) = uVar2;
  thunk_memset((void *)(param_1 + 0x644),0,0x48);
  thunk_memset((void *)(param_1 + 0x68c),0,0x48);
  *(undefined4 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x594) = 0;
  *(undefined1 *)(param_1 + 0x571) = 0;
  *(undefined4 *)(param_1 + 0x59c) = 0;
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  return;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_400109d0
#define DAT_400109d0 (*(uint8_t *)(0x400109d0U))
#undef Ram40010800
#define Ram40010800 (*(uint32_t *)(0x40010800U))
#undef Ram40010804
#define Ram40010804 (*(uint32_t *)(0x40010804U))
#undef Ram40010808
#define Ram40010808 (*(uint32_t *)(0x40010808U))
#undef Ram400109d0
#define Ram400109d0 (*(uint32_t *)(0x400109d0U))
#undef UINT_4001084c
#define UINT_4001084c (*(uint *)(0x4001084cU))
#undef UINT_40010850
#define UINT_40010850 (*(uint *)(0x40010850U))
#define local_30 (*(uint *)(pf_stack_frame + 16))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c60
 */

void recovered_10009c60(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *ptr;
  void *ptr_00;
  bool bVar5;

  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  iVar2 = Ram40010800;
  if ((iVar2 != 0x50414d57) || (iVar2 = Ram40010804, iVar2 == 0)) {
LAB_10009cc0:
    *(undefined4 *)(param_1 + 0x578) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x358) = 0;
    return;
  }
  uVar3 = Ram40010808;
  bVar5 = 0xb < uVar3;
  if (bVar5) {
    uVar3 = Ram40010808;
  }
  if ((((!bVar5 || uVar3 < 0x1d4) || (pcVar1 = (code *)Ram400109d0, pcVar1 == (code *)0x0)) ||
      (iVar2 = (*pcVar1)(0,0,0,0,&local_24,&local_2c), iVar2 == 0)) || (0x9249249 < local_24))
  goto LAB_10009cc0;
  if (*(uint *)(param_1 + 0x508) < local_24) {
LAB_10009d58:
    iVar2 = Ram40010800;
    ptr_00 = (void *)0x0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
      uVar3 = Ram40010808;
      bVar5 = 0xb < uVar3;
      if (bVar5) {
        uVar3 = Ram40010808;
      }
      if ((bVar5 && 0x4f < uVar3) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) {
        ptr_00 = (*pcVar1)(local_24 * 0x1c);
      }
    }
  }
  else {
    if (local_2c <= *(uint *)(param_1 + 0x50c)) {
      iVar2 = Ram40010800;
      if (iVar2 != 0x50414d57) {
        return;
      }
      iVar2 = Ram40010804;
      if (iVar2 == 0) {
        return;
      }
      uVar3 = Ram40010808;
      bVar5 = uVar3 < 0xc;
      if (!bVar5) {
        uVar3 = Ram40010808;
      }
      if (bVar5 || uVar3 < 0x1d4) {
        return;
      }
      pcVar1 = (code *)Ram400109d0;
      if (pcVar1 == (code *)0x0) {
        return;
      }
      iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x500),*(uint *)(param_1 + 0x508),
                        *(undefined4 *)(param_1 + 0x504),*(uint *)(param_1 + 0x50c),&local_28,
                        &local_30);
      if (iVar2 == 0) {
        return;
      }
      if (*(uint *)(param_1 + 0x508) < local_28) {
        return;
      }
      if (*(uint *)(param_1 + 0x50c) < local_30) {
        return;
      }
      goto LAB_10009fe4;
    }
    if (local_24 != 0) goto LAB_10009d58;
    ptr_00 = (void *)0x0;
  }
  ptr = (void *)0x0;
  if (((local_2c != 0) && (iVar2 = Ram40010800, iVar2 == 0x50414d57)) &&
     (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((bVar5 && 0x4f < uVar3) && (pcVar1 = (code *)UINT_4001084c, pcVar1 != (code *)0x0)) {
      ptr = (*pcVar1)(local_2c);
    }
  }
  if ((((local_24 == 0) || (ptr_00 != (void *)0x0)) && ((local_2c == 0 || (ptr != (void *)0x0)))) &&
     ((iVar2 = Ram40010800, iVar2 == 0x50414d57 && (iVar2 = Ram40010804, iVar2 != 0)))) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((((bVar5 && 0x1d3 < uVar3) && (pcVar1 = (code *)Ram400109d0, pcVar1 != (code *)0x0)) &&
        (iVar2 = (*pcVar1)(ptr_00,local_24,ptr,local_2c,&local_28,&local_30), iVar2 != 0)) &&
       ((local_28 <= local_24 && (local_30 <= local_2c)))) {
      recovered_10009630(*(void **)(param_1 + 0x500));
      recovered_10009630(*(void **)(param_1 + 0x504));
      *(void **)(param_1 + 0x504) = ptr;
      *(void **)(param_1 + 0x500) = ptr_00;
      *(uint *)(param_1 + 0x508) = local_24;
      *(uint *)(param_1 + 0x50c) = local_2c;
LAB_10009fe4:
      *(uint *)(param_1 + 0x578) = local_28;
      if (local_28 != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(int *)(param_1 + 0x500) + 0x14);
        do {
          if (*piVar4 == *(int *)(param_1 + 0x35c)) {
            *(uint *)(param_1 + 0x358) = uVar3;
            return;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 7;
        } while (local_28 != uVar3);
      }
      iVar2 = recovered_1000a074();
      if (local_28 == 0) {
        return;
      }
      uVar3 = 0;
      piVar4 = (int *)(*(int *)(param_1 + 0x500) + 0x14);
      do {
        if (*piVar4 == iVar2) {
          *(uint *)(param_1 + 0x358) = uVar3;
          goto LAB_1000a06c;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 7;
      } while (local_28 != uVar3);
      *(undefined4 *)(param_1 + 0x358) = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x500) + 0x14);
LAB_1000a06c:
      *(int *)(param_1 + 0x35c) = iVar2;
      return;
    }
  }
  iVar2 = Ram40010800;
  if ((iVar2 == 0x50414d57) && (iVar2 = Ram40010804, iVar2 != 0)) {
    uVar3 = Ram40010808;
    bVar5 = 0xb < uVar3;
    if (bVar5) {
      uVar3 = Ram40010808;
    }
    if ((bVar5 && 0x53 < uVar3) && (pcVar1 = (code *)UINT_40010850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(ptr_00);
    }
  }
  iVar2 = Ram40010800;
  if (iVar2 != 0x50414d57) {
    return;
  }
  iVar2 = Ram40010804;
  if (iVar2 == 0) {
    return;
  }
  uVar3 = Ram40010808;
  bVar5 = 0xb < uVar3;
  if (bVar5) {
    uVar3 = Ram40010808;
  }
  if (!bVar5 || uVar3 < 0x54) {
    return;
  }
  pcVar1 = (code *)UINT_40010850;
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*pcVar1)(ptr);
  return;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_400109d0
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef Ram400109d0
#undef UINT_4001084c
#undef UINT_40010850
#undef local_30
#undef local_2c
#undef local_28
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
#undef UINT_400108bc
#define UINT_400108bc (*(uint *)(0x400108bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a074
 */

undefined4 recovered_1000a074(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
                    /* WARNING: Could not recover jumptable at 0x1000a0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      return iVar2;
    }
  }
  return 0xffffffff;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_400108bc

#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0c8
 */

void recovered_1000a0c8(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7)

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
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;

  uVar3 = 0x3b;
  if (param_7 != 0) {
    uVar3 = 2;
  }
  uVar4 = thunk_terror_ui_colour(uVar3);
  uVar2 = DAT_1000c07c;
  uVar3 = DAT_1000c078;
  uVar5 = param_3 + param_5;
  uVar10 = DAT_1000c07c;
  if ((int)uVar5 < (int)DAT_1000c07c) {
    uVar10 = uVar5;
  }
  uVar6 = param_2 + param_4;
  if ((int)uVar5 < 0) {
    uVar10 = 0;
  }
  uVar5 = DAT_1000c078;
  if ((int)uVar6 < (int)DAT_1000c078) {
    uVar5 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar5 = 0;
  }
  uVar6 = DAT_1000c07c;
  if ((int)param_3 < (int)DAT_1000c07c) {
    uVar6 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar6 = 0;
  }
  uVar8 = DAT_1000c078;
  if ((int)param_2 < (int)DAT_1000c078) {
    uVar8 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar8 = 0;
  }
  if ((int)uVar6 < (int)uVar10) {
    iVar7 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar9 = uVar6 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar11 = uVar8;
      if ((int)uVar8 < (int)uVar5) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar13 = SBORROW4(uVar3,uVar11);
            iVar1 = uVar3 - uVar11;
            bVar12 = uVar3 == uVar11;
            if ((int)uVar11 < (int)uVar3) {
              bVar13 = SBORROW4(uVar2,uVar6);
              iVar1 = uVar2 - uVar6;
              bVar12 = uVar2 == uVar6;
            }
            if (!bVar12 && iVar1 < 0 == bVar13) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4) = (char)(uVar4 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 1) = (char)(uVar4 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 2) = (char)uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 3) = 0xff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar5 != uVar11);
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + iVar7;
    } while (uVar6 != uVar10);
  }
  uVar3 = thunk_terror_ui_colour(3);
  recovered_1000a454(param_1,param_2,param_3,param_4,param_5,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10);
  uVar5 = thunk_terror_ui_colour(0x1f);
  uVar2 = DAT_1000c07c;
  uVar3 = DAT_1000c078;
  uVar4 = param_2 + 1;
  uVar6 = (param_4 + uVar4) - 2;
  uVar10 = DAT_1000c078;
  if ((int)uVar6 < (int)DAT_1000c078) {
    uVar10 = uVar6;
  }
  if ((int)uVar6 < 0) {
    uVar10 = 0;
  }
  uVar6 = param_3 + 2;
  if ((int)DAT_1000c07c <= (int)(param_3 + 2)) {
    uVar6 = DAT_1000c07c;
  }
  if ((int)param_3 < -2) {
    uVar6 = 0;
  }
  uVar8 = param_3 + 1;
  if ((int)DAT_1000c07c <= (int)(param_3 + 1)) {
    uVar8 = DAT_1000c07c;
  }
  if ((int)param_3 < -1) {
    uVar8 = 0;
  }
  if ((int)DAT_1000c078 <= (int)uVar4) {
    uVar4 = DAT_1000c078;
  }
  if ((int)param_2 < -1) {
    uVar4 = 0;
  }
  if ((int)uVar8 < (int)uVar6) {
    iVar7 = uVar8 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar9 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar11 = uVar4;
      if ((int)uVar4 < (int)uVar10) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar8))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar13 = SBORROW4(uVar3,uVar11);
            iVar1 = uVar3 - uVar11;
            bVar12 = uVar3 == uVar11;
            if ((int)uVar11 < (int)uVar3) {
              bVar13 = SBORROW4(uVar2,uVar8);
              iVar1 = uVar2 - uVar8;
              bVar12 = uVar2 == uVar8;
            }
            if (!bVar12 && iVar1 < 0 == bVar13) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar11 * 4) = (char)(uVar5 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar11 * 4 + 1) = (char)(uVar5 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar7 + uVar11 * 4 + 2) = (char)uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar7 + uVar11 * 4 + 3) = 0xff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + iVar9;
    } while (uVar8 != uVar6);
  }
  uVar3 = 0x32;
  if (param_7 != 0) {
    uVar3 = 1;
  }
  uVar3 = thunk_terror_ui_colour(uVar3);
  recovered_1000a86c(param_1,param_2 + 9,param_3 + 6,param_6,
                     uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | (uVar3 & 0xff0000) >> 0x10,
                     param_4 - 0x10);
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c

#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a454
 */

void recovered_1000a454(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

  uVar7 = DAT_1000c07c;
  uVar6 = DAT_1000c078;
  uVar11 = param_2 + param_4;
  uVar10 = DAT_1000c078;
  if ((int)uVar11 < (int)DAT_1000c078) {
    uVar10 = uVar11;
  }
  if ((int)uVar11 < 0) {
    uVar10 = 0;
  }
  uVar12 = param_3 + 1;
  if ((int)DAT_1000c07c <= (int)(param_3 + 1)) {
    uVar12 = DAT_1000c07c;
  }
  if ((int)param_3 < -1) {
    uVar12 = 0;
  }
  uVar16 = DAT_1000c07c;
  if ((int)param_3 < (int)DAT_1000c07c) {
    uVar16 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar16 = 0;
  }
  uVar8 = DAT_1000c078;
  if ((int)param_2 < (int)DAT_1000c078) {
    uVar8 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar8 = 0;
  }
  iVar9 = uVar16 * DAT_1000c078;
  iVar1 = (uintptr_t)DAT_1000c078 * 4;
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
    iVar14 = uVar12 * (uintptr_t)uVar6 * 4;
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

#undef DAT_1000c078
#undef DAT_1000c07c

#undef DAT_1000c078
#define DAT_1000c078 (*(int *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0x520U)))
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
#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_38 (*(void * (*)[14])(pf_stack_frame + 40))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a86c
 */

void recovered_1000a86c(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  int unaff_r5;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;

  if (param_1 == 0) {
    return;
  }
  if (param_6 != 0) {
    if (param_4 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x340);
    }
    if (param_4 != 0 && unaff_r5 != 0) {
      thunk_memset(local_38,0,0x18);
      iVar5 = Ram40010800;
      if ((iVar5 == 0x50414d57) && (iVar5 = Ram40010804, iVar5 != 0)) {
        uVar7 = Ram40010808;
        bVar18 = 0xb < uVar7;
        if (bVar18) {
          uVar7 = Ram40010808;
        }
        if ((bVar18 && 0x17b < uVar7) && (pcVar9 = (code *)UINT_40010978, pcVar9 != (code *)0x0)) {
          uVar7 = (*pcVar9)((char *)param_4,0xffffffff,1,
                            param_5 << 0x18 | ((param_5 & 0xff00) >> 8) << 0x10 |
                            ((param_5 & 0xff0000) >> 0x10) << 8 | (param_5 | 0xff000000) >> 0x18,
                            local_38);
          iVar6 = DAT_1000c07c;
          iVar5 = DAT_1000c078;
          pvVar8 = (void *)0x0;
          if (uVar7 != 0) {
            local_50 = local_38[0];
            pvVar8 = local_38[0];
          }
          if (uVar7 != 0 && pvVar8 != (void *)0x0) {
            if (local_24 < local_2c << 2) {
              iVar5 = Ram40010800;
              if (iVar5 != 0x50414d57) {
                return;
              }
              iVar5 = Ram40010804;
              if (iVar5 == 0) {
                return;
              }
              uVar7 = Ram40010808;
              bVar18 = uVar7 < 0xc;
              if (!bVar18) {
                uVar7 = Ram40010808;
              }
              if (bVar18 || uVar7 < 0x54) {
                return;
              }
              pcVar9 = (code *)UINT_40010850;
            }
            else {
              uVar7 = param_6;
              if (local_2c < param_6) {
                uVar7 = local_2c;
              }
              if ((int)param_6 < 1) {
                uVar7 = local_2c;
              }
              if (local_28 != 0) {
                uVar17 = 0;
                iVar2 = DAT_1000c078 * 4;
                uVar10 = (DAT_1000c078 * param_3 + param_2) * 4 | 3;
                do {
                  if (((-1 < (int)(uVar17 + param_3)) && ((int)(uVar17 + param_3) < iVar6)) &&
                     (uVar7 != 0)) {
                    pvVar8 = local_50;
                    uVar11 = uVar10;
                    iVar14 = param_2;
                    uVar16 = uVar7;
                    do {
                      if ((-1 < iVar14) && (iVar14 < iVar5)) {
                        iVar4 = uVar17 * local_24;
                        bVar3 = *(byte *)((int)pvVar8 + iVar4 + 3);
                        if (bVar3 != 0) {
                          iVar13 = *(int *)(param_1 + 0x340);
                          iVar15 = iVar13 + uVar11;
                          if (bVar3 == 0xff) {
                            *(undefined1 *)(iVar15 + -3) =
                                 *(undefined1 *)((int)pvVar8 + uVar17 * local_24);
                            *(undefined1 *)(iVar15 + -2) = *(undefined1 *)((int)pvVar8 + iVar4 + 1);
                            uVar12 = *(undefined1 *)((int)pvVar8 + iVar4 + 2);
                          }
                          else {
                            uVar1 = bVar3 ^ 0xff;
                            *(char *)(iVar15 + -3) =
                                 (char)(((int)(short)uVar1 *
                                         (int)(short)(ushort)*(byte *)(iVar15 + -3) +
                                         (int)(short)(ushort)*(byte *)((int)pvVar8 +
                                                                      uVar17 * local_24) *
                                         (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                            *(char *)(iVar15 + -2) =
                                 (char)(((int)(short)uVar1 *
                                         (int)(short)(ushort)*(byte *)(iVar15 + -2) +
                                         (int)(short)(ushort)*(byte *)((int)pvVar8 + iVar4 + 1) *
                                         (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                            uVar12 = (undefined1)
                                     (((int)(short)uVar1 *
                                       (int)(short)(ushort)*(byte *)(iVar15 + -1) +
                                       (int)(short)(ushort)*(byte *)((int)pvVar8 + iVar4 + 2) *
                                       (int)(short)(ushort)bVar3 + 0x7fU) / 0xff);
                          }
                          *(undefined1 *)(iVar15 + -1) = uVar12;
                          *(undefined1 *)(iVar13 + uVar11) = 0xff;
                        }
                      }
                      uVar11 = uVar11 + 4;
                      pvVar8 = (void *)((int)pvVar8 + 4);
                      iVar14 = iVar14 + 1;
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                  uVar17 = uVar17 + 1;
                  uVar10 = uVar10 + iVar2;
                } while (uVar17 < local_28);
              }
              iVar5 = Ram40010800;
              if (iVar5 != 0x50414d57) {
                return;
              }
              iVar5 = Ram40010804;
              if (iVar5 == 0) {
                return;
              }
              uVar7 = Ram40010808;
              bVar18 = uVar7 < 0xc;
              if (!bVar18) {
                uVar7 = Ram40010808;
              }
              if (bVar18 || uVar7 < 0x54) {
                return;
              }
              pcVar9 = (code *)UINT_40010850;
            }
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(local_50);
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808
#undef UINT_40010850
#undef UINT_40010978
#undef local_50
#undef local_38
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab9c
 */

void recovered_1000ab9c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;

  uVar4 = thunk_terror_ui_colour(0x2a);
  uVar3 = DAT_1000c07c;
  uVar5 = DAT_1000c078;
  uVar10 = param_3 + 0x12;
  if ((int)DAT_1000c07c <= (int)(param_3 + 0x12)) {
    uVar10 = DAT_1000c07c;
  }
  if ((int)param_3 < -0x12) {
    uVar10 = 0;
  }
  uVar8 = param_2 + 0x12;
  if ((int)DAT_1000c078 <= (int)(param_2 + 0x12)) {
    uVar8 = DAT_1000c078;
  }
  if ((int)param_2 < -0x12) {
    uVar8 = 0;
  }
  uVar6 = DAT_1000c07c;
  if ((int)param_3 < (int)DAT_1000c07c) {
    uVar6 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar6 = 0;
  }
  uVar7 = DAT_1000c078;
  if ((int)param_2 < (int)DAT_1000c078) {
    uVar7 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar7 = 0;
  }
  if ((int)uVar6 < (int)uVar10) {
    iVar1 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar9 = uVar6 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar11 = uVar7;
      if ((int)uVar7 < (int)uVar8) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar6))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar13 = SBORROW4(uVar5,uVar11);
            iVar2 = uVar5 - uVar11;
            bVar12 = uVar5 == uVar11;
            if ((int)uVar11 < (int)uVar5) {
              bVar13 = SBORROW4(uVar3,uVar6);
              iVar2 = uVar3 - uVar6;
              bVar12 = uVar3 == uVar6;
            }
            if (!bVar12 && iVar2 < 0 == bVar13) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4) = (char)(uVar4 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 1) = (char)(uVar4 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 2) = (char)uVar4;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar11 * 4 + 3) = 0xff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + iVar1;
    } while (uVar6 != uVar10);
  }
  uVar5 = thunk_terror_ui_colour(3);
  recovered_1000a454(param_1,param_2,param_3,0x12,0x12,
                     uVar5 & 0xff00 | (uVar5 & 0xff) << 0x10 | (uVar5 & 0xff0000) >> 0x10);
  uVar3 = DAT_1000c07c;
  uVar5 = DAT_1000c078;
  uVar10 = param_3 + 0xd;
  if ((int)DAT_1000c07c <= (int)(param_3 + 0xd)) {
    uVar10 = DAT_1000c07c;
  }
  if ((int)param_3 < -0xd) {
    uVar10 = 0;
  }
  uVar4 = param_2 + 0xd;
  if ((int)DAT_1000c078 <= (int)(param_2 + 0xd)) {
    uVar4 = DAT_1000c078;
  }
  if ((int)param_2 < -0xd) {
    uVar4 = 0;
  }
  uVar8 = param_3 + 5;
  if ((int)DAT_1000c07c <= (int)(param_3 + 5)) {
    uVar8 = DAT_1000c07c;
  }
  if ((int)param_3 < -5) {
    uVar8 = 0;
  }
  uVar6 = param_2 + 5;
  if ((int)DAT_1000c078 <= (int)(param_2 + 5)) {
    uVar6 = DAT_1000c078;
  }
  if ((int)param_2 < -5) {
    uVar6 = 0;
  }
  if ((int)uVar8 < (int)uVar10) {
    iVar1 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar9 = uVar8 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
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
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar7 * 4) = (char)param_4;
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar7 * 4 + 1) =
                   (char)((uint)param_4 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar9 + uVar7 * 4 + 2) =
                   (char)((uint)param_4 >> 0x10);
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar9 + uVar7 * 4 + 3) = 0xff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + iVar1;
    } while (uVar8 != uVar10);
  }
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c

#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae94
 */

void recovered_1000ae94(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                       int param_7,uint param_8)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;

  uVar1 = thunk_terror_ui_colour(0x45);
  uVar12 = DAT_1000c07c;
  uVar2 = DAT_1000c078;
  uVar7 = param_3 + param_5;
  uVar21 = DAT_1000c07c;
  if ((int)uVar7 < (int)DAT_1000c07c) {
    uVar21 = uVar7;
  }
  uVar8 = param_2 + param_4;
  if ((int)uVar7 < 0) {
    uVar21 = 0;
  }
  uVar11 = DAT_1000c078;
  if ((int)uVar8 < (int)DAT_1000c078) {
    uVar11 = uVar8;
  }
  if ((int)uVar8 < 0) {
    uVar11 = 0;
  }
  uVar8 = DAT_1000c07c;
  if ((int)param_3 < (int)DAT_1000c07c) {
    uVar8 = param_3;
  }
  if ((int)param_3 < 0) {
    uVar8 = 0;
  }
  uVar16 = DAT_1000c078;
  if ((int)param_2 < (int)DAT_1000c078) {
    uVar16 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar8 < (int)uVar21) {
    iVar17 = uVar8 * (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar3 = (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar18 = uVar16;
      if ((int)uVar16 < (int)uVar11) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar18 | uVar8))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar25 = SBORROW4(uVar2,uVar18);
            iVar4 = uVar2 - uVar18;
            bVar24 = uVar2 == uVar18;
            if ((int)uVar18 < (int)uVar2) {
              bVar25 = SBORROW4(uVar12,uVar8);
              iVar4 = uVar12 - uVar8;
              bVar24 = uVar12 == uVar8;
            }
            if (!bVar24 && iVar4 < 0 == bVar25) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar17 + uVar18 * 4) = (char)(uVar1 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar17 + uVar18 * 4 + 1) = (char)(uVar1 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar17 + uVar18 * 4 + 2) = (char)uVar1;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar17 + uVar18 * 4 + 3) = 0xff;
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar11 != uVar18);
      }
      uVar8 = uVar8 + 1;
      iVar17 = iVar17 + iVar3;
    } while (uVar8 != uVar21);
  }
  uVar2 = thunk_terror_ui_colour(0x46);
  recovered_1000a454(param_1,param_2,param_3,param_4,param_5,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff0000) >> 0x10);
  if (0 < (int)param_4) {
    uVar21 = 0;
    iVar17 = param_5 + -4;
    uVar12 = uVar7 - 1;
    iVar3 = uVar7 - 2;
    uVar2 = param_4 - 1;
    do {
      iVar4 = 0x47;
      if (param_4 != 1) {
        iVar4 = recovered_10003480(uVar21 * 0x47,uVar2);
      }
      uVar1 = 0;
      if (param_6 != 0) {
        uVar1 = (uint)*(byte *)(param_6 + iVar4);
      }
      uVar8 = 0;
      if (param_7 != 0) {
        uVar8 = (uint)*(byte *)(param_7 + iVar4);
      }
      uVar11 = uVar21 + param_2;
      if (param_8 == 0) {
        if (uVar21 != 0) {
          iVar4 = recovered_10003480(uVar21 * 0x47 + -0x47,uVar2);
          uVar16 = 0;
          uVar18 = 0;
          if (param_6 != 0) {
            uVar16 = (uint)*(byte *)(param_6 + iVar4);
          }
          if (param_7 != 0) {
            uVar18 = (uint)*(byte *)(param_7 + iVar4);
          }
          if (param_6 != 0) {
            iVar20 = -1;
            iVar4 = (int)((ulonglong)((longlong)(int)(uVar1 * iVar17) * -0x51eb851f) >> 0x20);
            iVar9 = (int)((ulonglong)((longlong)(int)(uVar16 * iVar17) * -0x51eb851f) >> 0x20);
            iVar5 = (iVar4 >> 5) - (iVar4 >> 0x1f);
            uVar16 = iVar5 + iVar3;
            iVar9 = (iVar9 >> 5) - (iVar9 >> 0x1f);
            uVar1 = iVar9 + iVar3;
            iVar4 = iVar5 - iVar9;
            if ((int)uVar1 < (int)uVar16) {
              iVar4 = iVar9 - iVar5;
              iVar20 = 1;
            }
            uVar6 = thunk_terror_ui_colour(0x23);
            uVar22 = DAT_1000c07c;
            uVar14 = DAT_1000c078;
            uVar10 = uVar6 & 0xff;
            uVar13 = uVar11 - 1;
            uVar19 = iVar4 + 1;
            while( true ) {
              if (((param_1 != 0) && (uVar10 = uVar13 | uVar1, -1 < (int)uVar10)) &&
                 (uVar10 = *(uint *)(param_1 + 0x340), uVar10 != 0)) {
                bVar25 = SBORROW4(uVar14,uVar13);
                iVar5 = uVar14 - uVar13;
                bVar24 = uVar14 == uVar13;
                if ((int)uVar13 < (int)uVar14) {
                  bVar25 = SBORROW4(uVar22,uVar1);
                  iVar5 = uVar22 - uVar1;
                  bVar24 = uVar22 == uVar1;
                }
                if (!bVar24 && iVar5 < 0 == bVar25) {
                  iVar5 = uVar1 * uVar14 + uVar13;
                  *(char *)(uVar10 + iVar5 * 4) = (char)(uVar6 >> 0x10);
                  *(char *)(*(int *)(param_1 + 0x340) + iVar5 * 4 + 1) = (char)(uVar6 >> 8);
                  *(char *)(*(int *)(param_1 + 0x340) + iVar5 * 4 + 2) = (char)uVar6;
                  uVar10 = *(int *)(param_1 + 0x340) + iVar5 * 4;
                  *(undefined1 *)(uVar10 + 3) = 0xff;
                }
              }
              if (uVar1 == uVar16) {
                uVar10 = uVar11;
              }
              if (uVar1 == uVar16 && uVar13 == uVar10) break;
              if (iVar4 <= (int)(uVar19 * 2)) {
                uVar13 = uVar13 + 1;
              }
              uVar10 = uVar19;
              if ((int)uVar19 < 1) {
                uVar10 = uVar19 + 1;
              }
              if (iVar4 <= (int)(uVar19 * 2)) {
                uVar10 = uVar10 + iVar4;
              }
              bVar24 = (int)uVar19 < 1;
              uVar19 = uVar10;
              if (bVar24) {
                uVar1 = uVar1 + iVar20;
              }
            }
          }
          if (param_7 != 0) {
            iVar9 = -1;
            iVar4 = (int)((ulonglong)((longlong)(int)(uVar8 * iVar17) * -0x51eb851f) >> 0x20);
            iVar5 = (iVar4 >> 5) - (iVar4 >> 0x1f);
            uVar8 = iVar5 + iVar3;
            iVar4 = (int)((ulonglong)((longlong)(int)(uVar18 * iVar17) * -0x51eb851f) >> 0x20);
            iVar4 = (iVar4 >> 5) - (iVar4 >> 0x1f);
            uVar1 = iVar4 + iVar3;
            if ((int)uVar1 < (int)uVar8) {
              iVar9 = 1;
            }
            uVar10 = thunk_terror_ui_colour(0x12);
            uVar18 = DAT_1000c07c;
            uVar16 = DAT_1000c078;
            iVar20 = iVar5 - iVar4;
            if ((int)uVar1 < (int)uVar8) {
              iVar20 = iVar4 - iVar5;
            }
            uVar14 = uVar11 - 1;
            uVar13 = uVar11;
            uVar19 = iVar20 + 1;
            while( true ) {
              if (((param_1 != 0) && (uVar13 = uVar14 | uVar1, -1 < (int)uVar13)) &&
                 (uVar13 = *(uint *)(param_1 + 0x340), uVar13 != 0)) {
                bVar25 = SBORROW4(uVar16,uVar14);
                iVar4 = uVar16 - uVar14;
                bVar24 = uVar16 == uVar14;
                if ((int)uVar14 < (int)uVar16) {
                  bVar25 = SBORROW4(uVar18,uVar1);
                  iVar4 = uVar18 - uVar1;
                  bVar24 = uVar18 == uVar1;
                }
                if (!bVar24 && iVar4 < 0 == bVar25) {
                  iVar4 = uVar1 * uVar16 + uVar14;
                  *(char *)(uVar13 + iVar4 * 4) = (char)(uVar10 >> 0x10);
                  *(char *)(*(int *)(param_1 + 0x340) + iVar4 * 4 + 1) = (char)(uVar10 >> 8);
                  *(char *)(*(int *)(param_1 + 0x340) + iVar4 * 4 + 2) = (char)uVar10;
                  uVar13 = *(int *)(param_1 + 0x340) + iVar4 * 4;
                  *(undefined1 *)(uVar13 + 3) = 0xff;
                }
              }
              if (uVar1 == uVar8) {
                uVar13 = uVar11;
              }
              if (uVar1 == uVar8 && uVar14 == uVar13) break;
              if (iVar20 <= (int)(uVar19 * 2)) {
                uVar14 = uVar14 + 1;
              }
              uVar13 = uVar19;
              if ((int)uVar19 < 1) {
                uVar13 = uVar19 + 1;
              }
              if (iVar20 <= (int)(uVar19 * 2)) {
                uVar13 = uVar13 + iVar20;
              }
              bVar24 = (int)uVar19 < 1;
              uVar19 = uVar13;
              if (bVar24) {
                uVar1 = uVar1 + iVar9;
              }
            }
          }
        }
      }
      else {
        uVar1 = param_8;
        if (uVar21 != 0) {
          uVar8 = uVar21;
          uVar1 = uVar2;
        }
        if ((uVar21 != 0 && uVar8 != uVar1) && (2 < param_5)) {
          iVar4 = 0x47;
          if (3 < param_4) {
            iVar4 = recovered_10003480(uVar21 * 0x47 + -0x47,param_4 - 3);
          }
          uVar1 = 0;
          if ((param_7 != 0) && (uVar1 = (uint)*(byte *)(param_7 + iVar4), 99 < uVar1)) {
            uVar1 = 100;
          }
          uVar8 = 0;
          if (param_6 != 0) {
            uVar8 = (uint)*(byte *)(param_6 + iVar4);
            if (100 - uVar1 < (uint)*(byte *)(param_6 + iVar4)) {
              uVar8 = 100 - uVar1;
            }
          }
          uVar13 = thunk_terror_ui_colour(0x12);
          uVar18 = DAT_1000c07c;
          uVar16 = DAT_1000c078;
          uVar19 = uVar12 - (uVar1 * (param_5 + -2)) / 100;
          uVar10 = DAT_1000c07c;
          if ((int)uVar19 < (int)DAT_1000c07c) {
            uVar10 = uVar19;
          }
          if ((int)uVar19 < 0) {
            uVar10 = 0;
          }
          uVar14 = DAT_1000c07c;
          if ((int)uVar12 < (int)DAT_1000c07c) {
            uVar14 = uVar12;
          }
          uVar22 = uVar11 + 1;
          if ((int)uVar7 < 1) {
            uVar14 = 0;
          }
          uVar6 = DAT_1000c078;
          if ((int)uVar22 < (int)DAT_1000c078) {
            uVar6 = uVar22;
          }
          if ((int)uVar11 < -1) {
            uVar6 = 0;
          }
          uVar15 = DAT_1000c078;
          if ((int)uVar11 < (int)DAT_1000c078) {
            uVar15 = uVar11;
          }
          if ((int)uVar11 < 0) {
            uVar15 = 0;
          }
          if ((int)uVar10 < (int)uVar14) {
            iVar4 = uVar10 * (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
            iVar5 = (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
            do {
              uVar23 = uVar15;
              if ((int)uVar15 < (int)uVar6) {
                do {
                  if (((param_1 != 0) && (-1 < (int)(uVar23 | uVar10))) &&
                     (*(int *)(param_1 + 0x340) != 0)) {
                    bVar25 = SBORROW4(uVar16,uVar23);
                    iVar9 = uVar16 - uVar23;
                    bVar24 = uVar16 == uVar23;
                    if ((int)uVar23 < (int)uVar16) {
                      bVar25 = SBORROW4(uVar18,uVar10);
                      iVar9 = uVar18 - uVar10;
                      bVar24 = uVar18 == uVar10;
                    }
                    if (!bVar24 && iVar9 < 0 == bVar25) {
                      *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4) =
                           (char)(uVar13 >> 0x10);
                      *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 1) =
                           (char)(uVar13 >> 8);
                      *(char *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 2) = (char)uVar13;
                      *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar4 + uVar23 * 4 + 3) = 0xff;
                    }
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar6 != uVar23);
              }
              uVar10 = uVar10 + 1;
              iVar4 = iVar4 + iVar5;
            } while (uVar10 != uVar14);
          }
          uVar10 = uVar12 - ((uVar8 + uVar1) * (param_5 + -2)) / 100;
          uVar18 = thunk_terror_ui_colour(0x23);
          uVar8 = DAT_1000c07c;
          uVar1 = DAT_1000c078;
          uVar16 = DAT_1000c07c;
          if ((int)uVar19 < (int)DAT_1000c07c) {
            uVar16 = uVar19;
          }
          if ((int)uVar19 < 0) {
            uVar16 = 0;
          }
          if ((int)DAT_1000c078 <= (int)uVar22) {
            uVar22 = DAT_1000c078;
          }
          if ((int)uVar11 < -1) {
            uVar22 = 0;
          }
          uVar13 = DAT_1000c07c;
          if ((int)uVar10 < (int)DAT_1000c07c) {
            uVar13 = uVar10;
          }
          if ((int)uVar10 < 0) {
            uVar13 = 0;
          }
          uVar10 = DAT_1000c078;
          if ((int)uVar11 < (int)DAT_1000c078) {
            uVar10 = uVar11;
          }
          if ((int)uVar11 < 0) {
            uVar10 = 0;
          }
          if ((int)uVar13 < (int)uVar16) {
            iVar4 = (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
            iVar5 = uVar13 * (uintptr_t)(uintptr_t)(uintptr_t)DAT_1000c078 * 4;
            do {
              uVar11 = uVar10;
              if ((int)uVar10 < (int)uVar22) {
                do {
                  if (((param_1 != 0) && (-1 < (int)(uVar11 | uVar13))) &&
                     (*(int *)(param_1 + 0x340) != 0)) {
                    bVar25 = SBORROW4(uVar1,uVar11);
                    iVar9 = uVar1 - uVar11;
                    bVar24 = uVar1 == uVar11;
                    if ((int)uVar11 < (int)uVar1) {
                      bVar25 = SBORROW4(uVar8,uVar13);
                      iVar9 = uVar8 - uVar13;
                      bVar24 = uVar8 == uVar13;
                    }
                    if (!bVar24 && iVar9 < 0 == bVar25) {
                      *(char *)(*(int *)(param_1 + 0x340) + iVar5 + uVar11 * 4) =
                           (char)(uVar18 >> 0x10);
                      *(char *)(*(int *)(param_1 + 0x340) + iVar5 + uVar11 * 4 + 1) =
                           (char)(uVar18 >> 8);
                      *(char *)(*(int *)(param_1 + 0x340) + iVar5 + uVar11 * 4 + 2) = (char)uVar18;
                      *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar5 + uVar11 * 4 + 3) = 0xff;
                    }
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar22 != uVar11);
              }
              uVar13 = uVar13 + 1;
              iVar5 = iVar5 + iVar4;
            } while (uVar13 != uVar16);
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_4);
  }
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c

#undef DAT_1000c078
#define DAT_1000c078 (*(uint *)(((uintptr_t)pf_module_state + 0x51cU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint *)(((uintptr_t)pf_module_state + 0x520U)))
#undef str_1000bebb
#define str_1000bebb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b784
 */

void recovered_1000b784(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;

  cVar3 = *(char *)(param_1 + 0x434);
  uVar5 = thunk_terror_ui_colour(2);
  uVar4 = DAT_1000c07c;
  uVar6 = DAT_1000c078;
  pcVar7 = str_1000bebb;
  if (cVar3 != '\0') {
    pcVar7 = (char *)(param_1 + 0x434);
  }
  uVar14 = param_3 + 0x24U;
  if ((int)DAT_1000c07c <= (int)(param_3 + 0x24U)) {
    uVar14 = DAT_1000c07c;
  }
  if (param_3 < -0x24) {
    uVar14 = 0;
  }
  uVar12 = param_3 + 0xe;
  uVar11 = param_2 + 0x130U;
  if ((int)DAT_1000c078 <= (int)(param_2 + 0x130U)) {
    uVar11 = DAT_1000c078;
  }
  if (param_2 < -0x130) {
    uVar11 = 0;
  }
  uVar8 = DAT_1000c07c;
  if ((int)uVar12 < (int)DAT_1000c07c) {
    uVar8 = uVar12;
  }
  uVar13 = param_2 + 0x36;
  if (param_3 < -0xe) {
    uVar8 = 0;
  }
  uVar9 = DAT_1000c078;
  if ((int)uVar13 < (int)DAT_1000c078) {
    uVar9 = uVar13;
  }
  if (param_2 < -0x36) {
    uVar9 = 0;
  }
  if ((int)uVar8 < (int)uVar14) {
    iVar10 = uVar8 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar15 = uVar9;
      if ((int)uVar9 < (int)uVar11) {
        do {
          if ((-1 < (int)(uVar15 | uVar8)) && (*(int *)(param_1 + 0x340) != 0)) {
            bVar17 = SBORROW4(uVar6,uVar15);
            iVar2 = uVar6 - uVar15;
            bVar16 = uVar6 == uVar15;
            if ((int)uVar15 < (int)uVar6) {
              bVar17 = SBORROW4(uVar4,uVar8);
              iVar2 = uVar4 - uVar8;
              bVar16 = uVar4 == uVar8;
            }
            if (!bVar16 && iVar2 < 0 == bVar17) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar15 * 4) = (char)(uVar5 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar15 * 4 + 1) = (char)(uVar5 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar15 * 4 + 2) = (char)uVar5;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar15 * 4 + 3) = 0xff;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar11 != uVar15);
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + iVar1;
    } while (uVar8 != uVar14);
  }
  uVar6 = thunk_terror_ui_colour(3);
  recovered_1000a454(param_1,uVar13,uVar12,0xfa,0x16,
                     uVar6 & 0xff00 | (uVar6 & 0xff) << 0x10 | (uVar6 & 0xff0000) >> 0x10);
  uVar6 = thunk_terror_ui_colour(1);
  recovered_1000a86c(param_1,param_2 + 0x3f,param_3 + 0x15,(int)pcVar7,
                     uVar6 & 0xff00 | (uVar6 & 0xff) << 0x10 | (uVar6 & 0xff0000) >> 0x10,0xd8);
  uVar14 = thunk_terror_ui_colour(4);
  uVar4 = DAT_1000c07c;
  uVar6 = DAT_1000c078;
  uVar5 = param_2 + 0x12fU;
  if ((int)DAT_1000c078 <= (int)(param_2 + 0x12fU)) {
    uVar5 = DAT_1000c078;
  }
  if (param_2 < -0x12f) {
    uVar5 = 0;
  }
  uVar11 = param_2 + 0x11eU;
  if ((int)DAT_1000c078 <= (int)(param_2 + 0x11eU)) {
    uVar11 = DAT_1000c078;
  }
  if (param_2 < -0x11e) {
    uVar11 = 0;
  }
  uVar12 = param_3 + 0x23U;
  if ((int)DAT_1000c07c <= (int)(param_3 + 0x23U)) {
    uVar12 = DAT_1000c07c;
  }
  if (param_3 < -0x23) {
    uVar12 = 0;
  }
  uVar8 = param_3 + 0xfU;
  if ((int)DAT_1000c07c <= (int)(param_3 + 0xfU)) {
    uVar8 = DAT_1000c07c;
  }
  if (param_3 < -0xf) {
    uVar8 = 0;
  }
  if ((int)uVar8 < (int)uVar12) {
    iVar10 = uVar8 * (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    iVar1 = (uintptr_t)(uintptr_t)DAT_1000c078 * 4;
    do {
      uVar13 = uVar11;
      if ((int)uVar11 < (int)uVar5) {
        do {
          if (((param_1 != 0) && (-1 < (int)(uVar13 | uVar8))) && (*(int *)(param_1 + 0x340) != 0))
          {
            bVar17 = SBORROW4(uVar6,uVar13);
            iVar2 = uVar6 - uVar13;
            bVar16 = uVar6 == uVar13;
            if ((int)uVar13 < (int)uVar6) {
              bVar17 = SBORROW4(uVar4,uVar8);
              iVar2 = uVar4 - uVar8;
              bVar16 = uVar4 == uVar8;
            }
            if (!bVar16 && iVar2 < 0 == bVar17) {
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar13 * 4) = (char)(uVar14 >> 0x10);
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar13 * 4 + 1) = (char)(uVar14 >> 8);
              *(char *)(*(int *)(param_1 + 0x340) + iVar10 + uVar13 * 4 + 2) = (char)uVar14;
              *(undefined1 *)(*(int *)(param_1 + 0x340) + iVar10 + uVar13 * 4 + 3) = 0xff;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + iVar1;
    } while (uVar8 != uVar12);
  }
  uVar6 = thunk_terror_ui_colour(1);
  recovered_1000a86c(param_1,param_2 + 0x123,param_3 + 0x15,((uintptr_t)pf_module_state + 0x375U),
                     uVar6 & 0xff00 | (uVar6 & 0xff) << 0x10 | (uVar6 & 0xff0000) >> 0x10,8);
  return;
}

#undef DAT_1000c078
#undef DAT_1000c07c
#undef str_1000bebb
