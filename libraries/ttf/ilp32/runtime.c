#include "word_divide.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

uint32_t recovered_10003dc0(uint32_t a,uint32_t b){uint32_t rest;return pf_word_divide(a,b,0);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10003dc8(uint param_1,uint param_2,uint *param_3)

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
uint32_t recovered_10003e40(uint32_t a,uint32_t b){uint32_t rest;return (pf_word_divide(a,b,&rest),rest);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

uint32_t recovered_10003e64(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,0);}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

uint32_t recovered_10003e9c(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,1);}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_10003ee0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


#undef DAT_10004068
#define DAT_10004068 (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10003fe8(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_10004068;
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

#undef DAT_10004068

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_10004070(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003fe8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003fe8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_100040bc(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003fe8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_100040cc(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004070(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

uint recovered_100040dc(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar3 = 1.0;
  dVar4 = 0.0;
  for (; param_1 != 0 || param_2 != 0; param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1) {
    dVar2 = dVar4 + dVar3;
    if ((param_1 & 1) == 0) {
      dVar2 = dVar4;
    }
    dVar4 = dVar2;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    dVar3 = dVar3 + dVar3;
  }
  return SUB84(dVar4,0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x350U)
 */

uint recovered_10004110(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < 0) {
    uVar1 = recovered_100040dc(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return uVar1;
  }
  uVar1 = recovered_100040dc(param_1,param_2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_10004138(uint in_r0,uint in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_100040dc(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_10004154(int in_r0,int in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_10004110(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


#undef DAT_10004180
#define DAT_10004180 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_10004170(int *in_r3)

{
  unsigned char frame[64] = {0};

  *DAT_10004180 = 0;
  recovered_10004184(in_r3);
  return;
}

#undef DAT_10004180

#undef DAT_10004364
#define DAT_10004364 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_10004368
#define DAT_10004368 (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_24 (*(int *)(frame + 152))
#define apcStack_ac (*(char * (*)[34])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10004184(int *in_r3)

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

  pcVar1 = DAT_10004368;
  local_24 = 0;
  if (*DAT_10004368 == '\0') {
    apcStack_ac[1] = DAT_10004368;
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar6 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10004364[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      pcVar8 = (char *)DAT_10004364[uVar6 * 2 + 2];
      uVar5 = DAT_10004364[uVar6 * 2 + 3];
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
      recovered_10005d54((uint)ppcVar4[-1],(uint)*ppcVar4,&local_24,in_r3);
      in_r3 = extraout_r3;
      ppcVar4 = ppcVar4 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar6 = 0x4000000;
      if (0x300000 < *DAT_10004364) {
        uVar6 = *DAT_10004364 & 0xfffffff0;
      }
      uVar10 = uVar6 - 0x300000;
      if (uVar6 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10005d54(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10004364
#undef DAT_10004368
#undef EXT_00000010
#undef local_24
#undef apcStack_ac

#undef DAT_100043ac
#define DAT_100043ac (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_1000436c(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10004184(in_r3);
  iVar1 = 0;
  piVar2 = DAT_100043ac;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_100043ac

#undef DAT_100043fc
#define DAT_100043fc (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_100043b0(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10004184(in_r3);
  iVar1 = DAT_100043fc;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_100043fc

#undef DAT_10004434
#define DAT_10004434 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10004400(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10004184(in_r3);
  iVar1 = 0;
  piVar2 = DAT_10004434;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10004434

#undef DAT_10004474
#define DAT_10004474 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_10004438(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10004184(in_r3);
  iVar1 = DAT_10004474;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10004474

#undef DAT_10004518
#define DAT_10004518 (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_10004478(int param_1,int *in_r3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10004184(in_r3);
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10004518;
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

#undef DAT_10004518

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_1000451c(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10004578(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100045d0(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_1000461c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10004638(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_10004638(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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

undefined8 recovered_10004740(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

{
  unsigned char frame[584] = {0};


  recovered_10004638(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_10004774(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10004638((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_100047ec(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_10004638((param_1 ^ uVar2) - uVar2,
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

void recovered_10004870(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_10004878(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10004884(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_100048c8(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10004908(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10004954(void *out,void *data,ulong size)

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

void * recovered_10004970(void *out,void *data,ulong size)

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

void * recovered_100049c4(void *out,int value,ulong size)

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

void recovered_100049dc(undefined1 *param_1,int param_2)

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

void recovered_100049f4(undefined1 *param_1,int param_2)

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

int recovered_10004a0c(void *left,void *right,ulong size)

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

bool recovered_10004a34(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_10004a48(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_10004a5c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_10004a74(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_10004aa0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_10004ac0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_10004ad4(int param_1)

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

int recovered_10004ae4(int param_1)

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

ulong recovered_10004af4(char *text)

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

int recovered_10004b24(char *left,char *right)

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

int recovered_10004b50(char *left,char *right)

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

void recovered_10004b54(int param_1,int param_2)

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

void * recovered_10004b70(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10004af4(param_1);
    out = recovered_10004884(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10004954(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_10004bb8(char *param_1,char param_2)

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

int recovered_10004be4(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_10004bb8(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_10004c28(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10004bb8(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_10004c68(char *param_1,char *param_2)

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


#undef DAT_10004cb8
#define DAT_10004cb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_10004cb0(void)

{
  unsigned char frame[64] = {0};

  return DAT_10004cb8;
}

#undef DAT_10004cb8

#undef DAT_10004cc4
#define DAT_10004cc4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_10004cbc(void)

{
  unsigned char frame[64] = {0};

  return DAT_10004cc4;
}

#undef DAT_10004cc4

#undef DAT_10004cdc
#define DAT_10004cdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_10004cc8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10004cdc;
  }
  return;
}

#undef DAT_10004cdc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_10004ce0(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_10004d20(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_10004db8(double left,double right)

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

double recovered_10004df0(double left,double right)

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


/* Native truncation and directed rounding; Pooka's Free Software License. */
double recovered_10004e6c(double value){int32_t n=pf_arm_to_signed(value,3);double rounded=(double)n;return rounded>value?rounded-1.0:rounded;}


/* Native truncation and directed rounding; Pooka's Free Software License. */
double recovered_10004e9c(double value){int32_t n=pf_arm_to_signed(value,3);double rounded=(double)n;return rounded<value?rounded+1.0:rounded;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1120U)
 */

double recovered_10004ee0(double value)

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


#undef DAT_10004ff0
#define DAT_10004ff0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10004ff8
#define DAT_10004ff8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_10004f30(double value)

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

#undef DAT_10004ff0
#undef DAT_10004ff8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

uint recovered_10005000(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = recovered_10004070(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return (uint)uVar2;
}


#undef DAT_10005080
#define DAT_10005080 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_10005088
#define DAT_10005088 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_10005030(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_10005090(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_10005080
#undef DAT_10005088

#undef DAT_100050c8
#define DAT_100050c8 (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_100050d0
#define DAT_100050d0 (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_100050d8
#define DAT_100050d8 (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_100050e0
#define DAT_100050e0 (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

double recovered_10005090(double in_d0)

{
  unsigned char frame[64] = {0};

  for (; DAT_100050c8 < in_d0; in_d0 = in_d0 + DAT_100050e0) {
  }
  for (; in_d0 < DAT_100050d0; in_d0 = in_d0 + DAT_100050d8) {
  }
  return in_d0;
}

#undef DAT_100050c8
#undef DAT_100050d0
#undef DAT_100050d8
#undef DAT_100050e0

#undef DAT_10005130
#define DAT_10005130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_100050e8(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_10005090(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_10005130

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_10005138(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_10005190
#define DAT_10005190 (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_10005158(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_10005190;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_10005190

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10005194(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004d20(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_100051c0(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004ce0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_100051ec(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_10004df0(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10005224(float value)

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

float recovered_1000525c(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10004e9c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_10005284(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_10004e9c(value);
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

float recovered_100052c4(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10005284(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_100052ec(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10004ee0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10005314(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10004f30(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

uint recovered_1000533c(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_10005000(in_r0,in_r1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_1000534c(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10005030(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_10005374(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100050e8(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_1000539c(float value)

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

int recovered_100053b8(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_100054e0((int)(char)*pbVar1);
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

uint recovered_100054e0(int param_1)

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

int recovered_10005524(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_10005580;
  }
  bVar1 = false;
LAB_10005580:
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
    uVar3 = recovered_100054e0((int)(char)*pbVar2);
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

double recovered_10005644(char *text,char **end)

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
        recovered_10004ce0(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_100057e0(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10005644(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10005bf4
#define DAT_10005bf4 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_100057fc(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10005858:
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
LAB_10005888:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_1000588c;
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
LAB_10005910:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10005920_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10005920_caseD_64;
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
switchD_10005920_caseD_65:
      if (local_48 < 2) goto LAB_1000588c;
      *local_44 = 0x3f;
      goto LAB_10005888;
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
      recovered_10005c88((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_100058d4;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10005920_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10005c34((int *)&local_44,&local_48,&local_4c,DAT_10005bf4);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10005c34((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_100058d4;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_10005ba4;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_10005b90:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_10005b90;
        }
        goto switchD_10005920_caseD_65;
      }
      goto switchD_10005920_caseD_64;
    }
    goto LAB_10005bbc;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_100058cc;
switchD_10005920_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10005910;
switchD_10005920_caseD_64:
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
LAB_10005ba4:
  uVar12 = 10;
  iVar3 = 0;
LAB_10005bbc:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_10005c88((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_100058d4;
switchD_10005920_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_1000588c:
  pdVar7 = arguments;
LAB_100058cc:
  local_4c = local_4c + 1;
LAB_100058d4:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_10005858;
}

#undef DAT_10005bf4
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_10005bf8(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_10005c84
#define DAT_10005c84 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10005c34(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_10005c84;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10005bf8(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10005c84

#undef DAT_10005d20
#define DAT_10005d20 (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10005d24
#define DAT_10005d24 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_10005c88(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = DAT_10005d24;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar4 = DAT_10005d20;
  }
  do {
    iVar3 = iVar1;
    uVar2 = recovered_10003dc0(param_4,param_5);
    bVar5 = param_5 <= param_4;
    local_40[-iVar3] = *(undefined1 *)(iVar4 + (param_4 - uVar2 * param_5));
    param_4 = uVar2;
    iVar1 = iVar3 + -1;
  } while (bVar5);
  for (; iVar3 != 1; iVar3 = iVar3 + 1) {
    recovered_10005bf8(param_1,param_2,param_3,local_40[-iVar3]);
  }
  return;
}

#undef DAT_10005d20
#undef DAT_10005d24
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_10005d28(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_100057fc(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_10005db8
#define DAT_10005db8 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10005d54(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_10005db8 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_10005db8

#undef DAT_10005e08
#define DAT_10005e08 (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x08U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)((PF_MODULE_WMAP_BASE+0x08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ffcU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005dbc(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10005e08) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10005e08
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_10005eb8
#define DAT_10005eb8 (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_10005ebc
#define DAT_10005ebc (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_10005e0c(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_10005ebc;
  piVar2 = DAT_10005eb8;
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
LAB_10005e9c:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_10005ec0(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10005e9c;
      }
      recovered_10005ec0(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10005eb8
#undef DAT_10005ebc

#undef DAT_10005f40
#define DAT_10005f40 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10005f44
#define DAT_10005f44 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_10005f48
#define DAT_10005f48 (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_10005ec0(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_10005f44;
  size = *DAT_10005f44;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10004954(local_214,DAT_10005f48,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10006d04(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10005f40 != (code *)0x0)) {
      (*(code *)*DAT_10005f40)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10005f40
#undef DAT_10005f44
#undef DAT_10005f48
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_10005f4c(void)

{
  unsigned char frame[64] = {0};

  recovered_10005ec0(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_10005f54(void)

{
  unsigned char frame[64] = {0};

  recovered_10005ec0(0);
  return;
}


#undef DAT_10005fa4
#define DAT_10005fa4 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10005fa8
#define DAT_10005fa8 (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_10005f5c(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10005fa4;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10005fa8;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_10005d28(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_10005e0c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10005fa4
#undef DAT_10005fa8
#undef acStack_14c

#undef DAT_10005fe8
#define DAT_10005fe8 (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10005fec
#define DAT_10005fec (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10005ff0
#define DAT_10005ff0 (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10005ff4
#define DAT_10005ff4 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10005ff8
#define DAT_10005ff8 (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10005ffc
#define DAT_10005ffc (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_10005fac(void)

{
  unsigned char frame[64] = {0};

  recovered_10006000(DAT_10005fe8);
  recovered_10006000(DAT_10005fec);
  recovered_10006000(DAT_10005ff0);
  recovered_10006000(DAT_10005ff4);
  recovered_10006000(DAT_10005ff8);
  recovered_10006000(DAT_10005ffc);
  return;
}

#undef DAT_10005fe8
#undef DAT_10005fec
#undef DAT_10005ff0
#undef DAT_10005ff4
#undef DAT_10005ff8
#undef DAT_10005ffc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_10006000(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10004af4(param_1);
  recovered_10005e0c(param_1,uVar1);
  return;
}


#undef DAT_10006044
#define DAT_10006044 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_10006048
#define DAT_10006048 (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10006028(void)

{
  unsigned char frame[64] = {0};

  recovered_10006000(DAT_10006044);
  recovered_10006000(DAT_10006048);
  return;
}

#undef DAT_10006044
#undef DAT_10006048

#undef DAT_100060cc
#define DAT_100060cc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_1000604c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10005f54();
    iVar1 = recovered_10006d04(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_100060cc != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_100060cc)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_100060cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_100060d0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_100060d8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_100060dc(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_1000638c
#define DAT_1000638c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_10006390
#define DAT_10006390 (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10006394
#define DAT_10006394 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10006398
#define DAT_10006398 (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_1000639c
#define DAT_1000639c (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_100060e4(char *param_1,int param_2)

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
    goto LAB_10006328;
  }
  iVar2 = recovered_10004b24(param_1,DAT_10006390);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_100062c4:
    puVar4 = recovered_10004884(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100049c4(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_10005d28((char *)(puVar4 + 1),0xf1,DAT_1000639c,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10004b24(param_1,DAT_10006394);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_100062c4;
    }
    iVar3 = recovered_10004b24(param_1,DAT_10006398);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_100062c4;
    }
    puVar4 = recovered_10004884(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100049c4(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10004bb8(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10004bb8(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10004bb8(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10004bb8(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10004bb8(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10004bb8(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_10004bb8(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_10005d28((char *)(puVar4 + 1),0xf1,DAT_1000639c,param_1);
      recovered_100049c4(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_100063a0(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_1000638c = 2;
LAB_10006360:
          recovered_100048c8(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_10004bb8(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_100063ec((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10006360;
            recovered_10004954((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10006328:
  *(undefined4 *)*DAT_1000638c = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_1000638c
#undef DAT_10006390
#undef DAT_10006394
#undef DAT_10006398
#undef DAT_1000639c
#undef auStack_a8

#undef DAT_100063e8
#define DAT_100063e8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_100063a0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006d04(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_100063e8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100063e8)(param_1,param_2);
  return uVar2;
}

#undef DAT_100063e8

#undef DAT_10006470
#define DAT_10006470 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_100063ec(int param_1,uint param_2)

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
      pvVar2 = recovered_10004908(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10006470 = 0xc;
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

#undef DAT_10006470

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_10006474(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_100064a0(param_3);
  }
  recovered_100060e4(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_100064a0(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10006838(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_100048c8((void *)param_1[0x3f]);
    }
    recovered_100048c8(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_100064e4(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_10006584(unaff_r6);
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


#undef DAT_1000666c
#define DAT_1000666c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_10006584(int *param_1)

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
        bVar1 = recovered_1000604c((int)text,0x1fe,DAT_1000666c,0);
        if (!bVar1) goto LAB_1000665c;
        uVar3 = recovered_10004af4(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_1000665c:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_1000666c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_10006670(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_10005e0c(param_1,size);
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
        iVar3 = recovered_100063ec((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_100049c4((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10004954((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_10006810
#define DAT_10006810 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_1000677c(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10006798;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006790;
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
LAB_10006790:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10006798:
  *(undefined4 *)*DAT_10006810 = 0x16;
  return 0xffffffff;
}

#undef DAT_10006810

#undef DAT_10006834
#define DAT_10006834 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10006814(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10006834 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10006834

#undef DAT_100068ac
#define DAT_100068ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_10006838(uint *param_1)

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
      iVar1 = recovered_10006a48(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100068ac = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_100068ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_100068b0(int param_1)

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

undefined1 recovered_100068c0(int param_1)

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

void recovered_100068d0(int param_1)

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

void recovered_100068ec(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10006954
#define DAT_10006954 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_10006910(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_10006958(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10006954 = uVar2;
  return 0xffffffff;
}

#undef DAT_10006954

#undef DAT_10006998
#define DAT_10006998 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_10006958(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006d04(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_10006998 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10006998)(param_1);
  return uVar2;
}

#undef DAT_10006998

#undef DAT_10006a44
#define DAT_10006a44 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_1000699c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_100049c4(&local_20,0,0xc);
    iVar1 = recovered_100063a0(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_10006a48(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_10006958(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10006a44 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10006a44 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10006a44
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_10006a98
#define DAT_10006a98 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_10006a48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006d04(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_10006a98 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10006a98)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_10006a98

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_10006a9c(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_100049c4(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_100063a0(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_10004884(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10004954(out,unaff_r5,unaff_r6);
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

bool recovered_10006b54(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_10006a48(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_10006b94(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_10006b9c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_10006ba0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_10006ba8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_10006bb0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_10006bb8(int param_1,char param_2,int param_3)

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

int recovered_10006be0(char *left,char *right,ulong size)

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


#undef DAT_10006cb8
#define DAT_10006cb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_10006cbc
#define DAT_10006cbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_10006cc0
#define DAT_10006cc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_10006cc4
#define DAT_10006cc4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_10006cc8
#define DAT_10006cc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_10006ccc
#define DAT_10006ccc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_10006cd0
#define DAT_10006cd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_10006cd4
#define DAT_10006cd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_10006cd8
#define DAT_10006cd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10006c20(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_10006cd8;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10006c34_caseD_0;
  case 2:
    return DAT_10006cbc;
  case 5:
    return DAT_10006cc0;
  case 9:
    return DAT_10006cc4;
  case 0xc:
    return DAT_10006cc8;
  case 0xd:
    return DAT_10006ccc;
  default:
    if (param_1 == 0x11) {
      return DAT_10006cd0;
    }
    if (param_1 == 0x16) {
      return DAT_10006cb8;
    }
switchD_10006c34_caseD_0:
    return DAT_10006cd4;
  }
}

#undef DAT_10006cb8
#undef DAT_10006cbc
#undef DAT_10006cc0
#undef DAT_10006cc4
#undef DAT_10006cc8
#undef DAT_10006ccc
#undef DAT_10006cd0
#undef DAT_10006cd4
#undef DAT_10006cd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_10006cdc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10006ce4(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10006d00
#define DAT_10006d00 (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_10006cec(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006d00 = *DAT_10006d00 + 1;
  return;
}

#undef DAT_10006d00

#undef DAT_10006d50
#define DAT_10006d50 (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)((PF_MODULE_WMAP_BASE+0x08U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)((PF_MODULE_WMAP_BASE+0x00U)))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)((PF_MODULE_WMAP_BASE+0x04U)))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)((PF_MODULE_WMAP_BASE+0x08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f44U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006d04(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10006d50) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10006d50
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

uint recovered_10006d54(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2fa0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x24))();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fa4U)
 */

undefined4 recovered_10006d64(undefined4 *param_1)

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

int recovered_10006d7c(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_10006e14
#define DAT_10006e14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_10006e18
#define DAT_10006e18 (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10006e1c
#define DAT_10006e1c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(undefined1 * *)(frame + 56))
#define uStack_3c (*(undefined4 *)(frame + 16))
#define auStack_10 (*(undefined1 (*)[8])(frame + 60))
#define local_38 (*(undefined4 *)(frame + 20))
#define local_24 (*(undefined4 *)(frame + 40))
#define local_20 (*(undefined4 *)(frame + 44))
#define local_1c (*(undefined1 * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fdcU)
 */

void recovered_10006d9c(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10006e1c;
  local_20 = DAT_10006e14;
  local_18 = DAT_10006e18 + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_10007360(&uStack_3c);
  recovered_10004870();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_10006e14
#undef DAT_10006e18
#undef DAT_10006e1c
#undef local_18
#undef local_14
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3060U)
 */

undefined4 recovered_10006e20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_10006e28(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006e38(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006d9c();
}


#undef DAT_10010298
#define DAT_10010298 (*(int *)(((uintptr_t)pf_module_state + 0xc4d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_10006e38(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_10010298;
  DAT_10010298 = param_1;
  recovered_1000721c(param_1);
  return;
}

#undef DAT_10010298

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_10006e64(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10004884(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10004870();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_10006e90(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10004884(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10004870();
  }
  return pvVar1;
}


#undef DAT_10006f48
#define DAT_10006f48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10006f4c
#define DAT_10006f4c (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10006f50
#define DAT_10006f50 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10006e94(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10006f50;
  local_78 = DAT_10006f48;
  local_70 = DAT_10006f4c + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_10007360(&uStack_94);
  recovered_100048c8(data);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_10006f48
#undef DAT_10006f4c
#undef DAT_10006f50
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_10007008
#define DAT_10007008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_1000700c
#define DAT_1000700c (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_10007010
#define DAT_10007010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3194U)
 */

void recovered_10006f54(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10007010;
  local_78 = DAT_10007008;
  local_70 = DAT_1000700c + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_10007360(&uStack_94);
  recovered_100048c8(data);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_10007008
#undef DAT_1000700c
#undef DAT_10007010
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_100070c8
#define DAT_100070c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_100070cc
#define DAT_100070cc (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_100070d0
#define DAT_100070d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_10007014(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100070d0;
  local_78 = DAT_100070c8;
  local_70 = DAT_100070cc + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_10007360(&uStack_94);
  recovered_100048c8(param_1);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_100070c8
#undef DAT_100070cc
#undef DAT_100070d0
#undef auStack_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10007188
#define DAT_10007188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_1000718c
#define DAT_1000718c (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_10007190
#define DAT_10007190 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_100070d4(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10007190;
  local_78 = DAT_10007188;
  local_70 = DAT_1000718c + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_10007360(&uStack_94);
  recovered_100048c8(param_1);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_10007188
#undef DAT_1000718c
#undef DAT_10007190
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_10007194(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_1000719c(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_100071ac(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_100071bc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_100071c0(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_10004884(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006d9c();
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

void recovered_1000720c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100048c8((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_1000721c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_1000727c
#define DAT_1000727c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10007224(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_1000727c;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_1000727c = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_100048c8(buffer);
  return;
}

#undef DAT_1000727c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_10007280(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_100072a8((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10007324
#define DAT_10007324 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_100072a8(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10007324;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) goto LAB_10007320;
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10007850((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
  recovered_100073e4(param_1);
LAB_10007320:
                    /* WARNING: Subroutine does not return */
  recovered_10006d9c();
}

#undef DAT_10007324
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000735c
#define DAT_1000735c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

void recovered_10007328(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_1000735c;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_10006d9c();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_100072a8(puVar1);
}

#undef DAT_1000735c

#undef DAT_10007374
#define DAT_10007374 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

uint recovered_10007360(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10007374;
  *param_1 = *DAT_10007374;
  *puVar1 = param_1;
  return (uint)param_1;
}

#undef DAT_10007374

#undef DAT_100073a4
#define DAT_100073a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_10007378(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_100073a4;
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

#undef DAT_100073a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_100073a8(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100072a8(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_100073b4(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006d9c();
}


#undef DAT_1001029c
#define DAT_1001029c (*(int * *)(((uintptr_t)pf_module_state + 0xc4dcU)))
#define auStack_130 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_100073c0(undefined4 *param_1)

{
  unsigned char frame[352] = {0};

  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if (DAT_1001029c != (int *)0x0) {
    DAT_1001029c = (int *)*DAT_1001029c;
  }
  puVar2 = (undefined4 *)recovered_100073e4(param_1);
  while( true ) {
    piVar1 = DAT_1001029c;
    if (DAT_1001029c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10006d9c();
    }
    if (DAT_1001029c == (int *)puVar2[3]) break;
    recovered_10007850((int)DAT_1001029c,(int *)*puVar2,auStack_130 + 0x80);
    DAT_1001029c = (int *)*piVar1;
  }
  uVar4 = puVar2[5];
  DAT_1001029c[2] = (int)puVar2;
  uVar3 = puVar2[4];
  piVar1[3] = uVar4;
  piVar1[1] = uVar3;
  puVar2 = (undefined4 *)recovered_10006d54((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_100073c0(puVar2);
}

#undef DAT_1001029c
#undef auStack_130

#undef DAT_1001029c
#define DAT_1001029c (*(int * *)(((uintptr_t)pf_module_state + 0xc4dcU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

uint recovered_100073e4(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;

  while( true ) {
    piVar1 = DAT_1001029c;
    if (DAT_1001029c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10006d9c();
    }
    if (DAT_1001029c == (int *)param_1[3]) break;
    recovered_10007850((int)DAT_1001029c,(int *)*param_1,auStack_128 + 0x80);
    DAT_1001029c = (int *)*piVar1;
  }
  uVar4 = param_1[5];
  DAT_1001029c[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar1[3] = uVar4;
  piVar1[1] = uVar2;
  puVar3 = (undefined4 *)recovered_10006d54((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_100073c0(puVar3);
}

#undef DAT_1001029c
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_10007490(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100073c0(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_1000749c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_100074a4(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006d9c();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_100074b0(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_100074f0(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_10007594
#define DAT_10007594 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_100074f0(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_10007594 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10007594

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_10007598(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_1000759c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_100075a4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_100075b8(int param_1)

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

bool recovered_100075f4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10007620(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_1000763c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_10007658(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_10007674(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_10007690(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004e6c(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_100076e8(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10007734;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10007734:
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

ulonglong recovered_1000784c(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10007734;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10007734:
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

#undef DAT_10007a68
#define DAT_10007a68 (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_10007850(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10007a6c((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_10007b98(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_10007b98(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_10007b98(&local_24);
        uVar6 = recovered_10007b98(&local_24);
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
            uVar6 = recovered_10007bf8((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_10007bf8((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_10007a68 + uVar5 * 4) * uVar6;
                puVar9 = recovered_10007a6c(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_100074f0(param_2,(int *)puVar9);
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

#undef DAT_10007a68
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_10007a6c(uint param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;

  puVar3 = (uint *)0x0;
  if (param_1 == 0xff) {
    return (uint *)0x0;
  }
  if (0xc < (param_1 & 0xf)) {
    return (uint *)0x0;
  }
  iVar4 = *param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    puVar3 = (uint *)recovered_10007bd0(iVar4,4);
    iVar2 = iVar4 + 4;
    goto LAB_10007b54;
  case 1:
    puVar3 = (uint *)recovered_10007b98(param_2);
    break;
  case 2:
    puVar3 = (uint *)recovered_10007bd0(iVar4,2);
    iVar2 = iVar4 + 2;
    goto LAB_10007b54;
  case 4:
  case 0xc:
    puVar3 = (uint *)recovered_10007bd0(iVar4,8);
    iVar2 = iVar4 + 8;
LAB_10007b54:
    *param_2 = iVar2;
    break;
  default:
    goto switchD_10007aa0_caseD_5;
  case 9:
    puVar3 = (uint *)recovered_10007bf8(param_2);
    break;
  case 10:
    puVar1 = (uint *)recovered_10007bd0(iVar4,2);
    *param_2 = iVar4 + 2;
    puVar3 = (uint *)((uint)puVar1 & 0xffff | 0xffff0000);
    if (((uint)puVar1 & 0x8000) == 0) {
      puVar3 = puVar1;
    }
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)((int)puVar3 + iVar4);
  }
  if ((0x7fffffff < (uint)(int)(char)param_1) && (puVar3 != (uint *)0x0)) {
    puVar3 = (uint *)*puVar3;
  }
switchD_10007aa0_caseD_5:
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_10007b98(undefined4 *param_1)

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

uint recovered_10007bd0(byte *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 0;
  uVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = uVar2 | (uint)*param_1 << (uVar1 & 0xff);
    uVar1 = uVar1 + 8;
    param_1 = param_1 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e38U)
 */

uint recovered_10007bf8(undefined4 *param_1)

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


#undef DAT_10008168
#define DAT_10008168 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x43a8U)))
#undef DAT_1000816c
#define DAT_1000816c (*(uint *)(((uintptr_t)pf_module_state + 0x43acU)))
#undef DAT_10008170
#define DAT_10008170 (*(int *)(((uintptr_t)pf_module_state + 0x43b0U)))
#undef DAT_10008174
#define DAT_10008174 (*(int *)(((uintptr_t)pf_module_state + 0x43b4U)))
#undef DAT_10008178
#define DAT_10008178 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x43b8U)))
#undef DAT_1000817c
#define DAT_1000817c (*(int *)(((uintptr_t)pf_module_state + 0x43bcU)))
#undef DAT_10008180
#define DAT_10008180 (*(int *)(((uintptr_t)pf_module_state + 0x43c0U)))
#define local_ac (*(int * *)(frame + 36))
#define local_a8 (*(int * *)(frame + 40))
#define local_a4 (*(int * *)(frame + 44))
#define local_a0 (*(int * *)(frame + 48))
#define local_9c (*(int * *)(frame + 52))
#define local_98 (*(int * *)(frame + 56))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define local_c0 (*(float *)(frame + 16))
#define local_bc (*(char * *)(frame + 20))
#define local_b8 (*(uint *)(frame + 24))
#define local_b0 (*(int * *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

void * recovered_10007c48(void *data,ulong size,float pixels)

{
  unsigned char frame[240] = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  float fVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  local_7c = *DAT_10008178;
  local_78 = DAT_10008168;
  local_70 = DAT_10008174 + ((uintptr_t)pf_module_state+0x3edcU);
  recovered_10007360(&uStack_94);
  puVar4 = (undefined4 *)0x0;
  if (data == (void *)0x0 || size == 0) goto LAB_1000802c;
  local_90 = 0xffffffff;
  recovered_1000f9e8(&local_bc,data,(undefined1 *)((int)data + size));
  if (local_b8 < 4) {
LAB_10007e4c:
    if (local_b8 != 0) {
LAB_10007e54:
      puVar4 = (undefined4 *)0x0;
      if (*local_bc != -0x80 && *local_bc != '%') goto LAB_1000801c;
      local_90 = 4;
      local_c0 = pixels;
      local_a4 = recovered_10006e64(0xc54);
      local_a0 = local_a4 + 8;
      recovered_100049c4(local_a0,0,0xc34);
      *local_a4 = DAT_10008180 + 8;
      local_a4[2] = DAT_10008170;
      local_a4[1] = 0;
      local_a4[4] = 0x40890000;
      local_a4[3] = 0;
      local_a4[6] = 0x40690000;
      local_a4[5] = 0;
      local_a4[7] = 4;
      iVar2 = 0;
      do {
        *(undefined4 *)((int)local_a4 + (0x20 - iVar2)) = 0;
        *(undefined4 *)((int)local_a4 + (0x24 - iVar2)) = 0;
        bVar5 = iVar2 != -0xbf4;
        *(undefined4 *)((int)local_a4 + (0x28 - iVar2)) = 0;
        iVar2 = iVar2 + -0xc;
      } while (bVar5);
      local_9c = local_a4 + 0x308;
      *local_9c = 0;
      local_a4[0x309] = 0;
      local_a4[0x30a] = 0;
      local_90 = 5;
      recovered_1000dd64(local_a4 + 0x30b);
      local_90 = 6;
      iVar2 = (**(code **)(*local_a4 + 8))(local_a4,&local_bc);
      piVar3 = local_a4;
      if (iVar2 != 0) goto LAB_10007f98;
      (**(code **)(*local_a4 + 4))(local_a4);
    }
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = recovered_10009558((int *)&local_bc,0);
    if (uVar1 != DAT_1000816c && uVar1 != 0x10000) goto LAB_10007e54;
    local_90 = 1;
    local_c0 = pixels;
    local_b0 = recovered_10006e64(0xd4);
    recovered_100049c4(local_b0 + 0xc,0,0xa4);
    *local_b0 = DAT_1000817c + 8;
    local_ac = local_b0 + 1;
    *local_ac = 0;
    local_a8 = local_b0 + 4;
    local_b0[3] = 0;
    local_b0[2] = 0;
    *local_a8 = 0;
    local_b0[5] = 0;
    local_b0[6] = 0;
    local_b0[7] = 0;
    local_b0[8] = 0;
    local_b0[9] = 0;
    local_b0[10] = 0;
    local_b0[0xb] = 0;
    local_b0[0x10] = 0;
    local_b0[0x14] = 0;
    local_b0[0x18] = 0;
    *(undefined2 *)(local_b0 + 0x1c) = 0;
    *(undefined2 *)(local_b0 + 0x1e) = 0;
    local_b0[0x21] = 0;
    *(undefined2 *)((int)local_b0 + 0x92) = 0;
    *(undefined2 *)((int)local_b0 + 0x9a) = 0;
    local_b0[0x29] = 0;
    local_90 = 2;
    recovered_1000a3f8(local_b0 + 0x2b);
    local_90 = 3;
    iVar2 = (**(code **)(*local_b0 + 8))(local_b0,&local_bc);
    piVar3 = local_b0;
    if (iVar2 == 0) {
      (**(code **)(*local_b0 + 4))(local_b0);
      pixels = local_c0;
      goto LAB_10007e4c;
    }
LAB_10007f98:
    local_90 = 7;
    local_98 = piVar3;
    puVar4 = recovered_10006e64(0x30);
    puVar4[10] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[0xb] = 0;
    *puVar4 = local_98;
    fVar6 = 1.0;
    if (1.0 < local_c0) {
      fVar6 = local_c0;
    }
    *(float *)(puVar4 + 1) = fVar6;
  }
LAB_1000801c:
  local_b8 = 0;
  recovered_10006e94(local_bc);
LAB_1000802c:
  recovered_10007378(&uStack_94);
  return puVar4;
}

#undef DAT_10008168
#undef DAT_1000816c
#undef DAT_10008170
#undef DAT_10008174
#undef DAT_10008178
#undef DAT_1000817c
#undef DAT_10008180
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b0
#undef uStack_94

#undef DAT_100083b4
#define DAT_100083b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x45f4U)))
#undef DAT_100083b8
#define DAT_100083b8 (*(int *)(((uintptr_t)pf_module_state + 0x45f8U)))
#undef DAT_100083bc
#define DAT_100083bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x45fcU)))
#undef DAT_100083c0
#define DAT_100083c0 (*(int *)(((uintptr_t)pf_module_state + 0x4600U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_ac (*(uint *)(frame + 20))
#define local_a8 (*(float *)(frame + 24))
#define local_a4 (*(uint * *)(frame + 28))
#define local_a0 (*(undefined1 * *)(frame + 32))
#define local_9c (*(ulong *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x43c4U)
 */

void * recovered_10008184(char *path,float pixels)

{
  unsigned char frame[224] = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_100083bc;
  local_78 = DAT_100083b4;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined1 *)0x0;
  local_70 = DAT_100083b8 + ((uintptr_t)pf_module_state+0x4424U);
  local_a8 = pixels;
  recovered_10007360(&uStack_94);
  pvVar5 = (void *)0x0;
  if (path == (char *)0x0) goto LAB_10008254;
  local_90 = 1;
  puVar1 = recovered_100060e4(path,DAT_100083c0);
  pvVar5 = (void *)0x0;
  if (puVar1 == (uint *)0x0) goto LAB_10008254;
  local_90 = 2;
  local_a4 = puVar1;
  iVar2 = recovered_1000677c((int *)puVar1,0,2);
  if (iVar2 == 0) {
    local_90 = 3;
    uVar3 = recovered_10006814((int)local_a4);
    if (-1 < (int)uVar3) {
      local_90 = 4;
      local_ac = uVar3;
      iVar2 = recovered_1000677c((int *)local_a4,0,0);
      if (iVar2 == 0) {
        local_90 = 5;
        recovered_1000c8b0((int *)&local_a0,local_ac);
        if (local_9c != 0) {
          local_90 = 6;
          uVar4 = recovered_100064e4(local_a0,1,local_9c,(int *)local_a4);
          if (uVar4 != local_9c) goto LAB_10008240;
        }
        local_90 = 8;
        recovered_100064a0(local_a4);
        local_90 = 9;
        pvVar5 = recovered_10007c48(local_a0,local_9c,local_a8);
        goto LAB_10008254;
      }
    }
  }
LAB_10008240:
  local_90 = 7;
  recovered_100064a0(local_a4);
  pvVar5 = (void *)0x0;
LAB_10008254:
  local_9c = 0;
  recovered_10006e94(local_a0);
  recovered_10007378(&uStack_94);
  return pvVar5;
}

#undef DAT_100083b4
#undef DAT_100083b8
#undef DAT_100083bc
#undef DAT_100083c0
#undef auStack_68
#undef local_ac
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4604U)
 */

void recovered_100083c4(void *font,float pixels)

{
  unsigned char frame[64] = {0};

  float fVar1;

  if (font == (void *)0x0) {
    return;
  }
  if (*(int *)font != 0) {
    fVar1 = 1.0;
    if (1.0 < pixels) {
      fVar1 = pixels;
    }
    *(float *)((int)font + 4) = fVar1;
    recovered_1000f5fc((int *)((int)font + 8));
    *(undefined4 *)((int)font + 0x18) = 0;
    *(undefined4 *)((int)font + 0x24) = 0;
  }
  return;
}


#undef DAT_10009364
#define DAT_10009364 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x55a4U)))
#undef DAT_10009368
#define DAT_10009368 (*(int *)(((uintptr_t)pf_module_state + 0x55a8U)))
#undef DAT_1000936c
#define DAT_1000936c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x55acU)))
#undef DAT_10009370
#define DAT_10009370 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x55b0U)))
#define uStack_94 (*(undefined4 *)(frame + 236))
#define auStack_68 (*(undefined1 (*)[8])(frame + 280))
#define in_stack_00000004 (*(undefined4 *)(frame + 388))
#define local_170 (*(undefined4 (*)[5])(frame + 16))
#define local_15c (*(undefined8 * *)(frame + 36))
#define local_158 (*(uint *)(frame + 40))
#define local_154 (*(undefined4 * *)(frame + 44))
#define local_150 (*(undefined4 * *)(frame + 48))
#define local_14c (*(int *)(frame + 52))
#define local_148 (*(undefined4 * *)(frame + 56))
#define local_144 (*(uint *)(frame + 60))
#define local_140 (*(int *)(frame + 64))
#define local_13c (*(int *)(frame + 68))
#define local_138 (*(undefined4 *)(frame + 72))
#define local_134 (*(int *)(frame + 76))
#define local_130 (*(int *)(frame + 80))
#define local_12c (*(int *)(frame + 84))
#define local_128 (*(int *)(frame + 88))
#define local_124 (*(uint *)(frame + 92))
#define local_120 (*(int * *)(frame + 96))
#define local_11c (*(int *)(frame + 100))
#define local_118 (*(undefined4 * *)(frame + 104))
#define local_114 (*(undefined4 * *)(frame + 108))
#define local_110 (*(undefined4 * *)(frame + 112))
#define local_10c (*(int * *)(frame + 116))
#define local_108 (*(int * *)(frame + 120))
#define local_104 (*(uint *)(frame + 124))
#define local_100 (*(uint *)(frame + 128))
#define local_fc (*(int * *)(frame + 132))
#define local_f8 (*(byte * *)(frame + 136))
#define local_f4 (*(byte * *)(frame + 140))
#define local_f0 (*(int *)(frame + 144))
#define local_e8 (*(undefined4 * *)(frame + 152))
#define local_e4 (*(int *)(frame + 156))
#define local_e0 (*(int *)(frame + 160))
#define local_dc (*(undefined4 * *)(frame + 164))
#define local_d8 (*(uint *)(frame + 168))
#define local_d4 (*(undefined4 *)(frame + 172))
#define local_d0 (*(undefined4 ** *)(frame + 176))
#define local_cc (*(undefined4 * *)(frame + 180))
#define local_c8 (*(pf_glyph *)(frame + 184))
#define local_a0 (*(undefined8 * *)(frame + 224))
#define local_9c (*(undefined4 * *)(frame + 228))
#define local_98 (*(undefined4 * *)(frame + 232))
#define local_90 (*(undefined4 *)(frame + 240))
#define local_7c (*(undefined4 *)(frame + 260))
#define local_78 (*(undefined4 *)(frame + 264))
#define local_74 (*(undefined1 * *)(frame + 268))
#define local_70 (*(int *)(frame + 272))
#define local_6c (*(undefined1 * *)(frame + 276))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4658U)
 */

void * recovered_10008418(void *font,char *text,int a,int b,int c,double opacity)

{
  unsigned char frame[416] = {0};
 double pf_pen=0.0;

  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  uint extraout_r0_01 = 0;
  int *extraout_r0_02 = 0;
  undefined4 extraout_r0_03 = 0;
  undefined4 extraout_r0_04 = 0;
  int *extraout_r0_05 = 0;
  undefined4 extraout_r0_06 = 0;
  int iVar5;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 extraout_r1_01 = 0;
  undefined4 extraout_r1_02 = 0;
  undefined4 extraout_r1_03 = 0;
  undefined4 extraout_r1_04 = 0;
  undefined4 extraout_r1_05 = 0;
  uint uVar6;
  undefined4 extraout_r1_06 = 0;
  byte *pbVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  int *piVar16;
  int extraout_r12 = 0;
  int iVar17;
  double extraout_d0 = 0;
  double extraout_d0_00 = 0;
  double extraout_d0_01 = 0;
  undefined4 uVar18;
  undefined4 extraout_s1 = 0;
  float fVar19;
  double dVar20;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_170;
  local_7c = *DAT_1000936c;
  local_78 = DAT_10009364;
  local_70 = DAT_10009368 + ((uintptr_t)pf_module_state+0x46b0U);
  uVar3 = recovered_10007360(&uStack_94);
  pbVar7 = (byte *)(undefined8 *)0x0;
  if (font != (void *)0x0) {
    if (text != (char *)0x0) {
      uVar3 = *(uint *)font;
      local_15c = (undefined8 *)b;
      local_158 = a;
      local_150 = font;
    }
    if (text != (char *)0x0 && uVar3 != 0) {
      if (*text == '\0') {
        local_90 = 0xffffffff;
        local_f8 = recovered_10006e64(0x18);
        local_90 = 1;
        local_a0 = (undefined8 *)local_f8;
        recovered_10009374((undefined4 *)local_f8);
        pbVar7 = local_f8;
      }
      else {
        local_d4 = 0;
        local_d8 = 0;
        local_dc = (undefined4 *)0x0;
        local_90 = 2;
        local_f8 = (byte *)text;
        recovered_100093ac((int *)&local_dc);
        local_c8.width = 0;
        local_c8.top = 0;
        local_c8.left = 0;
        pbVar7 = local_f8;
LAB_10008510:
        puVar4 = (undefined4 *)(uint)*pbVar7;
        if (puVar4 != (undefined4 *)0x0) {
          local_f8 = pbVar7 + 1;
          if ((char)*pbVar7 < '\0') {
            local_e8 = (undefined4 *)0xfffd;
            if (((uint)puVar4 & 0xe0) == 0xc0) {
              local_e8 = (undefined4 *)((uint)puVar4 & 0x1f);
              iVar13 = 1;
LAB_100085a8:
              pbVar7 = local_f8;
              for (iVar5 = iVar13; iVar5 != 0; iVar5 = iVar5 + -1) {
                if ((*pbVar7 & 0xc0) != 0x80) {
                  local_90 = 5;
                  local_f4 = (byte *)0xfffd;
                  recovered_1000f644(&local_c8.left,&local_f4);
                  pbVar7 = local_f8;
                  goto LAB_10008510;
                }
                local_e8 = (undefined4 *)(*pbVar7 & 0x3f | (int)local_e8 << 6);
                pbVar7 = pbVar7 + 1;
              }
              local_90 = 6;
              local_fc = (int *)iVar13;
              recovered_1000f990(&local_c8.left,&local_e8);
              pbVar7 = local_f8 + (int)local_fc;
            }
            else {
              if (((uint)puVar4 & 0xf0) == 0xe0) {
                local_e8 = (undefined4 *)((uint)puVar4 & 0xf);
                iVar13 = 2;
                goto LAB_100085a8;
              }
              if (((uint)puVar4 & 0xf8) == 0xf0) {
                local_e8 = (undefined4 *)((uint)puVar4 & 7);
                iVar13 = 3;
                goto LAB_100085a8;
              }
              local_90 = 4;
              local_f4 = (byte *)0xfffd;
              recovered_1000f644(&local_c8.left,&local_f4);
              pbVar7 = local_f8;
            }
          }
          else {
            local_90 = 3;
            local_e8 = puVar4;
            recovered_1000f644(&local_c8.left,&local_e8);
            pbVar7 = local_f8;
          }
          goto LAB_10008510;
        }
        pbVar7 = (byte *)local_c8.left;
        for (piVar8 = (int *)(local_c8.top << 2); piVar8 != (int *)0x0;
            piVar8 = (int *)((int)piVar8 + -4)) {
          local_e8 = *(undefined4 **)pbVar7;
          if (local_e8 != (undefined4 *)0xd) {
            local_f8 = pbVar7;
            local_fc = piVar8;
            if (local_e8 == (undefined4 *)0xa) {
              local_90 = 7;
              recovered_100093ac((int *)&local_dc);
              pbVar7 = local_f8;
              piVar8 = local_fc;
            }
            else {
              local_90 = 8;
              recovered_1000f990(local_dc + local_d8 * 3 + -3,&local_e8);
              pbVar7 = local_f8;
              piVar8 = local_fc;
            }
          }
          pbVar7 = pbVar7 + 4;
        }
        local_c8.top = 0;
        recovered_10006e94((void *)local_c8.left);
        if (local_d8 == 0) {
          local_90 = 9;
          recovered_100093ac((int *)&local_dc);
        }
        local_f8 = (byte *)local_150[3];
        puVar4 = local_dc;
        for (iVar13 = local_d8 * 0xc; iVar13 != 0; iVar13 = iVar13 + -0xc) {
          piVar8 = puVar4 + 1;
          puVar4 = puVar4 + 3;
          local_f8 = (byte *)(*piVar8 + (int)local_f8);
        }
        local_90 = 10;
        local_fc = local_150 + 2;
        recovered_1000f888(local_fc,(uint)local_f8);
        local_90 = 0xb;
        recovered_1000a7c0(local_150 + 8,(uint)local_f8);
        pbVar7 = local_f8;
        uVar3 = recovered_1000f86c(local_150[6]);
        if (uVar3 < pbVar7) {
          local_90 = 0xc;
          recovered_1000f7cc((int)local_fc,(int)pbVar7 << 1);
        }
        local_e0 = 0;
        local_e4 = 0;
        local_e8 = (undefined4 *)0x0;
        local_90 = 0xd;
        recovered_10009404((int *)&local_e8,local_d8);
        local_fc = (int *)0x1;
        local_154 = local_dc + local_d8 * 3;
        local_100 = 0;
        puVar4 = local_dc;
        while (puVar4 != local_154) {
          piVar8 = (int *)*local_150;
          local_cc = local_150;
          local_148 = puVar4;
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x1;
            local_98 = (undefined4 *)0x0;
            pbVar7 = (byte *)0x1;
            uVar3 = 0;
            local_144 = 0;
          }
          else {
            local_90 = 0xf;
            fVar19 = pf_bits_float((uintptr_t)local_150[1]);
            { uint64_t bits=((uint64_t (*)(void *))*(void **)(*piVar8 + 0x10))(piVar8); extraout_r0=(uintptr_t)(uint32_t)bits; extraout_r1=(uint32_t)(bits>>32); }
            local_d0 = &local_cc;
            local_90 = 0x10;
            local_104 = extraout_r1;
            local_f8 = (byte *)extraout_r0;
            { uint64_t bits=((uint64_t (*)(void *))*(void **)(*(int *)*local_cc + 0x14))((int *)*local_cc); extraout_r0_00=(uintptr_t)(uint32_t)bits; extraout_r1_00=(uint32_t)(bits>>32); }
            dVar20 = (double)fVar19 / pf_bits_double(CONCAT44(local_104,local_f8));
            local_90 = 0x11;
            local_11c = recovered_1000f69c(&local_d0,
                                           dVar20 * pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00)))
            ;
            local_90 = 0x12;
            if (local_11c < 2) {
              local_11c = 1;
            }
            { uint64_t bits=((uint64_t (*)(void *))*(void **)(*(int *)*local_cc + 0x14))((int *)*local_cc); extraout_r0_01=(uintptr_t)(uint32_t)bits; extraout_r1_01=(uint32_t)(bits>>32); }
            local_90 = 0x13;
            local_104 = extraout_r1_01;
            local_f8 = (byte *)extraout_r0_01;
            { uint64_t bits=((uint64_t (*)(void *))*(void **)(*(int *)*local_cc + 0x18))((int *)*local_cc); extraout_r0_02=(uintptr_t)(uint32_t)bits; extraout_r1_02=(uint32_t)(bits>>32); }
            local_90 = 0x14;
            local_10c = (int *)extraout_r1_02;
            local_108 = extraout_r0_02;
            { uint64_t bits=((uint64_t (*)(void *))*(void **)(*(int *)*local_cc + 0x1c))((int *)*local_cc); extraout_r0_03=(uintptr_t)(uint32_t)bits; extraout_r1_03=(uint32_t)(bits>>32); }
            local_90 = 0x15;
            local_14c = recovered_1000f69c(&local_d0,
                                           dVar20 * (pf_bits_double(CONCAT44(local_104,local_f8)) +
                                                     pf_bits_double(CONCAT44(local_10c,local_108)) +
                                                    pf_bits_double(CONCAT44(extraout_r1_03,extraout_r0_03)))
                                          );
            if (local_14c < 2) {
              local_14c = 1;
            }
            local_10c = (int *)0x0;
            local_9c = (undefined4 *)0x0;
            local_104 = 0;
            local_110 = (undefined4 *)0x0;
            puVar4 = (undefined4 *)*local_148;
            pbVar7 = (byte *)0x0;
            local_118 = puVar4 + local_148[1];
            local_144 = 0;
            local_128 = 0;
            local_134 = 0;
            local_130 = 0;
            local_124 = 0;
            pf_pen=0.0; dVar20=0.0;
            local_12c = local_14c;
            while (puVar2 = local_cc, puVar4 != local_118) {
              local_f4 = (byte *)*puVar4;
              piVar15 = local_cc + 2;
              local_114 = puVar4;
              local_f8 = pbVar7;
              piVar8 = recovered_1000f6f8(piVar15,(int *)&local_f4);
              dVar20=pf_pen;
              if (piVar8 == (int *)(puVar2[2] + puVar2[3] * 0x28)) {
                fVar19 = pf_bits_float((uintptr_t)puVar2[1]);
                local_90 = 0x17;
                local_108 = puVar2;
                local_120 = piVar15;
                dVar20 = pf_bits_double(((uint64_t (*)(void *))*(void **)(*(int *)*puVar2 + 0x10))((int *)*puVar2));
                local_90 = 0x18;
                /* Scale is passed directly below. */
                ((void (*)(void *,void *,uint,double))*(void **)(*(int *)*local_108 + 0xc))
                          (&local_c8,(int *)*local_108,(uint)local_f4,(double)fVar19/dVar20);
                piVar15 = local_120;
                piVar8 = recovered_1000f6f8(local_120,(int *)&local_f4);
                iVar13 = local_108[3];
                if (piVar8 == (int *)(local_108[2] + iVar13 * 0x28)) {
                  if ((local_108[6] == 0) || ((uint)(local_108[6] * 3) < (uint)((iVar13 + 1) * 4)))
                  {
                    local_90 = 0x19;
                    recovered_1000f7cc((int)piVar15,iVar13 * 2 + 2);
                    iVar13 = local_108[3];
                    piVar15 = local_120;
                  }
                  if (iVar13 == local_108[4]) {
                    local_90 = 0x1a;
                    uVar3 = iVar13 << 1;
                    if (iVar13 == 0) {
                      uVar3 = 4;
                    }
                    recovered_1000f888(piVar15,uVar3);
                    iVar13 = local_108[3];
                  }
                  piVar8 = local_108;
                  puVar4 = (undefined4 *)(local_108[2] + iVar13 * 0x28);
                  *puVar4 = local_f4;
                  recovered_1000aa08((undefined8 *)(puVar4 + 1),(undefined8 *)&local_c8);
                  piVar8[3] = piVar8[3] + 1;
                  local_90 = 0x1b;
                  recovered_1000a834(piVar8 + 8,DAT_10009370);
                  piVar8 = local_108;
                  recovered_1000f790(local_120,local_108[3] + -1);
                  piVar8 = (int *)(piVar8[2] + piVar8[3] * 0x28 + -0x28);
                }
                local_c8.count = 0;
                recovered_10006e94(local_c8.pixels);
                dVar20=pf_pen;
              }
              local_90 = 0x1c;
              local_108 = piVar8;
              dVar20 = recovered_10004e6c(pf_pen);
              uVar18 = (undefined4)(pf_double_bits(dVar20) >> 0x20);
              iVar13 = local_108[1];
              iVar5 = local_108[2];
              pbVar7 = local_f8;
              local_138 = extraout_r1_05;
              if ((byte *)local_104 == local_f8) {
                uVar3 = local_104 << 1;
                if (local_104 == 0) {
                  uVar3 = 4;
                }
                if (uVar3 <= local_104) {
                  pbVar7 = (byte *)local_104;
                  goto LAB_10008c10;
                }
                local_90 = 0x1d;
                local_140 = iVar5;
                local_13c = iVar13;
                local_120 = extraout_r0_05;
                local_f8 = (byte *)uVar3;
                puVar4 = recovered_10006e64(uVar3 * 0xc);
                uVar3 = local_104;
                piVar15 = local_108;
                piVar8 = local_120;
                iVar13 = 0;
                for (uVar6 = local_104; uVar6 != 0; uVar6 = uVar6 - 1) {
                  puVar11 = (undefined8 *)((int)local_110 + iVar13);
                  puVar9 = (undefined8 *)((int)puVar4 + iVar13);
                  iVar13 = iVar13 + 0xc;
                  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar11 + 1);
                  *puVar9 = *puVar11;
                }
                recovered_10006e94(local_110);
                local_144 = (uint)local_f8;
                iVar13 = local_13c;
                local_9c = puVar4;
                iVar5 = local_140;
                local_104 = uVar3;
                local_110 = puVar4;
                pbVar7 = local_f8;
                uVar18 = extraout_s1;
              }
              else {
LAB_10008c10:
                piVar15 = local_108;
                piVar8 = extraout_r0_05;
              }
              iVar17 = (int)dVar20;
              pf_pen += *(double *)((byte *)piVar15+20); dVar20=pf_pen;
              iVar5 = local_11c - iVar5;
              iVar13 = iVar13 + iVar17;
              puVar4 = local_110 + local_104 * 3;
              *puVar4 = piVar15 + 1;
              puVar4[2] = iVar5;
              puVar4[1] = iVar13;
              iVar10 = piVar15[3];
              iVar17 = iVar10;
              iVar12 = local_104 * 3;
              if (0 < iVar10) {
                iVar17 = piVar15[4];
                iVar12 = iVar17;
              }
              if (0 < iVar17) {
                if ((local_124 & 1) == 0) {
                  local_128 = iVar10 + iVar13;
                  local_12c = iVar12 + iVar5;
                  local_124 = 1;
                  local_134 = iVar5;
                  local_130 = iVar13;
                }
                else {
                  if (iVar5 < local_134) {
                    local_134 = iVar5;
                  }
                  if (iVar13 < local_130) {
                    local_130 = iVar13;
                  }
                  if (local_12c <= iVar12 + iVar5) {
                    local_12c = iVar12 + iVar5;
                  }
                  if (local_128 <= iVar10 + iVar13) {
                    local_128 = iVar10 + iVar13;
                  }
                  local_124 = 1;
                }
              }
              local_104 = local_104 + 1;
              local_10c = local_10c + 3;
              puVar4 = local_114 + 1;
            }
            local_90 = 0x16;
            iVar13=(int)recovered_10004e9c(pf_pen);
            uVar3 = -local_134 & ~(-local_134 >> 0x1f);
            pbVar7 = (byte *)(uVar3 + local_12c);
            if ((int)(uVar3 + local_12c) < (int)(uVar3 + local_14c)) {
              pbVar7 = (byte *)(uVar3 + local_14c);
            }
            if (pbVar7 < 2) {
              pbVar7 = (byte *)0x1;
            }
            uVar6 = -local_130 & ~(-local_130 >> 0x1f);
            if (iVar13 < 2) {
              iVar13 = 1;
            }
            puVar4 = local_110;
            piVar15 = local_10c;
            piVar8 = (int *)(uVar6 + local_128);
            if ((int)(uVar6 + local_128) < (int)(iVar13 + uVar6)) {
              piVar8 = (int *)(iVar13 + uVar6);
            }
            for (; piVar15 != (int *)0x0; piVar15 = piVar15 + -3) {
              puVar4[1] = puVar4[1] + uVar6;
              puVar4[2] = puVar4[2] + uVar3;
              puVar4 = puVar4 + 3;
            }
            local_98 = local_9c;
            uVar3 = local_104;
          }
          if (local_e4 == local_e0) {
            local_90 = 0x1e;
            uVar6 = local_e4 << 1;
            if (local_e4 == 0) {
              uVar6 = 4;
            }
            local_108 = piVar8;
            local_104 = uVar3;
            local_f8 = pbVar7;
            recovered_10009404((int *)&local_e8,uVar6);
            uVar3 = local_104;
            pbVar7 = local_f8;
            piVar8 = local_108;
          }
          puVar4 = local_e8 + local_e4 * 5;
          *puVar4 = piVar8;
          puVar4[1] = pbVar7;
          puVar4[2] = local_98;
          puVar4[3] = uVar3;
          puVar4[4] = local_144;
          local_e4 = local_e4 + 1;
          recovered_10006e94((void *)0x0);
          if ((int)local_fc <= (int)local_e8[local_e4 * 5 + -5]) {
            local_fc = (int *)local_e8[local_e4 * 5 + -5];
          }
          local_100 = local_e8[local_e4 * 5 + -4] + local_100;
          puVar4 = local_148 + 3;
        }
        local_90 = 0xe;
        local_c8.left = local_c8.left & 0xffffff00;
        if ((int)local_100 < 2) {
          local_100 = 1;
        }
        local_118 = (undefined4 *)(local_100 * (int)local_fc);
        recovered_1000f940(&local_f4,(uint)local_118,(undefined1 *)&local_c8);
        local_108 = (int *)0x0;
        local_114 = local_e8 + local_e4 * 5;
        puVar4 = local_e8;
        piVar8 = local_fc;
        iVar13 = extraout_r12;
        while (puVar4 != local_114) {
          piVar15 = (int *)puVar4[2];
          local_10c = piVar15 + puVar4[3] * 3;
          local_104 = (uint)local_108;
          local_110 = puVar4;
          for (; piVar15 != local_10c; piVar15 = piVar15 + 3) {
            iVar5 = *piVar15;
            piVar16 = (int *)local_104;
            if (iVar5 != 0) {
              iVar17 = *(int *)(iVar5 + 8);
              if (0 < iVar17) {
                iVar17 = *(int *)(iVar5 + 0xc);
                iVar13 = iVar17;
              }
              if (0 < iVar17) {
                for (iVar17 = 0; iVar17 < iVar13; iVar17 = iVar17 + 1) {
                  if ((uint)(iVar17 + (int)piVar16 + piVar15[2]) < local_100) {
                    local_f8 = (byte *)((int)piVar8 * (piVar15[2] + local_104));
                    for (iVar13 = 0; pbVar7 = local_f4, iVar13 < *(int *)(iVar5 + 8);
                        iVar13 = iVar13 + 1) {
                      iVar12 = iVar13 + piVar15[1];
                      if (((-1 < iVar12) && (iVar12 < (int)piVar8)) &&
                         (bVar1 = *(byte *)(iVar17 * *(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x18) +
                                           iVar13), bVar1 != 0)) {
                        iVar5 = (int)local_f8 + piVar15[1];
                        uVar3 = recovered_10003dc0((int)(short)(ushort)local_f4[iVar13 + iVar5] *
                                                   (int)(short)(bVar1 ^ 0xff),0xff);
                        pbVar7[iVar13 + iVar5] = bVar1 + (char)uVar3;
                        iVar5 = *piVar15;
                        piVar8 = local_fc;
                      }
                    }
                    iVar13 = *(int *)(iVar5 + 0xc);
                    piVar16 = local_108;
                  }
                  local_104 = local_104 + 1;
                }
              }
            }
            local_104 = (uint)piVar16;
          }
          local_108 = (int *)(local_110[1] + local_104);
          puVar4 = local_110 + 5;
        }
        local_90 = 0x1f;
        local_108 = (int *)0xff;
        if ((uint)c < 0xff) {
          local_108 = (int *)c;
        }
        if (c < 0) {
          local_108 = (int *)0x0;
        }
        local_f8 = (byte *)(undefined8 *)0xff;
        if (local_15c < (undefined8 *)0xff) {
          local_f8 = (byte *)local_15c;
        }
        if ((int)local_15c < 0) {
          local_f8 = (byte *)0x0;
        }
        local_104 = 0xff;
        if (local_158 < 0xff) {
          local_104 = local_158;
        }
        if ((int)local_158 < 0) {
          local_104 = 0;
        }
        local_110 = (undefined4 *)(uintptr_t)(int)(opacity+(opacity<0?-0.5:0.5));
        local_90 = 0x20;
        local_10c = recovered_10006e90((int)local_118 << 2);
        uVar3 = local_104;
        piVar8 = local_108;
        puVar14 = (undefined1 *)((int)local_10c + 1);
        iVar13 = UnsignedSaturate(local_110,8);
        UnsignedDoesSaturate(local_110,8);
        pbVar7 = local_f4;
        for (; local_f0 != 0; local_f0 = local_f0 + -1) {
          bVar1 = *pbVar7;
          *puVar14 = (char)local_f8;
          puVar14[1] = (char)piVar8;
          puVar14[-1] = (char)uVar3;
          uVar6 = recovered_10003dc0(iVar13 * (uint)bVar1 & 0xffff,0xff);
          puVar14[2] = (char)uVar6;
          puVar14 = puVar14 + 4;
          pbVar7 = pbVar7 + 1;
        }
        local_90 = 0x21;
        recovered_10009374(&local_c8.left);
        local_c8.width = (int)local_10c;
        local_c8.top = local_100;
        local_c8.left = (int)local_fc;
        local_90 = 0x22;
        pbVar7 = recovered_10006e64(0x18);
        *(ulonglong *)pbVar7 = CONCAT44(local_c8.top,local_c8.left);
        *(ulonglong *)((int)pbVar7 + 8) = CONCAT44(local_c8.height,local_c8.width);
        *(double *)((int)pbVar7 + 0x10) = local_c8.advance;
        local_f0 = 0;
        recovered_10006e94(local_f4);
        recovered_100094ac((int *)&local_e8);
        recovered_1000fa20((int *)&local_dc);
      }
    }
  }
  recovered_10007378(&uStack_94);
  return (undefined8 *)pbVar7;
}

#undef DAT_10009364
#undef DAT_10009368
#undef DAT_1000936c
#undef DAT_10009370
#undef uStack_94
#undef auStack_68
#undef in_stack_00000004
#undef local_170
#undef local_15c
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
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x55b4U)
 */

void recovered_10009374(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = recovered_10006e90(4);
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = puVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x55ecU)
 */

void recovered_100093ac(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000fa88(param_1,uVar3);
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1 + 1;
  puVar2 = (undefined4 *)(*param_1 + iVar1 * 0xc);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5644U)
 */

void recovered_10009404(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10006e64(param_2 * 0x14);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000fb4c((undefined4 *)((int)pvVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_10009488(*param_1 + iVar2);
      iVar2 = iVar2 + 0x14;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x56c8U)
 */

int recovered_10009488(int param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0xc) = 0;
  recovered_10006e94(*(void **)(param_1 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x56ecU)
 */

int * recovered_100094ac(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x14;
  for (; iVar2 = iVar2 + -0x14, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10009488(*param_1 + iVar2);
  }
  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5740U)
 */

void recovered_10009500(int *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (int *)0x0) {
    recovered_1000a3d4(param_1 + 8);
    recovered_1000a3d4(param_1 + 5);
    recovered_1000f5fc(param_1 + 2);
    recovered_10006e94((void *)param_1[2]);
    if ((int *)*param_1 != (int *)0x0) {
      ((uintptr_t (*)(void *))(*(uintptr_t *)(*(uintptr_t *)(uintptr_t)*param_1 + 4)))((void *)(uintptr_t)*param_1);
    }
  }
  recovered_10006e94(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5798U)
 */

uint recovered_10009558(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *(uint *)(*param_1 + param_2);
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57a8U)
 */

undefined4 * recovered_10009568(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57ccU)
 */

undefined4 * recovered_1000958c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000a3d4(param_1 + 6);
  recovered_1000a3d4(param_1 + 3);
  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


#undef DAT_1000960c
#define DAT_1000960c (*(int *)(((uintptr_t)pf_module_state + 0x584cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5800U)
 */

int * recovered_100095c0(int *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000960c + 8;
  recovered_1000a448((int)(param_1 + 0x2b));
  recovered_10009568(param_1 + 0x28);
  recovered_1000f96c(param_1 + 0x20);
  recovered_1000958c(param_1 + 4);
  recovered_1000f91c(param_1 + 1);
  return param_1;
}

#undef DAT_1000960c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5850U)
 */

void recovered_10009610(int *in_r0)

{
  unsigned char frame[64] = {0};

  int *data;

  data = recovered_100095c0(in_r0);
  recovered_10006e94(data);
  return;
}


#undef DAT_10009e8c
#define DAT_10009e8c (*(uint *)(((uintptr_t)pf_module_state + 0x60ccU)))
#undef DAT_10009e90
#define DAT_10009e90 (*(int *)(((uintptr_t)pf_module_state + 0x60d0U)))
#undef DAT_10009e94
#define DAT_10009e94 (*(int *)(((uintptr_t)pf_module_state + 0x60d4U)))
#undef DAT_10009e98
#define DAT_10009e98 (*(int *)(((uintptr_t)pf_module_state + 0x60d8U)))
#undef DAT_10009e9c
#define DAT_10009e9c (*(int *)(((uintptr_t)pf_module_state + 0x60dcU)))
#undef DAT_10009ea0
#define DAT_10009ea0 (*(int *)(((uintptr_t)pf_module_state + 0x60e0U)))
#undef DAT_10009ea4
#define DAT_10009ea4 (*(int *)(((uintptr_t)pf_module_state + 0x60e4U)))
#undef DAT_10009ea8
#define DAT_10009ea8 (*(int *)(((uintptr_t)pf_module_state + 0x60e8U)))
#undef DAT_10009eac
#define DAT_10009eac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x60ecU)))
#define local_24 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5864U)
 */

bool recovered_10009624(int param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[84] = {0};

  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  byte *pbVar15;
  ushort uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ushort uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  ushort *puVar26;

  local_24 = (int)(uintptr_t)(frame + 52) - 8;
  piVar23 = (int *)(param_1 + 4);
  recovered_1000a470(piVar23,param_2,param_3,param_4);
  uVar21 = *(uint *)(param_1 + 8);
  if (uVar21 < 0xc) {
    return false;
  }
  uVar6 = recovered_10009558(piVar23,0);
  if (uVar6 != DAT_10009e8c && uVar6 != 0x10000) {
    return false;
  }
  uVar6 = (*(ushort *)(*piVar23 + 4) & 0xff) << 8 | (uint)(*(ushort *)(*piVar23 + 4) >> 8);
  if (uVar21 - 0xc < uVar6 << 4) {
    return false;
  }
  piVar24 = (int *)(param_1 + 0x10);
  for (uVar21 = 0; uVar21 != uVar6; uVar21 = uVar21 + 1) {
    local_24 = recovered_10009558(piVar23,uVar21 << 4 | 0xc);
    uVar7 = recovered_10009558(piVar23,uVar21 * 0x10 + 0x14);
    uVar8 = recovered_10009558(piVar23,uVar21 * 0x10 + 0x18);
    if ((*(uint *)(param_1 + 8) < uVar7) || (*(uint *)(param_1 + 8) - uVar7 < uVar8)) {
      return false;
    }
    uVar9 = recovered_1000a62c(piVar24,&local_24);
    puVar3 = DAT_10009eac;
    uVar12 = *(uint *)(param_1 + 0x14);
    if (uVar9 == 0xffffffff || uVar9 == uVar12) {
      if ((*(int *)(param_1 + 0x20) == 0) ||
         ((uint)(*(int *)(param_1 + 0x20) * 3) < (uVar12 + 1) * 4)) {
        uVar17 = uVar12 * 2 + 2;
        uVar9 = uVar12 << 1;
        if (uVar12 < 4) {
          uVar9 = 8;
        }
        if (uVar9 <= uVar17) {
          uVar9 = uVar17;
        }
        uVar12 = 8;
        do {
          uVar17 = uVar12;
          uVar12 = uVar17 << 1;
        } while (uVar17 < uVar9);
        recovered_1000a6f0((int *)(param_1 + 0x1c),uVar17,DAT_10009eac);
        recovered_1000a6f0((int *)(param_1 + 0x28),*(uint *)(param_1 + 0x14),puVar3);
        for (uVar9 = 0; uVar9 < *(uint *)(param_1 + 0x20); uVar9 = uVar9 + 1) {
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar9 * 4) = 0xffffffff;
        }
        for (uVar9 = 0; uVar12 = *(uint *)(param_1 + 0x14), uVar9 < uVar12; uVar9 = uVar9 + 1) {
          recovered_1000a5f0(piVar24,uVar9);
        }
      }
      if (uVar12 == *(uint *)(param_1 + 0x18)) {
        uVar9 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar9 = 4;
        }
        if (uVar12 < uVar9) {
          pvVar10 = recovered_10006e64(uVar9 * 0xc);
          iVar13 = 0;
          for (iVar11 = *(int *)(param_1 + 0x14); iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar18 = (undefined8 *)((int)pvVar10 + iVar13);
            puVar19 = (undefined8 *)(*piVar24 + iVar13);
            iVar13 = iVar13 + 0xc;
            *puVar18 = *puVar19;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar19 + 1);
          }
          recovered_10006e94(*(void **)(param_1 + 0x10));
          uVar12 = *(uint *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x18) = uVar9;
          *(void **)(param_1 + 0x10) = pvVar10;
        }
      }
      puVar14 = (uint *)(*(int *)(param_1 + 0x10) + uVar12 * 0xc);
      *puVar14 = local_24;
      puVar14[2] = 0;
      puVar14[1] = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      recovered_1000a834((int *)(param_1 + 0x28),DAT_10009eac);
      recovered_1000a5f0(piVar24,*(int *)(param_1 + 0x14) + -1);
      iVar11 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 0xc + -0xc;
    }
    else {
      iVar11 = *piVar24 + uVar9 * 0xc;
    }
    *(uint *)(iVar11 + 8) = uVar8;
    *(uint *)(iVar11 + 4) = uVar7;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009e90,(undefined4 *)(param_1 + 0x38));
  if (!bVar4) {
    return false;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009e94,(undefined4 *)(param_1 + 0x40));
  if (!bVar4) {
    return false;
  }
  puVar14 = (uint *)(param_1 + 0x48);
  bVar4 = recovered_1000a4c4(param_1,DAT_10009e98,puVar14);
  if (!bVar4) {
    return false;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009e9c,(undefined4 *)(param_1 + 0x50));
  if (!bVar4) {
    return false;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009ea0,(uint *)(param_1 + 0x58));
  if (!bVar4) {
    return false;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009ea4,(undefined4 *)(param_1 + 0x60));
  if (!bVar4) {
    return false;
  }
  bVar4 = recovered_1000a4c4(param_1,DAT_10009ea8,(uint *)(param_1 + 0x68));
  if (!bVar4) {
    return false;
  }
  uVar21 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x50);
  if (uVar21 < uVar6 || uVar21 - uVar6 < 0x36) {
    return false;
  }
  uVar7 = *(uint *)(param_1 + 0x58);
  if (uVar21 < uVar7 || uVar21 - uVar7 < 0x24) {
    return false;
  }
  uVar8 = *(uint *)(param_1 + 0x68);
  if (uVar21 < uVar8 || uVar21 - uVar8 < 6) {
    return false;
  }
  iVar11 = *(int *)(param_1 + 4);
  uVar5 = *(ushort *)(iVar11 + uVar6 + 0x12);
  *(ushort *)(param_1 + 0x70) = uVar5 << 8 | uVar5 >> 8;
  if ((uVar5 & 0xff) == 0 && uVar5 >> 8 == 0) {
    return false;
  }
  uVar5 = *(ushort *)(iVar11 + uVar6 + 0x32);
  uVar16 = uVar5 << 8 | uVar5 >> 8;
  iVar13 = iVar11 + uVar7;
  *(ushort *)(param_1 + 0x78) = uVar16;
  *(ushort *)(param_1 + 0x72) = *(ushort *)(iVar13 + 4) << 8 | *(ushort *)(iVar13 + 4) >> 8;
  *(ushort *)(param_1 + 0x74) =
       (ushort)*(byte *)(iVar13 + 6) * -0x100 - (ushort)*(byte *)(iVar13 + 7);
  *(ushort *)(param_1 + 0x76) = *(ushort *)(iVar13 + 8) << 8 | *(ushort *)(iVar13 + 8) >> 8;
  uVar20 = *(ushort *)(iVar13 + 0x22) << 8 | *(ushort *)(iVar13 + 0x22) >> 8;
  *(ushort *)(param_1 + 0x7c) = uVar20;
  uVar5 = *(ushort *)(iVar11 + uVar8 + 4);
  uVar6 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
  *(short *)(param_1 + 0x7a) = (short)uVar6;
  if ((uVar5 & 0xff) == 0 && uVar5 >> 8 == 0 || uVar20 == 0) {
    return false;
  }
  uVar8 = *puVar14;
  uVar7 = uVar21 - uVar8;
  if (uVar16 == 0) {
    bVar4 = uVar21 < uVar8;
    if (!bVar4) {
      uVar21 = uVar6 * 2 + 2;
    }
    if (bVar4 || uVar7 < uVar21) {
      return false;
    }
    recovered_1000a890((int *)(param_1 + 0x80),uVar6 + 1);
    iVar11 = *(int *)(param_1 + 0x84);
    for (iVar13 = 0; iVar11 != iVar13; iVar13 = iVar13 + 1) {
      pbVar15 = (byte *)(*piVar23 + *puVar14 + iVar13 * 2);
      *(uint *)(*(int *)(param_1 + 0x80) + iVar13 * 4) = (uint)pbVar15[1] << 1 | (uint)*pbVar15 << 9
      ;
    }
  }
  else {
    bVar4 = uVar21 < uVar8;
    if (!bVar4) {
      uVar21 = uVar6 * 4 + 4;
    }
    if (bVar4 || uVar7 < uVar21) {
      return false;
    }
    recovered_1000a890((int *)(param_1 + 0x80),uVar6 + 1);
    iVar22 = 0;
    iVar11 = *(int *)(param_1 + 0x84);
    for (iVar13 = iVar11; iVar13 != 0; iVar13 = iVar13 + -1) {
      uVar21 = recovered_10009558(piVar23,iVar22 + *puVar14);
      *(uint *)(*(int *)(param_1 + 0x80) + iVar22) = uVar21;
      iVar22 = iVar22 + 4;
    }
  }
  iVar11 = iVar11 << 2;
  puVar14 = *(uint **)(param_1 + 0x80);
  while (iVar11 != 0) {
    uVar21 = *puVar14;
    iVar11 = iVar11 + -4;
    puVar14 = puVar14 + 1;
    if (*(uint *)(param_1 + 0x44) < uVar21) {
      return false;
    }
  }
  uVar7 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x38);
  uVar21 = uVar7 - uVar6;
  if (uVar7 < uVar6) {
    return false;
  }
  bVar4 = 3 < uVar21;
  uVar8 = uVar7;
  if (bVar4) {
    uVar21 = uVar6 + 4;
    uVar8 = uVar7 - uVar21;
  }
  if (!bVar4 || uVar7 < uVar21) {
    return false;
  }
  uVar5 = *(ushort *)(*piVar23 + uVar6 + 2);
  uVar21 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
  if (uVar8 < uVar21 << 3) {
    return false;
  }
  uVar6 = 0;
  do {
    if (uVar6 == uVar21) {
      bVar4 = true;
      if (*(char *)(param_1 + 0x9e) == '\0') {
        bVar4 = *(int *)(param_1 + 0xa4) != 0;
      }
      return bVar4;
    }
    iVar22 = *(int *)(param_1 + 0x38);
    iVar25 = *(int *)(param_1 + 4);
    iVar11 = iVar22 + uVar6 * 8;
    iVar13 = iVar11 + iVar25;
    uVar5 = *(ushort *)(iVar13 + 6);
    uVar16 = *(ushort *)(iVar13 + 4);
    uVar7 = recovered_10009558(piVar23,iVar11 + 8);
    if (uVar7 < *(uint *)(param_1 + 0x3c)) {
      uVar8 = *(uint *)(param_1 + 8);
      uVar7 = uVar7 + iVar22;
      uVar9 = uVar8 - uVar7;
      if (uVar7 <= uVar8 && 1 < uVar9) {
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar16 = uVar16 << 8 | uVar16 >> 8;
        puVar26 = (ushort *)(iVar25 + uVar7);
        uVar12 = (uint)*puVar26 << 0x18 | (uint)(*puVar26 >> 8) << 0x10;
        if (uVar12 == 0xc0000) {
          if ((uVar16 == 3 || uVar16 == 0) && (0xf < uVar9)) {
            uVar12 = recovered_10009558(piVar23,uVar7 + 4);
            uVar17 = recovered_10009558(piVar23,uVar7 + 0xc);
            if (0xf < uVar12 && uVar12 <= uVar9) {
              uVar9 = uVar7 + 0x10;
              bVar4 = uVar9 <= uVar8;
              uVar9 = uVar8 - uVar9;
              if (bVar4) {
                uVar8 = uVar17 * 0xc;
              }
              if (bVar4 && uVar8 <= uVar9) {
                bVar4 = *(int *)(param_1 + 0xa4) != 0;
                uVar16 = 0;
                if (bVar4) {
                  uVar16 = uVar5;
                }
                if ((!bVar4 || uVar16 == 10) || (uVar5 == 4)) {
                  *(undefined4 *)(param_1 + 0xa4) = 0;
                  recovered_1000a95c((int *)(param_1 + 0xa0),uVar17);
                  iVar11 = uVar7 + 0x18;
                  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                    uVar7 = recovered_10009558(piVar23,iVar11 + -8);
                    uVar8 = recovered_10009558(piVar23,iVar11 + -4);
                    uVar9 = recovered_10009558(piVar23,iVar11);
                    iVar13 = *(int *)(param_1 + 0xa4);
                    if (iVar13 == *(int *)(param_1 + 0xa8)) {
                      uVar12 = iVar13 << 1;
                      if (iVar13 == 0) {
                        uVar12 = 4;
                      }
                      recovered_1000a95c((int *)(param_1 + 0xa0),uVar12);
                      iVar13 = *(int *)(param_1 + 0xa4);
                    }
                    *(int *)(param_1 + 0xa4) = iVar13 + 1;
                    iVar11 = iVar11 + 0xc;
                    puVar14 = (uint *)(*(int *)(param_1 + 0xa0) + iVar13 * 0xc);
                    *puVar14 = uVar7;
                    puVar14[2] = uVar9;
                    puVar14[1] = uVar8;
                  }
                }
              }
            }
          }
        }
        else if ((((uVar12 == 0x40000) && (uVar16 == 3 || uVar16 == 0)) && (7 < uVar9)) &&
                (uVar12 = (puVar26[1] & 0xff) << 8 | (uint)(puVar26[1] >> 8),
                0xf < uVar12 && uVar12 <= uVar9)) {
          uVar16 = CONCAT11((char)puVar26[3],*(byte *)((int)puVar26 + 7));
          uVar9 = (uint)uVar16;
          if ((uVar9 != 0) && ((*(byte *)((int)puVar26 + 7) & 1) == 0)) {
            iVar22 = uVar7 + uVar9 + 0x10;
            iVar11 = iVar22 + uVar9;
            iVar13 = iVar11 + uVar9;
            uVar9 = iVar13 + uVar9;
            if ((uVar9 <= uVar8) && (uVar9 <= uVar7 + uVar12)) {
              bVar1 = 1;
              if (uVar5 != 1) {
                bVar1 = *(byte *)(param_1 + 0x9e);
              }
              if (uVar5 != 1 && (bVar1 & 1) != 0) {
                bVar4 = uVar5 != 3;
                if (!bVar4) {
                  uVar5 = *(ushort *)(param_1 + 0x9c);
                }
                if (bVar4 || uVar5 != 0) goto LAB_10009c08;
              }
              *(short *)(param_1 + 0x9c) = (short)uVar12;
              *(ushort *)(param_1 + 0x90) = uVar16 >> 1;
              *(undefined2 *)(param_1 + 0x92) = 0xe;
              sVar2 = (short)uVar7;
              *(short *)(param_1 + 0x9a) = (short)uVar9 - sVar2;
              *(short *)(param_1 + 0x98) = (short)iVar13 - sVar2;
              *(short *)(param_1 + 0x96) = (short)iVar11 - sVar2;
              *(undefined1 *)(param_1 + 0x9e) = 1;
              *(uint *)(param_1 + 0x8c) = uVar7;
              *(short *)(param_1 + 0x94) = (short)iVar22 - sVar2;
            }
          }
        }
      }
    }
LAB_10009c08:
    uVar6 = uVar6 + 1;
  } while( true );
}

#undef DAT_10009e8c
#undef DAT_10009e90
#undef DAT_10009e94
#undef DAT_10009e98
#undef DAT_10009e9c
#undef DAT_10009ea0
#undef DAT_10009ea4
#undef DAT_10009ea8
#undef DAT_10009eac
#undef local_24

#undef DAT_1000a368
#define DAT_1000a368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef DAT_1000a36c
#define DAT_1000a36c (*(int *)(((uintptr_t)pf_module_state + 0x65acU)))
#undef DAT_1000a370
#define DAT_1000a370 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x65b0U)))
#define local_138 (*(double *)(frame + 184))
#define local_130 (*(undefined4 *)(frame + 192))
#define local_12c (*(undefined4 *)(frame + 196))
#define local_128 (*(undefined4 *)(frame + 200))
#define local_124 (*(undefined4 *)(frame + 204))
#define local_118 (*(undefined4 *)(frame + 216))
#define local_114 (*(undefined4 *)(frame + 220))
#define local_110 (*(undefined4 *)(frame + 224))
#define local_10c (*(undefined4 *)(frame + 228))
#define uStack_b4 (*(undefined4 *)(frame + 316))
#define local_108 (*(void * *)(frame + 232))
#define uStack_b0 (*(undefined4 *)(frame + 320))
#define local_104 (*(undefined4 *)(frame + 236))
#define uStack_ac (*(undefined4 *)(frame + 324))
#define local_100 (*(undefined4 *)(frame + 240))
#define local_fc (*(undefined2 *)(frame + 244))
#define local_f8 (*(undefined4 *)(frame + 248))
#define local_f4 (*(undefined4 *)(frame + 252))
#define local_f0 (*(undefined4 *)(frame + 256))
#define uStack_94 (*(undefined4 *)(frame + 348))
#define local_ec (*(undefined4 *)(frame + 260))
#define local_e8 (*(undefined4 *)(frame + 264))
#define local_e4 (*(undefined4 *)(frame + 268))
#define local_e0 (*(undefined4 *)(frame + 272))
#define local_dc (*(undefined4 *)(frame + 276))
#define local_d8 (*(undefined4 *)(frame + 280))
#define auStack_68 (*(undefined1 (*)[8])(frame + 392))
#define local_d4 (*(undefined4 *)(frame + 284))
#define local_d0 (*(undefined4 *)(frame + 288))
#define local_cc (*(undefined4 *)(frame + 292))
#define local_c8 (*(undefined4 *)(frame + 296))
#define local_c4 (*(undefined4 *)(frame + 300))
#define local_c0 (*(undefined4 *)(frame + 304))
#define local_bc (*(undefined4 *)(frame + 308))
#define local_b8 (*(undefined4 *)(frame + 312))
#define local_a8 (*(double *)(frame + 328))
#define local_a0 (*(void * *)(frame + 336))
#define local_9c (*(undefined4 *)(frame + 340))
#define local_98 (*(undefined4 *)(frame + 344))
#define local_90 (*(undefined4 *)(frame + 352))
#define local_7c (*(undefined4 *)(frame + 372))
#define local_78 (*(undefined4 *)(frame + 376))
#define local_74 (*(undefined1 * *)(frame + 380))
#define local_70 (*(int *)(frame + 384))
#define local_6c (*(undefined1 * *)(frame + 388))
#define in_stack_00000000 (*(undefined4 *)(frame + 496))
#define auStackY_1e0 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60f0U)
 */

void recovered_10009eb0(void *out,void *backend,uint glyph,double scale)

{
  unsigned char frame[528] = {0};

  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_r3;
  uint extraout_r3 = 0;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1e0 + 0x80;
  uStack_b4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uStack_b0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uStack_ac = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_b8 = 0;
  local_7c = *DAT_1000a370;
  local_a8 = 0.0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_78 = DAT_1000a368;
  local_70 = DAT_1000a36c + ((uintptr_t)pf_module_state+0x6168U);
  local_90 = 1;
  local_108 = (void *)glyph;
  recovered_10007360(&uStack_94);
  iVar4 = recovered_1000bb78((int *)((int)backend + 0xac),(int *)&local_108);
  if (iVar4 == *(int *)((int)backend + 0xac) + *(int *)((int)backend + 0xb0) * 8) {
    uVar10 = (uint)local_108 >> 0x10;
    bVar16 = uVar10 == 0;
    if (bVar16) {
      uVar10 = (uint)*(byte *)((int)backend + 0x9e);
    }
    uVar5 = extraout_r3;
    if (bVar16 && uVar10 == 1) {
      uVar5 = *(uint *)((int)backend + 0x8c);
      iVar4 = 0;
      do {
        if ((uint)*(ushort *)((int)backend + 0x90) * 2 == iVar4) goto LAB_10009f88;
        iVar9 = *(int *)((int)backend + 4);
        puVar13 = (ushort *)(iVar9 + (uint)*(ushort *)((int)backend + 0x92) + uVar5 + iVar4);
        iVar4 = iVar4 + 2;
        uVar1 = *puVar13;
      } while (((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10 <
               ((uint)local_108 & 0xffff));
      uVar1 = *(ushort *)(iVar9 + (uint)*(ushort *)((int)backend + 0x94) + uVar5 + iVar4 + -2);
      uVar10 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      if (((uint)local_108 & 0xffff) < uVar10 >> 0x10) goto LAB_10009f88;
      uVar7 = (uint)*(ushort *)((int)backend + 0x98);
      uVar1 = *(ushort *)(iVar9 + uVar7 + uVar5 + iVar4 + -2);
      uVar2 = *(ushort *)(iVar9 + (uint)*(ushort *)((int)backend + 0x96) + uVar5 + iVar4 + -2);
      pvVar3 = local_108;
      if ((uVar1 & 0xff) != 0 || uVar1 >> 8 != 0) {
        uVar8 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
        iVar14 = uVar5 + (int)local_108 * 2;
        uVar10 = uVar10 >> 0x10;
        iVar15 = uVar7 + uVar8 + uVar10 * -2;
        uVar5 = (iVar14 + iVar15 + iVar4) - 2;
        if (((*(uint *)((int)backend + 8) < uVar5) ||
            (uVar5 = ((((*(uint *)((int)backend + 8) + uVar10 * 2) - uVar7) - (uVar8 + iVar14)) -
                     iVar4) + 2, uVar5 < 2)) ||
           (uVar1 = *(ushort *)(iVar14 + iVar9 + iVar15 + iVar4 + -2),
           uVar10 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10, uVar10 == 0))
        goto LAB_10009f88;
        pvVar3 = (void *)(uVar10 >> 0x10);
      }
      uVar10 = ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) + (int)pvVar3;
      if ((uVar10 & 0xffff) == 0) goto LAB_10009f88;
    }
    else {
LAB_10009f88:
      if (*(uint *)((int)backend + 0xa4) != 0) {
        uVar7 = 0;
        uVar10 = *(uint *)((int)backend + 0xa4);
        while (uVar7 < uVar10) {
          uVar5 = uVar7 + (uVar10 - uVar7 >> 1);
          puVar12 = (uint *)(*(int *)((int)backend + 0xa0) + uVar5 * 0xc);
          if (local_108 < (void *)*puVar12) {
            uVar10 = uVar5;
          }
          else {
            if (local_108 <= (void *)puVar12[1]) {
              uVar10 = (int)local_108 + (puVar12[2] - (int)*puVar12);
              goto LAB_10009fec;
            }
            uVar7 = uVar5 + 1;
          }
        }
      }
      uVar10 = 0;
    }
LAB_10009fec:
    local_90 = 2;
    puVar6 = (undefined2 *)recovered_1000bb9c((int *)((int)backend + 0xac),&local_108,uVar10,uVar5);
    *puVar6 = (short)uVar10;
  }
  else {
    uVar10 = (uint)*(ushort *)(iVar4 + 4);
  }
  uVar7 = uVar10 & 0xffff;
  uVar5 = (uint)*(ushort *)((int)backend + 0x7c);
  if (*(ushort *)((int)backend + 0x7a) <= uVar7) {
    uVar10 = 0;
  }
  uVar8 = uVar10 & 0xffff;
  if (uVar5 <= uVar8) {
    uVar10 = uVar5 - 1;
  }
  uVar11 = *(uint *)((int)backend + 8);
  uVar10 = *(int *)((int)backend + 0x60) + (uVar10 & 0xffff) * 4;
  if (uVar11 < uVar10 || uVar11 - uVar10 < 4) {
LAB_1000a058:
    local_a8 = (double)VectorUnsignedToFloat
                                 ((uint)*(ushort *)((int)backend + 0x70),
                                  (byte)(in_fpscr >> 0x16) & 3);
    local_a8 = local_a8 * scale;
    recovered_1000aa08(out,(undefined8 *)&local_b8);
  }
  else {
    uVar1 = *(ushort *)(*(int *)((int)backend + 4) + uVar10);
    if (uVar5 <= uVar8) {
      uVar10 = *(int *)((int)backend + 0x60) + uVar5 * 2 + uVar8 * 2;
      bVar16 = uVar11 == uVar10;
      if (uVar10 <= uVar11) {
        bVar16 = uVar11 - uVar10 == 1;
      }
      if (uVar11 <= uVar10 || bVar16) goto LAB_1000a058;
    }
    local_f4 = 0;
    local_a8 = (double)VectorUnsignedToFloat
                                 ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),
                                  (byte)(in_fpscr >> 0x16) & 3);
    local_f8 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_d4 = 0;
    local_a8 = local_a8 * scale;
    local_d8 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_fc = 0;
    local_100 = 0;
    local_104 = 0;
    local_108 = (void *)0x0;
    local_90 = 3;
    local_12c = 0;
    local_130 = 0;
    local_124 = 0;
    local_128 = 0;
    local_114 = 0;
    local_118 = 0;
    local_10c = 0;
    local_110 = 0;
    double matrix[6]={scale,0,0,scale,0,0};
    puVar6 = recovered_1000aa40((int)backend,uVar7,matrix,(int *)&local_108,0);
    if (puVar6 == (undefined2 *)0x0) {
      recovered_1000aa08(out,(undefined8 *)&local_b8);
    }
    else {
      local_90 = 4;
      recovered_1000b764(out,(int *)&local_108,local_a8);
      *(double *)((int)out + 0x10) = local_a8;
    }
    local_104 = 0;
    recovered_10006e94(local_108);
  }
  local_9c = 0;
  recovered_10006e94(local_a0);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_1000a368
#undef DAT_1000a36c
#undef DAT_1000a370
#undef local_138
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef uStack_b4
#undef local_108
#undef uStack_b0
#undef local_104
#undef uStack_ac
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef uStack_94
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef auStack_68
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
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
#undef in_stack_00000000
#undef auStackY_1e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65b4U)
 */

undefined8 recovered_1000a374(int param_1)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = pf_double_bits(VectorUnsignedToFloat((uint)*(ushort *)(param_1 + 0x70),(byte)(in_fpscr >> 0x16) & 3));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65c8U)
 */

undefined8 recovered_1000a388(int param_1)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = pf_double_bits(VectorSignedToFloat((int)*(short *)(param_1 + 0x72),(byte)(in_fpscr >> 0x16) & 3));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65dcU)
 */

undefined8 recovered_1000a39c(int param_1)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = pf_double_bits(VectorUnsignedToFloat
                    ((int)*(short *)(param_1 + 0x74) & ~((int)*(short *)(param_1 + 0x74) >> 0x1f),
                     (byte)(in_fpscr >> 0x16) & 3));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65f4U)
 */

undefined8 recovered_1000a3b4(int param_1)

{
  unsigned char frame[64] = {0};

  uint in_fpscr;
  undefined8 uVar1;

  uVar1 = pf_double_bits(VectorUnsignedToFloat
                    ((int)*(short *)(param_1 + 0x76) & ~((int)*(short *)(param_1 + 0x76) >> 0x1f),
                     (byte)(in_fpscr >> 0x16) & 3));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x660cU)
 */

undefined4 recovered_1000a3cc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6614U)
 */

undefined4 * recovered_1000a3d4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6638U)
 */

void recovered_1000a3f8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6664U)
 */

undefined4 * recovered_1000a424(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6688U)
 */

void recovered_1000a448(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000a3d4((undefined4 *)(param_1 + 0x18));
  recovered_1000a3d4((undefined4 *)(param_1 + 0xc));
  recovered_1000a424((undefined4 *)param_1);
  return;
}


#define local_18 (*(int * *)(frame + 16))
#define iStack_14 (*(int *)(frame + 20))
#define local_10 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66b0U)
 */

int * recovered_1000a470(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[72] = {0};

  int *data;
  int iVar1;

  if (param_1 != param_2) {
    local_18 = param_2;
    iStack_14 = param_3;
    local_10 = param_4;
    recovered_1000a528((int *)&local_18,param_2);
    data = (int *)*param_1;
    iVar1 = param_1[2];
    param_1[2] = local_10;
    *param_1 = (int)local_18;
    param_1[1] = iStack_14;
    iStack_14 = 0;
    local_18 = data;
    local_10 = iVar1;
    recovered_10006e94(data);
  }
  return param_1;
}

#undef local_18
#undef iStack_14
#undef local_10

#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6704U)
 */

bool recovered_1000a4c4(int param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[68] = {0};

  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r2 = 0;
  int iVar4;

  local_14 = param_2;
  iVar2 = recovered_1000a62c((int *)(param_1 + 0x10),&local_14);
  iVar4 = extraout_r2;
  if (iVar2 != -1) {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  bVar1 = iVar2 != -1 && iVar2 != iVar4;
  if (bVar1) {
    iVar4 = *(int *)(param_1 + 0x10) + iVar2 * 0xc;
    uVar3 = *(undefined4 *)(iVar4 + 4);
    param_3[1] = *(undefined4 *)(iVar4 + 8);
    *param_3 = uVar3;
  }
  return bVar1;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6768U)
 */

int * recovered_1000a528(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_1000a580(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67c0U)
 */

void recovered_1000a580(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000a5e0(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6820U)
 */

uint recovered_1000a5e0(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6830U)
 */

void recovered_1000a5f0(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000a698((int)param_1,*param_1 + param_2 * 0xc);
  iVar2 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x686cU)
 */

int recovered_1000a62c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000a698((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      if (*(int *)(*param_1 + iVar3 * 0xc) == *param_2) {
        return iVar3;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68d8U)
 */

uint recovered_1000a698(int param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000a6c0(param_2,4);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


#undef DAT_1000a6e8
#define DAT_1000a6e8 (*(uint *)(((uintptr_t)pf_module_state + 0x6928U)))
#undef DAT_1000a6ec
#define DAT_1000a6ec (*(int *)(((uintptr_t)pf_module_state + 0x692cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6900U)
 */

uint recovered_1000a6c0(byte *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = DAT_1000a6e8;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (uVar1 ^ *param_1) * DAT_1000a6ec;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

#undef DAT_1000a6e8
#undef DAT_1000a6ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6930U)
 */

void recovered_1000a6f0(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000a6fc(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x693cU)
 */

void recovered_1000a6fc(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000a764(param_1,param_2);
    return;
  }
  recovered_1000a7c0(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x69a4U)
 */

void recovered_1000a764(int *param_1,uint param_2)

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
    recovered_1000a7c0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a00U)
 */

void recovered_1000a7c0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000a820(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined4 *)(uVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a60U)
 */

uint recovered_1000a820(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 2);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a74U)
 */

int recovered_1000a834(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000a7c0(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6ad0U)
 */

void recovered_1000a890(int *param_1,uint param_2)

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
    recovered_1000a8e8(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b28U)
 */

void recovered_1000a8e8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000a948(param_2);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined4 *)(uVar1 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b88U)
 */

uint recovered_1000a948(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 2);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b9cU)
 */

void recovered_1000a95c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10006e64(param_2 * 0xc);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined8 *)((int)pvVar1 + iVar3);
      puVar6 = (undefined8 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 0xc;
      *puVar5 = *puVar6;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c20U)
 */

void recovered_1000a9e0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  param_1[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  param_1[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c48U)
 */

undefined8 * recovered_1000aa08(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  recovered_1000bee4((undefined4 *)(param_1 + 3),(undefined4 *)(param_2 + 3));
  return param_1;
}


#undef DAT_1000aef4
#define DAT_1000aef4 (*(double *)(((uintptr_t)pf_module_state + 0x7134U)))
#undef DAT_1000b758
#define DAT_1000b758 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7998U)))
#undef DAT_1000b75c
#define DAT_1000b75c (*(int *)(((uintptr_t)pf_module_state + 0x799cU)))
#undef DAT_1000b760
#define DAT_1000b760 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x79a0U)))
#define auStackY_1e0 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 348))
#define auStack_68 (*(undefined1 (*)[8])(frame + 392))
#define local_154 (*(uint *)(frame + 156))
#define local_13c (*(double * *)(frame + 180))
#define local_134 (*(uint *)(frame + 188))
#define local_12c (*(double (*)[2])(frame + 196))
#define local_11c (*(double (*)[2])(frame + 212))
#define local_10c (*(char * *)(frame + 228))
#define local_108 (*(int *)(frame + 232))
#define local_104 (*(undefined4 *)(frame + 236))
#define local_100 (*(double * *)(frame + 240))
#define local_fc (*(uint *)(frame + 244))
#define local_f8 (*(uint *)(frame + 248))
#define local_f4 (*(undefined2 * *)(frame + 252))
#define local_f0 (*(undefined4 *)(frame + 256))
#define local_e8 (*(undefined2 * *)(frame + 264))
#define local_e4 (*(undefined4 *)(frame + 268))
#define local_dc (*(byte * *)(frame + 276))
#define local_d8 (*(uint *)(frame + 280))
#define local_d4 (*(undefined4 *)(frame + 284))
#define local_d0 (*(void * *)(frame + 288))
#define local_cc (*(uint *)(frame + 292))
#define local_c4 (*(double *)(frame + 300))
#define local_bc (*(double *)(frame + 308))
#define local_b4 (*(double *)(frame + 316))
#define local_ac (*(double *)(frame + 324))
#define local_a4 (*(double *)(frame + 332))
#define local_9c (*(double *)(frame + 340))
#define local_90 (*(undefined4 *)(frame + 352))
#define local_7c (*(undefined4 *)(frame + 372))
#define local_78 (*(undefined4 *)(frame + 376))
#define local_74 (*(undefined1 * *)(frame + 380))
#define local_70 (*(int *)(frame + 384))
#define local_6c (*(undefined1 * *)(frame + 388))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c80U)
 */

undefined2 * recovered_1000aa40(int param_1,uint param_2,double *param_3,int *param_4,int param_5)

{
  unsigned char frame[528] = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  uint uVar8;
  double *pdVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint extraout_r1 = 0;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint extraout_r2 = 0;
  int iVar17;
  uint extraout_r3 = 0;
  double *pdVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  undefined2 *puVar22;
  ushort *puVar23;
  uint unaff_r9;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  uint in_fpscr;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1e0 + 0x80;
  local_7c = *DAT_1000b760;
  local_78 = DAT_1000b758;
  local_70 = DAT_1000b75c + ((uintptr_t)pf_module_state+0x6cd8U);
  uVar20 = (uint)*(ushort *)(param_1 + 0x7a);
  recovered_10007360(&uStack_94);
  dVar27 = DAT_1000aef4;
  bVar26 = param_2 <= uVar20;
  bVar25 = uVar20 == param_2;
  puVar22 = (undefined2 *)0x1;
  if (bVar26 && !bVar25) {
    bVar26 = uVar20 <= *(uint *)(param_1 + 0x84);
    bVar25 = *(uint *)(param_1 + 0x84) == uVar20;
  }
  if (!bVar26 || bVar25) goto LAB_1000aabc;
  puVar7 = (uint *)(*(int *)(param_1 + 0x80) + param_2 * 4);
  uVar16 = *puVar7;
  uVar20 = puVar7[1];
  if (((uVar20 < uVar16) || (*(uint *)(param_1 + 0x44) < uVar20)) || (uVar20 == uVar16))
  goto LAB_1000aabc;
  iVar11 = *(int *)(param_1 + 0x40);
  uVar24 = *(uint *)(param_1 + 8);
  uVar19 = iVar11 + uVar16;
  if (uVar19 <= uVar24) {
    unaff_r9 = uVar24 - uVar19;
  }
  if (uVar19 > uVar24 || unaff_r9 < 10) {
LAB_1000ab24:
    puVar22 = (undefined2 *)0x0;
    goto LAB_1000aabc;
  }
  pbVar21 = (byte *)(*(int *)(param_1 + 4) + uVar19);
  bVar1 = *pbVar21;
  if ((short)((ushort)bVar1 << 8) < 0) {
    if (param_5 < 0xc) {
      uVar19 = uVar19 + 10;
      while ((uVar19 <= iVar11 + uVar20 && (uVar19 <= uVar24 && 3 < uVar24 - uVar19))) {
        uVar16 = uVar19 + 4;
        iVar13 = *(int *)(param_1 + 4);
        pbVar21 = (byte *)(iVar13 + uVar19);
        bVar1 = *pbVar21;
        bVar2 = pbVar21[1];
        if ((bVar2 & 1) == 0) {
          if ((uVar24 < uVar16 || uVar24 - uVar16 < 2) || ((bVar2 & 2) == 0)) break;
          iVar17 = (int)(char)pbVar21[5];
          uVar19 = uVar19 + 6;
          iVar14 = (int)*(char *)(iVar13 + uVar16);
        }
        else {
          if ((uVar24 < uVar16 || uVar24 - uVar16 < 4) || ((bVar2 & 2) == 0)) break;
          uVar19 = uVar19 + 8;
          iVar14 = (int)(short)(*(ushort *)(iVar13 + uVar16) << 8 |
                               *(ushort *)(iVar13 + uVar16) >> 8);
          iVar17 = (int)(short)(*(ushort *)(pbVar21 + 6) << 8 | *(ushort *)(pbVar21 + 6) >> 8);
        }
        if ((bVar2 & 8) == 0) {
          if ((bVar2 & 0x40) == 0) {
            dVar30 = 0.0;
            if ((char)bVar2 < '\0') {
              if (uVar24 < uVar19 || uVar24 - uVar19 < 8) break;
              puVar23 = (ushort *)(iVar13 + uVar19);
              uVar19 = uVar19 + 8;
              dVar29 = (double)VectorSignedToFloat((int)(short)(*puVar23 << 8 | *puVar23 >> 8),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar29 = dVar29 * dVar27;
              dVar28 = (double)VectorSignedToFloat((int)(short)(puVar23[3] << 8 | puVar23[3] >> 8),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar31 = (double)VectorSignedToFloat((int)(short)(puVar23[2] << 8 | puVar23[2] >> 8),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar31 = dVar31 * dVar27;
              dVar30 = (double)VectorSignedToFloat((int)(short)(puVar23[1] << 8 | puVar23[1] >> 8),
                                                   (byte)(in_fpscr >> 0x16) & 3);
              dVar30 = dVar30 * dVar27;
              dVar28 = dVar28 * dVar27;
            }
            else {
              dVar29 = 1.0;
              dVar31 = 0.0;
              dVar28 = 1.0;
            }
          }
          else {
            if (uVar24 < uVar19 || uVar24 - uVar19 < 4) break;
            puVar23 = (ushort *)(iVar13 + uVar19);
            uVar3 = *puVar23;
            uVar19 = uVar19 + 4;
            dVar31 = 0.0;
            uVar4 = puVar23[1];
            dVar29 = (double)VectorSignedToFloat((int)(short)(uVar3 << 8 | uVar3 >> 8),
                                                 (byte)(in_fpscr >> 0x16) & 3);
            dVar29 = dVar29 * dVar27;
            dVar28 = (double)VectorSignedToFloat((int)(short)(uVar4 << 8 | uVar4 >> 8),
                                                 (byte)(in_fpscr >> 0x16) & 3);
            dVar30 = 0.0;
            dVar28 = dVar28 * dVar27;
          }
        }
        else {
          if (uVar24 < uVar19 || uVar24 - uVar19 < 2) break;
          puVar23 = (ushort *)(iVar13 + uVar19);
          uVar19 = uVar19 + 2;
          dVar30 = 0.0;
          dVar31 = 0.0;
          dVar29 = (double)VectorSignedToFloat((int)(short)(*puVar23 << 8 | *puVar23 >> 8),
                                               (byte)(in_fpscr >> 0x16) & 3);
          dVar29 = dVar29 * dVar27;
          dVar28 = dVar29;
        }
        dVar32 = (double)VectorSignedToFloat(iVar17,(byte)(in_fpscr >> 0x16) & 3);
        local_90 = 0xffffffff;
        dVar34 = (double)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
        if ((bVar1 & 8) != 0) {
          dVar33 = dVar30 * dVar32;
          dVar32 = dVar28 * dVar32 + dVar31 * dVar34;
          dVar34 = dVar33 + dVar29 * dVar34;
        }
        dVar33 = *param_3;
        dVar35 = param_3[1];
        dVar36 = param_3[2];
        dVar37 = param_3[3];
        local_bc = dVar28 * dVar35 + dVar33 * dVar30;
        local_ac = dVar28 * dVar37 + dVar36 * dVar30;
        local_c4 = dVar31 * dVar35 + dVar33 * dVar29;
        local_b4 = dVar31 * dVar37 + dVar36 * dVar29;
        local_a4 = dVar32 * dVar35 + dVar33 * dVar34 + param_3[4];
        local_9c = dVar32 * dVar37 + dVar36 * dVar34 + param_3[5];
        puVar22 = recovered_1000aa40(param_1,(*(ushort *)(pbVar21 + 2) & 0xff) << 8 |
                                             (uint)(*(ushort *)(pbVar21 + 2) >> 8),&local_c4,param_4
                                     ,param_5 + 1);
        if (puVar22 == (undefined2 *)0x0) break;
        if ((bVar1 & 1) != 0) {
          uVar16 = *(uint *)(param_1 + 8);
          if (uVar16 < uVar19 || uVar16 - uVar19 < 2) break;
          uVar8 = uVar19 + 2;
          uVar24 = extraout_r3;
          uVar12 = extraout_r2;
          if (uVar16 >= uVar8) {
            uVar3 = *(ushort *)(*(int *)(param_1 + 4) + uVar19);
            uVar12 = (uint)uVar3;
            uVar24 = (uVar12 & 0xff) << 8 | (uint)(uVar3 >> 8);
          }
          if (uVar16 < uVar8 || uVar16 - uVar8 < uVar24) break;
          uVar19 = uVar8 + ((uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10) >> 0x10);
        }
        if ((bVar2 & 0x20) == 0) {
          puVar22 = (undefined2 *)0x1;
          goto LAB_1000aabc;
        }
        uVar24 = *(uint *)(param_1 + 8);
      }
    }
    goto LAB_1000ab24;
  }
  puVar22 = (undefined2 *)0x1;
  uVar12 = (uint)CONCAT11(bVar1,pbVar21[1]);
  if ((uVar12 == 0) || (unaff_r9 < uVar20 - uVar16)) goto LAB_1000aabc;
  uVar20 = uVar19 + 10;
  if (uVar24 < uVar20) goto LAB_1000ab24;
  puVar22 = (undefined2 *)0x0;
  if (uVar24 - uVar20 < uVar12 << 1) goto LAB_1000aabc;
  local_90 = 0xffffffff;
  recovered_1000c140((int *)&local_d0,uVar12);
  iVar11 = 0;
  uVar16 = extraout_r1;
  for (uVar24 = local_cc; uVar24 != 0; uVar24 = uVar24 - 1) {
    puVar22 = (undefined2 *)((int)local_d0 + iVar11);
    iVar13 = *(int *)(param_1 + 4) + uVar19 + iVar11;
    iVar11 = iVar11 + 2;
    uVar3 = *(ushort *)(iVar13 + 10);
    uVar16 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
    *puVar22 = (short)uVar16;
  }
  uVar19 = *(uint *)(param_1 + 8);
  uVar20 = uVar20 + local_cc * 2;
  bVar25 = uVar19 == uVar20;
  if (uVar20 <= uVar19) {
    puVar22 = (undefined2 *)(uVar19 - uVar20);
    bVar25 = puVar22 == (undefined2 *)0x1;
  }
  if ((uVar20 <= uVar19 && puVar22 != (undefined2 *)0x0) && !bVar25) {
    uVar24 = uVar20 + 2;
    if (uVar24 <= uVar19) {
      uVar3 = *(ushort *)(*(int *)(param_1 + 4) + uVar20);
      uVar16 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
    }
    if (uVar24 <= uVar19 && uVar16 <= uVar19 - uVar24) {
      local_d4 = 0;
      local_d8 = 0;
      local_dc = (byte *)0x0;
      local_90 = 1;
      uVar20 = *(ushort *)((int)local_d0 + local_cc * 2 + -2) + 1 & 0xffff;
      recovered_1000a580((int *)&local_dc,uVar20);
      uVar16 = uVar16 + uVar24;
      do {
        local_13c = (double *)uVar16;
        while( true ) {
          if (uVar20 <= local_d8) {
            local_90 = 4;
            recovered_1000c2bc((int *)&local_e8,uVar20);
            local_90 = 5;
            recovered_1000c2bc((int *)&local_f4,uVar20);
            iVar11 = 0;
            puVar15 = local_e8;
            pbVar21 = local_dc;
            uVar16 = uVar20;
            goto LAB_1000b09c;
          }
          puVar22 = (undefined2 *)0x0;
          if (*(uint *)(param_1 + 8) <= local_13c) goto LAB_1000b0fc;
          local_c4 = pf_bits_double(CONCAT71(PF_PART7(local_c4, 1),
                                      *(undefined1 *)(*(int *)(param_1 + 4) + (int)local_13c)));
          local_90 = 2;
          recovered_1000c25c((int *)&local_dc,(undefined1 *)&local_c4);
          uVar16 = (int)local_13c + 1;
          if ((pf_double_bits(local_c4) & 8) == 0) break;
          if (*(uint *)(param_1 + 8) <= uVar16) {
            puVar22 = (undefined2 *)0x0;
            goto LAB_1000b0fc;
          }
          bVar1 = *(byte *)(*(int *)(param_1 + 4) + uVar16);
          local_13c = (double *)((int)local_13c + 2);
          for (uVar16 = 0; uVar16 < bVar1; uVar16 = uVar16 + 1) {
            local_90 = 3;
            recovered_1000c25c((int *)&local_dc,(undefined1 *)&local_c4);
          }
        }
      } while( true );
    }
  }
  puVar22 = (undefined2 *)0x0;
  goto LAB_1000aee8;
LAB_1000b09c:
  if (uVar16 == 0) goto LAB_1000b118;
  bVar1 = *pbVar21;
  if ((bVar1 & 2) == 0) {
    if ((bVar1 & 0x10) == 0) {
      uVar19 = *(uint *)(param_1 + 8);
      puVar22 = (undefined2 *)0x0;
      bVar25 = local_13c <= uVar19;
      if (bVar25) {
        uVar19 = uVar19 - (int)local_13c;
      }
      if (bVar25 && 1 < uVar19) {
        puVar23 = (ushort *)(*(int *)(param_1 + 4) + (int)local_13c);
        local_13c = (double *)((int)local_13c + 2);
        uVar3 = *puVar23;
        uVar19 = ((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10;
        goto LAB_1000b08c;
      }
      goto LAB_1000b0d4;
    }
  }
  else {
    if (*(uint *)(param_1 + 8) <= local_13c) goto LAB_1000b1bc;
    uVar19 = (uint)*(byte *)(*(int *)(param_1 + 4) + (int)local_13c);
    local_13c = (double *)((int)local_13c + 1);
    if ((bVar1 & 0x10) == 0) {
      uVar19 = -uVar19;
    }
LAB_1000b08c:
    iVar11 = iVar11 + uVar19;
  }
  *puVar15 = (short)iVar11;
  uVar16 = uVar16 - 1;
  pbVar21 = pbVar21 + 1;
  puVar15 = puVar15 + 1;
  goto LAB_1000b09c;
LAB_1000b1bc:
  puVar22 = (undefined2 *)0x0;
  goto LAB_1000b0d4;
LAB_1000b118:
  iVar11 = 0;
  puVar15 = local_f4;
  pbVar21 = local_dc;
  for (uVar16 = uVar20; uVar16 != 0; uVar16 = uVar16 - 1) {
    bVar1 = *pbVar21;
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 0x20) == 0) {
        uVar19 = *(uint *)(param_1 + 8);
        puVar22 = (undefined2 *)0x0;
        bVar25 = local_13c <= uVar19;
        if (bVar25) {
          uVar19 = uVar19 - (int)local_13c;
        }
        if (bVar25 && 1 < uVar19) {
          puVar23 = (ushort *)(*(int *)(param_1 + 4) + (int)local_13c);
          local_13c = (double *)((int)local_13c + 2);
          uVar3 = *puVar23;
          uVar19 = ((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10;
          goto LAB_1000b170;
        }
        goto LAB_1000b0d4;
      }
    }
    else {
      if (*(uint *)(param_1 + 8) <= local_13c) goto LAB_1000b1bc;
      uVar19 = (uint)*(byte *)(*(int *)(param_1 + 4) + (int)local_13c);
      local_13c = (double *)((int)local_13c + 1);
      if ((bVar1 & 0x20) == 0) {
        uVar19 = -uVar19;
      }
LAB_1000b170:
      iVar11 = iVar11 + uVar19;
    }
    *puVar15 = (short)iVar11;
    pbVar21 = pbVar21 + 1;
    puVar15 = puVar15 + 1;
  }
  local_13c = (double *)0x0;
  uVar16 = 0;
  while (puVar22 = (undefined2 *)(uint)(local_cc <= uVar16), local_cc > uVar16) {
    uVar19 = (uint)*(ushort *)((int)local_d0 + uVar16 * 2);
    bVar25 = uVar19 <= local_13c;
    if (local_13c <= uVar19) {
      bVar25 = uVar20 <= uVar19;
      local_154 = uVar16;
    }
    if (bVar25) break;
    local_f8 = 0;
    local_fc = 0;
    local_100 = (double *)0x0;
    local_104 = 0;
    local_108 = 0;
    local_10c = (char *)0x0;
    iVar11 = (int)local_13c << 1;
    for (pdVar18 = local_13c; pdVar18 <= uVar19; pdVar18 = (double *)((int)pdVar18 + 1U)) {
      dVar27 = (double)VectorSignedToFloat((int)*(short *)((int)local_e8 + iVar11),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar28 = (double)VectorSignedToFloat((int)*(short *)((int)local_f4 + iVar11),
                                           (byte)(in_fpscr >> 0x16) & 3);
      local_90 = 6;
      PF_PART1(local_11c[0], 0) = local_dc[(int)pdVar18] & 1;
      local_c4 = dVar27;
      local_bc = dVar28;
      recovered_1000bf10((int *)&local_100,&local_c4);
      local_90 = 7;
      recovered_1000c440((int *)&local_10c,(undefined1 *)local_11c);
      pdVar9 = (double *)((int)pdVar18 + 1U);
      if ((double *)uVar19 == pdVar18) {
        pdVar9 = local_13c;
      }
      if ((PF_PART1(local_11c[0], 0) == 0) && ((local_dc[(int)pdVar9] & 1) == 0)) {
        sVar5 = local_f4[(int)pdVar9];
        sVar6 = local_e8[(int)pdVar9];
        if (local_fc == local_f8) {
          local_90 = 8;
          uVar16 = local_fc << 1;
          if (local_fc == 0) {
            uVar16 = 4;
          }
          recovered_1000c3d8((int *)&local_100,uVar16);
        }
        dVar29 = (double)VectorSignedToFloat((int)sVar5,(byte)(in_fpscr >> 0x16) & 3);
        iVar13 = local_fc * 2;
        local_fc = local_fc + 1;
        dVar31 = (double)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x16) & 3);
        (local_100 + iVar13)[1] = (dVar28 + dVar29) * 0.5;
        local_100[iVar13] = (dVar27 + dVar31) * 0.5;
        local_90 = 9;
        PF_PART1(local_12c[0], 0) = 1;
        recovered_1000c508((int *)&local_10c,(undefined1 *)local_12c);
      }
      iVar11 = iVar11 + 2;
    }
    if (local_fc == 0) {
      local_13c = local_100;
    }
    else {
      if (*local_10c == '\x01') {
        local_13c = local_100;
      }
      else {
        dVar27 = local_100[local_fc * 2 + -2];
        if (local_10c[local_108 + -1] == '\x01') {
          dVar28 = local_100[local_fc * 2 + -1];
        }
        else {
          dVar28 = (local_100[local_fc * 2 + -1] + local_100[1]) * 0.5;
          dVar27 = (dVar27 + *local_100) * 0.5;
        }
        if (local_fc == local_f8) {
          local_90 = 10;
          recovered_1000c3d8((int *)&local_100,local_fc << 1);
        }
        local_13c = local_100;
        for (uVar16 = local_fc; uVar16 != 0; uVar16 = uVar16 - 1) {
          dVar29 = (local_100 + uVar16 * 2 + -2)[1];
          local_100[uVar16 * 2] = local_100[uVar16 * 2 + -2];
          (local_100 + uVar16 * 2)[1] = dVar29;
        }
        uVar16 = local_fc + 1;
        *local_100 = dVar27;
        local_100[1] = dVar28;
        local_90 = 0xb;
        local_c4 = pf_bits_double(CONCAT71(PF_PART7(local_c4, 1),1));
        local_fc = uVar16;
        recovered_1000c560((int *)&local_10c,(int)local_10c,(undefined1 *)&local_c4);
        if (uVar16 == 0) goto LAB_1000b5d8;
      }
      local_90 = 0xc;
      recovered_1000bf10((int *)&local_100,local_13c);
      local_90 = 0xd;
      local_c4 = pf_bits_double(CONCAT71(PF_PART7(local_c4, 1),1));
      recovered_1000c508((int *)&local_10c,(undefined1 *)&local_c4);
      pdVar18 = local_100;
      local_13c = local_100;
      recovered_1000bfe4(&local_c4,param_3,local_100);
      local_90 = 0xe;
      recovered_1000bf68(param_4,&local_c4);
      uVar16 = local_fc;
      uVar10 = 0;
      while (uVar24 = uVar10 + 1, uVar24 < uVar16) {
        if (local_10c[uVar24] == '\x01') {
          recovered_1000bfe4(&local_c4,param_3,pdVar18 + uVar24 * 2);
          local_90 = 0xf;
          recovered_1000c018(param_4,&local_c4);
          uVar10 = uVar24;
        }
        else {
          uVar12 = uVar10 + 2;
          if (uVar16 <= uVar12) break;
          recovered_1000bfe4(&local_c4,param_3,pdVar18 + uVar10 * 2);
          recovered_1000bfe4(local_11c,param_3,pdVar18 + uVar24 * 2);
          recovered_1000bfe4(local_12c,param_3,pdVar18 + uVar12 * 2);
          local_90 = 0x10;
          recovered_1000c724(param_4,&local_c4,local_11c,local_12c,0);
          uVar10 = uVar12;
        }
      }
      local_90 = 0x11;
      recovered_1000c0b8(param_4);
    }
LAB_1000b5d8:
    local_108 = 0;
    recovered_10006e94(local_10c);
    local_fc = 0;
    recovered_10006e94(local_13c);
    local_13c = (double *)(uVar19 + 1);
    uVar16 = local_154 + 1;
  }
LAB_1000b0d4:
  local_f0 = 0;
  recovered_10006e94(local_f4);
  local_e4 = 0;
  recovered_10006e94(local_e8);
LAB_1000b0fc:
  local_d8 = 0;
  recovered_10006e94(local_dc);
LAB_1000aee8:
  local_cc = 0;
  recovered_10006e94(local_d0);
LAB_1000aabc:
  recovered_10007378(&uStack_94);
  return puVar22;
}

#undef DAT_1000aef4
#undef DAT_1000b758
#undef DAT_1000b75c
#undef DAT_1000b760
#undef auStackY_1e0
#undef uStack_94
#undef auStack_68
#undef local_154
#undef local_13c
#undef local_134
#undef local_12c
#undef local_11c
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_bc
#undef local_b4
#undef local_ac
#undef local_a4
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recover the four-by-four nonzero-winding coverage rasterizer.
 * Pooka's Free Software License. */
void recovered_1000b764(int *result,int *outline,double advance){
 recovered_1000a9e0(result);
 *(double *)(result+4)=advance;
 if(!outline[1]||*((byte *)outline+13)!=1)return;
 double *bounds=(double *)(outline+12);
 int x0=(int)recovered_10004e6c(bounds[0]),x1=(int)recovered_10004e9c(bounds[1]);
 int y0=(int)recovered_10004e6c(bounds[2]),y1=(int)recovered_10004e9c(bounds[3]);
 int width=x1-x0+2,height=y1-y0+2;
 if(width<=0||height<=0)return;
 result[0]=x0-1;result[1]=y1+1;result[2]=width;result[3]=height;
 byte zero=0;recovered_1000c848((int *)(result+6),(ulong)width*(ulong)height,&zero);
 byte *pixels=(byte *)(uintptr_t)*(ulong *)(result+6);
 double *edges=(double *)(uintptr_t)outline[0];
 for(int row=0;row<height;row++)for(int column=0;column<width;column++){
  int covered=0;
  for(int sy=0;sy<4;sy++)for(int sx=0;sx<4;sx++){
   double y=(double)result[1]-row-0.125-sy*0.25;
   double x=(double)result[0]+column+0.125+sx*0.25;
   int winding=0;
   for(ulong i=0;i<(ulong)outline[1];i++){
    double *edge=edges+i*4;double ay=edge[1],by=edge[3];int direction=0;
    if(ay<=y&&y<by)direction=1;else if(y<ay&&by<=y)direction=-1;
    if(direction&&edge[0]+((y-ay)*(edge[2]-edge[0]))/(by-ay)>x)winding+=direction;
   }
   if(winding)covered++;
  }
  pixels[(ulong)row*width+column]=(byte)(covered*255/16);
 }
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7db8U)
 */

int recovered_1000bb78(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000bc24(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 8;
}


#undef DAT_1000bc20
#define DAT_1000bc20 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x7e60U)))
#define uStack_14 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7ddcU)
 */

int recovered_1000bb9c(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  unsigned char frame[68] = {0};

  int iVar1;

  uStack_14 = param_4;
  iVar1 = recovered_1000bb78(param_1,param_2);
  if (iVar1 == *param_1 + param_1[1] * 8) {
    recovered_1000bcb4((int)param_1);
    uStack_14 = uStack_14 & 0xffff;
    recovered_1000bce4(param_1,param_2,(undefined2 *)((int)&uStack_14 + 2));
    recovered_1000a834(param_1 + 6,(undefined4 *)*DAT_1000bc20);
    recovered_1000bd48(param_1,param_1[1] + -1);
    iVar1 = *param_1 + param_1[1] * 8 + -8;
  }
  return iVar1 + 4;
}

#undef DAT_1000bc20
#undef uStack_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7e64U)
 */

int recovered_1000bc24(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000bc8c((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      if (*(int *)(*param_1 + iVar3 * 8) == *param_2) {
        return iVar3;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7eccU)
 */

uint recovered_1000bc8c(int param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000a6c0(param_2,4);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7ef4U)
 */

void recovered_1000bcb4(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < (uint)((*(int *)(param_1 + 4) + 1) * 4))) {
    recovered_1000bd80(param_1,*(int *)(param_1 + 4) * 2 + 2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7f24U)
 */

int recovered_1000bce4(int *param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000be54(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar4 = *param_1;
  uVar3 = *param_2;
  param_1[1] = iVar1 + 1;
  puVar5 = (undefined4 *)(iVar4 + iVar1 * 8);
  *puVar5 = uVar3;
  *(undefined2 *)(puVar5 + 1) = *param_3;
  return iVar4 + (iVar1 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7f88U)
 */

void recovered_1000bd48(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000bc8c((int)param_1,*param_1 + param_2 * 8);
  iVar2 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


#undef DAT_1000bddc
#define DAT_1000bddc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x801cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7fc0U)
 */

void recovered_1000bd80(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 *puVar2;

  uVar1 = *(uint *)(param_1 + 4) << 1;
  if (*(uint *)(param_1 + 4) < 4) {
    uVar1 = 8;
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  uVar1 = recovered_1000bde0(uVar1);
  puVar2 = (undefined4 *)*DAT_1000bddc;
  recovered_1000a6f0((int *)(param_1 + 0xc),uVar1,puVar2);
  recovered_1000a6f0((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar2);
  recovered_1000bdfc(param_1);
  return;
}

#undef DAT_1000bddc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8020U)
 */

uint recovered_1000bde0(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x803cU)
 */

void recovered_1000bdfc(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_1000bd48((int *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8094U)
 */

void recovered_1000be54(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000bed0(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      uVar4 = ((undefined4 *)(*param_1 + iVar2))[1];
      puVar5 = (undefined4 *)(uVar1 + iVar2);
      *puVar5 = *(undefined4 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 8;
      puVar5[1] = uVar4;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8110U)
 */

uint recovered_1000bed0(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 3);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8124U)
 */

void recovered_1000bee4(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x8150U)
 */

void recovered_1000bf10(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000c3d8(param_1,uVar3);
    iVar1 = param_1[1];
  }
  uVar4 = param_2[1];
  puVar2 = (undefined8 *)(*param_1 + iVar1 * 0x10);
  *puVar2 = *param_2;
  puVar2[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x81a8U)
 */

void recovered_1000bf68(int *param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (((char)param_1[3] == '\x01') &&
     ((*(double *)(param_1 + 8) != *(double *)(param_1 + 4) ||
      (*(double *)(param_1 + 10) != *(double *)(param_1 + 6))))) {
    recovered_1000c018(param_1,(double *)(param_1 + 4));
  }
  dVar1 = param_2[1];
  *(double *)(param_1 + 4) = *param_2;
  *(double *)(param_1 + 6) = dVar1;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  *(undefined1 *)(param_1 + 3) = 1;
  *(double *)(param_1 + 8) = dVar1;
  *(double *)(param_1 + 10) = dVar2;
  recovered_1000c5e4((int)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8224U)
 */

void recovered_1000bfe4(double *param_1,double *param_2,double *param_3)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar1 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  dVar2 = param_2[5];
  *param_1 = param_2[4] + param_2[1] * dVar3 + *param_2 * dVar1;
  param_1[1] = dVar2 + dVar3 * dVar5 + dVar4 * dVar1;
  return;
}


#define local_38 (*(double *)(frame + 16))
#define local_28 (*(double *)(frame + 32))
#define uStack_30 (*(undefined8 *)(frame + 24))
#define dStack_20 (*(double *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8258U)
 */

void recovered_1000c018(int *param_1,double *param_2)

{
  unsigned char frame[104] = {0};

  double dVar1;

  if ((char)param_1[3] == '\0') {
    recovered_1000bf68(param_1,param_2);
    return;
  }
  if ((*(double *)(param_1 + 8) != *param_2) || (*(double *)(param_1 + 10) != param_2[1])) {
    local_38 = *(double *)(param_1 + 8);
    uStack_30 = *(undefined8 *)(param_1 + 10);
    local_28 = *param_2;
    dStack_20 = param_2[1];
    recovered_1000c66c(param_1,&local_38);
    dVar1 = param_2[1];
    *(double *)(param_1 + 8) = *param_2;
    *(double *)(param_1 + 10) = dVar1;
  }
  recovered_1000c5e4((int)param_1,param_2);
  return;
}

#undef local_38
#undef local_28
#undef uStack_30
#undef dStack_20

#define uStack_28 (*(undefined8 *)(frame + 24))
#define local_30 (*(undefined8 *)(frame + 16))
#define local_20 (*(undefined8 *)(frame + 32))
#define uStack_18 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x82f8U)
 */

void recovered_1000c0b8(int *param_1)

{
  unsigned char frame[96] = {0};


  if (((char)param_1[3] == '\x01') &&
     ((*(double *)(param_1 + 8) != *(double *)(param_1 + 4) ||
      (*(double *)(param_1 + 10) != *(double *)(param_1 + 6))))) {
    local_30 = *(undefined8 *)(param_1 + 8);
    uStack_28 = *(undefined8 *)(param_1 + 10);
    local_20 = *(undefined8 *)(param_1 + 4);
    uStack_18 = *(undefined8 *)(param_1 + 6);
    recovered_1000c66c(param_1,&local_30);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 6);
  return;
}

#undef uStack_28
#undef local_30
#undef local_20
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8380U)
 */

int * recovered_1000c140(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000c16c(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x83acU)
 */

void recovered_1000c16c(int *param_1,uint param_2)

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
    recovered_1000c1d0(param_1,param_2);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8410U)
 */

void recovered_1000c1d0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000c248(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined2 *)(uVar1 + iVar3);
      puVar6 = (undefined2 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 2;
      *puVar5 = *puVar6;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8488U)
 */

uint recovered_1000c248(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x849cU)
 */

int recovered_1000c25c(int *param_1,undefined1 *param_2)

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
    recovered_1000a580(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x84fcU)
 */

int * recovered_1000c2bc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000c2e8(param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8528U)
 */

void recovered_1000c2e8(int *param_1,uint param_2)

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
    recovered_1000c34c(param_1,param_2);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x858cU)
 */

void recovered_1000c34c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000c3c4(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined2 *)(uVar1 + iVar3);
      puVar6 = (undefined2 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 2;
      *puVar5 = *puVar6;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8604U)
 */

uint recovered_1000c3c4(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8618U)
 */

void recovered_1000c3d8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10006e64(param_2 << 4);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      puVar4 = (undefined8 *)((int)pvVar1 + uVar3 * 0x10);
      puVar5 = (undefined8 *)(*param_1 + uVar3 * 0x10);
      uVar6 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar6;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8680U)
 */

int recovered_1000c440(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000c498(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined1 *)(iVar3 + iVar1) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x86d8U)
 */

void recovered_1000c498(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000c4f8(param_2);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined1 *)(uVar1 + uVar3) = *(undefined1 *)(*param_1 + uVar3);
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8738U)
 */

uint recovered_1000c4f8(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8748U)
 */

int recovered_1000c508(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000c498(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined1 *)(iVar3 + iVar1) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x87a0U)
 */

void recovered_1000c560(int *param_1,int param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (*param_1 == 0) {
    uVar1 = param_1[1];
    uVar4 = uVar1;
  }
  else {
    uVar4 = param_2 - *param_1;
    uVar1 = param_1[1];
  }
  if (uVar1 == param_1[2]) {
    uVar3 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000c498(param_1,uVar3);
  }
  iVar2 = *param_1;
  uVar3 = param_1[1];
  for (uVar1 = uVar3; uVar4 < uVar1; uVar1 = uVar1 - 1) {
    *(undefined1 *)(iVar2 + uVar1) = *(undefined1 *)(iVar2 + uVar1 + -1);
  }
  param_1[1] = uVar3 + 1;
  *(undefined1 *)(iVar2 + uVar4) = *param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8824U)
 */

void recovered_1000c5e4(int param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (*(char *)(param_1 + 0xd) == '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(double *)(param_1 + 0x38) = dVar1;
    *(double *)(param_1 + 0x30) = dVar1;
    *(double *)(param_1 + 0x48) = dVar2;
    *(double *)(param_1 + 0x40) = dVar2;
    return;
  }
  dVar1 = *(double *)(param_1 + 0x30);
  if (*param_2 < *(double *)(param_1 + 0x30)) {
    dVar1 = *param_2;
  }
  *(double *)(param_1 + 0x30) = dVar1;
  dVar1 = *(double *)(param_1 + 0x38);
  if (*(double *)(param_1 + 0x38) < *param_2) {
    dVar1 = *param_2;
  }
  *(double *)(param_1 + 0x38) = dVar1;
  dVar1 = *(double *)(param_1 + 0x40);
  if (param_2[1] < *(double *)(param_1 + 0x40)) {
    dVar1 = param_2[1];
  }
  *(double *)(param_1 + 0x40) = dVar1;
  dVar1 = *(double *)(param_1 + 0x48);
  if (*(double *)(param_1 + 0x48) < param_2[1]) {
    dVar1 = param_2[1];
  }
  *(double *)(param_1 + 0x48) = dVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x88acU)
 */

void recovered_1000c66c(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar7 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar7 = 4;
    }
    if (uVar1 < uVar7) {
      pvVar2 = recovered_10006e64(uVar7 << 5);
      iVar3 = param_1[1];
      for (iVar4 = 0; iVar3 != iVar4; iVar4 = iVar4 + 1) {
        puVar5 = (undefined8 *)((int)pvVar2 + iVar4 * 0x20);
        puVar6 = (undefined8 *)(*param_1 + iVar4 * 0x20);
        uVar8 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar8;
        uVar8 = puVar6[3];
        puVar5[2] = puVar6[2];
        puVar5[3] = uVar8;
      }
      recovered_10006e94((void *)*param_1);
      uVar1 = param_1[1];
      param_1[2] = uVar7;
      *param_1 = (int)pvVar2;
    }
  }
  uVar8 = param_2[1];
  puVar5 = (undefined8 *)(*param_1 + uVar1 * 0x20);
  *puVar5 = *param_2;
  puVar5[1] = uVar8;
  uVar8 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar8;
  param_1[1] = param_1[1] + 1;
  return;
}


#undef DAT_1000c834
#define DAT_1000c834 (*(double *)(((uintptr_t)pf_module_state + 0x8a74U)))
#define dStack_28 (*(double *)(frame + 48))
#define dStack_20 (*(double *)(frame + 56))
#define local_48 (*(double *)(frame + 16))
#define local_40 (*(double *)(frame + 24))
#define local_38 (*(double *)(frame + 32))
#define local_30 (*(double *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8964U)
 */

void recovered_1000c724(int *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  unsigned char frame[120] = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_5 < 10) {
    dVar1 = *param_3;
    dVar3 = dVar1 - (*param_2 + *param_4) * 0.5;
    dVar2 = param_3[1];
    dVar4 = dVar2 - (param_2[1] + param_4[1]) * 0.5;
    if (DAT_1000c834 < dVar4 * dVar4 + dVar3 * dVar3) {
      dStack_28 = (*param_2 + dVar1) * 0.5;
      dStack_20 = (param_2[1] + dVar2) * 0.5;
      local_30 = (param_4[1] + dVar2) * 0.5;
      local_38 = (*param_4 + dVar1) * 0.5;
      local_40 = (dStack_20 + local_30) * 0.5;
      local_48 = (dStack_28 + local_38) * 0.5;
      recovered_1000c724(param_1,param_2,&dStack_28,&local_48,param_5 + 1);
      recovered_1000c724(param_1,&local_48,&local_38,param_4,param_5 + 1);
      return;
    }
  }
  recovered_1000c018(param_1,param_4);
  return;
}

#undef DAT_1000c834
#undef dStack_28
#undef dStack_20
#undef local_48
#undef local_40
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8a7cU)
 */

void recovered_1000c83c(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000c848(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8a88U)
 */

void recovered_1000c848(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000c8b0(param_1,param_2);
    return;
  }
  recovered_1000a580(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8af0U)
 */

void recovered_1000c8b0(int *param_1,uint param_2)

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
    recovered_1000a580(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_1000c94c
#define DAT_1000c94c (*(int *)(((uintptr_t)pf_module_state + 0x8b8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b4cU)
 */

int * recovered_1000c90c(int *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000c94c + 8;
  recovered_1000decc((int)(param_1 + 0x30b));
  recovered_1000de38(param_1 + 0x308);
  recovered_1000dea0((int)(param_1 + 8));
  return param_1;
}

#undef DAT_1000c94c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b90U)
 */

void recovered_1000c950(int *in_r0)

{
  unsigned char frame[64] = {0};

  int *data;

  data = recovered_1000c90c(in_r0);
  recovered_10006e94(data);
  return;
}


#undef DAT_1000d050
#define DAT_1000d050 (*(double *)(((uintptr_t)pf_module_state + 0x9290U)))
#undef DAT_1000d6e4
#define DAT_1000d6e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9924U)))
#undef DAT_1000d6e8
#define DAT_1000d6e8 (*(int *)(((uintptr_t)pf_module_state + 0x9928U)))
#undef DAT_1000d6ec
#define DAT_1000d6ec (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x992cU)))
#undef DAT_1000d6f0
#define DAT_1000d6f0 (*(char * *)(((uintptr_t)pf_module_state + 0x9930U)))
#undef DAT_1000d6f4
#define DAT_1000d6f4 (*(char * *)(((uintptr_t)pf_module_state + 0x9934U)))
#undef DAT_1000d6f8
#define DAT_1000d6f8 (*(char * *)(((uintptr_t)pf_module_state + 0x9938U)))
#undef DAT_1000d6fc
#define DAT_1000d6fc (*(byte * *)(((uintptr_t)pf_module_state + 0x993cU)))
#undef DAT_1000d700
#define DAT_1000d700 (*(char * *)(((uintptr_t)pf_module_state + 0x9940U)))
#undef DAT_1000d704
#define DAT_1000d704 (*(char * *)(((uintptr_t)pf_module_state + 0x9944U)))
#undef DAT_1000d708
#define DAT_1000d708 (*(char * *)(((uintptr_t)pf_module_state + 0x9948U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define uStack_b4 (*(undefined4 *)(frame + 124))
#define uStack_94 (*(undefined4 *)(frame + 156))
#define auStack_68 (*(undefined1 (*)[8])(frame + 200))
#define local_114 (*(byte * *)(frame + 28))
#define local_110 (*(byte * *)(frame + 32))
#define local_10c (*(int * *)(frame + 36))
#define local_108 (*(byte * *)(frame + 40))
#define local_104 (*(int *)(frame + 44))
#define local_100 (*(byte * *)(frame + 48))
#define local_fc (*(byte * *)(frame + 52))
#define local_f8 (*(byte * *)(frame + 56))
#define local_f4 (*(byte * *)(frame + 60))
#define local_f0 (*(byte * *)(frame + 64))
#define auStack_120 (*(undefined1 (*)[12])(frame + 16))
#define local_e8 (*(undefined4 *)(frame + 72))
#define local_e0 (*(byte * *)(frame + 80))
#define local_dc (*(byte * *)(frame + 84))
#define local_d8 (*(undefined4 *)(frame + 88))
#define local_d4 (*(byte * *)(frame + 92))
#define local_d0 (*(byte * *)(frame + 96))
#define local_cc (*(undefined4 *)(frame + 100))
#define local_c8 (*(byte * *)(frame + 104))
#define local_c4 (*(undefined4 *)(frame + 108))
#define local_b8 (*(undefined4 *)(frame + 120))
#define pbStack_ec (*(byte * *)(frame + 68))
#define local_a8 (*(byte * *)(frame + 136))
#define local_a4 (*(byte * *)(frame + 140))
#define local_a0 (*(undefined4 *)(frame + 144))
#define local_9c (*(byte * *)(frame + 148))
#define local_98 (*(byte * *)(frame + 152))
#define local_90 (*(undefined4 *)(frame + 160))
#define local_7c (*(undefined4 *)(frame + 180))
#define local_78 (*(undefined4 *)(frame + 184))
#define local_74 (*(undefined1 * *)(frame + 188))
#define local_70 (*(int *)(frame + 192))
#define local_6c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8ba4U)
 */

bool recovered_1000c964(int param_1,byte *param_2)

{
  unsigned char frame[336] = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  byte *pbVar5;
  byte **ppbVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *extraout_r3 = 0;
  char *extraout_r3_00 = 0;
  char *extraout_r3_01 = 0;
  byte *pbVar14;
  bool bVar15;
  double dVar16;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  local_7c = *DAT_1000d6ec;
  local_cc = 0;
  local_d0 = (byte *)0x0;
  local_d4 = (byte *)0x0;
  local_78 = DAT_1000d6e4;
  local_d8 = 0;
  local_dc = (byte *)0x0;
  local_e0 = (byte *)0x0;
  local_70 = DAT_1000d6e8 + ((uintptr_t)pf_module_state+0x8c10U);
  pbVar14 = *(byte **)(param_2 + 4);
  local_104 = param_1;
  recovered_10007360(&uStack_94);
  local_f8 = param_2;
  if (((byte *)0x1 < pbVar14) && (**(char **)param_2 == -0x80)) {
    pbVar13 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    do {
      iVar9 = *(int *)local_f8;
      do {
        pbVar11 = pbVar13 + 6;
        if ((pbVar14 < pbVar11) || (pbVar5 = pbVar13 + iVar9, *pbVar5 != 0x80)) {
LAB_1000ccf4:
          bVar4 = false;
          if ((((uint)(local_d0 != (byte *)0x0) & (uint)pbVar12) != 1) || (local_dc == (byte *)0x0))
          goto LAB_1000d528;
          goto LAB_1000cd1c;
        }
        pbVar13 = pbVar11 + *(int *)(pbVar5 + 2);
        if (pbVar14 < pbVar13) goto LAB_1000ccec;
        bVar1 = pbVar5[1];
        if (bVar1 == 3) goto LAB_1000ccf4;
        if (bVar1 == 2) {
          local_f4 = (byte *)0x1;
          ppbVar6 = &local_e0;
          goto LAB_1000ca6c;
        }
      } while (bVar1 != 1);
      ppbVar6 = &local_d4;
      local_f4 = pbVar12;
LAB_1000ca6c:
      local_90 = 1;
      local_fc = pbVar13;
      recovered_1000def4((int *)ppbVar6,(int)(*ppbVar6 + (int)ppbVar6[1]),pbVar11 + iVar9,
                         pbVar13 + iVar9);
      pbVar14 = *(byte **)(local_f8 + 4);
      pbVar13 = local_fc;
      pbVar12 = local_f4;
    } while( true );
  }
  local_90 = 2;
  pbVar14 = (byte *)recovered_1000dfcc((int *)param_2,DAT_1000d6f0,0);
  bVar4 = false;
  if (pbVar14 == (byte *)0xffffffff) goto LAB_1000d528;
  puVar10 = *(undefined1 **)local_f8;
  pbVar12 = *(byte **)(local_f8 + 4);
  pbVar13 = pbVar14;
  if (pbVar14 <= pbVar12) {
    pbVar13 = pbVar12;
  }
  for (; pbVar14 < pbVar12; pbVar14 = pbVar14 + 1) {
    if (puVar10[(int)pbVar14] == '\n' || puVar10[(int)pbVar14] == '\r') goto LAB_1000cb00;
  }
  pbVar14 = pbVar13;
LAB_1000cb00:
  pbVar13 = pbVar12;
  if (pbVar12 < pbVar14) {
    pbVar13 = pbVar14;
  }
  for (; pbVar14 < pbVar12; pbVar14 = pbVar14 + 1) {
    local_f4 = pbVar14;
    if (puVar10[(int)pbVar14] != '\r' && puVar10[(int)pbVar14] != '\n') goto LAB_1000cb30;
  }
  local_f4 = pbVar13;
LAB_1000cb30:
  local_90 = 3;
  recovered_1000e064(&local_d4,puVar10,puVar10 + (int)local_f4);
  local_90 = 4;
  pbVar14 = (byte *)recovered_1000dfcc((int *)local_f8,DAT_1000d6f4,(uint)local_f4);
  local_90 = 5;
  local_fc = *(byte **)(local_f8 + 4);
  if (pbVar14 != (byte *)0xffffffff) {
    local_fc = pbVar14;
  }
  local_a0 = 0;
  local_a4 = (byte *)0x0;
  local_a8 = (byte *)0x0;
  recovered_1000e07c((int *)&local_a8,(int)local_fc - (int)local_f4);
  pbVar14 = local_f8;
  for (pbVar13 = local_f4; pbVar13 < local_fc; pbVar13 = pbVar13 + 1) {
    bVar1 = pbVar13[*(int *)pbVar14];
    if (((byte)(bVar1 - 0x30U) < 10) || (bVar1 - 0x61U < 6)) {
LAB_1000cbec:
      local_90 = 6;
      local_f4 = pbVar13;
      recovered_1000e0e4((int *)&local_a8,bVar1);
      pbVar14 = local_f8;
      pbVar13 = local_f4;
    }
    else if (bVar1 - 0x41U < 6) goto LAB_1000cbec;
  }
  if (((uint)local_a4 & 1) != 0) {
    local_a4 = local_a4 + -1;
    local_a8[(int)local_a4] = 0;
  }
  if (local_a4 == (byte *)0x0) {
LAB_1000cce4:
    recovered_10006e94(local_a8);
  }
  else {
    local_90 = 7;
    recovered_1000a580((int *)&local_e0,(uint)local_a4 >> 1);
    pbVar14 = (byte *)0x0;
    while (pbVar13 = local_dc, pbVar14 + 1 < local_a4) {
      PF_PART1(local_b8, 0) = local_a8[(int)pbVar14];
      PF_PART1(local_b8, 1) = (local_a8 + (int)pbVar14)[1];
      local_90 = 8;
      PF_PART1(local_b8, 2) = 0;
      local_f4 = pbVar14;
      iVar9 = recovered_10005524((byte *)&local_b8,(undefined4 *)0x0,0x10);
      local_90 = 9;
      local_c8 = (byte *)CONCAT31(PF_PART3(local_c8, 1),(char)iVar9);
      recovered_1000e194((int *)&local_e0,(undefined1 *)&local_c8);
      pbVar14 = local_f4 + 2;
    }
    if (local_d0 == (byte *)0x0) goto LAB_1000cce4;
    recovered_10006e94(local_a8);
    if (pbVar13 != (byte *)0x0) {
LAB_1000cd1c:
      local_90 = 10;
      uVar7 = recovered_1000dfcc((int *)&local_d4,DAT_1000d6f8,0);
      if (uVar7 != 0xffffffff) {
        pbVar14 = (byte *)(uVar7 + 9);
        do {
          if (local_d0 <= pbVar14) goto LAB_1000ce38;
          pbVar13 = local_d4 + (int)pbVar14;
          pbVar14 = pbVar14 + 1;
        } while ((*pbVar13 | 0x20) != 0x7b);
        uStack_b4 = 0;
        PF_PART1(local_b8, 0) = 0;
        PF_PART1(local_b8, 1) = 0;
        PF_PART1(local_b8, 2) = 0;
        PF_PART1(local_b8, 3) = 0;
        local_90 = 0xb;
        pbStack_ec = (byte *)0x0;
        local_f0 = (byte *)0x0;
        local_98 = pbVar14;
        bVar4 = recovered_1000e1f4((int *)&local_d4,(uint *)&local_98,&local_a8,(char *)0x7b);
        if (bVar4) {
          local_90 = 0xc;
          bVar4 = recovered_1000e1f4((int *)&local_d4,(uint *)&local_98,&local_b8,extraout_r3);
          if (bVar4) {
            local_90 = 0xd;
            bVar4 = recovered_1000e1f4((int *)&local_d4,(uint *)&local_98,&local_c8,extraout_r3_00);
            if (bVar4) {
              local_90 = 0xe;
              bVar4 = recovered_1000e1f4((int *)&local_d4,(uint *)&local_98,&local_f0,extraout_r3_01
                                        );
              dVar3 = DAT_1000d050;
              if (bVar4) {
                dVar16 = 0.0;
                if (0.0 < pf_bits_double(CONCAT44(pbStack_ec,local_f0))) {
                  dVar16 = pf_bits_double(CONCAT44(pbStack_ec,local_f0));
                }
                dVar2 = pf_bits_double(CONCAT44(uStack_b4,
                                         CONCAT13(PF_PART1(local_b8, 3),
                                                  CONCAT12(PF_PART1(local_b8, 2),
                                                           CONCAT11(PF_PART1(local_b8, 1),(byte)local_b8)))
                                        ));
                *(double *)(local_104 + 0xc) = dVar16;
                dVar16 = 0.0;
                if (dVar2 < dVar3) {
                  dVar16 = -dVar2;
                }
                *(double *)(local_104 + 0x14) = dVar16;
              }
            }
          }
        }
      }
LAB_1000ce38:
      local_f8 = (byte *)(local_104 + 0x20);
      local_f4 = DAT_1000d6fc;
      pbVar14 = (byte *)0x0;
      while (pbVar14 < local_d0) {
        local_90 = 0xf;
        uVar7 = recovered_1000dfcc((int *)&local_d4,(char *)local_f4,(uint)pbVar14);
        if (uVar7 == 0xffffffff) break;
        pbVar14 = (byte *)(uVar7 + 3);
        local_c8 = (byte *)0x0;
        PF_PART1(local_b8, 0) = (byte)pbVar14;
        PF_PART1(local_b8, 1) = (byte)((uint)pbVar14 >> 8);
        PF_PART1(local_b8, 2) = (undefined1)((uint)pbVar14 >> 0x10);
        PF_PART1(local_b8, 3) = (undefined1)((uint)pbVar14 >> 0x18);
        iVar9 = recovered_1000e268((int *)&local_d4,&local_b8,(int *)&local_c8);
        pbVar13 = local_c8;
        if ((iVar9 != 0) && (local_c8 < (byte *)0x100)) {
          recovered_1000e318((int *)&local_d4,&local_b8);
          pbVar12 = (byte *)CONCAT13(PF_PART1(local_b8, 3),
                                     CONCAT12(PF_PART1(local_b8, 2),CONCAT11(PF_PART1(local_b8, 1),(byte)local_b8)
                                             ));
          if ((pbVar12 < local_d0) && (local_d4[(int)pbVar12] == 0x2f)) {
            uVar7 = 0x2f;
            pbVar12 = pbVar12 + 1;
            for (pbVar11 = pbVar12; pbVar11 < local_d0; pbVar11 = pbVar11 + 1) {
              uVar7 = local_d4[(int)pbVar11] - 9;
              if ((uVar7 < 0x18) && ((1 << (uVar7 & 0xff) & 0x80001fU) != 0)) goto LAB_1000cf24;
            }
            pbVar11 = local_d0;
LAB_1000cf24:
            if (pbVar11 != pbVar12) {
              local_fc = pbVar13;
              local_90 = 0x10;
              local_100 = pbVar11;
              recovered_1000e3b8((int *)&local_a8,(int)(local_d4 + (int)pbVar12),
                                 (int)pbVar11 - (int)pbVar12,uVar7);
              recovered_1000e368((undefined4 *)(local_f8 + (int)local_fc * 0xc),&local_a8);
              recovered_10006e94(local_a8);
              pbVar14 = local_100;
            }
          }
        }
      }
      if (local_dc == (byte *)0x0) {
        pbVar14 = (byte *)0x0;
        bVar4 = false;
        local_e8 = 0;
        local_f0 = (byte *)0x0;
      }
      else {
        local_a0 = 0;
        local_a4 = (byte *)0x0;
        local_a8 = (byte *)0x0;
        local_90 = 0x11;
        recovered_1000a580((int *)&local_a8,(uint)local_dc);
        pbVar12 = (byte *)0xd971;
        pbVar14 = local_e0;
        pbVar13 = local_dc;
        while (pbVar13 != (byte *)0x0) {
          local_fc = (byte *)(uint)*pbVar14;
          local_90 = 0x12;
          PF_PART1(local_b8, 0) = *pbVar14 ^ (byte)((uint)pbVar12 >> 8);
          local_100 = pbVar12;
          local_f8 = pbVar14;
          local_f4 = pbVar13;
          recovered_1000c25c((int *)&local_a8,(undefined1 *)&local_b8);
          pbVar12 = (byte *)((int)(local_100 + (int)local_fc) * 0xce6d + 0x58bf);
          pbVar14 = local_f8 + 1;
          pbVar13 = local_f4 + -1;
        }
        if (&UndefinedInstruction < local_a4) {
          recovered_1000e53c((int *)&local_a8,(int)local_a8,(int)(local_a8 + 4));
          local_e8 = local_a0;
          local_fc = local_a8;
          local_a8 = (byte *)0x0;
          local_a0 = 0;
          local_100 = local_a4;
        }
        else {
          local_fc = (byte *)0x0;
          local_e8 = 0;
          local_100 = (byte *)0x0;
        }
        local_a4 = (byte *)0x0;
        local_f0 = local_fc;
        pbStack_ec = local_100;
        recovered_10006e94(local_a8);
        if (local_100 != (byte *)0x0) {
          local_90 = 0x13;
          uVar7 = recovered_1000dfcc((int *)&local_f0,DAT_1000d700,0);
          if (uVar7 != 0xffffffff) {
            local_a8 = (byte *)(uVar7 + 6);
            PF_PART1(local_b8, 0) = 0;
            PF_PART1(local_b8, 1) = 0;
            PF_PART1(local_b8, 2) = 0;
            PF_PART1(local_b8, 3) = 0;
            iVar9 = recovered_1000e268((int *)&local_f0,(uint *)&local_a8,&local_b8);
            if (iVar9 != 0) {
              *(uint *)(local_104 + 0x1c) =
                   CONCAT13(PF_PART1(local_b8, 3),
                            CONCAT12(PF_PART1(local_b8, 2),CONCAT11(PF_PART1(local_b8, 1),(byte)local_b8)));
            }
          }
          local_90 = 0x14;
          local_108 = (byte *)recovered_1000dfcc((int *)&local_f0,DAT_1000d704,0);
          local_90 = 0x15;
          pbVar13 = (byte *)recovered_1000dfcc((int *)&local_f0,DAT_1000d708,0);
          bVar4 = false;
          if (local_108 != (byte *)0xffffffff) {
            bVar15 = (byte *)0xfffffffe < pbVar13;
            if (pbVar13 != (byte *)0xffffffff) {
              bVar15 = local_108 <= pbVar13;
            }
            pbVar14 = local_fc;
            if (bVar15 && (pbVar13 != (byte *)0xffffffff && pbVar13 != local_108)) {
              local_10c = (int *)(local_104 + 0xc20);
              local_f8 = DAT_1000d6fc;
              pbVar14 = local_108;
              local_f4 = pbVar13;
              while( true ) {
                local_90 = 0x16;
                pbVar14 = (byte *)recovered_1000dfcc((int *)&local_f0,(char *)local_f8,(uint)pbVar14
                                                    );
                if ((pbVar14 == (byte *)0xffffffff) || (local_f4 <= pbVar14)) break;
                pbVar14 = pbVar14 + 3;
                local_98 = (byte *)0x0;
                local_9c = (byte *)0x0;
                local_c8 = pbVar14;
                iVar9 = recovered_1000e268((int *)&local_f0,(uint *)&local_c8,(int *)&local_98);
                if (iVar9 != 0) {
                  iVar9 = recovered_1000e268((int *)&local_f0,(uint *)&local_c8,(int *)&local_9c);
                  pbVar13 = local_9c;
                  if ((iVar9 != 0) && (-1 < (int)local_9c)) {
                    recovered_1000e318((int *)&local_f0,(uint *)&local_c8);
                    pbVar12 = local_c8 + 2;
                    if (pbVar12 <= local_100) {
                      pbVar11 = local_fc + (int)local_c8;
                      bVar1 = *pbVar11;
                      if (bVar1 == 0x52) {
                        pbVar11 = (byte *)(uint)pbVar11[1];
                      }
                      if (bVar1 == 0x52 && pbVar11 == (byte *)0x44) {
                        if ((pbVar12 < local_100) && (local_fc[(int)pbVar12] == 0x20)) {
                          pbVar12 = local_c8 + 3;
                        }
                        local_c8 = pbVar12;
                        if (local_100 < local_c8 || local_100 + -(int)local_c8 < pbVar13) {
                          bVar4 = false;
                          pbVar14 = local_f0;
                          goto LAB_1000d518;
                        }
                        pbVar14 = local_c8;
                        if (-1 < (int)local_98) {
                          local_108 = pbVar13;
                          local_114 = local_98;
                          local_110 = local_c8;
                          if (*(byte **)(local_104 + 0xc24) <= local_98) {
                            local_90 = 0x17;
                            recovered_1000e5bc(local_10c,(uint)(local_98 + 1));
                          }
                          local_90 = 0x18;
                          recovered_1000f9e8(&local_a8,local_fc + (int)local_110,
                                             local_fc + (int)local_110 + (int)local_108);
                          local_90 = 0x19;
                          recovered_1000e660(&local_b8,&local_a8,*(uint *)(local_104 + 0x1c));
                          recovered_1000e844((undefined4 *)(*local_10c + (int)local_114 * 0xc),
                                             &local_b8);
                          uStack_b4 = 0;
                          recovered_10006e94((void *)CONCAT13(PF_PART1(local_b8, 3),
                                                              CONCAT12(PF_PART1(local_b8, 2),
                                                                       CONCAT11(PF_PART1(local_b8, 1),
                                                                                (byte)local_b8))));
                          local_a4 = (byte *)0x0;
                          recovered_10006e94(local_a8);
                          pbVar14 = local_110;
                          pbVar13 = local_108;
                        }
                        pbVar14 = pbVar14 + (int)pbVar13;
                      }
                    }
                  }
                }
              }
              local_fc = local_f0;
              local_100 = (byte *)(local_104 + 0xc2c);
              local_f8 = pbStack_ec;
              pbVar14 = local_f0;
              pbVar12 = local_f4;
              pbVar13 = pbStack_ec;
              while (pbVar12 < pbVar13) {
                pbVar11 = pbVar14 + (int)pbVar12;
                pbVar12 = pbVar12 + 1;
                if (*pbVar11 == 0x2f) {
                  for (local_98 = pbVar12; local_98 < pbVar13; local_98 = local_98 + 1) {
                    uVar7 = (uint)pbVar14[(int)local_98];
                    if ((uVar7 - 9 < 5) || (uVar7 == 0x20 || uVar7 == 0x2f)) goto LAB_1000d398;
                  }
                  local_98 = pbVar13;
LAB_1000d398:
                  if (local_98 != pbVar12) {
                    local_90 = 0x1a;
                    recovered_1000e3b8((int *)&local_a8,(int)(pbVar14 + (int)pbVar12),
                                       (int)local_98 - (int)pbVar12,(int)pbVar14);
                    local_9c = (byte *)0x0;
                    iVar9 = recovered_1000e268((int *)&local_f0,(uint *)&local_98,(int *)&local_9c);
                    pbVar14 = local_9c;
                    if ((iVar9 == 0) || ((int)local_9c < 0)) {
                      pbVar12 = local_98;
                    }
                    else {
                      recovered_1000e318((int *)&local_f0,(uint *)&local_98);
                      pbVar13 = local_98 + 2;
                      pbVar12 = local_98;
                      if (pbVar13 <= local_f8) {
                        pbVar11 = local_fc + (int)local_98;
                        bVar1 = *pbVar11;
                        if (bVar1 == 0x52) {
                          pbVar11 = (byte *)(uint)pbVar11[1];
                        }
                        if (bVar1 == 0x52 && pbVar11 == (byte *)0x44) {
                          if ((pbVar13 < local_f8) && (local_fc[(int)pbVar13] == 0x20)) {
                            pbVar13 = local_98 + 3;
                          }
                          if (!(pbVar13 <= local_f8 && pbVar14 <= local_f8 + -(int)pbVar13)) {
                            recovered_10006e94(local_a8);
                            bVar4 = false;
                            pbVar14 = local_fc;
                            goto LAB_1000d518;
                          }
                          local_90 = 0x1b;
                          local_f4 = pbVar14;
                          local_108 = pbVar13;
                          recovered_1000f9e8(&local_b8,local_fc + (int)pbVar13,
                                             local_fc + (int)pbVar13 + (int)pbVar14);
                          local_90 = 0x1c;
                          recovered_1000e660((int *)&local_c8,&local_b8,*(uint *)(local_104 + 0x1c))
                          ;
                          local_90 = 0x1d;
                          puVar8 = (undefined4 *)
                                   recovered_1000e898((int *)local_100,(int *)&local_a8);
                          recovered_1000e844(puVar8,&local_c8);
                          local_c4 = 0;
                          recovered_10006e94(local_c8);
                          uStack_b4 = 0;
                          recovered_10006e94((void *)CONCAT13(PF_PART1(local_b8, 3),
                                                              CONCAT12(PF_PART1(local_b8, 2),
                                                                       CONCAT11(PF_PART1(local_b8, 1),
                                                                                (byte)local_b8))));
                          pbVar12 = local_108 + (int)local_f4;
                        }
                      }
                    }
                    pbVar13 = local_f8;
                    recovered_10006e94(local_a8);
                    pbVar14 = local_fc;
                  }
                }
              }
              bVar4 = *(int *)(local_104 + 0xc30) != 0;
            }
            goto LAB_1000d518;
          }
        }
        bVar4 = false;
        pbVar14 = local_fc;
      }
LAB_1000d518:
      pbStack_ec = (byte *)0x0;
      recovered_10006e94(pbVar14);
      goto LAB_1000d528;
    }
  }
LAB_1000ccec:
  bVar4 = false;
LAB_1000d528:
  local_dc = (byte *)0x0;
  recovered_10006e94(local_e0);
  local_d0 = (byte *)0x0;
  recovered_10006e94(local_d4);
  recovered_10007378(&uStack_94);
  return bVar4;
}

#undef DAT_1000d050
#undef DAT_1000d6e4
#undef DAT_1000d6e8
#undef DAT_1000d6ec
#undef DAT_1000d6f0
#undef DAT_1000d6f4
#undef DAT_1000d6f8
#undef DAT_1000d6fc
#undef DAT_1000d700
#undef DAT_1000d704
#undef DAT_1000d708
#undef EXT_00000004
#undef uStack_b4
#undef uStack_94
#undef auStack_68
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef auStack_120
#undef local_e8
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_b8
#undef pbStack_ec
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

#undef DAT_1000dd10
#define DAT_1000dd10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9f50U)))
#undef DAT_1000dd14
#define DAT_1000dd14 (*(int *)(((uintptr_t)pf_module_state + 0x9f54U)))
#undef DAT_1000dd18
#define DAT_1000dd18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9f58U)))
#undef DAT_1000dd1c
#define DAT_1000dd1c (*(uint * *)(((uintptr_t)pf_module_state + 0x9f5cU)))
#undef DAT_1000dd20
#define DAT_1000dd20 (*(int *)(((uintptr_t)pf_module_state + 0x9f60U)))
#undef DAT_1000dd24
#define DAT_1000dd24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9f64U)))
#undef DAT_1000dd28
#define DAT_1000dd28 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9f68U)))
#define local_7c (*(undefined4 *)(frame + 244))
#define local_78 (*(undefined4 *)(frame + 248))
#define local_74 (*(undefined1 * *)(frame + 252))
#define local_70 (*(int *)(frame + 256))
#define local_6c (*(undefined1 * *)(frame + 260))
#define auStack_160 (*(undefined1 (*)[4])(frame + 16))
#define local_15c (*(int *)(frame + 20))
#define local_158 (*(char * *)(frame + 24))
#define local_154 (*(uint * *)(frame + 28))
#define local_150 (*(uint * *)(frame + 32))
#define local_14c (*(uint * *)(frame + 36))
#define local_148 (*(uint * *)(frame + 40))
#define local_144 (*(uint * *)(frame + 44))
#define local_140 (*(int * *)(frame + 48))
#define local_13c (*(uint * *)(frame + 52))
#define local_138 (*(uint * *)(frame + 56))
#define local_130 (*(undefined4 *)(frame + 64))
#define local_12c (*(undefined4 *)(frame + 68))
#define local_128 (*(undefined4 *)(frame + 72))
#define local_124 (*(int (*)[3])(frame + 76))
#define local_118 (*(undefined2 *)(frame + 88))
#define local_114 (*(undefined4 *)(frame + 92))
#define local_110 (*(undefined4 *)(frame + 96))
#define local_10c (*(undefined4 *)(frame + 100))
#define local_108 (*(undefined4 *)(frame + 104))
#define local_104 (*(undefined4 *)(frame + 108))
#define local_100 (*(undefined4 *)(frame + 112))
#define local_fc (*(undefined4 *)(frame + 116))
#define local_f8 (*(undefined4 *)(frame + 120))
#define local_f4 (*(undefined4 *)(frame + 124))
#define local_f0 (*(undefined4 *)(frame + 128))
#define uStack_b0 (*(undefined4 *)(frame + 192))
#define local_ec (*(undefined4 *)(frame + 132))
#define local_e8 (*(undefined4 *)(frame + 136))
#define local_e4 (*(undefined4 *)(frame + 140))
#define local_e0 (*(undefined4 *)(frame + 144))
#define local_dc (*(undefined4 *)(frame + 148))
#define uStack_94 (*(undefined4 *)(frame + 220))
#define local_d8 (*(undefined4 *)(frame + 152))
#define local_d4 (*(undefined4 *)(frame + 156))
#define local_d0 (*(undefined4 *)(frame + 160))
#define local_cc (*(undefined4 *)(frame + 164))
#define local_c8 (*(undefined4 *)(frame + 168))
#define local_c4 (*(undefined4 *)(frame + 172))
#define local_c0 (*(undefined4 *)(frame + 176))
#define local_bc (*(undefined4 *)(frame + 180))
#define auStack_68 (*(undefined1 (*)[8])(frame + 264))
#define local_b8 (*(undefined4 *)(frame + 184))
#define local_b4 (*(undefined4 *)(frame + 188))
#define local_ac (*(undefined2 *)(frame + 196))
#define local_aa (*(undefined1 *)(frame + 198))
#define local_a5 (*(undefined1 *)(frame + 203))
#define local_a4 (*(void * *)(frame + 204))
#define local_a0 (*(undefined4 *)(frame + 208))
#define local_98 (*(int * *)(frame + 216))
#define local_90 (*(undefined4 *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x994cU)
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_1000d70c(void *out,void *backend,uint glyph,double scale)

{
  unsigned char frame[400] = {0};

  char cVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *in_r3;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint *unaff_r10;
  int *piVar14;
  uint uVar15;
  bool bVar16;
  double in_d7;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_160;
  local_7c = *DAT_1000dd18;
  local_78 = DAT_1000dd10;
  local_70 = DAT_1000dd14 + ((uintptr_t)pf_module_state+0x99a4U);
  local_14c = in_r3;
  local_140 = out;
  recovered_10007360(&uStack_94);
  local_144 = backend;
  if ((glyph < 0x100) && (*(int *)((int)backend + glyph * 0xc + 0x24) != 0)) {
    puVar11 = (uint *)((int)backend + glyph * 0xc + 0x20);
  }
  else {
    puVar11 = DAT_1000dd1c + 1;
    DataMemoryBarrier(0xb);
    if ((*DAT_1000dd1c & 1) == 0) {
      local_148 = DAT_1000dd1c;
      uVar15 = recovered_1000719c(DAT_1000dd1c);
      if (uVar15 != 0) {
        local_90 = 1;
        local_150 = local_148 + 1;
        recovered_1000f390(local_150,DAT_1000dd20);
        puVar11 = local_150;
        recovered_10007194();
        recovered_100071ac(local_148);
        backend = local_144;
      }
    }
  }
  local_90 = 0xffffffff;
  local_148 = (uint *)recovered_1000eab4((int *)((int)backend + 0xc2c),(int *)puVar11);
  local_90 = 0xffffffff;
  recovered_1000f390(&local_13c,DAT_1000dd20);
  local_90 = 2;
  puVar11 = (uint *)recovered_1000eab4((int *)((int)backend + 0xc2c),(int *)&local_13c);
  recovered_10006e94(local_13c);
  pcVar2 = (char *)(local_144[0x30b] + local_144[0x30c] * 0x18);
  if (local_148 == (uint *)pcVar2 && puVar11 == (uint *)pcVar2) {
    *local_140 = 0;
    local_140[1] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_140[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_140[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_140[4] = 0;
    local_140[5] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_140[6] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_140[7] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_140[8] = 0;
    recovered_1000a9e0(local_140);
    goto LAB_1000d9d4;
  }
  if (local_148 != (uint *)pcVar2) {
    puVar11 = local_148;
  }
  local_13c = local_144;
  local_110 = 0;
  local_114 = 0;
  local_108 = 0;
  local_10c = 0;
  local_100 = 0;
  local_104 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_bc = 0;
  uStack_b0 = 0;
  local_b4 = 0;
  local_aa = 0;
  local_ac = 0;
  local_118 = 0;
  local_124[2] = 0;
  local_124[1] = 0;
  local_124[0] = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_138 = local_14c;
  local_90 = 3;
  iVar3 = recovered_1000ef0c((int *)&local_13c,(int *)((int)puVar11 + 0xc),0,local_14c,in_d7);
  piVar14 = local_140;
  if (iVar3 == 0) {
    recovered_1000a9e0(local_140);
  }
  else {
    local_90 = 4;
    recovered_1000b764(local_140,local_124,CONCAT44(uStack_b0,local_b4));
    puVar4 = (uint *)local_140[2];
    puVar11 = puVar4;
    if (0 < (int)puVar4) {
      puVar11 = (uint *)local_140[3];
      unaff_r10 = puVar11;
    }
    piVar14 = local_140;
    if ((0 < (int)puVar11) && (local_98 = local_140 + 6, local_140[7] != 0)) {
      iVar3 = -1;
      pcVar9 = (char *)*local_98;
      pcVar13 = (char *)((int)puVar4 + (int)pcVar9) + -1;
      pcVar2 = pcVar9;
      for (puVar11 = (uint *)0x0; unaff_r10 != puVar11; puVar11 = (uint *)((int)puVar11 + 1)) {
        puVar5 = (uint *)0x0;
        while (puVar4 != puVar5) {
          pcVar6 = pcVar2 + (int)puVar5;
          puVar5 = (uint *)((int)puVar5 + 1);
          if (*pcVar6 != '\0') {
            pcVar9 = pcVar9 + (int)puVar4 * ((int)unaff_r10 + -1);
            uVar10 = 0;
            uVar15 = (int)unaff_r10 - (int)puVar11 & ~((int)unaff_r10 - (int)puVar11 >> 0x1f);
            goto LAB_1000da10;
          }
        }
        pcVar2 = pcVar2 + (int)puVar4;
        pcVar13 = pcVar13 + (int)puVar4;
        iVar3 = iVar3 + 1;
      }
      goto LAB_1000db08;
    }
  }
  goto LAB_1000d9c4;
LAB_1000da10:
  if (uVar10 == uVar15) goto LAB_1000da4c;
  pcVar6 = pcVar9;
  puVar5 = puVar4;
  while (puVar5 != (uint *)0x0) {
    cVar1 = *pcVar6;
    puVar5 = (uint *)((int)puVar5 + -1);
    pcVar6 = pcVar6 + 1;
    if (cVar1 != '\0') {
      uVar15 = uVar10;
      goto LAB_1000da4c;
    }
  }
  pcVar9 = pcVar9 + -(int)puVar4;
  uVar10 = uVar10 + 1;
  goto LAB_1000da10;
LAB_1000da4c:
  puVar12 = (uint *)((int)unaff_r10 - uVar15);
  for (puVar5 = (uint *)0x0; puVar5 != puVar4; puVar5 = (uint *)((int)puVar5 + 1)) {
    iVar7 = iVar3;
    pcVar6 = pcVar2;
    while (iVar7 = iVar7 + 1, iVar7 < (int)puVar12) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (int)puVar4;
      if (cVar1 != '\0') goto LAB_1000da98;
    }
    pcVar2 = pcVar2 + 1;
  }
  puVar5 = puVar4;
LAB_1000da98:
  uVar10 = (int)puVar4 - (int)puVar5 & ~((int)puVar4 - (int)puVar5 >> 0x1f);
  for (uVar8 = 0; uVar8 != uVar10; uVar8 = uVar8 + 1) {
    iVar7 = iVar3;
    pcVar2 = pcVar13;
    while (iVar7 = iVar7 + 1, iVar7 < (int)puVar12) {
      pcVar9 = pcVar2 + (int)puVar4;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
      if (cVar1 != '\0') {
        uVar10 = uVar8;
        goto LAB_1000dae8;
      }
    }
    pcVar13 = pcVar13 + -1;
    pcVar9 = pcVar2;
  }
LAB_1000dae8:
  iVar3 = (int)unaff_r10 - ((int)puVar11 + uVar15);
  bVar16 = iVar3 == 1;
  if (0 < iVar3) {
    pcVar9 = (char *)((int)puVar4 - ((int)puVar5 + uVar10));
  }
  pcVar2 = (char *)(iVar3 + -1);
  if (iVar3 >= 1) {
    bVar16 = pcVar9 == (char *)0x0;
    pcVar2 = pcVar9;
  }
  local_14c = puVar11;
  if (bVar16 || (int)pcVar2 < 0 != (iVar3 < 1 && SBORROW4(iVar3,1))) {
LAB_1000db08:
    *local_140 = 0;
    local_140[1] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_140[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_140[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_140[7] = 0;
  }
  else {
    local_90 = 5;
    local_a5 = 0;
    local_15c = iVar3;
    local_158 = pcVar9;
    local_154 = puVar12;
    local_150 = puVar5;
    recovered_1000f940(&local_a4,(int)pcVar9 * iVar3,&local_a5);
    pcVar2 = (char *)0x0;
    puVar11 = local_14c;
    while (piVar14 = local_140, local_154 != puVar11) {
      local_90 = 6;
      local_148 = (uint *)pcVar2;
      local_144 = puVar11;
      recovered_10004954((char *)((int)local_a4 + (int)pcVar2),
                         (void *)(local_140[2] * (int)puVar11 + local_140[6] + (int)local_150),
                         (ulong)local_158);
      pcVar2 = (char *)((int)local_148 + (int)local_158);
      puVar11 = (uint *)((int)local_144 + 1);
    }
    local_140[3] = local_15c;
    *local_140 = *local_140 + (int)local_150;
    local_140[2] = (int)local_158;
    local_140[1] = local_140[1] - (int)local_14c;
    recovered_1000e844(local_98,&local_a4);
    local_a0 = 0;
    recovered_10006e94(local_a4);
  }
LAB_1000d9c4:
  *(ulonglong *)(piVar14 + 4) = CONCAT44(uStack_b0,local_b4);
  recovered_1000f364((int)&local_13c);
LAB_1000d9d4:
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_1000dd10
#undef DAT_1000dd14
#undef DAT_1000dd18
#undef DAT_1000dd1c
#undef DAT_1000dd20
#undef DAT_1000dd24
#undef DAT_1000dd28
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_160
#undef local_15c
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef uStack_b0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef uStack_94
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_aa
#undef local_a5
#undef local_a4
#undef local_a0
#undef local_98
#undef local_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f6cU)
 */

undefined8 recovered_1000dd2c(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f78U)
 */

undefined8 recovered_1000dd38(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0xc);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f84U)
 */

undefined8 recovered_1000dd44(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0x14);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f90U)
 */

undefined8 recovered_1000dd50(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f9cU)
 */

undefined4 recovered_1000dd5c(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9fa4U)
 */

void recovered_1000dd64(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9fd0U)
 */

int * recovered_1000dd90(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000ddb0(param_1);
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ff0U)
 */

void recovered_1000ddb0(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x18;
  for (; iVar2 = iVar2 + -0x18, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000ddf8((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa038U)
 */

void recovered_1000ddf8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000f91c(param_1 + 3);
  recovered_1000de1c(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa058U)
 */

undefined4 * recovered_1000de18(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa05cU)
 */

undefined4 * recovered_1000de1c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa078U)
 */

int * recovered_1000de38(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000de58(param_1);
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa098U)
 */

void recovered_1000de58(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000f91c((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa0e0U)
 */

int recovered_1000dea0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  iVar1 = 0xbf4;
  do {
    recovered_1000de1c((undefined4 *)(param_1 + iVar1));
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -0xc;
  } while (bVar2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa10cU)
 */

void recovered_1000decc(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000a3d4((undefined4 *)(param_1 + 0x18));
  recovered_1000a3d4((undefined4 *)(param_1 + 0xc));
  recovered_1000dd90((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa134U)
 */

int recovered_1000def4(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_1000a580(param_1,uVar5);
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
 * Address: ((uintptr_t)pf_module_state+0xa20cU)
 */

uint recovered_1000dfcc(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  ulong size;
  uint uVar1;
  int iVar2;

  if ((((param_2 != (char *)0x0) && (param_3 < (uint)param_1[1])) &&
      (size = recovered_10004af4(param_2), size != 0)) &&
     (uVar1 = param_1[1], size <= uVar1 - param_3)) {
    for (; size + param_3 <= uVar1; param_3 = param_3 + 1) {
      iVar2 = recovered_10004a0c((void *)(*param_1 + param_3),param_2,size);
      if (iVar2 == 0) {
        return param_3;
      }
      uVar1 = param_1[1];
    }
  }
  return 0xffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2a4U)
 */

void recovered_1000e064(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000def4(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2bcU)
 */

void recovered_1000e07c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000e148(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)(uVar1 + param_1[1]) = 0;
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa324U)
 */

void recovered_1000e0e4(int *param_1,undefined1 param_2)

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
    recovered_1000e07c(param_1,uVar2);
  }
  recovered_1000e164(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa388U)
 */

uint recovered_1000e148(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10006e64(param_1 + 1);
  *puVar1 = 0;
  return (uint)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa3a4U)
 */

void recovered_1000e164(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_1000e148(0);
    param_1[2] = 0;
    *param_1 = uVar1;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa3d4U)
 */

int recovered_1000e194(int *param_1,undefined1 *param_2)

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
    recovered_1000a580(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


#define local_18 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa434U)
 */

bool recovered_1000e1f4(int *param_1,uint *param_2,undefined4 *param_3,char *param_4)

{
  unsigned char frame[72] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  char *text;
  bool bVar1;

  local_18 = param_4;
  recovered_1000e318(param_1,param_2);
  bVar1 = false;
  if (*param_2 < (uint)param_1[1]) {
    local_18 = (char *)0x0;
    text = (char *)(*param_1 + *param_2);
    recovered_10005644(text,&local_18);
    param_3[1] = extraout_r1;
    *param_3 = extraout_r0;
    bVar1 = local_18 != text;
    if (bVar1) {
      *param_2 = (uint)(local_18 + (*param_2 - (int)text));
    }
  }
  return bVar1;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4a8U)
 */

int recovered_1000e268(int *param_1,uint *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  recovered_1000e318(param_1,param_2);
  uVar6 = param_1[1];
  iVar3 = 0;
  uVar4 = *param_2;
  if (uVar4 < uVar6) {
    iVar5 = *param_1;
    cVar1 = *(char *)(iVar5 + uVar4);
    if (cVar1 == '-' || cVar1 == '+') {
      uVar4 = uVar4 + 1;
      *param_2 = uVar4;
      uVar6 = param_1[1];
    }
    if ((uVar4 < uVar6) && (0xfffffff5 < *(byte *)(iVar5 + uVar4) - 0x3a)) {
      while ((uVar4 < uVar6 && (bVar2 = *(byte *)(iVar5 + uVar4), bVar2 - 0x30U < 10))) {
        uVar4 = uVar4 + 1;
        *param_2 = uVar4;
        uVar6 = param_1[1];
        iVar3 = (uint)bVar2 + iVar3 * 10 + -0x30;
      }
      if (cVar1 == '-') {
        iVar3 = -iVar3;
      }
      *param_3 = iVar3;
      iVar3 = 1;
    }
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa558U)
 */

double recovered_1000e318(int *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  double in_d0;

  uVar1 = *param_2;
  iVar3 = *param_1;
  while ((uVar1 < (uint)param_1[1] && (uVar2 = *(byte *)(iVar3 + uVar1) - 9, uVar2 < 0x18))) {
    if ((1 << (uVar2 & 0xff) & 0x80001fU) == 0) {
      return in_d0;
    }
    uVar1 = uVar1 + 1;
    *param_2 = uVar1;
  }
  return in_d0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa5a8U)
 */

undefined4 * recovered_1000e368(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    recovered_10006e94((void *)*param_1);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa5f8U)
 */

int * recovered_1000e3b8(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_1000e3ec(param_1,param_2,param_3,param_4);
  return param_1;
}


#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa62cU)
 */

void recovered_1000e3ec(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *data;
  uint uVar2;
  int iVar3;
  int extraout_r3 = 0;

  local_1c = 0;
  iVar1 = recovered_1000e4e8(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_1000e164(param_1);
    }
    else {
      recovered_1000e07c(param_1,param_3);
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
    recovered_1000e3b8((int *)&local_28,*param_1 + local_1c,uVar2,extraout_r3);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = data;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10006e94(data);
  }
  return;
}

#undef local_28
#undef local_20
#undef local_1c
#undef iStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa728U)
 */

undefined4 recovered_1000e4e8(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0xa77cU)
 */

int recovered_1000e53c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3 - iVar2;
    uVar3 = param_2 - iVar2;
    if (uVar3 < uVar1) {
      iVar2 = uVar1 - uVar3;
      uVar4 = uVar3;
      for (; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(*param_1 + uVar1);
        uVar4 = uVar4 + 1;
      }
      param_1[1] = param_1[1] - iVar2;
      if (*param_1 == 0) {
        return 0;
      }
      return *param_1 + uVar3;
    }
  }
  if (iVar2 != 0) {
    iVar2 = iVar2 + uVar3;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa7fcU)
 */

void recovered_1000e5bc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 * 0xc;
    for (; iVar2 = iVar2 + -0xc, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_1000f91c((undefined4 *)(*param_1 + iVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_1000ea1c(param_1,param_2);
    uVar3 = param_1[1];
    iVar2 = uVar3 * 0xc;
    while (uVar3 < param_2) {
      uVar3 = uVar3 + 1;
      param_1[1] = uVar3;
      puVar1 = (undefined4 *)(*param_1 + iVar2);
      *puVar1 = 0;
      iVar2 = iVar2 + 0xc;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
  }
  return;
}


#undef DAT_1000e838
#define DAT_1000e838 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa78U)))
#undef DAT_1000e83c
#define DAT_1000e83c (*(int *)(((uintptr_t)pf_module_state + 0xaa7cU)))
#undef DAT_1000e840
#define DAT_1000e840 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xaa80U)))
#define local_bc (*(uint *)(frame + 20))
#define local_b8 (*(int * *)(frame + 24))
#define local_b4 (*(int *)(frame + 28))
#define local_b0 (*(uint *)(frame + 32))
#define local_ac (*(byte * *)(frame + 36))
#define local_a8 (*(undefined4 * *)(frame + 40))
#define local_a1 (*(byte *)(frame + 47))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(uint *)(frame + 52))
#define local_98 (*(int *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa8a0U)
 */

void recovered_1000e660(int *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[240] = {0};

  byte *pbVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_1000e840;
  local_78 = DAT_1000e838;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_70 = DAT_1000e83c + ((uintptr_t)pf_module_state+0xa900U);
  uVar5 = param_2[1];
  local_90 = 1;
  local_bc = param_3;
  local_b8 = param_1;
  local_a8 = param_2;
  recovered_10007360(&uStack_94);
  recovered_1000a580((int *)&local_a0,uVar5);
  iVar4 = 0x10ea;
  pbVar1 = (byte *)*local_a8;
  puVar3 = (undefined4 *)local_a8[1];
  while (puVar3 != (undefined4 *)0x0) {
    local_b0 = (uint)*pbVar1;
    local_90 = 2;
    local_a1 = *pbVar1 ^ (byte)((uint)iVar4 >> 8);
    local_b4 = iVar4;
    local_ac = pbVar1;
    local_a8 = puVar3;
    recovered_1000c25c((int *)&local_a0,&local_a1);
    iVar4 = (local_b4 + local_b0) * 0xce6d + 0x58bf;
    pbVar1 = local_ac + 1;
    puVar3 = (undefined4 *)((int)local_a8 + -1);
  }
  uVar5 = local_bc & ~((int)local_bc >> 0x1f);
  if (uVar5 < local_9c) {
    recovered_1000e53c((int *)&local_a0,(int)local_a0,(int)local_a0 + uVar5);
    iVar4 = local_98;
    pvVar2 = local_a0;
    local_a0 = (void *)0x0;
    local_98 = 0;
    uVar5 = local_9c;
  }
  else {
    pvVar2 = (void *)0x0;
    uVar5 = 0;
    iVar4 = 0;
  }
  local_9c = 0;
  *local_b8 = (int)pvVar2;
  local_b8[2] = iVar4;
  local_b8[1] = uVar5;
  recovered_10006e94(local_a0);
  recovered_10007378(&uStack_94);
  return;
}

#undef DAT_1000e838
#undef DAT_1000e83c
#undef DAT_1000e840
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a1
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
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaa84U)
 */

undefined4 * recovered_1000e844(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10006e94((void *)*param_1);
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


#undef DAT_1000ea0c
#define DAT_1000ea0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xac4cU)))
#undef DAT_1000ea10
#define DAT_1000ea10 (*(int *)(((uintptr_t)pf_module_state + 0xac50U)))
#undef DAT_1000ea14
#define DAT_1000ea14 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xac54U)))
#undef DAT_1000ea18
#define DAT_1000ea18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xac58U)))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(int * *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaad8U)
 */

int recovered_1000e898(int *param_1,int *param_2)

{
  unsigned char frame[224] = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = recovered_1000eab4(param_1,param_2);
  local_7c = *DAT_1000ea14;
  local_78 = DAT_1000ea0c;
  local_70 = DAT_1000ea10 + ((uintptr_t)pf_module_state+0xab30U);
  iVar4 = *param_1;
  iVar3 = param_1[1];
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_10007360(&uStack_94);
  if (iVar2 == iVar4 + iVar3 * 0x18) {
    local_90 = 0xffffffff;
    recovered_1000eadc((int)param_1);
    local_90 = 1;
    local_98 = 0;
    local_9c = 0;
    local_a0 = (void *)0x0;
    local_a4 = param_1;
    recovered_1000eb0c(param_1,param_2,&local_a0);
    local_9c = 0;
    recovered_10006e94(local_a0);
    piVar1 = local_a4;
    local_90 = 0xffffffff;
    recovered_1000a834(local_a4 + 6,(undefined4 *)*DAT_1000ea18);
    recovered_1000eb7c(piVar1,piVar1[1] + -1);
    iVar2 = *piVar1 + piVar1[1] * 0x18 + -0x18;
  }
  recovered_10007378(&uStack_94);
  return iVar2 + 0xc;
}

#undef DAT_1000ea0c
#undef DAT_1000ea10
#undef DAT_1000ea14
#undef DAT_1000ea18
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xac5cU)
 */

void recovered_1000ea1c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000ea9c(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000bee4((undefined4 *)(uVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_1000f91c((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0xc;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xacdcU)
 */

uint recovered_1000ea9c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 * 0xc);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xacf4U)
 */

int recovered_1000eab4(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000ebb8(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xad1cU)
 */

void recovered_1000eadc(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < (uint)((*(int *)(param_1 + 4) + 1) * 4))) {
    recovered_1000ecdc(param_1,*(int *)(param_1 + 4) * 2 + 2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xad4cU)
 */

int recovered_1000eb0c(int *param_1,int *param_2,undefined4 *param_3)

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
    recovered_1000edb0(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000ee9c((undefined4 *)(*param_1 + iVar1 * 0x18),param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xadbcU)
 */

void recovered_1000eb7c(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000ec30((int)param_1,(int *)(*param_1 + param_2 * 0x18));
  iVar2 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xadf8U)
 */

int recovered_1000ebb8(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;

  if (param_1[4] != 0) {
    uVar2 = recovered_1000ec30((int)param_1,param_2);
    piVar3 = (int *)(param_1[3] + uVar2 * 4);
    while (iVar4 = *piVar3, iVar4 != -1) {
      bVar1 = recovered_1000ec70((int *)(*param_1 + iVar4 * 0x18),param_2);
      if (bVar1) {
        return iVar4;
      }
      piVar3 = (int *)(param_1[6] + iVar4 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xae70U)
 */

uint recovered_1000ec30(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ec54(param_1 + 0x24,param_2);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


#undef DAT_1000ec6c
#define DAT_1000ec6c (*(int *)(((uintptr_t)pf_module_state + 0xaeacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xae94U)
 */

uint recovered_1000ec54(undefined4 param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar2;
  uint uVar1;

  iVar2 = DAT_1000ec6c;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  uVar1 = recovered_1000a6c0(iVar2,param_2[1]);
  return uVar1;
}

#undef DAT_1000ec6c

#undef DAT_1000eca0
#define DAT_1000eca0 (*(char * *)(((uintptr_t)pf_module_state + 0xaee0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaeb0U)
 */

bool recovered_1000ec70(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = (char *)*param_1;
  if ((char *)*param_1 == (char *)0x0) {
    pcVar3 = DAT_1000eca0;
  }
  pcVar2 = (char *)*param_2;
  if ((char *)*param_2 == (char *)0x0) {
    pcVar2 = DAT_1000eca0;
  }
  bVar1 = recovered_1000eca4(pcVar3,param_1[1],pcVar2,param_2[1]);
  return bVar1;
}

#undef DAT_1000eca0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaee4U)
 */

bool recovered_1000eca4(char *param_1,int param_2,char *param_3,int param_4)

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


#undef DAT_1000ed38
#define DAT_1000ed38 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xaf78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaf1cU)
 */

void recovered_1000ecdc(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 *puVar2;

  uVar1 = *(uint *)(param_1 + 4) << 1;
  if (*(uint *)(param_1 + 4) < 4) {
    uVar1 = 8;
  }
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  uVar1 = recovered_1000ed3c(uVar1);
  puVar2 = (undefined4 *)*DAT_1000ed38;
  recovered_1000a6f0((int *)(param_1 + 0xc),uVar1,puVar2);
  recovered_1000a6f0((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar2);
  recovered_1000ed58(param_1);
  return;
}

#undef DAT_1000ed38

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaf7cU)
 */

uint recovered_1000ed3c(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaf98U)
 */

void recovered_1000ed58(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_1000eb7c((int *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaff0U)
 */

void recovered_1000edb0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000ee30(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000ee48((undefined4 *)(uVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_1000ddf8((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0x18;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb070U)
 */

uint recovered_1000ee30(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 * 0x18);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb088U)
 */

undefined4 * recovered_1000ee48(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ee70(param_1,param_2);
  recovered_1000bee4((undefined4 *)(uVar1 + 0xc),param_2 + 3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb0b0U)
 */

uint recovered_1000ee70(undefined4 *param_1,undefined4 *param_2)

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
  return (uint)param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb0dcU)
 */

undefined4 * recovered_1000ee9c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000eec4(param_1,param_2);
  recovered_1000bee4(puVar1 + 3,param_3);
  return param_1;
}


#undef DAT_1000ef08
#define DAT_1000ef08 (*(int *)(((uintptr_t)pf_module_state + 0xb148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb104U)
 */

undefined4 * recovered_1000eec4(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_1000ef08;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_1000e3ec(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_1000ef08

#undef DAT_1000f32c
#define DAT_1000f32c (*(double *)(((uintptr_t)pf_module_state + 0xb56cU)))
#define local_30 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb14cU)
 */

undefined4 recovered_1000ef0c(int *param_1,int *param_2,int param_3,undefined4 param_4,double in_d7)

{
  unsigned char frame[96] = {0};

  byte bVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 uVar8;
  uint uVar9;
  uint in_fpscr;
  double in_d7_00;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;

  dVar2 = DAT_1000f32c;
  uVar8 = 0;
  if (param_3 < 0x11) {
    uVar5 = 0;
    local_30 = in_d7;
    while (uVar6 = param_2[1], uVar5 < uVar6) {
      iVar3 = *param_2;
      uVar9 = uVar5 + 1;
      bVar1 = *(byte *)(iVar3 + uVar5);
      uVar7 = (uint)bVar1;
      if (uVar7 == 0xc) {
        if (uVar6 <= uVar9) {
          return 0;
        }
        uVar6 = (uint)*(byte *)(iVar3 + uVar9);
        if ((1 < uVar6 - 0x10) && (uVar6 != 0x21)) {
          if (uVar6 != 7) {
            return 0;
          }
          if ((uint)param_1[4] < 4) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x24) = 0;
          iVar3 = param_1[3] + param_1[4] * 8;
          uVar10 = *(undefined8 *)(iVar3 + -0x20);
          *(undefined8 *)(param_1 + 0x1a) = uVar10;
          uVar12 = *(undefined8 *)(iVar3 + -0x18);
          *(undefined8 *)(param_1 + 0x1e) = uVar10;
          *(undefined8 *)(param_1 + 0x1c) = uVar12;
          *(undefined8 *)(param_1 + 0x20) = uVar12;
          *(double *)(param_1 + 0x22) = *(double *)(iVar3 + -0x10) * *(double *)(param_1 + 1);
        }
        param_1[4] = 0;
        uVar5 = uVar5 + 2;
      }
      else if (uVar7 < 0x20) {
        uVar8 = 0;
        switch((uintptr_t)(uVar7)) {
        case 1:
        case 3:
          goto switchD_1000f004_caseD_1;
        default:
          goto switchD_1000f004_caseD_2;
        case 4:
          if (param_1[4] == 0) {
            return 0;
          }
          iVar3 = param_1[3];
          iVar4 = iVar3 + param_1[4] * 8;
          goto LAB_1000f1d4;
        case 5:
          if ((uint)param_1[4] < 2) {
            return 0;
          }
          iVar3 = param_1[3] + param_1[4] * 8;
          dVar11 = *(double *)(iVar3 + -8);
          *(double *)(param_1 + 0x1a) = *(double *)(iVar3 + -0x10) + *(double *)(param_1 + 0x1a);
          goto LAB_1000f190;
        case 6:
          if (param_1[4] == 0) {
            return 0;
          }
          *(double *)(param_1 + 0x1a) =
               *(double *)(param_1[3] + param_1[4] * 8 + -8) + *(double *)(param_1 + 0x1a);
          goto LAB_1000f218;
        case 7:
          if (param_1[4] == 0) {
            return 0;
          }
          dVar11 = *(double *)(param_1[3] + param_1[4] * 8 + -8);
LAB_1000f190:
          *(double *)(param_1 + 0x1c) = dVar11 + *(double *)(param_1 + 0x1c);
LAB_1000f218:
          recovered_1000f49c((int)param_1);
          param_4 = extraout_r3_01;
          goto switchD_1000f004_caseD_1;
        case 9:
          recovered_1000f424((int)param_1);
          param_4 = extraout_r3_00;
          goto switchD_1000f004_caseD_1;
        case 10:
          if (param_1[4] == 0) {
            return 0;
          }
          uVar10 = *(undefined8 *)(param_1[3] + param_1[4] * 8 + -8);
          uVar5 = recovered_1000533c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
          param_1[4] = 0;
          if ((int)uVar5 < 0) {
            return 0;
          }
          if (*(uint *)(*param_1 + 0xc24) <= uVar5) {
            return 0;
          }
          iVar3 = recovered_1000ef0c(param_1,(int *)(*(int *)(*param_1 + 0xc20) + uVar5 * 0xc),
                                     param_3 + 1,extraout_r3_03,in_d7_00);
          if (iVar3 == 0) {
            return 0;
          }
          param_4 = extraout_r3_04;
          if (*(char *)((int)param_1 + 0x91) == '\x01') {
            *(undefined1 *)((int)param_1 + 0x91) = 0;
          }
          break;
        case 0xb:
          param_1[4] = 0;
          *(undefined1 *)((int)param_1 + 0x91) = 1;
          break;
        case 0xd:
          if ((uint)param_1[4] < 2) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x24) = 0;
          iVar3 = param_1[3] + param_1[4] * 8;
          param_1[4] = 0;
          uVar10 = *(undefined8 *)(iVar3 + -0x10);
          dVar11 = *(double *)(iVar3 + -8);
          *(undefined8 *)(param_1 + 0x1e) = uVar10;
          *(undefined8 *)(param_1 + 0x1a) = uVar10;
          param_1[0x1d] = 0;
          param_1[0x1c] = 0;
          param_1[0x21] = 0;
          param_1[0x20] = 0;
          *(double *)(param_1 + 0x22) = dVar11 * *(double *)(param_1 + 1);
          break;
        case 0xe:
          recovered_1000f424((int)param_1);
          param_1[4] = 0;
          *(undefined1 *)((int)param_1 + 0x92) = 1;
          param_4 = extraout_r3_05;
          break;
        case 0x15:
          if ((uint)param_1[4] < 2) {
            return 0;
          }
          iVar3 = param_1[3];
          iVar4 = iVar3 + param_1[4] * 8;
          *(double *)(param_1 + 0x1a) = *(double *)(iVar4 + -0x10) + *(double *)(param_1 + 0x1a);
LAB_1000f1d4:
          *(double *)(param_1 + 0x1c) = *(double *)(iVar4 + -8) + *(double *)(param_1 + 0x1c);
LAB_1000f294:
          recovered_1000f444((int)param_1,iVar3,uVar7,param_4);
          param_4 = extraout_r3_02;
switchD_1000f004_caseD_1:
          param_1[4] = 0;
          break;
        case 0x16:
          if (param_1[4] == 0) {
            return 0;
          }
          iVar3 = param_1[3];
          *(double *)(param_1 + 0x1a) =
               *(double *)(iVar3 + param_1[4] * 8 + -8) + *(double *)(param_1 + 0x1a);
          goto LAB_1000f294;
        }
        if ((*(char *)((int)param_1 + 0x92) != '\0') ||
           (uVar5 = uVar9, *(char *)((int)param_1 + 0x91) != '\0')) break;
      }
      else {
        if (uVar7 - 0x20 < 0xd7) {
          dVar11 = (double)VectorSignedToFloat(uVar7 - 0x8b,(byte)(in_fpscr >> 0x16) & 3);
LAB_1000f090:
          uVar6 = uVar9;
        }
        else if (uVar7 - 0xf7 < 4) {
          dVar11 = 0.0;
          if (uVar6 <= uVar9) goto LAB_1000f090;
          dVar11 = (double)VectorUnsignedToFloat
                                     (CONCAT11(bVar1,*(undefined1 *)(iVar3 + uVar9)) - 0xf694,
                                      (byte)(in_fpscr >> 0x16) & 3);
          uVar6 = uVar5 + 2;
        }
        else if (uVar7 - 0xfb < 4) {
          dVar11 = 0.0;
          if (uVar6 <= uVar9) goto LAB_1000f090;
          dVar11 = (double)VectorSignedToFloat(0xfa94 - (uint)CONCAT11(bVar1,*(undefined1 *)
                                                                              (iVar3 + uVar9)),
                                               (byte)(in_fpscr >> 0x16) & 3);
          uVar6 = uVar5 + 2;
        }
        else {
          dVar11 = 0.0;
          if (uVar5 + 5 <= uVar6) {
            uVar6 = recovered_10009558(param_2,uVar9);
            dVar11 = (double)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
            dVar11 = dVar11 * dVar2;
            uVar6 = uVar5 + 5;
          }
        }
        local_30 = dVar11;
        recovered_1000f514(param_1 + 3,&local_30);
        param_4 = extraout_r3;
        uVar5 = uVar6;
      }
    }
    uVar8 = 1;
  }
switchD_1000f004_caseD_2:
  return uVar8;
}

#undef DAT_1000f32c
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb5a4U)
 */

int recovered_1000f364(int param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x1c) = 0;
  recovered_10006e94(*(void **)(param_1 + 0x18));
  recovered_1000f400((undefined4 *)(param_1 + 0xc));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb5d0U)
 */

undefined4 * recovered_1000f390(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_1000f3d0(param_2);
  recovered_1000e3ec(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb610U)
 */

int recovered_1000f3d0(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0xb640U)
 */

undefined4 * recovered_1000f400(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb664U)
 */

void recovered_1000f424(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000c0b8((int *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}


#define local_1c (*(undefined8 *)(frame + 16))
#define local_14 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb684U)
 */

void recovered_1000f444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};


  local_14 = pf_double_bits(pf_bits_double(CONCAT44(param_4,param_3)));
  local_1c = pf_double_bits(pf_bits_double(CONCAT44(param_2,param_1)));
  recovered_1000f424(param_1);
  local_14 = *(double *)(param_1 + 0x70) * *(double *)(param_1 + 4);
  local_1c = *(double *)(param_1 + 0x68) * *(double *)(param_1 + 4);
  recovered_1000bf68((int *)(param_1 + 0x18),(double *)&local_1c);
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
  return;
}

#undef local_1c
#undef local_14

#define local_1c (*(double *)(frame + 16))
#define local_14 (*(double *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb6dcU)
 */

void recovered_1000f49c(int param_1)

{
  unsigned char frame[76] = {0};


  if (*(char *)(param_1 + 0x90) == '\0') {
    local_14 = *(double *)(param_1 + 0x80) * *(double *)(param_1 + 4);
    local_1c = *(double *)(param_1 + 0x78) * *(double *)(param_1 + 4);
    recovered_1000bf68((int *)(param_1 + 0x18),&local_1c);
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  local_14 = *(double *)(param_1 + 0x70) * *(double *)(param_1 + 4);
  local_1c = *(double *)(param_1 + 0x68) * *(double *)(param_1 + 4);
  recovered_1000c018((int *)(param_1 + 0x18),&local_1c);
  return;
}

#undef local_1c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb754U)
 */

int recovered_1000f514(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000f570(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  uVar4 = *param_2;
  param_1[1] = iVar1 + 1;
  *(undefined8 *)(iVar3 + iVar1 * 8) = uVar4;
  return iVar3 + (iVar1 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7b0U)
 */

void recovered_1000f570(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000f5e8(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined8 *)(uVar1 + iVar3);
      puVar6 = (undefined8 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 8;
      *puVar5 = *puVar6;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb828U)
 */

uint recovered_1000f5e8(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 << 3);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb83cU)
 */

void recovered_1000f5fc(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x28 + -0xc;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000f91c((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb884U)
 */

int recovered_1000f644(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000a8e8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Native backend rounding policy, preserving a floating argument.
 * Pooka's Free Software License. */
uint recovered_1000f69c(uintptr_t *context,double value) {
 uintptr_t font=*(uintptr_t *)*context;
 uintptr_t backend=*(uintptr_t *)font;
 uintptr_t table=*(uintptr_t *)backend;
 int mode=((int (*)(void *))*(uintptr_t *)(table+32))((void *)backend);
 if(mode==1)return (uint)(int)(value+(value<0?-0.5:0.5));
 int n=(int)value; return (uint)(n+(value>(double)n));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb938U)
 */

int * recovered_1000f6f8(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000f768((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      piVar2 = (int *)(*param_1 + iVar3 * 0x28);
      if (*piVar2 == *param_2) {
        return piVar2;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return (int *)(*param_1 + param_1[1] * 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb9a8U)
 */

uint recovered_1000f768(int param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000a6c0(param_2,4);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb9d0U)
 */

void recovered_1000f790(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000f768((int)param_1,*param_1 + param_2 * 0x28);
  iVar2 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


#undef DAT_1000f868
#define DAT_1000f868 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xbaa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xba0cU)
 */

void recovered_1000f7cc(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 4) << 1;
  if (*(uint *)(param_1 + 4) < 4) {
    uVar2 = 8;
  }
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  uVar2 = recovered_1000f86c(uVar2);
  puVar1 = DAT_1000f868;
  recovered_1000a6f0((int *)(param_1 + 0xc),uVar2,DAT_1000f868);
  recovered_1000a6f0((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar1);
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x10); uVar2 = uVar2 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 4) = 0xffffffff;
  }
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 4); uVar2 = uVar2 + 1) {
    recovered_1000f790((int *)param_1,uVar2);
  }
  return;
}

#undef DAT_1000f868

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbaacU)
 */

uint recovered_1000f86c(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 8;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbac8U)
 */

void recovered_1000f888(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10006e64(param_2 * 0x28);
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < (uint)param_1[1]; uVar4 = uVar4 + 1) {
      iVar2 = *param_1;
      *(undefined4 *)((int)pvVar1 + iVar3) = *(undefined4 *)(iVar2 + iVar3);
      recovered_1000aa08((undefined8 *)((undefined4 *)((int)pvVar1 + iVar3) + 1),
                         (undefined8 *)((undefined4 *)(iVar2 + iVar3) + 1));
      recovered_1000f91c((undefined4 *)(*param_1 + iVar3 + 0x1c));
      iVar3 = iVar3 + 0x28;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbb5cU)
 */

undefined4 * recovered_1000f91c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbb80U)
 */

undefined4 * recovered_1000f940(undefined4 *param_1,uint in_r1,undefined1 *in_r2)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000c848(param_1,in_r1,in_r2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbbacU)
 */

undefined4 * recovered_1000f96c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbbd0U)
 */

int recovered_1000f990(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000a8e8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc28U)
 */

undefined4 * recovered_1000f9e8(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000def4(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc60U)
 */

int * recovered_1000fa20(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000fa40(param_1);
  recovered_10006e94((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc80U)
 */

void recovered_1000fa40(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000f96c((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbcc8U)
 */

void recovered_1000fa88(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000fb08(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000fb20((undefined4 *)(uVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_1000f96c((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0xc;
    }
    recovered_10006e94((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd48U)
 */

uint recovered_1000fb08(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006e64(param_1 * 0xc);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd60U)
 */

void recovered_1000fb20(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xbd8cU)
 */

void recovered_1000fb4c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  return;
}
