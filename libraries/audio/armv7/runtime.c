/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10000c20(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  recovered_10000c28(param_1,param_2,(uint *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10000c28(uint param_1,uint param_2,uint *param_3)

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
uint recovered_10000ca0(uint a,uint b){uint remainder=0;recovered_10000c28(a,b,&remainder);return remainder;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

int recovered_10000cc4(uint param_1,uint param_2)

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
  uVar1 = recovered_10000c28(uVar1,uVar2,(uint *)0x0);
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

int recovered_10000cfc(int param_1,int param_2)

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
  recovered_10000c28(uVar1,param_2,&local_10);
  if (param_1 < 0) {
    local_10 = -local_10;
  }
  return local_10;
}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_10000d40(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


#undef DAT_10000ec8
#define DAT_10000ec8 (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10000e48(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_10000ec8;
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

#undef DAT_10000ec8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_10000ed0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10000e48(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10000e48(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_10000f1c(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000e48(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_10000f2c(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10000ed0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

void recovered_10000f3c(uint param_1,uint param_2)

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

void recovered_10000f70(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 0) {
    recovered_10000f3c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10000f3c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_10000f98(void)

{
  unsigned char frame[64] = {0};

  uint in_r0;
  undefined4 extraout_r0 = 0;
  uint in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10000f3c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_10000fb4(void)

{
  unsigned char frame[64] = {0};

  int in_r0;
  undefined4 extraout_r0 = 0;
  int in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10000f70(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10000fe0
#define DAT_10000fe0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_10000fd0(void)

{
  unsigned char frame[64] = {0};

  *DAT_10000fe0 = 0;
  recovered_10000fe4();
  return;
}

#undef DAT_10000fe0

#undef DAT_100011c4
#define DAT_100011c4 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_100011c8
#define DAT_100011c8 (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_a4 (*(uint (*)[32])(frame + 16))
#define local_24 (*(int *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

void recovered_10000fe4(void)

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

  pcVar1 = DAT_100011c8;
  local_24 = 0;
  if (*DAT_100011c8 == '\0') {
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar5 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_100011c4[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar5 != uVar10; uVar5 = uVar5 + 1) {
      uVar8 = DAT_100011c4[uVar5 * 2 + 2];
      uVar4 = DAT_100011c4[uVar5 * 2 + 3];
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
      recovered_10002bb4(puVar3[-1],*puVar3,&local_24,in_r3);
      in_r3 = extraout_r3;
      puVar3 = puVar3 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar5 = 0x4000000;
      if (0x300000 < *DAT_100011c4) {
        uVar5 = *DAT_100011c4 & 0xfffffff0;
      }
      uVar10 = uVar5 - 0x300000;
      if (uVar5 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10002bb4(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_100011c4
#undef DAT_100011c8
#undef EXT_00000010
#undef local_a4
#undef local_24

#undef DAT_1000120c
#define DAT_1000120c (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_100011cc(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000fe4();
  iVar1 = 0;
  piVar2 = DAT_1000120c;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_1000120c

#undef DAT_1000125c
#define DAT_1000125c (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_10001210(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10000fe4();
  iVar1 = DAT_1000125c;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_1000125c

#undef DAT_10001294
#define DAT_10001294 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10001260(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000fe4();
  iVar1 = 0;
  piVar2 = DAT_10001294;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10001294

#undef DAT_100012d4
#define DAT_100012d4 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_10001298(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10000fe4();
  iVar1 = DAT_100012d4;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_100012d4

#undef DAT_10001378
#define DAT_10001378 (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_100012d8(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10000fe4();
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10001378;
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

#undef DAT_10001378

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_1000137c(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_100013d8(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10001430(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_1000147c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10001498(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_10001498(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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

undefined8 recovered_100015a0(void)

{
  unsigned char frame[584] = {0};

  uint in_r0;
  uint in_r1;
  uint in_r2;
  uint in_r3;

  recovered_10001498(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_100015d4(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10001498((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_1000164c(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_10001498((param_1 ^ uVar2) - uVar2,
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

void recovered_100016d0(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_100016d8(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100016e4(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10001728(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001768(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_100017b4(void *out,void *data,ulong size)

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

void * recovered_100017d0(void *out,void *data,ulong size)

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

void * recovered_10001824(void *out,int value,ulong size)

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

void recovered_1000183c(undefined1 *param_1,int param_2)

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

void recovered_10001854(undefined1 *param_1,int param_2)

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

int recovered_1000186c(void *left,void *right,ulong size)

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

bool recovered_10001894(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_100018a8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_100018bc(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_100018d4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_10001900(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_10001920(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_10001934(int param_1)

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

int recovered_10001944(int param_1)

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

ulong recovered_10001954(char *text)

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

int recovered_10001984(char *left,char *right)

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

int recovered_100019b0(char *left,char *right)

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

void recovered_100019b4(int param_1,int param_2)

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

void * recovered_100019d0(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001954(param_1);
    out = recovered_100016e4(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_100017b4(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_10001a18(char *param_1,char param_2)

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

int recovered_10001a44(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_10001a18(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_10001a88(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001a18(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_10001ac8(char *param_1,char *param_2)

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


#undef DAT_10001b18
#define DAT_10001b18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_10001b10(void)

{
  unsigned char frame[64] = {0};

  return DAT_10001b18;
}

#undef DAT_10001b18

#undef DAT_10001b24
#define DAT_10001b24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_10001b1c(void)

{
  unsigned char frame[64] = {0};

  return DAT_10001b24;
}

#undef DAT_10001b24

#undef DAT_10001b3c
#define DAT_10001b3c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_10001b28(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10001b3c;
  }
  return;
}

#undef DAT_10001b3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_10001b40(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_10001b80(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_10001c18(double left,double right)

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

double recovered_10001c50(double left,double right)

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

double recovered_10001ccc(double value)

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

double recovered_10001cfc(double value)

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

double recovered_10001d40(double value)

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


#undef DAT_10001e50
#define DAT_10001e50 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10001e58
#define DAT_10001e58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_10001d90(double value)

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

#undef DAT_10001e50
#undef DAT_10001e58

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_10001e60(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10000ed0(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10001ee0
#define DAT_10001ee0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_10001ee8
#define DAT_10001ee8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_10001e90(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10001ef0();
  return extraout_d0;
}

#undef DAT_10001ee0
#undef DAT_10001ee8

#undef DAT_10001f28
#define DAT_10001f28 (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10001f30
#define DAT_10001f30 (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10001f38
#define DAT_10001f38 (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_10001f40
#define DAT_10001f40 (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

void recovered_10001ef0(void)

{
  unsigned char frame[64] = {0};

  double in_d0;

  for (; DAT_10001f28 < in_d0; in_d0 = in_d0 + DAT_10001f40) {
  }
  for (; in_d0 < DAT_10001f30; in_d0 = in_d0 + DAT_10001f38) {
  }
  return;
}

#undef DAT_10001f28
#undef DAT_10001f30
#undef DAT_10001f38
#undef DAT_10001f40

#undef DAT_10001f90
#define DAT_10001f90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10001f48(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10001ef0();
  return extraout_d0;
}

#undef DAT_10001f90

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_10001f98(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_10001ff0
#define DAT_10001ff0 (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_10001fb8(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_10001ff0;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_10001ff0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10001ff4(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001b80(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_10002020(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001b40(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_1000204c(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_10001c50(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10002084(float value)

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

float recovered_100020bc(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10001cfc(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_100020e4(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_10001cfc(value);
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

float recovered_10002124(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100020e4(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_1000214c(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10001d40(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10002174(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10001d90(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_1000219c(void)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  recovered_10001e60(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_100021ac(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10001e90(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_100021d4(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10001f48(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_100021fc(float value)

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

int recovered_10002218(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_10002340((int)(char)*pbVar1);
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

uint recovered_10002340(int param_1)

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

int recovered_10002384(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_100023e0;
  }
  bVar1 = false;
LAB_100023e0:
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
    uVar3 = recovered_10002340((int)(char)*pbVar2);
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

double recovered_100024a4(char *text,char **end)

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
        recovered_10001b40(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_10002640(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100024a4(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10002a54
#define DAT_10002a54 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_1000265c(char *out,ulong capacity,char *format,void *arguments)

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
LAB_100026b8:
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
LAB_100026e8:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_100026ec;
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
LAB_10002770:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10002780_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10002780_caseD_64;
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
switchD_10002780_caseD_65:
      if (local_48 < 2) goto LAB_100026ec;
      *local_44 = 0x3f;
      goto LAB_100026e8;
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
      recovered_10002ae8((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_10002734;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10002780_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10002a94((int *)&local_44,&local_48,&local_4c,DAT_10002a54);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10002a94((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_10002734;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_10002a04;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_100029f0:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_100029f0;
        }
        goto switchD_10002780_caseD_65;
      }
      goto switchD_10002780_caseD_64;
    }
    goto LAB_10002a1c;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_1000272c;
switchD_10002780_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10002770;
switchD_10002780_caseD_64:
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
LAB_10002a04:
  uVar12 = 10;
  iVar3 = 0;
LAB_10002a1c:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_10002ae8((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_10002734;
switchD_10002780_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_100026ec:
  pdVar7 = arguments;
LAB_1000272c:
  local_4c = local_4c + 1;
LAB_10002734:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_100026b8;
}

#undef DAT_10002a54
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_10002a58(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_10002ae4
#define DAT_10002ae4 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10002a94(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_10002ae4;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002a58(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10002ae4

#undef DAT_10002b80
#define DAT_10002b80 (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10002b84
#define DAT_10002b84 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_10002ae8(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_10002b84;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar3 = DAT_10002b80;
  }
  do {
    iVar2 = iVar1;
    recovered_10000c20(param_4,param_5);
    bVar4 = param_5 <= param_4;
    local_40[-iVar2] = *(undefined1 *)(iVar3 + (param_4 - extraout_r0 * param_5));
    param_4 = extraout_r0;
    iVar1 = iVar2 + -1;
  } while (bVar4);
  for (; iVar2 != 1; iVar2 = iVar2 + 1) {
    recovered_10002a58(param_1,param_2,param_3,local_40[-iVar2]);
  }
  return;
}

#undef DAT_10002b80
#undef DAT_10002b84
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_10002b88(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_1000265c(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_10002c18
#define DAT_10002c18 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10002bb4(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_10002c18 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_10002c18

#undef DAT_10002c68
#define DAT_10002c68 (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
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

undefined4 recovered_10002c1c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10002c68) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10002c68
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_10002d18
#define DAT_10002d18 (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_10002d1c
#define DAT_10002d1c (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_10002c6c(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_10002d1c;
  piVar2 = DAT_10002d18;
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
LAB_10002cfc:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_10002d20(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10002cfc;
      }
      recovered_10002d20(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10002d18
#undef DAT_10002d1c

#undef DAT_10002da0
#define DAT_10002da0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10002da4
#define DAT_10002da4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_10002da8
#define DAT_10002da8 (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_10002d20(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_10002da4;
  size = *DAT_10002da4;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_100017b4(local_214,DAT_10002da8,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10003b64(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10002da0 != (code *)0x0)) {
      (*(code *)*DAT_10002da0)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10002da0
#undef DAT_10002da4
#undef DAT_10002da8
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_10002dac(void)

{
  unsigned char frame[64] = {0};

  recovered_10002d20(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_10002db4(void)

{
  unsigned char frame[64] = {0};

  recovered_10002d20(0);
  return;
}


#undef DAT_10002e04
#define DAT_10002e04 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10002e08
#define DAT_10002e08 (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_10002dbc(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10002e04;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10002e08;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_10002b88(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_10002c6c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10002e04
#undef DAT_10002e08
#undef acStack_14c

#undef DAT_10002e48
#define DAT_10002e48 (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10002e4c
#define DAT_10002e4c (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10002e50
#define DAT_10002e50 (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10002e54
#define DAT_10002e54 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10002e58
#define DAT_10002e58 (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10002e5c
#define DAT_10002e5c (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_10002e0c(void)

{
  unsigned char frame[64] = {0};

  recovered_10002e60(DAT_10002e48);
  recovered_10002e60(DAT_10002e4c);
  recovered_10002e60(DAT_10002e50);
  recovered_10002e60(DAT_10002e54);
  recovered_10002e60(DAT_10002e58);
  recovered_10002e60(DAT_10002e5c);
  return;
}

#undef DAT_10002e48
#undef DAT_10002e4c
#undef DAT_10002e50
#undef DAT_10002e54
#undef DAT_10002e58
#undef DAT_10002e5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_10002e60(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10001954(param_1);
  recovered_10002c6c(param_1,uVar1);
  return;
}


#undef DAT_10002ea4
#define DAT_10002ea4 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_10002ea8
#define DAT_10002ea8 (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10002e88(void)

{
  unsigned char frame[64] = {0};

  recovered_10002e60(DAT_10002ea4);
  recovered_10002e60(DAT_10002ea8);
  return;
}

#undef DAT_10002ea4
#undef DAT_10002ea8

#undef DAT_10002f2c
#define DAT_10002f2c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_10002eac(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10002db4();
    iVar1 = recovered_10003b64(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_10002f2c != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_10002f2c)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10002f2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_10002f30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_10002f38(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_10002f3c(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_100031ec
#define DAT_100031ec (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_100031f0
#define DAT_100031f0 (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_100031f4
#define DAT_100031f4 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_100031f8
#define DAT_100031f8 (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_100031fc
#define DAT_100031fc (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10002f44(char *param_1,int param_2)

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
    goto LAB_10003188;
  }
  iVar2 = recovered_10001984(param_1,DAT_100031f0);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10003124:
    puVar4 = recovered_100016e4(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10001824(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_10002b88((char *)(puVar4 + 1),0xf1,DAT_100031fc,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10001984(param_1,DAT_100031f4);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10003124;
    }
    iVar3 = recovered_10001984(param_1,DAT_100031f8);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10003124;
    }
    puVar4 = recovered_100016e4(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10001824(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10001a18(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10001a18(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10001a18(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10001a18(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10001a18(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10001a18(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_10001a18(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_10002b88((char *)(puVar4 + 1),0xf1,DAT_100031fc,param_1);
      recovered_10001824(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10003200(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_100031ec = 2;
LAB_100031c0:
          recovered_10001728(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_10001a18(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_1000324c((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_100031c0;
            recovered_100017b4((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10003188:
  *(undefined4 *)*DAT_100031ec = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_100031ec
#undef DAT_100031f0
#undef DAT_100031f4
#undef DAT_100031f8
#undef DAT_100031fc
#undef auStack_a8

#undef DAT_10003248
#define DAT_10003248 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_10003200(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10003b64(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10003248 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10003248)(param_1,param_2);
  return uVar2;
}

#undef DAT_10003248

#undef DAT_100032d0
#define DAT_100032d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_1000324c(int param_1,uint param_2)

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
      pvVar2 = recovered_10001768(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100032d0 = 0xc;
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

#undef DAT_100032d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_100032d4(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_10003300(param_3);
  }
  recovered_10002f44(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_10003300(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003698(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10001728((void *)param_1[0x3f]);
    }
    recovered_10001728(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10003344(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_100033e4(unaff_r6);
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


#undef DAT_100034cc
#define DAT_100034cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_100033e4(int *param_1)

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
        bVar1 = recovered_10002eac((int)text,0x1fe,DAT_100034cc,0);
        if (!bVar1) goto LAB_100034bc;
        uVar3 = recovered_10001954(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_100034bc:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_100034cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_100034d0(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_10002c6c(param_1,size);
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
        iVar3 = recovered_1000324c((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_10001824((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_100017b4((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_10003670
#define DAT_10003670 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_100035dc(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_100035f8;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_100035f0;
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
LAB_100035f0:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_100035f8:
  *(undefined4 *)*DAT_10003670 = 0x16;
  return 0xffffffff;
}

#undef DAT_10003670

#undef DAT_10003694
#define DAT_10003694 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10003674(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10003694 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10003694

#undef DAT_1000370c
#define DAT_1000370c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_10003698(uint *param_1)

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
      iVar1 = recovered_100038a8(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_1000370c = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_1000370c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_10003710(int param_1)

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

undefined1 recovered_10003720(int param_1)

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

void recovered_10003730(int param_1)

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

void recovered_1000374c(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_100037b4
#define DAT_100037b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_10003770(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_100037b8(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_100037b4 = uVar2;
  return 0xffffffff;
}

#undef DAT_100037b4

#undef DAT_100037f8
#define DAT_100037f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_100037b8(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10003b64(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_100037f8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100037f8)(param_1);
  return uVar2;
}

#undef DAT_100037f8

#undef DAT_100038a4
#define DAT_100038a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_100037fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10001824(&local_20,0,0xc);
    iVar1 = recovered_10003200(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_100038a8(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_100037b8(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_100038a4 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_100038a4 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_100038a4
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_100038f8
#define DAT_100038f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_100038a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10003b64(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_100038f8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100038f8)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_100038f8

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_100038fc(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_10001824(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10003200(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_100016e4(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_100017b4(out,unaff_r5,unaff_r6);
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

bool recovered_100039b4(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_100038a8(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_100039f4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_100039fc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_10003a00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_10003a08(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_10003a10(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_10003a18(int param_1,char param_2,int param_3)

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

int recovered_10003a40(char *left,char *right,ulong size)

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


#undef DAT_10003b18
#define DAT_10003b18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_10003b1c
#define DAT_10003b1c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_10003b20
#define DAT_10003b20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_10003b24
#define DAT_10003b24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_10003b28
#define DAT_10003b28 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_10003b2c
#define DAT_10003b2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_10003b30
#define DAT_10003b30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_10003b34
#define DAT_10003b34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_10003b38
#define DAT_10003b38 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10003a80(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_10003b38;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003a94_caseD_0;
  case 2:
    return DAT_10003b1c;
  case 5:
    return DAT_10003b20;
  case 9:
    return DAT_10003b24;
  case 0xc:
    return DAT_10003b28;
  case 0xd:
    return DAT_10003b2c;
  default:
    if (param_1 == 0x11) {
      return DAT_10003b30;
    }
    if (param_1 == 0x16) {
      return DAT_10003b18;
    }
switchD_10003a94_caseD_0:
    return DAT_10003b34;
  }
}

#undef DAT_10003b18
#undef DAT_10003b1c
#undef DAT_10003b20
#undef DAT_10003b24
#undef DAT_10003b28
#undef DAT_10003b2c
#undef DAT_10003b30
#undef DAT_10003b34
#undef DAT_10003b38

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_10003b3c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10003b44(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10003b60
#define DAT_10003b60 (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_10003b4c(void)

{
  unsigned char frame[64] = {0};

  *DAT_10003b60 = *DAT_10003b60 + 1;
  return;
}

#undef DAT_10003b60

#undef DAT_10003bb0
#define DAT_10003bb0 (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
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

undefined4 recovered_10003b64(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10003bb0) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10003bb0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_10003bb4(int param_1)

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

undefined4 recovered_10003bc4(undefined4 *param_1)

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

int recovered_10003bdc(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_10003c74
#define DAT_10003c74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_10003c78
#define DAT_10003c78 (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10003c7c
#define DAT_10003c7c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
#define local_38 (*(undefined4 *)(frame + 20))
#define local_24 (*(undefined4 *)(frame + 40))
#define uStack_3c (*(undefined4 *)(frame + 16))
#define local_20 (*(undefined4 *)(frame + 44))
#define local_1c (*(undefined1 * *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(undefined1 * *)(frame + 56))
#define auStack_10 (*(undefined1 (*)[8])(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fdcU)
 */

void recovered_10003bfc(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10003c7c;
  local_20 = DAT_10003c74;
  local_18 = DAT_10003c78 + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_100041c0(&uStack_3c);
  recovered_100016d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_10003c74
#undef DAT_10003c78
#undef DAT_10003c7c
#undef local_38
#undef local_24
#undef uStack_3c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3060U)
 */

undefined4 recovered_10003c80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_10003c88(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003c98(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003bfc();
}


#undef DAT_100082cc
#define DAT_100082cc (*(int *)(((uintptr_t)pf_module_state + 0x76acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_10003c98(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100082cc;
  DAT_100082cc = param_1;
  recovered_1000407c(param_1);
  return;
}

#undef DAT_100082cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_10003cc4(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100016e4(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100016d0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_10003cf0(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100016e4(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100016d0();
  }
  return pvVar1;
}


#undef DAT_10003da8
#define DAT_10003da8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10003dac
#define DAT_10003dac (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10003db0
#define DAT_10003db0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10003cf4(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10003db0;
  local_78 = DAT_10003da8;
  local_70 = DAT_10003dac + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(data);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003da8
#undef DAT_10003dac
#undef DAT_10003db0
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_10003e68
#define DAT_10003e68 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_10003e6c
#define DAT_10003e6c (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_10003e70
#define DAT_10003e70 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3194U)
 */

void recovered_10003db4(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10003e70;
  local_78 = DAT_10003e68;
  local_70 = DAT_10003e6c + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(data);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003e68
#undef DAT_10003e6c
#undef DAT_10003e70
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_10003f28
#define DAT_10003f28 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_10003f2c
#define DAT_10003f2c (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_10003f30
#define DAT_10003f30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_10003e74(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10003f30;
  local_78 = DAT_10003f28;
  local_70 = DAT_10003f2c + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(param_1);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003f28
#undef DAT_10003f2c
#undef DAT_10003f30
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70

#undef DAT_10003fe8
#define DAT_10003fe8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_10003fec
#define DAT_10003fec (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_10003ff0
#define DAT_10003ff0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_10003f34(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10003ff0;
  local_78 = DAT_10003fe8;
  local_70 = DAT_10003fec + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(param_1);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003fe8
#undef DAT_10003fec
#undef DAT_10003ff0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_a0
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_10003ff4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_10003ffc(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_1000400c(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_1000401c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_10004020(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_100016e4(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003bfc();
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

void recovered_1000406c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001728((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_1000407c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_100040dc
#define DAT_100040dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10004084(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_100040dc;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_100040dc = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_10001728(buffer);
  return;
}

#undef DAT_100040dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_100040e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10004108((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10004184
#define DAT_10004184 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10004108(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10004184;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003bfc();
    }
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_100046b0((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
                    /* WARNING: Subroutine does not return */
  recovered_10004244(param_1);
}

#undef DAT_10004184
#undef local_28
#undef local_24
#undef local_20

#undef LAB_100041bc
#define LAB_100041bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
#undef _LAB_100041bc
#define _LAB_100041bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004188(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*(uint *)(uintptr_t)_LAB_100041bc;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_10003bfc();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10004108(puVar1);
}

#undef LAB_100041bc
#undef _LAB_100041bc

#undef DAT_100041d4
#define DAT_100041d4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

void recovered_100041c0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_100041d4;
  *param_1 = *DAT_100041d4;
  *puVar1 = param_1;
  return;
}

#undef DAT_100041d4

#undef DAT_10004204
#define DAT_10004204 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_100041d8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10004204;
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

#undef DAT_10004204

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10004208(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10004108(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10004214(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003bfc();
}


#undef DAT_10004240
#define DAT_10004240 (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

void recovered_10004220(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*DAT_10004240 != (int *)0x0) {
    *DAT_10004240 = *(int *)*DAT_10004240;
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004244(param_1);
}

#undef DAT_10004240

#undef DAT_100042ec
#define DAT_100042ec (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10004244(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = DAT_100042ec;
  piVar4 = (int *)*DAT_100042ec;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003bfc();
    }
    if (piVar4 == (int *)param_1[3]) break;
    recovered_100046b0((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_10003bb4((int)piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

#undef DAT_100042ec
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_100042f0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10004220(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_100042fc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_10004304(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003bfc();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_10004310(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10004350(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_100043f4
#define DAT_100043f4 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_10004350(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_100043f4 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_100043f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_100043f8(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_100043fc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_10004404(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_10004418(int param_1)

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

bool recovered_10004454(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10004480(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_1000449c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_100044b8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_100044d4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_100044f0(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001ccc(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_10004548(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10004594;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10004594:
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

ulonglong recovered_100046ac(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10004594;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10004594:
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

#undef DAT_100048c8
#define DAT_100048c8 (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_100046b0(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_100048cc((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_100049f8(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_100049f8(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_100049f8(&local_24);
        uVar6 = recovered_100049f8(&local_24);
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
            uVar6 = recovered_10004a58((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_10004a58((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_100048c8 + uVar5 * 4) * uVar6;
                puVar9 = recovered_100048cc(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10004350(param_2,(int *)puVar9);
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

#undef DAT_100048c8
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_100048cc(uint param_1,int *param_2)

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
    recovered_10004a30(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_100049b4;
  case 1:
    puVar2 = (uint *)recovered_100049f8(param_2);
    break;
  case 2:
    recovered_10004a30(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_100049b4;
  case 4:
  case 0xc:
    recovered_10004a30(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_100049b4:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_10004900_caseD_5;
  case 9:
    puVar2 = (uint *)recovered_10004a58(param_2);
    break;
  case 10:
    recovered_10004a30(iVar3,2);
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
switchD_10004900_caseD_5:
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_100049f8(undefined4 *param_1)

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

void recovered_10004a30(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e38U)
 */

uint recovered_10004a58(undefined4 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

void recovered_10004aa8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e8cU)
 */

void recovered_10004aac(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e90U)
 */

void recovered_10004ab0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ea0U)
 */

void recovered_10004ac0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


#undef DAT_10004c58
#define DAT_10004c58 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4038U)))
#undef DAT_10004c5c
#define DAT_10004c5c (*(int *)(((uintptr_t)pf_module_state + 0x403cU)))
#undef DAT_10004c60
#define DAT_10004c60 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4040U)))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[6])(frame + 16))
#define local_aa (*(ushort *)(frame + 22))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_9c (*(int *)(frame + 36))
#define local_98 (*(short *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eb0U)
 */

undefined4 * recovered_10004ad0(int param_1)

{
  unsigned char frame[224] = {0};

  uint *puVar1;
  undefined4 *puVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  puVar2 = (undefined4 *)0x0;
  local_7c = *DAT_10004c60;
  local_78 = DAT_10004c58;
  local_98 = 0;
  local_70 = DAT_10004c5c + ((uintptr_t)pf_module_state+0x3f00U);
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = (void *)0x0;
  recovered_100041c0(&uStack_94);
  if (param_1 != 0) {
    local_90 = 1;
    local_aa = 2;
    puVar1 = recovered_10004c64(param_1,(int)&local_a8,&local_aa);
    puVar2 = (undefined4 *)0x0;
    if ((((uint)puVar1 & (uint)(local_98 == 2)) == 1) && (local_9c != 0)) {
      local_90 = 2;
      puVar2 = recovered_10003cc4(0x18);
      puVar2[5] = 0;
      *puVar2 = 0;
      puVar2[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar2[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar2[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      puVar2[4] = 0;
      recovered_10004d9c(puVar2,&local_a8);
      puVar2[5] = 0;
    }
  }
  local_a4 = 0;
  recovered_10003cf4(local_a8);
  recovered_100041d8(&uStack_94);
  return puVar2;
}

#undef DAT_10004c58
#undef DAT_10004c5c
#undef DAT_10004c60
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c
#undef auStack_b0
#undef local_aa
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c

#undef DAT_10004d90
#define DAT_10004d90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4170U)))
#undef DAT_10004d94
#define DAT_10004d94 (*(int *)(((uintptr_t)pf_module_state + 0x4174U)))
#undef DAT_10004d98
#define DAT_10004d98 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4178U)))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define iStack_ac (*(int *)(frame + 20))
#define puStack_a8 (*(ushort * *)(frame + 24))
#define local_a4 (*(uint * *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_9c (*(ushort * *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4044U)
 */

uint * recovered_10004c64(int param_1,int param_2,ushort *param_3)

{
  unsigned char frame[224] = {0};

  byte bVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10004d98;
  local_78 = DAT_10004d90;
  local_a4 = (uint *)0x0;
  local_98 = 0;
  local_70 = DAT_10004d94 + ((uintptr_t)pf_module_state+0x40a0U);
  local_9c = (ushort *)0x0;
  local_a0 = (void *)0x0;
  local_90 = 1;
  iStack_ac = param_2;
  puStack_a8 = param_3;
  recovered_100041c0(&uStack_94);
  bVar1 = recovered_10005d20(param_1,(int *)&local_a0);
  if (bVar1 != 0) {
    local_90 = 2;
    local_a4 = recovered_10005f00(local_a0,local_9c,iStack_ac,puStack_a8);
  }
  local_9c = (ushort *)0x0;
  recovered_10003cf4(local_a0);
  recovered_100041d8(&uStack_94);
  return local_a4;
}

#undef DAT_10004d90
#undef DAT_10004d94
#undef DAT_10004d98
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c
#undef auStack_b0
#undef iStack_ac
#undef puStack_a8
#undef local_a4
#undef local_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x417cU)
 */

undefined4 * recovered_10004d9c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_100058b0(param_1,param_2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}


#undef DAT_10005098
#define DAT_10005098 (*(double *)(((uintptr_t)pf_module_state + 0x4478U)))
#undef DAT_100050a0
#define DAT_100050a0 (*(char * *)(((uintptr_t)pf_module_state + 0x4480U)))
#undef DAT_100050a4
#define DAT_100050a4 (*(char * *)(((uintptr_t)pf_module_state + 0x4484U)))
#undef DAT_100050a8
#define DAT_100050a8 (*(char * *)(((uintptr_t)pf_module_state + 0x4488U)))
#undef DAT_100050ac
#define DAT_100050ac (*(char * *)(((uintptr_t)pf_module_state + 0x448cU)))
#undef DAT_100050b0
#define DAT_100050b0 (*(char * *)(((uintptr_t)pf_module_state + 0x4490U)))
#undef DAT_100050b4
#define DAT_100050b4 (*(char * *)(((uintptr_t)pf_module_state + 0x4494U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(void * *)(frame + 20))
#define local_68 (*(undefined4 *)(frame + 24))
#define local_64 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x41a8U)
 */

int * recovered_10004dc8(uint param_1,uint param_2,int param_3,int param_4)

{
  unsigned char frame[160] = {0};

  double dVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  int iVar5;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 extraout_s1 = 0;
  undefined4 uVar11;
  double dVar10;
  undefined4 extraout_s1_00 = 0;
  double dVar12;
  double dVar13;
  double dVar14;

  if ((int)(param_2 | param_1) < 0) {
    return (int *)0x0;
  }
  if (param_3 == 0) {
    local_64 = 0;
    local_68 = 0;
    local_6c = (void *)0x0;
  }
  else {
    recovered_10006e00((int *)&local_6c,param_3);
  }
  bVar2 = recovered_10006dbc((int *)&local_6c,DAT_100050a0);
  local_70 = 0;
  if (bVar2) {
LAB_10004e78:
    bVar2 = true;
  }
  else {
    bVar2 = recovered_10006dbc((int *)&local_6c,DAT_100050a4);
    local_70 = 1;
    if (bVar2) goto LAB_10004e78;
    bVar2 = recovered_10006dbc((int *)&local_6c,DAT_100050a8);
    local_70 = 2;
    if (bVar2) goto LAB_10004e78;
    bVar2 = false;
    local_70 = 1;
  }
  recovered_10003cf4(local_6c);
  piVar8 = (int *)0x0;
  if (!bVar2) {
    return (int *)0x0;
  }
  if (param_4 == 0) {
    local_64 = 0;
    local_68 = 0;
    local_6c = (void *)0x0;
  }
  else {
    recovered_10006e00((int *)&local_6c,param_4);
  }
  bVar2 = recovered_10006dbc((int *)&local_6c,DAT_100050ac);
  uVar6 = 0;
  if (!bVar2) {
    bVar2 = recovered_10006dbc((int *)&local_6c,DAT_100050b0);
    uVar6 = 1;
    if (!bVar2) {
      bVar3 = recovered_10006dbc((int *)&local_6c,DAT_100050b4);
      bVar2 = false;
      uVar6 = 2;
      if (bVar3) {
        bVar2 = true;
      }
      goto LAB_10004f20;
    }
  }
  bVar2 = true;
LAB_10004f20:
  recovered_10003cf4(local_6c);
  if (bVar2) {
    piVar8 = recovered_10003cc4(0x18);
    piVar8[5] = 0;
    *piVar8 = 0;
    piVar8[1] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    piVar8[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    piVar8[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    piVar8[4] = 0;
    piVar8[3] = 0xac44;
    *(undefined2 *)(piVar8 + 4) = 2;
    iVar4 = recovered_100050b8(param_2,0,0xac44);
    local_6c = (void *)((uint)local_6c & 0xffff0000);
    recovered_10005130(piVar8,iVar4 << 1,(undefined2 *)&local_6c);
    dVar1 = DAT_10005098;
    if (0 < (int)param_1) {
      iVar7 = 0;
      iVar9 = 0;
      dVar12 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      uVar11 = extraout_s1;
      while (iVar4 != iVar9) {
        dVar13 = (double)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
        dVar14 = (double)VectorUnsignedToFloat(piVar8[3],(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = recovered_10001ccc(pf_bits_double(CONCAT44(uVar11,piVar8[3])));
        dVar13 = (dVar12 * dVar13) / dVar14 - pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
        if (local_70 == 2) {
          dVar10 = dVar13 + dVar13 + -1.0;
        }
        else if (local_70 == 1) {
          recovered_10001e90(dVar10);
          dVar10 = pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00));
        }
        else {
          in_fpscr = in_fpscr & 0xfffffff;
          dVar10 = -1.0;
          if (dVar13 < 0.5) {
            dVar10 = 1.0;
          }
        }
        dVar10 = dVar10 * 0.75 * dVar1;
        iVar5 = recovered_1000513c(SUB84(dVar10,0),(int)(pf_double_bits(dVar10) >> 0x20));
        iVar9 = iVar9 + 1;
        if ((uVar6 & 1) == 0) {
          *(short *)(*piVar8 + iVar7) = (short)iVar5;
        }
        if (uVar6 - 1 < 2) {
          *(short *)(*piVar8 + iVar7 + 2) = (short)iVar5;
        }
        iVar7 = iVar7 + 4;
        uVar11 = extraout_s1_00;
      }
    }
    piVar8[5] = 0;
  }
  return piVar8;
}

#undef DAT_10005098
#undef DAT_100050a0
#undef DAT_100050a4
#undef DAT_100050a8
#undef DAT_100050ac
#undef DAT_100050b0
#undef DAT_100050b4
#undef local_70
#undef local_6c
#undef local_68
#undef local_64

#undef DAT_10005120
#define DAT_10005120 (*(double *)(((uintptr_t)pf_module_state + 0x4500U)))
#undef DAT_10005128
#define DAT_10005128 (*(double *)(((uintptr_t)pf_module_state + 0x4508U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4498U)
 */

undefined4 recovered_100050b8(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 extraout_r1 = 0;
  uint in_fpscr;
  double dVar2;

  uVar1 = 0;
  if (((int)(uint)(param_1 == 0) <= param_2) && (param_3 != 0)) {
    recovered_10000f3c(param_1,param_2);
    dVar2 = (double)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = (pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) * dVar2) / DAT_10005120;
    if (DAT_10005128 <= dVar2) {
      return 0x7fffffff;
    }
    recovered_10001e60(SUB84(dVar2,0),(int)(pf_double_bits(dVar2) >> 0x20));
    uVar1 = extraout_r0_00;
  }
  return uVar1;
}

#undef DAT_10005120
#undef DAT_10005128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4510U)
 */

void recovered_10005130(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007888(param_1,param_2,param_3);
  return;
}


#undef DAT_10005180
#define DAT_10005180 (*(double *)(((uintptr_t)pf_module_state + 0x4560U)))
#undef DAT_10005188
#define DAT_10005188 (*(double *)(((uintptr_t)pf_module_state + 0x4568U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x451cU)
 */

int recovered_1000513c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  short sVar1;
  short extraout_r0;

  sVar1 = -0x8000;
  if ((DAT_10005180 <= pf_bits_double(CONCAT44(param_2,param_1)) &&
       pf_bits_double(CONCAT44(param_2,param_1)) != DAT_10005180) &&
     (sVar1 = 0x7fff, pf_bits_double(CONCAT44(param_2,param_1)) < DAT_10005188)) {
    recovered_1000219c();
    sVar1 = extraout_r0;
  }
  return (int)sVar1;
}

#undef DAT_10005180
#undef DAT_10005188

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4570U)
 */

undefined4 recovered_10005190(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    param_2[3] = 0;
    *param_2 = 0;
    if ((param_1 != (undefined4 *)0x0) && (bVar2 = recovered_10005220((int)param_1), !bVar2)) {
      uVar3 = param_1[1];
      param_2[2] = 0;
      uVar5 = 1;
      uVar4 = param_1[3];
      *param_2 = *param_1;
      uVar1 = *(undefined2 *)(param_1 + 4);
      param_2[1] = uVar3;
      param_2[3] = uVar4;
      *(undefined2 *)(param_2 + 4) = uVar1;
    }
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4600U)
 */

bool recovered_10005220(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  bool bVar3;

  bVar1 = true;
  bVar3 = *(int *)(param_1 + 4) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (bVar3 && iVar2 != 0) {
    bVar1 = *(short *)(param_1 + 0x10) == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4628U)
 */

byte recovered_10005248(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == (int *)0x0 || param_2 == 0) {
    return 0;
  }
  bVar1 = recovered_10005268(param_2,param_1);
  return bVar1;
}


#undef DAT_10005414
#define DAT_10005414 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x47f4U)))
#undef DAT_10005418
#define DAT_10005418 (*(int *)(((uintptr_t)pf_module_state + 0x47f8U)))
#undef DAT_1000541c
#define DAT_1000541c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x47fcU)))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_c0 (*(char * *)(frame + 16))
#define local_b4 (*(int *)(frame + 28))
#define local_b0 (*(byte *)(frame + 32))
#define local_a4 (*(void * *)(frame + 44))
#define local_a0 (*(int *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define aiStack_bc (*(int (*)[2])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4648U)
 */

byte recovered_10005268(int param_1,int *param_2)

{
  unsigned char frame[240] = {0};

  int iVar1;
  byte bVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  local_7c = *DAT_1000541c;
  local_78 = DAT_10005414;
  local_70 = DAT_10005418 + ((uintptr_t)pf_module_state+0x4698U);
  recovered_100041c0(&uStack_94);
  if (param_1 == 0) {
    bVar2 = 0;
  }
  else {
    local_9c = 0;
    local_a0 = 0;
    local_a4 = (void *)0x0;
    local_90 = 1;
    local_c0 = (char *)param_1;
    iVar1 = recovered_100070e0(param_2,&local_a4);
    bVar2 = 0;
    if (iVar1 != 0) {
      local_90 = 2;
      local_98 = recovered_10007690(aiStack_bc,local_c0,4);
      local_98 = local_98 + 2;
      if (*local_98 == 0) {
        bVar2 = 0;
      }
      else {
        local_90 = 3;
        recovered_100077f8(local_98,(int)local_a4,local_a0,0);
        bVar2 = 0;
        if (local_b4 != 0) {
          bVar2 = local_b0;
        }
      }
      recovered_100066e4(local_98);
    }
    local_a0 = 0;
    recovered_10003cf4(local_a4);
  }
  recovered_100041d8(&uStack_94);
  return bVar2 & 1;
}

#undef DAT_10005414
#undef DAT_10005418
#undef DAT_1000541c
#undef uStack_94
#undef auStack_68
#undef local_c0
#undef local_b4
#undef local_b0
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef aiStack_bc

#define auStack_c0 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4800U)
 */

undefined4 recovered_10005420(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[240] = {0};

  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r0 = 0;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1 = 0;
  undefined2 *puVar6;
  undefined1 *puVar7;
  int *unaff_r6;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  undefined4 extraout_s1 = 0;
  undefined4 extraout_s1_00 = 0;
  double dVar12;

  puVar7 = auStack_c0 + 0x80;
  if (param_1 != (int *)0x0) {
    unaff_r6 = param_2;
  }
  uVar2 = 0;
  if ((param_1 != (int *)0x0 && param_2 != (int *)0x0) && (-1 < param_4)) {
    uVar5 = (uint)*(ushort *)(param_1 + 4);
    bVar10 = uVar5 == 2;
    if (bVar10) {
      uVar5 = (uint)*(ushort *)(unaff_r6 + 4);
    }
    if (bVar10 && uVar5 == 2) {
      iVar9 = param_1[3];
      if (iVar9 != 0) {
        uVar5 = unaff_r6[3];
      }
      if (iVar9 != 0 && uVar5 != 0) {
        uVar5 = param_1[1];
        uVar2 = 1;
        if (1 < uVar5) {
          puVar7 = (undefined1 *)unaff_r6[1];
        }
        if (1 < uVar5 && (undefined1 *)0x1 < puVar7) {
          uVar3 = recovered_100050b8(param_3,param_4,iVar9);
          if (uVar3 < uVar5 >> 1) {
            VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
            VectorUnsignedToFloat(unaff_r6[3],(byte)(in_fpscr >> 0x16) & 3);
            VectorUnsignedToFloat((uint)puVar7 >> 1,(byte)(in_fpscr >> 0x16) & 3);
            recovered_10001cfc(pf_bits_double(CONCAT44(extraout_s1,(uint)puVar7 >> 1)));
            uVar5 = (uVar5 >> 1) - uVar3;
            iVar9 = uVar3 << 2;
            uVar3 = 0;
            uVar11 = VectorFloatToUnsigned(CONCAT44(extraout_r1,extraout_r0),3);
            if (uVar11 < uVar5) {
              uVar5 = uVar11;
            }
            for (; uVar3 < uVar5; uVar3 = uVar3 + 1) {
              iVar8 = iVar9;
              for (uVar11 = 0; uVar11 != 2; uVar11 = uVar11 + 1) {
                sVar1 = *(short *)(*param_1 + iVar8);
                uVar2 = recovered_100055b4(unaff_r6,uVar11 & 0xffff);
                dVar12 = (double)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
                dVar12 = pf_bits_double(CONCAT44(extraout_s1_00,uVar2)) + dVar12;
                iVar4 = recovered_1000513c(SUB84(dVar12,0),(int)(pf_double_bits(dVar12) >> 0x20));
                puVar6 = (undefined2 *)(*param_1 + iVar8);
                iVar8 = iVar8 + 2;
                *puVar6 = (short)iVar4;
              }
              iVar9 = iVar9 + 4;
            }
            param_1[5] = 0;
          }
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

#undef auStack_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4994U)
 */

undefined4 recovered_100055b4(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 extraout_r1 = 0;
  uint uVar1;
  uint uVar2;
  uint unaff_r10;
  bool bVar3;
  uint in_fpscr;
  uint uVar4;
  double in_d0;
  undefined4 extraout_s1 = 0;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;

  uVar2 = (uint)*(ushort *)(param_1 + 4);
  if ((uVar2 != 0) && (uVar4 = in_fpscr & 0xfffffff, 0.0 <= in_d0)) {
    uVar1 = param_1[1];
    bVar3 = uVar1 == 0;
    if (!bVar3) {
      unaff_r10 = param_2;
    }
    if (((bVar3 || param_2 <= uVar2) && (!bVar3 && uVar2 != param_2)) &&
       (recovered_10000c20(uVar1,uVar2), uVar2 <= uVar1)) {
      dVar7 = (double)VectorUnsignedToFloat(extraout_r0,(byte)(uVar4 >> 0x16) & 3);
      uVar2 = uVar4 & 0xfffffff | (uint)(dVar7 == in_d0) << 0x1e;
      uVar4 = uVar2 | (uint)(in_d0 <= dVar7) << 0x1d;
      if ((bool)((byte)(uVar4 >> 0x1d) & 1) && !SUB41(uVar2 >> 0x1e,0)) {
        recovered_10001ccc(pf_bits_double(CONCAT44(extraout_s1,extraout_r0)));
        iVar6 = VectorFloatToUnsigned(CONCAT44(extraout_r1,extraout_r0_00),3);
        dVar7 = (double)VectorUnsignedToFloat(iVar6,(byte)(uVar4 >> 0x16) & 3);
        uVar2 = iVar6 + 1U;
        if (extraout_r0 - 1U < iVar6 + 1U) {
          uVar2 = extraout_r0 - 1U;
        }
        dVar5 = (double)VectorSignedToFloat((int)*(short *)(*param_1 +
                                                            (uint)*(ushort *)(param_1 + 4) * iVar6 *
                                                            2 + unaff_r10 * 2),
                                            (byte)(uVar4 >> 0x16) & 3);
        dVar8 = (double)VectorSignedToFloat((int)*(short *)(*param_1 +
                                                            uVar2 * *(ushort *)(param_1 + 4) * 2 +
                                                           unaff_r10 * 2),(byte)(uVar4 >> 0x16) & 3)
        ;
        return SUB84(dVar5 + (dVar8 - dVar5) * (in_d0 - dVar7),0);
      }
    }
  }
  return 0;
}


#undef DAT_1000588c
#define DAT_1000588c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c6cU)))
#undef DAT_10005890
#define DAT_10005890 (*(int *)(((uintptr_t)pf_module_state + 0x4c70U)))
#undef DAT_10005894
#define DAT_10005894 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4c74U)))
#define local_a8 (*(int * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define auStack_b0 (*(undefined1 (*)[8])(frame + 16))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a84U)
 */

undefined4 recovered_100056a4(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[224] = {0};

  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r0 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10005894;
  local_78 = DAT_1000588c;
  local_70 = DAT_10005890 + ((uintptr_t)pf_module_state+0x4adcU);
  recovered_100041c0(&uStack_94);
  if (((((int)(param_5 - (param_3 + (param_4 < param_2))) < 0 ==
         (SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2)))) &&
       (param_1 != (int *)0x0)) && (-1 < (int)(param_5 | param_3))) &&
     (uVar1 = *(ushort *)(param_1 + 4), uVar1 != 0)) {
    local_a4 = 0;
    if (param_1[3] != 0) {
      local_90 = 0xffffffff;
      local_a8 = (int *)param_1[1];
      uVar4 = recovered_100050b8(param_2,param_3,param_1[3]);
      local_90 = 0xffffffff;
      uVar5 = recovered_100050b8(param_4,param_5,param_1[3]);
      local_a4 = 1;
      local_90 = 1;
      local_98 = 0;
      local_9c = 0;
      local_a0 = (void *)0x0;
      uVar2 = *(ushort *)(param_1 + 4);
      recovered_10000c20((uint)local_a8,(uint)uVar1);
      if (extraout_r0 < uVar4) {
        uVar4 = extraout_r0;
      }
      if (extraout_r0 < uVar5) {
        uVar5 = extraout_r0;
      }
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      local_a8 = param_1;
      recovered_10005898((int *)&local_a0,(undefined2 *)(*param_1 + uVar4 * uVar2 * 2),
                         (undefined2 *)(*param_1 + uVar5 * uVar2 * 2));
      piVar3 = local_a8;
      recovered_100058b0(local_a8,&local_a0);
      piVar3[5] = 0;
      local_9c = 0;
      recovered_10003cf4(local_a0);
    }
  }
  else {
    local_a4 = 0;
  }
  recovered_100041d8(&uStack_94);
  return local_a4;
}

#undef DAT_1000588c
#undef DAT_10005890
#undef DAT_10005894
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef auStack_b0
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c78U)
 */

void recovered_10005898(int *param_1,undefined2 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100078f8(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c90U)
 */

undefined4 * recovered_100058b0(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003cf4((void *)*param_1);
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


#define local_30 (*(void * *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ce4U)
 */

undefined4 recovered_10005904(int param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[96] = {0};

  bool bVar1;
  int extraout_r0 = 0;
  uint extraout_r1 = 0;
  uint uVar2;
  undefined4 uVar3;
  double dVar4;

  uVar3 = 0;
  if (param_1 != 0) {
    dVar4 = pf_bits_double(CONCAT44(param_3,param_2));
    bVar1 = recovered_100044d4(param_2,param_3);
    if ((0.0 < dVar4) && (bVar1)) {
      uVar3 = 1;
      uVar2 = extraout_r1;
      if (dVar4 != 1.0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x10);
      }
      if ((dVar4 != 1.0 && uVar2 != 0) && (uVar2 <= *(uint *)(param_1 + 4))) {
        recovered_10000c20(*(uint *)(param_1 + 4),uVar2);
        recovered_100059c0((int *)&local_30,param_1,extraout_r0);
        recovered_10004d9c((undefined4 *)param_1,&local_30);
        local_2c = 0;
        recovered_10003cf4(local_30);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  return uVar3;
}

#undef local_30
#undef local_2c

#undef DAT_10005bdc
#define DAT_10005bdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_10005be0
#define DAT_10005be0 (*(int *)(((uintptr_t)pf_module_state + 0x4fc0U)))
#undef DAT_10005be4
#define DAT_10005be4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4fc4U)))
#define local_b4 (*(int *)(frame + 28))
#define local_b0 (*(int *)(frame + 32))
#define local_ac (*(int * *)(frame + 36))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(uint *)(frame + 44))
#define local_a0 (*(int *)(frame + 48))
#define local_9a (*(undefined2 *)(frame + 54))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4da0U)
 */

void recovered_100059c0(int *param_1,int param_2,int param_3)

{
  unsigned char frame[240] = {0};

  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  undefined4 uVar6;
  double in_d0;
  undefined4 extraout_s1 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = *(int *)(param_2 + 0xc);
  param_1[2] = 0;
  uVar1 = *(ushort *)(param_2 + 0x10);
  param_1[3] = iVar4;
  *(ushort *)(param_1 + 4) = uVar1;
  local_7c = *DAT_10005be4;
  local_78 = DAT_10005bdc;
  local_9a = 0;
  local_70 = DAT_10005be0 + ((uintptr_t)pf_module_state+0x4e34U);
  local_90 = 1;
  local_ac = (int *)param_2;
  local_98 = param_1;
  recovered_100041c0(&uStack_94);
  local_b4 = param_3;
  recovered_10005130(param_1,(uint)uVar1 * param_3,&local_9a);
  uVar2 = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e;
  uVar5 = uVar2 | (uint)(0.0 <= in_d0) << 0x1d;
  if (((bool)((byte)(uVar5 >> 0x1d) & 1) && !SUB41(uVar2 >> 0x1e,0)) && ((short)local_ac[4] != 0)) {
    iVar4 = 0;
    if (local_ac[3] != 0) {
      iVar4 = local_ac[1];
    }
    if (local_ac[3] != 0 && iVar4 != 0) {
      local_a8 = 0;
      iVar4 = 0;
      while (iVar4 != local_b4) {
        iVar3 = 0;
        uVar2 = 0;
        VectorUnsignedToFloat(iVar4,(byte)(uVar5 >> 0x16) & 3);
        local_b0 = iVar4;
        while (uVar2 < *(ushort *)(local_98 + 4)) {
          local_90 = 2;
          local_a4 = uVar2;
          local_a0 = iVar3;
          uVar6 = recovered_100055b4(local_ac,uVar2 & 0xffff);
          local_90 = 3;
          iVar4 = recovered_1000513c(uVar6,extraout_s1);
          iVar3 = local_a0 + 2;
          *(short *)(local_a8 * (uint)*(ushort *)(local_98 + 4) + *local_98 + local_a0) =
               (short)iVar4;
          uVar2 = local_a4 + 1;
        }
        local_a8 = local_a8 + 2;
        iVar4 = local_b0 + 1;
      }
    }
  }
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10005bdc
#undef DAT_10005be0
#undef DAT_10005be4
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9a
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_c0
#undef uStack_94
#undef auStack_68

#define local_34 (*(void * *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fc8U)
 */

undefined4 recovered_10005be8(int param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[100] = {0};

  bool bVar1;
  undefined4 extraout_r0 = 0;
  int extraout_r0_00 = 0;
  uint extraout_r1 = 0;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  double dVar5;
  double dVar6;

  uVar4 = 0;
  if (param_1 != 0) {
    dVar5 = pf_bits_double(CONCAT44(param_3,param_2));
    bVar1 = recovered_100044d4(param_2,param_3);
    in_fpscr = in_fpscr & 0xfffffff;
    if ((0.0 <= dVar5) && (bVar1)) {
      uVar4 = 1;
      uVar2 = extraout_r1;
      if (dVar5 != 1.0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x10);
      }
      if ((dVar5 != 1.0 && uVar2 != 0) && (uVar2 <= *(uint *)(param_1 + 4))) {
        recovered_10000c20(*(uint *)(param_1 + 4),uVar2);
        iVar3 = 0;
        dVar6 = (double)VectorUnsignedToFloat(extraout_r0,(byte)(in_fpscr >> 0x16) & 3);
        dVar6 = dVar6 / dVar5;
        if (0.0 < dVar6) {
          recovered_10001e60(SUB84(dVar6,0),(int)(pf_double_bits(dVar6) >> 0x20));
          iVar3 = extraout_r0_00;
        }
        recovered_100059c0((int *)&local_34,param_1,iVar3);
        recovered_10004d9c((undefined4 *)param_1,&local_34);
        local_30 = 0;
        recovered_10003cf4(local_34);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  return uVar4;
}

#undef local_34
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50b0U)
 */

undefined4 recovered_10005cd0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50b8U)
 */

undefined8 recovered_10005cd8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50c4U)
 */

undefined8 recovered_10005ce4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50d0U)
 */

void recovered_10005cf0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *data;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  param_1[5] = 0;
  data = recovered_10007864(param_1);
  recovered_10003cf4(data);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50f4U)
 */

void recovered_10005d14(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_10003da8
#define DAT_10003da8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10003dac
#define DAT_10003dac (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10003db0
#define DAT_10003db0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50f8U)
 */

void recovered_10005d18(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_10003db0;
  uStack_78 = DAT_10003da8;
  iStack_70 = DAT_10003dac + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(data);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003da8
#undef DAT_10003dac
#undef DAT_10003db0
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef uStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

#undef DAT_10003da8
#define DAT_10003da8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10003dac
#define DAT_10003dac (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10003db0
#define DAT_10003db0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50fcU)
 */

void recovered_10005d1c(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_10003db0;
  uStack_78 = DAT_10003da8;
  iStack_70 = DAT_10003dac + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100041c0(&uStack_94);
  recovered_10001728(data);
  recovered_100041d8(&uStack_94);
  return;
}

#undef DAT_10003da8
#undef DAT_10003dac
#undef DAT_10003db0
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef uStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

#undef DAT_10005ef4
#define DAT_10005ef4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52d4U)))
#undef DAT_10005ef8
#define DAT_10005ef8 (*(int *)(((uintptr_t)pf_module_state + 0x52d8U)))
#undef DAT_10005efc
#define DAT_10005efc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x52dcU)))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_bc (*(int *)(frame + 20))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(int * *)(frame + 28))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(byte *)(frame + 44))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[4])(frame + 16))
#define aiStack_b0 (*(int (*)[2])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5100U)
 */

byte recovered_10005d20(int param_1,int *param_2)

{
  unsigned char frame[240] = {0};

  int iVar1;
  byte bVar2;
  ulonglong uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10005efc;
  local_78 = DAT_10005ef4;
  local_70 = DAT_10005ef8 + ((uintptr_t)pf_module_state+0x5150U);
  recovered_100041c0(&uStack_94);
  bVar2 = 0;
  if (param_1 == 0 || param_2 == (int *)0x0) goto LAB_10005e78;
  local_90 = 0xffffffff;
  local_98 = recovered_1000659c(aiStack_b0,(char *)param_1,4);
  local_98 = local_98 + 2;
  if (*local_98 != 0) {
    local_90 = 1;
    local_b4 = param_2;
    recovered_100068f4(local_98,0,0,2);
    local_90 = 2;
    uVar3 = recovered_10006940(local_98);
    iVar1 = (int)(uVar3 >> 0x20);
    if ((int)(uint)((uint)uVar3 == 0) <= iVar1) {
      local_90 = 3;
      local_bc = iVar1;
      local_b8 = (uint)uVar3;
      recovered_100068f4(local_98,0,0,0);
      local_90 = 4;
      recovered_10006524(local_b4,local_b8);
      local_90 = 5;
      recovered_100069f8(local_98,*local_b4,local_b8,local_bc);
      if (local_a8 != 0) {
        bVar2 = local_a4;
        goto LAB_10005e70;
      }
    }
    bVar2 = 0;
  }
LAB_10005e70:
  recovered_100066e4(local_98);
LAB_10005e78:
  recovered_100041d8(&uStack_94);
  return bVar2 & 1;
}

#undef DAT_10005ef4
#undef DAT_10005ef8
#undef DAT_10005efc
#undef uStack_94
#undef auStack_68
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_a8
#undef local_a4
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_c0
#undef aiStack_b0

#undef DAT_10006508
#define DAT_10006508 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x58e8U)))
#undef DAT_1000650c
#define DAT_1000650c (*(int *)(((uintptr_t)pf_module_state + 0x58ecU)))
#undef DAT_10006510
#define DAT_10006510 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x58f0U)))
#undef DAT_10006514
#define DAT_10006514 (*(void * *)(((uintptr_t)pf_module_state + 0x58f4U)))
#undef DAT_10006518
#define DAT_10006518 (*(void * *)(((uintptr_t)pf_module_state + 0x58f8U)))
#undef DAT_1000651c
#define DAT_1000651c (*(void * *)(((uintptr_t)pf_module_state + 0x58fcU)))
#undef DAT_10006520
#define DAT_10006520 (*(void * *)(((uintptr_t)pf_module_state + 0x5900U)))
#undef EXT_0000000c
#define EXT_0000000c (*(uint8_t *)(0xcU))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define auStack_100 (*(undefined1 (*)[8])(frame + 16))
#define local_f8 (*(uint *)(frame + 24))
#define local_f4 (*(undefined4 *)(frame + 28))
#define local_f0 (*(undefined4 *)(frame + 32))
#define local_ec (*(int *)(frame + 36))
#define local_e8 (*(uint *)(frame + 40))
#define local_e4 (*(uint * *)(frame + 44))
#define local_e0 (*(uint * *)(frame + 48))
#define local_dc (*(uint *)(frame + 52))
#define local_d8 (*(uint * *)(frame + 56))
#define local_d4 (*(ushort * *)(frame + 60))
#define local_d0 (*(ushort * *)(frame + 64))
#define local_cc (*(ushort * *)(frame + 68))
#define local_c8 (*(uint * *)(frame + 72))
#define local_c4 (*(uint *)(frame + 76))
#define local_c0 (*(undefined4 * *)(frame + 80))
#define local_bc (*(uint * *)(frame + 84))
#define local_b8 (*(ushort * *)(frame + 88))
#define local_b4 (*(uint *)(frame + 92))
#define local_b0 (*(ushort * *)(frame + 96))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define local_ac (*(void * *)(frame + 100))
#define local_a8 (*(undefined4 *)(frame + 104))
#define local_a4 (*(undefined4 *)(frame + 108))
#define local_a0 (*(uint * *)(frame + 112))
#define local_9c (*(undefined2 *)(frame + 116))
#define local_96 (*(ushort *)(frame + 122))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(undefined4 *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52e0U)
 */

uint * recovered_10005f00(void *param_1,ushort *param_2,int param_3,ushort *param_4)

{
  unsigned char frame[304] = {0};

  ushort uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 *extraout_r0 = 0;
  int iVar6;
  undefined1 *puVar7;
  uint extraout_r0_00 = 0;
  ushort *puVar8;
  uint extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  uint in_fpscr;
  double dVar13;
  double dVar14;
  double dVar15;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = *DAT_10006510;
  local_78 = DAT_10006508;
  local_70 = DAT_1000650c + ((uintptr_t)pf_module_state+0x5338U);
  local_c0 = (undefined4 *)param_3;
  recovered_100041c0(&uStack_94);
  puVar9 = (uint *)0x0;
  if (&PrefetchAbort <= param_2) {
    puVar2 = extraout_r0;
    if (param_1 != (void *)0x0) {
      puVar2 = local_c0;
    }
    if (!(param_1 == (void *)0x0 || puVar2 == (undefined4 *)0x0)) {
      local_90 = 0xffffffff;
      iVar6 = recovered_1000186c(param_1,DAT_10006514,4);
      if (iVar6 == 0) {
        local_90 = 0xffffffff;
        iVar6 = recovered_1000186c((void *)((int)param_1 + 8),DAT_10006518,4);
        if (iVar6 == 0) {
          local_b4 = 0;
          puVar9 = (uint *)0x0;
          local_96 = 0;
          local_b8 = (ushort *)0x0;
          local_cc = (ushort *)0x0;
          local_c8 = (uint *)0x0;
          local_c4 = 0;
          puVar7 = (undefined1 *)0xc;
          local_d0 = param_4;
          local_b0 = param_2;
          while (puVar10 = (ushort *)(puVar7 + 8), puVar10 <= local_b0) {
            puVar7 = (undefined1 *)((int)param_1 + (int)puVar7);
            puVar12 = *(ushort **)(puVar7 + 4);
            local_bc = (uint *)0x0;
            if (local_b0 < (ushort *)((int)puVar12 + (int)puVar10)) goto LAB_10006174;
            local_90 = 0xffffffff;
            iVar6 = recovered_1000186c(puVar7,DAT_1000651c,4);
            if (iVar6 == 0) {
              if (puVar12 < &DataAbort) goto LAB_10006174;
              puVar8 = (ushort *)((int)param_1 + (int)puVar10);
              local_96 = *puVar8;
              local_b4 = (uint)*(byte *)((int)puVar8 + 3);
              local_c8 = *(uint **)(puVar8 + 2);
              uVar4 = puVar8[1];
              uVar1 = puVar8[7];
              local_d8 = puVar9;
              iVar6 = recovered_10006a68(&local_96,(int)puVar8,(uint)puVar12);
              if (iVar6 == 0) goto LAB_10006174;
              local_c4 = (uint)(byte)uVar4;
              bVar5 = recovered_10006ac0((uint)local_96,(int)(uint)uVar1);
              if (!bVar5) goto LAB_10006174;
              local_c4 = local_c4 | local_b4 << 8;
              local_b4 = 1;
              puVar9 = local_d8;
              local_cc = (ushort *)(uint)uVar1;
            }
            else {
              local_90 = 0xffffffff;
              iVar6 = recovered_1000186c(puVar7,DAT_10006520,4);
              if (iVar6 == 0 && puVar9 == (uint *)0x0) {
                puVar9 = (uint *)((int)param_1 + (int)puVar10);
                local_b8 = puVar12;
              }
            }
            puVar7 = (undefined1 *)((int)puVar12 + (int)puVar10 + ((uint)puVar12 & 1));
          }
          if ((local_b4 & 1) == 0) {
            local_bc = (uint *)0x0;
          }
          else {
            puVar10 = local_b0;
            if (puVar9 != (uint *)0x0) {
              puVar10 = local_b8;
            }
            local_bc = (uint *)0x0;
            if (puVar9 != (uint *)0x0 && puVar10 != (ushort *)0x0) {
              bVar5 = (local_c4 & 0xffff) != 0;
              puVar3 = (uint *)0xffff;
              if (bVar5) {
                puVar3 = local_c8;
              }
              if (bVar5 && puVar3 != (uint *)0x0) {
                puVar12 = (ushort *)((uint)local_cc & 0xffff);
                if ((ushort *)0x7 < puVar12) {
                  local_b4 = (uint)puVar12 >> 3;
                  local_d4 = (ushort *)(local_c4 & 0xffff);
                  puVar8 = (ushort *)((int)local_d4 * local_b4);
                  if (puVar8 != (ushort *)0x0) {
                    if (puVar8 <= puVar10) {
                      uVar11 = (uint)*local_d0;
                      if (*local_d0 == 0) {
                        uVar11 = local_c4;
                      }
                      puVar10 = (ushort *)(uVar11 & 0xffff);
                      local_d8 = puVar9;
                      local_b0 = puVar12;
                      if (puVar10 != (ushort *)0x0) {
                        local_9c = (undefined2)uVar11;
                        local_a0 = local_c8;
                        local_e0 = (uint *)0x0;
                        local_a4 = 0;
                        local_a8 = 0;
                        local_ac = (void *)0x0;
                        local_90 = 1;
                        local_cc = puVar8;
                        recovered_10000c20((uint)local_b8,(uint)puVar8);
                        local_e8 = extraout_r0_00;
                        local_d0 = puVar10;
                        recovered_10006afc((int *)&local_ac,extraout_r0_00 * (int)puVar10);
                        uVar11 = 0;
                        local_f8 = 0;
                        if ((ushort *)0x1 < local_d4) {
                          local_f8 = local_b4;
                        }
                        local_e4 = local_d8;
                        dVar13 = (double)VectorUnsignedToFloat
                                                   (local_d4,(byte)(in_fpscr >> 0x16) & 3);
                        local_ec = (int)local_d0 << 1;
                        puVar10 = local_cc;
                        puVar12 = local_d0;
                        while (uVar11 < local_e8) {
                          local_c8 = (uint *)(uVar11 * (int)puVar10 + (int)local_d8);
                          local_dc = uVar11;
                          if (puVar12 == (ushort *)0x2) {
                            local_90 = 4;
                            dVar14 = recovered_10006b60(local_c8,(uint)local_96,(int)local_b0,
                                                        local_e8);
                            local_f4 = (undefined4)(pf_double_bits(dVar14) >> 0x20);
                            local_f0 = SUB84(dVar14,0);
                            local_90 = 5;
                            dVar14 = recovered_10006b60((uint *)((int)local_c8 + local_f8),
                                                        (uint)local_96,(int)local_b0,extraout_r3_00)
                            ;
                            local_bc = (uint *)(pf_double_bits(dVar14) >> 0x20);
                            local_b8 = SUB84(dVar14,0);
                            local_90 = 6;
                            iVar6 = recovered_10006cc0(local_f0,local_f4);
                            *(short *)((int)local_ac + local_dc * 4) = (short)iVar6;
                            local_90 = 7;
                            iVar6 = recovered_10006cc0(local_b8,local_bc);
                            *(short *)((int)local_ac + local_dc * 4 + 2) = (short)iVar6;
LAB_10006424:
                            puVar10 = local_cc;
                            puVar12 = local_d0;
                          }
                          else {
                            if (puVar12 == (ushort *)0x1) {
                              dVar14 = 0.0;
                              puVar10 = local_d4;
                              puVar9 = local_e4;
                              uVar11 = local_e8;
                              while (puVar10 != (ushort *)0x0) {
                                local_90 = 3;
                                local_bc = puVar9;
                                local_b8 = puVar10;
                                dVar15 = recovered_10006b60(puVar9,(uint)local_96,(int)local_b0,
                                                            uVar11);
                                dVar14 = dVar14 + (double)((pf_double_bits(dVar15) & 0xffffffff00000000)
                                                          + (pf_double_bits(dVar15) & 0xffffffff));
                                puVar9 = (uint *)((int)local_bc + local_b4);
                                uVar11 = extraout_r3;
                                puVar10 = (ushort *)((int)local_b8 + -1);
                              }
                              local_90 = 2;
                              iVar6 = recovered_10006cc0(SUB84(dVar14 / dVar13,0),
                                                         (int)((ulonglong)(dVar14 / dVar13) >> 0x20)
                                                        );
                              *(short *)((int)local_ac + local_dc * 2) = (short)iVar6;
                              goto LAB_10006424;
                            }
                            puVar8 = (ushort *)0x0;
                            puVar9 = local_e0;
                            while (puVar12 != puVar8) {
                              local_90 = 8;
                              puVar10 = puVar8;
                              if (local_d4 <= puVar8) {
                                puVar10 = (ushort *)(local_c4 - 1);
                              }
                              local_bc = puVar9;
                              local_b8 = puVar8;
                              dVar14 = recovered_10006b60((uint *)(((uint)puVar10 & 0xffff) *
                                                                   local_b4 + (int)local_c8),
                                                          (uint)local_96,(int)local_b0,puVar8);
                              local_90 = 9;
                              iVar6 = recovered_10006cc0(SUB84(dVar14,0),
                                                         (int)(pf_double_bits(dVar14) >> 0x20));
                              puVar9 = (uint *)((int)local_bc + 2);
                              puVar8 = (ushort *)((int)local_b8 + 1);
                              *(short *)((int)local_ac + (int)local_bc) = (short)iVar6;
                              puVar10 = local_cc;
                              puVar12 = local_d0;
                            }
                          }
                          local_e0 = (uint *)((int)local_e0 + local_ec);
                          local_e4 = (uint *)((int)local_e4 + (int)puVar10);
                          uVar11 = local_dc + 1;
                        }
                        recovered_10004d9c(local_c0,&local_ac);
                        local_a8 = 0;
                        recovered_10003cf4(local_ac);
                        local_bc = (uint *)0x1;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_10006174:
          puVar9 = local_bc;
        }
      }
    }
  }
  recovered_100041d8(&uStack_94);
  return puVar9;
}

#undef DAT_10006508
#undef DAT_1000650c
#undef DAT_10006510
#undef DAT_10006514
#undef DAT_10006518
#undef DAT_1000651c
#undef DAT_10006520
#undef EXT_0000000c
#undef EXT_00000010
#undef auStack_100
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef uStack_94
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_96
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5904U)
 */

void recovered_10006524(int *param_1,uint param_2)

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
    recovered_10006988(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x5960U)
 */

int recovered_10006580(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100066e4((int *)(param_1 + 8));
  return param_1;
}


#undef DAT_100066b0
#define DAT_100066b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5a90U)))
#undef DAT_100066b4
#define DAT_100066b4 (*(int *)(((uintptr_t)pf_module_state + 0x5a94U)))
#undef DAT_100066b8
#define DAT_100066b8 (*(int * *)(((uintptr_t)pf_module_state + 0x5a98U)))
#undef DAT_100066bc
#define DAT_100066bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5a9cU)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x597cU)
 */

int * recovered_1000659c(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_98 = param_1 + 2;
  param_1[5] = 0;
  param_1[4] = 0;
  *local_98 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = *DAT_100066b8 + 8;
  local_7c = *DAT_100066bc;
  local_78 = DAT_100066b0;
  local_70 = DAT_100066b4 + ((uintptr_t)pf_module_state+0x5a04U);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  local_9c = param_1;
  recovered_100066c0((int)param_1,param_2,param_3);
  recovered_100041d8(&uStack_94);
  return local_9c;
}

#undef DAT_100066b0
#undef DAT_100066b4
#undef DAT_100066b8
#undef DAT_100066bc
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5aa0U)
 */

void recovered_100066c0(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_100067d0((int *)(param_1 + 8),param_2,param_3 | 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_100067a4
#define DAT_100067a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b84U)))
#undef DAT_100067a8
#define DAT_100067a8 (*(int *)(((uintptr_t)pf_module_state + 0x5b88U)))
#undef DAT_100067ac
#define DAT_100067ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5b8cU)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ac4U)
 */

int * recovered_100066e4(int *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_100067ac;
  local_78 = DAT_100067a4;
  local_70 = DAT_100067a8 + ((uintptr_t)pf_module_state+0x5b10U);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  local_98 = param_1;
  recovered_1000681c(param_1);
  recovered_100041d8(&uStack_94);
  return local_98;
}

#undef DAT_100067a4
#undef DAT_100067a8
#undef DAT_100067ac
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_98
#undef local_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b90U)
 */

void recovered_100067b0(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100066e4((int *)((int)param_1 + 8));
  recovered_10003cf4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5bb0U)
 */

void recovered_100067d0(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;

  recovered_1000681c(param_1);
  iVar1 = recovered_10006854(param_3);
  puVar2 = recovered_10002f44(param_2,iVar1);
  *param_1 = (int)puVar2;
  param_1[3] = 0;
  param_1[2] = 0;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5bfcU)
 */

void recovered_1000681c(int *param_1)

{
  unsigned char frame[64] = {0};

  if ((uint *)*param_1 != (uint *)0x0) {
    recovered_10003300((uint *)*param_1);
    *param_1 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


#undef DAT_100068c4
#define DAT_100068c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ca4U)))
#undef DAT_100068c8
#define DAT_100068c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ca8U)))
#undef DAT_100068cc
#define DAT_100068cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cacU)))
#undef DAT_100068d0
#define DAT_100068d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cb0U)))
#undef DAT_100068d4
#define DAT_100068d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cb4U)))
#undef DAT_100068d8
#define DAT_100068d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cb8U)))
#undef DAT_100068dc
#define DAT_100068dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cbcU)))
#undef DAT_100068e0
#define DAT_100068e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cc0U)))
#undef DAT_100068e4
#define DAT_100068e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cc4U)))
#undef DAT_100068e8
#define DAT_100068e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cc8U)))
#undef DAT_100068ec
#define DAT_100068ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cccU)))
#undef DAT_100068f0
#define DAT_100068f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5cd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c34U)
 */

undefined4 recovered_10006854(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if ((param_1 & 3) == 3) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 0x10) == 0) {
        uVar1 = DAT_100068d8;
        uVar2 = DAT_100068d4;
      }
      else {
        uVar1 = DAT_100068d0;
        uVar2 = DAT_100068cc;
      }
    }
    else {
      uVar1 = DAT_100068c8;
      uVar2 = DAT_100068c4;
    }
  }
  else if ((param_1 & 2) == 0) {
    uVar1 = DAT_100068f0;
    uVar2 = DAT_100068ec;
  }
  else if ((param_1 & 8) == 0) {
    uVar1 = DAT_100068e8;
    uVar2 = DAT_100068e4;
  }
  else {
    uVar1 = DAT_100068e0;
    uVar2 = DAT_100068dc;
  }
  if ((param_1 & 4) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

#undef DAT_100068c4
#undef DAT_100068c8
#undef DAT_100068cc
#undef DAT_100068d0
#undef DAT_100068d4
#undef DAT_100068d8
#undef DAT_100068dc
#undef DAT_100068e0
#undef DAT_100068e4
#undef DAT_100068e8
#undef DAT_100068ec
#undef DAT_100068f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5cd4U)
 */

void recovered_100068f4(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;

  if ((int *)*param_1 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = 1;
    if (param_4 != 1) {
      iVar2 = (uint)(param_4 == 2) << 1;
    }
    iVar2 = recovered_100035dc((int *)*param_1,param_2,iVar2);
    bVar1 = iVar2 == 0;
  }
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d20U)
 */

ulonglong recovered_10006940(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((*param_1 == 0) || (uVar1 = recovered_10003674(*param_1), (int)uVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d68U)
 */

void recovered_10006988(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_100069e8(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10003cf4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5dc8U)
 */

void recovered_100069e8(ulong param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10003cc4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5dd8U)
 */

void recovered_100069f8(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int *piVar3;
  int unaff_r5;

  if (-1 < param_4) {
    piVar3 = (int *)param_4;
    if (param_2 != 0) {
      piVar3 = (int *)*param_1;
      unaff_r5 = param_4;
    }
    if (param_2 != 0 && piVar3 != (int *)0x0) {
      iVar1 = recovered_10003344((undefined1 *)param_2,1,param_3,piVar3);
      bVar2 = iVar1 == param_3 && unaff_r5 == 0;
      goto LAB_10006a54;
    }
  }
  bVar2 = false;
  iVar1 = 0;
LAB_10006a54:
  param_1[2] = iVar1;
  *(bool *)(param_1 + 1) = bVar2;
  param_1[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e48U)
 */

undefined4 recovered_10006a68(ushort *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (param_1 != (ushort *)0x0) {
    if (*param_1 != 0xfffe) {
      return 1;
    }
    if (param_2 != 0) {
      bVar1 = 0x27 < param_3;
      if (bVar1) {
        param_3 = (uint)*(ushort *)(param_2 + 0x10);
      }
      if (bVar1 && 0x15 < param_3) {
        if ((*(ushort *)(param_2 + 0x18) & 0xfffd) == 1) {
          *param_1 = *(ushort *)(param_2 + 0x18);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ea0U)
 */

bool recovered_10006ac0(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if (param_1 == 3) {
    uVar1 = param_2 - 0x20;
    uVar2 = 0xffdf;
  }
  else {
    if (param_1 != 1) {
      return false;
    }
    uVar1 = param_2 - 8;
    uVar2 = 0xffe7;
  }
  return (uVar1 & uVar2) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5edcU)
 */

void recovered_10006afc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined2 *puVar3;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    recovered_10006d30(param_1,param_2);
    uVar1 = param_1[1];
    iVar2 = uVar1 << 1;
    while (uVar1 < param_2) {
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
      puVar3 = (undefined2 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 2;
      *puVar3 = 0;
    }
  }
  return;
}


#undef DAT_10006ca0
#define DAT_10006ca0 (*(double *)(((uintptr_t)pf_module_state + 0x6080U)))
#undef DAT_10006ca8
#define DAT_10006ca8 (*(double *)(((uintptr_t)pf_module_state + 0x6088U)))
#undef DAT_10006cb0
#define DAT_10006cb0 (*(double *)(((uintptr_t)pf_module_state + 0x6090U)))
#undef DAT_10006cb8
#define DAT_10006cb8 (*(double *)(((uintptr_t)pf_module_state + 0x6098U)))
#define local_18 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f40U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x5fe0U)) */

double recovered_10006b60(uint *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[72] = {0};

  bool bVar1;
  uint uVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;

  dVar3 = 0.0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_18 = 0;
      recovered_100017b4(&local_18,param_1,8);
      dVar4 = (double)(ulonglong)local_18;
      dVar3 = dVar4;
      if (1.0 < dVar4) {
        dVar3 = 1.0;
      }
      bVar1 = dVar4 < -1.0;
    }
    else {
      if (param_3 != 0x20) {
        return 0.0;
      }
      local_18 = param_4;
      recovered_100017b4((void *)((int)(uintptr_t)(frame + 40) + -0xc),param_1,4);
      bVar1 = false;
      dVar3 = 0.0;
    }
    if (bVar1) {
      dVar3 = -1.0;
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)(param_3 - 8U >> 3 | param_3 << 0x1d)) {
    case 0:
      uVar2 = (byte)*param_1 - 0x80;
      dVar4 = DAT_10006cb8;
      break;
    case 1:
      uVar2 = (uint)(short)*param_1;
      dVar4 = DAT_10006cb0;
      break;
    case 2:
      uVar2 = (uint)(uint3)*param_1;
      dVar4 = DAT_10006ca8;
      if (*(char *)((int)param_1 + 2) < '\0') {
        uVar2 = uVar2 | 0xff000000;
      }
      break;
    case 3:
      uVar2 = *param_1;
      dVar4 = DAT_10006ca0;
      break;
    default:
      goto switchD_10006b98_default;
    }
    dVar3 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar3 = dVar3 * dVar4;
  }
switchD_10006b98_default:
  return dVar3;
}

#undef DAT_10006ca0
#undef DAT_10006ca8
#undef DAT_10006cb0
#undef DAT_10006cb8
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60a0U)
 */

int recovered_10006cc0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  short sVar1;
  short extraout_r0;

  sVar1 = -0x8000;
  if ((-1.0 < pf_bits_double(CONCAT44(param_2,param_1))) &&
     (sVar1 = 0x7fff, pf_bits_double(CONCAT44(param_2,param_1)) < 1.0)) {
    recovered_1000219c();
    sVar1 = extraout_r0;
  }
  return (int)sVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6110U)
 */

void recovered_10006d30(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;

  if ((uint)param_1[2] < param_2) {
    recovered_10006da8(param_2);
    uVar1 = param_1[1];
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      puVar4 = (undefined2 *)(extraout_r0 + iVar2);
      puVar5 = (undefined2 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 2;
      *puVar4 = *puVar5;
    }
    recovered_10003cf4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6188U)
 */

void recovered_10006da8(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10003cc4(param_1 << 1);
  return;
}


#undef DAT_10006dfc
#define DAT_10006dfc (*(char * *)(((uintptr_t)pf_module_state + 0x61dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x619cU)
 */

bool recovered_10006dbc(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar3 = param_1[1];
  pcVar4 = DAT_10006dfc;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  iVar2 = recovered_10006f3c((int)param_2);
  bVar1 = recovered_100070a8(pcVar4,iVar3,param_2,iVar2);
  return bVar1;
}

#undef DAT_10006dfc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61e0U)
 */

int * recovered_10006e00(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_10006f3c(param_2);
  recovered_10006e40(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6220U)
 */

void recovered_10006e40(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *data;
  uint uVar2;
  int iVar3;

  local_1c = 0;
  iVar1 = recovered_10006f6c(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10006fc0(param_1);
    }
    else {
      recovered_10006ff0(param_1,param_3);
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
    recovered_10007058(&local_28,*param_1 + local_1c,uVar2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = data;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10003cf4(data);
  }
  return;
}

#undef local_28
#undef local_20
#undef local_1c
#undef iStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x631cU)
 */

int recovered_10006f3c(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x634cU)
 */

undefined4 recovered_10006f6c(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x63a0U)
 */

void recovered_10006fc0(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;

  if (*param_1 == 0) {
    recovered_1000708c(0);
    param_1[2] = 0;
    *param_1 = extraout_r0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63d0U)
 */

void recovered_10006ff0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_1000708c(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_r0 + param_1[1]) = 0;
    recovered_10003cf4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6438U)
 */

undefined4 * recovered_10007058(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int in_r3;

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_10006e40(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x646cU)
 */

void recovered_1000708c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10003cc4(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6488U)
 */

bool recovered_100070a8(char *param_1,int param_2,char *param_3,int param_4)

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


#undef DAT_10007418
#define DAT_10007418 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67f8U)))
#undef DAT_1000741c
#define DAT_1000741c (*(int *)(((uintptr_t)pf_module_state + 0x67fcU)))
#undef DAT_10007420
#define DAT_10007420 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6800U)))
#undef DAT_10007424
#define DAT_10007424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6804U)))
#undef DAT_10007428
#define DAT_10007428 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6808U)))
#undef DAT_1000742c
#define DAT_1000742c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x680cU)))
#undef DAT_10007430
#define DAT_10007430 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6810U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(undefined4 *)(frame + 28))
#define local_b0 (*(uint *)(frame + 32))
#define local_ac (*(undefined4 * *)(frame + 36))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(int * *)(frame + 44))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64c0U)
 */

undefined4 recovered_100070e0(int *param_1,undefined4 *param_2)

{
  unsigned char frame[240] = {0};

  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r2_01 = 0;
  undefined4 extraout_r2_02 = 0;
  undefined4 extraout_r2_03 = 0;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  uint unaff_r5;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10007420;
  local_78 = DAT_10007418;
  local_70 = DAT_1000741c + ((uintptr_t)pf_module_state+0x6510U);
  recovered_100041c0(&uStack_94);
  uVar5 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      unaff_r5 = (uint)*(ushort *)(param_1 + 4);
    }
    if (uVar4 != 0 && unaff_r5 != 0) {
      uVar6 = param_1[1];
      iVar2 = recovered_10000ca0(uVar6,unaff_r5);
      if (iVar2 == 0) {
        lVar1 = (ulonglong)(unaff_r5 << 1) * (ulonglong)uVar4;
        if ((-1 < (short)unaff_r5) && ((int)((ulonglong)lVar1 >> 0x20) == 0)) {
          local_98 = 0;
          local_a8 = uVar6 * 2;
          local_9c = 0;
          local_a0 = (void *)0x0;
          local_90 = 1;
          local_b8 = uVar6;
          local_b4 = (int)lVar1;
          local_b0 = unaff_r5 << 1;
          local_ac = param_2;
          local_a4 = param_1;
          recovered_10006988((int *)&local_a0,local_a8 + 0x2c);
          local_90 = 2;
          recovered_10007450((int *)&local_a0,DAT_10007424,4);
          local_90 = 3;
          recovered_1000746c((int *)&local_a0,local_b8 * 2 + 0x24,extraout_r2,(int3)extraout_r3);
          local_90 = 4;
          recovered_10007450((int *)&local_a0,DAT_10007428,4);
          local_90 = 5;
          recovered_10007450((int *)&local_a0,DAT_1000742c,4);
          local_90 = 6;
          recovered_1000746c((int *)&local_a0,0x10,extraout_r2_00,(int3)extraout_r3_00);
          local_90 = 7;
          recovered_100074cc((int *)&local_a0);
          local_90 = 8;
          recovered_100074cc((int *)&local_a0);
          local_90 = 9;
          recovered_1000746c((int *)&local_a0,local_a4[3],extraout_r2_01,(int3)extraout_r3_01);
          local_90 = 10;
          recovered_1000746c((int *)&local_a0,local_b4,extraout_r2_02,(int3)extraout_r3_02);
          local_90 = 0xb;
          recovered_100074cc((int *)&local_a0);
          local_90 = 0xc;
          recovered_100074cc((int *)&local_a0);
          local_90 = 0xd;
          recovered_10007450((int *)&local_a0,DAT_10007430,4);
          local_90 = 0xe;
          recovered_1000746c((int *)&local_a0,local_a8,extraout_r2_03,(int3)extraout_r3_03);
          iVar2 = *local_a4;
          piVar3 = (int *)(local_a4[1] << 1);
          while (piVar3 != (int *)0x0) {
            local_90 = 0xf;
            local_a8 = iVar2;
            local_a4 = piVar3;
            recovered_100074cc((int *)&local_a0);
            iVar2 = local_a8 + 2;
            piVar3 = (int *)((int)local_a4 + -2);
          }
          recovered_10007504(local_ac,&local_a0);
          local_9c = 0;
          recovered_10003cf4(local_a0);
          uVar5 = 1;
        }
      }
    }
  }
  recovered_100041d8(&uStack_94);
  return uVar5;
}

#undef DAT_10007418
#undef DAT_1000741c
#undef DAT_10007420
#undef DAT_10007424
#undef DAT_10007428
#undef DAT_1000742c
#undef DAT_10007430
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_b0
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
#undef local_70
#undef local_6c
#undef auStack_c0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6814U)
 */

int recovered_10007434(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100066e4((int *)(param_1 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6830U)
 */

void recovered_10007450(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  recovered_10007558(param_1,*param_1 + param_1[1],param_2,param_2 + param_3);
  return;
}


#define local_14 (*(undefined1 *)(frame + 16))
#define local_13 (*(undefined1 *)(frame + 17))
#define local_12 (*(undefined1 *)(frame + 18))
#define local_11 (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x684cU)
 */

void recovered_1000746c(int *param_1,undefined4 param_2,undefined4 param_3,undefined3 param_4)

{
  unsigned char frame[68] = {0};


  PF_PART4(local_14,0) = CONCAT13((char)param_2,param_4);
  recovered_10007630(param_1,&local_11);
  PF_PART4(local_14,0) = CONCAT12((char)((uint)param_2 >> 8),PF_PART4(local_14,0));
  recovered_10007630(param_1,&local_12);
  PF_PART4(local_14,0) = CONCAT11((char)((uint)param_2 >> 0x10),local_14);
  recovered_10007630(param_1,&local_13);
  PF_PART4(local_14,0) = CONCAT31(PF_PART4(local_13,0),(char)((uint)param_2 >> 0x18));
  recovered_10007630(param_1,&local_14);
  return;
}

#undef local_14
#undef local_13
#undef local_12
#undef local_11

#define local_12 (*(undefined1 *)(frame + 16))
#define local_11 (*(undefined1 *)(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68acU)
 */

void recovered_100074cc(int *param_1)

{
  unsigned char frame[66] = {0};


  recovered_10007630(param_1,&local_11);
  recovered_10007630(param_1,&local_12);
  return;
}

#undef local_12
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68e4U)
 */

undefined4 * recovered_10007504(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003cf4((void *)*param_1);
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6938U)
 */

int recovered_10007558(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10006988(param_1,uVar5);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a10U)
 */

int recovered_10007630(int *param_1,undefined1 *param_2)

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
    recovered_10006988(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


#undef DAT_100077a4
#define DAT_100077a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b84U)))
#undef DAT_100077a8
#define DAT_100077a8 (*(int *)(((uintptr_t)pf_module_state + 0x6b88U)))
#undef DAT_100077ac
#define DAT_100077ac (*(int * *)(((uintptr_t)pf_module_state + 0x6b8cU)))
#undef DAT_100077b0
#define DAT_100077b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6b90U)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a70U)
 */

int * recovered_10007690(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_98 = param_1 + 2;
  param_1[5] = 0;
  param_1[4] = 0;
  *local_98 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = *DAT_100077ac + 8;
  local_7c = *DAT_100077b0;
  local_78 = DAT_100077a4;
  local_70 = DAT_100077a8 + ((uintptr_t)pf_module_state+0x6af8U);
  local_90 = 1;
  recovered_100041c0(&uStack_94);
  local_9c = param_1;
  recovered_100077b4((int)param_1,param_2,param_3);
  recovered_100041d8(&uStack_94);
  return local_9c;
}

#undef DAT_100077a4
#undef DAT_100077a8
#undef DAT_100077ac
#undef DAT_100077b0
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b94U)
 */

void recovered_100077b4(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_100067d0((int *)(param_1 + 8),param_2,param_3 | 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bb8U)
 */

void recovered_100077d8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100066e4((int *)((int)param_1 + 8));
  recovered_10003cf4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bd8U)
 */

void recovered_100077f8(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_4) && (param_2 != 0 || param_3 == 0 && param_4 == 0)) {
      iVar2 = recovered_100034d0((void *)param_2,1,param_3,(uint *)*param_1);
      bVar1 = iVar2 == param_3;
      goto LAB_1000785c;
    }
  }
  bVar1 = false;
LAB_1000785c:
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c44U)
 */

undefined4 * recovered_10007864(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10003cf4((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c68U)
 */

void recovered_10007888(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;

  if (param_2 < (uint)param_1[1]) {
    recovered_10006afc(param_1,param_2);
    return;
  }
  recovered_10006d30(param_1,param_2);
  uVar2 = param_1[1];
  iVar3 = uVar2 << 1;
  while (uVar2 < param_2) {
    uVar2 = uVar2 + 1;
    uVar1 = *param_3;
    puVar4 = (undefined2 *)(*param_1 + iVar3);
    param_1[1] = uVar2;
    iVar3 = iVar3 + 2;
    *puVar4 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6cd8U)
 */

int recovered_100078f8(int *param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar2 >> 1;
  }
  uVar1 = (uint)((int)param_4 - (int)param_3) >> 1;
  if (uVar1 != 0) {
    uVar8 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar8 + uVar1) {
      if (uVar5 == 0) {
        uVar5 = 4;
      }
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 << 1;
      } while (uVar6 < uVar8 + uVar1);
      recovered_10006d30(param_1,uVar6);
      uVar8 = param_1[1];
    }
    iVar2 = uVar8 * 2;
    for (uVar5 = uVar8; iVar2 = iVar2 + -2, uVar7 < uVar5; uVar5 = uVar5 - 1) {
      ((undefined2 *)(*param_1 + iVar2))[uVar1] = *(undefined2 *)(*param_1 + iVar2);
    }
    iVar2 = uVar7 << 1;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      puVar3 = (undefined2 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 2;
      *puVar3 = *param_3;
    }
    param_1[1] = uVar8 + uVar1;
    iVar2 = *param_1;
  }
  iVar4 = iVar2 + uVar7 * 2;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  return iVar4;
}


#undef DAT_10007a60
#define DAT_10007a60 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6e40U)))
#undef DAT_10007a64
#define DAT_10007a64 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6e44U)))
#undef DAT_10007a68
#define DAT_10007a68 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6e48U)))
#undef DAT_10007a6c
#define DAT_10007a6c (*(int * *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10007a70
#define DAT_10007a70 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e50U)))
#undef DAT_10007a74
#define DAT_10007a74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6e54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6dc8U)
 */

void recovered_100079e8(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_10007a60;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10003ffc(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_10007a64;
  piVar2[1] = *(int *)*DAT_10007a68;
  *piVar2 = *DAT_10007a6c + 8;
  recovered_10003ff4();
  recovered_1000400c(puVar3);
  return;
}

#undef DAT_10007a60
#undef DAT_10007a64
#undef DAT_10007a68
#undef DAT_10007a6c
#undef DAT_10007a70
#undef DAT_10007a74

#undef DAT_10007af0
#define DAT_10007af0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef DAT_10007af4
#define DAT_10007af4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ed4U)))
#undef DAT_10007af8
#define DAT_10007af8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ed8U)))
#undef DAT_10007afc
#define DAT_10007afc (*(int * *)(((uintptr_t)pf_module_state + 0x6edcU)))
#undef DAT_10007b00
#define DAT_10007b00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ee0U)))
#undef DAT_10007b04
#define DAT_10007b04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ee4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6e58U)
 */

void recovered_10007a78(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_10007af0;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10003ffc(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_10007af4;
  piVar2[1] = *(int *)*DAT_10007af8;
  *piVar2 = *DAT_10007afc + 8;
  recovered_10003ff4();
  recovered_1000400c(puVar3);
  return;
}

#undef DAT_10007af0
#undef DAT_10007af4
#undef DAT_10007af8
#undef DAT_10007afc
#undef DAT_10007b00
#undef DAT_10007b04

#undef DAT_10007b80
#define DAT_10007b80 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6f60U)))
#undef DAT_10007b84
#define DAT_10007b84 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6f64U)))
#undef DAT_10007b88
#define DAT_10007b88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6f68U)))
#undef DAT_10007b8c
#define DAT_10007b8c (*(int * *)(((uintptr_t)pf_module_state + 0x6f6cU)))
#undef DAT_10007b90
#define DAT_10007b90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6f70U)))
#undef DAT_10007b94
#define DAT_10007b94 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6f74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6ee8U)
 */

void recovered_10007b08(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_10007b80;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10003ffc(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_10007b84;
  piVar2[1] = *(int *)*DAT_10007b88;
  *piVar2 = *DAT_10007b8c + 8;
  recovered_10003ff4();
  recovered_1000400c(puVar3);
  return;
}

#undef DAT_10007b80
#undef DAT_10007b84
#undef DAT_10007b88
#undef DAT_10007b8c
#undef DAT_10007b90
#undef DAT_10007b94

#undef DAT_10007c10
#define DAT_10007c10 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ff0U)))
#undef DAT_10007c14
#define DAT_10007c14 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ff4U)))
#undef DAT_10007c18
#define DAT_10007c18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ff8U)))
#undef DAT_10007c1c
#define DAT_10007c1c (*(int * *)(((uintptr_t)pf_module_state + 0x6ffcU)))
#undef DAT_10007c20
#define DAT_10007c20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7000U)))
#undef DAT_10007c24
#define DAT_10007c24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7004U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6f78U)
 */

void recovered_10007b98(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_10007c10;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10003ffc(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_10007c14;
  piVar2[1] = *(int *)*DAT_10007c18;
  *piVar2 = *DAT_10007c1c + 8;
  recovered_10003ff4();
  recovered_1000400c(puVar3);
  return;
}

#undef DAT_10007c10
#undef DAT_10007c14
#undef DAT_10007c18
#undef DAT_10007c1c
#undef DAT_10007c20
#undef DAT_10007c24
