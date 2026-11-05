/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

uint recovered_100035dc(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_100035e4(param_1,param_2,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_100035e4(uint param_1,uint param_2,uint *param_3)

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
uint recovered_1000365c(uint a,uint b){uint remainder=0;recovered_100035e4(a,b,&remainder);return remainder;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

int recovered_10003680(uint param_1,uint param_2)

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
  uVar1 = recovered_100035e4(uVar1,uVar2,(uint *)0x0);
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

int recovered_100036b8(int param_1,int param_2)

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
  recovered_100035e4(uVar1,param_2,&local_10);
  if (param_1 < 0) {
    local_10 = -local_10;
  }
  return local_10;
}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_100036fc(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


#undef DAT_10003884
#define DAT_10003884 (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10003804(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_10003884;
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

#undef DAT_10003884

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_1000388c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003804(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003804(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_100038d8(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003804(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_100038e8(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000388c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

uint recovered_100038f8(uint param_1,uint param_2)

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

uint recovered_1000392c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < 0) {
    uVar1 = recovered_100038f8(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return uVar1;
  }
  uVar1 = recovered_100038f8(param_1,param_2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_10003954(uint in_r0,uint in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_100038f8(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_10003970(int in_r0,int in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_1000392c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


#undef DAT_1000399c
#define DAT_1000399c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_1000398c(void)

{
  unsigned char frame[64] = {0};

  int *in_r3;

  *DAT_1000399c = 0;
  recovered_100039a0(in_r3);
  return;
}

#undef DAT_1000399c

#undef DAT_10003b80
#define DAT_10003b80 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_10003b84
#define DAT_10003b84 (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define apcStack_ac (*(char * (*)[34])(frame + 16))
#define local_24 (*(int *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_100039a0(int *in_r3)

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

  pcVar1 = DAT_10003b84;
  local_24 = 0;
  if (*DAT_10003b84 == '\0') {
    apcStack_ac[1] = DAT_10003b84;
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar6 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10003b80[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      pcVar8 = (char *)DAT_10003b80[uVar6 * 2 + 2];
      uVar5 = DAT_10003b80[uVar6 * 2 + 3];
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
      recovered_10005570((uint)ppcVar4[-1],(uint)*ppcVar4,&local_24,in_r3);
      in_r3 = extraout_r3;
      ppcVar4 = ppcVar4 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar6 = 0x4000000;
      if (0x300000 < *DAT_10003b80) {
        uVar6 = *DAT_10003b80 & 0xfffffff0;
      }
      uVar10 = uVar6 - 0x300000;
      if (uVar6 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10005570(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10003b80
#undef DAT_10003b84
#undef EXT_00000010
#undef apcStack_ac
#undef local_24

#undef DAT_10003bc8
#define DAT_10003bc8 (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_10003b88(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_100039a0(in_r3);
  iVar1 = 0;
  piVar2 = DAT_10003bc8;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_10003bc8

#undef DAT_10003c18
#define DAT_10003c18 (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_10003bcc(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100039a0(in_r3);
  iVar1 = DAT_10003c18;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10003c18

#undef DAT_10003c50
#define DAT_10003c50 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10003c1c(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_100039a0(in_r3);
  iVar1 = 0;
  piVar2 = DAT_10003c50;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10003c50

#undef DAT_10003c90
#define DAT_10003c90 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_10003c54(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100039a0(in_r3);
  iVar1 = DAT_10003c90;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10003c90

#undef DAT_10003d34
#define DAT_10003d34 (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_10003c94(int param_1,int *in_r3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_100039a0(in_r3);
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10003d34;
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

#undef DAT_10003d34

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_10003d38(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10003d94(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10003dec(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10003e38(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003e54(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_10003e54(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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

undefined8 recovered_10003f5c(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

{
  unsigned char frame[584] = {0};


  recovered_10003e54(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_10003f90(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10003e54((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_10004008(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_10003e54((param_1 ^ uVar2) - uVar2,
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

void recovered_1000408c(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_10004094(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100040a0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_100040e4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10004124(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10004170(void *out,void *data,ulong size)

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

void * recovered_1000418c(void *out,void *data,ulong size)

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

void * recovered_100041e0(void *out,int value,ulong size)

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

void recovered_100041f8(undefined1 *param_1,int param_2)

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

void recovered_10004210(undefined1 *param_1,int param_2)

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

int recovered_10004228(void *left,void *right,ulong size)

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

bool recovered_10004250(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_10004264(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_10004278(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_10004290(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_100042bc(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_100042dc(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_100042f0(int param_1)

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

int recovered_10004300(int param_1)

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

ulong recovered_10004310(char *text)

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

int recovered_10004340(char *left,char *right)

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

int recovered_1000436c(char *left,char *right)

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

void recovered_10004370(int param_1,int param_2)

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

void * recovered_1000438c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10004310(param_1);
    out = recovered_100040a0(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10004170(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_100043d4(char *param_1,char param_2)

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

int recovered_10004400(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_100043d4(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_10004444(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100043d4(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_10004484(char *param_1,char *param_2)

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


#undef DAT_100044d4
#define DAT_100044d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_100044cc(void)

{
  unsigned char frame[64] = {0};

  return DAT_100044d4;
}

#undef DAT_100044d4

#undef DAT_100044e0
#define DAT_100044e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_100044d8(void)

{
  unsigned char frame[64] = {0};

  return DAT_100044e0;
}

#undef DAT_100044e0

#undef DAT_100044f8
#define DAT_100044f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_100044e4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_100044f8;
  }
  return;
}

#undef DAT_100044f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_100044fc(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_1000453c(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_100045d4(double left,double right)

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

double recovered_1000460c(double left,double right)

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

double recovered_10004688(double value)

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

double recovered_100046b8(double value)

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

double recovered_100046fc(double value)

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


#undef DAT_1000480c
#define DAT_1000480c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10004814
#define DAT_10004814 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_1000474c(double value)

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

#undef DAT_1000480c
#undef DAT_10004814

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_1000481c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_1000388c(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_1000489c
#define DAT_1000489c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_100048a4
#define DAT_100048a4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_1000484c(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_100048ac(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_1000489c
#undef DAT_100048a4

#undef DAT_100048e4
#define DAT_100048e4 (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_100048ec
#define DAT_100048ec (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_100048f4
#define DAT_100048f4 (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_100048fc
#define DAT_100048fc (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

double recovered_100048ac(double in_d0)

{
  unsigned char frame[64] = {0};

  for (; DAT_100048e4 < in_d0; in_d0 = in_d0 + DAT_100048fc) {
  }
  for (; in_d0 < DAT_100048ec; in_d0 = in_d0 + DAT_100048f4) {
  }
  return in_d0;
}

#undef DAT_100048e4
#undef DAT_100048ec
#undef DAT_100048f4
#undef DAT_100048fc

#undef DAT_1000494c
#define DAT_1000494c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10004904(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_100048ac(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_1000494c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_10004954(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_100049ac
#define DAT_100049ac (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_10004974(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_100049ac;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_100049ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_100049b0(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000453c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_100049dc(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100044fc(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_10004a08(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_1000460c(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10004a40(float value)

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

float recovered_10004a78(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100046b8(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_10004aa0(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_100046b8(value);
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

float recovered_10004ae0(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10004aa0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_10004b08(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100046fc(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10004b30(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000474c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_10004b58(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  recovered_1000481c(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_10004b68(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000484c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_10004b90(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10004904(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_10004bb8(float value)

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

int recovered_10004bd4(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_10004cfc((int)(char)*pbVar1);
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

uint recovered_10004cfc(int param_1)

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

int recovered_10004d40(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_10004d9c;
  }
  bVar1 = false;
LAB_10004d9c:
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
    uVar3 = recovered_10004cfc((int)(char)*pbVar2);
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

double recovered_10004e60(char *text,char **end)

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
        recovered_100044fc(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_10004ffc(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10004e60(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10005410
#define DAT_10005410 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_10005018(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10005074:
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
LAB_100050a4:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_100050a8;
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
LAB_1000512c:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_1000513c_caseD_63;
    case 100:
    case 0x69:
      goto switchD_1000513c_caseD_64;
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
switchD_1000513c_caseD_65:
      if (local_48 < 2) goto LAB_100050a8;
      *local_44 = 0x3f;
      goto LAB_100050a4;
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
      recovered_100054a4((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_100050f0;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_1000513c_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10005450((int *)&local_44,&local_48,&local_4c,DAT_10005410);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10005450((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_100050f0;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_100053c0;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_100053ac:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_100053ac;
        }
        goto switchD_1000513c_caseD_65;
      }
      goto switchD_1000513c_caseD_64;
    }
    goto LAB_100053d8;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_100050e8;
switchD_1000513c_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_1000512c;
switchD_1000513c_caseD_64:
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
LAB_100053c0:
  uVar12 = 10;
  iVar3 = 0;
LAB_100053d8:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_100054a4((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_100050f0;
switchD_1000513c_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_100050a8:
  pdVar7 = arguments;
LAB_100050e8:
  local_4c = local_4c + 1;
LAB_100050f0:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_10005074;
}

#undef DAT_10005410
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_10005414(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_100054a0
#define DAT_100054a0 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10005450(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_100054a0;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10005414(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_100054a0

#undef DAT_1000553c
#define DAT_1000553c (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10005540
#define DAT_10005540 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_100054a4(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = DAT_10005540;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar4 = DAT_1000553c;
  }
  do {
    iVar3 = iVar1;
    uVar2 = recovered_100035dc(param_4,param_5);
    bVar5 = param_5 <= param_4;
    local_40[-iVar3] = *(undefined1 *)(iVar4 + (param_4 - uVar2 * param_5));
    param_4 = uVar2;
    iVar1 = iVar3 + -1;
  } while (bVar5);
  for (; iVar3 != 1; iVar3 = iVar3 + 1) {
    recovered_10005414(param_1,param_2,param_3,local_40[-iVar3]);
  }
  return;
}

#undef DAT_1000553c
#undef DAT_10005540
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_10005544(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_10005018(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_100055d4
#define DAT_100055d4 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10005570(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_100055d4 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_100055d4

#undef DAT_10005624
#define DAT_10005624 (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
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

undefined4 recovered_100055d8(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10005624) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10005624
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_100056d4
#define DAT_100056d4 (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_100056d8
#define DAT_100056d8 (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_10005628(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_100056d8;
  piVar2 = DAT_100056d4;
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
LAB_100056b8:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_100056dc(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_100056b8;
      }
      recovered_100056dc(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_100056d4
#undef DAT_100056d8

#undef DAT_1000575c
#define DAT_1000575c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10005760
#define DAT_10005760 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_10005764
#define DAT_10005764 (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_100056dc(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_10005760;
  size = *DAT_10005760;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10004170(local_214,DAT_10005764,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10006520(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_1000575c != (code *)0x0)) {
      (*(code *)*DAT_1000575c)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_1000575c
#undef DAT_10005760
#undef DAT_10005764
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_10005768(void)

{
  unsigned char frame[64] = {0};

  recovered_100056dc(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_10005770(void)

{
  unsigned char frame[64] = {0};

  recovered_100056dc(0);
  return;
}


#undef DAT_100057c0
#define DAT_100057c0 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_100057c4
#define DAT_100057c4 (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_10005778(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_100057c0;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_100057c4;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_10005544(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_10005628(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_100057c0
#undef DAT_100057c4
#undef acStack_14c

#undef DAT_10005804
#define DAT_10005804 (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10005808
#define DAT_10005808 (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_1000580c
#define DAT_1000580c (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10005810
#define DAT_10005810 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10005814
#define DAT_10005814 (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10005818
#define DAT_10005818 (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_100057c8(void)

{
  unsigned char frame[64] = {0};

  recovered_1000581c(DAT_10005804);
  recovered_1000581c(DAT_10005808);
  recovered_1000581c(DAT_1000580c);
  recovered_1000581c(DAT_10005810);
  recovered_1000581c(DAT_10005814);
  recovered_1000581c(DAT_10005818);
  return;
}

#undef DAT_10005804
#undef DAT_10005808
#undef DAT_1000580c
#undef DAT_10005810
#undef DAT_10005814
#undef DAT_10005818

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_1000581c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10004310(param_1);
  recovered_10005628(param_1,uVar1);
  return;
}


#undef DAT_10005860
#define DAT_10005860 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_10005864
#define DAT_10005864 (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10005844(void)

{
  unsigned char frame[64] = {0};

  recovered_1000581c(DAT_10005860);
  recovered_1000581c(DAT_10005864);
  return;
}

#undef DAT_10005860
#undef DAT_10005864

#undef DAT_100058e8
#define DAT_100058e8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_10005868(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10005770();
    iVar1 = recovered_10006520(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_100058e8 != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_100058e8)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_100058e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_100058ec(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_100058f4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_100058f8(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005ba8
#define DAT_10005ba8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_10005bac
#define DAT_10005bac (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10005bb0
#define DAT_10005bb0 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10005bb4
#define DAT_10005bb4 (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_10005bb8
#define DAT_10005bb8 (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10005900(char *param_1,int param_2)

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
    goto LAB_10005b44;
  }
  iVar2 = recovered_10004340(param_1,DAT_10005bac);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10005ae0:
    puVar4 = recovered_100040a0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100041e0(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_10005544((char *)(puVar4 + 1),0xf1,DAT_10005bb8,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10004340(param_1,DAT_10005bb0);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10005ae0;
    }
    iVar3 = recovered_10004340(param_1,DAT_10005bb4);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10005ae0;
    }
    puVar4 = recovered_100040a0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100041e0(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_100043d4(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_100043d4(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_100043d4(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_100043d4(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_100043d4(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_100043d4(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_100043d4(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_10005544((char *)(puVar4 + 1),0xf1,DAT_10005bb8,param_1);
      recovered_100041e0(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10005bbc(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_10005ba8 = 2;
LAB_10005b7c:
          recovered_100040e4(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_100043d4(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_10005c08((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10005b7c;
            recovered_10004170((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10005b44:
  *(undefined4 *)*DAT_10005ba8 = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_10005ba8
#undef DAT_10005bac
#undef DAT_10005bb0
#undef DAT_10005bb4
#undef DAT_10005bb8
#undef auStack_a8

#undef DAT_10005c04
#define DAT_10005c04 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_10005bbc(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006520(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10005c04 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10005c04)(param_1,param_2);
  return uVar2;
}

#undef DAT_10005c04

#undef DAT_10005c8c
#define DAT_10005c8c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_10005c08(int param_1,uint param_2)

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
      pvVar2 = recovered_10004124(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10005c8c = 0xc;
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

#undef DAT_10005c8c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_10005c90(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_10005cbc(param_3);
  }
  recovered_10005900(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_10005cbc(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10006054(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_100040e4((void *)param_1[0x3f]);
    }
    recovered_100040e4(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10005d00(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_10005da0(unaff_r6);
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


#undef DAT_10005e88
#define DAT_10005e88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_10005da0(int *param_1)

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
        bVar1 = recovered_10005868((int)text,0x1fe,DAT_10005e88,0);
        if (!bVar1) goto LAB_10005e78;
        uVar3 = recovered_10004310(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_10005e78:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_10005e88

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_10005e8c(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_10005628(param_1,size);
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
        iVar3 = recovered_10005c08((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_100041e0((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10004170((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_1000602c
#define DAT_1000602c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_10005f98(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10005fb4;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10005fac;
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
LAB_10005fac:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10005fb4:
  *(undefined4 *)*DAT_1000602c = 0x16;
  return 0xffffffff;
}

#undef DAT_1000602c

#undef DAT_10006050
#define DAT_10006050 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10006030(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10006050 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10006050

#undef DAT_100060c8
#define DAT_100060c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_10006054(uint *param_1)

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
      iVar1 = recovered_10006264(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100060c8 = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_100060c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_100060cc(int param_1)

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

undefined1 recovered_100060dc(int param_1)

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

void recovered_100060ec(int param_1)

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

void recovered_10006108(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10006170
#define DAT_10006170 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_1000612c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_10006174(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10006170 = uVar2;
  return 0xffffffff;
}

#undef DAT_10006170

#undef DAT_100061b4
#define DAT_100061b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_10006174(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006520(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_100061b4 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100061b4)(param_1);
  return uVar2;
}

#undef DAT_100061b4

#undef DAT_10006260
#define DAT_10006260 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_100061b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_100041e0(&local_20,0,0xc);
    iVar1 = recovered_10005bbc(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_10006264(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_10006174(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10006260 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10006260 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10006260
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_100062b4
#define DAT_100062b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_10006264(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10006520(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_100062b4 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100062b4)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_100062b4

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_100062b8(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_100041e0(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10005bbc(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_100040a0(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10004170(out,unaff_r5,unaff_r6);
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

bool recovered_10006370(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_10006264(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_100063b0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_100063b8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_100063bc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_100063c4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_100063cc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_100063d4(int param_1,char param_2,int param_3)

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

int recovered_100063fc(char *left,char *right,ulong size)

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


#undef DAT_100064d4
#define DAT_100064d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_100064d8
#define DAT_100064d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_100064dc
#define DAT_100064dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_100064e0
#define DAT_100064e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_100064e4
#define DAT_100064e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_100064e8
#define DAT_100064e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_100064ec
#define DAT_100064ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_100064f0
#define DAT_100064f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_100064f4
#define DAT_100064f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_1000643c(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_100064f4;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10006450_caseD_0;
  case 2:
    return DAT_100064d8;
  case 5:
    return DAT_100064dc;
  case 9:
    return DAT_100064e0;
  case 0xc:
    return DAT_100064e4;
  case 0xd:
    return DAT_100064e8;
  default:
    if (param_1 == 0x11) {
      return DAT_100064ec;
    }
    if (param_1 == 0x16) {
      return DAT_100064d4;
    }
switchD_10006450_caseD_0:
    return DAT_100064f0;
  }
}

#undef DAT_100064d4
#undef DAT_100064d8
#undef DAT_100064dc
#undef DAT_100064e0
#undef DAT_100064e4
#undef DAT_100064e8
#undef DAT_100064ec
#undef DAT_100064f0
#undef DAT_100064f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_100064f8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10006500(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000651c
#define DAT_1000651c (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_10006508(void)

{
  unsigned char frame[64] = {0};

  *DAT_1000651c = *DAT_1000651c + 1;
  return;
}

#undef DAT_1000651c

#undef DAT_1000656c
#define DAT_1000656c (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
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

undefined4 recovered_10006520(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_1000656c) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_1000656c
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

uint recovered_10006570(int param_1)

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

undefined4 recovered_10006580(undefined4 *param_1)

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

int recovered_10006598(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_10006630
#define DAT_10006630 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_10006634
#define DAT_10006634 (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10006638
#define DAT_10006638 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
#define uStack_3c (*(undefined4 *)(frame + 16))
#define auStack_10 (*(undefined1 (*)[8])(frame + 60))
#define local_38 (*(undefined4 *)(frame + 20))
#define local_24 (*(undefined4 *)(frame + 40))
#define local_20 (*(undefined4 *)(frame + 44))
#define local_1c (*(undefined1 * *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(undefined1 * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fdcU)
 */

void recovered_100065b8(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10006638;
  local_20 = DAT_10006630;
  local_18 = DAT_10006634 + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_10006b7c(&uStack_3c);
  recovered_1000408c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_10006630
#undef DAT_10006634
#undef DAT_10006638
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3060U)
 */

undefined4 recovered_1000663c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_10006644(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006654(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100065b8();
}


#undef DAT_1000c2a0
#define DAT_1000c2a0 (*(int *)(((uintptr_t)pf_module_state + 0x8cc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_10006654(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1000c2a0;
  DAT_1000c2a0 = param_1;
  recovered_10006a38(param_1);
  return;
}

#undef DAT_1000c2a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_10006680(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100040a0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_1000408c();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_100066ac(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100040a0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_1000408c();
  }
  return pvVar1;
}


#undef DAT_10006764
#define DAT_10006764 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10006768
#define DAT_10006768 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_1000676c
#define DAT_1000676c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_100066b0(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000676c;
  local_78 = DAT_10006764;
  local_70 = DAT_10006768 + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_10006b7c(&uStack_94);
  recovered_100040e4(data);
  recovered_10006b94(&uStack_94);
  return;
}

#undef DAT_10006764
#undef DAT_10006768
#undef DAT_1000676c
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_10006824
#define DAT_10006824 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_10006828
#define DAT_10006828 (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_1000682c
#define DAT_1000682c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3194U)
 */

void recovered_10006770(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000682c;
  local_78 = DAT_10006824;
  local_70 = DAT_10006828 + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_10006b7c(&uStack_94);
  recovered_100040e4(data);
  recovered_10006b94(&uStack_94);
  return;
}

#undef DAT_10006824
#undef DAT_10006828
#undef DAT_1000682c
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_100068e4
#define DAT_100068e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_100068e8
#define DAT_100068e8 (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_100068ec
#define DAT_100068ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_10006830(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100068ec;
  local_78 = DAT_100068e4;
  local_70 = DAT_100068e8 + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_10006b7c(&uStack_94);
  recovered_100040e4(param_1);
  recovered_10006b94(&uStack_94);
  return;
}

#undef DAT_100068e4
#undef DAT_100068e8
#undef DAT_100068ec
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_100069a4
#define DAT_100069a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_100069a8
#define DAT_100069a8 (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_100069ac
#define DAT_100069ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_100068f0(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100069ac;
  local_78 = DAT_100069a4;
  local_70 = DAT_100069a8 + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_10006b7c(&uStack_94);
  recovered_100040e4(param_1);
  recovered_10006b94(&uStack_94);
  return;
}

#undef DAT_100069a4
#undef DAT_100069a8
#undef DAT_100069ac
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_100069b0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_100069b8(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_100069c8(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_100069d8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_100069dc(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_100040a0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100065b8();
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

void recovered_10006a28(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100040e4((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_10006a38(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_10006a98
#define DAT_10006a98 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10006a40(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_10006a98;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_10006a98 = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_100040e4(buffer);
  return;
}

#undef DAT_10006a98

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_10006a9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10006ac4((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10006b40
#define DAT_10006b40 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10006ac4(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10006b40;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) goto LAB_10006b3c;
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_1000706c((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
  recovered_10006c00(param_1);
LAB_10006b3c:
                    /* WARNING: Subroutine does not return */
  recovered_100065b8();
}

#undef DAT_10006b40
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10006b78
#define DAT_10006b78 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

void recovered_10006b44(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_10006b78;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_100065b8();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10006ac4(puVar1);
}

#undef DAT_10006b78

#undef DAT_10006b90
#define DAT_10006b90 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

void recovered_10006b7c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10006b90;
  *param_1 = *DAT_10006b90;
  *puVar1 = param_1;
  return;
}

#undef DAT_10006b90

#undef DAT_10006bc0
#define DAT_10006bc0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_10006b94(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10006bc0;
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

#undef DAT_10006bc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10006bc4(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006ac4(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10006bd0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100065b8();
}


#undef DAT_1000c2a4
#define DAT_1000c2a4 (*(int * *)(((uintptr_t)pf_module_state + 0x8cc8U)))
#define auStack_130 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10006bdc(undefined4 *param_1)

{
  unsigned char frame[352] = {0};

  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if (DAT_1000c2a4 != (int *)0x0) {
    DAT_1000c2a4 = (int *)*DAT_1000c2a4;
  }
  puVar2 = (undefined4 *)recovered_10006c00(param_1);
  while( true ) {
    piVar1 = DAT_1000c2a4;
    if (DAT_1000c2a4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100065b8();
    }
    if (DAT_1000c2a4 == (int *)puVar2[3]) break;
    recovered_1000706c((int)DAT_1000c2a4,(int *)*puVar2,auStack_130 + 0x80);
    DAT_1000c2a4 = (int *)*piVar1;
  }
  uVar4 = puVar2[5];
  DAT_1000c2a4[2] = (int)puVar2;
  uVar3 = puVar2[4];
  piVar1[3] = uVar4;
  piVar1[1] = uVar3;
  puVar2 = (undefined4 *)recovered_10006570((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10006bdc(puVar2);
}

#undef DAT_1000c2a4
#undef auStack_130

#undef DAT_1000c2a4
#define DAT_1000c2a4 (*(int * *)(((uintptr_t)pf_module_state + 0x8cc8U)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

uint recovered_10006c00(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;

  while( true ) {
    piVar1 = DAT_1000c2a4;
    if (DAT_1000c2a4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100065b8();
    }
    if (DAT_1000c2a4 == (int *)param_1[3]) break;
    recovered_1000706c((int)DAT_1000c2a4,(int *)*param_1,auStack_128 + 0x80);
    DAT_1000c2a4 = (int *)*piVar1;
  }
  uVar4 = param_1[5];
  DAT_1000c2a4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar1[3] = uVar4;
  piVar1[1] = uVar2;
  puVar3 = (undefined4 *)recovered_10006570((int)piVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10006bdc(puVar3);
}

#undef DAT_1000c2a4
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_10006cac(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006bdc(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_10006cb8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_10006cc0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100065b8();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_10006ccc(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10006d0c(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_10006db0
#define DAT_10006db0 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_10006d0c(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_10006db0 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10006db0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_10006db4(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_10006db8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_10006dc0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_10006dd4(int param_1)

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

bool recovered_10006e10(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10006e3c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_10006e58(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_10006e74(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_10006e90(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_10006eac(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10004688(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_10006f04(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10006f50;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10006f50:
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

ulonglong recovered_10007068(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10006f50;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10006f50:
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

#undef DAT_10007284
#define DAT_10007284 (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_1000706c(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10007288((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_100073b4(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_100073b4(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_100073b4(&local_24);
        uVar6 = recovered_100073b4(&local_24);
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
            uVar6 = recovered_10007414((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_10007414((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_10007284 + uVar5 * 4) * uVar6;
                puVar9 = recovered_10007288(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10006d0c(param_2,(int *)puVar9);
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

#undef DAT_10007284
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_10007288(uint param_1,int *param_2)

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
    puVar3 = (uint *)recovered_100073ec(iVar4,4);
    iVar2 = iVar4 + 4;
    goto LAB_10007370;
  case 1:
    puVar3 = (uint *)recovered_100073b4(param_2);
    break;
  case 2:
    puVar3 = (uint *)recovered_100073ec(iVar4,2);
    iVar2 = iVar4 + 2;
    goto LAB_10007370;
  case 4:
  case 0xc:
    puVar3 = (uint *)recovered_100073ec(iVar4,8);
    iVar2 = iVar4 + 8;
LAB_10007370:
    *param_2 = iVar2;
    break;
  default:
    goto switchD_100072bc_caseD_5;
  case 9:
    puVar3 = (uint *)recovered_10007414(param_2);
    break;
  case 10:
    puVar1 = (uint *)recovered_100073ec(iVar4,2);
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
switchD_100072bc_caseD_5:
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_100073b4(undefined4 *param_1)

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

uint recovered_100073ec(byte *param_1,int param_2)

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

uint recovered_10007414(undefined4 *param_1)

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


#undef DAT_100084ac
#define DAT_100084ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ed0U)))
#undef DAT_100084b0
#define DAT_100084b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ed4U)))
#undef DAT_100084b4
#define DAT_100084b4 (*(int *)(((uintptr_t)pf_module_state + 0x4ed8U)))
#undef DAT_100084b8
#define DAT_100084b8 (*(void * *)(((uintptr_t)pf_module_state + 0x4edcU)))
#undef DAT_10008728
#define DAT_10008728 (*(void * *)(((uintptr_t)pf_module_state + 0x514cU)))
#undef DAT_1000872c
#define DAT_1000872c (*(void * *)(((uintptr_t)pf_module_state + 0x5150U)))
#undef DAT_10008730
#define DAT_10008730 (*(void * *)(((uintptr_t)pf_module_state + 0x5154U)))
#undef DAT_10008734
#define DAT_10008734 (*(void * *)(((uintptr_t)pf_module_state + 0x5158U)))
#undef DAT_100087b8
#define DAT_100087b8 (*(void * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef DAT_10008d04
#define DAT_10008d04 (*(int *)(((uintptr_t)pf_module_state + 0x5728U)))
#undef DAT_10008d08
#define DAT_10008d08 (*(int *)(((uintptr_t)pf_module_state + 0x572cU)))
#undef DAT_10008d0c
#define DAT_10008d0c (*(char * *)(((uintptr_t)pf_module_state + 0x5730U)))
#undef DAT_10008d10
#define DAT_10008d10 (*(int *)(((uintptr_t)pf_module_state + 0x5734U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define auStackY_260 (*(undefined1 (*)[128])(frame + 16))
#define puStack_170 (*(undefined1 * *)(frame + 256))
#define pcStack_168 (*(char * *)(frame + 264))
#define uStack_154 (*(uint *)(frame + 284))
#define uStack_fc (*(uint *)(frame + 372))
#define pcStack_f0 (*(char * *)(frame + 384))
#define local_1a8 (*(int *)(frame + 200))
#define local_1a4 (*(uint *)(frame + 204))
#define local_190 (*(int *)(frame + 224))
#define local_18c (*(void * *)(frame + 228))
#define local_188 (*(byte * *)(frame + 232))
#define local_184 (*(void * *)(frame + 236))
#define local_180 (*(undefined4 *)(frame + 240))
#define local_17c (*(undefined4 *)(frame + 244))
#define local_178 (*(void * *)(frame + 248))
#define local_174 (*(uint *)(frame + 252))
#define local_16c (*(undefined1 * *)(frame + 260))
#define local_164 (*(char * *)(frame + 268))
#define local_160 (*(char * *)(frame + 272))
#define local_15c (*(undefined2 *)(frame + 276))
#define local_158 (*(uint *)(frame + 280))
#define local_150 (*(undefined1 * *)(frame + 288))
#define local_14c (*(undefined1 * *)(frame + 292))
#define uStack_94 (*(undefined4 *)(frame + 476))
#define local_148 (*(uint *)(frame + 296))
#define local_144 (*(uint *)(frame + 300))
#define local_140 (*(uint *)(frame + 304))
#define local_13c (*(char *)(frame + 308))
#define local_13b (*(char *)(frame + 309))
#define local_138 (*(int *)(frame + 312))
#define auStack_68 (*(undefined1 (*)[8])(frame + 520))
#define local_134 (*(int *)(frame + 316))
#define local_130 (*(undefined1 * *)(frame + 320))
#define local_12c (*(undefined4 *)(frame + 324))
#define local_128 (*(ushort * *)(frame + 328))
#define local_124 (*(uint *)(frame + 332))
#define local_120 (*(undefined4 *)(frame + 336))
#define local_11c (*(void * *)(frame + 340))
#define local_118 (*(uint *)(frame + 344))
#define local_114 (*(uint *)(frame + 348))
#define local_10c (*(void * *)(frame + 356))
#define local_108 (*(uint *)(frame + 360))
#define local_100 (*(void * *)(frame + 368))
#define local_f8 (*(undefined1 * *)(frame + 376))
#define local_f4 (*(undefined1 * *)(frame + 380))
#define local_ec (*(char * *)(frame + 388))
#define local_e8 (*(char * *)(frame + 392))
#define local_e4 (*(undefined2 *)(frame + 396))
#define local_e0 (*(undefined4 *)(frame + 400))
#define local_dc (*(undefined4 *)(frame + 404))
#define local_d8 (*(undefined4 *)(frame + 408))
#define local_d4 (*(undefined4 *)(frame + 412))
#define local_d0 (*(undefined4 *)(frame + 416))
#define local_cc (*(undefined4 *)(frame + 420))
#define local_c8 (*(undefined4 *)(frame + 424))
#define local_c4 (*(void * *)(frame + 428))
#define local_c0 (*(uint *)(frame + 432))
#define local_bc (*(uint *)(frame + 436))
#define local_b8 (*(byte * *)(frame + 440))
#define local_b4 (*(undefined4 *)(frame + 444))
#define local_b0 (*(undefined4 *)(frame + 448))
#define local_ac (*(byte * *)(frame + 452))
#define local_a8 (*(undefined4 *)(frame + 456))
#define local_a4 (*(undefined4 *)(frame + 460))
#define local_a0 (*(byte * *)(frame + 464))
#define local_9c (*(uint *)(frame + 468))
#define local_90 (*(undefined4 *)(frame + 480))
#define local_7c (*(undefined4 *)(frame + 500))
#define local_78 (*(undefined4 *)(frame + 504))
#define local_74 (*(undefined1 * *)(frame + 508))
#define local_70 (*(int *)(frame + 512))
#define local_6c (*(undefined1 * *)(frame + 516))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_10007464(void *data,ulong length,void *image)

{
  unsigned char frame[656] = {0};

  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined4 uVar22;
  char *pcVar23;
  uint *puVar24;
  undefined4 *puVar25;
  char *pcVar26;
  char *pcVar27;
  uint *puVar28;
  undefined1 *puVar29;
  byte *pbVar30;
  ushort *puVar31;
  byte bVar32;
  undefined1 uVar33;
  int iVar34;
  char *pcVar35;
  char *pcVar36;
  undefined1 *puVar37;
  char *pcVar38;
  uchar uVar39;
  char *pcVar40;
  char *pcVar41;

  uVar39 = '\0';
  pcStack_f0 = (char *)0x0;
  local_f4 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  uStack_fc = 0;
  local_100 = (void *)0x0;
  recovered_10008f4c(image,&local_100);
  local_f4 = (undefined1 *)0x0;
  recovered_100066b0(local_f8);
  local_7c = *DAT_100084ac;
  local_78 = DAT_100084b0;
  local_70 = DAT_100084b4 + ((uintptr_t)pf_module_state+0x3f0cU);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_260 + 0x80;
  recovered_10006b7c(&uStack_94);
  if (data != (void *)0x0 && length != 0) {
    local_90 = 0xffffffff;
    recovered_1000b9bc(&local_10c,data,(undefined1 *)((int)data + length));
    uStack_154 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_150 = *(undefined1 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_14c = *(undefined1 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_158 = 0;
    local_148 = 0;
    local_100 = (void *)0x0;
    pcStack_f0 = (char *)0x0;
    local_114 = 0;
    local_118 = 0;
    local_11c = (void *)0x0;
    local_120 = 0;
    local_124 = 0;
    local_128 = (ushort *)0x0;
    local_12c = 0;
    local_130 = (undefined1 *)0x0;
    local_134 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = (void *)0x0;
    local_c8 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_e4 = 0;
    local_e8 = (char *)0x0;
    local_ec = (char *)0x0;
    uStack_fc = uStack_154;
    local_f8 = local_150;
    local_f4 = local_14c;
    recovered_10004170(&local_158,&local_100,0x24);
    recovered_10008f7c(&local_134,&local_dc);
    recovered_10008f7c(&local_128,&local_d0);
    local_118 = 0;
    recovered_100066b0(local_11c);
    local_118 = local_c0;
    local_c0 = 0;
    local_11c = local_c4;
    local_114 = local_bc;
    local_bc = 0;
    local_c4 = (void *)0x0;
    recovered_10008fd0((int)&local_100);
    uVar39 = '\0';
    if (7 < local_108) {
      local_90 = 1;
      iVar9 = recovered_10004228(local_10c,DAT_100084b8,8);
      uVar39 = '\0';
      if (iVar9 == 0) {
        local_190 = 8;
        while( true ) {
          uVar11 = local_108;
          pvVar13 = local_10c;
          if (local_108 < local_190 + 0xcU) break;
          puVar24 = (uint *)((int)local_10c + local_190);
          uVar10 = recovered_10009a88(puVar24);
          local_190 = local_190 + 8;
          uVar39 = '\0';
          if (uVar11 - local_190 < uVar10 + 4) goto LAB_10007634;
          puVar24 = puVar24 + 1;
          uVar11 = recovered_10009a88((uint *)((int)pvVar13 + uVar10 + local_190));
          uVar12 = recovered_10009a94(0,(byte *)puVar24,4);
          puVar28 = (uint *)((int)pvVar13 + local_190);
          if (uVar10 != 0) {
            uVar12 = recovered_10009a94(uVar12,(byte *)puVar28,uVar10);
          }
          if (uVar12 != uVar11) goto LAB_10007634;
          local_190 = uVar10 + local_190 + 4;
          if (local_13c == '\0') {
            local_90 = 2;
            iVar9 = recovered_10004228(puVar24,DAT_100087b8,4);
            uVar39 = '\0';
            if (uVar10 != 0xd || iVar9 != 0) goto LAB_10007634;
            uVar11 = recovered_10009a88(puVar28);
            local_158 = uVar11;
            uStack_154 = recovered_10009a88(puVar28 + 1);
            local_150 = (undefined1 *)(uint)(byte)puVar28[2];
            local_14c = (undefined1 *)(uint)*(byte *)((int)puVar28 + 9);
            local_148 = (uint)*(byte *)((int)puVar28 + 10);
            local_144 = (uint)*(byte *)((int)puVar28 + 0xb);
            local_140 = (uint)(byte)puVar28[3];
            local_13c = '\x01';
            if (uVar11 == 0 || uStack_154 == 0) goto LAB_10007634;
            bVar8 = false;
            if (local_14c < (undefined1 *)0x7) {
              puVar29 = local_150 + -8;
              if ((1 << (int)local_14c & 0x55U) == 0) {
                bVar8 = false;
                if (local_14c != (undefined1 *)0x3) goto LAB_10007888;
              }
              else {
                puVar29 = (undefined1 *)((uint)puVar29 & 0xfffffff7);
              }
              bVar8 = puVar29 == (undefined1 *)0x0;
            }
LAB_10007888:
            if (((!bVar8) || (local_148 != 0 || local_144 != 0)) || (1 < local_140))
            goto LAB_10007634;
          }
          else {
            local_90 = 3;
            iVar9 = recovered_10004228(puVar24,DAT_10008728,4);
            uVar39 = '\0';
            if (iVar9 == 0) {
              if (((uVar10 == 0) || (iVar9 = recovered_1000365c(uVar10,3), 0x300 < uVar10)) ||
                 (iVar9 != 0)) goto LAB_10007634;
              local_90 = 4;
              recovered_10009b38(&local_134,(undefined1 *)puVar28,
                                 (undefined1 *)((int)puVar28 + uVar10));
            }
            else {
              local_90 = 5;
              iVar9 = recovered_10004228(puVar24,DAT_1000872c,4);
              uVar39 = '\0';
              if (iVar9 == 0) {
                if (((uVar10 != 2) && (local_14c == (undefined1 *)0x0)) ||
                   ((uVar10 != 6 && (local_14c == (undefined1 *)0x2)))) goto LAB_10007634;
                if (local_14c == (undefined1 *)0x3) {
                  uVar11 = recovered_100035dc((uint)local_130,3);
                  if (uVar11 < uVar10) goto LAB_10007634;
                }
                else if ((local_14c == &UndefinedInstruction) || (local_14c == (undefined1 *)0x6))
                goto LAB_10007634;
                local_90 = 6;
                recovered_10009b38((int *)&local_128,(undefined1 *)puVar28,
                                   (undefined1 *)((int)puVar28 + uVar10));
              }
              else {
                local_90 = 7;
                iVar9 = recovered_10004228(puVar24,DAT_10008730,4);
                if (iVar9 == 0) {
                  if (uVar10 != 0) {
                    if (local_118 == local_114) {
                      uVar11 = local_118 << 1;
                      if (local_118 == 0) {
                        uVar11 = 4;
                      }
                      if (local_118 < uVar11) {
                        local_90 = 8;
                        pvVar13 = recovered_10006680(uVar11 << 3);
                        iVar9 = 0;
                        for (uVar12 = local_118; uVar12 != 0; uVar12 = uVar12 - 1) {
                          uVar22 = ((undefined4 *)((int)local_11c + iVar9))[1];
                          puVar25 = (undefined4 *)((int)pvVar13 + iVar9);
                          *puVar25 = *(undefined4 *)((int)local_11c + iVar9);
                          iVar9 = iVar9 + 8;
                          puVar25[1] = uVar22;
                        }
                        recovered_100066b0(local_11c);
                        local_11c = pvVar13;
                        local_114 = uVar11;
                      }
                    }
                    puVar25 = (undefined4 *)((int)local_11c + local_118 * 8);
                    *puVar25 = puVar28;
                    puVar25[1] = uVar10;
                    local_138 = local_138 + uVar10;
                    local_118 = local_118 + 1;
                  }
                }
                else {
                  local_90 = 9;
                  iVar9 = recovered_10004228(puVar24,DAT_10008734,4);
                  uVar39 = '\0';
                  if (iVar9 == 0) {
                    if (uVar10 == 0) {
                      local_13b = '\x01';
                      break;
                    }
                    goto LAB_10007634;
                  }
                  if ((*puVar24 & 0x20) == 0) goto LAB_10007634;
                }
              }
            }
          }
        }
        uVar39 = '\0';
        cVar3 = local_13c;
        if (local_13c == '\x01') {
          cVar3 = local_13b;
        }
        if ((local_13c != '\x01' || cVar3 != '\x01') || (local_138 == 0)) goto LAB_10007634;
        puVar29 = local_14c;
        if (local_14c == (undefined1 *)0x3) {
          puVar29 = local_130;
        }
        if (local_14c == (undefined1 *)0x3 && puVar29 == (undefined1 *)0x0) goto LAB_10007634;
        puStack_170 = *(undefined1 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        local_16c = *(undefined1 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        pcStack_168 = *(char **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        local_15c = 0;
        local_174 = 0;
        local_164 = (char *)0x0;
        uStack_fc = 0;
        local_ec = (char *)0x0;
        local_160 = (char *)0x0;
        local_178 = (void *)0x0;
        local_e4 = 0;
        local_e8 = (char *)0x0;
        local_100 = (void *)0x0;
        local_f8 = puStack_170;
        local_f4 = local_16c;
        pcStack_f0 = pcStack_168;
        recovered_10008f7c(&local_178,&local_100);
        local_16c = local_f4;
        pcStack_168 = pcStack_f0;
        local_164 = local_ec;
        local_160 = local_e8;
        local_15c = local_e4;
        uStack_fc = 0;
        recovered_100066b0(local_100);
        puVar29 = local_130;
        if (local_14c == (undefined1 *)0x0) {
          if (local_124 == 0) goto LAB_10007c34;
          if (local_124 != 2) goto LAB_10008da0;
          local_15c = CONCAT11(PF_PART1(local_15c, 1),1);
          local_16c = (undefined1 *)((*local_128 & 0xff) << 8 | (uint)(*local_128 >> 8));
        }
        else if (local_14c == (undefined1 *)0x2) {
          if (local_124 == 0) goto LAB_10007c34;
          if (local_124 != 6) goto LAB_10008da0;
          pcStack_168 = (char *)((*local_128 & 0xff) << 8 | (uint)(*local_128 >> 8));
          local_164 = (char *)((local_128[1] & 0xff) << 8 | (uint)(local_128[1] >> 8));
          local_15c = CONCAT11(1,(byte)local_15c);
          local_160 = (char *)((local_128[2] & 0xff) << 8 | (uint)(local_128[2] >> 8));
        }
        else {
          if (local_14c != (undefined1 *)0x3) {
            if (local_124 == 0) goto LAB_10007c34;
            goto LAB_10008da0;
          }
          uVar11 = recovered_100035dc((uint)local_130,3);
          if ((puVar29 == (undefined1 *)0x0) || (puVar29 != (undefined1 *)(uVar11 * 3)))
          goto LAB_10008da0;
          local_90 = 10;
          local_100 = (void *)CONCAT31(PF_PART3(local_100, 1),0xff);
          recovered_10009c98((int *)&local_178,uVar11 << 2,(undefined1 *)&local_100);
          for (iVar9 = 0; -iVar9 != uVar11; iVar9 = iVar9 + -1) {
            iVar4 = iVar9 * -3;
            *(undefined1 *)((int)local_178 + iVar9 * -4) = *(undefined1 *)(local_134 + iVar4);
            *(undefined1 *)((int)local_178 + iVar9 * -4 + 1) =
                 *(undefined1 *)(local_134 + iVar4 + 1);
            *(undefined1 *)((int)local_178 + iVar9 * -4 + 2) =
                 *(undefined1 *)(local_134 + iVar4 + 2);
          }
          for (uVar11 = 0; uVar11 < local_124; uVar11 = uVar11 + 1) {
            *(undefined1 *)((int)local_178 + uVar11 * 4 + 3) =
                 *(undefined1 *)((int)local_128 + uVar11);
          }
        }
LAB_10007c34:
        uVar11 = local_158;
        local_17c = 0;
        local_180 = 0;
        local_184 = (void *)0x0;
        if (local_140 == 0) {
          uVar10 = recovered_10009d68((int)&local_158);
          if (((uVar11 == 0) ||
              (uVar39 = '\0', (int)((ulonglong)uVar10 * (ulonglong)uVar11 >> 0x20) == 0)) &&
             ((uVar11 == 0 ||
              (uVar39 = '\0', (int)((ulonglong)uStack_154 * (ulonglong)uVar11 >> 0x20) == 0)))) {
            uVar39 = '\0';
            if (uStack_154 * uVar11 < 0x40000000) {
              local_90 = 0xb;
              recovered_10009d0c((int *)&local_184,uStack_154 * uVar11 * 4);
              local_e8 = (char *)0x0;
              local_ec = (char *)0x0;
              pcStack_f0 = (char *)0x0;
              local_f4 = (undefined1 *)0x0;
              local_f8 = (undefined1 *)0x0;
              uStack_fc = 0;
              local_100 = (void *)0x0;
              local_90 = 0xc;
              bVar8 = recovered_10009da8((int *)&local_100,(int *)&local_11c);
              if (!bVar8) goto LAB_10008bf0;
              uVar11 = uVar10 * uVar11 + 7 >> 3;
              uVar12 = recovered_10009d68((int)&local_158);
              local_90 = 0xd;
              uVar10 = uVar12 + 7 >> 3;
              if (uVar12 < 8) {
                uVar10 = 1;
              }
              recovered_1000b96c(&local_a0,uVar11 + 1);
              puVar29 = local_14c;
              if (local_14c == (undefined1 *)0x6) {
                puVar29 = local_150;
              }
              if (local_14c == (undefined1 *)0x6 && puVar29 == &SupervisorCall) {
                uVar10 = 0;
                local_18c = (void *)0x0;
                do {
                  if (uStack_154 <= uVar10) {
                    bVar8 = local_e8 == pcStack_f0;
                    goto LAB_10008d48;
                  }
                  local_90 = 0xe;
                  iVar9 = recovered_1000aa98((int)&local_100,local_a0,local_9c);
                  if (iVar9 == 0) break;
                  local_90 = 0xf;
                  pcVar23 = (char *)0x0;
                  if (uVar10 != 0) {
                    pcVar23 = (char *)((int)local_184 + (int)local_18c) + -uVar11;
                  }
                  iVar9 = recovered_1000aae4((uint)*local_a0,
                                             (char *)((int)local_184 + (int)local_18c),
                                             (char *)(local_a0 + 1),pcVar23,uVar11,4);
                  local_18c = (void *)((int)local_18c + uVar11);
                  uVar10 = uVar10 + 1;
                } while (iVar9 != 0);
                uVar39 = '\0';
                local_9c = 0;
                recovered_100066b0(local_a0);
                recovered_1000ad78(&local_100);
                goto LAB_10008d90;
              }
              local_90 = 0x10;
              recovered_1000b96c(&local_ac,uVar11);
              local_90 = 0x11;
              recovered_1000b96c(&local_b8,uVar11);
              local_1a4 = 0;
              bVar5 = false;
              for (uVar12 = 0; uVar12 < uStack_154; uVar12 = uVar12 + 1) {
                local_90 = 0x12;
                iVar9 = recovered_1000aa98((int)&local_100,local_a0,local_9c);
                bVar8 = false;
                if (iVar9 == 0) goto switchD_10008698_caseD_1;
                local_90 = 0x13;
                pbVar30 = (byte *)0x0;
                if (bVar5) {
                  pbVar30 = local_ac;
                }
                iVar9 = recovered_1000aae4((uint)*local_a0,(char *)local_b8,(char *)(local_a0 + 1),
                                           (char *)pbVar30,uVar11,uVar10);
                pbVar30 = local_b8;
                if ((iVar9 == 0) || ((undefined1 *)0x6 < local_14c)) goto switchD_10008698_caseD_1;
                local_188 = local_b8;
                local_18c = (void *)(local_158 * local_1a4 + (int)local_184);
                switch((uintptr_t)(local_14c)) {
                case 0x0:
                  if (local_150 == &SupervisorCall) {
                    pbVar30 = (byte *)((int)local_18c + 1);
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      bVar32 = *local_188;
                      pbVar30[1] = bVar32;
                      *pbVar30 = bVar32;
                      pbVar30[-1] = bVar32;
                      pbVar30[2] = -(~(byte)local_15c & 1 | local_16c != (undefined1 *)(uint)bVar32)
                      ;
                      pbVar30 = pbVar30 + 4;
                      local_188 = local_188 + 1;
                    }
                  }
                  else {
                    puVar29 = (undefined1 *)((int)local_18c + 1);
                    pbVar30 = local_b8 + 1;
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      puVar37 = (undefined1 *)
                                ((*(ushort *)(pbVar30 + -1) & 0xff) << 8 |
                                (uint)(*(ushort *)(pbVar30 + -1) >> 8));
                      uVar19 = recovered_100035dc((int)puVar37 * 0xff + 0x7fff,0xffff);
                      pbVar30 = pbVar30 + 2;
                      uVar33 = (undefined1)uVar19;
                      puVar29[1] = uVar33;
                      *puVar29 = uVar33;
                      puVar29[-1] = uVar33;
                      puVar29[2] = -(~(byte)local_15c & 1 | puVar37 != local_16c);
                      puVar29 = puVar29 + 4;
                    }
                  }
                  break;
                default:
                  goto switchD_10008698_caseD_1;
                case 0x2:
                  if (local_150 == &SupervisorCall) {
                    puVar29 = (undefined1 *)((int)local_18c + 3);
                    pbVar30 = local_b8 + 2;
                    for (iVar9 = 0; -iVar9 != local_158; iVar9 = iVar9 + -1) {
                      pcVar27 = (char *)(uint)PF_PART1(local_15c, 1);
                      uVar33 = 0xff;
                      pcVar23 = pcVar27;
                      if (pcVar27 == (char *)0x1) {
                        pcVar23 = pcStack_168;
                      }
                      if (((pcVar27 == (char *)0x1 && pcVar23 == (char *)(uint)pbVar30[-2]) &&
                          (local_164 == (char *)(uint)local_b8[iVar9 * -3 + 1])) &&
                         (uVar33 = 0, local_160 != (char *)(uint)*pbVar30)) {
                        uVar33 = 0xff;
                      }
                      puVar29[-3] = pbVar30[-2];
                      *(byte *)((int)local_18c + iVar9 * -4 + 1) = local_b8[iVar9 * -3 + 1];
                      *(byte *)((int)local_18c + iVar9 * -4 + 2) = *pbVar30;
                      *puVar29 = uVar33;
                      puVar29 = puVar29 + 4;
                      pbVar30 = pbVar30 + 3;
                    }
                  }
                  else {
                    puVar29 = (undefined1 *)((int)local_18c + 1);
                    pbVar30 = local_b8 + 5;
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      pcVar21 = (char *)((*(ushort *)(pbVar30 + -1) & 0xff) << 8 |
                                        (uint)(*(ushort *)(pbVar30 + -1) >> 8));
                      uVar19 = recovered_100035dc((int)pcVar21 * 0xff + 0x7fff,0xffff);
                      pcVar26 = local_160;
                      pcVar27 = local_164;
                      pcVar23 = pcStack_168;
                      bVar32 = PF_PART1(local_15c, 1);
                      pcVar41 = (char *)((*(ushort *)(pbVar30 + -3) & 0xff) << 8 |
                                        (uint)(*(ushort *)(pbVar30 + -3) >> 8));
                      uVar2 = *(ushort *)(pbVar30 + -5);
                      puVar29[1] = (char)uVar19;
                      uVar19 = recovered_100035dc((int)pcVar41 * 0xff + 0x7fff,0xffff);
                      pcVar36 = (char *)((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
                      *puVar29 = (char)uVar19;
                      uVar19 = recovered_100035dc((int)pcVar36 * 0xff + 0x7fff,0xffff);
                      puVar29[-1] = (char)uVar19;
                      pbVar30 = pbVar30 + 6;
                      puVar29[2] = -(~bVar32 & 1 | pcVar36 != pcVar23 | pcVar41 != pcVar27 |
                                    pcVar21 != pcVar26);
                      puVar29 = puVar29 + 4;
                    }
                  }
                  break;
                case 0x3:
                  uVar14 = local_174 >> 2;
                  for (uVar19 = local_158; uVar19 != 0; uVar19 = uVar19 - 1) {
                    if (uVar14 <= *local_188) goto switchD_10008698_caseD_1;
                    local_90 = 0x14;
                    recovered_10004170(local_18c,(void *)((int)local_178 + (uint)*local_188 * 4),4);
                    local_188 = local_188 + 1;
                    local_18c = (void *)((int)local_18c + 4);
                  }
                  break;
                case 0x4:
                  if (local_150 == &SupervisorCall) {
                    pbVar30 = (byte *)((int)local_18c + 1);
                    pbVar20 = local_b8 + 1;
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      bVar32 = pbVar20[-1];
                      *pbVar30 = bVar32;
                      pbVar30[-1] = bVar32;
                      pbVar30[1] = pbVar20[-1];
                      bVar32 = *pbVar20;
                      pbVar20 = pbVar20 + 2;
                      pbVar30[2] = bVar32;
                      pbVar30 = pbVar30 + 4;
                    }
                  }
                  else {
                    iVar9 = 0;
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      uVar2 = *(ushort *)(pbVar30 + iVar9);
                      uVar19 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) *
                                                   0x100 - (((uint)uVar2 << 0x18 |
                                                            (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                  0x7fff,0xffff);
                      uVar2 = *(ushort *)((int)(pbVar30 + iVar9) + 2);
                      puVar29 = (undefined1 *)((int)local_18c + iVar9);
                      uVar33 = (undefined1)uVar19;
                      *puVar29 = uVar33;
                      uVar19 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) *
                                                   0x100 - (((uint)uVar2 << 0x18 |
                                                            (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                  0x7fff,0xffff);
                      puVar29[3] = (char)uVar19;
                      iVar9 = iVar9 + 4;
                      puVar29[2] = uVar33;
                      puVar29[1] = uVar33;
                    }
                  }
                  break;
                case 0x6:
                  if (local_150 == &SupervisorCall) {
                    local_90 = 0x15;
                    recovered_10004170((void *)((int)local_184 + uVar12 * local_158 * 4),local_b8,
                                       local_158 << 2);
                  }
                  else {
                    iVar9 = 0;
                    pbVar20 = local_b8 + 7;
                    for (uVar14 = local_158; uVar14 != 0; uVar14 = uVar14 - 1) {
                      uVar19 = recovered_100035dc((uint)CONCAT11(pbVar20[-7],pbVar30[iVar9 * 2 + 1])
                                                  * 0xff + 0x7fff,0xffff);
                      puVar29 = (undefined1 *)((int)local_18c + iVar9);
                      *puVar29 = (char)uVar19;
                      uVar2 = *(ushort *)(pbVar30 + iVar9 * 2 + 2);
                      uVar19 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) *
                                                   0x100 - (((uint)uVar2 << 0x18 |
                                                            (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                  0x7fff,0xffff);
                      puVar29[1] = (char)uVar19;
                      uVar2 = *(ushort *)(pbVar30 + iVar9 * 2 + 4);
                      uVar19 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) *
                                                   0x100 - (((uint)uVar2 << 0x18 |
                                                            (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                  0x7fff,0xffff);
                      puVar29[2] = (char)uVar19;
                      uVar19 = recovered_100035dc((uint)CONCAT11(pbVar30[iVar9 * 2 + 6],*pbVar20) *
                                                  0xff + 0x7fff,0xffff);
                      puVar29[3] = (char)uVar19;
                      pbVar20 = pbVar20 + 8;
                      iVar9 = iVar9 + 4;
                    }
                  }
                }
                uVar7 = local_b0;
                uVar22 = local_b4;
                pbVar30 = local_b8;
                local_b8 = local_ac;
                local_b4 = local_a8;
                local_b0 = local_a4;
                local_ac = pbVar30;
                local_a8 = uVar22;
                local_1a4 = local_1a4 + 4;
                local_a4 = uVar7;
                bVar5 = true;
              }
              bVar8 = local_e8 == pcStack_f0;
switchD_10008698_caseD_1:
              local_b4 = 0;
              recovered_100066b0(local_b8);
              local_a8 = 0;
              recovered_100066b0(local_ac);
LAB_10008d48:
              uVar39 = '\0';
              local_9c = 0;
              recovered_100066b0(local_a0);
              recovered_1000ad78(&local_100);
              if (bVar8) goto LAB_10008d6c;
            }
          }
        }
        else if ((local_158 == 0) ||
                (uVar39 = '\0', (int)((ulonglong)uStack_154 * (ulonglong)local_158 >> 0x20) == 0)) {
          uVar39 = '\0';
          if (uStack_154 * local_158 < 0x40000000) {
            local_90 = 0x16;
            local_100 = (void *)((uint)local_100 & 0xffffff00);
            recovered_10009c98((int *)&local_184,uStack_154 * local_158 * 4,(undefined1 *)&local_100
                              );
            local_90 = 0x17;
            local_e8 = (char *)0x0;
            local_ec = (char *)0x0;
            pcStack_f0 = (char *)0x0;
            local_f4 = (undefined1 *)0x0;
            local_f8 = (undefined1 *)0x0;
            uStack_fc = 0;
            local_100 = (void *)0x0;
            bVar8 = recovered_10009da8((int *)&local_100,(int *)&local_11c);
            if (!bVar8) goto LAB_10008bf0;
            uVar10 = recovered_10009d68((int)&local_158);
            iVar6 = DAT_10008d10;
            pcVar23 = DAT_10008d0c;
            iVar4 = DAT_10008d08;
            iVar9 = DAT_10008d04;
            iVar34 = 0;
            uVar11 = uVar10 + 7 >> 3;
            if (uVar10 < 8) {
              uVar11 = 1;
            }
            while( true ) {
              pcVar26 = local_e8;
              pcVar27 = pcStack_f0;
              if (iVar34 == 7) break;
              uVar10 = *(uint *)(iVar9 + iVar34 * 4);
              uVar19 = *(uint *)(iVar6 + iVar34 * 4);
              uVar12 = *(uint *)(iVar4 + iVar34 * 4);
              uVar14 = *(uint *)(pcVar23 + iVar34 * 4);
              local_1a4 = 0;
              if (uVar19 < local_158) {
                local_1a4 = recovered_100035dc(local_158 + ~uVar19,uVar12);
                local_1a4 = local_1a4 + 1;
              }
              if (uVar14 < uStack_154) {
                uVar15 = recovered_100035dc(uStack_154 + ~uVar14,uVar10);
                if ((local_1a4 != 0) && (uVar15 != 0xffffffff)) {
                  uVar16 = recovered_10009d68((int)&local_158);
                  if ((int)((ulonglong)uVar16 * (ulonglong)local_1a4 >> 0x20) == 0) {
                    local_90 = 0x18;
                    uVar16 = uVar16 * local_1a4 + 7;
                    recovered_1000b96c(&local_a0,(uVar16 >> 3) + 1);
                    uVar16 = uVar16 >> 3;
                    local_90 = 0x19;
                    recovered_1000b96c(&local_ac,uVar16);
                    local_90 = 0x1a;
                    recovered_1000b96c(&local_b8,uVar16);
                    pcVar27 = (char *)(uVar12 * 4);
                    local_1a8 = uVar14 << 2;
                    bVar8 = false;
                    pcVar26 = pcVar23;
                    for (uVar12 = 0; uVar12 < uVar15 + 1; uVar12 = uVar12 + 1) {
                      local_90 = 0x1b;
                      iVar17 = recovered_1000aa98((int)&local_100,local_a0,local_9c);
                      if (iVar17 == 0) break;
                      local_90 = 0x1c;
                      pbVar30 = (byte *)0x0;
                      if (bVar8) {
                        pbVar30 = local_ac;
                      }
                      iVar17 = recovered_1000aae4((uint)*local_a0,(char *)local_b8,
                                                  (char *)(local_a0 + 1),(char *)pbVar30,uVar16,
                                                  uVar11);
                      if (iVar17 == 0) break;
                      switch((uintptr_t)(local_14c)) {
                      case 0x0:
                        if (local_150 == &SupervisorCall) {
                          pbVar20 = (byte *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          pbVar30 = local_b8;
                          for (uVar14 = local_1a4; pcVar26 = pcVar27, uVar14 != 0;
                              uVar14 = uVar14 - 1) {
                            bVar32 = *pbVar30;
                            pbVar20[1] = bVar32;
                            *pbVar20 = bVar32;
                            pbVar20[-1] = bVar32;
                            pbVar20[2] = -(~(byte)local_15c & 1 |
                                          local_16c != (undefined1 *)(uint)bVar32);
                            pbVar20 = pbVar20 + (int)pcVar27;
                            pbVar30 = pbVar30 + 1;
                          }
                        }
                        else {
                          pbVar30 = local_b8 + 1;
                          pcVar26 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            puVar29 = (undefined1 *)
                                      ((*(ushort *)(pbVar30 + -1) & 0xff) << 8 |
                                      (uint)(*(ushort *)(pbVar30 + -1) >> 8));
                            uVar18 = recovered_100035dc((int)puVar29 * 0xff + 0x7fff,0xffff);
                            pbVar30 = pbVar30 + 2;
                            cVar3 = (char)uVar18;
                            pcVar26[1] = cVar3;
                            *pcVar26 = cVar3;
                            pcVar26[-1] = cVar3;
                            pcVar26[2] = -(~(byte)local_15c & 1 | puVar29 != local_16c);
                            pcVar26 = pcVar26 + (int)pcVar27;
                          }
                        }
                        break;
                      default:
                        goto switchD_10007f00_caseD_1;
                      case 0x2:
                        if (local_150 == &SupervisorCall) {
                          pbVar20 = local_b8 + 1;
                          pbVar30 = (byte *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            bVar32 = 0xff;
                            if (PF_PART1(local_15c, 1) == '\x01') {
                              bVar8 = pcStack_168 == (char *)(uint)pbVar20[-1];
                              pcVar21 = pcStack_168;
                              if (bVar8) {
                                pcVar21 = (char *)(uint)*pbVar20;
                                pcVar26 = local_164;
                              }
                              if ((bVar8 && pcVar26 == pcVar21) &&
                                 (bVar32 = 0, local_160 != (char *)(uint)pbVar20[1])) {
                                bVar32 = 0xff;
                              }
                            }
                            pbVar30[-1] = pbVar20[-1];
                            *pbVar30 = *pbVar20;
                            bVar1 = pbVar20[1];
                            pbVar20 = pbVar20 + 3;
                            pbVar30[2] = bVar32;
                            pbVar30[1] = bVar1;
                            pbVar30 = pbVar30 + (int)pcVar27;
                          }
                        }
                        else {
                          puVar31 = (ushort *)(local_b8 + 2);
                          pcVar26 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 3
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            pcVar40 = (char *)((puVar31[1] & 0xff) << 8 | (uint)(puVar31[1] >> 8));
                            uVar18 = recovered_100035dc((int)pcVar40 * 0xff + 0x7fff,0xffff);
                            pcVar41 = local_160;
                            pcVar36 = local_164;
                            pcVar21 = pcStack_168;
                            bVar32 = PF_PART1(local_15c, 1);
                            pcVar38 = (char *)((*puVar31 & 0xff) << 8 | (uint)(*puVar31 >> 8));
                            uVar2 = puVar31[-1];
                            pcVar26[-1] = (char)uVar18;
                            uVar18 = recovered_100035dc((int)pcVar38 * 0xff + 0x7fff,0xffff);
                            pcVar35 = (char *)((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
                            pcVar26[-2] = (char)uVar18;
                            uVar18 = recovered_100035dc((int)pcVar35 * 0xff + 0x7fff,0xffff);
                            pcVar26[-3] = (char)uVar18;
                            puVar31 = puVar31 + 3;
                            *pcVar26 = -(~bVar32 & 1 | pcVar35 != pcVar21 | pcVar38 != pcVar36 |
                                        pcVar40 != pcVar41);
                            pcVar26 = pcVar26 + (int)pcVar27;
                          }
                        }
                        break;
                      case 0x3:
                        uVar14 = local_174 >> 2;
                        pcVar21 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4);
                        pbVar30 = local_b8;
                        for (uVar18 = local_1a4; uVar18 != 0; uVar18 = uVar18 - 1) {
                          if (uVar14 <= *pbVar30) goto switchD_10007f00_caseD_1;
                          local_90 = 0x1d;
                          recovered_10004170(pcVar21,(void *)((int)local_178 + (uint)*pbVar30 * 4),4
                                            );
                          pbVar30 = pbVar30 + 1;
                          pcVar21 = pcVar21 + (int)pcVar27;
                        }
                        break;
                      case 0x4:
                        if (local_150 == &SupervisorCall) {
                          pbVar20 = local_b8 + 1;
                          pbVar30 = (byte *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            bVar32 = pbVar20[-1];
                            *pbVar30 = bVar32;
                            pbVar30[-1] = bVar32;
                            pbVar30[1] = pbVar20[-1];
                            bVar32 = *pbVar20;
                            pbVar20 = pbVar20 + 2;
                            pbVar30[2] = bVar32;
                            pbVar30 = pbVar30 + (int)pcVar27;
                          }
                        }
                        else {
                          pbVar30 = local_b8 + 3;
                          pcVar26 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            uVar2 = *(ushort *)(pbVar30 + -1);
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            uVar2 = *(ushort *)(pbVar30 + -3);
                            pcVar26[2] = (char)uVar18;
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            cVar3 = (char)uVar18;
                            pcVar26[1] = cVar3;
                            *pcVar26 = cVar3;
                            pbVar30 = pbVar30 + 4;
                            pcVar26[-1] = cVar3;
                            pcVar26 = pcVar26 + (int)pcVar27;
                          }
                        }
                        break;
                      case 0x6:
                        if (local_150 == &SupervisorCall) {
                          pcVar21 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4);
                          pbVar30 = local_b8;
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            local_90 = 0x1e;
                            recovered_10004170(pcVar21,pbVar30,4);
                            pcVar21 = pcVar21 + (int)pcVar27;
                            pbVar30 = pbVar30 + 4;
                          }
                        }
                        else {
                          pbVar30 = local_b8 + 7;
                          pcVar26 = (char *)((int)local_184 + local_158 * local_1a8 + uVar19 * 4 + 1
                                            );
                          for (uVar14 = local_1a4; uVar14 != 0; uVar14 = uVar14 - 1) {
                            uVar2 = *(ushort *)(pbVar30 + -7);
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            pcVar26[-1] = (char)uVar18;
                            uVar2 = *(ushort *)(pbVar30 + -5);
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            *pcVar26 = (char)uVar18;
                            uVar2 = *(ushort *)(pbVar30 + -3);
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            pcVar26[1] = (char)uVar18;
                            uVar2 = *(ushort *)(pbVar30 + -1);
                            uVar18 = recovered_100035dc((((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8))
                                                         * 0x100 -
                                                        (((uint)uVar2 << 0x18 |
                                                         (uint)(uVar2 >> 8) << 0x10) >> 0x10)) +
                                                        0x7fff,0xffff);
                            pcVar26[2] = (char)uVar18;
                            pcVar26 = pcVar26 + (int)pcVar27;
                            pbVar30 = pbVar30 + 8;
                          }
                        }
                      }
                      uVar7 = local_b0;
                      uVar22 = local_b4;
                      pbVar30 = local_b8;
                      local_b8 = local_ac;
                      local_b4 = local_a8;
                      local_b0 = local_a4;
                      local_ac = pbVar30;
                      local_a8 = uVar22;
                      local_a4 = uVar7;
                      local_1a8 = local_1a8 + uVar10 * 4;
                      bVar8 = true;
                    }
switchD_10007f00_caseD_1:
                    local_b4 = 0;
                    recovered_100066b0(local_b8);
                    local_a8 = 0;
                    recovered_100066b0(local_ac);
                    local_9c = 0;
                    recovered_100066b0(local_a0);
                    if (uVar15 + 1 <= uVar12) goto LAB_100084a4;
                  }
LAB_10008bf0:
                  recovered_1000ad78(&local_100);
                  uVar39 = '\0';
                  goto LAB_10008d90;
                }
              }
LAB_100084a4:
              iVar34 = iVar34 + 1;
            }
            recovered_1000ad78(&local_100);
            uVar39 = '\0';
            if (pcVar26 != pcVar27) goto LAB_10008d90;
LAB_10008d6c:
            *(uint *)image = local_158;
            *(uint *)((int)image + 4) = uStack_154;
            recovered_10008f7c((undefined4 *)((int)image + 8),&local_184);
            uVar39 = '\x01';
          }
        }
LAB_10008d90:
        local_180 = 0;
        recovered_100066b0(local_184);
LAB_10008da0:
        local_174 = 0;
        recovered_100066b0(local_178);
      }
    }
LAB_10007634:
    recovered_10008fd0((int)&local_158);
    local_108 = 0;
    recovered_100066b0(local_10c);
  }
  recovered_10006b94(&uStack_94);
  return uVar39;
}

#undef DAT_100084ac
#undef DAT_100084b0
#undef DAT_100084b4
#undef DAT_100084b8
#undef DAT_10008728
#undef DAT_1000872c
#undef DAT_10008730
#undef DAT_10008734
#undef DAT_100087b8
#undef DAT_10008d04
#undef DAT_10008d08
#undef DAT_10008d0c
#undef DAT_10008d10
#undef EXT_00000004
#undef EXT_00000008
#undef auStackY_260
#undef puStack_170
#undef pcStack_168
#undef uStack_154
#undef uStack_fc
#undef pcStack_f0
#undef local_1a8
#undef local_1a4
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_180
#undef local_17c
#undef local_178
#undef local_174
#undef local_16c
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_150
#undef local_14c
#undef uStack_94
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_13b
#undef local_138
#undef auStack_68
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_10c
#undef local_108
#undef local_100
#undef local_f8
#undef local_f4
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
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5970U)
 */

undefined4 * recovered_10008f4c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  recovered_10008f7c(param_1 + 2,param_2 + 2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59a0U)
 */

undefined4 * recovered_10008f7c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100066b0((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x59f4U)
 */

int recovered_10008fd0(int param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x40) = 0;
  recovered_100066b0(*(void **)(param_1 + 0x3c));
  recovered_1000b998((undefined4 *)(param_1 + 0x30));
  recovered_1000b998((undefined4 *)(param_1 + 0x24));
  return param_1;
}


#undef DAT_1000927c
#define DAT_1000927c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ca0U)))
#undef DAT_10009280
#define DAT_10009280 (*(int *)(((uintptr_t)pf_module_state + 0x5ca4U)))
#undef DAT_10009284
#define DAT_10009284 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5ca8U)))
#undef DAT_10009288
#define DAT_10009288 (*(int *)(((uintptr_t)pf_module_state + 0x5cacU)))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(uint *)(frame + 28))
#define local_b0 (*(uint * *)(frame + 32))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define local_ac (*(uint * *)(frame + 36))
#define local_a8 (*(undefined1 * *)(frame + 40))
#define local_a4 (*(ulong *)(frame + 44))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a28U)
 */

uint recovered_10009004(int param_1,uint *param_2)

{
  unsigned char frame[240] = {0};

  byte bVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;

  uVar5 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_a4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_ac = param_2;
  recovered_10008f4c(param_2,&local_a8);
  local_9c = 0;
  recovered_100066b0(local_a0);
  local_7c = *DAT_10009284;
  local_78 = DAT_1000927c;
  local_a0 = (void *)0x0;
  local_70 = DAT_10009280 + ((uintptr_t)pf_module_state+0x5aacU);
  local_a8 = (undefined1 *)0x0;
  local_a4 = 0;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_10006b7c(&uStack_94);
  if (param_1 != 0) {
    local_90 = 1;
    puVar2 = recovered_10005900((char *)param_1,DAT_10009288);
    uVar5 = 0;
    if (puVar2 != (uint *)0x0) {
      local_90 = 2;
      local_b4 = 0;
      local_b0 = puVar2;
      iVar3 = recovered_10005f98((int *)puVar2,0,2);
      if (iVar3 == 0) {
        local_90 = 3;
        uVar5 = recovered_10006030((int)local_b0);
        if (-1 < (int)uVar5) {
          local_90 = 4;
          local_b4 = 0;
          local_b8 = uVar5;
          iVar3 = recovered_10005f98((int *)local_b0,0,0);
          if (iVar3 == 0) {
            local_90 = 5;
            recovered_10009d0c((int *)&local_a8,local_b8);
            if (local_a4 == 0) {
              local_b4 = 1;
            }
            else {
              local_90 = 6;
              uVar4 = recovered_10005d00(local_a8,1,local_a4,(int *)local_b0);
              local_b4 = (uint)(uVar4 == local_a4);
            }
          }
        }
      }
      local_90 = 7;
      iVar3 = recovered_10005cbc(local_b0);
      uVar5 = 0;
      if ((local_b4 & iVar3 == 0) != 0) {
        local_90 = 8;
        bVar1 = recovered_10007464(local_a8,local_a4,local_ac);
        uVar5 = (uint)bVar1;
      }
    }
  }
  local_a4 = 0;
  recovered_100066b0(local_a8);
  recovered_10006b94(&uStack_94);
  return uVar5;
}

#undef DAT_1000927c
#undef DAT_10009280
#undef DAT_10009284
#undef DAT_10009288
#undef local_b8
#undef local_b4
#undef local_b0
#undef auStack_c0
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
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_10009960
#define DAT_10009960 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6384U)))
#undef DAT_10009964
#define DAT_10009964 (*(int *)(((uintptr_t)pf_module_state + 0x6388U)))
#undef DAT_10009968
#define DAT_10009968 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x638cU)))
#undef DAT_1000996c
#define DAT_1000996c (*(int *)(((uintptr_t)pf_module_state + 0x6390U)))
#undef DAT_10009970
#define DAT_10009970 (*(void * *)(((uintptr_t)pf_module_state + 0x6394U)))
#undef DAT_10009974
#define DAT_10009974 (*(byte * *)(((uintptr_t)pf_module_state + 0x6398U)))
#undef DAT_10009978
#define DAT_10009978 (*(byte * *)(((uintptr_t)pf_module_state + 0x639cU)))
#undef DAT_1000997c
#define DAT_1000997c (*(byte * *)(((uintptr_t)pf_module_state + 0x63a0U)))
#define local_dc (*(uint *)(frame + 20))
#define local_d8 (*(uint * *)(frame + 24))
#define local_d4 (*(int *)(frame + 28))
#define local_d0 (*(int *)(frame + 32))
#define local_cc (*(uint *)(frame + 36))
#define local_c8 (*(uint *)(frame + 40))
#define local_c4 (*(uint *)(frame + 44))
#define local_c0 (*(byte * *)(frame + 48))
#define local_bc (*(uint *)(frame + 52))
#define local_b8 (*(uint *)(frame + 56))
#define local_b4 (*(void * *)(frame + 60))
#define local_b0 (*(uint *)(frame + 64))
#define local_ac (*(undefined4 *)(frame + 68))
#define local_a8 (*(undefined1 *)(frame + 72))
#define local_a4 (*(void * *)(frame + 76))
#define local_a0 (*(uint *)(frame + 80))
#define local_9c (*(undefined4 *)(frame + 84))
#define local_95 (*(undefined1 *)(frame + 91))
#define auStack_e0 (*(undefined1 (*)[4])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5cb0U)
 */

uint recovered_1000928c(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[272] = {0};

  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *data;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = *DAT_10009968;
  local_78 = DAT_10009960;
  local_70 = DAT_10009964 + ((uintptr_t)pf_module_state+0x5d08U);
  recovered_10006b7c(&uStack_94);
  uVar12 = 0;
  if (param_1 != 0 && param_2 != 0) {
    uVar3 = param_3;
    if (0 < (int)param_3) {
      uVar3 = param_4;
    }
    if (0 < (int)uVar3) {
      local_90 = 0xffffffff;
      puVar2 = recovered_10005900((char *)param_1,DAT_1000996c);
      if (puVar2 != (uint *)0x0) {
        local_90 = 0xffffffff;
        bVar1 = recovered_10009980(puVar2,DAT_10009970,8);
        if (bVar1) {
          local_a8 = 0;
          local_ac = 0x608;
          local_90 = 0xffffffff;
          local_b0 = CONCAT13((char)param_4,
                              (int3)CONCAT31(CONCAT21((short)(param_4 >> 8),(char)(param_4 >> 0x10))
                                             ,(char)(param_4 >> 0x18)));
          local_b4 = (void *)CONCAT13((char)param_3,
                                      (int3)CONCAT31(CONCAT21((short)(param_3 >> 8),
                                                              (char)(param_3 >> 0x10)),
                                                     (char)(param_3 >> 0x18)));
          uVar3 = recovered_100099b8(puVar2,DAT_10009974,(byte *)&local_b4,0xd);
          if (uVar3 != 0) {
            local_ac = 0;
            local_b0 = 0;
            local_b4 = (void *)0x0;
            if ((param_3 < 0x40000000) &&
               (uVar3 = param_3 << 2 | 1, (int)((ulonglong)param_4 * (ulonglong)uVar3 >> 0x20) == 0)
               ) {
              local_90 = 1;
              local_dc = param_4;
              local_d8 = puVar2;
              local_cc = uVar3;
              local_c8 = param_2;
              local_b8 = param_3;
              recovered_10009d0c((int *)&local_b4,uVar3 * param_4);
              local_d0 = local_b8 * 4 + 1;
              local_d4 = local_b8 * -4;
              local_c0 = (byte *)0x1;
              uVar13 = 0;
              uVar12 = local_c8;
              uVar3 = local_dc;
              local_b8 = local_b8 * 4;
              while (uVar13 != uVar3) {
                uVar18 = 0;
                data = (void *)(uVar13 * local_b8 + local_c8);
                uVar16 = 0;
                uVar17 = 0;
                uVar14 = 0;
                uVar11 = 0;
                iVar4 = 0;
                if (uVar13 != 0) {
                  iVar4 = (int)data + local_d4;
                }
                uVar5 = 0;
                if (iVar4 == 0) {
                  uVar18 = 0xffffffff;
                }
                uVar19 = uVar18;
                for (; local_b8 != uVar5; uVar5 = uVar5 + 1) {
                  uVar7 = (uint)*(byte *)(uVar12 + uVar5);
                  iVar15 = (int)(char)*(byte *)(uVar12 + uVar5);
                  if (iVar15 < 0) {
                    uVar7 = 0x100 - uVar7;
                  }
                  bVar1 = CARRY4(uVar14,uVar7);
                  uVar14 = uVar14 + uVar7;
                  uVar7 = 0;
                  uVar11 = uVar11 + bVar1;
                  if (3 < uVar5) {
                    uVar7 = (uint)*(byte *)(uVar12 + uVar5 + -4);
                  }
                  uVar8 = iVar15 - uVar7 & 0xff;
                  if ((char)(iVar15 - uVar7) < '\0') {
                    uVar8 = 0x100 - uVar8;
                  }
                  bVar1 = CARRY4(uVar16,uVar8);
                  uVar16 = uVar16 + uVar8;
                  uVar17 = uVar17 + bVar1;
                  if (iVar4 != 0) {
                    uVar7 = iVar15 - (uint)*(byte *)(iVar4 + uVar5);
                    uVar8 = uVar7 & 0xff;
                    if ((char)uVar7 < '\0') {
                      uVar8 = 0x100 - uVar8;
                    }
                    bVar1 = CARRY4(uVar19,uVar8);
                    uVar19 = uVar19 + uVar8;
                    uVar18 = uVar18 + bVar1;
                  }
                }
                bVar1 = uVar17 <= uVar11 && (uint)(uVar14 <= uVar16) <= uVar17 - uVar11;
                if (bVar1) {
                  uVar14 = uVar16;
                  uVar11 = uVar17;
                }
                cVar10 = '\x02';
                if (uVar11 < uVar18 || uVar18 - uVar11 < (uint)(uVar14 <= uVar19)) {
                  cVar10 = bVar1;
                }
                if (iVar4 == 0) {
                  cVar10 = bVar1;
                }
                pcVar9 = (char *)((int)local_b4 + uVar13 * local_cc);
                *pcVar9 = cVar10;
                local_c4 = uVar13;
                local_bc = uVar12;
                if (cVar10 == '\x02') {
                  if (iVar4 == 0) goto LAB_10009618;
                  for (uVar6 = 0; local_b8 != uVar6; uVar6 = uVar6 + 1) {
                    *(char *)((int)local_b4 + uVar6 + (int)local_c0) =
                         *(char *)(uVar12 + uVar6) - *(char *)(iVar4 + uVar6);
                  }
                }
                else if (cVar10 == '\x01') {
                  for (uVar13 = 0; local_b8 != uVar13; uVar13 = uVar13 + 1) {
                    uVar11 = 0;
                    if (3 < uVar13) {
                      uVar11 = uVar12 + uVar13;
                    }
                    if (3 < uVar13) {
                      uVar11 = (uint)*(byte *)(uVar11 - 4);
                    }
                    *(char *)((int)local_b4 + uVar13 + (int)local_c0) =
                         *(char *)(uVar12 + uVar13) - (char)uVar11;
                  }
                }
                else {
LAB_10009618:
                  local_90 = 2;
                  recovered_10004170(pcVar9 + 1,data,local_b8);
                  uVar3 = local_dc;
                }
                local_c0 = (byte *)((int)local_c0 + local_d0);
                uVar12 = local_bc + local_b8;
                uVar13 = local_c4 + 1;
              }
              local_9c = 0;
              local_a4 = (void *)0x0;
              local_a0 = 0;
              local_90 = 3;
              local_95 = 0x78;
              recovered_1000b104((int *)&local_a4,&local_95);
              local_90 = 4;
              local_95 = 1;
              recovered_1000b104((int *)&local_a4,&local_95);
              local_bc = 0;
              while( true ) {
                if (local_b0 <= local_bc) break;
                local_b8 = local_b0 - local_bc;
                local_90 = 5;
                if (0xfffe < local_b8) {
                  local_b8 = 0xffff;
                }
                local_c0 = (byte *)(local_b8 + local_bc);
                local_95 = local_c0 == (byte *)local_b0;
                recovered_1000b104((int *)&local_a4,&local_95);
                local_90 = 6;
                local_95 = (undefined1)local_b8;
                recovered_1000b104((int *)&local_a4,&local_95);
                local_90 = 7;
                local_95 = (undefined1)(local_b8 >> 8);
                recovered_1000b104((int *)&local_a4,&local_95);
                local_90 = 8;
                local_b8 = local_b8 ^ 0xffff;
                local_95 = (undefined1)local_b8;
                recovered_1000b104((int *)&local_a4,&local_95);
                local_90 = 9;
                local_95 = (undefined1)(local_b8 >> 8);
                recovered_1000b104((int *)&local_a4,&local_95);
                local_90 = 10;
                recovered_10009b50((int *)&local_a4,(int)local_a4 + local_a0,
                                   (undefined1 *)((int)local_b4 + local_bc),
                                   (undefined1 *)((int)local_b4 + (int)local_c0));
                local_bc = (uint)local_c0;
              }
              local_b8 = recovered_1000b06c((int)local_b4,local_b0);
              local_90 = 0xb;
              local_bc = local_a0;
              recovered_10009d0c((int *)&local_a4,local_a0 + 4);
              *(uint *)((int)local_a4 + local_bc) =
                   local_b8 << 0x18 | (local_b8 >> 8 & 0xff) << 0x10 |
                   (local_b8 >> 0x10 & 0xff) << 8 | local_b8 >> 0x18;
              uVar12 = 0;
              local_c0 = DAT_10009978;
              do {
                puVar2 = local_d8;
                if (local_a0 <= uVar12) {
                  local_a0 = 0;
                  recovered_100066b0(local_a4);
                  local_b0 = 0;
                  recovered_100066b0(local_b4);
                  local_90 = 0xffffffff;
                  uVar12 = recovered_100099b8(puVar2,DAT_1000997c,(byte *)0x0,0);
                  goto LAB_10009400;
                }
                local_bc = local_a0 - uVar12;
                local_90 = 0xc;
                if (0x3ffff < local_bc) {
                  local_bc = 0x40000;
                }
                local_b8 = uVar12;
                uVar3 = recovered_100099b8(local_d8,local_c0,(byte *)((int)local_a4 + uVar12),
                                           local_bc);
                uVar12 = local_bc + local_b8;
              } while (uVar3 != 0);
              uVar12 = 0;
              local_a0 = 0;
              recovered_100066b0(local_a4);
              local_b0 = 0;
              recovered_100066b0(local_b4);
              puVar2 = local_d8;
            }
            else {
              recovered_100066b0((void *)0x0);
            }
          }
        }
LAB_10009400:
        local_90 = 0xffffffff;
        iVar4 = recovered_10005cbc(puVar2);
        uVar12 = uVar12 & iVar4 == 0;
      }
    }
  }
  recovered_10006b94(&uStack_94);
  return uVar12;
}

#undef DAT_10009960
#undef DAT_10009964
#undef DAT_10009968
#undef DAT_1000996c
#undef DAT_10009970
#undef DAT_10009974
#undef DAT_10009978
#undef DAT_1000997c
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
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_95
#undef auStack_e0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63a4U)
 */

bool recovered_10009980(uint *param_1,void *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_3 == 0) {
    return true;
  }
  iVar1 = recovered_10005e8c(param_2,1,param_3,param_1);
  return iVar1 == param_3;
}


#define local_20 (*(uint *)(frame + 148))
#define auStack_a4 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63dcU)
 */

uint recovered_100099b8(uint *param_1,byte *param_2,byte *param_3,uint param_4)

{
  unsigned char frame[212] = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;

  if ((param_3 != (byte *)0x0) || (uVar3 = 0, param_4 == 0)) {
    local_20 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
               param_4 >> 0x18;
    uVar3 = 0;
    uVar2 = recovered_10009a94(0,param_2,4);
    if (param_4 != 0) {
      recovered_10009a94(uVar2,param_3,param_4);
    }
    bVar1 = recovered_10009980(param_1,&local_20,4);
    if (((bVar1) && (bVar1 = recovered_10009980(param_1,param_2,4), bVar1)) &&
       (bVar1 = recovered_10009980(param_1,param_3,param_4), bVar1)) {
      bVar1 = recovered_10009980(param_1,auStack_a4 + 0x80,4);
      uVar3 = (uint)bVar1;
    }
  }
  return uVar3;
}

#undef local_20
#undef auStack_a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64acU)
 */

uint recovered_10009a88(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *param_1;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}


#undef DAT_10009b2c
#define DAT_10009b2c (*(uint *)(((uintptr_t)pf_module_state + 0x6550U)))
#undef DAT_10009b30
#define DAT_10009b30 (*(char * *)(((uintptr_t)pf_module_state + 0x6554U)))
#undef DAT_10009b34
#define DAT_10009b34 (*(int *)(((uintptr_t)pf_module_state + 0x6558U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64b8U)
 */

uint recovered_10009a94(uint param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  iVar2 = DAT_10009b34;
  pcVar1 = DAT_10009b30;
  uVar4 = DAT_10009b2c;
  if (*DAT_10009b30 == '\0') {
    for (uVar7 = 0; uVar7 != 0x100; uVar7 = uVar7 + 1) {
      uVar6 = uVar7;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar3 = uVar4 ^ uVar6 >> 1;
        if ((uVar6 & 1) == 0) {
          uVar3 = uVar6 >> 1;
        }
        uVar6 = uVar3;
      }
      *(uint *)(iVar2 + uVar7 * 4) = uVar6;
    }
    *pcVar1 = '\x01';
  }
  uVar4 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar4 = *(uint *)(iVar2 + ((*param_2 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar4;
}

#undef DAT_10009b2c
#undef DAT_10009b30
#undef DAT_10009b34

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x655cU)
 */

void recovered_10009b38(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10009b50(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6574U)
 */

int recovered_10009b50(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10009c28(param_1,uVar5);
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
 * Address: ((uintptr_t)pf_module_state+0x664cU)
 */

void recovered_10009c28(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_10009c88(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100066b0((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66acU)
 */

uint recovered_10009c88(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006680(param_1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66bcU)
 */

void recovered_10009c98(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10009ca4(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66c8U)
 */

void recovered_10009ca4(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_10009d0c(param_1,param_2);
    return;
  }
  recovered_10009c28(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6730U)
 */

void recovered_10009d0c(int *param_1,uint param_2)

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
    recovered_10009c28(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_10009da4
#define DAT_10009da4 (*(int *)(((uintptr_t)pf_module_state + 0x67c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678cU)
 */

int recovered_10009d68(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0xc);
  iVar1 = 0;
  if (uVar2 < 7) {
    if ((0x5dU >> (uVar2 & 0xff) & 1) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8) * *(int *)(DAT_10009da4 + uVar2 * 4);
  }
  return iVar1;
}

#undef DAT_10009da4

#undef DAT_1000aa78
#define DAT_1000aa78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x749cU)))
#undef DAT_1000aa7c
#define DAT_1000aa7c (*(int *)(((uintptr_t)pf_module_state + 0x74a0U)))
#undef DAT_1000aa80
#define DAT_1000aa80 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x74a4U)))
#undef DAT_1000aa84
#define DAT_1000aa84 (*(int * *)(((uintptr_t)pf_module_state + 0x74a8U)))
#undef DAT_1000aa88
#define DAT_1000aa88 (*(uint * *)(((uintptr_t)pf_module_state + 0x74acU)))
#undef DAT_1000aa8c
#define DAT_1000aa8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74b0U)))
#undef DAT_1000aa90
#define DAT_1000aa90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74b4U)))
#undef DAT_1000aa94
#define DAT_1000aa94 (*(int * *)(((uintptr_t)pf_module_state + 0x74b8U)))
#define local_270 (*(int *)(frame + 32))
#define local_26c (*(int * *)(frame + 36))
#define local_268 (*(uint * *)(frame + 40))
#define local_264 (*(uint * *)(frame + 44))
#define local_260 (*(int * *)(frame + 48))
#define local_25c (*(int * *)(frame + 52))
#define local_258 (*(uint * *)(frame + 56))
#define local_254 (*(uint * *)(frame + 60))
#define local_250 (*(uint * *)(frame + 64))
#define local_24c (*(uint *)(frame + 68))
#define local_248 (*(uint (*)[16])(frame + 72))
#define local_208 (*(void * *)(frame + 136))
#define local_204 (*(undefined4 *)(frame + 140))
#define local_1f8 (*(undefined1 *)(frame + 152))
#define local_1f0 (*(uint (*)[16])(frame + 160))
#define local_1b0 (*(void * *)(frame + 224))
#define local_1ac (*(undefined4 *)(frame + 228))
#define local_198 (*(uint *)(frame + 248))
#define local_194 (*(uint *)(frame + 252))
#define local_190 (*(byte * *)(frame + 256))
#define local_18c (*(int *)(frame + 260))
#define local_188 (*(int *)(frame + 264))
#define local_184 (*(uint (*)[19])(frame + 268))
#define local_138 (*(void * *)(frame + 344))
#define local_134 (*(undefined4 *)(frame + 348))
#define local_124 (*(int * *)(frame + 364))
#define local_120 (*(int *)(frame + 368))
#define local_118 (*(void * *)(frame + 376))
#define local_114 (*(undefined4 *)(frame + 380))
#define local_10c (*(undefined4 * *)(frame + 388))
#define local_108 (*(uint * *)(frame + 392))
#define local_104 (*(undefined4 *)(frame + 396))
#define local_100 (*(void * *)(frame + 400))
#define local_fc (*(undefined4 *)(frame + 404))
#define local_c0 (*(void * *)(frame + 464))
#define local_bc (*(undefined4 *)(frame + 468))
#define local_ac (*(void * *)(frame + 484))
#define auStack_280 (*(undefined1 (*)[16])(frame + 16))
#define local_a8 (*(undefined4 *)(frame + 488))
#define local_a0 (*(uint *)(frame + 496))
#define local_9c (*(uint *)(frame + 500))
#define local_98 (*(uint * *)(frame + 504))
#define local_90 (*(undefined4 *)(frame + 512))
#define local_7c (*(undefined4 *)(frame + 532))
#define local_78 (*(undefined4 *)(frame + 536))
#define local_74 (*(undefined1 * *)(frame + 540))
#define local_70 (*(int *)(frame + 544))
#define local_6c (*(undefined1 * *)(frame + 548))
#define uStack_94 (*(undefined4 *)(frame + 508))
#define auStack_68 (*(undefined1 (*)[8])(frame + 552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67ccU)
 */

bool recovered_10009da8(int *param_1,int *param_2)

{
  unsigned char frame[688] = {0};

  uint *puVar1;
  void *data;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_280;
  uVar8 = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  local_7c = *DAT_1000aa80;
  local_78 = DAT_1000aa78;
  local_70 = DAT_1000aa7c + ((uintptr_t)pf_module_state+0x682cU);
  iVar12 = *param_2;
  iVar7 = param_2[1];
  recovered_10006b7c(&uStack_94);
  piVar14 = param_1 + 3;
  for (iVar7 = iVar7 << 3; iVar7 != 0; iVar7 = iVar7 + -8) {
    if (CARRY4(*(uint *)(iVar12 + 4),uVar8)) goto LAB_1000a85c;
    uVar8 = *(uint *)(iVar12 + 4) + uVar8;
    iVar12 = iVar12 + 8;
  }
  local_90 = 0xffffffff;
  recovered_10009c28(param_1,uVar8);
  puVar9 = (undefined4 *)*param_2;
  for (iVar7 = param_2[1] << 3; iVar7 != 0; iVar7 = iVar7 + -8) {
    local_90 = 0xffffffff;
    recovered_10009b50(param_1,*param_1 + param_1[1],(undefined1 *)*puVar9,
                       (undefined1 *)*puVar9 + puVar9[1]);
    puVar9 = puVar9 + 2;
  }
  uVar8 = param_1[1];
  bVar6 = false;
  param_1[4] = 0;
  if (5 < uVar8) {
    pbVar13 = (byte *)*param_1;
    if (((*pbVar13 & 0xf) == 8) &&
       (bVar2 = pbVar13[1], iVar7 = recovered_1000365c((uint)CONCAT11(*pbVar13,bVar2),0x1f),
       (bVar2 & 0x20) == 0 && iVar7 == 0)) {
      local_18c = uVar8 - 6;
      puVar11 = local_184;
      local_190 = pbVar13 + 2;
      local_184[1] = 0;
      local_184[0] = 0;
      local_184[2] = 0;
      local_188 = 0;
      local_260 = piVar14;
      do {
        while( true ) {
          local_194 = 0;
          local_198 = 0;
          iVar7 = recovered_1000ad98((int *)&local_190,1,&local_194);
          if ((iVar7 == 0) ||
             (iVar7 = recovered_1000ad98((int *)&local_190,2,&local_198), uVar8 = local_194,
             iVar7 == 0)) goto LAB_1000a85c;
          if (local_198 != 2) break;
          local_25c = DAT_1000aa84;
          local_258 = DAT_1000aa88;
          local_24c = local_194;
          recovered_100041e0(local_1f0,0,0x51);
          recovered_100041e0(local_248,0,0x51);
          local_98 = (uint *)0x0;
          local_9c = 0;
          local_a0 = 0;
          iVar7 = recovered_1000ad98((int *)&local_190,5,(uint *)&local_98);
          if (((iVar7 == 0) ||
              (iVar7 = recovered_1000ad98((int *)&local_190,5,&local_9c), iVar7 == 0)) ||
             (iVar7 = recovered_1000ad98((int *)&local_190,4,&local_a0), iVar7 == 0)) {
            iVar12 = 1;
          }
          else {
            local_90 = 5;
            local_250 = (uint *)local_9c;
            local_254 = local_98;
            local_100 = (void *)0x0;
            local_26c = param_1;
            local_268 = puVar11;
            recovered_1000b428((int *)&local_ac,0x13,&local_100);
            data = local_ac;
            piVar14 = local_260;
            param_1 = local_26c;
            local_270 = (int)local_254 + 0x101;
            local_250 = (uint *)((int)local_250 + 1);
            piVar3 = DAT_1000aa94;
            for (iVar7 = local_a0 + 4; iVar7 != 0; iVar7 = iVar7 + -1) {
              local_100 = (void *)0x0;
              iVar12 = recovered_1000ad98((int *)&local_190,3,(uint *)&local_100);
              if (iVar12 == 0) {
                local_a8 = 0;
                recovered_100066b0(data);
                iVar12 = 1;
                goto LAB_1000a664;
              }
              *(void **)((int)data + *piVar3 * 4) = local_100;
              piVar3 = piVar3 + 1;
            }
            recovered_100041e0(&local_100,0,0x51);
            local_90 = 6;
            iVar7 = recovered_1000b2b0((int *)&local_ac,(int *)&local_100,0);
            iVar10 = 0;
            piVar14 = local_260;
            if (iVar7 != 0) {
              local_104 = 0;
              local_108 = (uint *)0x0;
              local_10c = (undefined4 *)0x0;
              local_90 = 7;
              local_250 = (uint *)((int)local_250 + local_270);
              recovered_1000b510((int *)&local_10c,(uint)local_250);
              do {
                puVar11 = local_108;
                piVar14 = local_260;
                if (local_250 <= local_108) {
                  local_90 = 0xc;
                  recovered_1000b830((int *)&local_118,local_10c,local_10c + local_270);
                  local_90 = 0xd;
                  recovered_1000b830((int *)&local_124,local_10c + local_270,
                                     local_10c + (int)local_108);
                  local_90 = 0xe;
                  iVar7 = recovered_1000b2b0((int *)&local_118,(int *)local_1f0,0);
                  piVar14 = local_260;
                  iVar10 = 0;
                  if (iVar7 != 0) {
                    bVar6 = false;
                    piVar3 = local_124;
                    for (iVar7 = local_120 << 2; iVar7 != 0; iVar7 = iVar7 + -4) {
                      bVar6 = (bool)(bVar6 | *piVar3 != 0);
                      piVar3 = piVar3 + 1;
                    }
                    if (bVar6) {
                      local_90 = 0xf;
                      iVar10 = recovered_1000b2b0((int *)&local_124,(int *)local_248,1);
                      piVar14 = local_260;
                    }
                    else {
                      recovered_100041e0(local_184 + 3,0,0x51);
                      recovered_1000b584(local_248,local_184 + 3);
                      local_134 = 0;
                      recovered_100066b0(local_138);
                      iVar10 = 1;
                      local_1f8 = 1;
                    }
                  }
                  local_120 = 0;
                  recovered_100066b0(local_124);
                  local_114 = 0;
                  recovered_100066b0(local_118);
                  goto LAB_1000a5f4;
                }
                local_184[3] = 0;
                bVar2 = recovered_1000b164((int *)&local_190,(int)&local_100,local_184 + 3);
                if (bVar2 == 0) {
LAB_1000a4d4:
                  iVar10 = 0;
                  goto LAB_1000a5f4;
                }
                if (local_184[3] < 0x10) {
                  local_90 = 8;
                  recovered_1000b780((int *)&local_10c,local_184 + 3);
                  iVar12 = 5;
                }
                else if (local_184[3] == 0x12) {
                  local_118 = (void *)0x0;
                  iVar7 = recovered_1000ad98((int *)&local_190,7,(uint *)&local_118);
                  iVar12 = 1;
                  if (iVar7 != 0) {
                    puVar5 = (uint *)0x0;
                    local_264 = (uint *)((int)local_118 + 0xb);
                    while( true ) {
                      iVar12 = 5;
                      puVar1 = local_264;
                      if (local_264 > puVar5) {
                        puVar1 = local_250;
                      }
                      if (local_264 <= puVar5 || puVar1 <= puVar11) break;
                      local_90 = 0xb;
                      local_124 = (int *)0x0;
                      local_254 = puVar5;
                      recovered_1000b7d8((int *)&local_10c,&local_124);
                      puVar5 = (uint *)((int)local_254 + 1);
                      puVar11 = local_108;
                    }
                  }
                }
                else if (local_184[3] == 0x11) {
                  local_118 = (void *)0x0;
                  iVar7 = recovered_1000ad98((int *)&local_190,3,(uint *)&local_118);
                  iVar12 = 1;
                  if (iVar7 != 0) {
                    puVar5 = (uint *)0x0;
                    local_264 = (uint *)((int)local_118 + 3);
                    while( true ) {
                      iVar12 = 5;
                      puVar1 = local_264;
                      if (local_264 > puVar5) {
                        puVar1 = local_250;
                      }
                      if (local_264 <= puVar5 || puVar1 <= puVar11) break;
                      local_90 = 10;
                      local_124 = (int *)0x0;
                      local_254 = puVar5;
                      recovered_1000b7d8((int *)&local_10c,&local_124);
                      puVar5 = (uint *)((int)local_254 + 1);
                      puVar11 = local_108;
                    }
                  }
                }
                else {
                  if ((local_184[3] != 0x10) || (puVar11 == (uint *)0x0)) goto LAB_1000a4d4;
                  local_118 = (void *)0x0;
                  iVar7 = recovered_1000ad98((int *)&local_190,2,(uint *)&local_118);
                  iVar12 = 1;
                  if (iVar7 != 0) {
                    local_124 = (int *)local_10c[(int)puVar11 + -1];
                    local_264 = (uint *)((int)local_118 + 3);
                    puVar5 = (uint *)0x0;
                    while( true ) {
                      puVar1 = local_264;
                      if (local_264 > puVar5) {
                        puVar1 = local_250;
                      }
                      if (local_264 <= puVar5 || puVar1 <= puVar11) break;
                      local_90 = 9;
                      local_254 = puVar5;
                      recovered_1000b780((int *)&local_10c,&local_124);
                      puVar5 = (uint *)((int)local_254 + 1);
                      puVar11 = local_108;
                    }
                    iVar12 = 5;
                  }
                }
              } while (iVar12 == 5);
              iVar10 = 0;
              piVar14 = local_260;
LAB_1000a5f4:
              local_108 = (uint *)0x0;
              recovered_100066b0(local_10c);
            }
            local_bc = 0;
            recovered_100066b0(local_c0);
            local_a8 = 0;
            recovered_100066b0(local_ac);
            iVar12 = 1;
            puVar11 = local_268;
            param_1 = local_26c;
            if (iVar10 != 0) {
              local_90 = 0x10;
              iVar7 = recovered_1000ae8c((int *)&local_190,(int)local_1f0,(int)local_248,piVar14);
              iVar12 = 1;
              param_1 = local_26c;
              piVar14 = local_260;
              if (iVar7 != 0) {
                iVar12 = 3;
              }
LAB_1000a664:
              puVar11 = local_268;
            }
          }
          local_204 = 0;
          recovered_100066b0(local_208);
          local_1ac = 0;
          recovered_100066b0(local_1b0);
LAB_1000a220:
          if (iVar12 != 3) goto LAB_1000a85c;
          if (local_24c != 0) goto LAB_1000a884;
        }
        if (local_198 != 1) {
          if (local_198 == 0) {
            uVar8 = local_184[2] & 7;
            local_24c = local_194;
            local_184[2] = local_184[2] & 0xfffffff8;
            *puVar11 = *puVar11 >> uVar8 | (puVar11[1] << 1) << (uVar8 ^ 0x1f);
            puVar11[1] = puVar11[1] >> uVar8;
            local_100 = (void *)0x0;
            local_184[3] = 0;
            local_1f0[0] = 0;
            local_248[0] = 0;
            iVar7 = recovered_1000ad98((int *)&local_190,8,(uint *)&local_100);
            iVar12 = 1;
            if ((((iVar7 != 0) &&
                 (iVar7 = recovered_1000ad98((int *)&local_190,8,local_184 + 3), iVar7 != 0)) &&
                (iVar7 = recovered_1000ad98((int *)&local_190,8,local_1f0), iVar7 != 0)) &&
               (iVar7 = recovered_1000ad98((int *)&local_190,8,local_248), iVar7 != 0)) {
              uVar8 = (uint)local_100 | local_184[3] << 8;
              local_268 = puVar11;
              if (((local_1f0[0] | local_248[0] << 8) ^ uVar8) == 0xffff) {
                for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                  local_ac = (void *)0x0;
                  iVar7 = recovered_1000ad98((int *)&local_190,8,(uint *)&local_ac);
                  if (iVar7 == 0) goto LAB_1000a4cc;
                  local_10c = (undefined4 *)CONCAT31(PF_PART3(local_10c, 1),(char)local_ac);
                  local_90 = 0xffffffff;
                  recovered_1000b104(piVar14,(undefined1 *)&local_10c);
                }
                iVar12 = 3;
              }
LAB_1000a4cc:
              puVar11 = local_268;
            }
            goto LAB_1000a220;
          }
          goto LAB_1000a85c;
        }
        DataMemoryBarrier(0xb);
        puVar5 = DAT_1000aa88;
        piVar3 = DAT_1000aa84;
        if ((*DAT_1000aa88 & 1) == 0) {
          local_250 = DAT_1000aa88;
          local_258 = DAT_1000aa88;
          local_25c = DAT_1000aa84;
          uVar4 = recovered_100069b8(DAT_1000aa88);
          puVar5 = local_258;
          piVar3 = local_25c;
          if (uVar4 != 0) {
            local_24c = uVar8;
            local_90 = 1;
            local_184[3] = 8;
            local_26c = param_1;
            local_268 = puVar11;
            recovered_1000b428((int *)&local_100,0x120,local_184 + 3);
            for (iVar7 = 0; iVar7 != 0x70; iVar7 = iVar7 + 1) {
              *(undefined4 *)((int)local_100 + iVar7 * 4 + 0x240) = 9;
            }
            for (iVar7 = 0; iVar7 != 0x18; iVar7 = iVar7 + 1) {
              *(undefined4 *)((int)local_100 + iVar7 * 4 + 0x400) = 7;
            }
            for (iVar7 = 0; iVar7 != 8; iVar7 = iVar7 + 1) {
              *(undefined4 *)((int)local_100 + iVar7 * 4 + 0x460) = 8;
            }
            puVar11 = local_250 + 2;
            recovered_100041e0(puVar11,0,0x51);
            local_90 = 2;
            local_254 = puVar11;
            recovered_1000b2b0((int *)&local_100,(int *)puVar11,0);
            local_fc = 0;
            recovered_100066b0(local_100);
            recovered_100069b0();
            recovered_100069c8(local_250);
            puVar5 = local_258;
            piVar3 = local_25c;
            uVar8 = local_24c;
            puVar11 = local_268;
            param_1 = local_26c;
            piVar14 = local_260;
          }
        }
        DataMemoryBarrier(0xb);
        if ((puVar5[1] & 1) == 0) {
          local_250 = puVar5 + 1;
          local_25c = piVar3;
          local_258 = puVar5;
          uVar4 = recovered_100069b8(local_250);
          puVar5 = local_258;
          if (uVar4 != 0) {
            local_90 = 3;
            local_184[3] = 5;
            local_26c = param_1;
            local_268 = puVar11;
            local_24c = uVar8;
            recovered_1000b428((int *)&local_100,0x20,local_184 + 3);
            piVar14 = DAT_1000aa84;
            recovered_100041e0(DAT_1000aa84,0,0x51);
            local_90 = 4;
            recovered_1000b2b0((int *)&local_100,piVar14,0);
            local_fc = 0;
            recovered_100066b0(local_100);
            recovered_100069b0();
            recovered_100069c8(local_250);
            puVar5 = local_258;
            uVar8 = local_24c;
            puVar11 = local_268;
            param_1 = local_26c;
            piVar14 = local_260;
          }
        }
        local_90 = 0xffffffff;
        iVar7 = recovered_1000ae8c((int *)&local_190,(int)(puVar5 + 2),(int)DAT_1000aa84,piVar14);
        if (iVar7 == 0) goto LAB_1000a85c;
      } while (uVar8 == 0);
LAB_1000a884:
      bVar6 = false;
      if ((local_188 == local_18c) && (local_184[2] < 8)) {
        uVar8 = recovered_10009a88((uint *)(*param_1 + param_1[1] + -4));
        uVar4 = recovered_1000b06c(param_1[3],param_1[4]);
        bVar6 = uVar4 == uVar8;
      }
    }
  }
LAB_1000a860:
  recovered_10006b94(&uStack_94);
  return bVar6;
LAB_1000a85c:
  bVar6 = false;
  goto LAB_1000a860;
}

#undef DAT_1000aa78
#undef DAT_1000aa7c
#undef DAT_1000aa80
#undef DAT_1000aa84
#undef DAT_1000aa88
#undef DAT_1000aa8c
#undef DAT_1000aa90
#undef DAT_1000aa94
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_208
#undef local_204
#undef local_1f8
#undef local_1f0
#undef local_1b0
#undef local_1ac
#undef local_198
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_138
#undef local_134
#undef local_124
#undef local_120
#undef local_118
#undef local_114
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_c0
#undef local_bc
#undef local_ac
#undef auStack_280
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
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x74bcU)
 */

undefined4 recovered_1000aa98(int param_1,void *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = 0;
  if ((!CARRY4(param_3,uVar2)) && (uVar2 + param_3 <= *(uint *)(param_1 + 0x10))) {
    recovered_10004170(param_2,(void *)(*(int *)(param_1 + 0xc) + uVar2),param_3);
    uVar1 = 1;
    *(uint *)(param_1 + 0x18) = uVar2 + param_3;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7508U)
 */

undefined4
recovered_1000aae4(undefined4 param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                  uint param_6)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  switch((uintptr_t)(param_1)) {
  case 1:
    uVar8 = param_5;
    if (param_6 < param_5) {
      uVar8 = param_6;
    }
    iVar2 = param_5 - uVar8;
    pcVar4 = param_3;
    pcVar3 = param_2;
    for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    }
    pcVar3 = param_2 + uVar8;
    pcVar4 = param_3 + uVar8;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar3 = pcVar3[-param_6] + *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    break;
  case 2:
    if (param_4 != (char *)0x0) {
      for (; param_5 != 0; param_5 = param_5 - 1) {
        *param_2 = *param_4 + *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      return 1;
    }
  case 0:
    recovered_10004170(param_2,param_3,param_5);
    break;
  case 3:
    if (param_4 == (char *)0x0) {
      if (param_5 != 0) {
        uVar8 = param_5;
        if (param_6 < param_5) {
          uVar8 = param_6;
        }
        iVar2 = param_5 - uVar8;
        pcVar4 = param_3;
        pcVar3 = param_2;
        for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        pcVar3 = param_2 + uVar8;
        pcVar4 = param_3 + uVar8;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar3 = *pcVar4 + ((byte)pcVar3[-param_6] >> 1);
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        uVar6 = 0;
        if (param_6 <= uVar8) {
          uVar6 = (uint)(byte)param_2[uVar8 - param_6];
        }
        param_2[uVar8] = param_3[uVar8] + (char)(uVar6 + (byte)param_4[uVar8] >> 1);
      }
    }
    break;
  case 4:
    if (param_4 == (char *)0x0) {
      uVar8 = param_5;
      if (param_6 < param_5) {
        uVar8 = param_6;
      }
      iVar2 = param_5 - uVar8;
      pcVar4 = param_3;
      pcVar3 = param_2;
      for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      pcVar3 = param_2 + uVar8;
      pcVar4 = param_3 + uVar8;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar3 = pcVar3[-param_6] + *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        uVar6 = 0;
        uVar7 = 0;
        if (param_6 <= uVar8) {
          uVar7 = (uint)(byte)param_4[uVar8 - param_6];
          uVar6 = (uint)(byte)param_2[uVar8 - param_6];
        }
        uVar11 = (uint)(byte)param_4[uVar8];
        uVar1 = uVar6 - uVar7;
        uVar9 = (uVar1 + uVar11) - uVar7;
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
        }
        if ((int)uVar1 < 0) {
          uVar1 = -uVar1;
        }
        uVar10 = uVar11;
        if (uVar9 < uVar1) {
          uVar10 = uVar7;
        }
        uVar11 = uVar11 - uVar7;
        if ((int)uVar11 < 0) {
          uVar11 = -uVar11;
        }
        if (uVar9 < uVar11) {
          uVar6 = uVar10;
        }
        cVar5 = (char)uVar6;
        if (uVar1 < uVar11) {
          cVar5 = (char)uVar10;
        }
        param_2[uVar8] = param_3[uVar8] + cVar5;
      }
    }
    break;
  default:
    return 0;
  }
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x779cU)
 */

void recovered_1000ad78(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000b998(param_1 + 3);
  recovered_1000b998(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77bcU)
 */

undefined4 recovered_1000ad98(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;

  uVar6 = 0;
  if (param_2 < 0x19) {
    puVar7 = (uint *)(param_1 + 3);
    uVar3 = param_1[5];
    while (uVar3 < param_2) {
      uVar2 = param_1[2];
      if ((uint)param_1[1] <= uVar2) {
        return 0;
      }
      param_1[2] = uVar2 + 1;
      uVar4 = uVar3 - 0x20;
      bVar1 = *(byte *)(*param_1 + uVar2);
      param_1[5] = uVar3 + 8;
      uVar2 = (uint)bVar1 << (uVar3 & 0xff);
      if (-1 < (int)uVar4) {
        uVar2 = 0;
      }
      *puVar7 = uVar2 | *puVar7;
      uVar2 = (uint)(bVar1 >> (0x20 - uVar3 & 0xff));
      if (-1 < (int)uVar4) {
        uVar2 = (uint)bVar1 << (uVar4 & 0xff);
      }
      param_1[4] = uVar2 | param_1[4];
      uVar3 = uVar3 + 8;
    }
    uVar2 = param_1[4];
    uVar3 = -1 << (param_2 & 0xff);
    uVar5 = param_2 - 0x20;
    uVar4 = *puVar7;
    if (-1 < (int)uVar5) {
      uVar3 = 0;
    }
    uVar6 = 1;
    *param_3 = uVar4 & ~uVar3;
    uVar3 = uVar2 >> (param_2 & 0xff);
    if (-1 < (int)uVar5) {
      uVar3 = 0;
    }
    param_1[4] = uVar3;
    uVar3 = uVar4 >> (param_2 & 0xff) | uVar2 << (0x20 - param_2 & 0xff);
    if (-1 < (int)uVar5) {
      uVar3 = uVar2 >> (uVar5 & 0xff);
    }
    *puVar7 = uVar3;
    param_1[5] = param_1[5] - param_2;
  }
  return uVar6;
}


/* Recover literal values and length/distance extras from the native DEFLATE loop.
 * Pooka's Free Software License. */
undefined4 recovered_1000ae8c(int *reader,int literal_table,int distance_table,int *output) {
 static const uint length_extra[]={0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0};
 static const uint length_base[]={3,4,5,6,7,8,9,10,11,13,15,17,19,23,27,31,35,43,51,59,67,83,99,115,131,163,195,227,258};
 static const uint distance_extra[]={0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13};
 static const uint distance_base[]={1,2,3,4,5,7,9,13,17,25,33,49,65,97,129,193,257,385,513,769,1025,1537,2049,3073,4097,6145,8193,12289,16385,24577};
 for(;;){
  uint symbol=0,extra=0,distance_symbol=0;
  if(!recovered_1000b164(reader,literal_table,&symbol))return 0;
  if(symbol<256){byte literal=(byte)symbol;recovered_1000b104(output,&literal);continue;}
  if(symbol==256)return 1;
  if(symbol>285)return 0;
  uint code=symbol-257,length=length_base[code];
  if(length_extra[code]){if(!recovered_1000ad98(reader,length_extra[code],&extra))return 0;length+=extra;}
  if(!recovered_1000b164(reader,distance_table,&distance_symbol)||distance_symbol>=30)return 0;
  uint distance=distance_base[distance_symbol];extra=0;
  if(distance_extra[distance_symbol]){if(!recovered_1000ad98(reader,distance_extra[distance_symbol],&extra))return 0;distance+=extra;}
  if(!distance||distance>(uint)output[1])return 0;
  while(length--){byte value=*(byte *)(uintptr_t)(output[0]+output[1]-distance);recovered_1000b104(output,&value);}
 }
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7a74U)
 */

int recovered_1000b050(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000b948((undefined4 *)(param_1 + 0x40));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7a90U)
 */

uint recovered_1000b06c(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar5 = 1;
  uVar4 = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar6 + uVar3) {
    uVar6 = param_2 - uVar3;
    if (0x15af < uVar6) {
      uVar6 = 0x15b0;
    }
    pbVar1 = (byte *)(param_1 + uVar3);
    for (uVar2 = uVar6; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar5 = uVar5 + *pbVar1;
      uVar4 = uVar5 + uVar4;
      pbVar1 = pbVar1 + 1;
    }
    uVar5 = recovered_1000365c(uVar5,0xfff1);
    uVar4 = recovered_1000365c(uVar4,0xfff1);
  }
  return uVar5 | uVar4 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7b28U)
 */

int recovered_1000b104(int *param_1,undefined1 *param_2)

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
    recovered_10009c28(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


#define local_24 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7b88U)
 */

byte recovered_1000b164(int *param_1,int param_2,uint *param_3)

{
  unsigned char frame[84] = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte unaff_r8;
  uint uVar7;
  int iVar8;

  bVar1 = 0;
  if ((*(char *)(param_2 + 0x50) == '\x01') && (uVar7 = *(uint *)(param_2 + 0x4c), uVar7 != 0)) {
    iVar4 = 0;
    iVar8 = 0;
    uVar5 = 0;
    for (uVar6 = 1; uVar6 <= uVar7; uVar6 = uVar6 + 1) {
      unaff_r8 = 0;
      local_24 = 0;
      iVar2 = recovered_1000ad98(param_1,1,&local_24);
      if (iVar2 == 0) break;
      iVar2 = *(int *)(param_2 + uVar6 * 4);
      local_24 = local_24 | uVar5;
      uVar3 = iVar2 + iVar4;
      if (local_24 < uVar3) {
        uVar5 = (local_24 - iVar4) + iVar8;
        if (uVar5 < *(uint *)(param_2 + 0x44)) {
          unaff_r8 = 1;
          *param_3 = (uint)*(ushort *)(*(int *)(param_2 + 0x40) + uVar5 * 2);
        }
        break;
      }
      iVar8 = iVar2 + iVar8;
      uVar7 = *(uint *)(param_2 + 0x4c);
      uVar5 = local_24 << 1;
      iVar4 = uVar3 * 2;
    }
    bVar1 = uVar6 <= uVar7 & unaff_r8;
  }
  return bVar1;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7c74U)
 */

int recovered_1000b250(int *param_1,undefined1 *param_2)

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
    recovered_10009c28(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


#define local_b0 (*(uint (*)[16])(frame + 16))
#define local_70 (*(undefined2 (*)[32])(frame + 80))
#define local_30 (*(void * *)(frame + 144))
#define local_2c (*(undefined4 *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7cd4U)
 */

undefined4 recovered_1000b2b0(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[224] = {0};

  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  recovered_100041e0(local_70,0,0x51);
  recovered_1000b584(param_2,local_70);
  local_2c = 0;
  recovered_100066b0(local_30);
  iVar2 = param_1[1];
  puVar3 = (uint *)*param_1;
  iVar4 = iVar2 << 2;
  while (iVar4 != 0) {
    uVar5 = *puVar3;
    if (0xf < uVar5) goto LAB_1000b378;
    iVar4 = iVar4 + -4;
    puVar3 = puVar3 + 1;
    param_2[uVar5] = param_2[uVar5] + 1;
    if (uVar5 < (uint)param_2[0x13]) {
      uVar5 = param_2[0x13];
    }
    param_2[0x13] = uVar5;
  }
  if (*param_2 == iVar2) {
LAB_1000b414:
    *(char *)(param_2 + 0x14) = (char)param_3;
  }
  else {
    iVar4 = 1;
    iVar2 = 1;
    do {
      if (iVar2 == 0x10) {
        local_b0[1] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        local_b0[2] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        local_b0[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar5 = 0;
        local_b0[0] = 0;
        local_b0[4] = 0;
        local_b0[8] = 0;
        local_b0[0xc] = 0;
        local_b0[5] = local_b0[1];
        local_b0[6] = local_b0[2];
        local_b0[7] = local_b0[3];
        local_b0[9] = local_b0[1];
        local_b0[10] = local_b0[2];
        local_b0[0xb] = local_b0[3];
        local_b0[0xd] = local_b0[1];
        local_b0[0xe] = local_b0[2];
        local_b0[0xf] = local_b0[3];
        for (iVar4 = 1; iVar4 != 0x10; iVar4 = iVar4 + 1) {
          iVar2 = param_2[iVar4];
          local_b0[iVar4] = uVar5;
          uVar5 = iVar2 + uVar5;
        }
        local_70[0] = 0;
        recovered_1000b5c0(param_2 + 0x10,uVar5,local_70);
        iVar8 = param_2[0x10];
        iVar4 = *param_1;
        iVar2 = param_1[1];
        for (iVar7 = 0; iVar2 != iVar7; iVar7 = iVar7 + 1) {
          iVar6 = *(int *)(iVar4 + iVar7 * 4);
          if (iVar6 != 0) {
            uVar5 = local_b0[iVar6];
            local_b0[iVar6] = uVar5 + 1;
            *(short *)(iVar8 + uVar5 * 2) = (short)iVar7;
          }
        }
        param_3 = 1;
        goto LAB_1000b414;
      }
      piVar1 = param_2 + iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 * 2 - *piVar1;
    } while (-1 < iVar4);
LAB_1000b378:
    param_3 = 0;
  }
  return param_3;
}

#undef local_b0
#undef local_70
#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7e4cU)
 */

int * recovered_1000b428(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000b454(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7e78U)
 */

void recovered_1000b454(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000b4b8(param_1,param_2);
    return;
  }
  recovered_1000b510(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7edcU)
 */

void recovered_1000b4b8(int *param_1,uint param_2)

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
    recovered_1000b510(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x7f34U)
 */

void recovered_1000b510(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000b570(param_2);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined4 *)(uVar1 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_100066b0((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7f94U)
 */

uint recovered_1000b570(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006680(param_1 << 2);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7fa8U)
 */

void * recovered_1000b584(void *param_1,void *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10004170(param_1,param_2,0x40);
  recovered_1000b5cc((undefined4 *)((int)param_1 + 0x40),(undefined4 *)((int)param_2 + 0x40));
  *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)((int)param_2 + 0x4c);
  *(undefined1 *)((int)param_1 + 0x50) = *(undefined1 *)((int)param_2 + 0x50);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7fe4U)
 */

void recovered_1000b5c0(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000b620(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7ff0U)
 */

undefined4 * recovered_1000b5cc(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100066b0((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x8044U)
 */

void recovered_1000b620(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000b690(param_1,param_2);
    return;
  }
  recovered_1000b6f4(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x80b4U)
 */

void recovered_1000b690(int *param_1,uint param_2)

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
    recovered_1000b6f4(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x8118U)
 */

void recovered_1000b6f4(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000b76c(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined2 *)(uVar1 + iVar3);
      puVar6 = (undefined2 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 2;
      *puVar5 = *puVar6;
    }
    recovered_100066b0((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8190U)
 */

uint recovered_1000b76c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10006680(param_1 << 1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x81a4U)
 */

int recovered_1000b780(int *param_1,undefined4 *param_2)

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
    recovered_1000b510(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x81fcU)
 */

int recovered_1000b7d8(int *param_1,undefined4 *param_2)

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
    recovered_1000b510(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8254U)
 */

int * recovered_1000b830(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000b868(param_1,0,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x828cU)
 */

int recovered_1000b868(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_2 - iVar2 >> 2;
  }
  uVar1 = (uint)((int)param_4 - (int)param_3) >> 2;
  if (uVar1 != 0) {
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    uVar8 = uVar7;
    if (uVar4 < uVar7 + uVar1) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar8 = uVar4;
        uVar4 = uVar8 << 1;
      } while (uVar8 < uVar7 + uVar1);
      recovered_1000b510(param_1,uVar8);
      uVar7 = param_1[1];
      uVar8 = uVar7;
    }
    while (uVar6 < uVar7) {
      puVar5 = (undefined4 *)(*param_1 + (uVar7 - 1) * 4);
      puVar5[uVar1] = *puVar5;
      uVar7 = uVar7 - 1;
    }
    iVar2 = uVar6 << 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + iVar2) = *param_3;
      iVar2 = iVar2 + 4;
    }
    param_1[1] = uVar8 + uVar1;
    iVar2 = *param_1;
  }
  iVar3 = iVar2 + uVar6 * 4;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x836cU)
 */

undefined4 * recovered_1000b948(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100066b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8390U)
 */

undefined4 * recovered_1000b96c(undefined4 *param_1,uint in_r1)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_10009d0c(param_1,in_r1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x83bcU)
 */

undefined4 * recovered_1000b998(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100066b0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x83e0U)
 */

undefined4 * recovered_1000b9bc(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_10009b50(param_1,0,param_2,param_3);
  return param_1;
}

