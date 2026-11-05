/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10001a04(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  recovered_10001a0c(param_1,param_2,(uint *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10001a0c(uint param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 == 0) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 == (uint *)0x0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    for (uVar1 = 0x1f; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
      uVar3 = param_1 >> (uVar1 & 0xff) & 1 | uVar3 << 1;
      if (param_2 <= uVar3) {
        uVar2 = uVar2 | 1 << (uVar1 & 0xff);
        uVar3 = uVar3 - param_2;
      }
    }
    if (param_3 == (uint *)0x0) {
      return uVar2;
    }
  }
  *param_3 = uVar3;
  return uVar2;
}


/* Recover the unsigned remainder output. Pooka's Free Software License. */
uint recovered_10001a84(uint a,uint b){uint remainder=0;recovered_10001a0c(a,b,&remainder);return remainder;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

int recovered_10001aa8(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  uVar1 = recovered_10001a0c(uVar1,uVar2,(uint *)0x0);
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

int recovered_10001ae0(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  local_10 = 0;
  uVar1 = param_1;
  if (param_1 < 0) {
    uVar1 = -param_1;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  recovered_10001a0c(uVar1,param_2,&local_10);
  if (param_1 < 0) {
    local_10 = -local_10;
  }
  return local_10;
}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_10001b24(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar10 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    uVar8 = 0;
    uVar10 = 0;
    uVar4 = 0;
    while (-1 < (int)uVar5) {
      uVar3 = uVar4 << 1 | uVar10 >> 0x1f;
      uVar7 = uVar5 - 0x20;
      uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar4 = param_2 >> (uVar7 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar10 << 1;
      bVar1 = uVar3 <= param_4;
      bVar2 = (uint)(param_3 <= uVar6) <= uVar3 - param_4;
      uVar10 = uVar6 - param_3;
      uVar4 = uVar3 - (param_4 + (param_3 > uVar6));
      if (bVar1 && bVar2) {
        uVar10 = uVar6;
        uVar4 = uVar3;
      }
      uVar3 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar3 = 1 << (uVar7 & 0xff);
      }
      if (!bVar1 || !bVar2) {
        uVar8 = uVar8 | uVar3;
      }
      uVar3 = 1 << (uVar5 & 0xff);
      uVar5 = uVar5 - 1;
      if (-1 < (int)uVar7) {
        uVar3 = 0;
      }
      if (!bVar1 || !bVar2) {
        uVar9 = uVar9 | uVar3;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = uVar4;
  }
  return CONCAT44(uVar8,uVar9);
}


#undef DAT_10001cac
#define DAT_10001cac (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10001c2c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;

  dVar8 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar3 = 0;
  uVar4 = 0;
  if (0.0 < dVar8) {
    uVar5 = 0x3f;
    dVar9 = DAT_10001cac;
    while (-1 < (int)uVar5) {
      bVar1 = dVar9 <= dVar8;
      uVar6 = 1 << (uVar5 & 0xff);
      uVar7 = uVar5 - 0x20;
      if (-1 < (int)uVar7) {
        uVar6 = 0;
      }
      bVar2 = dVar9 <= dVar8;
      dVar10 = dVar8 - dVar9;
      dVar9 = dVar9 * 0.5;
      if (bVar1) {
        uVar3 = uVar3 | uVar6;
      }
      uVar6 = 0x20 - uVar5;
      uVar5 = uVar5 - 1;
      uVar6 = 1 >> (uVar6 & 0xff);
      if (-1 < (int)uVar7) {
        uVar6 = 1 << (uVar7 & 0xff);
      }
      if (bVar2) {
        uVar4 = uVar4 | uVar6;
        dVar8 = dVar10;
      }
    }
    return CONCAT44(uVar4,uVar3);
  }
  return 0;
}

#undef DAT_10001cac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_10001cb4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10001c2c(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10001c2c(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_10001d00(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10001c2c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_10001d10(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10001cb4(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

void recovered_10001d20(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  for (; param_1 != 0 || param_2 != 0; param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1) {
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x350U)
 */

void recovered_10001d54(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 0) {
    recovered_10001d20(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10001d20(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_10001d7c(void)

{
  unsigned char frame[64] = {0};

  uint in_r0;
  undefined4 extraout_r0 = 0;
  uint in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10001d20(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_10001d98(void)

{
  unsigned char frame[64] = {0};

  int in_r0;
  undefined4 extraout_r0 = 0;
  int in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10001d54(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10001dc4
#define DAT_10001dc4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_10001db4(void)

{
  unsigned char frame[64] = {0};

  *DAT_10001dc4 = 0;
  recovered_10001dc8();
  return;
}

#undef DAT_10001dc4

#undef DAT_10001fa8
#define DAT_10001fa8 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_10001fac
#define DAT_10001fac (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_a4 (*(uint (*)[32])(frame + 16))
#define local_24 (*(int *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

void recovered_10001dc8(void)

{
  unsigned char frame[212] = {0};

  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int *in_r3;
  uint uVar4;
  int *extraout_r3 = 0;
  uint uVar5;
  undefined1 *puVar6;
  uint *unaff_r5;
  int iVar7;
  uint uVar8;
  uint unaff_r8;
  int *piVar9;
  uint uVar10;

  pcVar1 = DAT_10001fac;
  local_24 = 0;
  if (*DAT_10001fac == '\0') {
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar5 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10001fa8[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar5 != uVar10; uVar5 = uVar5 + 1) {
      uVar8 = DAT_10001fa8[uVar5 * 2 + 2];
      uVar4 = DAT_10001fa8[uVar5 * 2 + 3];
      uVar2 = uVar4 + uVar8;
      in_r3 = (int *)0x0;
      if ((uVar4 != 0) &&
         (in_r3 = (int *)(uVar2 - 0x300001),
         CARRY4(uVar4,uVar8) || CARRY4(uVar4,uVar8) < (0x300000 < uVar2))) {
        if (uVar8 < 0x300001) {
          uVar8 = 0x300000;
        }
        if (piVar9 < &DataAbort) {
          puVar3 = local_a4 + (int)piVar9 * 2;
          in_r3 = piVar9;
          while( true ) {
            if (in_r3 != (int *)0x0) {
              unaff_r5 = puVar3 + -2;
              unaff_r8 = *unaff_r5;
            }
            if (in_r3 == (int *)0x0 || unaff_r8 <= uVar8) break;
            uVar4 = *unaff_r5;
            in_r3 = (int *)((int)in_r3 + -1);
            unaff_r5 = (uint *)unaff_r5[1];
            puVar3[1] = (uint)unaff_r5;
            *puVar3 = uVar4;
            puVar3 = puVar3 + -2;
          }
          piVar9 = (int *)((int)piVar9 + 1);
          *puVar3 = uVar8;
          puVar3[1] = uVar2 - uVar8;
        }
      }
    }
    if (piVar9 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      puVar3 = local_a4 + 3;
      iVar7 = 1;
      while (piVar9 = (int *)((int)piVar9 + -1), piVar9 != (int *)0x0) {
        puVar6 = (undefined1 *)puVar3[-1];
        in_r3 = (int *)local_a4[iVar7 * 2 + -2];
        if ((undefined1 *)(local_a4[iVar7 * 2 + -1] + (int)in_r3) < puVar6) {
          uVar5 = puVar3[-1];
          local_a4[iVar7 * 2 + 1] = *puVar3;
          local_a4[iVar7 * 2] = uVar5;
          iVar7 = iVar7 + 1;
        }
        else {
          puVar6 = puVar6 + *puVar3;
          if ((undefined1 *)(local_a4[iVar7 * 2 + -1] + (int)in_r3) < puVar6) {
            local_a4[iVar7 * 2 + -1] = (int)puVar6 - (int)in_r3;
          }
        }
        puVar3 = puVar3 + 2;
      }
    }
    puVar3 = local_a4 + 1;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      recovered_10003998(puVar3[-1],*puVar3,&local_24,in_r3);
      in_r3 = extraout_r3;
      puVar3 = puVar3 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar5 = 0x4000000;
      if (0x300000 < *DAT_10001fa8) {
        uVar5 = *DAT_10001fa8 & 0xfffffff0;
      }
      uVar10 = uVar5 - 0x300000;
      if (uVar5 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10003998(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10001fa8
#undef DAT_10001fac
#undef EXT_00000010
#undef local_a4
#undef local_24

#undef DAT_10001ff0
#define DAT_10001ff0 (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_10001fb0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001dc8();
  iVar1 = 0;
  piVar2 = DAT_10001ff0;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_10001ff0

#undef DAT_10002040
#define DAT_10002040 (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_10001ff4(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10001dc8();
  iVar1 = DAT_10002040;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10002040

#undef DAT_10002078
#define DAT_10002078 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10002044(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001dc8();
  iVar1 = 0;
  piVar2 = DAT_10002078;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10002078

#undef DAT_100020b8
#define DAT_100020b8 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_1000207c(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10001dc8();
  iVar1 = DAT_100020b8;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_100020b8

#undef DAT_1000215c
#define DAT_1000215c (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_100020bc(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10001dc8();
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_1000215c;
    do {
      puVar2 = (uint *)puVar2[1];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    } while (((char)puVar2[2] != '\x01') || (uVar3 = *puVar2, uVar3 < uVar1));
    if (uVar1 + 0x20 <= uVar3) {
      piVar4 = (int *)((int)puVar2 + uVar1 + 0x10);
      *piVar4 = (uVar3 - uVar1) + -0x10;
      *(uint *)((int)puVar2 + uVar1 + 0x14) = puVar2[1];
      *(undefined1 *)((int)puVar2 + uVar1 + 0x18) = 1;
      *puVar2 = uVar1;
      puVar2[1] = (uint)piVar4;
    }
    puVar5 = puVar2 + 4;
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  return puVar5;
}

#undef DAT_1000215c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_10002160(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  if (0x3f < param_3) {
    return 0;
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0x1f) | (param_1 >> 1) >> (~param_3 & 0x1f),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7b8U)
 */

undefined8 recovered_100021bc(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (param_3 < 0x40) {
      if (param_3 < 0x20) {
        uVar1 = (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f);
        uVar2 = param_2 >> (param_3 & 0xff);
      }
      else {
        uVar1 = param_2 >> (param_3 - 0x20 & 0xff);
      }
    }
  }
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x810U)
 */

undefined8 recovered_10002214(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 - 0x20 & 0xff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x85cU)
 */

undefined8 recovered_10002260(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_1000227c(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_1000227c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar10 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    uVar8 = 0;
    uVar10 = 0;
    uVar4 = 0;
    while (-1 < (int)uVar5) {
      uVar3 = uVar4 << 1 | uVar10 >> 0x1f;
      uVar7 = uVar5 - 0x20;
      uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar4 = param_2 >> (uVar7 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar10 << 1;
      bVar1 = uVar3 <= param_4;
      bVar2 = (uint)(param_3 <= uVar6) <= uVar3 - param_4;
      uVar10 = uVar6 - param_3;
      uVar4 = uVar3 - (param_4 + (param_3 > uVar6));
      if (bVar1 && bVar2) {
        uVar10 = uVar6;
        uVar4 = uVar3;
      }
      uVar3 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar3 = 1 << (uVar7 & 0xff);
      }
      if (!bVar1 || !bVar2) {
        uVar8 = uVar8 | uVar3;
      }
      uVar3 = 1 << (uVar5 & 0xff);
      uVar5 = uVar5 - 1;
      if (-1 < (int)uVar7) {
        uVar3 = 0;
      }
      if (!bVar1 || !bVar2) {
        uVar9 = uVar9 | uVar3;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = uVar4;
  }
  return CONCAT44(uVar8,uVar9);
}


#define auStackY_218 (*(uint (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x980U)
 */

undefined8 recovered_10002384(void)

{
  unsigned char frame[584] = {0};

  uint in_r0;
  uint in_r1;
  uint in_r2;
  uint in_r3;

  recovered_1000227c(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_100023b8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar2 = (int)param_4 >> 0x1f;
    uVar4 = recovered_1000227c((param_1 ^ uVar1) - uVar1,
                               (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1)),
                               (param_3 ^ uVar2) - uVar2,
                               (param_4 ^ uVar2) - (uVar2 + ((param_3 ^ uVar2) < uVar2)),(uint *)0x0
                              );
    uVar3 = CONCAT44(-((int)((ulonglong)uVar4 >> 0x20) + (uint)((int)uVar4 != 0)),-(int)uVar4);
    if (-uVar1 == -uVar2) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}


#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2cU)
 */

undefined8 recovered_10002430(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    local_14 = 0;
    local_18 = 0;
    uVar1 = (int)param_4 >> 0x1f;
    recovered_1000227c((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),
                       (param_3 ^ uVar1) - uVar1,
                       (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1)),&local_18);
    uVar2 = -local_18;
    iVar3 = -(local_14 + (uint)(local_18 != 0));
    if (-1 < (int)param_2) {
      uVar2 = local_18;
      iVar3 = local_14;
    }
  }
  return CONCAT44(iVar3,uVar2);
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab0U)
 */

void recovered_100024b4(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_100024bc(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100024c8(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_1000250c(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_1000254c(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10002598(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbb0U)
 */

void * recovered_100025b4(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (out != data && size != 0) {
    if (out < data) {
      puVar1 = out;
      for (; size != 0; size = size - 1) {
        *puVar1 = *(undefined1 *)data;
        data = (undefined1 *)((int)data + 1);
        puVar1 = puVar1 + 1;
      }
      return out;
    }
    for (; size != 0; size = size - 1) {
      *(undefined1 *)((int)out + (size - 1)) = *(undefined1 *)((int)data + (size - 1));
    }
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc04U)
 */

void * recovered_10002608(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((int)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc1cU)
 */

void recovered_10002620(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc34U)
 */

void recovered_10002638(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc4cU)
 */

int recovered_10002650(void *left,void *right,ulong size)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;

  do {
    if (size == 0) {
      return 0;
    }
    bVar1 = *(byte *)right;
    size = size - 1;
    bVar2 = *(byte *)left;
    left = (byte *)((int)left + 1);
    right = (byte *)((int)right + 1);
  } while ((uint)bVar2 == (uint)bVar1);
  return (uint)bVar2 - (uint)bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc74U)
 */

bool recovered_10002678(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_1000268c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_100026a0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_100026b8(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_100026e4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_10002704(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_10002718(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd24U)
 */

int recovered_10002728(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd34U)
 */

ulong recovered_10002738(char *text)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = 0;
  while( true ) {
    if (text == (char *)0x0) {
      return 0;
    }
    if (text[uVar1] == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd64U)
 */

int recovered_10002768(char *left,char *right)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)(byte)*left;
    if ((uVar1 == 0) || (uVar1 != (byte)*right)) break;
    right = right + 1;
    left = left + 1;
  }
  return uVar1 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd90U)
 */

int recovered_10002794(char *left,char *right)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)(byte)*left;
    if ((uVar1 == 0) || (uVar1 != (byte)*right)) break;
    right = right + 1;
    left = left + 1;
  }
  return uVar1 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd94U)
 */

void recovered_10002798(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar2);
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdb0U)
 */

void * recovered_100027b4(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10002738(param_1);
    out = recovered_100024c8(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10002598(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_100027fc(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if (*param_1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe24U)
 */

int recovered_10002828(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_100027fc(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_1000286c(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100027fc(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_100028ac(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;

  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      iVar3 = 0;
      do {
        pcVar1 = param_2 + iVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + iVar3;
        iVar3 = iVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


#undef DAT_100028fc
#define DAT_100028fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_100028f4(void)

{
  unsigned char frame[64] = {0};

  return DAT_100028fc;
}

#undef DAT_100028fc

#undef DAT_10002908
#define DAT_10002908 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_10002900(void)

{
  unsigned char frame[64] = {0};

  return DAT_10002908;
}

#undef DAT_10002908

#undef DAT_10002920
#define DAT_10002920 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_1000290c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10002920;
  }
  return;
}

#undef DAT_10002920

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_10002924(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  double dVar2;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  for (iVar1 = param_3; 0 < iVar1; iVar1 = iVar1 + -1) {
    dVar2 = dVar2 + dVar2;
  }
  if (-1 < param_3) {
    param_3 = 0;
  }
  for (; param_3 != 0; param_3 = param_3 + 1) {
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf60U)
 */

double recovered_10002964(undefined4 param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    iVar1 = 0;
    dVar3 = dVar2;
    if (dVar2 < 0.0) {
      dVar3 = -dVar2;
    }
    for (; 1.0 <= dVar3; dVar3 = dVar3 * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar3 && (dVar3 < 0.5)); dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    if (dVar2 < 0.0) {
      dVar3 = -dVar3;
    }
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xff8U)
 */

double recovered_100029fc(double left,double right)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  uint in_fpscr;
  undefined4 uVar1;

  if (pf_bits_double(CONCAT44(in_r3,in_r2)) == 0.0) {
    return left;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(in_r1,in_r0)) / pf_bits_double(CONCAT44(in_r3,in_r2)),3);
  VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)left >> 0x20),uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1030U)
 */

double recovered_10002a34(double left,double right)

{
  unsigned char frame[64] = {0};

  undefined4 in_r2;
  undefined4 in_r3;
  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  double dVar3;

  uVar2 = VectorFloatToSigned(CONCAT44(in_r3,in_r2),3);
  dVar3 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if ((dVar3 == pf_bits_double(CONCAT44(in_r3,in_r2))) && (uVar2 != 0)) {
    uVar1 = uVar2;
    if ((int)uVar2 < 0) {
      uVar1 = -uVar2;
    }
    for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
    }
  }
  return pf_bits_double(CONCAT44((int)((ulonglong)left >> 0x20),uVar2));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10acU)
 */

double recovered_10002ab0(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10dcU)
 */

double recovered_10002ae0(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1120U)
 */

double recovered_10002b24(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;

  if (0.0 < pf_bits_double(CONCAT44(in_r1,in_r0))) {
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
  }
  return value;
}


#undef DAT_10002c34
#define DAT_10002c34 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10002c3c
#define DAT_10002c3c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_10002b74(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  uint uVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;

  dVar4 = pf_bits_double(CONCAT44(in_r1,in_r0));
  uVar3 = in_fpscr & 0xfffffff;
  if (dVar4 <= 0.0) {
    return value;
  }
  iVar1 = 0;
  for (; uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f,
      dVar4 != 1.5 && SUB41(uVar3 >> 0x1f,0) == NAN(dVar4); dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar1 = iVar1 + -1;
  }
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
  }
  VectorSignedToFloat(iVar1,(byte)(uVar3 >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1));
}

#undef DAT_10002c34
#undef DAT_10002c3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_10002c44(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10001cb4(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10002cc4
#define DAT_10002cc4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_10002ccc
#define DAT_10002ccc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_10002c74(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10002cd4();
  return extraout_d0;
}

#undef DAT_10002cc4
#undef DAT_10002ccc

#undef DAT_10002d0c
#define DAT_10002d0c (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10002d14
#define DAT_10002d14 (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10002d1c
#define DAT_10002d1c (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_10002d24
#define DAT_10002d24 (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

void recovered_10002cd4(void)

{
  unsigned char frame[64] = {0};

  double in_d0;

  for (; DAT_10002d0c < in_d0; in_d0 = in_d0 + DAT_10002d24) {
  }
  for (; in_d0 < DAT_10002d14; in_d0 = in_d0 + DAT_10002d1c) {
  }
  return;
}

#undef DAT_10002d0c
#undef DAT_10002d14
#undef DAT_10002d1c
#undef DAT_10002d24

#undef DAT_10002d74
#define DAT_10002d74 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10002d2c(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10002cd4();
  return extraout_d0;
}

#undef DAT_10002d74

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_10002d7c(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_10002dd4
#define DAT_10002dd4 (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_10002d9c(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_10002dd4;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_10002dd4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10002dd8(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002964(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_10002e04(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002924(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_10002e30(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_10002a34(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10002e68(float value)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar3 = (double)in_r0;
  dVar4 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar4 < dVar3) << 0x1f | (uint)(dVar4 == dVar3) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar5 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar4) || NAN(dVar3))) {
    dVar4 = dVar5;
  }
  return (float)dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x149cU)
 */

float recovered_10002ea0(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002ae0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_10002ec8(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_10002ae0(value);
    return dVar2;
  }
  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1504U)
 */

float recovered_10002f08(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002ec8(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_10002f30(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002b24(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10002f58(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002b74(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_10002f80(void)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  recovered_10002c44(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_10002f90(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002c74(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_10002fb8(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002d2c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_10002fe0(float value)

{
  unsigned char frame[64] = {0};

  float in_r0;

  if (in_r0 < 0.0) {
    in_r0 = -in_r0;
  }
  return in_r0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f8U)
 */

int recovered_10002ffc(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;

  pbVar3 = param_1;
  while( true ) {
    uVar5 = (uint)*pbVar3;
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001fU) == 0)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar2 = (uint)((uVar5 - 0x2b & 0xfffffffd) == 0);
  pbVar1 = pbVar3 + uVar2;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar1 == 0x30) && ((pbVar3[uVar2 + 1] | 0x20) == 0x78)) {
      pbVar1 = pbVar3 + uVar2 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar1 == 0x30) {
      if ((pbVar3[uVar2 + 1] | 0x20) == 0x78) {
        pbVar1 = pbVar3 + uVar2 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar2 = recovered_10003124((int)(char)*pbVar1);
    if (param_3 <= uVar2) break;
    iVar4 = iVar4 * param_3 + uVar2;
    param_1 = pbVar1 + 1;
    pbVar1 = pbVar1 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar5 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1720U)
 */

uint recovered_10003124(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 - 0x30;
  if (9 < (uVar1 & 0xff)) {
    if ((param_1 - 0x61U & 0xff) < 0x1a) {
      uVar1 = param_1 - 0x57;
    }
    else {
      uVar1 = 0xffffffff;
      if ((param_1 - 0x41U & 0xff) < 0x1a) {
        uVar1 = param_1 - 0x37;
      }
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1764U)
 */

int recovered_10003168(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;

  for (pbVar2 = param_1; (uVar3 = (uint)*pbVar2, uVar3 - 9 < 5 || (uVar3 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  if (uVar3 == 0x2b) {
    pbVar2 = pbVar2 + 1;
  }
  else if (uVar3 == 0x2d) {
    pbVar2 = pbVar2 + 1;
    bVar1 = true;
    goto LAB_100031c4;
  }
  bVar1 = false;
LAB_100031c4:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar2[1] | 0x20) == 0x78)) {
      pbVar2 = pbVar2 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar2 == 0x30) {
      if ((pbVar2[1] | 0x20) == 0x78) {
        pbVar2 = pbVar2 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar3 = recovered_10003124((int)(char)*pbVar2);
    if (param_3 <= uVar3) break;
    iVar4 = iVar4 * param_3 + uVar3;
    param_1 = pbVar2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (bVar1) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1884U)
 */

double recovered_10003288(char *text,char **end)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint in_fpscr;
  uint in_s0;
  uint extraout_s0 = 0;
  undefined4 in_s1;
  undefined4 extraout_s1 = 0;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;

  pbVar1 = (byte *)text;
  while( true ) {
    uVar4 = *pbVar1 - 9;
    if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x80001fU) == 0)) break;
    pbVar1 = pbVar1 + 1;
  }
  dVar8 = 0.0;
  pbVar1 = pbVar1 + ((*pbVar1 - 0x2b & 0xfffffffd) == 0);
  bVar2 = false;
  while( true ) {
    uVar4 = (uint)*pbVar1;
    uVar5 = uVar4 - 0x30;
    if (9 < uVar5) break;
    pbVar1 = pbVar1 + 1;
    bVar2 = true;
    dVar9 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = dVar9 + dVar8 * 10.0;
    in_s0 = uVar5;
  }
  if (uVar4 == 0x2e) {
    dVar9 = 1.0;
    dVar10 = 0.0;
    while( true ) {
      pbVar1 = pbVar1 + 1;
      uVar4 = (uint)*pbVar1;
      uVar5 = uVar4 - 0x30;
      if (9 < uVar5) break;
      dVar9 = dVar9 * 10.0;
      bVar2 = true;
      dVar11 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      dVar10 = dVar11 + dVar10 * 10.0;
      in_s0 = uVar5;
    }
  }
  else {
    dVar9 = 1.0;
    dVar10 = 0.0;
  }
  if (!bVar2) {
    if (end != (char **)0x0) {
      *end = text;
    }
  }
  else {
    dVar8 = dVar8 + dVar10 / dVar9;
    if ((uVar4 | 0x20) == 0x65) {
      iVar7 = 1;
      pbVar6 = pbVar1 + 1;
      if (*pbVar6 == 0x2b) {
        pbVar6 = pbVar1 + 2;
      }
      else if (*pbVar6 == 0x2d) {
        pbVar6 = pbVar1 + 2;
        iVar7 = -1;
      }
      iVar3 = 0;
      bVar2 = false;
      for (; *pbVar6 - 0x30 < 10; pbVar6 = pbVar6 + 1) {
        bVar2 = true;
        iVar3 = (uint)*pbVar6 + iVar3 * 10 + -0x30;
      }
      if (bVar2) {
        recovered_10002924(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
        pbVar1 = pbVar6;
        in_s0 = extraout_s0;
        in_s1 = extraout_s1;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar1;
    }
  }
  return pf_bits_double(CONCAT44(in_s1,in_s0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a20U)
 */

float recovered_10003424(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003288(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10003838
#define DAT_10003838 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_10003440(char *out,ulong capacity,char *format,void *arguments)

{
  unsigned char frame[144] = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar5;
  byte *pbVar4;
  int iVar6;
  double *pdVar7;
  bool bVar8;
  uint in_fpscr;
  int iVar9;
  double dVar10;
  double dVar11;
  uint uVar12;

  local_4c = 0;
  local_48 = capacity;
  local_44 = (byte *)out;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_1000349c:
  iVar3 = 10;
  bVar1 = *format;
  if (bVar1 != 0x25) {
    if (bVar1 == 0) {
      if (capacity != 0) {
        *local_44 = 0;
      }
      return local_4c;
    }
    if (1 < local_48) {
      *local_44 = bVar1;
LAB_100034cc:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_100034d0;
  }
  uVar2 = (uint)(byte)format[1];
  if (uVar2 != 0x25) {
    pbVar4 = (byte *)(format + 2);
    while (uVar2 - 0x30 < 10) {
      uVar2 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    pbVar5 = pbVar4;
    if (uVar2 == 0x2e) {
      do {
        pbVar4 = pbVar5 + 1;
        uVar2 = (uint)*pbVar5;
        pbVar5 = pbVar4;
      } while (uVar2 - 0x30 < 10);
    }
    format = (char *)(pbVar4 + -1);
LAB_10003554:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10003564_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10003564_caseD_64;
    case 0x65:
    case 0x67:
    case 0x6a:
    case 0x6b:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x76:
    case 0x77:
    case 0x79:
switchD_10003564_caseD_65:
      if (local_48 < 2) goto LAB_100034d0;
      *local_44 = 0x3f;
      goto LAB_100034cc;
    case 0x66:
      dVar10 = *(double *)arguments;
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar10 < 0.0) {
        if (1 < local_48) {
          local_48 = local_48 - 1;
          *local_44 = 0x2d;
          local_44 = local_44 + 1;
        }
        dVar10 = -dVar10;
        local_4c = local_4c + 1;
      }
      uVar2 = VectorFloatToSigned(dVar10,3);
      recovered_100038cc((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
      dVar11 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      pdVar7 = (double *)((int)arguments + 8);
      iVar6 = 6;
      pbVar4 = local_44;
      if (1 < local_48) {
        local_48 = local_48 - 1;
        pbVar4 = local_44 + 1;
        *local_44 = 0x2e;
      }
      dVar10 = dVar10 - dVar11;
      local_44 = pbVar4;
      while (iVar6 != 0) {
        bVar8 = 1 < local_48;
        if (bVar8) {
          local_48 = local_48 - 1;
        }
        iVar6 = iVar6 + -1;
        iVar9 = VectorFloatToSigned(dVar10 * 10.0,3);
        if (bVar8) {
          iVar3 = iVar9;
        }
        dVar11 = (double)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar10 * 10.0 - dVar11;
        if (bVar8) {
          iVar3 = iVar3 + 0x30;
          *local_44 = (byte)iVar3;
          local_44 = local_44 + 1;
        }
      }
      local_4c = local_4c + 7;
      goto LAB_10003518;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10003564_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10003878((int *)&local_44,&local_48,&local_4c,DAT_10003838);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10003878((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_10003518;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_100037e8;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_100037d4:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_100037d4;
        }
        goto switchD_10003564_caseD_65;
      }
      goto switchD_10003564_caseD_64;
    }
    goto LAB_10003800;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_10003510;
switchD_10003564_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10003554;
switchD_10003564_caseD_64:
  uVar2 = *(uint *)arguments;
  if (0x7fffffff < uVar2) {
    if (1 < local_48) {
      local_48 = local_48 - 1;
      *local_44 = 0x2d;
      local_44 = local_44 + 1;
    }
    uVar2 = -uVar2;
    local_4c = local_4c + 1;
  }
LAB_100037e8:
  uVar12 = 10;
  iVar3 = 0;
LAB_10003800:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_100038cc((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_10003518;
switchD_10003564_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_100034d0:
  pdVar7 = arguments;
LAB_10003510:
  local_4c = local_4c + 1;
LAB_10003518:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_1000349c;
}

#undef DAT_10003838
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_1000383c(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef DAT_100038c8
#define DAT_100038c8 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10003878(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_100038c8;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_1000383c(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_100038c8

#undef DAT_10003964
#define DAT_10003964 (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10003968
#define DAT_10003968 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_100038cc(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_10003968;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar3 = DAT_10003964;
  }
  do {
    iVar2 = iVar1;
    recovered_10001a04(param_4,param_5);
    bVar4 = param_5 <= param_4;
    local_40[-iVar2] = *(undefined1 *)(iVar3 + (param_4 - extraout_r0 * param_5));
    param_4 = extraout_r0;
    iVar1 = iVar2 + -1;
  } while (bVar4);
  for (; iVar2 != 1; iVar2 = iVar2 + 1) {
    recovered_1000383c(param_1,param_2,param_3,local_40[-iVar2]);
  }
  return;
}

#undef DAT_10003964
#undef DAT_10003968
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_1000396c(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_10003440(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_100039fc
#define DAT_100039fc (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10003998(uint param_1,uint param_2,int *param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;

  if (param_3 != (int *)0x0) {
    param_4 = (int *)(param_1 + 0xf & 0xfffffff0);
    param_1 = (int)param_4 - param_1;
  }
  if (param_3 != (int *)0x0 && param_1 < param_2) {
    uVar1 = param_2 - param_1 & 0xfffffff0;
    if (uVar1 < 0x1d) {
      return;
    }
    param_4[1] = 0;
    *(undefined1 *)(param_4 + 2) = 1;
    *param_4 = uVar1 - 0x10;
    piVar2 = (int *)(DAT_100039fc + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_100039fc

#undef DAT_10003a4c
#define DAT_10003a4c (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ffcU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003a00(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10003a4c) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10003a4c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_10003afc
#define DAT_10003afc (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_10003b00
#define DAT_10003b00 (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_10003a50(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_10003b00;
  piVar2 = DAT_10003afc;
  if (param_1 == (char *)0x0) {
    return;
  }
  do {
    if (param_2 == 0) {
      return;
    }
    cVar1 = *param_1;
    if (cVar1 == '\b') {
      if (*piVar2 != 0) {
        iVar4 = *piVar2 + -1;
LAB_10003ae0:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_10003b04(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10003ae0;
      }
      recovered_10003b04(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10003afc
#undef DAT_10003b00

#undef DAT_10003b84
#define DAT_10003b84 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10003b88
#define DAT_10003b88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_10003b8c
#define DAT_10003b8c (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_10003b04(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_10003b88;
  size = *DAT_10003b88;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10002598(local_214,DAT_10003b8c,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10004948(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10003b84 != (code *)0x0)) {
      (*(code *)*DAT_10003b84)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10003b84
#undef DAT_10003b88
#undef DAT_10003b8c
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_10003b90(void)

{
  unsigned char frame[64] = {0};

  recovered_10003b04(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_10003b98(void)

{
  unsigned char frame[64] = {0};

  recovered_10003b04(0);
  return;
}


#undef DAT_10003be8
#define DAT_10003be8 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10003bec
#define DAT_10003bec (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_10003ba0(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10003be8;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10003bec;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_1000396c(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_10003a50(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10003be8
#undef DAT_10003bec
#undef acStack_14c

#undef DAT_10003c2c
#define DAT_10003c2c (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10003c30
#define DAT_10003c30 (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10003c34
#define DAT_10003c34 (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10003c38
#define DAT_10003c38 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10003c3c
#define DAT_10003c3c (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10003c40
#define DAT_10003c40 (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_10003bf0(void)

{
  unsigned char frame[64] = {0};

  recovered_10003c44(DAT_10003c2c);
  recovered_10003c44(DAT_10003c30);
  recovered_10003c44(DAT_10003c34);
  recovered_10003c44(DAT_10003c38);
  recovered_10003c44(DAT_10003c3c);
  recovered_10003c44(DAT_10003c40);
  return;
}

#undef DAT_10003c2c
#undef DAT_10003c30
#undef DAT_10003c34
#undef DAT_10003c38
#undef DAT_10003c3c
#undef DAT_10003c40

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_10003c44(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10002738(param_1);
  recovered_10003a50(param_1,uVar1);
  return;
}


#undef DAT_10003c88
#define DAT_10003c88 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_10003c8c
#define DAT_10003c8c (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10003c6c(void)

{
  unsigned char frame[64] = {0};

  recovered_10003c44(DAT_10003c88);
  recovered_10003c44(DAT_10003c8c);
  return;
}

#undef DAT_10003c88
#undef DAT_10003c8c

#undef DAT_10003d10
#define DAT_10003d10 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_10003c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if (param_1 != 0 && param_2 != 0) {
    recovered_10003b98();
    iVar1 = recovered_10004948(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_10003d10 != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_10003d10)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10003d10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_10003d14(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_10003d1c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_10003d20(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10003fd0
#define DAT_10003fd0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_10003fd4
#define DAT_10003fd4 (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10003fd8
#define DAT_10003fd8 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10003fdc
#define DAT_10003fdc (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_10003fe0
#define DAT_10003fe0 (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10003d28(char *param_1,int param_2)

{
  unsigned char frame[216] = {0};

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *unaff_r5;
  uint unaff_r6;
  undefined1 uVar7;
  char *unaff_r10;

  if (param_1 != (char *)0x0) {
    unaff_r10 = (char *)param_2;
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    uVar6 = 0x16;
    goto LAB_10003f6c;
  }
  iVar2 = recovered_10002768(param_1,DAT_10003fd4);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10003f08:
    puVar4 = recovered_100024c8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002608(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_1000396c((char *)(puVar4 + 1),0xf1,DAT_10003fe0,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10002768(param_1,DAT_10003fd8);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10003f08;
    }
    iVar3 = recovered_10002768(param_1,DAT_10003fdc);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10003f08;
    }
    puVar4 = recovered_100024c8(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002608(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_100027fc(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_100027fc(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_100027fc(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_100027fc(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_100027fc(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_100027fc(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_100027fc(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_1000396c((char *)(puVar4 + 1),0xf1,DAT_10003fe0,param_1);
      recovered_10002608(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10003fe4(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_10003fd0 = 2;
LAB_10003fa4:
          recovered_1000250c(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_100027fc(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_10004030((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10003fa4;
            recovered_10002598((void *)puVar4[0x3f],unaff_r5,unaff_r6);
          }
          else {
            puVar4[0x3e] = unaff_r5;
          }
          puVar4[0x40] = unaff_r6;
        }
      }
      if (*(char *)((int)puVar4 + 0x112) == '\x01') {
        puVar4[0x42] = puVar4[0x40];
        return puVar4;
      }
      return puVar4;
    }
  }
  uVar6 = 0xc;
LAB_10003f6c:
  *(undefined4 *)*DAT_10003fd0 = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_10003fd0
#undef DAT_10003fd4
#undef DAT_10003fd8
#undef DAT_10003fdc
#undef DAT_10003fe0
#undef auStack_a8

#undef DAT_1000402c
#define DAT_1000402c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_10003fe4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004948(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_1000402c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_1000402c)(param_1,param_2);
  return uVar2;
}

#undef DAT_1000402c

#undef DAT_100040b4
#define DAT_100040b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_10004030(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint size;
  void *pvVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x104);
    if (uVar1 < param_2) {
      if (uVar1 == 0) {
        uVar1 = 0x100;
      }
      do {
        size = uVar1;
        uVar1 = size << 1;
      } while (size < param_2);
      pvVar2 = recovered_1000254c(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100040b4 = 0xc;
        return 0;
      }
      *(uint *)(param_1 + 0x104) = size;
      *(void **)(param_1 + 0xfc) = pvVar2;
      *(void **)(param_1 + 0xf8) = pvVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_100040b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_100040b8(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_100040e4(param_3);
  }
  recovered_10003d28(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_100040e4(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000447c(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_1000250c((void *)param_1[0x3f]);
    }
    recovered_1000250c(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10004128(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_r6;
  int unaff_r8;
  int iVar4;

  iVar2 = 0;
  if (param_3 != 0) {
    unaff_r8 = param_2;
  }
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r6 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r6[0x44] == '\x01'))
    {
      for (; iVar2 != param_3; iVar2 = iVar2 + 1) {
        puVar3 = param_1;
        for (iVar4 = unaff_r8; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar1 = recovered_100041c8(unaff_r6);
          if (uVar1 == 0xffffffff) {
            return iVar2;
          }
          *puVar3 = (char)uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + unaff_r8;
      }
      iVar2 = param_3;
    }
  }
  return iVar2;
}


#undef DAT_100042b0
#define DAT_100042b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_100041c8(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  ulong uVar3;
  char *text;

  uVar2 = 0xffffffff;
  if ((param_1 != (int *)0x0) && ((char)param_1[0x44] == '\x01')) {
    uVar2 = param_1[0x43];
    if (uVar2 != 0xffffffff) {
      param_1[0x43] = -1;
      return uVar2;
    }
    if (*param_1 == 1) {
      uVar2 = param_1[199];
      if ((uint)param_1[0xc6] <= uVar2) {
        text = (char *)((int)param_1 + 0x116);
        uVar2 = 0;
        bVar1 = recovered_10003c90((int)text,0x1fe,DAT_100042b0,0);
        if (!bVar1) goto LAB_100042a0;
        uVar3 = recovered_10002738(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_100042a0:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_100042b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_100042b4(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_r5;
  ulong size;

  iVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (void *)0x0) {
      unaff_r5 = param_4;
    }
    if ((param_1 != (void *)0x0 && param_4 != (uint *)0x0) &&
       (*(char *)((int)unaff_r5 + 0x111) == '\x01')) {
      size = param_3 * param_2;
      if ((*unaff_r5 & 0xfffffffe) == 2) {
        recovered_10003a50(param_1,size);
        unaff_r5[0x42] = unaff_r5[0x42] + size;
      }
      else {
        if (*(char *)((int)unaff_r5 + 0x112) == '\0') {
          uVar1 = unaff_r5[0x42];
        }
        else {
          uVar1 = unaff_r5[0x40];
          unaff_r5[0x42] = uVar1;
        }
        iVar3 = recovered_10004030((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_10002608((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10002598((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
        uVar1 = unaff_r5[0x42] + size;
        unaff_r5[0x42] = uVar1;
        if (unaff_r5[0x40] < uVar1) {
          unaff_r5[0x40] = uVar1;
        }
        *(undefined2 *)((int)unaff_r5 + 0x113) = 1;
      }
      iVar3 = param_3;
    }
  }
  return iVar3;
}


#undef DAT_10004454
#define DAT_10004454 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_100043c0(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_100043dc;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_100043d4;
        iVar1 = 0x100;
      }
      param_2 = *(int *)((int)param_1 + iVar1) + param_2;
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      param_1[0x43] = -1;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      return 0;
    }
  }
LAB_100043d4:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_100043dc:
  *(undefined4 *)*DAT_10004454 = 0x16;
  return 0xffffffff;
}

#undef DAT_10004454

#undef DAT_10004478
#define DAT_10004478 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10004458(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10004478 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10004478

#undef DAT_100044f0
#define DAT_100044f0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_1000447c(uint *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x113);
    }
    if (bVar3 && uVar2 == 1) {
      iVar1 = recovered_1000468c(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100044f0 = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_100044f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_100044f4(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b00U)
 */

undefined1 recovered_10004504(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b10U)
 */

void recovered_10004514(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b2cU)
 */

void recovered_10004530(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10004598
#define DAT_10004598 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_10004554(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_1000459c(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10004598 = uVar2;
  return 0xffffffff;
}

#undef DAT_10004598

#undef DAT_100045dc
#define DAT_100045dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_1000459c(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004948(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_100045dc == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100045dc)(param_1);
  return uVar2;
}

#undef DAT_100045dc

#undef DAT_10004688
#define DAT_10004688 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
#define local_20 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_100045e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[80] = {0};

  int iVar1;
  int unaff_r5;
  undefined4 uVar2;

  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if (param_1 != 0 && param_2 != 0) {
    local_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    recovered_10002608(&local_20,0,0xc);
    iVar1 = recovered_10003fe4(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_1000468c(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_1000459c(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10004688 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10004688 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10004688
#undef uStack_1c
#undef uStack_18
#undef local_20

#undef DAT_100046dc
#define DAT_100046dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_1000468c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004948(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_100046dc == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100046dc)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_100046dc

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_100046e0(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char frame[216] = {0};

  int iVar1;
  uint size;
  void *out;
  void *unaff_r5;
  uint unaff_r6;
  undefined4 uVar2;
  uint *unaff_r10;

  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      unaff_r10 = param_3;
    }
    if (param_2 != (undefined4 *)0x0 && param_3 != (uint *)0x0) {
      recovered_10002608(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10003fe4(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_100024c8(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10002598(out,unaff_r5,unaff_r6);
          }
          uVar2 = 1;
          *unaff_r10 = unaff_r6;
          *param_2 = out;
        }
      }
    }
  }
  return uVar2;
}

#undef auStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2d94U)
 */

bool recovered_10004798(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_1000468c(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_100047d8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_100047e0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_100047e4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_100047ec(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_100047f4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_100047fc(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e20U)
 */

int recovered_10004824(char *left,char *right,ulong size)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    if (size == 0) {
      return 0;
    }
    uVar1 = (uint)(byte)*left;
    if (uVar1 != (byte)*right) break;
    right = right + 1;
    left = left + 1;
    size = size - 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - (byte)*right;
}


#undef DAT_100048fc
#define DAT_100048fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_10004900
#define DAT_10004900 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_10004904
#define DAT_10004904 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_10004908
#define DAT_10004908 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_1000490c
#define DAT_1000490c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_10004910
#define DAT_10004910 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_10004914
#define DAT_10004914 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_10004918
#define DAT_10004918 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_1000491c
#define DAT_1000491c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10004864(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_1000491c;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10004878_caseD_0;
  case 2:
    return DAT_10004900;
  case 5:
    return DAT_10004904;
  case 9:
    return DAT_10004908;
  case 0xc:
    return DAT_1000490c;
  case 0xd:
    return DAT_10004910;
  default:
    if (param_1 == 0x11) {
      return DAT_10004914;
    }
    if (param_1 == 0x16) {
      return DAT_100048fc;
    }
switchD_10004878_caseD_0:
    return DAT_10004918;
  }
}

#undef DAT_100048fc
#undef DAT_10004900
#undef DAT_10004904
#undef DAT_10004908
#undef DAT_1000490c
#undef DAT_10004910
#undef DAT_10004914
#undef DAT_10004918
#undef DAT_1000491c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_10004920(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10004928(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10004944
#define DAT_10004944 (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_10004930(void)

{
  unsigned char frame[64] = {0};

  *DAT_10004944 = *DAT_10004944 + 1;
  return;
}

#undef DAT_10004944

#undef DAT_10004994
#define DAT_10004994 (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f44U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004948(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10004994) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10004994
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_10004998(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2fa0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fa4U)
 */

undefined4 recovered_100049a8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;

  *param_1 = unaff_r4;
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r7;
  param_1[4] = unaff_r8;
  param_1[5] = unaff_r9;
  param_1[6] = unaff_r10;
  param_1[7] = unaff_r11;
  param_1[8] = (uintptr_t)(frame + 32);
  param_1[9] = unaff_lr;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fbcU)
 */

int recovered_100049c0(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_10004a58
#define DAT_10004a58 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_10004a5c
#define DAT_10004a5c (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10004a60
#define DAT_10004a60 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
#define local_20 (*(undefined4 *)(frame + 44))
#define local_1c (*(undefined1 * *)(frame + 48))
#define uStack_3c (*(undefined4 *)(frame + 16))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(undefined1 * *)(frame + 56))
#define auStack_10 (*(undefined1 (*)[8])(frame + 60))
#define local_38 (*(undefined4 *)(frame + 20))
#define local_24 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fdcU)
 */

void recovered_100049e0(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10004a60;
  local_20 = DAT_10004a58;
  local_18 = DAT_10004a5c + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_10004fa4(&uStack_3c);
  recovered_100024b4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_10004a58
#undef DAT_10004a5c
#undef DAT_10004a60
#undef local_20
#undef local_1c
#undef uStack_3c
#undef local_18
#undef local_14
#undef auStack_10
#undef local_38
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3060U)
 */

undefined4 recovered_10004a64(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_10004a6c(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004a7c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100049e0();
}


#undef DAT_100082cc
#define DAT_100082cc (*(int *)(((uintptr_t)pf_module_state + 0x68c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_10004a7c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100082cc;
  DAT_100082cc = param_1;
  recovered_10004e60(param_1);
  return;
}

#undef DAT_100082cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_10004aa8(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100024c8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100024b4();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_10004ad4(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100024c8(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100024b4();
  }
  return pvVar1;
}


#undef DAT_10004b8c
#define DAT_10004b8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10004b90
#define DAT_10004b90 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10004b94
#define DAT_10004b94 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10004ad8(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004b94;
  local_78 = DAT_10004b8c;
  local_70 = DAT_10004b90 + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_10004fa4(&uStack_94);
  recovered_1000250c(data);
  recovered_10004fbc(&uStack_94);
  return;
}

#undef DAT_10004b8c
#undef DAT_10004b90
#undef DAT_10004b94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

#undef DAT_10004c4c
#define DAT_10004c4c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_10004c50
#define DAT_10004c50 (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_10004c54
#define DAT_10004c54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3194U)
 */

void recovered_10004b98(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004c54;
  local_78 = DAT_10004c4c;
  local_70 = DAT_10004c50 + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_10004fa4(&uStack_94);
  recovered_1000250c(data);
  recovered_10004fbc(&uStack_94);
  return;
}

#undef DAT_10004c4c
#undef DAT_10004c50
#undef DAT_10004c54
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10004d0c
#define DAT_10004d0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_10004d10
#define DAT_10004d10 (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_10004d14
#define DAT_10004d14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_10004c58(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004d14;
  local_78 = DAT_10004d0c;
  local_70 = DAT_10004d10 + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_10004fa4(&uStack_94);
  recovered_1000250c(param_1);
  recovered_10004fbc(&uStack_94);
  return;
}

#undef DAT_10004d0c
#undef DAT_10004d10
#undef DAT_10004d14
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

#undef DAT_10004dcc
#define DAT_10004dcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_10004dd0
#define DAT_10004dd0 (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_10004dd4
#define DAT_10004dd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_10004d18(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004dd4;
  local_78 = DAT_10004dcc;
  local_70 = DAT_10004dd0 + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_10004fa4(&uStack_94);
  recovered_1000250c(param_1);
  recovered_10004fbc(&uStack_94);
  return;
}

#undef DAT_10004dcc
#undef DAT_10004dd0
#undef DAT_10004dd4
#undef auStack_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_10004dd8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_10004de0(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_10004df0(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_10004e00(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_10004e04(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_100024c8(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100049e0();
  }
  puVar2 = puVar1;
  for (; size != 0; size = size - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x344cU)
 */

void recovered_10004e50(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000250c((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_10004e60(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_10004ec0
#define DAT_10004ec0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10004e68(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_10004ec0;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_10004ec0 = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_1000250c(buffer);
  return;
}

#undef DAT_10004ec0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_10004ec4(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10004eec((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10004f68
#define DAT_10004f68 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10004eec(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10004f68;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100049e0();
    }
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10005494((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
                    /* WARNING: Subroutine does not return */
  recovered_10005028(param_1);
}

#undef DAT_10004f68
#undef local_28
#undef local_24
#undef local_20

#undef LAB_10004fa0
#define LAB_10004fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
#undef _LAB_10004fa0
#define _LAB_10004fa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004f6c(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*(uint *)(uintptr_t)_LAB_10004fa0;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_100049e0();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10004eec(puVar1);
}

#undef LAB_10004fa0
#undef _LAB_10004fa0

#undef DAT_10004fb8
#define DAT_10004fb8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

void recovered_10004fa4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10004fb8;
  *param_1 = *DAT_10004fb8;
  *puVar1 = param_1;
  return;
}

#undef DAT_10004fb8

#undef DAT_10004fe8
#define DAT_10004fe8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_10004fbc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10004fe8;
  while( true ) {
    puVar2 = (undefined4 *)*puVar1;
    if (puVar2 == param_1) {
      *puVar1 = *param_1;
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = puVar2;
  }
  return;
}

#undef DAT_10004fe8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10004fec(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10004eec(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10004ff8(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100049e0();
}


#undef DAT_10005024
#define DAT_10005024 (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

void recovered_10005004(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*DAT_10005024 != (int *)0x0) {
    *DAT_10005024 = *(int *)*DAT_10005024;
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005028(param_1);
}

#undef DAT_10005024

#undef DAT_100050d0
#define DAT_100050d0 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10005028(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = DAT_100050d0;
  piVar4 = (int *)*DAT_100050d0;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100049e0();
    }
    if (piVar4 == (int *)param_1[3]) break;
    recovered_10005494((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_10004998((int)piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

#undef DAT_100050d0
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_100050d4(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10005004(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_100050e0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_100050e8(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100049e0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_100050f4(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10005134(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_100051d8
#define DAT_100051d8 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_10005134(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;

  if (param_2 == (int *)0x0) {
    return true;
  }
  do {
    piVar3 = param_1;
    if (piVar3 == param_2 || piVar3 == (int *)0x0) {
      return piVar3 != (int *)0x0;
    }
    pcVar4 = (char *)piVar3[1];
    pcVar5 = (char *)param_2[1];
    if (pcVar4 == (char *)0x0 || pcVar5 == (char *)0x0) {
      if (pcVar4 == pcVar5) {
        return true;
      }
    }
    else {
      do {
        cVar1 = *pcVar4;
        cVar2 = *pcVar5;
        if (cVar1 == '\0' || cVar2 == '\0') {
          if (cVar1 == cVar2) {
            return true;
          }
          break;
        }
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
    }
    param_1 = (int *)0x0;
    if (*piVar3 == DAT_100051d8 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_100051d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_100051dc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_100051e0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_100051e8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_100051fc(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (1 << (param_1 - 9U & 0xff) & 0x80001bU) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3834U)
 */

bool recovered_10005238(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10005264(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_10005280(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_1000529c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_100052b8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_100052d4(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002ab0(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_1000532c(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    uVar4 = (uint)*pbVar3;
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10005378;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10005378:
  if (uVar4 == 0x2d || uVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar3 == 0x30)) {
    if ((pbVar3[1] | 0x20) == 0x78) {
      pbVar3 = pbVar3 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar3 = pbVar3 + -1;
  iVar8 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)pbVar3[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar3 = pbVar3 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar3 = param_1;
    }
    *param_2 = pbVar3;
  }
  uVar2 = CONCAT44(-(iVar5 + (uint)((int)uVar1 != 0)),-(int)uVar1);
  if (uVar4 != 0x2d) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef EXT_00000000

#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a8cU)
 */

ulonglong recovered_10005490(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    uVar4 = (uint)*pbVar3;
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10005378;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10005378:
  if (uVar4 == 0x2d || uVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar3 == 0x30)) {
    if ((pbVar3[1] | 0x20) == 0x78) {
      pbVar3 = pbVar3 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar3 = pbVar3 + -1;
  iVar8 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)pbVar3[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar3 = pbVar3 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar3 = param_1;
    }
    *param_2 = pbVar3;
  }
  uVar2 = CONCAT44(-(iVar5 + (uint)((int)uVar1 != 0)),-(int)uVar1);
  if (uVar4 != 0x2d) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef EXT_00000000

#undef DAT_100056ac
#define DAT_100056ac (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_10005494(int param_1,int *param_2,undefined2 *param_3)

{
  unsigned char frame[84] = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;

  pbVar8 = *(byte **)(param_1 + 0x1c);
  if (pbVar8 != (byte *)0x0) {
    local_24 = pbVar8 + 1;
    pbVar11 = local_24;
    if (*pbVar8 != 0xff) {
      recovered_100056b0((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_100057dc(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_100057dc(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_100057dc(&local_24);
        uVar6 = recovered_100057dc(&local_24);
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 2) = uVar5;
          *(undefined1 *)(param_3 + 1) = 0;
          *param_3 = 1;
          if (uVar6 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          uVar5 = uVar4 & 0xf;
          bVar2 = uVar5 < 0xd && pbVar8 != (byte *)0x0;
          iVar10 = 0x40;
          do {
            if (iVar10 == 0) {
              return 0;
            }
            uVar6 = recovered_1000583c((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_1000583c((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            if (uVar6 == 0) {
              *(undefined1 *)((int)param_3 + 1) = 1;
            }
            else if (0 < (int)uVar6) {
              puVar9 = (uint *)0x0;
              uVar1 = 0;
              if (bVar2) {
                uVar1 = 0x1c1d >> uVar5;
              }
              if (bVar2 && (uVar1 & 1) != 0) {
                local_24 = pbVar8 + *(int *)(DAT_100056ac + uVar5 * 4) * uVar6;
                puVar9 = recovered_100056b0(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10005134(param_2,(int *)puVar9);
              if (bVar3) {
                *(uint *)(param_3 + 4) = uVar6;
                *(undefined1 *)(param_3 + 1) = 1;
                return 1;
              }
            }
            if (uVar7 == 0) {
              return 0;
            }
            iVar10 = iVar10 + -1;
          } while( true );
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0;
  return 0;
}

#undef DAT_100056ac
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_100056b0(uint param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint *extraout_r0 = 0;
  uint *extraout_r0_00 = 0;
  uint *extraout_r0_01 = 0;
  uint *extraout_r0_02 = 0;
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = (uint *)0x0;
  if (param_1 == 0xff) {
    return (uint *)0x0;
  }
  if (0xc < (param_1 & 0xf)) {
    return (uint *)0x0;
  }
  iVar3 = *param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    recovered_10005814(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_10005798;
  case 1:
    puVar2 = (uint *)recovered_100057dc(param_2);
    break;
  case 2:
    recovered_10005814(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_10005798;
  case 4:
  case 0xc:
    recovered_10005814(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_10005798:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_100056e4_caseD_5;
  case 9:
    puVar2 = (uint *)recovered_1000583c(param_2);
    break;
  case 10:
    recovered_10005814(iVar3,2);
    *param_2 = iVar3 + 2;
    puVar2 = (uint *)((uint)extraout_r0_01 & 0xffff | 0xffff0000);
    if (((uint)extraout_r0_01 & 0x8000) == 0) {
      puVar2 = extraout_r0_01;
    }
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (uint *)0x0;
    }
    puVar2 = (uint *)((int)puVar2 + iVar3);
  }
  if ((0x7fffffff < (uint)(int)(char)param_1) && (puVar2 != (uint *)0x0)) {
    puVar2 = (uint *)*puVar2;
  }
switchD_100056e4_caseD_5:
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_100057dc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = 0;
  uVar4 = 0;
  pcVar2 = (char *)*param_1;
  do {
    *param_1 = pcVar2 + 1;
    cVar1 = *pcVar2;
    uVar4 = uVar4 | ((int)cVar1 & 0x7fU) << (uVar3 & 0xff);
    uVar3 = uVar3 + 7;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 < 0);
  return uVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e10U)
 */

void recovered_10005814(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e38U)
 */

uint recovered_1000583c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar5 = uVar5 | ((int)(char)bVar1 & 0x7fU) << (uVar4 & 0xff);
    uVar4 = uVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < 0);
  uVar3 = uVar5;
  if (0x3f < bVar1) {
    uVar3 = uVar5 | -1 << (uVar4 & 0xff);
  }
  if (0x1f < uVar4) {
    uVar3 = uVar5;
  }
  return uVar3;
}


#undef DAT_100059a4
#define DAT_100059a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3fa0U)))
#undef DAT_100059a8
#define DAT_100059a8 (*(int *)(((uintptr_t)pf_module_state + 0x3fa4U)))
#undef DAT_100059ac
#define DAT_100059ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3fa8U)))
#define uStack_24 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

int * recovered_1000588c(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[84] = {0};

  int iVar1;
  int *piVar2;
  uint uVar3;
  int extraout_r1 = 0;

  uStack_24 = (int)(uintptr_t)(frame + 52) - 8;
  iVar1 = recovered_10007210(0x14);
  if ((iVar1 != 0) && ((code *)*DAT_100059a4 != (code *)0x0)) {
    (*(code *)*DAT_100059a4)();
  }
  piVar2 = recovered_10004aa8(0x4c);
  piVar2[0x12] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar2[0xe] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar2[0xf] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar2[1] = 0;
  piVar2[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar2[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar2[4] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar2[0x11] = 0;
  piVar2[0xb] = 0;
  *(undefined1 *)((int)piVar2 + 0x2a) = 0;
  *(undefined2 *)(piVar2 + 10) = 0;
  piVar2[9] = 0;
  piVar2[8] = 0;
  piVar2[7] = 0;
  piVar2[6] = 0;
  *piVar2 = 0;
  piVar2[0x10] = 0;
  piVar2[5] = 0;
  iVar1 = DAT_100059a8;
  if (param_1 != 0) {
    iVar1 = param_1;
  }
  recovered_100059b0(piVar2,iVar1);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  piVar2[6] = param_3;
  piVar2[9] = param_3 >> 1;
  piVar2[4] = param_3;
  uStack_24 = uStack_24 & 0xffffff;
  uVar3 = 1;
  if (1 < (int)param_2) {
    uVar3 = param_2;
  }
  piVar2[5] = uVar3;
  piVar2[3] = uVar3;
  piVar2[8] = uVar3 >> 1;
  recovered_100059e0(piVar2 + 0x10,uVar3 * param_3 * 4,(undefined1 *)((int)&uStack_24 + 3));
  *DAT_100059ac = piVar2;
  recovered_100059ec((int)piVar2,extraout_r1);
  recovered_10005c74((int)piVar2);
  return piVar2;
}

#undef DAT_100059a4
#undef DAT_100059a8
#undef DAT_100059ac
#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3facU)
 */

int * recovered_100059b0(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  uVar1 = recovered_10007378(param_2);
  recovered_1000727c(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fdcU)
 */

void recovered_100059e0(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007afc(param_1,param_2,param_3);
  return;
}


#define local_25 (*(undefined1 *)(frame + 16))
#define local_24 (*(undefined2 *)(frame + 17))
#define local_22 (*(undefined1 *)(frame + 19))
#define local_21 (*(undefined1 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fe8U)
 */

void recovered_100059ec(int param_1,int param_2)

{
  unsigned char frame[85] = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = iVar2;
  if (0 < iVar2) {
    iVar5 = *(int *)(param_1 + 0x10);
    param_2 = iVar5;
  }
  if (iVar5 < 1) {
    return;
  }
  iVar5 = 0;
  local_21 = 0;
  recovered_100059e0((int *)(param_1 + 0x40),iVar2 * param_2 * 4,&local_21);
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar6 = *(int *)(param_1 + 0x38);
    iVar2 = iVar6;
    iVar7 = *(int *)(param_1 + 0x30);
    if (0 < iVar6) {
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar7 = iVar2;
    }
    if (0 < iVar2) {
      fVar15 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      bVar1 = 1;
      fVar17 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
      fVar18 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      fVar19 = fVar18 / fVar17;
      if (fVar16 / fVar15 < fVar18 / fVar17) {
        fVar19 = fVar16 / fVar15;
      }
      uVar8 = (uint)(fVar19 * fVar15);
      uVar9 = (uint)(fVar19 * fVar17);
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      iVar2 = (int)(*(int *)(param_1 + 0x10) - uVar8) / 2;
      if ((int)uVar9 < 2) {
        uVar9 = 1;
      }
      iVar7 = (int)(*(int *)(param_1 + 0xc) - uVar9) / 2;
      goto LAB_10005a80;
    }
  }
  bVar1 = 0;
  iVar2 = 0;
  iVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
LAB_10005a80:
  for (; iVar5 < *(int *)(param_1 + 0x10); iVar5 = iVar5 + 1) {
    for (iVar6 = 0; iVar11 = *(int *)(param_1 + 0xc), iVar6 < iVar11; iVar6 = iVar6 + 1) {
      local_22 = 0xff;
      local_25 = *(undefined1 *)(param_1 + 0x1d);
      local_24 = *(undefined2 *)(param_1 + 0x1e);
      if (((((bool)(bVar1 & iVar7 <= iVar6)) && (iVar6 < (int)(uVar9 + iVar7))) && (iVar2 <= iVar5))
         && (iVar5 < (int)(uVar8 + iVar2))) {
        iVar13 = *(int *)(param_1 + 0x2c);
        iVar12 = *(int *)(param_1 + 0x38);
        iVar10 = *(int *)(param_1 + 0x3c);
        iVar3 = recovered_10001aa8(iVar10 * (iVar5 - iVar2),uVar8);
        iVar10 = iVar10 + -1;
        if (iVar3 <= iVar10) {
          iVar10 = iVar3;
        }
        if (iVar3 < 0) {
          iVar10 = 0;
        }
        iVar4 = recovered_10001aa8(iVar12 * (iVar6 - iVar7),uVar9);
        iVar3 = iVar12 + -1;
        if (iVar4 <= iVar12 + -1) {
          iVar3 = iVar4;
        }
        iVar3 = iVar10 * iVar12 + iVar3;
        if (iVar4 < 0) {
          iVar3 = iVar10 * iVar12;
        }
        puVar14 = (undefined1 *)(iVar13 + iVar3 * 4);
        local_25 = *puVar14;
        local_24 = *(undefined2 *)(puVar14 + 1);
      }
      local_22 = 0xff;
      recovered_10002598((void *)(*(int *)(param_1 + 0x40) + (iVar5 * iVar11 + iVar6) * 4),&local_25
                         ,4);
    }
  }
  return;
}

#undef local_25
#undef local_24
#undef local_22
#undef local_21

#undef DAT_10006100
#define DAT_10006100 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x46fcU)))
#undef DAT_10006104
#define DAT_10006104 (*(int * *)(((uintptr_t)pf_module_state + 0x4700U)))
#define iStack_28 (*(int *)(frame + 80))
#define iStack_24 (*(int *)(frame + 84))
#define local_68 (*(uint *)(frame + 16))
#define local_64 (*(uint *)(frame + 20))
#define local_5c (*(int *)(frame + 28))
#define local_50 (*(int *)(frame + 40))
#define local_4c (*(int *)(frame + 44))
#define local_48 (*(int *)(frame + 48))
#define local_44 (*(uint *)(frame + 52))
#define local_40 (*(uint *)(frame + 56))
#define local_3c (*(uint *)(frame + 60))
#define local_38 (*(int *)(frame + 64))
#define local_34 (*(int *)(frame + 68))
#define local_30 (*(int *)(frame + 72))
#define local_2c (*(int *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4270U)
 */

void recovered_10005c74(int param_1)

{
  unsigned char frame[152] = {0};

  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r2 = 0;
  uint *puVar9;
  int iVar10;
  uint extraout_r3 = 0;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int extraout_r12 = 0;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;

  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  if (iVar4 < 1) {
    return;
  }
  recovered_10002608(DAT_10006104,0,0x34);
  iVar4 = recovered_10007210(0x7c);
  piVar3 = DAT_10006104;
  if (iVar4 == 0) {
    return;
  }
  if ((code *)*DAT_10006100 == (code *)0x0) {
    return;
  }
  local_30 = (*(code *)*DAT_10006100)(DAT_10006104);
  local_4c = extraout_r12;
  iVar4 = extraout_r2;
  if (local_30 != 0) {
    iVar4 = *piVar3;
    local_4c = piVar3[1];
    local_5c = iVar4;
  }
  if (local_30 == 0 || iVar4 == 0 && local_4c == 0) {
    return;
  }
  local_48 = piVar3[2];
  uVar11 = extraout_r3;
  if (local_48 != 0) {
    uVar11 = piVar3[3];
    local_68 = uVar11;
  }
  if (local_48 == 0 || uVar11 == 0) {
    return;
  }
  uVar7 = piVar3[4];
  uVar11 = 0;
  if (uVar7 != 0) {
    uVar11 = piVar3[5];
    local_64 = uVar11;
  }
  if (uVar7 == 0 || uVar11 == 0) {
    return;
  }
  if (piVar3[6] != 0x20) {
    return;
  }
  local_38 = piVar3[7];
  if (local_38 == 0) {
    return;
  }
  local_34 = piVar3[9];
  if (local_34 != 0) {
    local_30 = piVar3[0xb];
  }
  if (local_34 == 0 || local_30 == 0) {
    return;
  }
  if (local_68 >> 2 < uVar7) {
    return;
  }
  if (local_4c != 0) {
    return;
  }
  local_2c = piVar3[8];
  local_44 = local_68;
  iStack_28 = piVar3[10];
  iStack_24 = piVar3[0xc];
  local_50 = local_5c;
  local_3c = local_64;
  local_40 = uVar7;
  uVar11 = recovered_100074e4((int)&local_50,(uint)*(byte *)(param_1 + 0x1d),
                              (uint)*(byte *)(param_1 + 0x1e),(uint)*(byte *)(param_1 + 0x1f));
  for (uVar8 = 0; uVar8 != local_64; uVar8 = uVar8 + 1) {
    puVar9 = (uint *)(local_68 * uVar8 + local_5c);
    for (uVar12 = uVar7; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar9 = uVar11;
      puVar9 = puVar9 + 1;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar12 = *(uint *)(param_1 + 0xc);
  lVar2 = (ulonglong)uVar7 * (ulonglong)uVar8;
  uVar21 = recovered_10002260((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),uVar12,0);
  uVar11 = (uint)uVar21;
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  if (local_64 < uVar11) {
    lVar2 = (ulonglong)local_64 * (ulonglong)uVar12;
    uVar21 = recovered_10002260((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),uVar8,0);
    uVar11 = local_64;
    uVar8 = 1;
    if (1 < (uint)uVar21) {
      uVar8 = (uint)uVar21;
    }
  }
  else {
    uVar8 = uVar7;
  }
  uVar12 = uVar7 - uVar8 >> 1;
  uVar1 = local_64 - uVar11 >> 1;
  iVar4 = *(int *)(param_1 + 0x40);
  uVar18 = uVar7;
  for (uVar15 = 0; uVar15 < uVar11; uVar15 = uVar15 + 1) {
    lVar2 = (ulonglong)uVar15 * (ulonglong)*(uint *)(param_1 + 0x10);
    uVar21 = recovered_10002260((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),uVar11,0);
    for (uVar18 = 0; uVar8 != uVar18; uVar18 = uVar18 + 1) {
      uVar16 = *(uint *)(param_1 + 0xc);
      lVar2 = (ulonglong)uVar18 * (ulonglong)uVar16;
      uVar22 = recovered_10002260((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),uVar8,0);
      pbVar13 = (byte *)(iVar4 + (uVar16 * (int)uVar21 + (int)uVar22) * 4);
      uVar16 = recovered_100074e4((int)&local_50,(uint)*pbVar13,(uint)pbVar13[1],(uint)pbVar13[2]);
      *(uint *)(local_68 * (uVar15 + uVar1) + local_5c + uVar12 * 4 + uVar18 * 4) = uVar16;
    }
  }
  uVar16 = *(uint *)(param_1 + 0x14);
  uVar15 = uVar16;
  if (0 < (int)uVar16) {
    uVar15 = *(uint *)(param_1 + 0x18);
    uVar18 = uVar15;
  }
  if ((int)uVar15 < 1) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar17 = *(uint *)(param_1 + 0x24);
  uVar15 = uVar16 - 1;
  if ((int)uVar5 <= (int)(uVar16 - 1)) {
    uVar15 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar15 = 0;
  }
  uVar21 = recovered_10002260((uint)((ulonglong)uVar15 * (ulonglong)uVar8),
                              uVar8 * ((int)uVar15 >> 0x1f) +
                              (int)((ulonglong)uVar15 * (ulonglong)uVar8 >> 0x20),uVar16,0);
  uVar8 = uVar18 - 1;
  if ((int)uVar17 <= (int)(uVar18 - 1)) {
    uVar8 = uVar17;
  }
  if ((int)uVar17 < 0) {
    uVar8 = 0;
  }
  uVar22 = recovered_10002260((uint)((ulonglong)uVar8 * (ulonglong)uVar11),
                              uVar11 * ((int)uVar8 >> 0x1f) +
                              (int)((ulonglong)uVar8 * (ulonglong)uVar11 >> 0x20),uVar18,0);
  uVar11 = recovered_100074e4((int)&local_50,0,0,0);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    iVar4 = 0xff;
    iVar10 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x29) != '\x01') {
      iVar14 = 0xff;
      if (*(char *)(param_1 + 0x2a) == '\x01') {
        iVar4 = 0x50;
        iVar10 = 0x82;
      }
      else {
        iVar4 = 0xff;
        iVar10 = 0xff;
      }
      goto LAB_10006050;
    }
    iVar4 = 0x3c;
    iVar10 = 0xff;
  }
  iVar14 = 0x3c;
LAB_10006050:
  uVar8 = recovered_100074e4((int)&local_50,iVar4,iVar10,iVar14);
  for (iVar4 = -7; iVar4 != 8; iVar4 = iVar4 + 1) {
    uVar18 = uVar1 + (int)uVar22 + iVar4;
    for (iVar10 = -7; iVar10 != 8; iVar10 = iVar10 + 1) {
      iVar14 = recovered_100024bc(iVar10);
      iVar6 = recovered_100024bc(iVar4);
      if ((iVar6 + iVar14 < 8) &&
         (uVar15 = uVar12 + (int)uVar21 + iVar10, -1 < (int)uVar15 && -1 < (int)uVar18)) {
        bVar20 = uVar15 <= uVar7;
        bVar19 = uVar7 == uVar15;
        if (bVar20 && !bVar19) {
          bVar20 = uVar18 <= local_64;
          bVar19 = local_64 == uVar18;
        }
        if (bVar20 && !bVar19) {
          uVar16 = uVar8;
          if (5 < iVar6 + iVar14) {
            uVar16 = uVar11;
          }
          *(uint *)(local_5c + uVar15 * 4 + local_68 * uVar18) = uVar16;
        }
      }
    }
  }
  return;
}

#undef DAT_10006100
#undef DAT_10006104
#undef iStack_28
#undef iStack_24
#undef local_68
#undef local_64
#undef local_5c
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4704U)
 */

void recovered_10006108(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_10006188
#define DAT_10006188 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4784U)))
#undef DAT_1000618c
#define DAT_1000618c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4788U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4714U)
 */

void recovered_10006118(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *data;
  int iVar1;

  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)*DAT_1000618c == param_1) {
      *DAT_1000618c = 0;
    }
    recovered_10007c30(param_1 + 0x10);
    recovered_10007c30(param_1 + 0xb);
    data = recovered_10007260(param_1);
    recovered_10004ad8(data);
    iVar1 = recovered_10007210(0x18);
    if (iVar1 == 0) {
      return;
    }
    if ((code *)*DAT_10006188 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x477cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*DAT_10006188)();
      return;
    }
  }
  return;
}

#undef DAT_10006188
#undef DAT_1000618c

#undef DAT_100062cc
#define DAT_100062cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x48c8U)))
#undef DAT_100062d0
#define DAT_100062d0 (*(int *)(((uintptr_t)pf_module_state + 0x48ccU)))
#undef DAT_100062d4
#define DAT_100062d4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x48d0U)))
#undef DAT_100062d8
#define DAT_100062d8 (*(void * *)(((uintptr_t)pf_module_state + 0x48d4U)))
#define local_a4 (*(void * *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(int *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x478cU)
 */

void * recovered_10006190(int *param_1)

{
  unsigned char frame[224] = {0};

  ulong size;
  void *pvVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_100062d4;
  local_78 = DAT_100062cc;
  local_70 = DAT_100062d0 + ((uintptr_t)pf_module_state+0x47d8U);
  recovered_10004fa4(&uStack_94);
  if (param_1 == (int *)0x0) {
    local_98 = 0;
    local_9c = 0;
    local_a0 = (void *)0x0;
    size = 1;
  }
  else {
    local_90 = 0xffffffff;
    recovered_10007584(&local_a0,param_1);
    size = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10004ad4(size);
  local_90 = 2;
  pvVar1 = DAT_100062d8;
  if (local_a0 != (void *)0x0) {
    pvVar1 = local_a0;
  }
  recovered_10002598(local_a4,pvVar1,local_9c + 1);
  pvVar1 = local_a4;
  recovered_10004ad8(local_a0);
  recovered_10004fbc(&uStack_94);
  return pvVar1;
}

#undef DAT_100062cc
#undef DAT_100062d0
#undef DAT_100062d4
#undef DAT_100062d8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_b0
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48d8U)
 */

void recovered_100062dc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x490cU)
 */

void recovered_10006310(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int extraout_r1 = 0;

  if (param_1 == 0) {
    return;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  iVar1 = 1;
  if (1 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 0x10) = param_3;
  recovered_1000635c(param_1);
  recovered_100059ec(param_1,extraout_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4958U)
 */

void recovered_1000635c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar2 = iVar1 + -1;
  if (iVar3 <= iVar1 + -1) {
    iVar2 = iVar3;
  }
  if (iVar3 < 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x18);
  }
  iVar3 = iVar1 + -1;
  if (iVar4 <= iVar1 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar3;
  return;
}


#undef DAT_100063d8
#define DAT_100063d8 (*(int *)(((uintptr_t)pf_module_state + 0x49d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x49b8U)
 */

void recovered_100063bc(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return;
  }
  iVar1 = DAT_100063d8;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  recovered_100059b0((int *)param_1,iVar1);
  return;
}

#undef DAT_100063d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x49d8U)
 */

void recovered_100063dc(int param_1,int *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;
  int iVar3;

  if (param_1 != 0) {
    puVar2 = (undefined1 *)0x0;
    if (param_2 != (int *)0x0) {
      puVar2 = (undefined1 *)param_2[2];
    }
    if (param_2 != (int *)0x0 && puVar2 != (undefined1 *)0x0) {
      iVar1 = *param_2;
      iVar3 = iVar1;
      if (0 < iVar1) {
        iVar3 = param_2[1];
        param_3 = iVar3;
      }
      if (iVar3 < 1) {
        return;
      }
      recovered_10006448((int *)(param_1 + 0x2c),puVar2,puVar2 + iVar1 * param_3 * 4);
      iVar3 = param_2[1];
      *(int *)(param_1 + 0x38) = *param_2;
      *(int *)(param_1 + 0x3c) = iVar3;
      recovered_100059ec(param_1,iVar3);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a44U)
 */

void recovered_10006448(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007c54(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a5cU)
 */

void recovered_10006460(int param_1)

{
  unsigned char frame[64] = {0};

  int extraout_r1 = 0;

  if (param_1 == 0) {
    return;
  }
  recovered_1000648c();
  recovered_100059ec(param_1,extraout_r1);
  recovered_10005c74(param_1);
  return;
}


#undef DAT_100068d0
#define DAT_100068d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4eccU)))
#undef DAT_100068d4
#define DAT_100068d4 (*(uint * *)(((uintptr_t)pf_module_state + 0x4ed0U)))
#undef DAT_100068d8
#define DAT_100068d8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ed4U)))
#undef DAT_100068dc
#define DAT_100068dc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ed8U)))
#undef DAT_100068e0
#define DAT_100068e0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4edcU)))
#undef DAT_100068e4
#define DAT_100068e4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ee0U)))
#undef DAT_100068e8
#define DAT_100068e8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ee4U)))
#undef DAT_100068ec
#define DAT_100068ec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ee8U)))
#undef DAT_100068f0
#define DAT_100068f0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4eecU)))
#undef DAT_100068f4
#define DAT_100068f4 (*(byte * *)(((uintptr_t)pf_module_state + 0x4ef0U)))
#undef DAT_100068f8
#define DAT_100068f8 (*(int *)(((uintptr_t)pf_module_state + 0x4ef4U)))
#undef DAT_100068fc
#define DAT_100068fc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ef8U)))
#undef DAT_10006900
#define DAT_10006900 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efcU)))
#undef DAT_10006904
#define DAT_10006904 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f00U)))
#define local_40 (*(uint *)(frame + 16))
#define local_38 (*(uint *)(frame + 24))
#define uStack_3c (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(uint *)(frame + 44))
#define uStack_2c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a88U)
 */

void recovered_1000648c(void)

{
  unsigned char frame[112] = {0};

  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_r1;
  int extraout_r2 = 0;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;

  puVar10 = DAT_100068f0;
  puVar9 = DAT_100068ec;
  puVar8 = DAT_100068e8;
  puVar7 = DAT_100068e4;
  puVar6 = DAT_100068e0;
  puVar5 = DAT_100068dc;
  puVar4 = DAT_100068d8;
  puVar3 = DAT_100068d4;
  puVar2 = DAT_100068d0;
  if (*DAT_100068d4 == 0) {
    recovered_10006a24();
    return;
  }
switchD_10006724_caseD_49:
  while( true ) {
    iVar13 = recovered_10007210(0x2c);
    pcVar14 = (code *)0x0;
    if (iVar13 != 0) {
      pcVar14 = (code *)*puVar2;
    }
    if ((iVar13 == 0 || pcVar14 == (code *)0x0) || (uVar17 = (*pcVar14)(), uVar17 == 0)) break;
    uVar11 = *puVar3;
    uVar15 = uVar17 >> 8;
    if ((uVar17 & 0xff) == 0) goto LAB_10006550;
    if (uVar11 == 0) goto switchD_1000667c_caseD_5;
    if (puVar3[1] == 2) {
      puVar3[1] = 0;
      switch((uintptr_t)(uVar17 & 0xff)) {
      case 0x41:
        puVar12 = puVar4;
        break;
      case 0x42:
        puVar12 = puVar5;
        break;
      case 0x43:
        puVar12 = puVar6;
        break;
      case 0x44:
        puVar12 = puVar7;
        break;
      default:
        goto switchD_1000667c_caseD_5;
      }
      goto LAB_100066f8;
    }
    if (puVar3[1] == 1) {
      puVar3[1] = (uint)((uVar17 & 0xff) == 0x5b) << 1;
      goto switchD_1000667c_caseD_5;
    }
    uVar16 = uVar17 & 0xff;
    if (uVar16 == 0x1b) {
      puVar3[1] = 1;
      goto switchD_1000667c_caseD_5;
    }
    if ((uVar17 - 0x20 & 0xff) < 0x5f) {
      bVar1 = (byte)uVar17;
      *DAT_100068f4 = bVar1;
      if (0x19 < (uVar17 - 0x61 & 0xff)) {
        if (0x19 < (uVar17 - 0x41 & 0xff)) {
          if ((uVar17 - 0x30 & 0xff) < 10) {
            puVar12 = *(undefined1 **)(DAT_100068f8 + (uVar17 + 0xd0 & 0xff) * 4);
            goto LAB_100066f8;
          }
          goto LAB_10006668;
        }
        bVar1 = bVar1 | 0x20;
      }
      recovered_100075cc((int)(char)bVar1);
      goto switchD_1000667c_caseD_5;
    }
LAB_10006668:
    switch((uintptr_t)(uVar17 & 0xff)) {
    case 3:
    case 4:
      *(undefined1 *)(uVar11 + 0x1c) = 1;
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xb:
    case 0xc:
      goto switchD_1000667c_caseD_5;
    case 8:
switchD_1000667c_caseD_8:
      puVar12 = puVar8;
      break;
    case 10:
    case 0xd:
      puVar12 = puVar9;
      break;
    default:
      if (uVar16 == 0x20) {
        puVar12 = DAT_100068fc;
      }
      else if (uVar16 == 0x2d) {
        puVar12 = DAT_10006900;
      }
      else {
        if (uVar16 != 0x2e) {
          if (uVar16 == 0x7f) goto switchD_1000667c_caseD_8;
          goto switchD_1000667c_caseD_5;
        }
        puVar12 = DAT_10006904;
      }
    }
LAB_100066f8:
    *puVar12 = 1;
switchD_1000667c_caseD_5:
    uVar11 = uVar17 & 0xffff;
    bVar18 = uVar11 != 0x11b;
    if (bVar18) {
      uVar11 = *puVar3;
    }
    if (bVar18 && uVar11 != 0) goto LAB_10006710;
  }
  uVar17 = *puVar3;
  recovered_1000635c(uVar17);
  if (uVar17 == 0) {
    return;
  }
  uStack_3c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_38 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_34 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_40 = 0;
  local_30 = 0;
  uStack_2c = uStack_3c;
  local_28 = local_38;
  local_24 = local_34;
  iVar13 = recovered_10007210(0x80);
  pcVar14 = extraout_r1;
  if (iVar13 != 0) {
    pcVar14 = (code *)puVar2[0x15];
  }
  if (iVar13 == 0 || pcVar14 == (code *)0x0) {
    return;
  }
  uVar19 = (*pcVar14)(&local_40);
  if ((int)uVar19 == 0) {
    return;
  }
  bVar18 = (local_40 & 2) != 0;
  uVar15 = (uint)((ulonglong)uVar19 >> 0x20);
  iVar13 = extraout_r2;
  if (bVar18) {
    uVar15 = uStack_2c;
    iVar13 = local_30;
  }
  if (bVar18 && (iVar13 != 0 || uVar15 != 0)) {
    *(int *)(uVar17 + 0x20) = *(int *)(uVar17 + 0x20) + iVar13;
    uVar15 = *(int *)(uVar17 + 0x24) + uVar15;
  }
  else {
    if ((local_40 & 1) == 0) goto LAB_100068a8;
    uVar15 = recovered_100075f4(local_38,local_28,*(int *)(uVar17 + 0x14));
    *(uint *)(uVar17 + 0x20) = uVar15;
    uVar15 = recovered_100075f4(local_34,local_24,*(int *)(uVar17 + 0x18));
  }
  *(uint *)(uVar17 + 0x24) = uVar15;
LAB_100068a8:
  *(char *)(uVar17 + 0x2a) = (char)((uStack_3c & 7) >> 2);
  *(byte *)(uVar17 + 0x28) = (byte)uStack_3c & 1;
  *(char *)(uVar17 + 0x29) = (char)((uStack_3c & 3) >> 1);
  recovered_1000635c(uVar17);
  return;
LAB_10006550:
  if (uVar11 == 0) goto switchD_10006724_caseD_49;
  switch((uintptr_t)(uVar15 & 0xff)) {
  case 1:
switchD_10006724_caseD_48:
    *puVar4 = 1;
    goto switchD_10006724_caseD_49;
  case 2:
switchD_10006724_caseD_50:
    *puVar5 = 1;
    goto switchD_10006724_caseD_49;
  case 3:
switchD_10006724_caseD_4d:
    *puVar6 = 1;
    goto switchD_10006724_caseD_49;
  case 4:
switchD_10006724_caseD_4b:
    *puVar7 = 1;
    goto switchD_10006724_caseD_49;
  }
  if ((uVar15 & 0xff) != 0x17) {
LAB_10006710:
    switch((uintptr_t)(uVar15 & 0xff)) {
    case 0x48:
      goto switchD_10006724_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_10006724_caseD_49;
    case 0x4b:
      goto switchD_10006724_caseD_4b;
    case 0x4d:
      goto switchD_10006724_caseD_4d;
    case 0x50:
      goto switchD_10006724_caseD_50;
    case 0x53:
      *puVar10 = 1;
      goto switchD_10006724_caseD_49;
    default:
      uVar15 = uVar15 & 0xff;
      if (uVar15 != 1) {
        if (uVar15 == 0xe) {
          *puVar8 = 1;
        }
        else if (uVar15 == 0x1c) {
          *puVar9 = 1;
        }
        goto switchD_10006724_caseD_49;
      }
    }
  }
  *(undefined1 *)(uVar11 + 0x1c) = 1;
  goto switchD_10006724_caseD_49;
}

#undef DAT_100068d0
#undef DAT_100068d4
#undef DAT_100068d8
#undef DAT_100068dc
#undef DAT_100068e0
#undef DAT_100068e4
#undef DAT_100068e8
#undef DAT_100068ec
#undef DAT_100068f0
#undef DAT_100068f4
#undef DAT_100068f8
#undef DAT_100068fc
#undef DAT_10006900
#undef DAT_10006904
#undef local_40
#undef local_38
#undef uStack_3c
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef uStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f04U)
 */

byte recovered_10006908(int param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  return bVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f18U)
 */

void recovered_1000691c(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1d) = param_2;
  *(undefined1 *)(param_1 + 0x1f) = param_4;
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  if (*(int *)(param_1 + 0x30) == 0) {
    recovered_100059ec(param_1,0);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f40U)
 */

int * recovered_10006944(int param_1)

{
  unsigned char frame[64] = {0};

  ulong size;
  int iVar1;
  void *out;
  int in_r1;
  int iVar2;
  void *data;
  int *piVar3;

  piVar3 = (int *)0x0;
  if ((param_1 != 0) && (recovered_100059ec(param_1,in_r1), *(int *)(param_1 + 0x44) != 0)) {
    piVar3 = recovered_10004aa8(0x18);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    size = iVar1 * iVar2 * 4;
    out = recovered_10004ad4(size);
    data = *(void **)(param_1 + 0x40);
    piVar3[2] = (int)out;
    recovered_10002598(out,data,size);
    piVar3[5] = 0;
    piVar3[4] = 0;
    piVar3[3] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fbcU)
 */

void recovered_100069c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5000U)
 */

byte recovered_10006a04(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + param_2 + 0x28);
  }
  return bVar1 & 1;
}


#undef DAT_10006ba4
#define DAT_10006ba4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a0U)))
#undef DAT_10006ba8
#define DAT_10006ba8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a4U)))
#undef DAT_10006bac
#define DAT_10006bac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a8U)))
#undef DAT_10006bb0
#define DAT_10006bb0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10006bb4
#define DAT_10006bb4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b0U)))
#undef DAT_10006bb8
#define DAT_10006bb8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_10006bbc
#define DAT_10006bbc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b8U)))
#undef DAT_10006bc0
#define DAT_10006bc0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51bcU)))
#undef DAT_10006bc4
#define DAT_10006bc4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c0U)))
#undef DAT_10006bc8
#define DAT_10006bc8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c4U)))
#undef DAT_10006bcc
#define DAT_10006bcc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c8U)))
#undef DAT_10006bd0
#define DAT_10006bd0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_10006bd4
#define DAT_10006bd4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d0U)))
#undef DAT_10006bd8
#define DAT_10006bd8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d4U)))
#undef DAT_10006bdc
#define DAT_10006bdc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d8U)))
#undef DAT_10006be0
#define DAT_10006be0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef DAT_10006be4
#define DAT_10006be4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e0U)))
#undef DAT_10006be8
#define DAT_10006be8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e4U)))
#undef DAT_10006bec
#define DAT_10006bec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10006bf0
#define DAT_10006bf0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ecU)))
#undef DAT_10006bf4
#define DAT_10006bf4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f0U)))
#undef DAT_10006bf8
#define DAT_10006bf8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f4U)))
#undef DAT_10006bfc
#define DAT_10006bfc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef DAT_10006c00
#define DAT_10006c00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51fcU)))
#undef DAT_10006c04
#define DAT_10006c04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5200U)))
#undef DAT_10006c08
#define DAT_10006c08 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5204U)))
#undef DAT_10006c0c
#define DAT_10006c0c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5208U)))
#undef DAT_10006c10
#define DAT_10006c10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_10006c14
#define DAT_10006c14 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5210U)))
#undef DAT_10006c18
#define DAT_10006c18 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5214U)))
#undef DAT_10006c1c
#define DAT_10006c1c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5218U)))
#undef DAT_10006c20
#define DAT_10006c20 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x521cU)))
#undef DAT_10006c24
#define DAT_10006c24 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5220U)))
#undef DAT_10006c28
#define DAT_10006c28 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006c2c
#define DAT_10006c2c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006c30
#define DAT_10006c30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006c34
#define DAT_10006c34 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006c38
#define DAT_10006c38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006c3c
#define DAT_10006c3c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006c40
#define DAT_10006c40 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006c44
#define DAT_10006c44 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006c48
#define DAT_10006c48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006c4c
#define DAT_10006c4c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006c50
#define DAT_10006c50 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006c54
#define DAT_10006c54 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006c58
#define DAT_10006c58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006c5c
#define DAT_10006c5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5020U)
 */

void recovered_10006a24(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006ba4 = 0;
  *DAT_10006ba8 = 0;
  *DAT_10006bac = 0;
  *DAT_10006bb0 = 0;
  *DAT_10006bb4 = 0;
  *DAT_10006bb8 = 0;
  *DAT_10006bbc = 0;
  *DAT_10006bc0 = 0;
  *DAT_10006bc4 = 0;
  *DAT_10006bc8 = 0;
  *DAT_10006bcc = 0;
  *DAT_10006bd0 = 0;
  *DAT_10006bd4 = 0;
  *DAT_10006bd8 = 0;
  *DAT_10006bdc = 0;
  *DAT_10006be0 = 0;
  *DAT_10006be4 = 0;
  *DAT_10006be8 = 0;
  *DAT_10006bec = 0;
  *DAT_10006bf0 = 0;
  *DAT_10006bf4 = 0;
  *DAT_10006bf8 = 0;
  *DAT_10006bfc = 0;
  *DAT_10006c00 = 0;
  *DAT_10006c04 = 0;
  *DAT_10006c08 = 0;
  *DAT_10006c0c = 0;
  *DAT_10006c10 = 0;
  *DAT_10006c14 = 0;
  *DAT_10006c18 = 0;
  *DAT_10006c1c = 0;
  *DAT_10006c20 = 0;
  *DAT_10006c24 = 0;
  *DAT_10006c28 = 0;
  *DAT_10006c2c = 0;
  *DAT_10006c30 = 0;
  *DAT_10006c34 = 0;
  *DAT_10006c38 = 0;
  *DAT_10006c3c = 0;
  *DAT_10006c40 = 0;
  *DAT_10006c44 = 0;
  *DAT_10006c48 = 0;
  *DAT_10006c4c = 0;
  *DAT_10006c50 = 0;
  *DAT_10006c54 = 0;
  *DAT_10006c58 = 0;
  *DAT_10006c5c = 0;
  return;
}

#undef DAT_10006ba4
#undef DAT_10006ba8
#undef DAT_10006bac
#undef DAT_10006bb0
#undef DAT_10006bb4
#undef DAT_10006bb8
#undef DAT_10006bbc
#undef DAT_10006bc0
#undef DAT_10006bc4
#undef DAT_10006bc8
#undef DAT_10006bcc
#undef DAT_10006bd0
#undef DAT_10006bd4
#undef DAT_10006bd8
#undef DAT_10006bdc
#undef DAT_10006be0
#undef DAT_10006be4
#undef DAT_10006be8
#undef DAT_10006bec
#undef DAT_10006bf0
#undef DAT_10006bf4
#undef DAT_10006bf8
#undef DAT_10006bfc
#undef DAT_10006c00
#undef DAT_10006c04
#undef DAT_10006c08
#undef DAT_10006c0c
#undef DAT_10006c10
#undef DAT_10006c14
#undef DAT_10006c18
#undef DAT_10006c1c
#undef DAT_10006c20
#undef DAT_10006c24
#undef DAT_10006c28
#undef DAT_10006c2c
#undef DAT_10006c30
#undef DAT_10006c34
#undef DAT_10006c38
#undef DAT_10006c3c
#undef DAT_10006c40
#undef DAT_10006c44
#undef DAT_10006c48
#undef DAT_10006c4c
#undef DAT_10006c50
#undef DAT_10006c54
#undef DAT_10006c58
#undef DAT_10006c5c

#undef DAT_10006ba4
#define DAT_10006ba4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a0U)))
#undef DAT_10006ba8
#define DAT_10006ba8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a4U)))
#undef DAT_10006bac
#define DAT_10006bac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a8U)))
#undef DAT_10006bb0
#define DAT_10006bb0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10006bb4
#define DAT_10006bb4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b0U)))
#undef DAT_10006bb8
#define DAT_10006bb8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_10006bbc
#define DAT_10006bbc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b8U)))
#undef DAT_10006bc0
#define DAT_10006bc0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51bcU)))
#undef DAT_10006bc4
#define DAT_10006bc4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c0U)))
#undef DAT_10006bc8
#define DAT_10006bc8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c4U)))
#undef DAT_10006bcc
#define DAT_10006bcc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c8U)))
#undef DAT_10006bd0
#define DAT_10006bd0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_10006bd4
#define DAT_10006bd4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d0U)))
#undef DAT_10006bd8
#define DAT_10006bd8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d4U)))
#undef DAT_10006bdc
#define DAT_10006bdc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d8U)))
#undef DAT_10006be0
#define DAT_10006be0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef DAT_10006be4
#define DAT_10006be4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e0U)))
#undef DAT_10006be8
#define DAT_10006be8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e4U)))
#undef DAT_10006bec
#define DAT_10006bec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10006bf0
#define DAT_10006bf0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ecU)))
#undef DAT_10006bf4
#define DAT_10006bf4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f0U)))
#undef DAT_10006bf8
#define DAT_10006bf8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f4U)))
#undef DAT_10006bfc
#define DAT_10006bfc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef DAT_10006c00
#define DAT_10006c00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51fcU)))
#undef DAT_10006c04
#define DAT_10006c04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5200U)))
#undef DAT_10006c08
#define DAT_10006c08 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5204U)))
#undef DAT_10006c0c
#define DAT_10006c0c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5208U)))
#undef DAT_10006c10
#define DAT_10006c10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_10006c14
#define DAT_10006c14 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5210U)))
#undef DAT_10006c18
#define DAT_10006c18 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5214U)))
#undef DAT_10006c1c
#define DAT_10006c1c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5218U)))
#undef DAT_10006c20
#define DAT_10006c20 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x521cU)))
#undef DAT_10006c24
#define DAT_10006c24 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5220U)))
#undef DAT_10006c28
#define DAT_10006c28 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006c2c
#define DAT_10006c2c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006c30
#define DAT_10006c30 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006c34
#define DAT_10006c34 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006c38
#define DAT_10006c38 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006c3c
#define DAT_10006c3c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006c40
#define DAT_10006c40 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006c44
#define DAT_10006c44 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006c48
#define DAT_10006c48 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006c4c
#define DAT_10006c4c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006c50
#define DAT_10006c50 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006c54
#define DAT_10006c54 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006c58
#define DAT_10006c58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006c5c
#define DAT_10006c5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x525cU)
 */

void recovered_10006c60(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006ba4 = 0;
  *DAT_10006ba8 = 0;
  *DAT_10006bac = 0;
  *DAT_10006bb0 = 0;
  *DAT_10006bb4 = 0;
  *DAT_10006bb8 = 0;
  *DAT_10006bbc = 0;
  *DAT_10006bc0 = 0;
  *DAT_10006bc4 = 0;
  *DAT_10006bc8 = 0;
  *DAT_10006bcc = 0;
  *DAT_10006bd0 = 0;
  *DAT_10006bd4 = 0;
  *DAT_10006bd8 = 0;
  *DAT_10006bdc = 0;
  *DAT_10006be0 = 0;
  *DAT_10006be4 = 0;
  *DAT_10006be8 = 0;
  *DAT_10006bec = 0;
  *DAT_10006bf0 = 0;
  *DAT_10006bf4 = 0;
  *DAT_10006bf8 = 0;
  *DAT_10006bfc = 0;
  *DAT_10006c00 = 0;
  *DAT_10006c04 = 0;
  *DAT_10006c08 = 0;
  *DAT_10006c0c = 0;
  *DAT_10006c10 = 0;
  *DAT_10006c14 = 0;
  *DAT_10006c18 = 0;
  *DAT_10006c1c = 0;
  *DAT_10006c20 = 0;
  *DAT_10006c24 = 0;
  *DAT_10006c28 = 0;
  *DAT_10006c2c = 0;
  *DAT_10006c30 = 0;
  *DAT_10006c34 = 0;
  *DAT_10006c38 = 0;
  *DAT_10006c3c = 0;
  *DAT_10006c40 = 0;
  *DAT_10006c44 = 0;
  *DAT_10006c48 = 0;
  *DAT_10006c4c = 0;
  *DAT_10006c50 = 0;
  *DAT_10006c54 = 0;
  *DAT_10006c58 = 0;
  *DAT_10006c5c = 0;
  return;
}

#undef DAT_10006ba4
#undef DAT_10006ba8
#undef DAT_10006bac
#undef DAT_10006bb0
#undef DAT_10006bb4
#undef DAT_10006bb8
#undef DAT_10006bbc
#undef DAT_10006bc0
#undef DAT_10006bc4
#undef DAT_10006bc8
#undef DAT_10006bcc
#undef DAT_10006bd0
#undef DAT_10006bd4
#undef DAT_10006bd8
#undef DAT_10006bdc
#undef DAT_10006be0
#undef DAT_10006be4
#undef DAT_10006be8
#undef DAT_10006bec
#undef DAT_10006bf0
#undef DAT_10006bf4
#undef DAT_10006bf8
#undef DAT_10006bfc
#undef DAT_10006c00
#undef DAT_10006c04
#undef DAT_10006c08
#undef DAT_10006c0c
#undef DAT_10006c10
#undef DAT_10006c14
#undef DAT_10006c18
#undef DAT_10006c1c
#undef DAT_10006c20
#undef DAT_10006c24
#undef DAT_10006c28
#undef DAT_10006c2c
#undef DAT_10006c30
#undef DAT_10006c34
#undef DAT_10006c38
#undef DAT_10006c3c
#undef DAT_10006c40
#undef DAT_10006c44
#undef DAT_10006c48
#undef DAT_10006c4c
#undef DAT_10006c50
#undef DAT_10006c54
#undef DAT_10006c58
#undef DAT_10006c5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5260U)
 */

void recovered_10006c64(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5264U)
 */

void recovered_10006c68(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5268U)
 */

undefined4 recovered_10006c6c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5270U)
 */

void recovered_10006c74(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5274U)
 */

undefined4 recovered_10006c78(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10007190
#define DAT_10007190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x578cU)))
#undef DAT_10007194
#define DAT_10007194 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5790U)))
#undef DAT_10007198
#define DAT_10007198 (*(int *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_1000719c
#define DAT_1000719c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5798U)))
#undef DAT_100071a0
#define DAT_100071a0 (*(char * *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef DAT_100071a4
#define DAT_100071a4 (*(char * *)(((uintptr_t)pf_module_state + 0x57a0U)))
#undef DAT_100071a8
#define DAT_100071a8 (*(char * *)(((uintptr_t)pf_module_state + 0x57a4U)))
#undef DAT_100071ac
#define DAT_100071ac (*(char * *)(((uintptr_t)pf_module_state + 0x57a8U)))
#define local_104 (*(int * *)(frame + 28))
#define auStack_110 (*(undefined1 (*)[12])(frame + 16))
#define local_100 (*(int * *)(frame + 32))
#define local_fc (*(char * *)(frame + 36))
#define local_f8 (*(char * *)(frame + 40))
#define local_f4 (*(char * *)(frame + 44))
#define local_f0 (*(char * *)(frame + 48))
#define local_ec (*(uint *)(frame + 52))
#define local_e8 (*(char * *)(frame + 56))
#define local_e4 (*(void * *)(frame + 60))
#define local_e0 (*(char * *)(frame + 64))
#define local_dc (*(void * *)(frame + 68))
#define local_d4 (*(char * *)(frame + 76))
#define local_d0 (*(int *)(frame + 80))
#define local_cc (*(undefined4 *)(frame + 84))
#define local_c8 (*(void * *)(frame + 88))
#define local_c0 (*(ulong *)(frame + 96))
#define local_bc (*(int *)(frame + 100))
#define iStack_c4 (*(int *)(frame + 92))
#define local_b8 (*(int *)(frame + 104))
#define local_b4 (*(undefined4 *)(frame + 108))
#define local_ac (*(char * *)(frame + 116))
#define local_a8 (*(int *)(frame + 120))
#define local_a4 (*(undefined4 *)(frame + 124))
#define local_a0 (*(int *)(frame + 128))
#define local_9c (*(char * *)(frame + 132))
#define local_98 (*(undefined4 *)(frame + 136))
#define local_90 (*(undefined4 *)(frame + 144))
#define local_7c (*(undefined4 *)(frame + 164))
#define local_78 (*(undefined4 *)(frame + 168))
#define local_74 (*(undefined1 * *)(frame + 172))
#define uStack_94 (*(undefined4 *)(frame + 140))
#define local_70 (*(int *)(frame + 176))
#define local_6c (*(undefined1 * *)(frame + 180))
#define auStack_68 (*(undefined1 (*)[8])(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x527cU)
 */

char * recovered_10006c80(char *param_1,int *param_2,int *param_3)

{
  unsigned char frame[320] = {0};

  ulong size;
  char *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  void *extraout_r0;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_110;
  local_7c = *DAT_1000719c;
  local_78 = DAT_10007190;
  local_70 = DAT_10007198 + ((uintptr_t)pf_module_state+0x52d0U);
  recovered_10004fa4(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (char *)0x0) {
    pcVar6 = (char *)0x0;
    goto LAB_100070c4;
  }
  iStack_c4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_c0 = *(ulong *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_bc = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pvVar7 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_90 = 0xffffffff;
  local_104 = param_2;
  local_100 = param_3;
  recovered_10007abc(&local_e0,(int)param_1);
  local_98 = 0;
  local_9c = (char *)0x0;
  local_a0 = 0;
  local_ec = 0;
  if (local_dc != (void *)0x0) {
    pcVar6 = local_e0;
    if (local_e0 == (char *)0x0) {
      pcVar6 = DAT_100071a0;
    }
    local_ec = (uint)(*pcVar6 == '/');
  }
  local_f4 = DAT_100071a0;
  local_f0 = DAT_100071a4;
  local_e8 = DAT_100071a8;
  local_f8 = param_1;
  do {
    if (local_dc <= pvVar7) break;
    recovered_10007658((int *)&local_e0,'/',(uint)pvVar7);
    local_90 = 1;
    pvVar4 = local_dc;
    if (extraout_r0 != (void *)0xffffffff) {
      pvVar4 = extraout_r0;
    }
    local_e4 = extraout_r0;
    recovered_10007690(&local_ac,(int *)&local_e0,(uint)pvVar7,(int)pvVar4 - (int)pvVar7);
    if ((local_a8 != 0) && (bVar3 = recovered_100071fc((int *)&local_ac,local_f0), bVar3)) {
      bVar3 = recovered_100076e0((int *)&local_ac,local_e8);
      if (bVar3) {
        if ((local_9c == (char *)0x0) ||
           (bVar3 = recovered_100071fc((int *)(local_a0 + (int)local_9c * 0xc + -0xc),local_e8),
           !bVar3)) {
          if (local_ec == 0) goto LAB_10006e58;
        }
        else {
          recovered_10007724(&local_a0);
        }
      }
      else {
LAB_10006e58:
        local_90 = 2;
        recovered_10007844(&local_a0,(int *)&local_ac);
      }
    }
    recovered_10004ad8(local_ac);
    pvVar7 = (void *)((int)local_e4 + 1);
  } while (local_e4 != (void *)0xffffffff);
  local_90 = 3;
  local_fc = DAT_100071ac;
  pcVar6 = local_f4;
  if (local_ec != 0) {
    pcVar6 = DAT_100071ac;
  }
  recovered_10007abc(&local_ac,(int)pcVar6);
  pvVar7 = (void *)0x0;
  pcVar6 = (char *)0x0;
  while (uVar2 = local_a4, pcVar6 < local_9c) {
    local_e8 = pcVar6;
    local_e4 = pvVar7;
    if (pcVar6 != (char *)0x0 || (local_ec & 1) != 0) {
      local_90 = 4;
      recovered_10007758((int *)&local_ac,0x2f);
    }
    local_90 = 5;
    recovered_100077bc((int *)&local_ac,(int *)(local_a0 + (int)local_e4));
    pvVar7 = (void *)((int)local_e4 + 0xc);
    pcVar6 = local_e8 + 1;
  }
  if (local_a8 == 0) {
    local_90 = 6;
    pcVar6 = local_f0;
    if (local_ec != 0) {
      pcVar6 = local_fc;
    }
    recovered_10007abc(&local_d4,(int)pcVar6);
  }
  else {
    local_d0 = local_a8;
    local_d4 = local_ac;
    local_a4 = 0;
    local_cc = uVar2;
    local_a8 = 0;
    local_ac = (char *)0x0;
  }
  recovered_10004ad8(local_ac);
  recovered_10007a54(&local_a0);
  recovered_10004ad8(local_e0);
  local_90 = 7;
  pcVar6 = local_f4;
  if (local_d4 != (char *)0x0) {
    pcVar6 = local_d4;
  }
  iVar5 = recovered_100071b0(pcVar6,&local_c8);
  pcVar1 = local_f8;
  if (iVar5 == 0) {
    bVar3 = recovered_100071fc((int *)&local_d4,local_f8);
    pcVar6 = (char *)0x0;
    if (bVar3) {
      local_90 = 8;
      iVar5 = recovered_100071b0(pcVar1,&local_c8);
      pcVar6 = (char *)0x0;
      if (iVar5 != 0) goto LAB_10006fc4;
    }
  }
  else {
LAB_10006fc4:
    pcVar6 = (char *)0x0;
    if (iStack_c4 == 0) {
      local_e4 = local_c8;
      size = 0;
      if (local_c8 != (void *)0x0) {
        size = local_c0;
      }
      if (local_c8 != (void *)0x0 && size != 0) {
        iVar5 = 0;
        if (local_bc != 0) {
          iVar5 = local_b8;
        }
        if (local_bc != 0 && iVar5 != 0) {
          local_90 = 9;
          local_e8 = recovered_10004ad4(size);
          local_90 = 10;
          recovered_10002598(local_e8,local_e4,local_c0);
          pcVar6 = local_e8;
          iVar5 = recovered_10007210(0x50);
          if ((iVar5 != 0) && ((code *)*DAT_10007194 != (code *)0x0)) {
            local_90 = 0xb;
            (*(code *)*DAT_10007194)(local_e4);
            pcVar6 = local_e8;
          }
          if (local_104 != (int *)0x0) {
            *local_104 = local_bc;
          }
          if (local_100 != (int *)0x0) {
            *local_100 = local_b8;
          }
        }
      }
    }
  }
  recovered_10004ad8(local_d4);
LAB_100070c4:
  recovered_10004fbc(&uStack_94);
  return pcVar6;
}

#undef DAT_10007190
#undef DAT_10007194
#undef DAT_10007198
#undef DAT_1000719c
#undef DAT_100071a0
#undef DAT_100071a4
#undef DAT_100071a8
#undef DAT_100071ac
#undef local_104
#undef auStack_110
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c0
#undef local_bc
#undef iStack_c4
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_100071f8
#define DAT_100071f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x57f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57acU)
 */

undefined4 recovered_100071b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007210(0x58);
  if ((iVar1 == 0) || ((code *)*DAT_100071f8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x57e8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100071f8)(param_1,param_2);
  return uVar2;
}

#undef DAT_100071f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57f8U)
 */

bool recovered_100071fc(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_100076e0(param_1,param_2);
  return !bVar1;
}


#undef DAT_1000725c
#define DAT_1000725c (*(int *)(((uintptr_t)pf_module_state + 0x5858U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x580cU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007210(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_1000725c) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_1000725c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x585cU)
 */

undefined4 * recovered_10007260(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004ad8((void *)*param_1);
  return param_1;
}


#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
#define local_28 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5878U)
 */

void recovered_1000727c(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *data;
  uint uVar2;
  int iVar3;

  local_1c = 0;
  iVar1 = recovered_100073a8(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_100073fc(param_1);
    }
    else {
      recovered_1000742c(param_1,param_3);
      for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
      param_1[1] = param_3;
      *(undefined1 *)(*param_1 + param_3) = 0;
    }
  }
  else {
    uVar2 = param_1[1] - local_1c;
    if (param_3 < (uint)(param_1[1] - local_1c)) {
      uVar2 = param_3;
    }
    recovered_10007494(&local_28,*param_1 + local_1c,uVar2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = data;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10004ad8(data);
  }
  return;
}

#undef local_20
#undef local_1c
#undef iStack_24
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5974U)
 */

int recovered_10007378(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + iVar1) == '\0') break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59a4U)
 */

undefined4 recovered_100073a8(int *param_1,int param_2,int *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 != 0) {
    param_4 = *param_1;
  }
  if (param_2 != 0 && param_4 != 0) {
    uVar1 = 0;
    while (uVar1 <= (uint)param_1[1]) {
      uVar1 = uVar1 + 1;
      if ((param_2 - param_4) + 1U == uVar1) {
        *param_3 = param_2 - param_4;
        return 1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59f8U)
 */

void recovered_100073fc(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;

  if (*param_1 == 0) {
    recovered_100074c8(0);
    param_1[2] = 0;
    *param_1 = extraout_r0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a28U)
 */

void recovered_1000742c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_100074c8(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_r0 + param_1[1]) = 0;
    recovered_10004ad8((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a90U)
 */

undefined4 * recovered_10007494(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int in_r3;

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_1000727c(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ac4U)
 */

void recovered_100074c8(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10004aa8(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ae0U)
 */

uint recovered_100074e4(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_10007544(param_2,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x24));
  uVar2 = recovered_10007544(param_3,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x28));
  uVar3 = recovered_10007544(param_4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x2c));
  return uVar2 | uVar1 | uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b40U)
 */

int recovered_10007544(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = ~(-1 << (param_2 & 0xff));
  if (0x1f < param_2) {
    uVar1 = 0xffffffff;
  }
  recovered_10001a04(uVar1 * param_1 + 0x7f,0xff);
  return extraout_r0 << (param_3 & 0xff);
}


#undef DAT_100075c8
#define DAT_100075c8 (*(int *)(((uintptr_t)pf_module_state + 0x5bc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b80U)
 */

undefined4 * recovered_10007584(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_100075c8;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_1000727c(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_100075c8

#undef DAT_100075f0
#define DAT_100075f0 (*(int *)(((uintptr_t)pf_module_state + 0x5becU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5bc8U)
 */

void recovered_100075cc(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0x1a) {
    **(undefined1 **)(DAT_100075f0 + uVar1 * 4) = 1;
    return;
  }
  return;
}

#undef DAT_100075f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5bf0U)
 */

uint recovered_100075f4(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;

  if (param_3 < 2) {
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = param_1 & ~((int)param_1 >> 0x1f);
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    lVar1 = (ulonglong)uVar2 * (ulonglong)(param_3 - 1);
    uVar3 = recovered_10002260((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
    return (uint)uVar3;
  }
  uVar2 = param_3 - 1U;
  if (param_1 <= param_3 - 1U) {
    uVar2 = param_1;
  }
  if ((int)param_1 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}


#undef DAT_1000768c
#define DAT_1000768c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c88U)))
#define aiStack_210 (*(int (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c54U)
 */

void recovered_10007658(int *param_1,char param_2,uint param_3)

{
  unsigned char frame[576] = {0};


  recovered_100077d8(aiStack_210 + 0x80,param_2,param_3);
  return;
}

#undef DAT_1000768c
#undef aiStack_210

#undef DAT_100076dc
#define DAT_100076dc (*(int *)(((uintptr_t)pf_module_state + 0x5cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c8cU)
 */

void recovered_10007690(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = param_2[1];
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  uVar1 = uVar1 - param_3;
  uVar3 = param_4;
  if (uVar1 < param_4) {
    uVar3 = uVar1;
  }
  if (param_4 == 0xffffffff) {
    uVar3 = uVar1;
  }
  iVar2 = DAT_100076dc;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  recovered_10007494(param_1,iVar2 + param_3,uVar3);
  return;
}

#undef DAT_100076dc

#undef DAT_10007720
#define DAT_10007720 (*(char * *)(((uintptr_t)pf_module_state + 0x5d1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5cdcU)
 */

bool recovered_100076e0(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar3 = param_1[1];
  pcVar4 = DAT_10007720;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  iVar2 = recovered_10007378((int)param_2);
  bVar1 = recovered_1000780c(pcVar4,iVar3,param_2,iVar2);
  return bVar1;
}

#undef DAT_10007720

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d20U)
 */

void recovered_10007724(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007260((undefined4 *)(*param_1 + param_1[1] * 0xc + -0xc));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d54U)
 */

void recovered_10007758(int *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    recovered_1000742c(param_1,uVar2);
  }
  recovered_100073fc(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_100077d4
#define DAT_100077d4 (*(int *)(((uintptr_t)pf_module_state + 0x5dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5db8U)
 */

void recovered_100077bc(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_100077d4;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_10007944(param_1,iVar1,param_2[1]);
  return;
}

#undef DAT_100077d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5dd4U)
 */

uint recovered_100077d8(int *param_1,char param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if ((uint)param_1[1] <= param_3) {
      return 0xffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e08U)
 */

bool recovered_1000780c(char *param_1,int param_2,char *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;

  bVar3 = false;
  if (param_2 == param_4) {
    do {
      bVar3 = param_2 == 0;
      if (param_2 == 0) {
        return true;
      }
      cVar1 = *param_1;
      param_2 = param_2 + -1;
      cVar2 = *param_3;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (cVar1 == cVar2);
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e40U)
 */

int recovered_10007844(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_100078ac(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10007584((undefined4 *)(*param_1 + iVar1 * 0xc),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ea8U)
 */

void recovered_100078ac(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_1000792c(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10007a28((undefined4 *)(extraout_r0 + iVar1),(undefined4 *)(*param_1 + iVar1));
      recovered_10007260((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0xc;
    }
    recovered_10004ad8((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f28U)
 */

void recovered_1000792c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004aa8(param_1 * 0xc);
  return;
}


#define local_20 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f40U)
 */

int * recovered_10007944(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  int iVar1;
  int in_r3;
  uint unaff_r5;
  uint uVar2;
  int iVar3;

  if (param_2 != 0) {
    unaff_r5 = param_3;
  }
  if (param_2 != 0 && param_3 != 0) {
    uVar2 = 0;
    local_20 = 0;
    iVar1 = recovered_100073a8(param_1,param_2,&local_20,in_r3);
    iVar3 = param_1[1];
    if (iVar1 == 0) {
      recovered_1000742c(param_1,iVar3 + unaff_r5);
      for (; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      if ((uint)(iVar3 - local_20) < unaff_r5) {
        unaff_r5 = iVar3 - local_20;
      }
      recovered_1000742c(param_1,unaff_r5 + iVar3);
      for (uVar2 = 0; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + iVar3 + uVar2) = *(undefined1 *)(*param_1 + local_20 + uVar2);
      }
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + unaff_r5;
    *(undefined1 *)(*param_1 + iVar1 + unaff_r5) = 0;
  }
  return param_1;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6024U)
 */

void recovered_10007a28(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6050U)
 */

int * recovered_10007a54(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007a74(param_1);
  recovered_10004ad8((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6070U)
 */

void recovered_10007a74(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10007260((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60b8U)
 */

undefined4 * recovered_10007abc(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_10007378(param_2);
  recovered_1000727c(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60f8U)
 */

void recovered_10007afc(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_10007b64(param_1,param_2);
    return;
  }
  recovered_10007bc0(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6160U)
 */

void recovered_10007b64(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    recovered_10007bc0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61bcU)
 */

void recovered_10007bc0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10007c20(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10004ad8((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x621cU)
 */

void recovered_10007c20(ulong param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004aa8(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x622cU)
 */

undefined4 * recovered_10007c30(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10004ad8((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6250U)
 */

int recovered_10007c54(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar1;
  }
  iVar6 = (int)param_4 - (int)param_3;
  if (iVar6 != 0) {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar2 + iVar6) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 << 1;
      } while (uVar5 < uVar2 + iVar6);
      recovered_10007bc0(param_1,uVar5);
      uVar2 = param_1[1];
    }
    while (uVar7 < uVar2) {
      puVar3 = (undefined1 *)(*param_1 + (uVar2 - 1));
      puVar3[iVar6] = *puVar3;
      uVar2 = uVar2 - 1;
    }
    uVar2 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar2) = *param_3;
      uVar2 = uVar2 + 1;
    }
    iVar1 = *param_1;
    param_1[1] = param_1[1] + iVar6;
  }
  iVar6 = iVar1 + uVar7;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  return iVar6;
}

