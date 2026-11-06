/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10001838(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  recovered_10001840(param_1,param_2,(uint *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10001840(uint param_1,uint param_2,uint *param_3)

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


#define auStack_20c (*(uint (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x80U)
 */

undefined4 recovered_100018b8(uint param_1,uint param_2)

{
  unsigned char frame[572] = {0};


  recovered_10001840(param_1,param_2,auStack_20c + 0x80);
  return 0;
}

#undef auStack_20c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

int recovered_100018dc(uint param_1,uint param_2)

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
  uVar1 = recovered_10001840(uVar1,uVar2,(uint *)0x0);
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

int recovered_10001914(int param_1,int param_2)

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
  recovered_10001840(uVar1,param_2,&local_10);
  if (param_1 < 0) {
    local_10 = -local_10;
  }
  return local_10;
}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_10001958(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10001a60(float param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10002b5c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x238U)
 */

undefined8 recovered_10001a70(float param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10002aa0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x248U)
 */

float recovered_10001a80(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10002be4(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x264U)
 */

float recovered_10001a9c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10002c18(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10001ac8
#define DAT_10001ac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x280U)
 */

void recovered_10001ab8(void)

{
  unsigned char frame[64] = {0};

  int *in_r3;

  *DAT_10001ac8 = 0;
  recovered_10001acc(in_r3);
  return;
}

#undef DAT_10001ac8

#undef DAT_10001cac
#define DAT_10001cac (*(uint * *)(((uintptr_t)pf_module_state + 0x474U)))
#undef DAT_10001cb0
#define DAT_10001cb0 (*(char * *)(((uintptr_t)pf_module_state + 0x478U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define apcStack_ac (*(char * (*)[34])(frame + 16))
#define local_24 (*(int *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x294U)
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10001acc(int *in_r3)

{
  unsigned char frame[220] = {0};

  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  uint uVar5;
  int *extraout_r3 = 0;
  uint uVar6;
  char **unaff_r5;
  int iVar7;
  char *pcVar8;
  char *unaff_r8;
  int *piVar9;
  uint uVar10;

  pcVar1 = DAT_10001cb0;
  local_24 = 0;
  if (*DAT_10001cb0 == '\0') {
    apcStack_ac[1] = DAT_10001cb0;
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar6 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10001cac[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      pcVar8 = (char *)DAT_10001cac[uVar6 * 2 + 2];
      uVar5 = DAT_10001cac[uVar6 * 2 + 3];
      pcVar2 = pcVar8 + uVar5;
      in_r3 = (int *)0x0;
      if ((uVar5 != 0) &&
         (in_r3 = (int *)(pcVar2 + -0x300001),
         CARRY4(uVar5,(uint)pcVar8) || CARRY4(uVar5,(uint)pcVar8) < ((char *)0x300000 < pcVar2))) {
        if (pcVar8 < (char *)0x300001) {
          pcVar8 = (char *)0x300000;
        }
        if (piVar9 < &DataAbort) {
          ppcVar4 = apcStack_ac + (int)piVar9 * 2 + 2;
          in_r3 = piVar9;
          while( true ) {
            if (in_r3 != (int *)0x0) {
              unaff_r5 = ppcVar4 + -2;
              unaff_r8 = *unaff_r5;
            }
            if (in_r3 == (int *)0x0 || unaff_r8 <= pcVar8) break;
            pcVar3 = *unaff_r5;
            in_r3 = (int *)((int)in_r3 + -1);
            unaff_r5 = (char **)unaff_r5[1];
            ppcVar4[1] = (char *)unaff_r5;
            *ppcVar4 = pcVar3;
            ppcVar4 = ppcVar4 + -2;
          }
          piVar9 = (int *)((int)piVar9 + 1);
          *ppcVar4 = pcVar8;
          ppcVar4[1] = pcVar2 + -(int)pcVar8;
        }
      }
    }
    if (piVar9 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      ppcVar4 = apcStack_ac + 5;
      iVar7 = 1;
      while (piVar9 = (int *)((int)piVar9 + -1), piVar9 != (int *)0x0) {
        pcVar2 = ppcVar4[-1];
        in_r3 = (int *)apcStack_ac[iVar7 * 2];
        if (apcStack_ac[iVar7 * 2 + 1] + (int)in_r3 < pcVar2) {
          pcVar2 = ppcVar4[-1];
          apcStack_ac[iVar7 * 2 + 3] = *ppcVar4;
          apcStack_ac[iVar7 * 2 + 2] = pcVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          pcVar2 = pcVar2 + (int)*ppcVar4;
          if (apcStack_ac[iVar7 * 2 + 1] + (int)in_r3 < pcVar2) {
            apcStack_ac[iVar7 * 2 + 1] = pcVar2 + -(int)in_r3;
          }
        }
        ppcVar4 = ppcVar4 + 2;
      }
    }
    ppcVar4 = apcStack_ac + 3;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      recovered_1000383c((uint)ppcVar4[-1],(uint)*ppcVar4,&local_24,in_r3);
      in_r3 = extraout_r3;
      ppcVar4 = ppcVar4 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar6 = 0x4000000;
      if (0x300000 < *DAT_10001cac) {
        uVar6 = *DAT_10001cac & 0xfffffff0;
      }
      uVar10 = uVar6 - 0x300000;
      if (uVar6 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_1000383c(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10001cac
#undef DAT_10001cb0
#undef EXT_00000010
#undef apcStack_ac
#undef local_24

#undef DAT_10001cf4
#define DAT_10001cf4 (*(int * *)(((uintptr_t)pf_module_state + 0x4bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47cU)
 */

int recovered_10001cb4(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001acc(in_r3);
  iVar1 = 0;
  piVar2 = DAT_10001cf4;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_10001cf4

#undef DAT_10001d44
#define DAT_10001d44 (*(int * *)(((uintptr_t)pf_module_state + 0x50cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c0U)
 */

long recovered_10001cf8(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;
  int *in_r3_00;

  recovered_10001acc(in_r3_00);
  iVar1 = 0;
  piVar2 = DAT_10001d44;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_10001d44

#undef DAT_10001d7c
#define DAT_10001d7c (*(int * *)(((uintptr_t)pf_module_state + 0x544U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x510U)
 */

int recovered_10001d48(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001acc(in_r3);
  iVar1 = 0;
  piVar2 = DAT_10001d7c;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10001d7c

#undef DAT_10001dbc
#define DAT_10001dbc (*(int * *)(((uintptr_t)pf_module_state + 0x584U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x548U)
 */

long recovered_10001d80(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;
  int *in_r3_00;

  recovered_10001acc(in_r3_00);
  iVar1 = 0;
  piVar2 = DAT_10001dbc;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_10001dbc

#undef DAT_10001e60
#define DAT_10001e60 (*(uint * *)(((uintptr_t)pf_module_state + 0x628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x588U)
 */

uint * recovered_10001dc0(int param_1,int *in_r3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10001acc(in_r3);
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10001e60;
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

#undef DAT_10001e60

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x62cU)
 */

longlong recovered_10001e64(uint param_1,int param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x688U)
 */

undefined8 recovered_10001ec0(uint param_1,uint param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x6e0U)
 */

undefined8 recovered_10001f18(uint param_1,int param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x72cU)
 */

undefined8 recovered_10001f64(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10001f80(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x748U)
 */

undefined8 recovered_10001f80(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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
 * Address: ((uintptr_t)pf_module_state+0x850U)
 */

undefined8 recovered_10002088(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

{
  unsigned char frame[584] = {0};


  recovered_10001f80(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x884U)
 */

undefined8 recovered_100020bc(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10001f80((param_1 ^ uVar1) - uVar1,
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
 * Address: ((uintptr_t)pf_module_state+0x8fcU)
 */

undefined8 recovered_10002134(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_10001f80((param_1 ^ uVar2) - uVar2,
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
 * Address: ((uintptr_t)pf_module_state+0x980U)
 */

void recovered_100021b8(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x988U)
 */

int recovered_100021c0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100021cc(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10002210(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10002250(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa64U)
 */

void * recovered_1000229c(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)dst + uVar1) = *(undefined1 *)((int)src + uVar1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa80U)
 */

void * recovered_100022b8(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (dst != src && bytes != 0) {
    if (dst < src) {
      puVar1 = dst;
      for (; bytes != 0; bytes = bytes - 1) {
        *puVar1 = *(undefined1 *)src;
        src = (undefined1 *)((int)src + 1);
        puVar1 = puVar1 + 1;
      }
      return dst;
    }
    for (; bytes != 0; bytes = bytes - 1) {
      *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xad4U)
 */

void * recovered_1000230c(void *dst,int byte,uint bytes)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((int)dst + uVar1) = (char)byte;
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaecU)
 */

void recovered_10002324(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb04U)
 */

void recovered_1000233c(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb1cU)
 */

int recovered_10002354(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte bVar2;

  do {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    param_3 = param_3 + -1;
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while ((uint)bVar2 == (uint)bVar1);
  return (uint)bVar2 - (uint)bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb44U)
 */

bool recovered_1000237c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb58U)
 */

bool recovered_10002390(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb6cU)
 */

bool recovered_100023a4(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb84U)
 */

bool recovered_100023bc(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbb0U)
 */

bool recovered_100023e8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd0U)
 */

bool recovered_10002408(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbe4U)
 */

int recovered_1000241c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbf4U)
 */

int recovered_1000242c(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc04U)
 */

uint recovered_1000243c(char *text)

{
  unsigned char frame[64] = {0};

  uint uVar1;

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
 * Address: ((uintptr_t)pf_module_state+0xc34U)
 */

int recovered_1000246c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) || (uVar1 != *param_2)) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc60U)
 */

int recovered_10002498(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) || (uVar1 != *param_2)) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc64U)
 */

void recovered_1000249c(int param_1,int param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xc80U)
 */

void * recovered_100024b8(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_1000243c((char *)param_1);
    dst = recovered_100021cc(uVar1 + 1);
    if (dst != (void *)0x0) {
      pvVar2 = recovered_1000229c(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcc8U)
 */

char * recovered_10002500(char *param_1,char param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xcf4U)
 */

int recovered_1000252c(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_10002500(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd38U)
 */

char * recovered_10002570(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10002500(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd78U)
 */

char * recovered_100025b0(char *param_1,char *param_2)

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


#undef DAT_10002600
#define DAT_10002600 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdc0U)
 */

undefined4 recovered_100025f8(void)

{
  unsigned char frame[64] = {0};

  return DAT_10002600;
}

#undef DAT_10002600

#undef DAT_1000260c
#define DAT_1000260c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdccU)
 */

undefined4 recovered_10002604(void)

{
  unsigned char frame[64] = {0};

  return DAT_1000260c;
}

#undef DAT_1000260c

#undef DAT_10002624
#define DAT_10002624 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdd8U)
 */

undefined8 recovered_10002610(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = DAT_10002624;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10002624;
  }
  return CONCAT44(param_1,uVar1);
}

#undef DAT_10002624

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf0U)
 */

double recovered_10002628(undefined4 param_1,undefined4 param_2,int param_3)

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
 * Address: ((uintptr_t)pf_module_state+0xe30U)
 */

double recovered_10002668(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0xec8U)
 */

double recovered_10002700(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_4,param_3));
  if (dVar2 == 0.0) {
    return 0.0;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(param_2,param_1)) / dVar2,3);
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44(param_2,param_1)) - dVar3 * dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf00U)
 */

double recovered_10002738(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  double dVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  double dVar5;
  double dVar6;

  uVar4 = VectorFloatToSigned(CONCAT44(param_4,param_3),3);
  dVar6 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  dVar5 = 0.0;
  if (dVar6 == pf_bits_double(CONCAT44(param_4,param_3))) {
    if (uVar4 == 0) {
      dVar5 = 1.0;
    }
    else {
      dVar5 = 1.0;
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = -uVar4;
      }
      dVar6 = pf_bits_double(CONCAT44(param_2,param_1));
      while (uVar3 != 0) {
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        dVar2 = dVar6 * dVar5;
        if (uVar1 == 0) {
          dVar2 = dVar5;
        }
        dVar5 = dVar2;
        dVar6 = dVar6 * dVar6;
      }
      if ((int)uVar4 < 0) {
        dVar5 = 1.0 / dVar5;
      }
    }
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf7cU)
 */

double recovered_100027b4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfacU)
 */

double recovered_100027e4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  if (dVar5 < dVar4) {
    dVar5 = dVar5 + 1.0;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xff0U)
 */

double recovered_10002828(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar2 = 0.0;
  if (0.0 < dVar3) {
    iVar1 = 0x18;
    dVar2 = 1.0;
    if (1.0 <= dVar3) {
      dVar2 = dVar3;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      dVar2 = (dVar2 + dVar3 / dVar2) * 0.5;
    }
  }
  return dVar2;
}


#undef DAT_10002938
#define DAT_10002938 (*(double *)(((uintptr_t)pf_module_state + 0x1100U)))
#undef DAT_10002940
#define DAT_10002940 (*(double *)(((uintptr_t)pf_module_state + 0x1108U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1040U)
 */

double recovered_10002878(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar3 = in_fpscr & 0xfffffff;
  if (dVar4 <= 0.0) {
    return DAT_10002938;
  }
  iVar1 = 0;
  for (; uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f,
      dVar4 != 1.5 && SUB41(uVar3 >> 0x1f,0) == NAN(dVar4); dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar1 = iVar1 + -1;
  }
  dVar8 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar8 * dVar8;
  dVar7 = 0.0;
  dVar4 = 1.0;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar6 = dVar8 / dVar4;
    dVar8 = dVar5 * dVar8;
    dVar7 = dVar7 + dVar6;
    dVar4 = dVar4 + 2.0;
  }
  dVar4 = (double)VectorSignedToFloat(iVar1,(byte)(uVar3 >> 0x16) & 3);
  return dVar7 + dVar7 + dVar4 * DAT_10002940;
}

#undef DAT_10002938
#undef DAT_10002940

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1110U)
 */

undefined8 recovered_10002948(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10002aa0(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}


#undef DAT_100029c8
#define DAT_100029c8 (*(double *)(((uintptr_t)pf_module_state + 0x1190U)))
#undef DAT_100029d0
#define DAT_100029d0 (*(double *)(((uintptr_t)pf_module_state + 0x1198U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1140U)
 */

double recovered_10002978(void)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double extraout_d0 = 0;
  double dVar1;

  recovered_100029d8(pf_bits_double(CONCAT44(in_r1,in_r0)));
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / DAT_100029d0 +
         (dVar1 * dVar1 * dVar1) / DAT_100029c8);
}

#undef DAT_100029c8
#undef DAT_100029d0

#undef DAT_10002a10
#define DAT_10002a10 (*(double *)(((uintptr_t)pf_module_state + 0x11d8U)))
#undef DAT_10002a18
#define DAT_10002a18 (*(double *)(((uintptr_t)pf_module_state + 0x11e0U)))
#undef DAT_10002a20
#define DAT_10002a20 (*(double *)(((uintptr_t)pf_module_state + 0x11e8U)))
#undef DAT_10002a28
#define DAT_10002a28 (*(double *)(((uintptr_t)pf_module_state + 0x11f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11a0U)
 */

void recovered_100029d8(double in_d0)

{
  unsigned char frame[64] = {0};

  for (; DAT_10002a10 < in_d0; in_d0 = in_d0 + DAT_10002a28) {
  }
  for (; in_d0 < DAT_10002a18; in_d0 = in_d0 + DAT_10002a20) {
  }
  return;
}

#undef DAT_10002a10
#undef DAT_10002a18
#undef DAT_10002a20
#undef DAT_10002a28

#undef DAT_10002a78
#define DAT_10002a78 (*(double *)(((uintptr_t)pf_module_state + 0x1240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11f8U)
 */

double recovered_10002a30(undefined4 param_1,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;
  double dVar1;

  recovered_100029d8(pf_bits_double(CONCAT44(in_r1,param_1)));
  dVar1 = extraout_d0 * extraout_d0;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / DAT_10002a78;
}

#undef DAT_10002a78

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1248U)
 */

double recovered_10002a80(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


#undef DAT_10002b54
#define DAT_10002b54 (*(double *)(((uintptr_t)pf_module_state + 0x131cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1268U)
 */

undefined8 recovered_10002aa0(undefined4 param_1,undefined4 param_2)

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
  double dVar11;

  dVar8 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar8 == 0.0) {
    return 0;
  }
  uVar7 = 0;
  uVar3 = 0x3f;
  uVar6 = 0;
  dVar9 = dVar8;
  if (dVar8 < 0.0) {
    dVar9 = -dVar8;
  }
  dVar10 = DAT_10002b54;
  while (-1 < (int)uVar3) {
    bVar1 = dVar10 <= dVar9;
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    bVar2 = dVar10 <= dVar9;
    dVar11 = dVar9 - dVar10;
    dVar10 = dVar10 * 0.5;
    if (bVar1) {
      uVar7 = uVar7 | uVar4;
    }
    uVar4 = 0x20 - uVar3;
    uVar3 = uVar3 - 1;
    uVar4 = 1 >> (uVar4 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (bVar2) {
      uVar6 = uVar6 | uVar4;
      dVar9 = dVar11;
    }
  }
  uVar4 = -(uVar6 + (uVar7 != 0));
  uVar3 = -uVar7;
  if (0.0 <= dVar8) {
    uVar4 = uVar6;
    uVar3 = uVar7;
  }
  return CONCAT44(uVar4,uVar3);
}

#undef DAT_10002b54

#undef DAT_10002bdc
#define DAT_10002bdc (*(double *)(((uintptr_t)pf_module_state + 0x13a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1324U)
 */

undefined8 recovered_10002b5c(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_10002bdc;
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

#undef DAT_10002bdc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13acU)
 */

void recovered_10002be4(uint param_1,uint param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x13e0U)
 */

void recovered_10002c18(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 0) {
    recovered_10002be4(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10002be4(param_1,param_2);
  return;
}


#undef DAT_10002c78
#define DAT_10002c78 (*(float *)(((uintptr_t)pf_module_state + 0x1440U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1408U)
 */

float recovered_10002c40(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (param_2 == 0.0) {
    fVar2 = DAT_10002c78;
  }
  else {
    uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)param_1 - dVar3 * (double)param_2);
  }
  return fVar2;
}

#undef DAT_10002c78

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1444U)
 */

float recovered_10002c7c(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002668(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1470U)
 */

float recovered_10002ca8(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002628(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x149cU)
 */

float recovered_10002cd4(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002738(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             SUB84((double)param_2,0),(int)((ulonglong)(double)param_2 >> 0x20));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14d4U)
 */

float recovered_10002d0c(float param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar3 = (double)param_1;
  dVar4 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar4 < dVar3) << 0x1f | (uint)(dVar4 == dVar3) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar5 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar4) || NAN(dVar3))) {
    dVar4 = dVar5;
  }
  return (float)dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x150cU)
 */

float recovered_10002d44(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100027e4(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1534U)
 */

undefined4 recovered_10002d6c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar4 < 0.0) {
    dVar4 = recovered_100027e4(param_1,param_2);
    return SUB84(dVar4,0);
  }
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return SUB84(dVar5,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1574U)
 */

float recovered_10002dac(float param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_10002d6c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x159cU)
 */

float recovered_10002dd4(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002828(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15c4U)
 */

float recovered_10002dfc(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002878(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15ecU)
 */

long recovered_10002e24(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10002948(in_r0,in_r1);
  return (long)uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15fcU)
 */

float recovered_10002e34(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002978();
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1624U)
 */

float recovered_10002e5c(float param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002a30(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x164cU)
 */

float recovered_10002e84(float param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1668U)
 */

int recovered_10002ea0(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_10002fc8((int)(char)*pbVar1);
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
 * Address: ((uintptr_t)pf_module_state+0x1790U)
 */

uint recovered_10002fc8(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x17d4U)
 */

int recovered_1000300c(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_10003068;
  }
  bVar1 = false;
LAB_10003068:
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
    uVar3 = recovered_10002fc8((int)(char)*pbVar2);
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
 * Address: ((uintptr_t)pf_module_state+0x18f4U)
 */

double recovered_1000312c(byte *param_1,undefined4 *param_2)

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
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;

  pbVar1 = param_1;
  while( true ) {
    uVar5 = (uint)*pbVar1;
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001fU) == 0)) break;
    pbVar1 = pbVar1 + 1;
  }
  dVar8 = 0.0;
  pbVar1 = pbVar1 + ((uVar5 - 0x2b & 0xfffffffd) == 0);
  bVar2 = false;
  while( true ) {
    uVar4 = (uint)*pbVar1;
    if (9 < uVar4 - 0x30) break;
    pbVar1 = pbVar1 + 1;
    bVar2 = true;
    dVar9 = (double)VectorUnsignedToFloat(uVar4 - 0x30,(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = dVar9 + dVar8 * 10.0;
  }
  if (uVar4 == 0x2e) {
    dVar9 = 1.0;
    dVar10 = 0.0;
    while( true ) {
      pbVar1 = pbVar1 + 1;
      uVar4 = (uint)*pbVar1;
      if (9 < uVar4 - 0x30) break;
      dVar9 = dVar9 * 10.0;
      bVar2 = true;
      dVar11 = (double)VectorUnsignedToFloat(uVar4 - 0x30,(byte)(in_fpscr >> 0x16) & 3);
      dVar10 = dVar11 + dVar10 * 10.0;
    }
  }
  else {
    dVar9 = 1.0;
    dVar10 = 0.0;
  }
  if (bVar2) {
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
      for (; *pbVar6 - 0x30U < 10; pbVar6 = pbVar6 + 1) {
        bVar2 = true;
        iVar3 = (uint)*pbVar6 + iVar3 * 10 + -0x30;
      }
      if (bVar2) {
        dVar8 = recovered_10002628(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
        dVar8 = pf_bits_double(((pf_double_bits(dVar8) & 0xffffffff00000000) + (pf_double_bits(dVar8) & 0xffffffff)));
        pbVar1 = pbVar6;
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pbVar1;
    }
    if (uVar5 == 0x2d) {
      dVar8 = -dVar8;
    }
    return dVar8;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0.0;
  }
  *param_2 = param_1;
  return 0.0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a90U)
 */

float recovered_100032c8(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000312c(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_100036dc
#define DAT_100036dc (*(char * *)(((uintptr_t)pf_module_state + 0x1ea4U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1aacU)
 */

int recovered_100032e4(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
  local_48 = param_2;
  local_44 = param_1;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10003340:
  iVar3 = 10;
  bVar1 = *param_3;
  if (bVar1 != 0x25) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        *local_44 = 0;
      }
      return local_4c;
    }
    if (1 < local_48) {
      *local_44 = bVar1;
LAB_10003370:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_10003374;
  }
  uVar2 = (uint)param_3[1];
  if (uVar2 != 0x25) {
    pbVar4 = param_3 + 2;
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
    param_3 = pbVar4 + -1;
LAB_100033f8:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10003408_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10003408_caseD_64;
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
switchD_10003408_caseD_65:
      if (local_48 < 2) goto LAB_10003374;
      *local_44 = 0x3f;
      goto LAB_10003370;
    case 0x66:
      dVar10 = *param_4;
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
      recovered_10003770((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
      dVar11 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      pdVar7 = param_4 + 1;
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
      goto LAB_100033bc;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10003408_caseD_68;
    case 0x70:
      uVar2 = *(uint *)param_4;
      recovered_1000371c((int *)&local_44,&local_48,&local_4c,DAT_100036dc);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)param_4 + 4);
      recovered_1000371c((int *)&local_44,&local_48,&local_4c,*(char **)param_4);
      goto LAB_100033bc;
    case 0x75:
      uVar2 = *(uint *)param_4;
      goto LAB_1000368c;
    case 0x78:
      uVar2 = *(uint *)param_4;
      iVar3 = 0;
LAB_10003678:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)param_4;
          iVar3 = 1;
          goto LAB_10003678;
        }
        goto switchD_10003408_caseD_65;
      }
      goto switchD_10003408_caseD_64;
    }
    goto LAB_100036a4;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = param_4;
  param_3 = param_3 + 1;
  goto LAB_100033b4;
switchD_10003408_caseD_68:
  param_3 = param_3 + 1;
  uVar2 = (uint)*param_3;
  goto LAB_100033f8;
switchD_10003408_caseD_64:
  uVar2 = *(uint *)param_4;
  if (0x7fffffff < uVar2) {
    if (1 < local_48) {
      local_48 = local_48 - 1;
      *local_44 = 0x2d;
      local_44 = local_44 + 1;
    }
    uVar2 = -uVar2;
    local_4c = local_4c + 1;
  }
LAB_1000368c:
  uVar12 = 10;
  iVar3 = 0;
LAB_100036a4:
  pdVar7 = (double *)((int)param_4 + 4);
  recovered_10003770((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_100033bc;
switchD_10003408_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(int *)param_4;
    local_44 = local_44 + 1;
  }
  param_4 = (double *)((int)param_4 + 4);
LAB_10003374:
  pdVar7 = param_4;
LAB_100033b4:
  local_4c = local_4c + 1;
LAB_100033bc:
  param_3 = param_3 + 1;
  param_4 = pdVar7;
  goto LAB_10003340;
}

#undef DAT_100036dc
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea8U)
 */

void recovered_100036e0(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_1000376c
#define DAT_1000376c (*(char * *)(((uintptr_t)pf_module_state + 0x1f34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ee4U)
 */

void recovered_1000371c(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_1000376c;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100036e0(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_1000376c

#undef DAT_10003808
#define DAT_10003808 (*(int *)(((uintptr_t)pf_module_state + 0x1fd0U)))
#undef DAT_1000380c
#define DAT_1000380c (*(int *)(((uintptr_t)pf_module_state + 0x1fd4U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f38U)
 */

void recovered_10003770(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_1000380c;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar3 = DAT_10003808;
  }
  do {
    iVar2 = iVar1;
    recovered_10001838(param_4,param_5);
    bVar4 = param_5 <= param_4;
    local_40[-iVar2] = *(undefined1 *)(iVar3 + (param_4 - extraout_r0 * param_5));
    param_4 = extraout_r0;
    iVar1 = iVar2 + -1;
  } while (bVar4);
  for (; iVar2 != 1; iVar2 = iVar2 + 1) {
    recovered_100036e0(param_1,param_2,param_3,local_40[-iVar2]);
  }
  return;
}

#undef DAT_10003808
#undef DAT_1000380c
#undef local_40

#define local_4 (*(undefined1 (*)[4])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fd8U)
 */

void recovered_10003810(byte *in_r0,uint in_r1,byte *in_r2)

{
  unsigned char frame[64] = {0};


  recovered_100032e4(in_r0,in_r1,in_r2,(double *)local_4);
  return;
}

#undef local_4

#undef DAT_100038a0
#define DAT_100038a0 (*(int *)(((uintptr_t)pf_module_state + 0x2068U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2004U)
 */

void recovered_1000383c(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_100038a0 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_100038a0

#undef DAT_100038f0
#define DAT_100038f0 (*(int *)(((uintptr_t)pf_module_state + 0x20b8U)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x206cU)
 */

undefined4 recovered_100038a4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  iVar1 = Ram40010800;
  uVar3 = 0;
  if ((iVar1 == DAT_100038f0) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram40010808;
    if (param_1 + 4U <= uVar2) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_100038f0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808

#undef DAT_100039a0
#define DAT_100039a0 (*(int * *)(((uintptr_t)pf_module_state + 0x2168U)))
#undef DAT_100039a4
#define DAT_100039a4 (*(int *)(((uintptr_t)pf_module_state + 0x216cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20bcU)
 */

void recovered_100038f4(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_100039a4;
  piVar2 = DAT_100039a0;
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
LAB_10003984:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_100039a8(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10003984;
      }
      recovered_100039a8(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_100039a0
#undef DAT_100039a4

#undef DAT_10003a28
#define DAT_10003a28 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x21f0U)))
#undef DAT_10003a2c
#define DAT_10003a2c (*(uint * *)(((uintptr_t)pf_module_state + 0x21f4U)))
#undef DAT_10003a30
#define DAT_10003a30 (*(void * *)(((uintptr_t)pf_module_state + 0x21f8U)))
#define local_214 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2170U)
 */

void recovered_100039a8(int param_1)

{
  unsigned char frame[580] = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint bytes;

  puVar1 = DAT_10003a2c;
  bytes = *DAT_10003a2c;
  if (bytes != 0 || param_1 != 0) {
    uVar2 = 0;
    if (bytes != 0) {
      recovered_1000229c(local_214,DAT_10003a30,bytes);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = '\0';
    iVar3 = recovered_100047ec(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10003a28 != (code *)0x0)) {
      (*(code *)*DAT_10003a28)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10003a28
#undef DAT_10003a2c
#undef DAT_10003a30
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21fcU)
 */

void recovered_10003a34(void)

{
  unsigned char frame[64] = {0};

  recovered_100039a8(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2204U)
 */

void recovered_10003a3c(void)

{
  unsigned char frame[64] = {0};

  recovered_100039a8(0);
  return;
}


#undef DAT_10003a8c
#define DAT_10003a8c (*(byte * *)(((uintptr_t)pf_module_state + 0x2254U)))
#undef DAT_10003a90
#define DAT_10003a90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2258U)))
#define abStack_14c (*(byte (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x220cU)
 */

void recovered_10003a44(int param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int extraout_r0 = 0;
  byte *in_r2;

  in_r2 = DAT_10003a8c;
  if (param_1 != 0) {
    in_r2 = (byte *)param_1;
  }
  recovered_10003810(abStack_14c,0x140,in_r2);
  if (0 < extraout_r0) {
    recovered_100038f4((char *)abStack_14c,extraout_r0);
  }
  return;
}

#undef DAT_10003a8c
#undef DAT_10003a90
#undef abStack_14c

#undef DAT_10003ad0
#define DAT_10003ad0 (*(int *)(((uintptr_t)pf_module_state + 0x2298U)))
#undef DAT_10003ad4
#define DAT_10003ad4 (*(int *)(((uintptr_t)pf_module_state + 0x229cU)))
#undef DAT_10003ad8
#define DAT_10003ad8 (*(int *)(((uintptr_t)pf_module_state + 0x22a0U)))
#undef DAT_10003adc
#define DAT_10003adc (*(int *)(((uintptr_t)pf_module_state + 0x22a4U)))
#undef DAT_10003ae0
#define DAT_10003ae0 (*(int *)(((uintptr_t)pf_module_state + 0x22a8U)))
#undef DAT_10003ae4
#define DAT_10003ae4 (*(int *)(((uintptr_t)pf_module_state + 0x22acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x225cU)
 */

void recovered_10003a94(void)

{
  unsigned char frame[64] = {0};

  recovered_10003ae8(DAT_10003ad0);
  recovered_10003ae8(DAT_10003ad4);
  recovered_10003ae8(DAT_10003ad8);
  recovered_10003ae8(DAT_10003adc);
  recovered_10003ae8(DAT_10003ae0);
  recovered_10003ae8(DAT_10003ae4);
  return;
}

#undef DAT_10003ad0
#undef DAT_10003ad4
#undef DAT_10003ad8
#undef DAT_10003adc
#undef DAT_10003ae0
#undef DAT_10003ae4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22b0U)
 */

void recovered_10003ae8(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    return;
  }
  uVar1 = recovered_1000243c((char *)param_1);
  recovered_100038f4((char *)param_1,uVar1);
  return;
}


#undef DAT_10003b2c
#define DAT_10003b2c (*(int *)(((uintptr_t)pf_module_state + 0x22f4U)))
#undef DAT_10003b30
#define DAT_10003b30 (*(int *)(((uintptr_t)pf_module_state + 0x22f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22d8U)
 */

void recovered_10003b10(void)

{
  unsigned char frame[64] = {0};

  recovered_10003ae8(DAT_10003b2c);
  recovered_10003ae8(DAT_10003b30);
  return;
}

#undef DAT_10003b2c
#undef DAT_10003b30

#undef DAT_10003bb4
#define DAT_10003bb4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x237cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22fcU)
 */

bool recovered_10003b34(int param_1,int param_2,char *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if (param_1 != 0 && param_2 != 0) {
    recovered_10003a3c();
    iVar1 = recovered_100047ec(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_10003bb4 != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_10003bb4)((char *)param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10003bb4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2380U)
 */

undefined4 recovered_10003bb8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2388U)
 */

void recovered_10003bc0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x238cU)
 */

undefined4 recovered_10003bc4(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10003e74
#define DAT_10003e74 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x263cU)))
#undef DAT_10003e78
#define DAT_10003e78 (*(byte * *)(((uintptr_t)pf_module_state + 0x2640U)))
#undef DAT_10003e7c
#define DAT_10003e7c (*(byte * *)(((uintptr_t)pf_module_state + 0x2644U)))
#undef DAT_10003e80
#define DAT_10003e80 (*(byte * *)(((uintptr_t)pf_module_state + 0x2648U)))
#undef DAT_10003e84
#define DAT_10003e84 (*(byte * *)(((uintptr_t)pf_module_state + 0x264cU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2394U)
 */

undefined4 * recovered_10003bcc(int param_1,int param_2)

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

  if (param_1 != 0) {
    unaff_r10 = (char *)param_2;
  }
  if (param_1 == 0 || param_2 == 0) {
    uVar6 = 0x16;
    goto LAB_10003e10;
  }
  iVar2 = recovered_1000246c((byte *)param_1,DAT_10003e78);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10003dac:
    puVar4 = recovered_100021cc(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_1000230c(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_10003810((byte *)(puVar4 + 1),0xf1,DAT_10003e84);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_1000246c((byte *)param_1,DAT_10003e7c);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10003dac;
    }
    iVar3 = recovered_1000246c((byte *)param_1,DAT_10003e80);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10003dac;
    }
    puVar4 = recovered_100021cc(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_1000230c(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10002500(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10002500(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10002500(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10002500(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10002500(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10002500(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_10002500(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_10003810((byte *)(puVar4 + 1),0xf1,DAT_10003e84);
      recovered_1000230c(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10003e88(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_10003e74 = 2;
LAB_10003e48:
          recovered_10002210(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_10002500(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_10003ed4((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10003e48;
            recovered_1000229c((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10003e10:
  *(undefined4 *)*DAT_10003e74 = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_10003e74
#undef DAT_10003e78
#undef DAT_10003e7c
#undef DAT_10003e80
#undef DAT_10003e84
#undef auStack_a8

#undef DAT_10003ed0
#define DAT_10003ed0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2698U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2650U)
 */

undefined4 recovered_10003e88(char *param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100047ec(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10003ed0 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x268cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)*DAT_10003ed0)(param_1,param_2);
  return iVar1;
}

#undef DAT_10003ed0

#undef DAT_10003f58
#define DAT_10003f58 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2720U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x269cU)
 */

undefined4 recovered_10003ed4(int param_1,uint param_2)

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
      pvVar2 = recovered_10002250(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10003f58 = 0xc;
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

#undef DAT_10003f58

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

undefined4 * recovered_10003f5c(int param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  if (param_3 != (uint *)0x0) {
    recovered_10003f88(param_3);
  }
  puVar1 = recovered_10003bcc(param_1,param_2);
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2750U)
 */

undefined4 recovered_10003f88(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10004320(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10002210((void *)param_1[0x3f]);
    }
    recovered_10002210(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2794U)
 */

int recovered_10003fcc(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_1000406c(unaff_r6);
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


#undef DAT_10004154
#define DAT_10004154 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x291cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2834U)
 */

uint recovered_1000406c(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
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
        bVar1 = recovered_10003b34((int)text,0x1fe,DAT_10004154,0);
        if (!bVar1) goto LAB_10004144;
        uVar3 = recovered_1000243c(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_10004144:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_10004154

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2920U)
 */

int recovered_10004158(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_r5;
  uint uVar4;

  iVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != 0) {
      unaff_r5 = param_4;
    }
    if ((param_1 != 0 && param_4 != (uint *)0x0) && (*(char *)((int)unaff_r5 + 0x111) == '\x01')) {
      uVar4 = param_3 * param_2;
      if ((*unaff_r5 & 0xfffffffe) == 2) {
        recovered_100038f4((char *)param_1,uVar4);
        unaff_r5[0x42] = unaff_r5[0x42] + uVar4;
      }
      else {
        if (*(char *)((int)unaff_r5 + 0x112) == '\0') {
          uVar1 = unaff_r5[0x42];
        }
        else {
          uVar1 = unaff_r5[0x40];
          unaff_r5[0x42] = uVar1;
        }
        iVar3 = recovered_10003ed4((int)unaff_r5,uVar1 + uVar4);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_1000230c((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_1000229c((void *)(unaff_r5[0x3f] + uVar1),(void *)param_1,uVar4);
        uVar4 = unaff_r5[0x42] + uVar4;
        unaff_r5[0x42] = uVar4;
        if (unaff_r5[0x40] < uVar4) {
          unaff_r5[0x40] = uVar4;
        }
        *(undefined2 *)((int)unaff_r5 + 0x113) = 1;
      }
      iVar3 = param_3;
    }
  }
  return iVar3;
}


#undef DAT_100042f8
#define DAT_100042f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2ac0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a2cU)
 */

undefined4 recovered_10004264(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10004280;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10004278;
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
LAB_10004278:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10004280:
  *(undefined4 *)*DAT_100042f8 = 0x16;
  return 0xffffffff;
}

#undef DAT_100042f8

#undef DAT_1000431c
#define DAT_1000431c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2ae4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ac4U)
 */

undefined4 recovered_100042fc(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_1000431c = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_1000431c

#undef DAT_10004394
#define DAT_10004394 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ae8U)
 */

undefined4 recovered_10004320(uint *param_1)

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
      iVar1 = recovered_10004530(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10004394 = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_10004394

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b60U)
 */

undefined1 recovered_10004398(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x2b70U)
 */

undefined1 recovered_100043a8(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x2b80U)
 */

void recovered_100043b8(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b9cU)
 */

uint recovered_100043d4(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
  }
  return uVar1;
}


#undef DAT_1000443c
#define DAT_1000443c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bc0U)
 */

undefined4 recovered_100043f8(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_10004440(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_1000443c = uVar2;
  return 0xffffffff;
}

#undef DAT_1000443c

#undef DAT_10004480
#define DAT_10004480 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c08U)
 */

undefined4 recovered_10004440(char *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100047ec(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_10004480 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2c3cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)*DAT_10004480)(param_1);
  return iVar1;
}

#undef DAT_10004480

#undef DAT_1000452c
#define DAT_1000452c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cf4U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c4cU)
 */

undefined4 recovered_10004484(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_1000230c(&local_20,0,0xc);
    iVar1 = recovered_10003e88(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_10004530(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_10004440(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_1000452c = uVar2;
  }
  else {
    *(undefined4 *)*DAT_1000452c = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_1000452c
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_10004580
#define DAT_10004580 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2d48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cf8U)
 */

undefined4 recovered_10004530(char *param_1,void *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100047ec(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_10004580 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2d3cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)*DAT_10004580)(param_1,param_2,param_3);
  return iVar1;
}

#undef DAT_10004580

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2d4cU)
 */

undefined4 recovered_10004584(int param_1,int *param_2,uint *param_3)

{
  unsigned char frame[216] = {0};

  int iVar1;
  uint size;
  void *dst;
  void *unaff_r5;
  uint unaff_r6;
  undefined4 uVar2;
  uint *unaff_r10;

  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      unaff_r10 = param_3;
    }
    if (param_2 != (int *)0x0 && param_3 != (uint *)0x0) {
      recovered_1000230c(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10003e88(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        dst = recovered_100021cc(size);
        if (dst != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_1000229c(dst,unaff_r5,unaff_r6);
          }
          uVar2 = 1;
          *unaff_r10 = unaff_r6;
          *param_2 = (int)dst;
        }
      }
    }
  }
  return uVar2;
}

#undef auStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e04U)
 */

bool recovered_1000463c(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_10004530(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e44U)
 */

undefined4 recovered_1000467c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e4cU)
 */

void recovered_10004684(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e50U)
 */

undefined4 recovered_10004688(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e58U)
 */

undefined4 recovered_10004690(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10004698(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e68U)
 */

char * recovered_100046a0(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e90U)
 */

int recovered_100046c8(byte *param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = (uint)*param_1;
    if (uVar1 != *param_2) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - *param_2;
}


#undef DAT_100047a0
#define DAT_100047a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f68U)))
#undef DAT_100047a4
#define DAT_100047a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f6cU)))
#undef DAT_100047a8
#define DAT_100047a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f70U)))
#undef DAT_100047ac
#define DAT_100047ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f74U)))
#undef DAT_100047b0
#define DAT_100047b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f78U)))
#undef DAT_100047b4
#define DAT_100047b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f7cU)))
#undef DAT_100047b8
#define DAT_100047b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f80U)))
#undef DAT_100047bc
#define DAT_100047bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f84U)))
#undef DAT_100047c0
#define DAT_100047c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ed0U)
 */

undefined4 recovered_10004708(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_100047c0;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_1000471c_caseD_0;
  case 2:
    return DAT_100047a4;
  case 5:
    return DAT_100047a8;
  case 9:
    return DAT_100047ac;
  case 0xc:
    return DAT_100047b0;
  case 0xd:
    return DAT_100047b4;
  default:
    if (param_1 == 0x11) {
      return DAT_100047b8;
    }
    if (param_1 == 0x16) {
      return DAT_100047a0;
    }
switchD_1000471c_caseD_0:
    return DAT_100047bc;
  }
}

#undef DAT_100047a0
#undef DAT_100047a4
#undef DAT_100047a8
#undef DAT_100047ac
#undef DAT_100047b0
#undef DAT_100047b4
#undef DAT_100047b8
#undef DAT_100047bc
#undef DAT_100047c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f8cU)
 */

undefined4 recovered_100047c4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

undefined4 recovered_100047cc(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100047e8
#define DAT_100047e8 (*(int * *)(((uintptr_t)pf_module_state + 0x2fb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f9cU)
 */

void recovered_100047d4(void)

{
  unsigned char frame[64] = {0};

  *DAT_100047e8 = *DAT_100047e8 + 1;
  return;
}

#undef DAT_100047e8

#undef DAT_10004838
#define DAT_10004838 (*(int *)(((uintptr_t)pf_module_state + 0x3000U)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fb4U)
 */

undefined4 recovered_100047ec(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  iVar1 = Ram40010800;
  uVar3 = 0;
  if ((iVar1 == DAT_10004838) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram40010808;
    if (param_1 + 4U <= uVar2) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10004838
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3004U)
 */

void recovered_1000483c(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x3010U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3014U)
 */

undefined4 recovered_1000484c(undefined4 *param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x302cU)
 */

int recovered_10004864(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_100048fc
#define DAT_100048fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x30c4U)))
#undef DAT_10004900
#define DAT_10004900 (*(int *)(((uintptr_t)pf_module_state + 0x30c8U)))
#undef DAT_10004904
#define DAT_10004904 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x30ccU)))
#define uStack_3c (*(undefined4 *)(frame + 16))
#define local_38 (*(undefined4 *)(frame + 20))
#define local_24 (*(undefined4 *)(frame + 40))
#define local_20 (*(undefined4 *)(frame + 44))
#define auStack_10 (*(undefined1 (*)[8])(frame + 60))
#define local_1c (*(undefined1 * *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(undefined1 * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x304cU)
 */

void recovered_10004884(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10004904;
  local_20 = DAT_100048fc;
  local_18 = DAT_10004900 + ((uintptr_t)pf_module_state+0x3078U);
  local_38 = 1;
  recovered_10004e48(&uStack_3c);
  recovered_100021b8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x30a0U));
  (*pcVar1)();
}

#undef DAT_100048fc
#undef DAT_10004900
#undef DAT_10004904
#undef uStack_3c
#undef local_38
#undef local_24
#undef local_20
#undef auStack_10
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

undefined4 recovered_10004908(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d8U)
 */

void recovered_10004910(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004920(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004884();
}


#undef DAT_100082bc
#define DAT_100082bc (*(int *)(((uintptr_t)pf_module_state + 0x6a84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30e8U)
 */

long recovered_10004920(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100082bc;
  DAT_100082bc = param_1;
  iVar1 = recovered_10004d04(param_1);
  return iVar1;
}

#undef DAT_100082bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3114U)
 */

void * recovered_1000494c(uint size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100021cc(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100021b8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3140U)
 */

void * recovered_10004978(uint size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100021cc(size);
  if (pvVar1 == (void *)0x0) {
    recovered_100021b8();
  }
  return pvVar1;
}


#undef DAT_10004a30
#define DAT_10004a30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x31f8U)))
#undef DAT_10004a34
#define DAT_10004a34 (*(int *)(((uintptr_t)pf_module_state + 0x31fcU)))
#undef DAT_10004a38
#define DAT_10004a38 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3200U)))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3144U)
 */

void recovered_1000497c(void *pointer)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004a38;
  local_78 = DAT_10004a30;
  local_70 = DAT_10004a34 + ((uintptr_t)pf_module_state+0x318cU);
  local_90 = 1;
  recovered_10004e48(&uStack_94);
  recovered_10002210(pointer);
  recovered_10004e60(&uStack_94);
  return;
}

#undef DAT_10004a30
#undef DAT_10004a34
#undef DAT_10004a38
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10004af0
#define DAT_10004af0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x32b8U)))
#undef DAT_10004af4
#define DAT_10004af4 (*(int *)(((uintptr_t)pf_module_state + 0x32bcU)))
#undef DAT_10004af8
#define DAT_10004af8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x32c0U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3204U)
 */

void recovered_10004a3c(void *pointer)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004af8;
  local_78 = DAT_10004af0;
  local_70 = DAT_10004af4 + ((uintptr_t)pf_module_state+0x324cU);
  local_90 = 1;
  recovered_10004e48(&uStack_94);
  recovered_10002210(pointer);
  recovered_10004e60(&uStack_94);
  return;
}

#undef DAT_10004af0
#undef DAT_10004af4
#undef DAT_10004af8
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_a0
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10004bb0
#define DAT_10004bb0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3378U)))
#undef DAT_10004bb4
#define DAT_10004bb4 (*(int *)(((uintptr_t)pf_module_state + 0x337cU)))
#undef DAT_10004bb8
#define DAT_10004bb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3380U)))
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
 * Address: ((uintptr_t)pf_module_state+0x32c4U)
 */

void recovered_10004afc(void *pointer,uint size)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004bb8;
  local_78 = DAT_10004bb0;
  local_70 = DAT_10004bb4 + ((uintptr_t)pf_module_state+0x330cU);
  local_90 = 1;
  recovered_10004e48(&uStack_94);
  recovered_10002210(pointer);
  recovered_10004e60(&uStack_94);
  return;
}

#undef DAT_10004bb0
#undef DAT_10004bb4
#undef DAT_10004bb8
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

#undef DAT_10004c70
#define DAT_10004c70 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3438U)))
#undef DAT_10004c74
#define DAT_10004c74 (*(int *)(((uintptr_t)pf_module_state + 0x343cU)))
#undef DAT_10004c78
#define DAT_10004c78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3440U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3384U)
 */

void recovered_10004bbc(void *pointer,uint size)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004c78;
  local_78 = DAT_10004c70;
  local_70 = DAT_10004c74 + ((uintptr_t)pf_module_state+0x33ccU);
  local_90 = 1;
  recovered_10004e48(&uStack_94);
  recovered_10002210(pointer);
  recovered_10004e60(&uStack_94);
  return;
}

#undef DAT_10004c70
#undef DAT_10004c74
#undef DAT_10004c78
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3444U)
 */

undefined4 recovered_10004c7c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x344cU)
 */

uint recovered_10004c84(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

void recovered_10004c94(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x346cU)
 */

void recovered_10004ca4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3470U)
 */

undefined1 * recovered_10004ca8(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_100021cc(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004884();
  }
  puVar2 = puVar1;
  for (; size != 0; size = size - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34bcU)
 */

void recovered_10004cf4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10002210((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34ccU)
 */

int recovered_10004d04(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_10004d64
#define DAT_10004d64 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x352cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34d4U)
 */

void recovered_10004d0c(void)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)*DAT_10004d64;
  if (pointer == (void *)0x0) {
    return;
  }
  *DAT_10004d64 = *(undefined4 *)((int)pointer + 8);
  *(undefined4 *)((int)pointer + 8) = 0;
  if (*(char *)((int)pointer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10002210(pointer);
  return;
}

#undef DAT_10004d64

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3530U)
 */

void recovered_10004d68(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10004d90((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10004e0c
#define DAT_10004e0c (*(int * *)(((uintptr_t)pf_module_state + 0x35d4U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3558U)
 */

void recovered_10004d90(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10004e0c;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) goto LAB_10004e08;
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10005338((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
  recovered_10004ecc(param_1);
LAB_10004e08:
                    /* WARNING: Subroutine does not return */
  recovered_10004884();
}

#undef DAT_10004e0c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10004e44
#define DAT_10004e44 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x360cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35d8U)
 */

void recovered_10004e10(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_10004e44;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_10004884();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10004d90(puVar1);
}

#undef DAT_10004e44

#undef DAT_10004e5c
#define DAT_10004e5c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3624U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3610U)
 */

void recovered_10004e48(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10004e5c;
  *param_1 = *DAT_10004e5c;
  *puVar1 = param_1;
  return;
}

#undef DAT_10004e5c

#undef DAT_10004e8c
#define DAT_10004e8c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3654U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3628U)
 */

void recovered_10004e60(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10004e8c;
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

#undef DAT_10004e8c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3658U)
 */

void recovered_10004e90(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004d90(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3664U)
 */

void recovered_10004e9c(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004884();
}


#undef DAT_100082c0
#define DAT_100082c0 (*(int * *)(((uintptr_t)pf_module_state + 0x6a88U)))
#define auStack_130 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3670U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36f0U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3720U)) */

void recovered_10004ea8(undefined4 *param_1)

{
  unsigned char frame[352] = {0};

  int *piVar1;
  undefined4 *extraout_r0 = 0;
  undefined4 uVar2;
  undefined4 *extraout_r0_00 = 0;
  undefined4 uVar3;

  if (DAT_100082c0 != (int *)0x0) {
    DAT_100082c0 = (int *)*DAT_100082c0;
  }
  recovered_10004ecc(param_1);
  while( true ) {
    piVar1 = DAT_100082c0;
    if (DAT_100082c0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004884();
    }
    if (DAT_100082c0 == (int *)extraout_r0[3]) break;
    recovered_10005338((int)DAT_100082c0,(int *)*extraout_r0,auStack_130 + 0x80);
    DAT_100082c0 = (int *)*piVar1;
  }
  uVar3 = extraout_r0[5];
  DAT_100082c0[2] = (int)extraout_r0;
  uVar2 = extraout_r0[4];
  piVar1[3] = uVar3;
  piVar1[1] = uVar2;
  recovered_1000483c((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10004ea8(extraout_r0_00);
}

#undef DAT_100082c0
#undef auStack_130

#undef DAT_100082c0
#define DAT_100082c0 (*(int * *)(((uintptr_t)pf_module_state + 0x6a88U)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3694U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36f0U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3720U)) */

void recovered_10004ecc(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 *extraout_r0 = 0;
  undefined4 uVar3;

  while( true ) {
    piVar1 = DAT_100082c0;
    if (DAT_100082c0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004884();
    }
    if (DAT_100082c0 == (int *)param_1[3]) break;
    recovered_10005338((int)DAT_100082c0,(int *)*param_1,auStack_128 + 0x80);
    DAT_100082c0 = (int *)*piVar1;
  }
  uVar3 = param_1[5];
  DAT_100082c0[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar1[3] = uVar3;
  piVar1[1] = uVar2;
  recovered_1000483c((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10004ea8(extraout_r0);
}

#undef DAT_100082c0
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3740U)
 */

void recovered_10004f78(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004ea8(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x374cU)
 */

undefined4 recovered_10004f84(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3754U)
 */

void recovered_10004f8c(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004884();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3760U)
 */

int recovered_10004f98(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10004fd8(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_1000507c
#define DAT_1000507c (*(int *)(((uintptr_t)pf_module_state + 0x3844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37a0U)
 */

bool recovered_10004fd8(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_1000507c + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_1000507c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3848U)
 */

void recovered_10005080(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x384cU)
 */

undefined4 recovered_10005084(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3854U)
 */

bool recovered_1000508c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3868U)
 */

bool recovered_100050a0(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (1 << (param_1 - 9U & 0xff) & 0x80001bU) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38a4U)
 */

bool recovered_100050dc(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

bool recovered_10005108(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38ecU)
 */

bool recovered_10005124(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3908U)
 */

bool recovered_10005140(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3924U)
 */

bool recovered_1000515c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3940U)
 */

double recovered_10005178(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100027b4(param_1,param_2);
  dVar2 = pf_bits_double(((pf_double_bits(dVar2) & 0xffffffff00000000) + (pf_double_bits(dVar2) & 0xffffffff)));
  dVar1 = pf_bits_double(CONCAT44(param_2,param_1)) - dVar2;
  if (0.5 <= dVar1) {
    dVar1 = 1.0;
  }
  else {
    if (-0.5 < dVar1) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar2 + dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3998U)
 */

ulonglong recovered_100051d0(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_1000521c;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_1000521c:
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
 * Address: ((uintptr_t)pf_module_state+0x3afcU)
 */

ulonglong recovered_10005334(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_1000521c;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_1000521c:
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

#undef DAT_10005550
#define DAT_10005550 (*(int *)(((uintptr_t)pf_module_state + 0x3d18U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b00U)
 */

undefined4 recovered_10005338(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10005554((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_10005680(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_10005680(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_10005680(&local_24);
        uVar6 = recovered_10005680(&local_24);
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
            uVar6 = recovered_100056e0((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_100056e0((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_10005550 + uVar5 * 4) * uVar6;
                puVar9 = recovered_10005554(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10004fd8(param_2,(int *)puVar9);
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

#undef DAT_10005550
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3d1cU)
 */

uint * recovered_10005554(uint param_1,int *param_2)

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
    recovered_100056b8(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_1000563c;
  case 1:
    puVar2 = (uint *)recovered_10005680(param_2);
    break;
  case 2:
    recovered_100056b8(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_1000563c;
  case 4:
  case 0xc:
    recovered_100056b8(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_1000563c:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_10005588_caseD_5;
  case 9:
    puVar2 = (uint *)recovered_100056e0(param_2);
    break;
  case 10:
    recovered_100056b8(iVar3,2);
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
switchD_10005588_caseD_5:
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e48U)
 */

uint recovered_10005680(undefined4 *param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x3e80U)
 */

void recovered_100056b8(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ea8U)
 */

uint recovered_100056e0(undefined4 *param_1)

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


#undef DAT_10005894
#define DAT_10005894 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x405cU)))
#undef DAT_10005898
#define DAT_10005898 (*(int *)(((uintptr_t)pf_module_state + 0x4060U)))
#undef DAT_1000589c
#define DAT_1000589c (*(char * *)(((uintptr_t)pf_module_state + 0x4064U)))
#undef DAT_100058a0
#define DAT_100058a0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4068U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ef8U)
 */

int * recovered_10005730(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  void *pointer;
  char *pcVar6;

  piVar3 = recovered_1000494c(0x2a4);
  piVar3[0x20] = 0;
  iVar4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  iVar1 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  iVar2 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar3[0x1f] = 0;
  piVar3[0xd] = 0;
  *(undefined1 *)((int)piVar3 + 0x32) = 0;
  *(undefined2 *)(piVar3 + 0xc) = 0;
  piVar3[0xb] = 0;
  piVar3[10] = 0;
  *(undefined1 *)(piVar3 + 9) = 0xf6;
  piVar3[1] = 0;
  piVar3[2] = iVar4;
  piVar3[3] = iVar1;
  piVar3[4] = iVar2;
  piVar3[8] = -0x90a0000;
  piVar3[0xe] = 0;
  piVar3[0xf] = iVar4;
  piVar3[0x10] = iVar1;
  piVar3[0x11] = iVar2;
  piVar3[0x12] = 0;
  piVar3[0x13] = iVar4;
  piVar3[0x14] = iVar1;
  piVar3[0x15] = iVar2;
  piVar3[0x16] = 0;
  piVar3[0x17] = iVar4;
  piVar3[0x18] = iVar1;
  piVar3[0x19] = iVar2;
  piVar3[0x1a] = 0;
  piVar3[0x1b] = iVar4;
  piVar3[0x1c] = iVar1;
  piVar3[0x1d] = iVar2;
  piVar3[0x1e] = 0;
  piVar3[7] = 0;
  piVar3[6] = 0;
  *piVar3 = 0;
  piVar3[5] = 0;
  recovered_1000230c(piVar3 + 0x21,0,0x220);
  iVar4 = DAT_10005898;
  if (param_1 != 0) {
    iVar4 = param_1;
  }
  recovered_100058a4(piVar3,iVar4);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  uVar5 = 1;
  if (1 < (int)param_2) {
    uVar5 = param_2;
  }
  piVar3[0xb] = param_3 >> 1;
  piVar3[10] = uVar5 >> 1;
  piVar3[5] = param_3;
  piVar3[4] = uVar5;
  pcVar6 = DAT_1000589c;
  if ((char *)*piVar3 != (char *)0x0) {
    pcVar6 = (char *)*piVar3;
  }
  iVar4 = recovered_100075a0(0xa0);
  if ((iVar4 == 0) || ((code *)*DAT_10005894 == (code *)0x0)) {
    piVar3[3] = 0;
  }
  else {
    uVar5 = (*(code *)*DAT_10005894)(pcVar6,uVar5,param_3);
    piVar3[3] = uVar5;
    if (uVar5 != 0) {
      *DAT_100058a0 = piVar3;
      recovered_100058f4(piVar3);
      recovered_10005d24((int)piVar3);
      return piVar3;
    }
  }
  recovered_100058d4(piVar3);
  recovered_1000497c(pointer);
  return (int *)0x0;
}

#undef DAT_10005894
#undef DAT_10005898
#undef DAT_1000589c
#undef DAT_100058a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x406cU)
 */

int * recovered_100058a4(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  uVar1 = recovered_10007434(param_2);
  recovered_10007338(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x409cU)
 */

void recovered_100058d4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100075f0(param_1 + 0xd);
  recovered_1000731c(param_1);
  return;
}


#undef DAT_10005d10
#define DAT_10005d10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x44d8U)))
#undef DAT_10005d14
#define DAT_10005d14 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x44dcU)))
#undef DAT_10005d18
#define DAT_10005d18 (*(int *)(((uintptr_t)pf_module_state + 0x44e0U)))
#undef DAT_10005d1c
#define DAT_10005d1c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x44e4U)))
#undef DAT_10005d20
#define DAT_10005d20 (*(char * *)(((uintptr_t)pf_module_state + 0x44e8U)))
#define local_c0 (*(int *)(frame + 176))
#define local_a8 (*(int *)(frame + 200))
#define local_a0 (*(void * *)(frame + 208))
#define local_9c (*(undefined4 *)(frame + 212))
#define local_98 (*(undefined4 *)(frame + 216))
#define local_90 (*(undefined4 *)(frame + 224))
#define local_7c (*(undefined4 *)(frame + 244))
#define local_78 (*(undefined4 *)(frame + 248))
#define local_74 (*(undefined1 * *)(frame + 252))
#define local_70 (*(int *)(frame + 256))
#define local_6c (*(undefined1 * *)(frame + 260))
#define auStackY_160 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 220))
#define auStack_68 (*(undefined1 (*)[8])(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x40bcU)
 */

void recovered_100058f4(int *param_1)

{
  unsigned char frame[400] = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  uint unaff_r8;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_160 + 0x80;
  local_7c = *DAT_10005d1c;
  local_78 = DAT_10005d10;
  local_70 = DAT_10005d18 + ((uintptr_t)pf_module_state+0x4108U);
  recovered_10004e48(&uStack_94);
  if (param_1 != (int *)0x0) {
    unaff_r8 = param_1[3];
  }
  if (param_1 != (int *)0x0 && unaff_r8 != 0) {
    uVar8 = param_1[5];
    uVar5 = param_1[4];
    local_98 = 0;
    local_9c = 0;
    uVar13 = 1;
    if (1 < (int)uVar8) {
      uVar13 = uVar8;
    }
    local_a0 = (void *)0x0;
    uVar11 = 1;
    if (1 < (int)uVar5) {
      uVar11 = uVar5;
    }
    if (((param_1[0xe] != 0) && (0 < param_1[0x10])) && (0 < param_1[0x11])) {
      local_90 = 1;
      uVar5 = uVar5 * uVar8 * 4;
      recovered_10007614((int *)&local_a0,uVar5);
      for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 4) {
        *(undefined1 *)((int)local_a0 + uVar8) = *(undefined1 *)((int)param_1 + 0x22);
        *(undefined1 *)((int)local_a0 + uVar8 + 1) = *(undefined1 *)((int)param_1 + 0x23);
        *(char *)((int)local_a0 + uVar8 + 2) = (char)param_1[9];
        *(undefined1 *)((int)local_a0 + uVar8 + 3) = 0xff;
      }
      uVar18 = param_1[4];
      uVar16 = param_1[0x11];
      uVar8 = param_1[0x10];
      uVar19 = param_1[5];
      uVar21 = recovered_100020bc((uint)((longlong)(int)uVar16 * (longlong)(int)uVar18),
                                  (uint)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar18)
                                        >> 0x20),uVar8,(int)uVar8 >> 0x1f);
      uVar5 = (uint)uVar21;
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      uVar9 = uVar18;
      if ((int)uVar19 < (int)uVar5) {
        uVar21 = recovered_100020bc((uint)((longlong)(int)uVar19 * (longlong)(int)uVar8),
                                    (uint)((ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar8)
                                          >> 0x20),uVar16,(int)uVar16 >> 0x1f);
        uVar9 = 1;
        if (1 < (int)(uint)uVar21) {
          uVar9 = (uint)uVar21;
        }
        uVar5 = uVar19;
      }
      local_a8 = (int)(uVar19 - uVar5) / 2;
      for (uVar8 = 0; uVar8 != (uVar5 & ~((int)uVar5 >> 0x1f)); uVar8 = uVar8 + 1) {
        iVar17 = param_1[0x11];
        iVar6 = recovered_100018dc(iVar17 * uVar8,uVar5);
        iVar17 = iVar17 + -1;
        uVar16 = 0;
        if (iVar6 <= iVar17) {
          iVar17 = iVar6;
        }
        if (iVar6 < 0) {
          iVar17 = 0;
        }
        while ((uVar9 & ~((int)uVar9 >> 0x1f)) != uVar16) {
          iVar20 = param_1[4];
          iVar12 = param_1[0xd];
          iVar14 = param_1[0x10];
          iVar7 = recovered_100018dc(iVar14 * uVar16,uVar9);
          iVar6 = iVar14 + -1;
          if (iVar7 <= iVar14 + -1) {
            iVar6 = iVar7;
          }
          iVar6 = iVar14 * iVar17 + iVar6;
          iVar10 = (int)(uVar18 - uVar9) / 2 + uVar16;
          uVar16 = uVar16 + 1;
          if (iVar7 < 0) {
            iVar6 = iVar14 * iVar17;
          }
          iVar10 = local_a8 * iVar20 + iVar10;
          *(undefined1 *)((int)local_a0 + iVar10 * 4) = *(undefined1 *)(iVar12 + iVar6 * 4);
          *(undefined1 *)((int)local_a0 + iVar10 * 4 + 1) =
               *(undefined1 *)(param_1[0xd] + iVar6 * 4 + 1);
          *(undefined1 *)((int)local_a0 + iVar10 * 4 + 2) =
               *(undefined1 *)(param_1[0xd] + iVar6 * 4 + 2);
          *(undefined1 *)((int)local_a0 + iVar10 * 4 + 3) =
               *(undefined1 *)(param_1[0xd] + iVar6 * 4 + 3);
        }
        local_a8 = local_a8 + 1;
      }
      unaff_r8 = param_1[3];
    }
    pvVar4 = local_a0;
    local_c0 = 0;
    pcVar15 = DAT_10005d20;
    if ((char *)*param_1 != (char *)0x0) {
      pcVar15 = (char *)*param_1;
    }
    bVar1 = *(byte *)((int)param_1 + 0x22);
    bVar2 = *(byte *)((int)param_1 + 0x23);
    bVar3 = *(byte *)(param_1 + 9);
    iVar17 = recovered_100075a0(0xa4);
    if ((iVar17 != 0) && ((code *)*DAT_10005d14 != (code *)0x0)) {
      local_90 = 2;
      local_c0 = (*(code *)*DAT_10005d14)
                           (unaff_r8,pcVar15,pvVar4,uVar11,uVar13,uVar11 << 2,
                            (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3);
    }
    *(bool *)((int)param_1 + 0x21) = local_c0 != 0;
    local_9c = 0;
    recovered_1000497c(local_a0);
  }
  recovered_10004e60(&uStack_94);
  return;
}

#undef DAT_10005d10
#undef DAT_10005d14
#undef DAT_10005d18
#undef DAT_10005d1c
#undef DAT_10005d20
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_160
#undef uStack_94
#undef auStack_68

#undef DAT_10005da8
#define DAT_10005da8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4570U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x44ecU)
 */

undefined4 recovered_10005d24(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int unaff_r4;
  undefined4 uVar2;
  uint unaff_r6;

  uVar2 = 0;
  if (param_1 != 0) {
    unaff_r6 = *(uint *)(param_1 + 0xc);
    unaff_r4 = param_1;
  }
  if (param_1 != 0 && unaff_r6 != 0) {
    iVar1 = recovered_100075a0(0xb4);
    if (((iVar1 != 0) && ((code *)*DAT_10005da8 != (code *)0x0)) &&
       (iVar1 = (*(code *)*DAT_10005da8)(unaff_r6,(void *)(unaff_r4 + 0x48)), iVar1 != 0)) {
      uVar2 = 1;
      *(undefined4 *)(unaff_r4 + 0x18) = *(undefined4 *)(unaff_r4 + 0x70);
      *(undefined4 *)(unaff_r4 + 0x1c) = *(undefined4 *)(unaff_r4 + 0x74);
      if ((*(byte *)(unaff_r4 + 0x6c) & 1) == 0) {
        return 1;
      }
    }
    *(undefined1 *)(unaff_r4 + 0x20) = 1;
  }
  return uVar2;
}

#undef DAT_10005da8

#undef DAT_10005e28
#define DAT_10005e28 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x45f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4574U)
 */

void recovered_10005dac(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (uVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x1c);
      iVar1 = recovered_100075a0(0xb0);
      if ((iVar1 != 0) && ((code *)*DAT_10005e28 != (code *)0x0)) {
        (*(code *)*DAT_10005e28)(uVar2,iVar4,iVar3,1,1);
      }
    }
  }
  return;
}

#undef DAT_10005e28

#undef DAT_10005e98
#define DAT_10005e98 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4660U)))
#undef DAT_10005e9c
#define DAT_10005e9c (*(int * *)(((uintptr_t)pf_module_state + 0x4664U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x45f4U)
 */

void recovered_10005e2c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  void *pointer;
  uint uVar2;

  if (param_1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (*DAT_10005e9c == param_1) {
    *DAT_10005e9c = 0;
  }
  if (((uVar2 != 0) && (iVar1 = recovered_100075a0(0xa8), iVar1 != 0)) &&
     ((code *)*DAT_10005e98 != (code *)0x0)) {
    (*(code *)*DAT_10005e98)(uVar2);
  }
  recovered_100058d4((undefined4 *)param_1);
  recovered_1000497c(pointer);
  return;
}

#undef DAT_10005e98
#undef DAT_10005e9c

#undef DAT_10005fdc
#define DAT_10005fdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x47a4U)))
#undef DAT_10005fe0
#define DAT_10005fe0 (*(int *)(((uintptr_t)pf_module_state + 0x47a8U)))
#undef DAT_10005fe4
#define DAT_10005fe4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x47acU)))
#undef DAT_10005fe8
#define DAT_10005fe8 (*(void * *)(((uintptr_t)pf_module_state + 0x47b0U)))
#define local_a4 (*(void * *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(int *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4668U)
 */

int recovered_10005ea0(int *param_1)

{
  unsigned char frame[224] = {0};

  uint size;
  void *pvVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10005fe4;
  local_78 = DAT_10005fdc;
  local_70 = DAT_10005fe0 + ((uintptr_t)pf_module_state+0x46b4U);
  recovered_10004e48(&uStack_94);
  if (param_1 == (int *)0x0) {
    local_98 = 0;
    local_9c = 0;
    local_a0 = (void *)0x0;
    size = 1;
  }
  else {
    local_90 = 0xffffffff;
    recovered_100076e0(&local_a0,param_1);
    size = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10004978(size);
  local_90 = 2;
  pvVar1 = DAT_10005fe8;
  if (local_a0 != (void *)0x0) {
    pvVar1 = local_a0;
  }
  recovered_1000229c(local_a4,pvVar1,local_9c + 1);
  pvVar1 = local_a4;
  recovered_1000497c(local_a0);
  recovered_10004e60(&uStack_94);
  return (int)pvVar1;
}

#undef DAT_10005fdc
#undef DAT_10005fe0
#undef DAT_10005fe4
#undef DAT_10005fe8
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
#undef auStack_b0
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47b4U)
 */

void recovered_10005fec(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
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
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47e8U)
 */

void recovered_10006020(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

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
  *(int *)(param_1 + 0x14) = param_3;
  *(int *)(param_1 + 0x10) = iVar1;
  recovered_10006064(param_1);
  recovered_100058f4((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x482cU)
 */

void recovered_10006064(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = iVar1 + -1;
  if (iVar3 <= iVar1 + -1) {
    iVar2 = iVar3;
  }
  if (iVar3 < 0) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x14)) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  iVar3 = iVar1 + -1;
  if (iVar4 <= iVar1 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}


#undef DAT_100060f0
#define DAT_100060f0 (*(int *)(((uintptr_t)pf_module_state + 0x48b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4884U)
 */

void recovered_100060bc(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return;
  }
  iVar1 = DAT_100060f0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  recovered_100058a4((int *)param_1,iVar1);
  recovered_100058f4((int *)param_1);
  return;
}

#undef DAT_100060f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48bcU)
 */

void recovered_100060f4(int param_1,int *param_2,int param_3)

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
      recovered_10006160((int *)(param_1 + 0x34),puVar2,puVar2 + iVar1 * param_3 * 4);
      iVar3 = param_2[1];
      *(int *)(param_1 + 0x40) = *param_2;
      *(int *)(param_1 + 0x44) = iVar3;
      recovered_100058f4((int *)param_1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4928U)
 */

void recovered_10006160(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007c58(param_1,*param_1,param_2,param_3);
  return;
}


#undef DAT_100063c8
#define DAT_100063c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b90U)))
#define iStack_34 (*(int *)(frame + 84))
#define local_78 (*(uint *)(frame + 16))
#define pcStack_30 (*(code * *)(frame + 88))
#define local_70 (*(uint *)(frame + 24))
#define local_6c (*(uint *)(frame + 28))
#define local_68 (*(int *)(frame + 32))
#define local_60 (*(uint *)(frame + 40))
#define local_5c (*(uint *)(frame + 44))
#define local_58 (*(int *)(frame + 48))
#define local_50 (*(code * *)(frame + 56))
#define local_4c (*(uint *)(frame + 60))
#define local_48 (*(code * *)(frame + 64))
#define local_40 (*(code * *)(frame + 72))
#define local_3c (*(uint *)(frame + 76))
#define local_38 (*(undefined4 *)(frame + 80))
#define local_2c (*(uint *)(frame + 92))
#define local_28 (*(undefined4 *)(frame + 96))
#define pcStack_74 (*(code * *)(frame + 20))
#define pcStack_64 (*(code * *)(frame + 36))
#define iStack_54 (*(int *)(frame + 52))
#define iStack_44 (*(int *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4940U)
 */

void recovered_10006178(int param_1)

{
  unsigned char frame[168] = {0};

  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_r1;
  code *pcVar6;
  code *extraout_r1_00;
  code *extraout_r1_01;
  uint extraout_r2 = 0;
  code *pcVar7;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;

  if (param_1 == 0) {
    return;
  }
  pcStack_74 = *(code **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_70 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_6c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_78 = 0;
  local_68 = 0;
  pcStack_64 = pcStack_74;
  local_60 = local_70;
  local_5c = local_6c;
  recovered_10005d24(param_1);
  iVar2 = recovered_100075a0(0x80);
  puVar1 = DAT_100063c8;
  pcVar6 = extraout_r1;
  if (iVar2 != 0) {
    pcVar6 = (code *)DAT_100063c8[1];
  }
  if ((iVar2 == 0 || pcVar6 == (code *)0x0) || (iVar2 = (*pcVar6)(&local_78), iVar2 == 0))
  goto LAB_100061cc;
  iStack_54 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_50 = *(code **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_4c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  iVar2 = 0;
  local_58 = 0;
  local_48 = (code *)0x0;
  local_38 = 0;
  local_28 = 0;
  iStack_44 = iStack_54;
  local_40 = local_50;
  local_3c = local_4c;
  iStack_34 = iStack_54;
  pcStack_30 = local_50;
  local_2c = local_4c;
  iVar3 = recovered_100075a0(0x7c);
  pcVar6 = extraout_r1_00;
  if (iVar3 != 0) {
    pcVar6 = (code *)*puVar1;
  }
  iVar8 = extraout_r3;
  if (iVar3 == 0 || pcVar6 == (code *)0x0) {
LAB_100062c8:
    bVar11 = true;
    pcVar7 = (code *)0x0;
  }
  else {
    iVar3 = (*pcVar6)(&local_58);
    iVar8 = extraout_r3_00;
    if (iVar3 != 0) {
      pcVar6 = (code *)0x0;
      if (local_58 != 0 || iStack_54 != 0) {
        uVar4 = extraout_r2;
        if (local_50 != (code *)0x0) {
          uVar4 = local_4c;
        }
        pcVar6 = local_50;
        if (local_50 != (code *)0x0 && uVar4 != 0) {
          iVar8 = extraout_r3_00;
          if (local_48 != (code *)0x0) {
            iVar8 = iStack_44;
          }
          pcVar6 = local_48;
          if (((local_48 != (code *)0x0 && iVar8 != 0) && (local_40 == (code *)0x20)) &&
             (local_3c != 0)) {
            uVar5 = 0;
            if (iStack_34 != 0) {
              uVar5 = local_2c;
            }
            if ((iStack_34 != 0 && uVar5 != 0) && (local_48 <= (code *)(uVar4 >> 2))) {
              bVar11 = iStack_54 != 0;
              pcVar7 = (code *)0x0;
              if (!bVar11) {
                pcVar7 = local_48;
                iVar2 = iVar8;
              }
              goto LAB_100062cc;
            }
          }
        }
      }
      goto LAB_100062c8;
    }
    bVar11 = true;
    pcVar6 = extraout_r1_01;
    pcVar7 = (code *)0x0;
  }
LAB_100062cc:
  iVar3 = *(int *)(param_1 + 0x18);
  bVar10 = (local_78 & 2) != 0;
  iVar9 = *(int *)(param_1 + 0x1c);
  if (bVar10) {
    pcVar6 = pcStack_64;
    iVar8 = local_68;
  }
  if (bVar10 && (iVar8 != 0 || pcVar6 != (code *)0x0)) {
    *(int *)(param_1 + 0x28) = iVar8 + *(int *)(param_1 + 0x28);
    pcVar6 = pcVar6 + *(int *)(param_1 + 0x2c);
LAB_10006350:
    *(code **)(param_1 + 0x2c) = pcVar6;
  }
  else if (!bVar11 && (~local_78 & 1) == 0) {
    uVar4 = recovered_10007728(local_70,local_60,(int)pcVar7);
    uVar5 = recovered_10007728(local_6c,local_5c,iVar2);
    pcVar6 = (code *)((uVar5 - iVar9) + -0x26);
    *(uint *)(param_1 + 0x28) = (uVar4 - iVar3) + -0xe;
    goto LAB_10006350;
  }
  bVar11 = (*(uint *)(param_1 + 0x6c) & 6) == 2;
  *(byte *)(param_1 + 0x32) = bVar11 & (byte)(((uint)pcStack_74 & 4) >> 2);
  *(byte *)(param_1 + 0x30) = bVar11 & (byte)pcStack_74;
  *(byte *)(param_1 + 0x31) = bVar11 & (byte)(((uint)pcStack_74 & 2) >> 1);
  recovered_10006064(param_1);
LAB_100061cc:
  recovered_100063cc();
  if (*(char *)(param_1 + 0x21) == '\0') {
    recovered_100058f4((int *)param_1);
  }
  iVar2 = recovered_100075a0(0x9c);
  pcVar6 = (code *)0x0;
  if (iVar2 != 0) {
    pcVar6 = (code *)puVar1[8];
  }
  if (iVar2 != 0 && pcVar6 != (code *)0x0) {
    (*pcVar6)();
  }
  return;
}

#undef DAT_100063c8
#undef iStack_34
#undef local_78
#undef pcStack_30
#undef local_70
#undef local_6c
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_2c
#undef local_28
#undef pcStack_74
#undef pcStack_64
#undef iStack_54
#undef iStack_44

#undef DAT_10006720
#define DAT_10006720 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ee8U)))
#undef DAT_10006724
#define DAT_10006724 (*(int * *)(((uintptr_t)pf_module_state + 0x4eecU)))
#undef DAT_10006728
#define DAT_10006728 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ef0U)))
#undef DAT_1000672c
#define DAT_1000672c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ef4U)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ef8U)))
#undef DAT_10006734
#define DAT_10006734 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4efcU)))
#undef DAT_10006738
#define DAT_10006738 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f00U)))
#undef DAT_1000673c
#define DAT_1000673c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f04U)))
#undef DAT_10006740
#define DAT_10006740 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f08U)))
#undef DAT_10006744
#define DAT_10006744 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0cU)))
#undef DAT_10006748
#define DAT_10006748 (*(int *)(((uintptr_t)pf_module_state + 0x4f10U)))
#undef DAT_1000674c
#define DAT_1000674c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f14U)))
#undef DAT_10006750
#define DAT_10006750 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f18U)))
#undef DAT_10006754
#define DAT_10006754 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b94U)
 */

void recovered_100063cc(void)

{
  unsigned char frame[64] = {0};

  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  code *pcVar15;
  uint uVar16;
  int iVar17;

  recovered_100068dc();
  piVar3 = DAT_10006724;
  iVar17 = *DAT_10006724;
  if (((iVar17 == 0) ||
      (iVar12 = recovered_10005d24(iVar17), puVar10 = DAT_10006740, puVar9 = DAT_1000673c,
      puVar8 = DAT_10006738, puVar7 = DAT_10006734, puVar6 = DAT_10006730, puVar5 = DAT_1000672c,
      puVar4 = DAT_10006728, puVar2 = DAT_10006720, iVar12 == 0)) ||
     ((*(uint *)(iVar17 + 0x6c) & 6) != 2)) {
    return;
  }
switchD_10006660_caseD_49:
  do {
    do {
      iVar17 = recovered_100075a0(0x2c);
      pcVar15 = (code *)0x0;
      if (iVar17 != 0) {
        pcVar15 = (code *)*puVar2;
      }
      if (iVar17 == 0 || pcVar15 == (code *)0x0) {
        return;
      }
      uVar11 = (*pcVar15)();
      uVar13 = (uint)uVar11;
      if (uVar13 == 0) {
        return;
      }
      iVar17 = *piVar3;
      uVar1 = uVar11 >> 8;
      if ((uVar11 & 0xff) == 0) goto LAB_1000649c;
    } while (iVar17 == 0);
    if (piVar3[1] != 2) {
      if (piVar3[1] == 1) {
        piVar3[1] = (uint)((uVar13 & 0xff) == 0x5b) << 1;
        goto switchD_100065c0_caseD_5;
      }
      uVar16 = uVar13 & 0xff;
      if (uVar16 == 0x1b) {
        piVar3[1] = 1;
        goto switchD_100065c0_caseD_5;
      }
      if ((uVar13 - 0x20 & 0xff) < 0x5f) {
        *DAT_10006744 = (char)uVar11;
        if (0x19 < (uVar13 - 0x61 & 0xff)) {
          if (0x19 < (uVar13 - 0x41 & 0xff)) {
            if ((uVar13 - 0x30 & 0xff) < 10) {
              puVar14 = *(undefined1 **)(DAT_10006748 + (uVar13 + 0xd0 & 0xff) * 4);
              goto LAB_1000663c;
            }
            goto LAB_100065ac;
          }
          uVar13 = uVar13 | 0x20;
        }
        recovered_1000778c((int)(char)uVar13);
        goto switchD_100065c0_caseD_5;
      }
LAB_100065ac:
      switch((uintptr_t)(uVar13 & 0xff)) {
      case 3:
      case 4:
        *(undefined1 *)(iVar17 + 0x20) = 1;
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xb:
      case 0xc:
        goto switchD_100065c0_caseD_5;
      case 8:
switchD_100065c0_caseD_8:
        puVar14 = puVar8;
        break;
      case 10:
      case 0xd:
        puVar14 = puVar9;
        break;
      default:
        if (uVar16 == 0x20) {
          puVar14 = DAT_1000674c;
        }
        else if (uVar16 == 0x2d) {
          puVar14 = DAT_10006750;
        }
        else {
          if (uVar16 != 0x2e) {
            if (uVar16 == 0x7f) goto switchD_100065c0_caseD_8;
            goto switchD_100065c0_caseD_5;
          }
          puVar14 = DAT_10006754;
        }
      }
      goto LAB_1000663c;
    }
    piVar3[1] = 0;
    switch((uintptr_t)(uVar13 & 0xff)) {
    case 0x41:
      puVar14 = puVar4;
      goto LAB_1000663c;
    case 0x42:
      puVar14 = puVar5;
LAB_1000663c:
      *puVar14 = 1;
      break;
    case 0x43:
      *puVar6 = 1;
      break;
    case 0x44:
      *puVar7 = 1;
    }
switchD_100065c0_caseD_5:
    iVar17 = *piVar3;
  } while (iVar17 == 0);
  goto LAB_1000664c;
LAB_1000649c:
  if (iVar17 == 0) goto switchD_10006660_caseD_49;
  switch((uintptr_t)(uVar1)) {
  case 1:
switchD_10006660_caseD_48:
    *puVar4 = 1;
    goto switchD_10006660_caseD_49;
  case 2:
switchD_10006660_caseD_50:
    *puVar5 = 1;
    goto switchD_10006660_caseD_49;
  case 3:
switchD_10006660_caseD_4d:
    *puVar6 = 1;
    goto switchD_10006660_caseD_49;
  case 4:
switchD_10006660_caseD_4b:
    *puVar7 = 1;
    goto switchD_10006660_caseD_49;
  }
  if (uVar1 != 0x17) {
LAB_1000664c:
    switch((uintptr_t)(uVar1)) {
    case 0x48:
      goto switchD_10006660_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_10006660_caseD_49;
    case 0x4b:
      goto switchD_10006660_caseD_4b;
    case 0x4d:
      goto switchD_10006660_caseD_4d;
    case 0x50:
      goto switchD_10006660_caseD_50;
    case 0x53:
      *puVar10 = 1;
      goto switchD_10006660_caseD_49;
    default:
      if (uVar1 != 1) {
        if (uVar1 == 0xe) {
          *puVar8 = 1;
        }
        else if (uVar1 == 0x1c) {
          *puVar9 = 1;
        }
        goto switchD_10006660_caseD_49;
      }
    }
  }
  *(undefined1 *)(iVar17 + 0x20) = 1;
  goto switchD_10006660_caseD_49;
}

#undef DAT_10006720
#undef DAT_10006724
#undef DAT_10006728
#undef DAT_1000672c
#undef DAT_10006730
#undef DAT_10006734
#undef DAT_10006738
#undef DAT_1000673c
#undef DAT_10006740
#undef DAT_10006744
#undef DAT_10006748
#undef DAT_1000674c
#undef DAT_10006750
#undef DAT_10006754

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f20U)
 */

byte recovered_10006758(int param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    recovered_10005d24(param_1);
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  return bVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f50U)
 */

void recovered_10006788(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 0x23) = param_3;
  *(undefined1 *)(param_1 + 0x22) = param_2;
  recovered_100058f4((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f68U)
 */

int * recovered_100067a0(int param_1)

{
  unsigned char frame[64] = {0};

  uint size;
  undefined2 uVar1;
  int *piVar2;
  void *dst;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;

  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar2 = recovered_1000494c(0x18);
  iVar7 = *(int *)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x44);
  if (iVar7 < 1) {
    iVar7 = *(int *)(param_1 + 0x10);
  }
  if (iVar5 < 1) {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  *piVar2 = iVar7;
  piVar2[1] = iVar5;
  size = iVar7 * iVar5 * 4;
  dst = recovered_10004978(size);
  iVar3 = *(int *)(param_1 + 0x38);
  piVar2[2] = (int)dst;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    bVar8 = iVar3 == iVar7;
    if (bVar8) {
      iVar3 = *(int *)(param_1 + 0x44);
    }
    if (bVar8 && iVar3 == iVar5) {
      recovered_1000229c(dst,*(void **)(param_1 + 0x34),size);
      goto LAB_1000685c;
    }
  }
  for (uVar4 = 0; uVar4 < size; uVar4 = uVar4 + 4) {
    puVar6 = (undefined1 *)((int)dst + uVar4);
    *puVar6 = *(undefined1 *)(param_1 + 0x22);
    uVar1 = *(undefined2 *)(param_1 + 0x23);
    puVar6[3] = 0xff;
    *(undefined2 *)(puVar6 + 1) = uVar1;
  }
LAB_1000685c:
  piVar2[5] = 0;
  piVar2[4] = 0;
  piVar2[3] = 0;
  return piVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5040U)
 */

void recovered_10006878(int param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x2c);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5084U)
 */

byte recovered_100068bc(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + param_2 + 0x30);
  }
  return bVar1 & 1;
}


#undef DAT_10006a5c
#define DAT_10006a5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006a60
#define DAT_10006a60 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006a64
#define DAT_10006a64 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006a68
#define DAT_10006a68 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006a6c
#define DAT_10006a6c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006a74
#define DAT_10006a74 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006a84
#define DAT_10006a84 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006a88
#define DAT_10006a88 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x525cU)))
#undef DAT_10006a98
#define DAT_10006a98 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5260U)))
#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5264U)))
#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5268U)))
#undef DAT_10006aa4
#define DAT_10006aa4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x526cU)))
#undef DAT_10006aa8
#define DAT_10006aa8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5270U)))
#undef DAT_10006aac
#define DAT_10006aac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5274U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5278U)))
#undef DAT_10006ab4
#define DAT_10006ab4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x527cU)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5280U)))
#undef DAT_10006abc
#define DAT_10006abc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10006ac0
#define DAT_10006ac0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5288U)))
#undef DAT_10006ac4
#define DAT_10006ac4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef DAT_10006acc
#define DAT_10006acc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5294U)))
#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5298U)))
#undef DAT_10006ad4
#define DAT_10006ad4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x529cU)))
#undef DAT_10006ad8
#define DAT_10006ad8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a0U)))
#undef DAT_10006adc
#define DAT_10006adc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a4U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a8U)))
#undef DAT_10006ae4
#define DAT_10006ae4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52acU)))
#undef DAT_10006ae8
#define DAT_10006ae8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b0U)))
#undef DAT_10006aec
#define DAT_10006aec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b4U)))
#undef DAT_10006af0
#define DAT_10006af0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b8U)))
#undef DAT_10006af4
#define DAT_10006af4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52bcU)))
#undef DAT_10006af8
#define DAT_10006af8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c0U)))
#undef DAT_10006afc
#define DAT_10006afc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c4U)))
#undef DAT_10006b00
#define DAT_10006b00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c8U)))
#undef DAT_10006b04
#define DAT_10006b04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52ccU)))
#undef DAT_10006b08
#define DAT_10006b08 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d0U)))
#undef DAT_10006b0c
#define DAT_10006b0c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d4U)))
#undef DAT_10006b10
#define DAT_10006b10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d8U)))
#undef DAT_10006b14
#define DAT_10006b14 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50a4U)
 */

void recovered_100068dc(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006a5c = 0;
  *DAT_10006a60 = 0;
  *DAT_10006a64 = 0;
  *DAT_10006a68 = 0;
  *DAT_10006a6c = 0;
  *DAT_10006a70 = 0;
  *DAT_10006a74 = 0;
  *DAT_10006a78 = 0;
  *DAT_10006a7c = 0;
  *DAT_10006a80 = 0;
  *DAT_10006a84 = 0;
  *DAT_10006a88 = 0;
  *DAT_10006a8c = 0;
  *DAT_10006a90 = 0;
  *DAT_10006a94 = 0;
  *DAT_10006a98 = 0;
  *DAT_10006a9c = 0;
  *DAT_10006aa0 = 0;
  *DAT_10006aa4 = 0;
  *DAT_10006aa8 = 0;
  *DAT_10006aac = 0;
  *DAT_10006ab0 = 0;
  *DAT_10006ab4 = 0;
  *DAT_10006ab8 = 0;
  *DAT_10006abc = 0;
  *DAT_10006ac0 = 0;
  *DAT_10006ac4 = 0;
  *DAT_10006ac8 = 0;
  *DAT_10006acc = 0;
  *DAT_10006ad0 = 0;
  *DAT_10006ad4 = 0;
  *DAT_10006ad8 = 0;
  *DAT_10006adc = 0;
  *DAT_10006ae0 = 0;
  *DAT_10006ae4 = 0;
  *DAT_10006ae8 = 0;
  *DAT_10006aec = 0;
  *DAT_10006af0 = 0;
  *DAT_10006af4 = 0;
  *DAT_10006af8 = 0;
  *DAT_10006afc = 0;
  *DAT_10006b00 = 0;
  *DAT_10006b04 = 0;
  *DAT_10006b08 = 0;
  *DAT_10006b0c = 0;
  *DAT_10006b10 = 0;
  *DAT_10006b14 = 0;
  return;
}

#undef DAT_10006a5c
#undef DAT_10006a60
#undef DAT_10006a64
#undef DAT_10006a68
#undef DAT_10006a6c
#undef DAT_10006a70
#undef DAT_10006a74
#undef DAT_10006a78
#undef DAT_10006a7c
#undef DAT_10006a80
#undef DAT_10006a84
#undef DAT_10006a88
#undef DAT_10006a8c
#undef DAT_10006a90
#undef DAT_10006a94
#undef DAT_10006a98
#undef DAT_10006a9c
#undef DAT_10006aa0
#undef DAT_10006aa4
#undef DAT_10006aa8
#undef DAT_10006aac
#undef DAT_10006ab0
#undef DAT_10006ab4
#undef DAT_10006ab8
#undef DAT_10006abc
#undef DAT_10006ac0
#undef DAT_10006ac4
#undef DAT_10006ac8
#undef DAT_10006acc
#undef DAT_10006ad0
#undef DAT_10006ad4
#undef DAT_10006ad8
#undef DAT_10006adc
#undef DAT_10006ae0
#undef DAT_10006ae4
#undef DAT_10006ae8
#undef DAT_10006aec
#undef DAT_10006af0
#undef DAT_10006af4
#undef DAT_10006af8
#undef DAT_10006afc
#undef DAT_10006b00
#undef DAT_10006b04
#undef DAT_10006b08
#undef DAT_10006b0c
#undef DAT_10006b10
#undef DAT_10006b14

#undef DAT_10006a5c
#define DAT_10006a5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006a60
#define DAT_10006a60 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006a64
#define DAT_10006a64 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006a68
#define DAT_10006a68 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006a6c
#define DAT_10006a6c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006a74
#define DAT_10006a74 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006a84
#define DAT_10006a84 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006a88
#define DAT_10006a88 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x525cU)))
#undef DAT_10006a98
#define DAT_10006a98 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5260U)))
#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5264U)))
#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5268U)))
#undef DAT_10006aa4
#define DAT_10006aa4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x526cU)))
#undef DAT_10006aa8
#define DAT_10006aa8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5270U)))
#undef DAT_10006aac
#define DAT_10006aac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5274U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5278U)))
#undef DAT_10006ab4
#define DAT_10006ab4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x527cU)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5280U)))
#undef DAT_10006abc
#define DAT_10006abc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_10006ac0
#define DAT_10006ac0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5288U)))
#undef DAT_10006ac4
#define DAT_10006ac4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef DAT_10006acc
#define DAT_10006acc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5294U)))
#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5298U)))
#undef DAT_10006ad4
#define DAT_10006ad4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x529cU)))
#undef DAT_10006ad8
#define DAT_10006ad8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a0U)))
#undef DAT_10006adc
#define DAT_10006adc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a4U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52a8U)))
#undef DAT_10006ae4
#define DAT_10006ae4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52acU)))
#undef DAT_10006ae8
#define DAT_10006ae8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b0U)))
#undef DAT_10006aec
#define DAT_10006aec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b4U)))
#undef DAT_10006af0
#define DAT_10006af0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b8U)))
#undef DAT_10006af4
#define DAT_10006af4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52bcU)))
#undef DAT_10006af8
#define DAT_10006af8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c0U)))
#undef DAT_10006afc
#define DAT_10006afc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c4U)))
#undef DAT_10006b00
#define DAT_10006b00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52c8U)))
#undef DAT_10006b04
#define DAT_10006b04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52ccU)))
#undef DAT_10006b08
#define DAT_10006b08 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d0U)))
#undef DAT_10006b0c
#define DAT_10006b0c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d4U)))
#undef DAT_10006b10
#define DAT_10006b10 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52d8U)))
#undef DAT_10006b14
#define DAT_10006b14 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52e0U)
 */

void recovered_10006b18(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006a5c = 0;
  *DAT_10006a60 = 0;
  *DAT_10006a64 = 0;
  *DAT_10006a68 = 0;
  *DAT_10006a6c = 0;
  *DAT_10006a70 = 0;
  *DAT_10006a74 = 0;
  *DAT_10006a78 = 0;
  *DAT_10006a7c = 0;
  *DAT_10006a80 = 0;
  *DAT_10006a84 = 0;
  *DAT_10006a88 = 0;
  *DAT_10006a8c = 0;
  *DAT_10006a90 = 0;
  *DAT_10006a94 = 0;
  *DAT_10006a98 = 0;
  *DAT_10006a9c = 0;
  *DAT_10006aa0 = 0;
  *DAT_10006aa4 = 0;
  *DAT_10006aa8 = 0;
  *DAT_10006aac = 0;
  *DAT_10006ab0 = 0;
  *DAT_10006ab4 = 0;
  *DAT_10006ab8 = 0;
  *DAT_10006abc = 0;
  *DAT_10006ac0 = 0;
  *DAT_10006ac4 = 0;
  *DAT_10006ac8 = 0;
  *DAT_10006acc = 0;
  *DAT_10006ad0 = 0;
  *DAT_10006ad4 = 0;
  *DAT_10006ad8 = 0;
  *DAT_10006adc = 0;
  *DAT_10006ae0 = 0;
  *DAT_10006ae4 = 0;
  *DAT_10006ae8 = 0;
  *DAT_10006aec = 0;
  *DAT_10006af0 = 0;
  *DAT_10006af4 = 0;
  *DAT_10006af8 = 0;
  *DAT_10006afc = 0;
  *DAT_10006b00 = 0;
  *DAT_10006b04 = 0;
  *DAT_10006b08 = 0;
  *DAT_10006b0c = 0;
  *DAT_10006b10 = 0;
  *DAT_10006b14 = 0;
  return;
}

#undef DAT_10006a5c
#undef DAT_10006a60
#undef DAT_10006a64
#undef DAT_10006a68
#undef DAT_10006a6c
#undef DAT_10006a70
#undef DAT_10006a74
#undef DAT_10006a78
#undef DAT_10006a7c
#undef DAT_10006a80
#undef DAT_10006a84
#undef DAT_10006a88
#undef DAT_10006a8c
#undef DAT_10006a90
#undef DAT_10006a94
#undef DAT_10006a98
#undef DAT_10006a9c
#undef DAT_10006aa0
#undef DAT_10006aa4
#undef DAT_10006aa8
#undef DAT_10006aac
#undef DAT_10006ab0
#undef DAT_10006ab4
#undef DAT_10006ab8
#undef DAT_10006abc
#undef DAT_10006ac0
#undef DAT_10006ac4
#undef DAT_10006ac8
#undef DAT_10006acc
#undef DAT_10006ad0
#undef DAT_10006ad4
#undef DAT_10006ad8
#undef DAT_10006adc
#undef DAT_10006ae0
#undef DAT_10006ae4
#undef DAT_10006ae8
#undef DAT_10006aec
#undef DAT_10006af0
#undef DAT_10006af4
#undef DAT_10006af8
#undef DAT_10006afc
#undef DAT_10006b00
#undef DAT_10006b04
#undef DAT_10006b08
#undef DAT_10006b0c
#undef DAT_10006b10
#undef DAT_10006b14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52e4U)
 */

void recovered_10006b1c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52e8U)
 */

void recovered_10006b20(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52ecU)
 */

undefined4 recovered_10006b24(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52f4U)
 */

void recovered_10006b2c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52f8U)
 */

undefined4 recovered_10006b30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000701c
#define DAT_1000701c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef DAT_10007020
#define DAT_10007020 (*(int *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_10007024
#define DAT_10007024 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x57ecU)))
#undef DAT_10007028
#define DAT_10007028 (*(char * *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_1000702c
#define DAT_1000702c (*(char * *)(((uintptr_t)pf_module_state + 0x57f4U)))
#undef DAT_10007030
#define DAT_10007030 (*(char * *)(((uintptr_t)pf_module_state + 0x57f8U)))
#undef DAT_10007034
#define DAT_10007034 (*(char * *)(((uintptr_t)pf_module_state + 0x57fcU)))
#define local_104 (*(int * *)(frame + 28))
#define local_100 (*(int * *)(frame + 32))
#define local_fc (*(char * *)(frame + 36))
#define local_f8 (*(char * *)(frame + 40))
#define local_f4 (*(char * *)(frame + 44))
#define local_f0 (*(char * *)(frame + 48))
#define auStack_110 (*(undefined1 (*)[12])(frame + 16))
#define local_ec (*(uint *)(frame + 52))
#define local_e8 (*(char * *)(frame + 56))
#define local_e4 (*(void * *)(frame + 60))
#define local_e0 (*(char * *)(frame + 64))
#define local_dc (*(void * *)(frame + 68))
#define local_d4 (*(char * (*)[3])(frame + 76))
#define local_c8 (*(char * *)(frame + 88))
#define local_c0 (*(uint *)(frame + 96))
#define local_bc (*(int *)(frame + 100))
#define local_b8 (*(int *)(frame + 104))
#define local_b4 (*(undefined4 *)(frame + 108))
#define local_ac (*(void * *)(frame + 116))
#define local_a8 (*(int *)(frame + 120))
#define local_a0 (*(int *)(frame + 128))
#define iStack_c4 (*(int *)(frame + 92))
#define local_9c (*(char * *)(frame + 132))
#define local_98 (*(undefined4 *)(frame + 136))
#define local_90 (*(undefined4 *)(frame + 144))
#define local_7c (*(undefined4 *)(frame + 164))
#define local_78 (*(undefined4 *)(frame + 168))
#define local_74 (*(undefined1 * *)(frame + 172))
#define local_70 (*(int *)(frame + 176))
#define local_6c (*(undefined1 * *)(frame + 180))
#define uStack_94 (*(undefined4 *)(frame + 140))
#define auStack_68 (*(undefined1 (*)[8])(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5300U)
 */

uint recovered_10006b38(char *param_1,int *param_2,int *param_3)

{
  unsigned char frame[320] = {0};

  uint size;
  bool bVar1;
  void *extraout_r0;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_110;
  local_7c = *DAT_10007024;
  local_78 = DAT_1000701c;
  local_70 = DAT_10007020 + ((uintptr_t)pf_module_state+0x5354U);
  recovered_10004e48(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (char *)0x0) {
    pvVar5 = (void *)0x0;
    goto LAB_10006f4c;
  }
  iStack_c4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_c0 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_bc = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pvVar5 = (void *)0x0;
  local_c8 = (char *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_90 = 0xffffffff;
  local_104 = param_2;
  local_100 = param_3;
  recovered_10007c18(&local_e0,(int)param_1);
  local_98 = 0;
  local_9c = (char *)0x0;
  local_a0 = 0;
  local_ec = 0;
  if (local_dc != (void *)0x0) {
    pcVar4 = local_e0;
    if (local_e0 == (char *)0x0) {
      pcVar4 = DAT_10007028;
    }
    local_ec = (uint)(*pcVar4 == '/');
  }
  local_f4 = DAT_10007028;
  local_f0 = DAT_1000702c;
  local_e8 = DAT_10007030;
  local_f8 = param_1;
  do {
    if (local_dc <= pvVar5) break;
    recovered_100077b4((int *)&local_e0,'/',(uint)pvVar5);
    local_90 = 1;
    pvVar2 = local_dc;
    if (extraout_r0 != (void *)0xffffffff) {
      pvVar2 = extraout_r0;
    }
    local_e4 = extraout_r0;
    recovered_100077ec(&local_ac,(int *)&local_e0,(uint)pvVar5,(int)pvVar2 - (int)pvVar5);
    if ((local_a8 != 0) && (bVar1 = recovered_10007084((int *)&local_ac,local_f0), bVar1)) {
      bVar1 = recovered_1000783c((int *)&local_ac,local_e8);
      if (bVar1) {
        if ((local_9c == (char *)0x0) ||
           (bVar1 = recovered_10007084((int *)(local_a0 + (int)local_9c * 0xc + -0xc),local_e8),
           !bVar1)) {
          if (local_ec == 0) goto LAB_10006d10;
        }
        else {
          recovered_10007880(&local_a0);
        }
      }
      else {
LAB_10006d10:
        local_90 = 2;
        recovered_100079a0(&local_a0,(int *)&local_ac);
      }
    }
    recovered_1000497c(local_ac);
    pvVar5 = (void *)((int)local_e4 + 1);
  } while (local_e4 != (void *)0xffffffff);
  local_90 = 3;
  local_fc = DAT_10007034;
  pcVar4 = local_f4;
  if (local_ec != 0) {
    pcVar4 = DAT_10007034;
  }
  recovered_10007c18(&local_ac,(int)pcVar4);
  pvVar5 = (void *)0x0;
  pcVar4 = (char *)0x0;
  while (pcVar4 < local_9c) {
    local_e8 = pcVar4;
    local_e4 = pvVar5;
    if (pcVar4 != (char *)0x0 || (local_ec & 1) != 0) {
      local_90 = 4;
      recovered_100078b4((int *)&local_ac,0x2f);
    }
    local_90 = 5;
    recovered_10007918((int *)&local_ac,(int *)(local_a0 + (int)local_e4));
    pvVar5 = (void *)((int)local_e4 + 0xc);
    pcVar4 = local_e8 + 1;
  }
  if (local_a8 == 0) {
    local_90 = 6;
    pcVar4 = local_f0;
    if (local_ec != 0) {
      pcVar4 = local_fc;
    }
    recovered_10007c18(local_d4,(int)pcVar4);
  }
  else {
    local_90 = 7;
    recovered_100076e0(local_d4,(int *)&local_ac);
  }
  recovered_1000497c(local_ac);
  recovered_10007bb0(&local_a0);
  recovered_1000497c(local_e0);
  local_90 = 8;
  pcVar4 = local_f4;
  if (local_d4[0] != (char *)0x0) {
    pcVar4 = local_d4[0];
  }
  iVar3 = recovered_10007038(pcVar4,&local_c8);
  pcVar4 = local_f8;
  if (iVar3 == 0) {
    bVar1 = recovered_10007084((int *)local_d4,local_f8);
    pvVar5 = (void *)0x0;
    if (bVar1) {
      local_90 = 9;
      iVar3 = recovered_10007038(pcVar4,&local_c8);
      pvVar5 = (void *)0x0;
      if (iVar3 != 0) goto LAB_10006e6c;
    }
  }
  else {
LAB_10006e6c:
    pvVar5 = (void *)0x0;
    if (iStack_c4 == 0) {
      size = 0;
      if (local_c8 != (char *)0x0) {
        size = local_c0;
      }
      if (local_c8 != (char *)0x0 && size != 0) {
        iVar3 = 0;
        if (local_bc != 0) {
          iVar3 = local_b8;
        }
        if (local_bc != 0 && iVar3 != 0) {
          local_90 = 10;
          local_e8 = local_c8;
          local_e4 = recovered_10004978(size);
          local_90 = 0xb;
          recovered_1000229c(local_e4,local_e8,local_c0);
          local_90 = 0xc;
          recovered_10007098(local_e8);
          if (local_104 != (int *)0x0) {
            *local_104 = local_bc;
          }
          pvVar5 = local_e4;
          if (local_100 != (int *)0x0) {
            *local_100 = local_b8;
          }
        }
      }
    }
  }
  recovered_1000497c(local_d4[0]);
LAB_10006f4c:
  recovered_10004e60(&uStack_94);
  return (uint)pvVar5;
}

#undef DAT_1000701c
#undef DAT_10007020
#undef DAT_10007024
#undef DAT_10007028
#undef DAT_1000702c
#undef DAT_10007030
#undef DAT_10007034
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef auStack_110
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_c8
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a0
#undef iStack_c4
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10007080
#define DAT_10007080 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5848U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5800U)
 */

undefined4 recovered_10007038(char *param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100075a0(0x58);
  if ((iVar1 == 0) || ((code *)*DAT_10007080 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x583cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)*DAT_10007080)(param_1,param_2);
  return iVar1;
}

#undef DAT_10007080

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x584cU)
 */

bool recovered_10007084(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000783c(param_1,param_2);
  return !bVar1;
}


#undef DAT_100070d4
#define DAT_100070d4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x589cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5860U)
 */

void recovered_10007098(void *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100075a0(0x50);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_100070d4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5894U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_100070d4)(param_1);
  return;
}

#undef DAT_100070d4

#undef DAT_10007120
#define DAT_10007120 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x58e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58a0U)
 */

undefined4 recovered_100070d8(char *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  void *pvVar2;
  float extraout_s0 = 0;

  iVar1 = recovered_100075a0(0x68);
  if ((iVar1 == 0) || ((code *)*DAT_10007120 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x58dcU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (*(code *)*DAT_10007120)(param_1,extraout_s0);
  return pvVar2;
}

#undef DAT_10007120

#undef DAT_10007168
#define DAT_10007168 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5930U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58ecU)
 */

void recovered_10007124(void *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  float extraout_s0 = 0;

  iVar1 = recovered_100075a0(0x70);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_10007168 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5928U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_10007168)(param_1,extraout_s0);
  return;
}

#undef DAT_10007168

#undef DAT_100072d0
#define DAT_100072d0 (*(double *)(((uintptr_t)pf_module_state + 0x5a98U)))
#undef DAT_100072d8
#define DAT_100072d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5aa0U)))
#define local_40 (*(longlong *)(frame + 16))
#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5934U)
 */

int * recovered_1000716c(int param_1,int param_2,uint param_3,int param_4,uint param_5,
                        double param_6)

{
  unsigned char frame[112] = {0};

  bool bVar1;
  void *src;
  int iVar2;
  void *dst;
  int *piVar3;
  char *unaff_r5;
  uint uVar4;
  double dVar5;

  local_38 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_34 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar3 = (int *)0x0;
  local_40 = (ulonglong)*(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4) << 0x20;
  if (param_1 != 0) {
    unaff_r5 = (char *)param_2;
  }
  local_30 = 0;
  if (param_1 != 0 && param_2 != 0) {
    bVar1 = param_6 < 0.0;
    if (1.0 < param_6) {
      param_6 = 1.0;
    }
    dVar5 = param_6 * DAT_100072d0;
    if (bVar1) {
      dVar5 = 0.0;
    }
    iVar2 = recovered_100075a0(0x74);
    if ((iVar2 != 0) && ((code *)*DAT_100072d8 != (code *)0x0)) {
      uVar4 = VectorFloatToUnsigned(dVar5,3);
      iVar2 = (*(code *)*DAT_100072d8)
                        ((void *)param_1,unaff_r5,param_3,param_4,param_5,uVar4,&local_40);
      uVar4 = local_38;
      if (iVar2 != 0) {
        src = (void *)local_40;
        if ((void *)local_40 != (void *)0x0) {
          param_4 = local_34;
        }
        if (((void *)local_40 != (void *)0x0 && param_4 != 0) &&
           (iVar2 = (int)local_30, (int)local_30 != 0)) {
          piVar3 = recovered_1000494c(0x18);
          *piVar3 = local_34;
          piVar3[1] = (int)local_30;
          if (uVar4 == 0) {
            uVar4 = param_4 * iVar2 * 4;
          }
          dst = recovered_10004978(uVar4);
          piVar3[2] = (int)dst;
          recovered_1000229c(dst,src,uVar4);
          piVar3[5] = 0;
          piVar3[4] = 0;
          piVar3[3] = 0;
        }
        else if ((void *)local_40 == (void *)0x0) {
          return (int *)0x0;
        }
        recovered_10007098(src);
      }
    }
  }
  return piVar3;
}

#undef DAT_100072d0
#undef DAT_100072d8
#undef local_40
#undef local_38
#undef local_34
#undef local_30

#undef DAT_10007318
#define DAT_10007318 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5ae0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5aa4U)
 */

void recovered_100072dc(void *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100075a0(0x78);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_10007318 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5ad8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_10007318)(param_1);
  return;
}

#undef DAT_10007318

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ae4U)
 */

undefined4 * recovered_1000731c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000497c((void *)*param_1);
  return param_1;
}


#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define iStack_24 (*(int *)(frame + 20))
#define local_1c (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b00U)
 */

void recovered_10007338(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *pointer;
  uint uVar2;
  int iVar3;
  int in_r3;

  local_1c = 0;
  iVar1 = recovered_10007464(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_100074b8(param_1);
    }
    else {
      recovered_100074e8(param_1,param_3);
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
    recovered_10007550(&local_28,*param_1 + local_1c,uVar2,in_r3);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = pointer;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_1000497c(pointer);
  }
  return;
}

#undef local_28
#undef local_20
#undef iStack_24
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5bfcU)
 */

int recovered_10007434(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x5c2cU)
 */

undefined4 recovered_10007464(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x5c80U)
 */

void recovered_100074b8(int *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_10007584(0);
    param_1[2] = 0;
    *param_1 = (int)pcVar1;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5cb0U)
 */

void recovered_100074e8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pcVar1 = recovered_10007584(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      pcVar1[uVar2] = *(char *)(*param_1 + uVar2);
    }
    pcVar1[param_1[1]] = '\0';
    recovered_1000497c((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pcVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d18U)
 */

undefined4 * recovered_10007550(undefined4 *param_1,int param_2,uint param_3,int in_r3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_10007338(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d4cU)
 */

char * recovered_10007584(uint size)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = recovered_1000494c(size + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


#undef DAT_100075ec
#define DAT_100075ec (*(int *)(((uintptr_t)pf_module_state + 0x5db4U)))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d68U)
 */

undefined4 recovered_100075a0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  iVar1 = Ram40010800;
  uVar3 = 0;
  if ((iVar1 == DAT_100075ec) && (iVar1 = Ram40010804, iVar1 != 0)) {
    uVar2 = Ram40010808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram40010808;
    if (param_1 + 4U <= uVar2) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_100075ec
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef Ram40010800
#undef Ram40010804
#undef Ram40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5db8U)
 */

undefined4 * recovered_100075f0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000497c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ddcU)
 */

void recovered_10007614(int *param_1,uint param_2)

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
    recovered_10007670(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x5e38U)
 */

void recovered_10007670(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_100076d0(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_1000497c((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e98U)
 */

void recovered_100076d0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000494c(param_1);
  return;
}


#undef DAT_10007724
#define DAT_10007724 (*(int *)(((uintptr_t)pf_module_state + 0x5eecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ea8U)
 */

undefined4 * recovered_100076e0(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_10007724;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_10007338(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_10007724

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ef0U)
 */

uint recovered_10007728(uint param_1,uint param_2,int param_3)

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
    uVar3 = recovered_10001f64((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
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


#undef DAT_100077b0
#define DAT_100077b0 (*(int *)(((uintptr_t)pf_module_state + 0x5f78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f54U)
 */

void recovered_1000778c(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0x1a) {
    **(undefined1 **)(DAT_100077b0 + uVar1 * 4) = 1;
    return;
  }
  return;
}

#undef DAT_100077b0

#undef DAT_100077e8
#define DAT_100077e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5fb0U)))
#define aiStack_210 (*(int (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f7cU)
 */

void recovered_100077b4(int *param_1,char param_2,uint param_3)

{
  unsigned char frame[576] = {0};


  recovered_10007934(aiStack_210 + 0x80,param_2,param_3);
  return;
}

#undef DAT_100077e8
#undef aiStack_210

#undef DAT_10007838
#define DAT_10007838 (*(int *)(((uintptr_t)pf_module_state + 0x6000U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fb4U)
 */

void recovered_100077ec(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

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
  iVar2 = DAT_10007838;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  recovered_10007550(param_1,iVar2 + param_3,uVar3,param_4);
  return;
}

#undef DAT_10007838

#undef DAT_1000787c
#define DAT_1000787c (*(char * *)(((uintptr_t)pf_module_state + 0x6044U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6004U)
 */

bool recovered_1000783c(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar3 = param_1[1];
  pcVar4 = DAT_1000787c;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  iVar2 = recovered_10007434((int)param_2);
  bVar1 = recovered_10007968(pcVar4,iVar3,param_2,iVar2);
  return bVar1;
}

#undef DAT_1000787c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6048U)
 */

void recovered_10007880(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000731c((undefined4 *)(*param_1 + param_1[1] * 0xc + -0xc));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x607cU)
 */

void recovered_100078b4(int *param_1,undefined1 param_2)

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
    recovered_100074e8(param_1,uVar2);
  }
  recovered_100074b8(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10007930
#define DAT_10007930 (*(int *)(((uintptr_t)pf_module_state + 0x60f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60e0U)
 */

void recovered_10007918(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int in_r3;

  in_r3 = *param_2;
  iVar1 = DAT_10007930;
  if (in_r3 != 0) {
    iVar1 = in_r3;
  }
  recovered_10007acc(param_1,iVar1,param_2[1],in_r3);
  return;
}

#undef DAT_10007930

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60fcU)
 */

uint recovered_10007934(int *param_1,char param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x6130U)
 */

bool recovered_10007968(char *param_1,int param_2,char *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x6168U)
 */

int recovered_100079a0(int *param_1,int *param_2)

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
    recovered_10007a08(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_100076e0((undefined4 *)(*param_1 + iVar1 * 0xc),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61d0U)
 */

void recovered_10007a08(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_10007a88(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10007aa0((undefined4 *)(extraout_r0 + iVar1),(undefined4 *)(*param_1 + iVar1));
      recovered_1000731c((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0xc;
    }
    recovered_1000497c((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6250U)
 */

void recovered_10007a88(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000494c(param_1 * 0xc);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6268U)
 */

void recovered_10007aa0(undefined4 *param_1,undefined4 *param_2)

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


#define local_20 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6294U)
 */

int * recovered_10007acc(int *param_1,int param_2,uint param_3,int in_r3)

{
  unsigned char frame[80] = {0};

  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;

  if (param_2 != 0) {
    unaff_r5 = param_3;
  }
  if (param_2 != 0 && param_3 != 0) {
    uVar2 = 0;
    local_20 = 0;
    iVar1 = recovered_10007464(param_1,param_2,&local_20,in_r3);
    iVar3 = param_1[1];
    if (iVar1 == 0) {
      recovered_100074e8(param_1,iVar3 + unaff_r5);
      for (; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      if ((uint)(iVar3 - local_20) < unaff_r5) {
        unaff_r5 = iVar3 - local_20;
      }
      recovered_100074e8(param_1,unaff_r5 + iVar3);
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
 * Address: ((uintptr_t)pf_module_state+0x6378U)
 */

int * recovered_10007bb0(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007bd0(param_1);
  recovered_1000497c((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6398U)
 */

void recovered_10007bd0(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000731c((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63e0U)
 */

undefined4 * recovered_10007c18(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_10007434(param_2);
  recovered_10007338(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6420U)
 */

int recovered_10007c58(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10007670(param_1,uVar5);
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

