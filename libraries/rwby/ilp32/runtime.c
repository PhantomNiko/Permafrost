#include "word_divide.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

uint32_t recovered_10004350(uint32_t a,uint32_t b){uint32_t rest;return pf_word_divide(a,b,0);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10004358(uint param_1,uint param_2,uint *param_3)

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
uint32_t recovered_100043d0(uint32_t a,uint32_t b){uint32_t rest;return (pf_word_divide(a,b,&rest),rest);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

uint32_t recovered_100043f4(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,0);}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

uint32_t recovered_1000442c(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,1);}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_10004470(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


/* Instruction-equivalent unsigned conversion without undefined word shifts.
 * Pooka's Free Software License. */
uint64_t recovered_10004578(uint32_t low,uint32_t high){
 double value=pf_bits_double(((uint64_t)high<<32)|low),power=9223372036854775808.0;
 uint64_t result=0;
 if(!(value>0.0))return 0;
 for(int bit=63;bit>=0;bit--){
  if(power<=value){value-=power;result|=(uint64_t)1<<bit;}
  power*=0.5;
 }
 return result;
}


/* Signed conversion preserves the native magnitude and negation behavior.
 * Pooka's Free Software License. */
uint64_t recovered_10004600(uint32_t low,uint32_t high){
 if((high&0x7ff00000U)==0x7ff00000U&&((high&0xfffffU)||low))return 0;
 uint64_t magnitude=recovered_10004578(low,high&0x7fffffffU);
 return high>>31?0-magnitude:magnitude;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_1000464c(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004578(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_1000465c(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004600(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

uint recovered_1000466c(uint param_1,uint param_2)

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

uint recovered_100046a0(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < 0) {
    uVar1 = recovered_1000466c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return uVar1;
  }
  uVar1 = recovered_1000466c(param_1,param_2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_100046c8(uint in_r0,uint in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_1000466c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_100046e4(int in_r0,int in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;

  uVar1 = recovered_100046a0(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,uVar1));
}


#undef DAT_10004710
#define DAT_10004710 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_10004700(int *in_r3)

{
  unsigned char frame[64] = {0};

  *DAT_10004710 = 0;
  recovered_10004714(in_r3);
  return;
}

#undef DAT_10004710

#undef DAT_100048f4
#define DAT_100048f4 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_100048f8
#define DAT_100048f8 (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define apcStack_ac (*(char * (*)[34])(frame + 16))
#define local_24 (*(int *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_10004714(int *in_r3)

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

  pcVar1 = DAT_100048f8;
  local_24 = 0;
  if (*DAT_100048f8 == '\0') {
    apcStack_ac[1] = DAT_100048f8;
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar6 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_100048f4[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      pcVar8 = (char *)DAT_100048f4[uVar6 * 2 + 2];
      uVar5 = DAT_100048f4[uVar6 * 2 + 3];
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
      recovered_100062e4((uint)ppcVar4[-1],(uint)*ppcVar4,&local_24,in_r3);
      in_r3 = extraout_r3;
      ppcVar4 = ppcVar4 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar6 = 0x4000000;
      if (0x300000 < *DAT_100048f4) {
        uVar6 = *DAT_100048f4 & 0xfffffff0;
      }
      uVar10 = uVar6 - 0x300000;
      if (uVar6 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_100062e4(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_100048f4
#undef DAT_100048f8
#undef EXT_00000010
#undef apcStack_ac
#undef local_24

#undef DAT_1000493c
#define DAT_1000493c (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_100048fc(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10004714(in_r3);
  iVar1 = 0;
  piVar2 = DAT_1000493c;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_1000493c

#undef DAT_1000498c
#define DAT_1000498c (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_10004940(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10004714(in_r3);
  iVar1 = DAT_1000498c;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_1000498c

#undef DAT_100049c4
#define DAT_100049c4 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10004990(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10004714(in_r3);
  iVar1 = 0;
  piVar2 = DAT_100049c4;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_100049c4

#undef DAT_10004a04
#define DAT_10004a04 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_100049c8(int *in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10004714(in_r3);
  iVar1 = DAT_10004a04;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10004a04

#undef DAT_10004aa8
#define DAT_10004aa8 (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_10004a08(int param_1,int *in_r3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10004714(in_r3);
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10004aa8;
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

#undef DAT_10004aa8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_10004aac(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10004b08(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10004b60(uint param_1,int param_2,uint param_3)

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


/* Restoring 64-bit division using native integer operations.
 * Pooka's Free Software License. */
uint64_t recovered_10004bac(uint32_t low,uint32_t high,uint32_t divisor_low,uint32_t divisor_high){
 uint64_t value=((uint64_t)high<<32)|low,divisor=((uint64_t)divisor_high<<32)|divisor_low;
 uint64_t quotient=0,remainder=0;
 if(!divisor)__builtin_trap();
 for(int bit=63;bit>=0;bit--){
  uint64_t carry=remainder>>63;
  remainder=(remainder<<1)|((value>>bit)&1);
  if(carry||remainder>=divisor){remainder-=divisor;quotient|=(uint64_t)1<<bit;}
 }
 return quotient;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_10004bc8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


/* Restoring 64-bit division using native integer operations.
 * Pooka's Free Software License. */
uint64_t recovered_10004cd0(uint32_t low,uint32_t high,uint32_t divisor_low,uint32_t divisor_high){
 uint64_t value=((uint64_t)high<<32)|low,divisor=((uint64_t)divisor_high<<32)|divisor_low;
 uint64_t quotient=0,remainder=0;
 if(!divisor)__builtin_trap();
 for(int bit=63;bit>=0;bit--){
  uint64_t carry=remainder>>63;
  remainder=(remainder<<1)|((value>>bit)&1);
  if(carry||remainder>=divisor){remainder-=divisor;quotient|=(uint64_t)1<<bit;}
 }
 return remainder;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_10004d04(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10004bc8((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_10004d7c(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_10004bc8((param_1 ^ uVar2) - uVar2,
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

void recovered_10004e00(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_10004e08(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10004e14(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10004e58(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10004e98(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)(PF_MODULE_WMAP_BASE+0x00U);
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10004ee4(void *out,void *data,ulong size)

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

void * recovered_10004f00(void *out,void *data,ulong size)

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

void * recovered_10004f54(void *out,int value,ulong size)

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

void recovered_10004f6c(undefined1 *param_1,int param_2)

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

void recovered_10004f84(undefined1 *param_1,int param_2)

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

int recovered_10004f9c(void *left,void *right,ulong size)

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

bool recovered_10004fc4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_10004fd8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_10004fec(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_10005004(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_10005030(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_10005050(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_10005064(int param_1)

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

int recovered_10005074(int param_1)

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

ulong recovered_10005084(char *text)

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

int recovered_100050b4(char *left,char *right)

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

int recovered_100050e0(char *left,char *right)

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

void recovered_100050e4(int param_1,int param_2)

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

void * recovered_10005100(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10005084(param_1);
    out = recovered_10004e14(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10004ee4(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_10005148(char *param_1,char param_2)

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

int recovered_10005174(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_10005148(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_100051b8(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10005148(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_100051f8(char *param_1,char *param_2)

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


#undef DAT_10005248
#define DAT_10005248 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_10005240(void)

{
  unsigned char frame[64] = {0};

  return DAT_10005248;
}

#undef DAT_10005248

#undef DAT_10005254
#define DAT_10005254 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_1000524c(void)

{
  unsigned char frame[64] = {0};

  return DAT_10005254;
}

#undef DAT_10005254

#undef DAT_1000526c
#define DAT_1000526c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_10005258(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_1000526c;
  }
  return;
}

#undef DAT_1000526c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_10005270(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_100052b0(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_10005348(double left,double right)

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

double recovered_10005380(double left,double right)

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

double recovered_100053fc(double value)

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

double recovered_1000542c(double value)

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

double recovered_10005470(double value)

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


#undef DAT_10005580
#define DAT_10005580 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10005588
#define DAT_10005588 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_100054c0(double value)

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

#undef DAT_10005580
#undef DAT_10005588

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_10005590(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10004600(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10005610
#define DAT_10005610 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_10005618
#define DAT_10005618 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_100055c0(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_10005620(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_10005610
#undef DAT_10005618

#undef DAT_10005658
#define DAT_10005658 (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10005660
#define DAT_10005660 (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10005668
#define DAT_10005668 (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_10005670
#define DAT_10005670 (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

double recovered_10005620(double in_d0)

{
  unsigned char frame[64] = {0};

  for (; DAT_10005658 < in_d0; in_d0 = in_d0 + DAT_10005670) {
  }
  for (; in_d0 < DAT_10005660; in_d0 = in_d0 + DAT_10005668) {
  }
  return in_d0;
}

#undef DAT_10005658
#undef DAT_10005660
#undef DAT_10005668
#undef DAT_10005670

#undef DAT_100056c0
#define DAT_100056c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10005678(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  dVar1 = recovered_10005620(pf_bits_double(CONCAT44(in_r1,in_r0)));
  return dVar1;
}

#undef DAT_100056c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_100056c8(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_10005720
#define DAT_10005720 (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_100056e8(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_10005720;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_10005720

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10005724(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100052b0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_10005750(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10005270(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_1000577c(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_10005380(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_100057b4(float value)

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

float recovered_100057ec(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000542c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_10005814(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_1000542c(value);
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

float recovered_10005854(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10005814(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_1000587c(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10005470(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_100058a4(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100054c0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_100058cc(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  recovered_10005590(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_100058dc(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100055c0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_10005904(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10005678(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_1000592c(float value)

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

int recovered_10005948(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_10005a70((int)(char)*pbVar1);
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

uint recovered_10005a70(int param_1)

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

int recovered_10005ab4(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_10005b10;
  }
  bVar1 = false;
LAB_10005b10:
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
    uVar3 = recovered_10005a70((int)(char)*pbVar2);
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

double recovered_10005bd4(char *text,char **end)

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
      for (; *pbVar6 - 0x30U < 10; pbVar6 = pbVar6 + 1) {
        bVar2 = true;
        iVar3 = (uint)*pbVar6 + iVar3 * 10 + -0x30;
      }
      if (bVar2) {
        recovered_10005270(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_10005d70(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10005bd4(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10006184
#define DAT_10006184 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_10005d8c(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10005de8:
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
LAB_10005e18:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_10005e1c;
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
LAB_10005ea0:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10005eb0_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10005eb0_caseD_64;
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
switchD_10005eb0_caseD_65:
      if (local_48 < 2) goto LAB_10005e1c;
      *local_44 = 0x3f;
      goto LAB_10005e18;
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
      recovered_10006218((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_10005e64;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10005eb0_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_100061c4((int *)&local_44,&local_48,&local_4c,DAT_10006184);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_100061c4((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_10005e64;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_10006134;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_10006120:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_10006120;
        }
        goto switchD_10005eb0_caseD_65;
      }
      goto switchD_10005eb0_caseD_64;
    }
    goto LAB_1000614c;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_10005e5c;
switchD_10005eb0_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10005ea0;
switchD_10005eb0_caseD_64:
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
LAB_10006134:
  uVar12 = 10;
  iVar3 = 0;
LAB_1000614c:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_10006218((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_10005e64;
switchD_10005eb0_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_10005e1c:
  pdVar7 = arguments;
LAB_10005e5c:
  local_4c = local_4c + 1;
LAB_10005e64:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_10005de8;
}

#undef DAT_10006184
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_10006188(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_10006214
#define DAT_10006214 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_100061c4(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_10006214;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10006188(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10006214

#undef DAT_100062b0
#define DAT_100062b0 (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_100062b4
#define DAT_100062b4 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_10006218(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = DAT_100062b4;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar4 = DAT_100062b0;
  }
  do {
    iVar3 = iVar1;
    uVar2 = recovered_10004350(param_4,param_5);
    bVar5 = param_5 <= param_4;
    local_40[-iVar3] = *(undefined1 *)(iVar4 + (param_4 - uVar2 * param_5));
    param_4 = uVar2;
    iVar1 = iVar3 + -1;
  } while (bVar5);
  for (; iVar3 != 1; iVar3 = iVar3 + 1) {
    recovered_10006188(param_1,param_2,param_3,local_40[-iVar3]);
  }
  return;
}

#undef DAT_100062b0
#undef DAT_100062b4
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_100062b8(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_10005d8c(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_10006348
#define DAT_10006348 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_100062e4(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_10006348 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_10006348

#undef DAT_10006398
#define DAT_10006398 (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
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

undefined4 recovered_1000634c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10006398) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10006398
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_10006448
#define DAT_10006448 (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_1000644c
#define DAT_1000644c (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_1000639c(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_1000644c;
  piVar2 = DAT_10006448;
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
LAB_1000642c:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_10006450(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_1000642c;
      }
      recovered_10006450(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10006448
#undef DAT_1000644c

#undef DAT_100064d0
#define DAT_100064d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_100064d4
#define DAT_100064d4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_100064d8
#define DAT_100064d8 (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_10006450(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_100064d4;
  size = *DAT_100064d4;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10004ee4(local_214,DAT_100064d8,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10007294(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_100064d0 != (code *)0x0)) {
      (*(code *)*DAT_100064d0)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_100064d0
#undef DAT_100064d4
#undef DAT_100064d8
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_100064dc(void)

{
  unsigned char frame[64] = {0};

  recovered_10006450(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_100064e4(void)

{
  unsigned char frame[64] = {0};

  recovered_10006450(0);
  return;
}


#undef DAT_10006534
#define DAT_10006534 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10006538
#define DAT_10006538 (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_100064ec(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10006534;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10006538;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_100062b8(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_1000639c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10006534
#undef DAT_10006538
#undef acStack_14c

#undef DAT_10006578
#define DAT_10006578 (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_1000657c
#define DAT_1000657c (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10006580
#define DAT_10006580 (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10006584
#define DAT_10006584 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10006588
#define DAT_10006588 (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_1000658c
#define DAT_1000658c (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_1000653c(void)

{
  unsigned char frame[64] = {0};

  recovered_10006590(DAT_10006578);
  recovered_10006590(DAT_1000657c);
  recovered_10006590(DAT_10006580);
  recovered_10006590(DAT_10006584);
  recovered_10006590(DAT_10006588);
  recovered_10006590(DAT_1000658c);
  return;
}

#undef DAT_10006578
#undef DAT_1000657c
#undef DAT_10006580
#undef DAT_10006584
#undef DAT_10006588
#undef DAT_1000658c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_10006590(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10005084(param_1);
  recovered_1000639c(param_1,uVar1);
  return;
}


#undef DAT_100065d4
#define DAT_100065d4 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_100065d8
#define DAT_100065d8 (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_100065b8(void)

{
  unsigned char frame[64] = {0};

  recovered_10006590(DAT_100065d4);
  recovered_10006590(DAT_100065d8);
  return;
}

#undef DAT_100065d4
#undef DAT_100065d8

#undef DAT_1000665c
#define DAT_1000665c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_100065dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_100064e4();
    iVar1 = recovered_10007294(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_1000665c != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_1000665c)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_1000665c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_10006660(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_10006668(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_1000666c(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_1000691c
#define DAT_1000691c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_10006920
#define DAT_10006920 (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10006924
#define DAT_10006924 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10006928
#define DAT_10006928 (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_1000692c
#define DAT_1000692c (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10006674(char *param_1,int param_2)

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
    goto LAB_100068b8;
  }
  iVar2 = recovered_100050b4(param_1,DAT_10006920);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10006854:
    puVar4 = recovered_10004e14(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10004f54(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_100062b8((char *)(puVar4 + 1),0xf1,DAT_1000692c,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_100050b4(param_1,DAT_10006924);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10006854;
    }
    iVar3 = recovered_100050b4(param_1,DAT_10006928);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10006854;
    }
    puVar4 = recovered_10004e14(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10004f54(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10005148(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10005148(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10005148(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10005148(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10005148(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10005148(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_10005148(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_100062b8((char *)(puVar4 + 1),0xf1,DAT_1000692c,param_1);
      recovered_10004f54(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10006930(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_1000691c = 2;
LAB_100068f0:
          recovered_10004e58(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_10005148(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_1000697c((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_100068f0;
            recovered_10004ee4((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_100068b8:
  *(undefined4 *)*DAT_1000691c = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_1000691c
#undef DAT_10006920
#undef DAT_10006924
#undef DAT_10006928
#undef DAT_1000692c
#undef auStack_a8

#undef DAT_10006978
#define DAT_10006978 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_10006930(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007294(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10006978 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10006978)(param_1,param_2);
  return uVar2;
}

#undef DAT_10006978

#undef DAT_10006a00
#define DAT_10006a00 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_1000697c(int param_1,uint param_2)

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
      pvVar2 = recovered_10004e98(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10006a00 = 0xc;
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

#undef DAT_10006a00

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_10006a04(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_10006a30(param_3);
  }
  recovered_10006674(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_10006a30(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10006dc8(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10004e58((void *)param_1[0x3f]);
    }
    recovered_10004e58(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10006a74(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_10006b14(unaff_r6);
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


#undef DAT_10006bfc
#define DAT_10006bfc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_10006b14(int *param_1)

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
        bVar1 = recovered_100065dc((int)text,0x1fe,DAT_10006bfc,0);
        if (!bVar1) goto LAB_10006bec;
        uVar3 = recovered_10005084(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_10006bec:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_10006bfc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_10006c00(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_1000639c(param_1,size);
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
        iVar3 = recovered_1000697c((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_10004f54((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10004ee4((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_10006da0
#define DAT_10006da0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_10006d0c(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10006d28;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006d20;
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
LAB_10006d20:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10006d28:
  *(undefined4 *)*DAT_10006da0 = 0x16;
  return 0xffffffff;
}

#undef DAT_10006da0

#undef DAT_10006dc4
#define DAT_10006dc4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10006da4(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10006dc4 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10006dc4

#undef DAT_10006e3c
#define DAT_10006e3c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_10006dc8(uint *param_1)

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
      iVar1 = recovered_10006fd8(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10006e3c = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_10006e3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_10006e40(int param_1)

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

undefined1 recovered_10006e50(int param_1)

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

void recovered_10006e60(int param_1)

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

void recovered_10006e7c(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10006ee4
#define DAT_10006ee4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_10006ea0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_10006ee8(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10006ee4 = uVar2;
  return 0xffffffff;
}

#undef DAT_10006ee4

#undef DAT_10006f28
#define DAT_10006f28 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_10006ee8(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007294(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_10006f28 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10006f28)(param_1);
  return uVar2;
}

#undef DAT_10006f28

#undef DAT_10006fd4
#define DAT_10006fd4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_10006f2c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10004f54(&local_20,0,0xc);
    iVar1 = recovered_10006930(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_10006fd8(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_10006ee8(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10006fd4 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10006fd4 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10006fd4
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_10007028
#define DAT_10007028 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_10006fd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007294(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_10007028 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10007028)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_10007028

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_1000702c(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_10004f54(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10006930(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_10004e14(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10004ee4(out,unaff_r5,unaff_r6);
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

bool recovered_100070e4(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_10006fd8(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_10007124(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_1000712c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_10007130(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_10007138(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_10007140(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_10007148(int param_1,char param_2,int param_3)

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

int recovered_10007170(char *left,char *right,ulong size)

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


#undef DAT_10007248
#define DAT_10007248 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_1000724c
#define DAT_1000724c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_10007250
#define DAT_10007250 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_10007254
#define DAT_10007254 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_10007258
#define DAT_10007258 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_1000725c
#define DAT_1000725c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_10007260
#define DAT_10007260 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_10007264
#define DAT_10007264 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_10007268
#define DAT_10007268 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_100071b0(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_10007268;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_100071c4_caseD_0;
  case 2:
    return DAT_1000724c;
  case 5:
    return DAT_10007250;
  case 9:
    return DAT_10007254;
  case 0xc:
    return DAT_10007258;
  case 0xd:
    return DAT_1000725c;
  default:
    if (param_1 == 0x11) {
      return DAT_10007260;
    }
    if (param_1 == 0x16) {
      return DAT_10007248;
    }
switchD_100071c4_caseD_0:
    return DAT_10007264;
  }
}

#undef DAT_10007248
#undef DAT_1000724c
#undef DAT_10007250
#undef DAT_10007254
#undef DAT_10007258
#undef DAT_1000725c
#undef DAT_10007260
#undef DAT_10007264
#undef DAT_10007268

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_1000726c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10007274(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10007290
#define DAT_10007290 (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_1000727c(void)

{
  unsigned char frame[64] = {0};

  *DAT_10007290 = *DAT_10007290 + 1;
  return;
}

#undef DAT_10007290

#undef DAT_100072e0
#define DAT_100072e0 (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
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

undefined4 recovered_10007294(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_100072e0) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_100072e0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_100072e4(int param_1)

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

undefined4 recovered_100072f4(undefined4 *param_1)

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

int recovered_1000730c(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_100073a4
#define DAT_100073a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_100073a8
#define DAT_100073a8 (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_100073ac
#define DAT_100073ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
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

void recovered_1000732c(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_100073ac;
  local_20 = DAT_100073a4;
  local_18 = DAT_100073a8 + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_100078f0(&uStack_3c);
  recovered_10004e00();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_100073a4
#undef DAT_100073a8
#undef DAT_100073ac
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

undefined4 recovered_100073b0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_100073b8(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100073c8(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_1000732c();
}


#undef DAT_100282b8
#define DAT_100282b8 (*(int *)(((uintptr_t)pf_module_state + 0x23f68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

uint recovered_100073c8(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100282b8;
  DAT_100282b8 = param_1;
  uVar1 = recovered_100077ac(param_1);
  return uVar1;
}

#undef DAT_100282b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_100073f4(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10004e14(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10004e00();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_10007420(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10004e14(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10004e00();
  }
  return pvVar1;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10007424(void *pointer)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100074e0;
  local_78 = DAT_100074d8;
  local_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10007598
#define DAT_10007598 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_1000759c
#define DAT_1000759c (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_100075a0
#define DAT_100075a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
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

void recovered_100074e4(void *pointer)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100075a0;
  local_78 = DAT_10007598;
  local_70 = DAT_1000759c + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10007598
#undef DAT_1000759c
#undef DAT_100075a0
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_10007658
#define DAT_10007658 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_1000765c
#define DAT_1000765c (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_10007660
#define DAT_10007660 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_100075a4(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10007660;
  local_78 = DAT_10007658;
  local_70 = DAT_1000765c + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(param_1);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10007658
#undef DAT_1000765c
#undef DAT_10007660
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10007718
#define DAT_10007718 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_1000771c
#define DAT_1000771c (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_10007720
#define DAT_10007720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_10007664(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10007720;
  local_78 = DAT_10007718;
  local_70 = DAT_1000771c + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(param_1);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10007718
#undef DAT_1000771c
#undef DAT_10007720
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_10007724(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_1000772c(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_1000773c(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_1000774c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_10007750(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_10004e14(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_1000732c();
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

void recovered_1000779c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004e58((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_100077ac(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_1000780c
#define DAT_1000780c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_100077b4(void)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)*DAT_1000780c;
  if (pointer == (void *)0x0) {
    return;
  }
  *DAT_1000780c = *(undefined4 *)((int)pointer + 8);
  *(undefined4 *)((int)pointer + 8) = 0;
  if (*(char *)((int)pointer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10004e58(pointer);
  return;
}

#undef DAT_1000780c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_10007810(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10007838((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_100078b4
#define DAT_100078b4 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10007838(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_100078b4;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_1000732c();
    }
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10007de0((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
                    /* WARNING: Subroutine does not return */
  recovered_10007974(param_1);
}

#undef DAT_100078b4
#undef local_28
#undef local_24
#undef local_20

#undef DAT_100078ec
#define DAT_100078ec (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

void recovered_100078b8(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_100078ec;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_1000732c();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10007838(puVar1);
}

#undef DAT_100078ec

#undef DAT_10007904
#define DAT_10007904 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

uint recovered_100078f0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10007904;
  *param_1 = *DAT_10007904;
  *puVar1 = param_1;
  return (uint)param_1;
}

#undef DAT_10007904

#undef DAT_10007934
#define DAT_10007934 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_10007908(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10007934;
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

#undef DAT_10007934

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10007938(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007838(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10007944(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000732c();
}


#undef DAT_10007970
#define DAT_10007970 (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

void recovered_10007950(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*DAT_10007970 != (int *)0x0) {
    *DAT_10007970 = *(int *)*DAT_10007970;
  }
                    /* WARNING: Subroutine does not return */
  recovered_10007974(param_1);
}

#undef DAT_10007970

#undef DAT_10007a1c
#define DAT_10007a1c (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10007974(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = DAT_10007a1c;
  piVar4 = (int *)*DAT_10007a1c;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_1000732c();
    }
    if (piVar4 == (int *)param_1[3]) break;
    recovered_10007de0((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_100072e4((int)piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

#undef DAT_10007a1c
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_10007a20(undefined4 *in_r0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007950(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_10007a2c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_10007a34(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000732c();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_10007a40(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10007a80(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_10007b24
#define DAT_10007b24 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_10007a80(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_10007b24 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10007b24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_10007b28(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_10007b2c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_10007b34(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_10007b48(int param_1)

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

bool recovered_10007b84(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10007bb0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_10007bcc(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_10007be8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_10007c04(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_10007c20(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100053fc(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_10007c78(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10007cc4;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10007cc4:
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

ulonglong recovered_10007ddc(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10007cc4;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10007cc4:
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

#undef DAT_10007ff8
#define DAT_10007ff8 (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_10007de0(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10007ffc((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_10008128(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_10008128(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_10008128(&local_24);
        uVar6 = recovered_10008128(&local_24);
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
            uVar6 = recovered_10008188((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_10008188((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_10007ff8 + uVar5 * 4) * uVar6;
                puVar9 = recovered_10007ffc(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10007a80(param_2,(int *)puVar9);
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

#undef DAT_10007ff8
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_10007ffc(uint param_1,int *param_2)

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
    puVar3 = (uint *)recovered_10008160(iVar4,4);
    iVar2 = iVar4 + 4;
    goto LAB_100080e4;
  case 1:
    puVar3 = (uint *)recovered_10008128(param_2);
    break;
  case 2:
    puVar3 = (uint *)recovered_10008160(iVar4,2);
    iVar2 = iVar4 + 2;
    goto LAB_100080e4;
  case 4:
  case 0xc:
    puVar3 = (uint *)recovered_10008160(iVar4,8);
    iVar2 = iVar4 + 8;
LAB_100080e4:
    *param_2 = iVar2;
    break;
  default:
    goto switchD_10008030_caseD_5;
  case 9:
    puVar3 = (uint *)recovered_10008188(param_2);
    break;
  case 10:
    puVar1 = (uint *)recovered_10008160(iVar4,2);
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
switchD_10008030_caseD_5:
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_10008128(undefined4 *param_1)

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

uint recovered_10008160(byte *param_1,int param_2)

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

uint recovered_10008188(undefined4 *param_1)

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


#undef DAT_100081f0
#define DAT_100081f0 (*(char * *)(((uintptr_t)pf_module_state + 0x3ea0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

void recovered_100081d8(int *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_100081f0;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  recovered_1000639c(pcVar1,param_1[1]);
  return;
}

#undef DAT_100081f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ea4U)
 */

void recovered_100081f4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  recovered_1000639c((char *)param_1,iVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ec8U)
 */

void recovered_10008218(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ed8U)
 */

void recovered_10008228(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ee8U)
 */

void recovered_10008238(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ef8U)
 */

void recovered_10008248(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f08U)
 */

void recovered_10008258(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  *(int *)(param_1 + 0xc) = param_2 >> 0x1f;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f24U)
 */

void recovered_10008274(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  *(int *)(param_1 + 0xc) = param_2 >> 0x1f;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f40U)
 */

void recovered_10008290(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f58U)
 */

void recovered_100082a8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f70U)
 */

void recovered_100082c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3f88U)
 */

void recovered_100082d8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fa0U)
 */

void recovered_100082f0(undefined1 *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *param_1 = 3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fb4U)
 */

void recovered_10008304(undefined1 *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *param_1 = 3;
  return;
}


#undef DAT_10008368
#define DAT_10008368 (*(void * *)(((uintptr_t)pf_module_state + 0x4018U)))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
#define local_20 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fc8U)
 */

undefined1 *
recovered_10008318(undefined1 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[80] = {0};

  void *pvVar1;

  *param_1 = 4;
  pvVar1 = param_2;
  if (param_2 == (void *)0x0) {
    pvVar1 = DAT_10008368;
  }
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  recovered_1000cfe0((int *)&local_20,(int)pvVar1);
  recovered_1001ccb4((int)(param_1 + 8),&local_20);
  recovered_10007424(local_20);
  return param_1;
}

#undef DAT_10008368
#undef uStack_1c
#undef uStack_18
#undef local_20

#undef DAT_10008368
#define DAT_10008368 (*(void * *)(((uintptr_t)pf_module_state + 0x4018U)))
#define pvStack_20 (*(void * *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x401cU)
 */

undefined1 *
recovered_1000836c(undefined1 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[80] = {0};

  void *pvVar1;

  *param_1 = 4;
  pvVar1 = param_2;
  if (param_2 == (void *)0x0) {
    pvVar1 = DAT_10008368;
  }
  pvStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  recovered_1000cfe0((int *)&pvStack_20,(int)pvVar1);
  recovered_1001ccb4((int)(param_1 + 8),&pvStack_20);
  recovered_10007424(pvStack_20);
  return param_1;
}

#undef DAT_10008368
#undef pvStack_20
#undef uStack_1c
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4020U)
 */

undefined1 * recovered_10008370(undefined1 *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1001ccc0((int)(param_1 + 8),in_r1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4040U)
 */

undefined1 * recovered_10008390(undefined1 *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1001ccc0((int)(param_1 + 8),in_r1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4044U)
 */

undefined1 * recovered_10008394(undefined1 *param_1,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1001ccb4((int)(param_1 + 8),in_r1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4064U)
 */

undefined1 * recovered_100083b4(undefined1 *param_1,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = 4;
  recovered_1001ccb4((int)(param_1 + 8),in_r1);
  return param_1;
}


#define local_1c (*(int *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4068U)
 */

undefined1 * recovered_100083b8(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 5;
  local_1c = param_3;
  local_18 = param_4;
  recovered_10008408(&local_1c,param_2);
  uVar1 = local_18;
  *(int *)(param_1 + 8) = local_1c;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001cd5c(&local_1c);
  return param_1;
}

#undef local_1c
#undef local_18

#undef DAT_100084fc
#define DAT_100084fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41acU)))
#undef DAT_10008500
#define DAT_10008500 (*(int *)(((uintptr_t)pf_module_state + 0x41b0U)))
#undef DAT_10008504
#define DAT_10008504 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41b4U)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_9c (*(undefined4 * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x40b8U)
 */

void recovered_10008408(undefined4 *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_9c = param_1;
  piVar1 = recovered_100073f4(0xc);
  local_7c = *DAT_10008504;
  local_78 = DAT_100084fc;
  local_70 = DAT_10008500 + ((uintptr_t)pf_module_state+0x4118U);
  local_90 = 1;
  local_98 = piVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_10014b3c(piVar1,param_2);
  local_90 = 0xffffffff;
  recovered_1001cccc(local_9c,(int)local_98);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100084fc
#undef DAT_10008500
#undef DAT_10008504
#undef auStack_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#define uStack_18 (*(undefined4 *)(frame + 20))
#define iStack_1c (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x41b8U)
 */

undefined1 * recovered_10008508(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 5;
  iStack_1c = param_3;
  uStack_18 = param_4;
  recovered_10008408(&iStack_1c,param_2);
  uVar1 = uStack_18;
  *(int *)(param_1 + 8) = iStack_1c;
  iStack_1c = 0;
  uStack_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001cd5c(&iStack_1c);
  return param_1;
}

#undef uStack_18
#undef iStack_1c

#define local_1c (*(int *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x41bcU)
 */

undefined1 *
recovered_1000850c(undefined1 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 5;
  local_1c = param_3;
  local_18 = param_4;
  recovered_1000855c(&local_1c,param_2);
  uVar1 = local_18;
  *(int *)(param_1 + 8) = local_1c;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001cd5c(&local_1c);
  return param_1;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x420cU)
 */

void recovered_1000855c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100073f4(0xc);
  recovered_10017bd8(puVar1,param_2);
  recovered_1001cccc(param_1,(int)puVar1);
  return;
}


#define uStack_18 (*(undefined4 *)(frame + 20))
#define iStack_1c (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4240U)
 */

undefined1 *
recovered_10008590(undefined1 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 5;
  iStack_1c = param_3;
  uStack_18 = param_4;
  recovered_1000855c(&iStack_1c,param_2);
  uVar1 = uStack_18;
  *(int *)(param_1 + 8) = iStack_1c;
  iStack_1c = 0;
  uStack_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001cd5c(&iStack_1c);
  return param_1;
}

#undef uStack_18
#undef iStack_1c

#define local_1c (*(int *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4244U)
 */

undefined1 * recovered_10008594(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 6;
  local_1c = param_3;
  local_18 = param_4;
  recovered_100085e4(&local_1c,param_2);
  uVar1 = local_18;
  *(int *)(param_1 + 8) = local_1c;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 6;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001d19c(&local_1c);
  return param_1;
}

#undef local_1c
#undef local_18

#undef DAT_100086d8
#define DAT_100086d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4388U)))
#undef DAT_100086dc
#define DAT_100086dc (*(int *)(((uintptr_t)pf_module_state + 0x438cU)))
#undef DAT_100086e0
#define DAT_100086e0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4390U)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(undefined4 * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4294U)
 */

void recovered_100085e4(undefined4 *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_9c = param_1;
  piVar1 = recovered_100073f4(0x28);
  local_7c = *DAT_100086e0;
  local_78 = DAT_100086d8;
  local_70 = DAT_100086dc + ((uintptr_t)pf_module_state+0x42f4U);
  local_90 = 1;
  local_98 = piVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1001ce78(piVar1,param_2);
  local_90 = 0xffffffff;
  recovered_1001d10c(local_9c,(int)local_98);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100086d8
#undef DAT_100086dc
#undef DAT_100086e0
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

#define uStack_18 (*(undefined4 *)(frame + 20))
#define iStack_1c (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4394U)
 */

undefined1 * recovered_100086e4(undefined1 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 6;
  iStack_1c = param_3;
  uStack_18 = param_4;
  recovered_100085e4(&iStack_1c,param_2);
  uVar1 = uStack_18;
  *(int *)(param_1 + 8) = iStack_1c;
  iStack_1c = 0;
  uStack_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 6;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001d19c(&iStack_1c);
  return param_1;
}

#undef uStack_18
#undef iStack_1c

#define local_1c (*(int *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4398U)
 */

undefined1 *
recovered_100086e8(undefined1 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 6;
  local_1c = param_3;
  local_18 = param_4;
  recovered_10008738(&local_1c,param_2);
  uVar1 = local_18;
  *(int *)(param_1 + 8) = local_1c;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 6;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001d19c(&local_1c);
  return param_1;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x43e8U)
 */

void recovered_10008738(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100073f4(0x28);
  recovered_1001d2b8(puVar1,param_2);
  recovered_1001d10c(param_1,(int)puVar1);
  return;
}


#define uStack_18 (*(undefined4 *)(frame + 20))
#define iStack_1c (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x441cU)
 */

undefined1 *
recovered_1000876c(undefined1 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;

  *param_1 = 6;
  iStack_1c = param_3;
  uStack_18 = param_4;
  recovered_10008738(&iStack_1c,param_2);
  uVar1 = uStack_18;
  *(int *)(param_1 + 8) = iStack_1c;
  iStack_1c = 0;
  uStack_18 = 0;
  *(undefined4 *)(param_1 + 0x14) = 6;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  recovered_1001d19c(&iStack_1c);
  return param_1;
}

#undef uStack_18
#undef iStack_1c

#undef DAT_10008854
#define DAT_10008854 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4504U)))
#undef DAT_10008858
#define DAT_10008858 (*(int *)(((uintptr_t)pf_module_state + 0x4508U)))
#undef DAT_1000885c
#define DAT_1000885c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x450cU)))
#define local_a0 (*(int (*)[4])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4420U)
 */

void recovered_10008770(undefined1 *param_1)

{
  unsigned char frame[208] = {0};

  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  local_7c = *DAT_1000885c;
  local_78 = DAT_10008854;
  local_a0[2] = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  local_70 = DAT_10008858 + ((uintptr_t)pf_module_state+0x447cU);
  local_90 = 1;
  recovered_100078f0(local_a0 + 3);
  recovered_1000850c(param_1,local_a0,extraout_r2,extraout_r3);
  recovered_1001d318(local_a0);
  recovered_10007908(local_a0 + 3);
  return;
}

#undef DAT_10008854
#undef DAT_10008858
#undef DAT_1000885c
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4510U)
 */

int * recovered_10008860(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1001d338(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


#undef DAT_10008958
#define DAT_10008958 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4608U)))
#undef DAT_1000895c
#define DAT_1000895c (*(int *)(((uintptr_t)pf_module_state + 0x460cU)))
#undef DAT_10008960
#define DAT_10008960 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4610U)))
#define local_c0 (*(undefined4 *)(frame + 16))
#define uStack_bc (*(undefined4 *)(frame + 20))
#define local_b0 (*(undefined4 *)(frame + 32))
#define uStack_b8 (*(undefined4 *)(frame + 24))
#define local_a0 (*(undefined4 *)(frame + 48))
#define uStack_b4 (*(undefined4 *)(frame + 28))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_90 (*(undefined4 *)(frame + 64))
#define uStack_ac (*(undefined4 *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 84))
#define uStack_a8 (*(undefined4 *)(frame + 40))
#define local_78 (*(undefined4 *)(frame + 88))
#define uStack_a4 (*(undefined4 *)(frame + 44))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4514U)
 */

void recovered_10008864(undefined1 *param_1)

{
  unsigned char frame[240] = {0};

  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  uStack_bc = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uStack_b8 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uStack_b4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_7c = *DAT_10008960;
  local_78 = DAT_10008958;
  local_9c = 0;
  local_70 = DAT_1000895c + ((uintptr_t)pf_module_state+0x457cU);
  local_90 = 1;
  uStack_ac = uStack_bc;
  uStack_a8 = uStack_b8;
  uStack_a4 = uStack_b4;
  recovered_100078f0(&uStack_94);
  recovered_100086e8(param_1,&local_c0,extraout_r2,extraout_r3);
  recovered_1000d5e8((int)&local_c0);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10008958
#undef DAT_1000895c
#undef DAT_10008960
#undef local_c0
#undef uStack_bc
#undef local_b0
#undef uStack_b8
#undef local_a0
#undef uStack_b4
#undef local_9c
#undef local_90
#undef uStack_ac
#undef local_7c
#undef uStack_a8
#undef local_78
#undef uStack_a4
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4614U)
 */

byte recovered_10008964(char *param_1)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  byte bVar2;

  if (*param_1 == '\0') {
    bVar2 = 0;
  }
  else if (*param_1 == '\x03') {
    if (*(int *)(param_1 + 0x14) != 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x4650U));
      (*pcVar1)();
    }
    bVar2 = param_1[8];
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}


#undef DAT_10008e24
#define DAT_10008e24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ad4U)))
#undef DAT_10008e28
#define DAT_10008e28 (*(int *)(((uintptr_t)pf_module_state + 0x4ad8U)))
#undef DAT_10008e2c
#define DAT_10008e2c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4adcU)))
#undef DAT_10008e30
#define DAT_10008e30 (*(int *)(((uintptr_t)pf_module_state + 0x4ae0U)))
#undef DAT_10008e34
#define DAT_10008e34 (*(int *)(((uintptr_t)pf_module_state + 0x4ae4U)))
#undef DAT_10008e38
#define DAT_10008e38 (*(int *)(((uintptr_t)pf_module_state + 0x4ae8U)))
#undef DAT_10008e3c
#define DAT_10008e3c (*(int *)(((uintptr_t)pf_module_state + 0x4aecU)))
#undef DAT_10008e40
#define DAT_10008e40 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4af0U)))
#undef DAT_10008e44
#define DAT_10008e44 (*(int *)(((uintptr_t)pf_module_state + 0x4af4U)))
#undef DAT_10008e48
#define DAT_10008e48 (*(int *)(((uintptr_t)pf_module_state + 0x4af8U)))
#undef DAT_10008e4c
#define DAT_10008e4c (*(int *)(((uintptr_t)pf_module_state + 0x4afcU)))
#undef DAT_10008e50
#define DAT_10008e50 (*(int *)(((uintptr_t)pf_module_state + 0x4b00U)))
#undef DAT_10008e54
#define DAT_10008e54 (*(int *)(((uintptr_t)pf_module_state + 0x4b04U)))
#define local_b8 (*(int *)(frame + 24))
#define local_b4 (*(undefined4 * *)(frame + 28))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define local_b0 (*(int *)(frame + 32))
#define local_ac (*(int * *)(frame + 36))
#define local_a8 (*(uint *)(frame + 40))
#define local_a4 (*(void * *)(frame + 44))
#define local_a0 (*(undefined4 *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4654U)
 */

void recovered_100089a4(int *param_1,undefined1 *param_2)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10008e2c;
  local_78 = DAT_10008e24;
  local_70 = DAT_10008e28 + ((uintptr_t)pf_module_state+0x46a4U);
  uVar2 = *param_2;
  local_98 = param_1;
  recovered_100078f0(&uStack_94);
  switch((uintptr_t)(uVar2)) {
  default:
    iVar3 = DAT_10008e30;
    goto LAB_10008ae4;
  case 1:
    if (*(int *)(param_2 + 0x14) != 1) {
LAB_10008d78:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x4a28U));
      (*pcVar1)();
    }
    local_90 = 0xffffffff;
    recovered_10008e58(local_98,*(uint *)(param_2 + 8),*(uint *)(param_2 + 0xc));
    break;
  case 2:
    local_9c = 0;
    local_a0 = 0;
    local_a4 = (void *)0x0;
    if (*(int *)(param_2 + 0x14) != 2) goto LAB_10008d78;
    local_90 = 1;
    recovered_10008ec8((int *)&local_a4,(int)*(undefined8 *)(param_2 + 8),
                       (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20));
    local_90 = 2;
    recovered_1000dc38(local_98,(int *)&local_a4);
    goto LAB_10008b30;
  case 3:
    if (*(int *)(param_2 + 0x14) != 3) goto LAB_10008d78;
    iVar3 = DAT_10008e38;
    if (param_2[8] != '\0') {
      iVar3 = DAT_10008e34;
    }
LAB_10008ae4:
    local_90 = 0xffffffff;
    recovered_1000cfe0(local_98,iVar3);
    break;
  case 4:
    if (*(int *)(param_2 + 0x14) != 4) goto LAB_10008d78;
    local_90 = 0xffffffff;
    recovered_1000dc38(local_98,(int *)(param_2 + 8));
    break;
  case 5:
    if (*(int *)(param_2 + 0x14) != 5) goto LAB_10008d78;
    local_90 = 0xffffffff;
    piVar4 = *(int **)(param_2 + 0xc);
    recovered_1000cfe0(local_98,DAT_10008e3c);
    iVar3 = 0;
    local_b4 = DAT_10008e40;
    uVar5 = 1;
    local_ac = piVar4;
    while (uVar5 - 1 < (uint)local_ac[1]) {
      local_90 = 4;
      local_b0 = iVar3;
      local_a8 = uVar5;
      recovered_100089a4((int *)&local_a4,(undefined1 *)(*local_ac + iVar3));
      local_90 = 5;
      recovered_10008fbc(local_98,(int *)&local_a4);
      recovered_10007424(local_a4);
      if (local_a8 < (uint)local_ac[1]) {
        local_90 = 6;
        recovered_1000dd64(local_98,(int)local_b4);
      }
      iVar3 = local_b0 + 0x18;
      uVar5 = local_a8 + 1;
    }
    local_90 = 3;
    recovered_1000dd64(local_98,DAT_10008e44);
    break;
  case 6:
    if (*(int *)(param_2 + 0x14) != 6) goto LAB_10008d78;
    local_90 = 0xffffffff;
    puVar6 = *(undefined4 **)(param_2 + 0xc);
    recovered_1000cfe0(local_98,DAT_10008e48);
    piVar4 = (int *)*puVar6;
    local_a8 = 1;
    local_b8 = DAT_10008e4c;
    iVar3 = puVar6[1] * 0x28;
    local_b4 = puVar6;
    while (iVar3 != 0) {
      local_90 = 8;
      local_b0 = iVar3;
      local_ac = piVar4;
      recovered_10008fbc(local_98,piVar4);
      local_90 = 9;
      recovered_1000dd64(local_98,local_b8);
      local_90 = 10;
      recovered_100089a4((int *)&local_a4,(undefined1 *)(local_ac + 4));
      local_90 = 0xb;
      recovered_10008fbc(local_98,(int *)&local_a4);
      recovered_10007424(local_a4);
      if (local_a8 < (uint)local_b4[1]) {
        local_90 = 0xc;
        recovered_1000dd64(local_98,(int)DAT_10008e40);
      }
      local_a8 = local_a8 + 1;
      piVar4 = local_ac + 10;
      iVar3 = local_b0 + -0x28;
    }
    local_90 = 7;
    recovered_1000dd64(local_98,DAT_10008e50);
    break;
  case 7:
    if (*(int *)(param_2 + 0x14) != 7) goto LAB_10008d78;
    local_90 = 0xffffffff;
    recovered_100090c0((int *)&local_a4,DAT_10008e54,(int *)(*(int *)(param_2 + 0xc) + 0x14));
    local_90 = 0xd;
    recovered_10008fd8(local_98,(int *)&local_a4,DAT_10008e44);
LAB_10008b30:
    recovered_10007424(local_a4);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10008e24
#undef DAT_10008e28
#undef DAT_10008e2c
#undef DAT_10008e30
#undef DAT_10008e34
#undef DAT_10008e38
#undef DAT_10008e3c
#undef DAT_10008e40
#undef DAT_10008e44
#undef DAT_10008e48
#undef DAT_10008e4c
#undef DAT_10008e50
#undef DAT_10008e54
#undef local_b8
#undef local_b4
#undef auStack_c0
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
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68

#define local_38 (*(int *)(frame + 16))
#define abStack_30 (*(byte (*)[32])(frame + 24))
#define local_34 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b08U)
 */

void recovered_10008e58(undefined4 *param_1,uint param_2,uint param_3)

{
  unsigned char frame[104] = {0};

  int in_r3;

  recovered_1000d610(&local_38,abStack_30,abStack_30 + 0x20,param_2,param_3,10);
  if (local_34 == 0) {
    recovered_1000d238(param_1,(int)abStack_30,local_38 - (int)abStack_30,in_r3);
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

#undef local_38
#undef abStack_30
#undef local_34

#undef DAT_10008fb0
#define DAT_10008fb0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c60U)))
#undef DAT_10008fb4
#define DAT_10008fb4 (*(int *)(((uintptr_t)pf_module_state + 0x4c64U)))
#undef DAT_10008fb8
#define DAT_10008fb8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4c68U)))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(int * *)(frame + 28))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b78U)
 */

int * recovered_10008ec8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[224] = {0};


  recovered_1000d72c((int *)local_a0,param_2,param_3);
  local_7c = *DAT_10008fb8;
  local_78 = DAT_10008fb0;
  local_70 = DAT_10008fb4 + ((uintptr_t)pf_module_state+0x4bd0U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100078f0(&uStack_94);
  local_a4 = param_1;
  recovered_10008fbc(param_1,(int *)local_a0);
  recovered_10007424(local_a0[0]);
  recovered_10007908(&uStack_94);
  return local_a4;
}

#undef DAT_10008fb0
#undef DAT_10008fb4
#undef DAT_10008fb8
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10008fd4
#define DAT_10008fd4 (*(int *)(((uintptr_t)pf_module_state + 0x4c84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c6cU)
 */

void recovered_10008fbc(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int in_r3;

  in_r3 = *param_2;
  iVar1 = DAT_10008fd4;
  if (in_r3 != 0) {
    iVar1 = in_r3;
  }
  recovered_1000dc80(param_1,iVar1,param_2[1],in_r3);
  return;
}

#undef DAT_10008fd4

#undef DAT_100090b4
#define DAT_100090b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4d64U)))
#undef DAT_100090b8
#define DAT_100090b8 (*(int *)(((uintptr_t)pf_module_state + 0x4d68U)))
#undef DAT_100090bc
#define DAT_100090bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4d6cU)))
#define local_98 (*(int * *)(frame + 24))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c88U)
 */

void recovered_10008fd8(undefined4 *param_1,int *param_2,int param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_98 = param_1;
  recovered_1000dc38(param_1,param_2);
  piVar1 = local_98;
  local_7c = *DAT_100090bc;
  local_78 = DAT_100090b4;
  local_70 = DAT_100090b8 + ((uintptr_t)pf_module_state+0x4ce4U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000dd64(piVar1,param_3);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100090b4
#undef DAT_100090b8
#undef DAT_100090bc
#undef local_98
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_1000919c
#define DAT_1000919c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e4cU)))
#undef DAT_100091a0
#define DAT_100091a0 (*(int *)(((uintptr_t)pf_module_state + 0x4e50U)))
#undef DAT_100091a4
#define DAT_100091a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4e54U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4d70U)
 */

void recovered_100090c0(int *param_1,int param_2,int *param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_98 = param_1;
  recovered_1000cfe0(param_1,param_2);
  piVar1 = local_98;
  local_7c = *DAT_100091a4;
  local_78 = DAT_1000919c;
  local_70 = DAT_100091a0 + ((uintptr_t)pf_module_state+0x4dccU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_10008fbc(piVar1,param_3);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000919c
#undef DAT_100091a0
#undef DAT_100091a4
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_10009314
#define DAT_10009314 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4fc4U)))
#undef DAT_10009318
#define DAT_10009318 (*(int *)(((uintptr_t)pf_module_state + 0x4fc8U)))
#undef DAT_1000931c
#define DAT_1000931c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4fccU)))
#undef DAT_10009320
#define DAT_10009320 (*(int *)(((uintptr_t)pf_module_state + 0x4fd0U)))
#undef DAT_10009324
#define DAT_10009324 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4fd4U)))
#undef DAT_10009328
#define DAT_10009328 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4fd8U)))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4e58U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

ulonglong recovered_100091a8(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  ulonglong uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1000931c;
  local_78 = DAT_10009314;
  local_70 = DAT_10009318 + ((uintptr_t)pf_module_state+0x4ea4U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x03') {
    if (*(int *)(param_1 + 0x14) == 3) {
      uVar3 = (ulonglong)(byte)param_1[8];
LAB_1000926c:
      recovered_10007908(&uStack_94);
      return uVar3;
    }
  }
  else if (cVar2 == '\x02') {
    if (*(int *)(param_1 + 0x14) == 2) {
      uVar3 = recovered_10004600((int)*(undefined8 *)(param_1 + 8),
                                 (int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20));
      goto LAB_1000926c;
    }
  }
  else if (cVar2 == '\x01') {
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar3 = *(ulonglong *)(param_1 + 8);
      goto LAB_1000926c;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009320);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_10009324,*DAT_10009328);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x4f90U));
  (*pcVar1)();
}

#undef DAT_10009314
#undef DAT_10009318
#undef DAT_1000931c
#undef DAT_10009320
#undef DAT_10009324
#undef DAT_10009328
#undef auStack_a0
#undef uStack_94
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1000ddbc
#define DAT_1000ddbc (*(int * *)(((uintptr_t)pf_module_state + 0x9a6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fdcU)
 */

int * recovered_1000932c(int *param_1,int in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000ddbc + 8;
  recovered_1000cfe0(param_1 + 1,in_r1);
  return param_1;
}

#undef DAT_1000ddbc

#undef DAT_1000de18
#define DAT_1000de18 (*(int * *)(((uintptr_t)pf_module_state + 0x9ac8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fe0U)
 */

int * recovered_10009330(int *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000de18 + 8;
  recovered_1000d288(param_1 + 1);
  return param_1;
}

#undef DAT_1000de18

/* Preserve the native double result across R0/R1.
 * Pooka's Free Software License. */
double recovered_10009334(byte *value){
 uint32_t tag=*value;
 if(tag>=1&&tag<=3&&*(uint32_t *)(value+20)!=tag)__builtin_trap();
 if(tag==2)return *(double *)(value+8);
 if(tag==3)return value[8]?1.0:0.0;
 if(tag==1){
  uint64_t raw=*(uint64_t *)(value+8);int negative=(int64_t)raw<0;
  uint64_t magnitude=negative?0-raw:raw;
  double number=(double)(uint32_t)magnitude+(double)(uint32_t)(magnitude>>32)*4294967296.0;
  return negative?-number:number;
 }
 int message[3]={0};
 recovered_1000cfe0(message,(int)(uintptr_t)"value is not numeric");
 recovered_1000f758(message);
 __builtin_unreachable();
}


#undef DAT_100095d0
#define DAT_100095d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5280U)))
#undef DAT_100095d4
#define DAT_100095d4 (*(int *)(((uintptr_t)pf_module_state + 0x5284U)))
#undef DAT_100095d8
#define DAT_100095d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5288U)))
#undef DAT_100095dc
#define DAT_100095dc (*(int *)(((uintptr_t)pf_module_state + 0x528cU)))
#undef DAT_100095e0
#define DAT_100095e0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef DAT_100095e4
#define DAT_100095e4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5294U)))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5168U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

char recovered_100094b8(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_100095d8;
  local_78 = DAT_100095d0;
  local_70 = DAT_100095d4 + ((uintptr_t)pf_module_state+0x51b4U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x03') {
    if (*(int *)(param_1 + 0x14) == 3) {
      cVar2 = param_1[8];
      recovered_10007908(&uStack_94);
      return cVar2;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_100095dc);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_100095e0,*DAT_100095e4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x524cU));
  (*pcVar1)();
}

#undef DAT_100095d0
#undef DAT_100095d4
#undef DAT_100095d8
#undef DAT_100095dc
#undef DAT_100095e0
#undef DAT_100095e4
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_100096fc
#define DAT_100096fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef DAT_10009700
#define DAT_10009700 (*(int *)(((uintptr_t)pf_module_state + 0x53b0U)))
#undef DAT_10009704
#define DAT_10009704 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x53b4U)))
#undef DAT_10009708
#define DAT_10009708 (*(int *)(((uintptr_t)pf_module_state + 0x53b8U)))
#undef DAT_1000970c
#define DAT_1000970c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x53bcU)))
#undef DAT_10009710
#define DAT_10009710 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x53c0U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5298U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

char * recovered_100095e8(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10009704;
  local_78 = DAT_100096fc;
  local_70 = DAT_10009700 + ((uintptr_t)pf_module_state+0x52e4U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x04') {
    if (*(int *)(param_1 + 0x14) == 4) {
      recovered_10007908(&uStack_94);
      return param_1 + 8;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009708);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_1000970c,*DAT_10009710);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x5378U));
  (*pcVar1)();
}

#undef DAT_100096fc
#undef DAT_10009700
#undef DAT_10009704
#undef DAT_10009708
#undef DAT_1000970c
#undef DAT_10009710
#undef local_98
#undef local_90
#undef auStack_a0
#undef local_8c
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000982c
#define DAT_1000982c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x54dcU)))
#undef DAT_10009830
#define DAT_10009830 (*(int *)(((uintptr_t)pf_module_state + 0x54e0U)))
#undef DAT_10009834
#define DAT_10009834 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x54e4U)))
#undef DAT_10009838
#define DAT_10009838 (*(int *)(((uintptr_t)pf_module_state + 0x54e8U)))
#undef DAT_1000983c
#define DAT_1000983c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x54ecU)))
#undef DAT_10009840
#define DAT_10009840 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x54f0U)))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53c4U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 recovered_10009714(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  undefined4 uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10009834;
  local_78 = DAT_1000982c;
  local_70 = DAT_10009830 + ((uintptr_t)pf_module_state+0x5410U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    if (*(int *)(param_1 + 0x14) == 5) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      recovered_10007908(&uStack_94);
      return uVar3;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009838);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_1000983c,*DAT_10009840);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x54a8U));
  (*pcVar1)();
}

#undef DAT_1000982c
#undef DAT_10009830
#undef DAT_10009834
#undef DAT_10009838
#undef DAT_1000983c
#undef DAT_10009840
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74

#undef DAT_1000995c
#define DAT_1000995c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x560cU)))
#undef DAT_10009960
#define DAT_10009960 (*(int *)(((uintptr_t)pf_module_state + 0x5610U)))
#undef DAT_10009964
#define DAT_10009964 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5614U)))
#undef DAT_10009968
#define DAT_10009968 (*(int *)(((uintptr_t)pf_module_state + 0x5618U)))
#undef DAT_1000996c
#define DAT_1000996c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x561cU)))
#undef DAT_10009970
#define DAT_10009970 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5620U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x54f4U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 recovered_10009844(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  undefined4 uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10009964;
  local_78 = DAT_1000995c;
  local_70 = DAT_10009960 + ((uintptr_t)pf_module_state+0x5540U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    if (*(int *)(param_1 + 0x14) == 5) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      recovered_10007908(&uStack_94);
      return uVar3;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009968);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_1000996c,*DAT_10009970);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x55d8U));
  (*pcVar1)();
}

#undef DAT_1000995c
#undef DAT_10009960
#undef DAT_10009964
#undef DAT_10009968
#undef DAT_1000996c
#undef DAT_10009970
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68

#undef DAT_10009a8c
#define DAT_10009a8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x573cU)))
#undef DAT_10009a90
#define DAT_10009a90 (*(int *)(((uintptr_t)pf_module_state + 0x5740U)))
#undef DAT_10009a94
#define DAT_10009a94 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5744U)))
#undef DAT_10009a98
#define DAT_10009a98 (*(int *)(((uintptr_t)pf_module_state + 0x5748U)))
#undef DAT_10009a9c
#define DAT_10009a9c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x574cU)))
#undef DAT_10009aa0
#define DAT_10009aa0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5750U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5624U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 recovered_10009974(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  undefined4 uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10009a94;
  local_78 = DAT_10009a8c;
  local_70 = DAT_10009a90 + ((uintptr_t)pf_module_state+0x5670U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x06') {
    if (*(int *)(param_1 + 0x14) == 6) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      recovered_10007908(&uStack_94);
      return uVar3;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009a98);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_10009a9c,*DAT_10009aa0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x5708U));
  (*pcVar1)();
}

#undef DAT_10009a8c
#undef DAT_10009a90
#undef DAT_10009a94
#undef DAT_10009a98
#undef DAT_10009a9c
#undef DAT_10009aa0
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68

#undef DAT_10009bbc
#define DAT_10009bbc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x586cU)))
#undef DAT_10009bc0
#define DAT_10009bc0 (*(int *)(((uintptr_t)pf_module_state + 0x5870U)))
#undef DAT_10009bc4
#define DAT_10009bc4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5874U)))
#undef DAT_10009bc8
#define DAT_10009bc8 (*(int *)(((uintptr_t)pf_module_state + 0x5878U)))
#undef DAT_10009bcc
#define DAT_10009bcc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x587cU)))
#undef DAT_10009bd0
#define DAT_10009bd0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5880U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5754U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 recovered_10009aa4(char *param_1)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  undefined4 uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10009bc4;
  local_78 = DAT_10009bbc;
  local_70 = DAT_10009bc0 + ((uintptr_t)pf_module_state+0x57a0U);
  cVar2 = *param_1;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x06') {
    if (*(int *)(param_1 + 0x14) == 6) {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      recovered_10007908(&uStack_94);
      return uVar3;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_98,DAT_10009bc8);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_98,*DAT_10009bcc,*DAT_10009bd0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      recovered_1000779c((int)local_98);
      local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      recovered_10007950(local_8c);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x5838U));
  (*pcVar1)();
}

#undef DAT_10009bbc
#undef DAT_10009bc0
#undef DAT_10009bc4
#undef DAT_10009bc8
#undef DAT_10009bcc
#undef DAT_10009bd0
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5884U)
 */

int * recovered_10009bd4(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009bf4(param_1);
  *(int **)(*param_1 + 0x68) = param_1;
  return param_1;
}


#undef DAT_10009cd8
#define DAT_10009cd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5988U)))
#undef DAT_10009cdc
#define DAT_10009cdc (*(int *)(((uintptr_t)pf_module_state + 0x598cU)))
#undef DAT_10009ce0
#define DAT_10009ce0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5990U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(undefined4 * *)(frame + 20))
#define local_98 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58a4U)
 */

void recovered_10009bf4(undefined4 *param_1)

{
  unsigned char frame[208] = {0};

  undefined4 *puVar1;

  local_9c = param_1;
  puVar1 = recovered_100073f4(0x6c);
  local_7c = *DAT_10009ce0;
  local_78 = DAT_10009cd8;
  local_70 = DAT_10009cdc + ((uintptr_t)pf_module_state+0x5900U);
  local_90 = 1;
  local_98 = puVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1001d380(puVar1);
  *local_9c = local_98;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10009cd8
#undef DAT_10009cdc
#undef DAT_10009ce0
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef local_9c
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5994U)
 */

int * recovered_10009ce4(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009bf4(param_1);
  *(int **)(*param_1 + 0x68) = param_1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5998U)
 */

int * recovered_10009ce8(int *param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*param_1 != 0) {
    pointer = (void *)recovered_10025228(*param_1);
  }
  recovered_10007424(pointer);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x599cU)
 */

int * recovered_10009cec(int *param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*param_1 != 0) {
    pointer = (void *)recovered_10025228(*param_1);
  }
  recovered_10007424(pointer);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59a0U)
 */

void recovered_10009cf0(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = *param_2;
  *param_2 = 0;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0x68) = param_1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59bcU)
 */

void recovered_10009d0c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = *param_2;
  *param_2 = 0;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0x68) = param_1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59d8U)
 */

int * recovered_10009d28(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    recovered_10009d58(param_1,param_2);
    if (*param_1 != 0) {
      *(int **)(*param_1 + 0x68) = param_1;
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a08U)
 */

int * recovered_10009d58(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != param_2) {
    iVar1 = *param_2;
    *param_2 = 0;
    recovered_10025258(param_1,iVar1);
  }
  return param_1;
}


#undef DAT_10009e98
#define DAT_10009e98 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5b48U)))
#undef DAT_10009e9c
#define DAT_10009e9c (*(int *)(((uintptr_t)pf_module_state + 0x5b4cU)))
#undef DAT_10009ea0
#define DAT_10009ea0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5b50U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a3cU)
 */

void recovered_10009d8c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_98 = (int *)*param_3;
  *param_3 = 0;
  local_7c = *DAT_10009ea0;
  local_78 = DAT_10009e98;
  piVar1 = (int *)*param_1;
  local_70 = DAT_10009e9c + ((uintptr_t)pf_module_state+0x5aa0U);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10009ea4(piVar1,param_2,&local_98);
  if (local_98 != (int *)0x0) {
    (**(code **)(*local_98 + 4))();
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10009e98
#undef DAT_10009e9c
#undef DAT_10009ea0
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_1000a124
#define DAT_1000a124 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5dd4U)))
#undef DAT_1000a128
#define DAT_1000a128 (*(int *)(((uintptr_t)pf_module_state + 0x5dd8U)))
#undef DAT_1000a12c
#define DAT_1000a12c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5ddcU)))
#undef DAT_1000a130
#define DAT_1000a130 (*(char * *)(((uintptr_t)pf_module_state + 0x5de0U)))
#undef DAT_1000a134
#define DAT_1000a134 (*(char * *)(((uintptr_t)pf_module_state + 0x5de4U)))
#undef DAT_1000a138
#define DAT_1000a138 (*(char * *)(((uintptr_t)pf_module_state + 0x5de8U)))
#define local_d0 (*(int * *)(frame + 16))
#define local_cc (*(int * *)(frame + 20))
#define local_c8 (*(int * *)(frame + 24))
#define local_c4 (*(int * *)(frame + 28))
#define local_bc (*(undefined1 * *)(frame + 36))
#define iStack_c0 (*(int *)(frame + 32))
#define local_b8 (*(undefined1 (*)[8])(frame + 40))
#define aiStack_b0 (*(int (*)[3])(frame + 48))
#define local_a4 (*(undefined4 *)(frame + 60))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b54U)
 */

void recovered_10009ea4(int *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[256] = {0};

  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 uVar6;
  int in_r3;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 uVar7;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  local_b8[0] = 7;
  local_c4 = (int *)*param_3;
  local_a4 = 0;
  *param_3 = 0;
  local_7c = *DAT_1000a12c;
  local_78 = DAT_1000a124;
  local_70 = DAT_1000a128 + ((uintptr_t)pf_module_state+0x5bb8U);
  local_90 = 1;
  local_cc = param_1;
  local_c8 = param_2;
  recovered_100078f0(&uStack_94);
  recovered_1000e0ac(&iStack_c0);
  piVar1 = local_c8;
  *local_bc = 1;
  bVar2 = recovered_1000e0e8(local_c8,DAT_1000a130);
  if (bVar2) {
    uVar5 = 1;
  }
  else {
    bVar2 = recovered_1000e0e8(piVar1,DAT_1000a134);
    if (!bVar2) {
      bVar2 = recovered_1000e0e8(piVar1,DAT_1000a138);
      if (bVar2) {
        local_bc[1] = 3;
      }
      goto LAB_10009f98;
    }
    uVar5 = 2;
  }
  local_bc[1] = uVar5;
LAB_10009f98:
  recovered_1000e12c((int *)(local_bc + 0x10),(int *)&local_c4);
  local_90 = 2;
  recovered_1000e174((int *)(local_bc + 0x14),piVar1,in_r3);
  local_90 = 3;
  local_d0 = aiStack_b0;
  recovered_1000e3fc(local_d0,&iStack_c0);
  recovered_1000d4cc(&iStack_c0);
  uVar6 = extraout_r2;
  uVar7 = extraout_r3;
  if (local_c4 != (int *)0x0) {
    (**(code **)(*local_c4 + 4))();
    uVar6 = extraout_r2_00;
    uVar7 = extraout_r3_00;
  }
  local_90 = 4;
  uVar3 = recovered_1000de1c((uint)local_cc,local_c8,uVar6,uVar7);
  local_90 = 5;
  recovered_1000de98((int)local_cc,uVar3,local_b8);
  local_90 = 6;
  puVar4 = (undefined1 *)recovered_1000df14(local_cc,local_c8);
  local_90 = 7;
  recovered_1000e08c(puVar4,local_b8);
  recovered_1000d37c(local_d0);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000a124
#undef DAT_1000a128
#undef DAT_1000a12c
#undef DAT_1000a130
#undef DAT_1000a134
#undef DAT_1000a138
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_bc
#undef iStack_c0
#undef local_b8
#undef aiStack_b0
#undef local_a4
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5decU)
 */

void recovered_1000a13c(undefined4 *param_1,int *param_2,undefined1 *param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  recovered_1000a144((int *)*param_1,param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5df4U)
 */

void recovered_1000a144(int *param_1,int *param_2,undefined1 *param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined1 *puVar2;

  uVar1 = recovered_1000de1c((uint)param_1,param_2,param_3,param_4);
  recovered_1000de98((int)param_1,uVar1,param_3);
  puVar2 = (undefined1 *)recovered_1000df14(param_1,param_2);
  recovered_1000e08c(puVar2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e34U)
 */

bool recovered_1000a184(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000a18c(*param_1,param_2,param_3);
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e3cU)
 */

bool recovered_1000a18c(int param_1,int *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined1 *puVar2;

  uVar1 = recovered_1000f4ac(param_1,param_2);
  puVar2 = (undefined1 *)recovered_1000f4dc(param_1,uVar1);
  if (puVar2 != (undefined1 *)0x0) {
    recovered_1000e08c(param_3,puVar2);
  }
  return puVar2 != (undefined1 *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e84U)
 */

void recovered_1000a1d4(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1000a1e8(param_1,*param_2,param_3,param_4);
  return;
}


#undef DAT_1000b124
#define DAT_1000b124 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6dd4U)))
#undef DAT_1000b128
#define DAT_1000b128 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6dd8U)))
#undef DAT_1000b12c
#define DAT_1000b12c (*(int *)(((uintptr_t)pf_module_state + 0x6ddcU)))
#undef DAT_1000b53c
#define DAT_1000b53c (*(int *)(((uintptr_t)pf_module_state + 0x71ecU)))
#undef DAT_1000b5f8
#define DAT_1000b5f8 (*(void * *)(((uintptr_t)pf_module_state + 0x72a8U)))
#undef DAT_1000b73c
#define DAT_1000b73c (*(int *)(((uintptr_t)pf_module_state + 0x73ecU)))
#undef DAT_1000b7a8
#define DAT_1000b7a8 (*(int *)(((uintptr_t)pf_module_state + 0x7458U)))
#undef DAT_1000b7ac
#define DAT_1000b7ac (*(int *)(((uintptr_t)pf_module_state + 0x745cU)))
#undef DAT_1000b7b0
#define DAT_1000b7b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7460U)))
#undef DAT_1000b7b8
#define DAT_1000b7b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7468U)))
#undef DAT_1000b870
#define DAT_1000b870 (*(int *)(((uintptr_t)pf_module_state + 0x7520U)))
#undef DAT_1000b874
#define DAT_1000b874 (*(int *)(((uintptr_t)pf_module_state + 0x7524U)))
#undef DAT_1000b92c
#define DAT_1000b92c (*(int *)(((uintptr_t)pf_module_state + 0x75dcU)))
#undef DAT_1000b9b0
#define DAT_1000b9b0 (*(int *)(((uintptr_t)pf_module_state + 0x7660U)))
#undef DAT_1000ba44
#define DAT_1000ba44 (*(int *)(((uintptr_t)pf_module_state + 0x76f4U)))
#undef DAT_1000ba48
#define DAT_1000ba48 (*(int *)(((uintptr_t)pf_module_state + 0x76f8U)))
#undef DAT_1000babc
#define DAT_1000babc (*(int *)(((uintptr_t)pf_module_state + 0x776cU)))
#undef DAT_1000bba8
#define DAT_1000bba8 (*(int *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_1000bbac
#define DAT_1000bbac (*(int *)(((uintptr_t)pf_module_state + 0x785cU)))
#undef DAT_1000bbb0
#define DAT_1000bbb0 (*(int *)(((uintptr_t)pf_module_state + 0x7860U)))
#undef DAT_1000bd8c
#define DAT_1000bd8c (*(int *)(((uintptr_t)pf_module_state + 0x7a3cU)))
#undef DAT_1000bd90
#define DAT_1000bd90 (*(int *)(((uintptr_t)pf_module_state + 0x7a40U)))
#undef DAT_1000bdec
#define DAT_1000bdec (*(int *)(((uintptr_t)pf_module_state + 0x7a9cU)))
#undef DAT_1000be98
#define DAT_1000be98 (*(int *)(((uintptr_t)pf_module_state + 0x7b48U)))
#undef DAT_1000be9c
#define DAT_1000be9c (*(int *)(((uintptr_t)pf_module_state + 0x7b4cU)))
#undef DAT_1000bf2c
#define DAT_1000bf2c (*(int *)(((uintptr_t)pf_module_state + 0x7bdcU)))
#undef DAT_1000bf94
#define DAT_1000bf94 (*(int *)(((uintptr_t)pf_module_state + 0x7c44U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(char * *)(((uintptr_t)pf_module_state + 0x7de8U)))
#undef DAT_1000c14c
#define DAT_1000c14c (*(char * *)(((uintptr_t)pf_module_state + 0x7dfcU)))
#undef DAT_1000c168
#define DAT_1000c168 (*(char * *)(((uintptr_t)pf_module_state + 0x7e18U)))
#undef DAT_1000c16c
#define DAT_1000c16c (*(char * *)(((uintptr_t)pf_module_state + 0x7e1cU)))
#undef DAT_1000c198
#define DAT_1000c198 (*(char * *)(((uintptr_t)pf_module_state + 0x7e48U)))
#undef DAT_1000c1ac
#define DAT_1000c1ac (*(char * *)(((uintptr_t)pf_module_state + 0x7e5cU)))
#undef DAT_1000c1b0
#define DAT_1000c1b0 (*(char * *)(((uintptr_t)pf_module_state + 0x7e60U)))
#undef DAT_1000c1d8
#define DAT_1000c1d8 (*(char * *)(((uintptr_t)pf_module_state + 0x7e88U)))
#undef DAT_1000c1dc
#define DAT_1000c1dc (*(int *)(((uintptr_t)pf_module_state + 0x7e8cU)))
#undef DAT_1000c1e0
#define DAT_1000c1e0 (*(int *)(((uintptr_t)pf_module_state + 0x7e90U)))
#undef DAT_1000c1e4
#define DAT_1000c1e4 (*(int *)(((uintptr_t)pf_module_state + 0x7e94U)))
#undef DAT_1000c1e8
#define DAT_1000c1e8 (*(int *)(((uintptr_t)pf_module_state + 0x7e98U)))
#undef DAT_1000c1ec
#define DAT_1000c1ec (*(int *)(((uintptr_t)pf_module_state + 0x7e9cU)))
#undef DAT_1000c1f0
#define DAT_1000c1f0 (*(char * *)(((uintptr_t)pf_module_state + 0x7ea0U)))
#undef DAT_1000c1f4
#define DAT_1000c1f4 (*(char * *)(((uintptr_t)pf_module_state + 0x7ea4U)))
#undef DAT_1000c1f8
#define DAT_1000c1f8 (*(char * *)(((uintptr_t)pf_module_state + 0x7ea8U)))
#undef DAT_1000c1fc
#define DAT_1000c1fc (*(char * *)(((uintptr_t)pf_module_state + 0x7eacU)))
#undef DAT_1000c200
#define DAT_1000c200 (*(char * *)(((uintptr_t)pf_module_state + 0x7eb0U)))
#undef DAT_1000c204
#define DAT_1000c204 (*(char * *)(((uintptr_t)pf_module_state + 0x7eb4U)))
#undef DAT_1000c208
#define DAT_1000c208 (*(char * *)(((uintptr_t)pf_module_state + 0x7eb8U)))
#undef DAT_1000c20c
#define DAT_1000c20c (*(int *)(((uintptr_t)pf_module_state + 0x7ebcU)))
#undef DAT_1000c210
#define DAT_1000c210 (*(int *)(((uintptr_t)pf_module_state + 0x7ec0U)))
#undef DAT_1000c214
#define DAT_1000c214 (*(int *)(((uintptr_t)pf_module_state + 0x7ec4U)))
#undef DAT_1000c218
#define DAT_1000c218 (*(int *)(((uintptr_t)pf_module_state + 0x7ec8U)))
#undef DAT_1000c21c
#define DAT_1000c21c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7eccU)))
#undef DAT_1000c220
#define DAT_1000c220 (*(int *)(((uintptr_t)pf_module_state + 0x7ed0U)))
#undef PTR_DAT_1000bbb4
#define PTR_DAT_1000bbb4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7864U)))
#define local_274 (*(uint *)(frame + 300))
#define local_270 (*(undefined4 *)(frame + 304))
#define local_26c (*(int *)(frame + 308))
#define local_260 (*(uint *)(frame + 320))
#define local_25c (*(int *)(frame + 324))
#define local_258 (*(int *)(frame + 328))
#define local_254 (*(undefined1 *)(frame + 332))
#define local_250 (*(void * (*)[3])(frame + 336))
#define local_244 (*(void * (*)[3])(frame + 348))
#define local_238 (*(void * (*)[3])(frame + 360))
#define local_22c (*(void * (*)[3])(frame + 372))
#define local_220 (*(void * (*)[3])(frame + 384))
#define local_214 (*(void * (*)[3])(frame + 396))
#define local_208 (*(void * (*)[3])(frame + 408))
#define local_1fc (*(void * (*)[3])(frame + 420))
#define local_1f0 (*(void * (*)[3])(frame + 432))
#define local_1e4 (*(void * (*)[3])(frame + 444))
#define local_1d8 (*(void * (*)[3])(frame + 456))
#define local_1cc (*(void * (*)[3])(frame + 468))
#define local_1c0 (*(void * (*)[3])(frame + 480))
#define local_1b4 (*(void * (*)[3])(frame + 492))
#define local_1a8 (*(void * (*)[3])(frame + 504))
#define aiStack_160 (*(int (*)[3])(frame + 576))
#define local_19c (*(void * (*)[3])(frame + 516))
#define local_190 (*(void * (*)[3])(frame + 528))
#define local_184 (*(void * (*)[3])(frame + 540))
#define local_178 (*(void * (*)[3])(frame + 552))
#define local_16c (*(void * (*)[3])(frame + 564))
#define local_154 (*(void * (*)[3])(frame + 588))
#define local_148 (*(int *)(frame + 600))
#define local_144 (*(void * *)(frame + 604))
#define local_140 (*(undefined4 *)(frame + 608))
#define local_13c (*(int *)(frame + 612))
#define local_138 (*(uint *)(frame + 616))
#define local_134 (*(undefined4 *)(frame + 620))
#define local_130 (*(int * *)(frame + 624))
#define local_12c (*(uint *)(frame + 628))
#define auStack_118 (*(undefined1 (*)[68])(frame + 648))
#define local_128 (*(undefined4 *)(frame + 632))
#define local_124 (*(undefined4 *)(frame + 636))
#define local_120 (*(undefined4 *)(frame + 640))
#define local_11c (*(undefined4 *)(frame + 644))
#define local_d4 (*(undefined4 *)(frame + 716))
#define local_d0 (*(undefined8 *)(frame + 720))
#define uStack_c8 (*(undefined8 *)(frame + 728))
#define local_c0 (*(undefined4 *)(frame + 736))
#define local_bc (*(undefined4 *)(frame + 740))
#define local_b8 (*(undefined4 *)(frame + 744))
#define local_b0 (*(undefined8 *)(frame + 752))
#define local_a8 (*(undefined4 *)(frame + 760))
#define local_a0 (*(int * *)(frame + 768))
#define local_9c (*(int * *)(frame + 772))
#define uStack_94 (*(undefined4 *)(frame + 780))
#define local_98 (*(int * *)(frame + 776))
#define local_90 (*(undefined4 *)(frame + 784))
#define local_7c (*(undefined4 *)(frame + 804))
#define local_78 (*(undefined4 *)(frame + 808))
#define local_74 (*(undefined1 * *)(frame + 812))
#define local_70 (*(int *)(frame + 816))
#define local_6c (*(undefined1 * *)(frame + 820))
#define auStack_68 (*(undefined1 (*)[8])(frame + 824))
#define auStackY_390 (*(undefined1 (*)[128])(frame + 16))
#define local_2e8 (*(void * *)(frame + 184))
#define local_2e4 (*(undefined4 *)(frame + 188))
#define local_2e0 (*(undefined4 *)(frame + 192))
#define uStack_2c0 (*(undefined4 *)(frame + 224))
#define local_2dc (*(int *)(frame + 196))
#define local_2d8 (*(undefined4 *)(frame + 200))
#define local_2d4 (*(undefined4 *)(frame + 204))
#define uStack_2bc (*(undefined4 *)(frame + 228))
#define local_2d0 (*(int *)(frame + 208))
#define aiStack_2b4 (*(int (*)[3])(frame + 236))
#define local_2cc (*(undefined4 *)(frame + 212))
#define local_2c8 (*(undefined4 *)(frame + 216))
#define local_2c4 (*(void * *)(frame + 220))
#define local_2b8 (*(int *)(frame + 232))
#define local_2a8 (*(int (*)[3])(frame + 248))
#define local_29c (*(int * *)(frame + 260))
#define local_298 (*(uint *)(frame + 264))
#define local_294 (*(int *)(frame + 268))
#define local_290 (*(int *)(frame + 272))
#define local_28c (*(undefined4 *)(frame + 276))
#define local_288 (*(undefined4 *)(frame + 280))
#define local_284 (*(void * *)(frame + 284))
#define uStack_268 (*(undefined4 *)(frame + 312))
#define local_280 (*(uint *)(frame + 288))
#define local_27c (*(undefined4 *)(frame + 292))
#define local_278 (*(void * *)(frame + 296))
#define uStack_264 (*(undefined4 *)(frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e98U)
 */

void recovered_1000a1e8(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  unsigned char frame[960] = {0};

  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  undefined1 uVar13;
  uchar *puVar14;
  void *pvVar15;
  int *piVar16;
  uint uVar17;
  int in_r3;
  int iVar18;
  int iVar19;

  local_a0 = param_1;
  recovered_1000dc38(&local_284,param_3);
  local_7c = *DAT_1000b124;
  local_78 = DAT_1000b128;
  local_70 = DAT_1000b12c + ((uintptr_t)pf_module_state+0x5ef4U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_390 + 0x80;
  recovered_100078f0(&uStack_94);
  recovered_1000dc38(&local_290,param_4);
  local_270 = local_27c;
  local_278 = local_284;
  local_274 = local_280;
  local_280 = 0;
  local_26c = local_290;
  uStack_268 = local_28c;
  uStack_264 = local_288;
  local_258 = 1;
  local_25c = 1;
  local_27c = 0;
  local_284 = (void *)0x0;
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_254 = 0;
  local_260 = 0;
  recovered_10007424((void *)0x0);
  recovered_10007424(local_284);
  local_2d4 = 0;
  local_2d8 = 0;
  local_2dc = 0;
  uVar7 = local_260;
  iVar6 = local_258;
switchD_1000a33c_caseD_9:
  local_258 = iVar6;
  local_260 = uVar7;
  iVar4 = local_258;
  iVar19 = local_25c;
  pvVar9 = DAT_1000b5f8;
  if (local_274 <= local_260) goto LAB_1000b304;
  local_254 = 0;
  iVar6 = local_258 + 1;
  uVar7 = local_260 + 1;
  bVar3 = *(byte *)((int)local_278 + local_260);
  uVar17 = (uint)(char)bVar3;
  if (0x35 < bVar3 - 9) {
    if (bVar3 == 0x5b) goto LAB_1000af88;
    if (bVar3 == 0x5d) {
      local_90 = 0xc;
      local_260 = uVar7;
      local_258 = iVar6;
      recovered_1000cfe0((int *)local_1a8,DAT_1000bf2c);
      recovered_1000f6fc((undefined1 *)&local_148,7,local_1a8,iVar19,iVar4);
      local_90 = 0xd;
      recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
      recovered_10007424(local_144);
      recovered_10007424(local_1a8[0]);
      uVar7 = local_260;
      iVar6 = local_258;
    }
    else {
      if (bVar3 != 0x7c) goto switchD_1000a33c_caseD_e;
      if ((local_274 <= uVar7) || (*(char *)((int)local_278 + uVar7) != '|')) {
        local_90 = 0x29;
        local_260 = uVar7;
        local_258 = iVar6;
        piVar11 = recovered_1000cfe0((int *)&local_b0,DAT_1000c1dc);
        local_90 = 0x2a;
        recovered_1000f848(&local_148,&local_26c,iVar19,iVar4,piVar11);
        local_90 = 0x2b;
        recovered_1000f758(&local_148);
        goto LAB_1000bb94;
      }
      local_254 = 1;
      local_258 = local_258 + 2;
      local_260 = local_260 + 2;
      local_90 = 0x2c;
      recovered_1000cfe0((int *)local_244,DAT_1000b53c);
      recovered_1000f6fc((undefined1 *)&local_148,0x19,local_244,iVar19,iVar4);
      local_90 = 0x2d;
      recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
      recovered_10007424(local_144);
      recovered_10007424(local_244[0]);
      uVar7 = local_260;
      iVar6 = local_258;
    }
    goto switchD_1000a33c_caseD_9;
  }
  iVar18 = local_258 + 2;
  switch((uintptr_t)(bVar3)) {
  case 9:
  case 0xb:
  case 0xc:
  case 0x20:
    goto switchD_1000a33c_caseD_9;
  case 10:
    local_90 = 4;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_178,DAT_1000b9b0);
    recovered_1000f6fc((undefined1 *)&local_148,10,local_178,iVar19,iVar4);
    local_90 = 5;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    pvVar9 = local_178[0];
    break;
  case 0xd:
    if (uVar7 < local_274) {
      if (*(char *)((int)local_278 + uVar7) == '\n') {
        uVar7 = local_260 + 2;
        iVar6 = local_258 + 2;
      }
    }
    local_258 = iVar6;
    local_260 = uVar7;
    local_90 = 2;
    recovered_1000cfe0((int *)local_16c,DAT_1000b9b0);
    recovered_1000f6fc((undefined1 *)&local_148,10,local_16c,iVar19,iVar4);
    local_90 = 3;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    pvVar9 = local_16c[0];
    break;
  default:
switchD_1000a33c_caseD_e:
    if ((uVar17 - 0x30 & 0xff) < 10) {
      local_90 = 0x3b;
      local_260 = uVar7;
      local_258 = iVar6;
      recovered_1000fc94((int *)&local_b0,1,bVar3);
      bVar5 = false;
      while (local_260 < local_274) {
        pvVar15 = local_278;
        if (local_278 == (void *)0x0) {
          pvVar15 = pvVar9;
        }
        if (*(byte *)((int)pvVar15 + local_260) - 0x30U < 10) {
          local_254 = 0;
          local_258 = local_258 + 1;
          puVar8 = (undefined1 *)((int)local_278 + local_260);
          local_90 = 0x3c;
          local_260 = local_260 + 1;
          recovered_1000da6c((int *)&local_b0,*puVar8);
        }
        else {
          if (*(byte *)((int)pvVar15 + local_260) != 0x2e || bVar5) break;
          uVar7 = local_260 + 1;
          bVar5 = false;
          if ((local_274 <= uVar7) || (9 < *(byte *)((int)pvVar15 + uVar7) - 0x30U)) break;
          puVar8 = (undefined1 *)((int)local_278 + local_260);
          local_254 = 0;
          local_258 = local_258 + 1;
          local_90 = 0x3d;
          bVar5 = true;
          local_260 = uVar7;
          recovered_1000da6c((int *)&local_b0,*puVar8);
        }
      }
      local_90 = 0x3e;
      recovered_1000dc38(local_154,(int *)&local_b0);
      uVar13 = 1;
      if (bVar5) {
        uVar13 = 2;
      }
      recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_154,iVar19,iVar4);
      recovered_10007424(local_154[0]);
      recovered_10007424((void *)local_b0);
      local_90 = 0x3f;
      recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
      goto LAB_1000b2f8;
    }
    if ((uVar17 != 0x5f) && (0x19 < ((uVar17 & 0xffffffdf) - 0x41 & 0xff))) {
      local_90 = 0x44;
      local_260 = uVar7;
      local_258 = iVar6;
      recovered_1000cfe0(aiStack_160,DAT_1000c20c);
      local_90 = 0x45;
      recovered_1000f9f0((int *)local_154,aiStack_160,uVar17);
      local_90 = 0x46;
      recovered_10008fd8((undefined4 *)&local_b0,(int *)local_154,DAT_1000c210);
      local_90 = 0x47;
      recovered_1000f848(&local_148,&local_26c,iVar19,iVar4,(int *)&local_b0);
      local_90 = 0x48;
      recovered_1000f758(&local_148);
      goto LAB_1000bb94;
    }
    local_90 = 0x40;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000fc94((int *)&local_b0,1,bVar3);
    while (local_260 < local_274) {
      pvVar15 = local_278;
      if (local_278 == (void *)0x0) {
        pvVar15 = pvVar9;
      }
      bVar3 = *(byte *)((int)pvVar15 + local_260);
      if ((((9 < (byte)(bVar3 - 0x30U)) && (bVar3 != 0x5f)) && (0x19 < (byte)((bVar3 & 0xdf) + 0xbf))
          ) && (bVar3 != 0x3f && bVar3 != 0x21)) break;
      local_254 = 0;
      local_258 = local_258 + 1;
      puVar8 = (undefined1 *)((int)local_278 + local_260);
      local_90 = 0x41;
      local_260 = local_260 + 1;
      recovered_1000da6c((int *)&local_b0,*puVar8);
    }
    bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c138);
    uVar13 = 0x1a;
    if (!bVar5) {
      bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c14c);
      uVar13 = 0x1b;
      if (!bVar5) {
        bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c168);
        uVar13 = 0x1c;
        if (!bVar5) {
          bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c16c);
          uVar13 = 0x1d;
          if (!bVar5) {
            bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c198);
            uVar13 = 0x1e;
            if (!bVar5) {
              bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1ac);
              uVar13 = 0x1f;
              if (!bVar5) {
                bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1b0);
                uVar13 = 0x20;
                if (!bVar5) {
                  bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1d8);
                  uVar13 = 0x21;
                  if (!bVar5) {
                    bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1f0);
                    uVar13 = 0x22;
                    if (!bVar5) {
                      bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1f4);
                      uVar13 = 0x23;
                      if (!bVar5) {
                        bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1f8);
                        uVar13 = 0x24;
                        if (!bVar5) {
                          bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c1fc);
                          uVar13 = 0x25;
                          if (!bVar5) {
                            bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c200);
                            uVar13 = 0x26;
                            if (!bVar5) {
                              bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c204);
                              uVar13 = 0x27;
                              if (!bVar5) {
                                bVar5 = recovered_1000e0e8((int *)&local_b0,DAT_1000c208);
                                uVar13 = 0;
                                if (bVar5) {
                                  uVar13 = 0x28;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_90 = 0x42;
    recovered_1000dc38(local_154,(int *)&local_b0);
    recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_154,iVar19,iVar4);
    recovered_10007424(local_154[0]);
    recovered_10007424((void *)local_b0);
    local_90 = 0x43;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    goto LAB_1000b2f8;
  case 0x21:
    uVar13 = 0x10;
    local_254 = false;
    if (uVar7 < local_274) {
      if (*(char *)((int)local_278 + uVar7) == '=') {
        uVar13 = 0x13;
        local_254 = true;
        uVar7 = local_260 + 2;
        iVar6 = local_258 + 2;
      }
    }
    local_258 = iVar6;
    local_260 = uVar7;
    local_90 = 0x1c;
    iVar6 = DAT_1000ba48;
    if ((bool)local_254) {
      iVar6 = DAT_1000ba44;
    }
    recovered_1000cfe0((int *)local_208,iVar6);
    recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_208,iVar19,iVar4);
    local_90 = 0x1d;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_208[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x22:
  case 0x27:
    local_a8 = 0;
    local_b0 = 0;
    local_260 = uVar7;
    local_258 = iVar6;
    while( true ) {
      if (local_274 <= local_260) {
        local_90 = 0x37;
        piVar11 = recovered_1000cfe0(aiStack_160,DAT_1000c1e4);
        local_90 = 0x38;
        recovered_1000f848(local_154,&local_26c,iVar19,iVar4,piVar11);
        local_90 = 0x39;
        recovered_1000f758(local_154);
        goto LAB_1000bb94;
      }
      local_254 = 0;
      uVar7 = local_260 + 1;
      iVar6 = local_258 + 1;
      bVar2 = *(byte *)((int)local_278 + local_260);
      if (bVar2 == bVar3) break;
      if (bVar2 == 0x5c) {
        if (local_274 <= uVar7) {
          local_90 = 0x2f;
          local_260 = uVar7;
          local_258 = iVar6;
          piVar11 = recovered_1000cfe0(aiStack_160,DAT_1000c1e8);
          local_90 = 0x30;
          recovered_1000f848(local_154,&local_26c,iVar19,iVar4,piVar11);
          local_90 = 0x31;
          recovered_1000f758(local_154);
          goto LAB_1000bb94;
        }
        local_260 = local_260 + 2;
        local_258 = local_258 + 2;
        cVar12 = *(char *)((int)local_278 + uVar7);
        if ((cVar12 != '\"') && (cVar12 != '\'' && cVar12 != '\\')) {
          if (cVar12 == 't') {
            cVar12 = '\t';
          }
          else if (cVar12 == 'r') {
            cVar12 = '\r';
          }
          else if (cVar12 == 'n') {
            cVar12 = '\n';
          }
        }
        local_90 = 0x32;
        recovered_1000da6c((int *)&local_b0,cVar12);
      }
      else {
        if (bVar2 == 10 || bVar2 == 0xd) {
          local_90 = 0x33;
          local_260 = uVar7;
          local_258 = iVar6;
          piVar11 = recovered_1000cfe0(aiStack_160,DAT_1000c1e4);
          local_90 = 0x34;
          recovered_1000f848(local_154,&local_26c,iVar19,iVar4,piVar11);
          local_90 = 0x35;
          recovered_1000f758(local_154);
          goto LAB_1000bb94;
        }
        local_90 = 0x36;
        local_260 = uVar7;
        local_258 = iVar6;
        recovered_1000da6c((int *)&local_b0,bVar2);
      }
    }
    local_90 = 0x2e;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000dc38(local_154,(int *)&local_b0);
    recovered_1000f6fc((undefined1 *)&local_148,3,local_154,iVar19,iVar4);
    recovered_10007424(local_154[0]);
    recovered_10007424((void *)local_b0);
    local_90 = 0x3a;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
LAB_1000b2f8:
    recovered_10007424(local_144);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x23:
    while( true ) {
      local_258 = iVar6;
      local_260 = uVar7;
      iVar19 = iVar18;
      local_254 = 0;
      uVar7 = local_260;
      iVar6 = local_258;
      if ((local_274 <= local_260) ||
         (!(*(char *)((int)local_278 + local_260) != '\n' &&
           *(char *)((int)local_278 + local_260) != '\r'))) break;
      iVar18 = iVar19 + 1;
      uVar7 = local_260 + 1;
      iVar6 = iVar19;
    }
    goto switchD_1000a33c_caseD_9;
  case 0x25:
    local_90 = 0x1a;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1fc,DAT_1000babc);
    recovered_1000f6fc((undefined1 *)&local_148,0xf,local_1fc,iVar19,iVar4);
    local_90 = 0x1b;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1fc[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x26:
    if ((local_274 <= uVar7) || (*(char *)((int)local_278 + uVar7) != '&')) {
      local_90 = 0x24;
      local_260 = uVar7;
      local_258 = iVar6;
      piVar11 = recovered_1000cfe0((int *)&local_b0,DAT_1000c1e0);
      local_90 = 0x25;
      recovered_1000f848(&local_148,&local_26c,iVar19,iVar4,piVar11);
      local_90 = 0x26;
      recovered_1000f758(&local_148);
      goto LAB_1000bb94;
    }
    local_254 = 1;
    local_260 = local_260 + 2;
    local_90 = 0x27;
    local_258 = iVar18;
    recovered_1000cfe0((int *)local_238,DAT_1000bba8);
    recovered_1000f6fc((undefined1 *)&local_148,0x18,local_238,iVar19,iVar4);
    local_90 = 0x28;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_238[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x28:
    local_90 = 6;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_184,DAT_1000b7ac);
    recovered_1000f6fc((undefined1 *)&local_148,4,local_184,iVar19,iVar4);
    local_90 = 7;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_184[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x29:
    local_90 = 8;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_190,DAT_1000b73c);
    recovered_1000f6fc((undefined1 *)&local_148,5,local_190,iVar19,iVar4);
    local_90 = 9;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_190[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x2a:
    local_90 = 0x16;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1e4,(int)PTR_DAT_1000bbb4);
    recovered_1000f6fc((undefined1 *)&local_148,0xd,local_1e4,iVar19,iVar4);
    local_90 = 0x17;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1e4[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x2b:
    local_90 = 0x12;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1cc,DAT_1000bdec);
    recovered_1000f6fc((undefined1 *)&local_148,0xb,local_1cc,iVar19,iVar4);
    local_90 = 0x13;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1cc[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x2c:
    local_90 = 0xe;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1b4,DAT_1000b7a8);
    recovered_1000f6fc((undefined1 *)&local_148,8,local_1b4,iVar19,iVar4);
    local_90 = 0xf;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1b4[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x2d:
    local_90 = 0x14;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1d8,DAT_1000b92c);
    recovered_1000f6fc((undefined1 *)&local_148,0xc,local_1d8,iVar19,iVar4);
    local_90 = 0x15;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1d8[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x2f:
    local_90 = 0x18;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1f0,DAT_1000b874);
    recovered_1000f6fc((undefined1 *)&local_148,0xe,local_1f0,iVar19,iVar4);
    local_90 = 0x19;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1f0[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x3b:
    local_90 = 0x10;
    local_260 = uVar7;
    local_258 = iVar6;
    recovered_1000cfe0((int *)local_1c0,DAT_1000b870);
    recovered_1000f6fc((undefined1 *)&local_148,9,local_1c0,iVar19,iVar4);
    local_90 = 0x11;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_1c0[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x3c:
    uVar13 = 0x14;
    local_254 = false;
    local_258 = iVar6;
    if (uVar7 < local_274) {
      if (*(char *)((int)local_278 + uVar7) == '=') {
        uVar13 = 0x15;
        local_254 = true;
        uVar7 = local_260 + 2;
        local_258 = iVar18;
      }
    }
    local_260 = uVar7;
    local_90 = 0x20;
    iVar6 = DAT_1000bbb0;
    if ((bool)local_254) {
      iVar6 = DAT_1000bbac;
    }
    recovered_1000cfe0((int *)local_220,iVar6);
    recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_220,iVar19,iVar4);
    local_90 = 0x21;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_220[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x3d:
    uVar13 = 0x11;
    local_254 = false;
    local_258 = iVar6;
    if (uVar7 < local_274) {
      if (*(char *)((int)local_278 + uVar7) == '=') {
        uVar13 = 0x12;
        local_254 = true;
        uVar7 = local_260 + 2;
        local_258 = iVar18;
      }
    }
    local_260 = uVar7;
    local_90 = 0x1e;
    iVar6 = DAT_1000be9c;
    if ((bool)local_254) {
      iVar6 = DAT_1000be98;
    }
    recovered_1000cfe0((int *)local_214,iVar6);
    recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_214,iVar19,iVar4);
    local_90 = 0x1f;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_214[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  case 0x3e:
    uVar13 = 0x16;
    local_254 = false;
    local_258 = iVar6;
    if (uVar7 < local_274) {
      if (*(char *)((int)local_278 + uVar7) == '=') {
        uVar13 = 0x17;
        local_254 = true;
        uVar7 = local_260 + 2;
        local_258 = iVar18;
      }
    }
    local_260 = uVar7;
    local_90 = 0x22;
    iVar6 = DAT_1000bd90;
    if ((bool)local_254) {
      iVar6 = DAT_1000bd8c;
    }
    recovered_1000cfe0((int *)local_22c,iVar6);
    recovered_1000f6fc((undefined1 *)&local_148,uVar13,local_22c,iVar19,iVar4);
    local_90 = 0x23;
    recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
    recovered_10007424(local_144);
    recovered_10007424(local_22c[0]);
    uVar7 = local_260;
    iVar6 = local_258;
    goto switchD_1000a33c_caseD_9;
  }
  recovered_10007424(pvVar9);
  local_258 = 1;
  local_25c = local_25c + 1;
  uVar7 = local_260;
  iVar6 = local_258;
  goto switchD_1000a33c_caseD_9;
LAB_1000b304:
  local_90 = 0x49;
  recovered_1000cfe0((int *)local_250,DAT_1000c1ec);
  recovered_1000f6fc((undefined1 *)&local_148,0x2a,local_250,local_25c,local_258);
  local_90 = 0x4a;
  recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
  recovered_10007424(local_144);
  recovered_10007424(local_250[0]);
  local_90 = 0x4b;
  recovered_1000dc38(&local_2e8,param_4);
  local_2c8 = local_2d4;
  local_2d0 = local_2dc;
  local_2cc = local_2d8;
  local_2d8 = 0;
  local_2c4 = local_2e8;
  uStack_2c0 = local_2e4;
  uStack_2bc = local_2e0;
  local_2b8 = 0;
  local_9c = aiStack_2b4;
  local_2d4 = 0;
  local_2dc = 0;
  local_2e8 = (void *)0x0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_90 = 0x4c;
  recovered_1000cfe0(local_9c,DAT_1000c214);
  local_294 = 0;
  local_298 = 0;
  local_29c = (int *)0x0;
  local_2a8[2] = 0;
  local_2a8[1] = 0;
  local_2a8[0] = 0;
  local_90 = 0x4d;
  recovered_1000e174(local_9c,(int *)&local_2c4,in_r3);
  local_d4 = 0;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = (int *)0x0;
  local_134 = 0;
  local_138 = 0;
  local_13c = 0;
  local_140 = 0;
  local_144 = (void *)0x0;
  local_148 = 0;
  recovered_10004f54(auStack_118,0,0x41);
  local_d0 = DAT_1000b7b0;
  uStack_c8 = DAT_1000b7b8;
  local_c0 = 0;
  local_b8 = 0;
  local_bc = 0;
  if (local_298 == local_294) {
    local_90 = 0x4e;
    uVar7 = local_298 << 1;
    if (local_298 == 0) {
      uVar7 = 4;
    }
    recovered_1000fdf4((int *)&local_29c,uVar7);
  }
  recovered_1000fe78((int)(local_29c + local_298 * 0x25),(int)&local_148);
  local_298 = local_298 + 1;
  recovered_1000fd6c((int)&local_148);
  local_90 = 0x4f;
  recovered_1000fdc4(local_29c,DAT_1000c218);
  recovered_10007424(local_2e8);
  recovered_1000f53c(&local_2dc);
  while( true ) {
    recovered_100103e0(&local_2d0);
    if (*(char *)(local_2d0 + local_2b8 * 0x18) == '*') break;
    local_90 = 0x50;
    recovered_10010418(&local_2d0,0);
  }
  local_90 = 0x51;
  recovered_1001106c((int)local_9c);
  local_90 = 0x52;
  recovered_1000dc38(&local_148,local_9c);
  local_98 = &local_13c;
  local_90 = 0x53;
  recovered_10014b3c(local_98,local_2a8);
  local_128 = 0;
  local_12c = 0;
  local_130 = (int *)0x0;
  local_90 = 0x54;
  recovered_1000fdf4((int *)&local_130,local_298);
  iVar6 = 0;
  for (uVar7 = 0; uVar7 < local_298; uVar7 = uVar7 + 1) {
    local_90 = 0x55;
    recovered_10011f48((int)local_130 + iVar6,(int)local_29c + iVar6);
    iVar6 = iVar6 + 0x94;
  }
  *local_a0 = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_12c = local_298;
  local_90 = 0x56;
  recovered_100101d0(local_a0,DAT_1000c21c,4);
  local_90 = 0x57;
  recovered_100101ec(local_a0,1);
  local_90 = 0x58;
  recovered_1001020c(local_a0,&local_148);
  local_90 = 0x59;
  recovered_100101ec(local_a0,local_138);
  piVar11 = (int *)(local_13c + 0x14);
  iVar6 = local_138 * 0x18;
  do {
    if (iVar6 == 0) {
      local_90 = 0x5a;
      recovered_100101ec(local_a0,local_12c);
      piVar10 = local_130 + local_12c * 0x25;
      for (piVar11 = local_130; piVar11 != piVar10; piVar11 = piVar11 + 0x25) {
        local_90 = 0x62;
        recovered_1001020c(local_a0,piVar11);
        local_90 = 99;
        recovered_100101ec(local_a0,piVar11[4]);
        piVar16 = (int *)piVar11[3];
        for (iVar6 = piVar11[4] * 0xc; iVar6 != 0; iVar6 = iVar6 + -0xc) {
          local_90 = 0x65;
          recovered_1001020c(local_a0,piVar16);
          piVar16 = piVar16 + 3;
        }
        local_90 = 100;
        recovered_100101ec(local_a0,piVar11[7]);
        puVar14 = (uchar *)piVar11[6];
        for (iVar6 = piVar11[7] << 4; iVar6 != 0; iVar6 = iVar6 + -0x10) {
          local_90 = 0x66;
          recovered_10010248(local_a0,*puVar14);
          local_90 = 0x67;
          recovered_10010264(local_a0,*(int *)(puVar14 + 4));
          local_90 = 0x68;
          recovered_10010264(local_a0,*(int *)(puVar14 + 8));
          local_90 = 0x69;
          recovered_100101ec(local_a0,*(uint *)(puVar14 + 0xc));
          puVar14 = puVar14 + 0x10;
        }
      }
      recovered_1000f590((int)&local_148);
      recovered_1000f5f0((int)&local_2d0);
      recovered_1000f618((int)&local_278);
      recovered_10007908(&uStack_94);
      return;
    }
    local_90 = 0x5b;
    recovered_10010248(local_a0,(uchar)piVar11[-5]);
    switch((uintptr_t)((char)piVar11[-5])) {
    case '\0':
      break;
    case '\x01':
      if (*piVar11 != 1) goto LAB_1000bb94;
      local_b0 = *(undefined8 *)(piVar11 + -3);
      local_90 = 0x5c;
      recovered_100101d0(local_a0,(undefined1 *)&local_b0,8);
      break;
    case '\x02':
      if (*piVar11 != 2) goto LAB_1000bb94;
      local_b0 = *(undefined8 *)(piVar11 + -3);
      local_90 = 0x5d;
      recovered_100101d0(local_a0,(undefined1 *)&local_b0,8);
      break;
    case '\x03':
      if (*piVar11 != 3) goto LAB_1000bb94;
      local_90 = 0x5e;
      recovered_10010248(local_a0,(uchar)piVar11[-3]);
      break;
    case '\x04':
      if (*piVar11 != 4) goto LAB_1000bb94;
      local_90 = 0x5f;
      recovered_1001020c(local_a0,piVar11 + -3);
      break;
    default:
      local_90 = 0x60;
      recovered_1000cfe0((int *)&local_b0,DAT_1000c220);
      local_90 = 0x61;
      recovered_1000f758(&local_b0);
LAB_1000bb94:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x7844U));
      (*pcVar1)();
    }
    piVar11 = piVar11 + 6;
    iVar6 = iVar6 + -0x18;
  } while( true );
LAB_1000af88:
  local_90 = 10;
  local_260 = uVar7;
  local_258 = iVar6;
  recovered_1000cfe0((int *)local_19c,DAT_1000bf94);
  recovered_1000f6fc((undefined1 *)&local_148,6,local_19c,iVar19,iVar4);
  local_90 = 0xb;
  recovered_1000f638(&local_2dc,(undefined1 *)&local_148);
  recovered_10007424(local_144);
  recovered_10007424(local_19c[0]);
  uVar7 = local_260;
  iVar6 = local_258;
  goto switchD_1000a33c_caseD_9;
}

#undef DAT_1000b124
#undef DAT_1000b128
#undef DAT_1000b12c
#undef DAT_1000b53c
#undef DAT_1000b5f8
#undef DAT_1000b73c
#undef DAT_1000b7a8
#undef DAT_1000b7ac
#undef DAT_1000b7b0
#undef DAT_1000b7b8
#undef DAT_1000b870
#undef DAT_1000b874
#undef DAT_1000b92c
#undef DAT_1000b9b0
#undef DAT_1000ba44
#undef DAT_1000ba48
#undef DAT_1000babc
#undef DAT_1000bba8
#undef DAT_1000bbac
#undef DAT_1000bbb0
#undef DAT_1000bd8c
#undef DAT_1000bd90
#undef DAT_1000bdec
#undef DAT_1000be98
#undef DAT_1000be9c
#undef DAT_1000bf2c
#undef DAT_1000bf94
#undef DAT_1000c138
#undef DAT_1000c14c
#undef DAT_1000c168
#undef DAT_1000c16c
#undef DAT_1000c198
#undef DAT_1000c1ac
#undef DAT_1000c1b0
#undef DAT_1000c1d8
#undef DAT_1000c1dc
#undef DAT_1000c1e0
#undef DAT_1000c1e4
#undef DAT_1000c1e8
#undef DAT_1000c1ec
#undef DAT_1000c1f0
#undef DAT_1000c1f4
#undef DAT_1000c1f8
#undef DAT_1000c1fc
#undef DAT_1000c200
#undef DAT_1000c204
#undef DAT_1000c208
#undef DAT_1000c20c
#undef DAT_1000c210
#undef DAT_1000c214
#undef DAT_1000c218
#undef DAT_1000c21c
#undef DAT_1000c220
#undef PTR_DAT_1000bbb4
#undef local_274
#undef local_270
#undef local_26c
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_244
#undef local_238
#undef local_22c
#undef local_220
#undef local_214
#undef local_208
#undef local_1fc
#undef local_1f0
#undef local_1e4
#undef local_1d8
#undef local_1cc
#undef local_1c0
#undef local_1b4
#undef local_1a8
#undef aiStack_160
#undef local_19c
#undef local_190
#undef local_184
#undef local_178
#undef local_16c
#undef local_154
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef auStack_118
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_d4
#undef local_d0
#undef uStack_c8
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_9c
#undef uStack_94
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStackY_390
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef uStack_2c0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef uStack_2bc
#undef local_2d0
#undef aiStack_2b4
#undef local_2cc
#undef local_2c8
#undef local_2c4
#undef local_2b8
#undef local_2a8
#undef local_29c
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_284
#undef uStack_268
#undef local_280
#undef local_27c
#undef local_278
#undef uStack_264

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7ed4U)
 */

void recovered_1000c224(undefined4 *param_1,int *param_2,int *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[64] = {0};

  recovered_1000c234(*param_1,param_2,param_3,param_4,param_5);
  return;
}


#undef DAT_1000c534
#define DAT_1000c534 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x81e4U)))
#undef DAT_1000c538
#define DAT_1000c538 (*(int *)(((uintptr_t)pf_module_state + 0x81e8U)))
#undef DAT_1000c53c
#define DAT_1000c53c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x81ecU)))
#undef DAT_1000c540
#define DAT_1000c540 (*(char * *)(((uintptr_t)pf_module_state + 0x81f0U)))
#undef DAT_1000c544
#define DAT_1000c544 (*(int *)(((uintptr_t)pf_module_state + 0x81f4U)))
#undef DAT_1000c548
#define DAT_1000c548 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x81f8U)))
#undef DAT_1000c54c
#define DAT_1000c54c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x81fcU)))
#define auStack_f0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_e0 (*(int (*)[3])(frame + 32))
#define aiStack_d4 (*(int (*)[3])(frame + 44))
#define local_e4 (*(int * *)(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 108))
#define local_c8 (*(byte *)(frame + 56))
#define local_bc (*(void * *)(frame + 68))
#define local_b8 (*(int *)(frame + 72))
#define local_b0 (*(undefined4 *)(frame + 80))
#define auStack_68 (*(undefined1 (*)[8])(frame + 152))
#define local_ac (*(int * *)(frame + 84))
#define local_a8 (*(int * *)(frame + 88))
#define local_95 (*(undefined1 *)(frame + 107))
#define local_90 (*(undefined4 *)(frame + 112))
#define local_7c (*(undefined4 *)(frame + 132))
#define local_78 (*(undefined4 *)(frame + 136))
#define local_74 (*(undefined1 * *)(frame + 140))
#define local_70 (*(int *)(frame + 144))
#define local_6c (*(undefined1 * *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7ee4U)
 */

undefined4
recovered_1000c234(undefined4 param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  unsigned char frame[288] = {0};

  code *pcVar1;
  byte bVar2;
  int *piVar3;
  char *pcVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_f0;
  local_7c = *DAT_1000c53c;
  local_78 = DAT_1000c534;
  local_b0 = param_5;
  local_70 = DAT_1000c538 + ((uintptr_t)pf_module_state+0x7f44U);
  local_90 = 1;
  local_e4 = param_3;
  recovered_100078f0(&uStack_94);
  recovered_1000a1e8((int *)&local_bc,param_1,param_2,param_4);
  local_90 = 2;
  pcVar4 = DAT_1000c540;
  if ((char *)*local_e4 != (char *)0x0) {
    pcVar4 = (char *)*local_e4;
  }
  local_ac = recovered_10014bc4(aiStack_d4,pcVar4,4);
  piVar3 = local_e4;
  local_ac = local_ac + 2;
  bVar2 = 0;
  if (*local_ac != 0) {
    bVar2 = local_c8;
  }
  if (*local_ac == 0 || (bVar2 & 1) == 0) {
    local_a8 = (int *)recovered_10007750(0x10);
    local_90 = 3;
    recovered_100090c0(aiStack_e0,DAT_1000c544,piVar3);
    local_95 = 1;
    local_90 = 4;
    recovered_1000fb68(local_a8,aiStack_e0);
    local_95 = 0;
    local_90 = 5;
    recovered_10007810((int)local_a8,*DAT_1000c548,*DAT_1000c54c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x8084U));
    (*pcVar1)();
  }
  if (local_b8 != 0) {
    local_90 = 6;
    recovered_10014f1c(local_ac,(int)local_bc,local_b8,0);
  }
  recovered_10014d0c(local_ac);
  local_b8 = 0;
  recovered_10007424(local_bc);
  recovered_10007908(&uStack_94);
  return 1;
}

#undef DAT_1000c534
#undef DAT_1000c538
#undef DAT_1000c53c
#undef DAT_1000c540
#undef DAT_1000c544
#undef DAT_1000c548
#undef DAT_1000c54c
#undef auStack_f0
#undef aiStack_e0
#undef aiStack_d4
#undef local_e4
#undef uStack_94
#undef local_c8
#undef local_bc
#undef local_b8
#undef local_b0
#undef auStack_68
#undef local_ac
#undef local_a8
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8200U)
 */

void recovered_1000c550(undefined1 *param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1000c564(param_1,*param_2,param_3,param_4);
  return;
}


#undef DAT_1000c74c
#define DAT_1000c74c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x83fcU)))
#undef DAT_1000c750
#define DAT_1000c750 (*(int *)(((uintptr_t)pf_module_state + 0x8400U)))
#undef DAT_1000c754
#define DAT_1000c754 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8404U)))
#define local_a0 (*(undefined1 * *)(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(void * *)(frame + 20))
#define local_a8 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8214U)
 */

void recovered_1000c564(undefined1 *param_1,int param_2,int *param_3,int *param_4)

{
  unsigned char frame[224] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_7c = *DAT_1000c754;
  local_78 = DAT_1000c74c;
  local_70 = DAT_1000c750 + ((uintptr_t)pf_module_state+0x826cU);
  local_90 = 1;
  local_a0 = param_1;
  recovered_100078f0(&uStack_94);
  local_b0 = param_2;
  recovered_1000a1e8((int *)&local_ac,param_2,param_3,param_4);
  local_90 = 2;
  recovered_1000c988(local_a0,local_b0,(int *)&local_ac);
  local_a8 = 0;
  recovered_10007424(local_ac);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000c74c
#undef DAT_1000c750
#undef DAT_1000c754
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8408U)
 */

void recovered_1000c758(undefined1 *param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000c76c(param_1,*param_2,param_3);
  return;
}


#undef DAT_1000c960
#define DAT_1000c960 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8610U)))
#undef DAT_1000c964
#define DAT_1000c964 (*(int *)(((uintptr_t)pf_module_state + 0x8614U)))
#undef DAT_1000c968
#define DAT_1000c968 (*(char * *)(((uintptr_t)pf_module_state + 0x8618U)))
#undef DAT_1000c96c
#define DAT_1000c96c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x861cU)))
#undef DAT_1000c970
#define DAT_1000c970 (*(int *)(((uintptr_t)pf_module_state + 0x8620U)))
#define local_bc (*(undefined4 *)(frame + 52))
#define local_b8 (*(undefined4 *)(frame + 56))
#define local_a8 (*(byte *)(frame + 72))
#define local_9c (*(undefined1 * *)(frame + 84))
#define local_98 (*(uint * *)(frame + 88))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define auStack_e0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 60))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
#define local_d4 (*(int *)(frame + 28))
#define local_d0 (*(int * *)(frame + 32))
#define local_cc (*(void * (*)[3])(frame + 36))
#define local_c0 (*(void * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x841cU)
 */

void recovered_1000c76c(undefined1 *param_1,int param_2,int *param_3)

{
  unsigned char frame[272] = {0};

  int *piVar1;
  char *pcVar2;
  uint uVar3;

  pcVar2 = DAT_1000c968;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar2 = (char *)*param_3;
  }
  local_9c = param_1;
  piVar1 = recovered_10015010(aiStack_b4,pcVar2,4);
  local_98 = (uint *)(piVar1 + 2);
  uVar3 = *local_98;
  local_7c = *DAT_1000c96c;
  local_78 = DAT_1000c960;
  local_70 = DAT_1000c964 + ((uintptr_t)pf_module_state+0x849cU);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  recovered_100078f0(&uStack_94);
  if (uVar3 == 0 || (local_a8 & 1) == 0) {
    *local_9c = 0;
    local_9c[8] = 0;
    *(undefined4 *)(local_9c + 0x1c) = 0;
    local_90 = 1;
    recovered_100090c0((int *)(local_9c + 0x20),DAT_1000c970,param_3);
  }
  else {
    local_b8 = 0;
    local_bc = 0;
    local_c0 = (void *)0x0;
    local_90 = 2;
    local_d4 = param_2;
    local_d0 = param_3;
    recovered_10014f88((int *)&local_c0,uVar3);
    local_90 = 3;
    recovered_1000dc38(local_cc,(int *)&local_c0);
    local_90 = 4;
    recovered_1000c564(local_9c,local_d4,(int *)local_cc,local_d0);
    recovered_10007424(local_cc[0]);
    recovered_10007424(local_c0);
  }
  recovered_10014d0c((int *)local_98);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000c960
#undef DAT_1000c964
#undef DAT_1000c968
#undef DAT_1000c96c
#undef DAT_1000c970
#undef local_bc
#undef local_b8
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_e0
#undef aiStack_b4
#undef uStack_94
#undef auStack_68
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8624U)
 */

void recovered_1000c974(undefined1 *param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000c988(param_1,*param_2,param_3);
  return;
}


#undef DAT_1000cbc0
#define DAT_1000cbc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8870U)))
#undef DAT_1000cbc4
#define DAT_1000cbc4 (*(int *)(((uintptr_t)pf_module_state + 0x8874U)))
#undef DAT_1000cbc8
#define DAT_1000cbc8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8878U)))
#define local_90 (*(undefined4 *)(frame + 224))
#define local_7c (*(undefined4 *)(frame + 244))
#define local_78 (*(undefined4 *)(frame + 248))
#define local_74 (*(undefined1 * *)(frame + 252))
#define local_70 (*(int *)(frame + 256))
#define local_6c (*(undefined1 * *)(frame + 260))
#define auStack_cc (*(undefined1 (*)[36])(frame + 164))
#define auStackY_160 (*(undefined1 (*)[128])(frame + 16))
#define aiStack_a8 (*(int (*)[2])(frame + 200))
#define uStack_94 (*(undefined4 *)(frame + 220))
#define auStack_68 (*(undefined1 (*)[8])(frame + 264))
#define local_a0 (*(undefined1 * *)(frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8638U)
 */

void recovered_1000c988(undefined1 *param_1,int param_2,int *param_3)

{
  unsigned char frame[400] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_160 + 0x80;
  local_7c = *DAT_1000cbc8;
  local_78 = DAT_1000cbc0;
  local_70 = DAT_1000cbc4 + ((uintptr_t)pf_module_state+0x868cU);
  local_90 = 1;
  local_a0 = param_1;
  recovered_100078f0(&uStack_94);
  recovered_10015204((int)auStack_cc,param_3);
  local_90 = 2;
  recovered_10015178(aiStack_a8,(int)auStack_cc);
  recovered_1000f590((int)auStack_cc);
  *local_a0 = 1;
  local_90 = 3;
  recovered_10015ac4(local_a0 + 8,param_2,aiStack_a8,0,0,0);
  *(undefined4 *)(local_a0 + 0x20) = 0;
  *(undefined4 *)(local_a0 + 0x24) = 0;
  *(undefined4 *)(local_a0 + 0x28) = 0;
  recovered_1000e2a4(aiStack_a8);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000cbc0
#undef DAT_1000cbc4
#undef DAT_1000cbc8
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_cc
#undef auStackY_160
#undef aiStack_a8
#undef uStack_94
#undef auStack_68
#undef local_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x887cU)
 */

void recovered_1000cbcc(undefined1 *param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000cbe0(param_1,*param_2,param_3);
  return;
}


#undef DAT_1000ce40
#define DAT_1000ce40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8af0U)))
#undef DAT_1000ce44
#define DAT_1000ce44 (*(int *)(((uintptr_t)pf_module_state + 0x8af4U)))
#undef DAT_1000ce48
#define DAT_1000ce48 (*(char * *)(((uintptr_t)pf_module_state + 0x8af8U)))
#undef DAT_1000ce4c
#define DAT_1000ce4c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8afcU)))
#undef DAT_1000ce50
#define DAT_1000ce50 (*(int *)(((uintptr_t)pf_module_state + 0x8b00U)))
#define local_cc (*(int *)(frame + 20))
#define local_c8 (*(int *)(frame + 24))
#define local_c4 (*(uint *)(frame + 28))
#define local_c0 (*(void * *)(frame + 32))
#define local_bc (*(undefined4 *)(frame + 36))
#define local_b8 (*(undefined4 *)(frame + 40))
#define local_a8 (*(byte *)(frame + 56))
#define local_9c (*(undefined1 * *)(frame + 68))
#define local_98 (*(int * *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define auStack_d0 (*(undefined1 (*)[4])(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 44))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8890U)
 */

void recovered_1000cbe0(undefined1 *param_1,int param_2,int *param_3)

{
  unsigned char frame[256] = {0};

  char *pcVar1;
  int iVar2;
  ulonglong uVar3;

  pcVar1 = DAT_1000ce48;
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)*param_3;
  }
  local_9c = param_1;
  local_98 = recovered_10015010(aiStack_b4,pcVar1,4);
  local_98 = local_98 + 2;
  iVar2 = *local_98;
  local_7c = *DAT_1000ce4c;
  local_78 = DAT_1000ce40;
  local_70 = DAT_1000ce44 + ((uintptr_t)pf_module_state+0x8910U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  recovered_100078f0(&uStack_94);
  if (iVar2 == 0 || (local_a8 & 1) == 0) {
    *local_9c = 0;
    local_9c[8] = 0;
    *(undefined4 *)(local_9c + 0x1c) = 0;
    local_90 = 1;
    recovered_100090c0((int *)(local_9c + 0x20),DAT_1000ce50,param_3);
  }
  else {
    local_b8 = 0;
    local_bc = 0;
    local_c0 = (void *)0x0;
    local_90 = 2;
    local_cc = param_2;
    recovered_1001cbb0(local_98,0,0,2);
    local_90 = 3;
    uVar3 = recovered_1001cbfc(local_98);
    local_c8 = (int)(uVar3 >> 0x20);
    local_c4 = (uint)uVar3;
    local_90 = 4;
    recovered_1001cbb0(local_98,0,0,0);
    if ((int)(uint)(local_c4 == 0) <= local_c8) {
      local_90 = 5;
      recovered_1000ee08((int *)&local_c0,local_c4);
      local_90 = 6;
      recovered_1001cc44(local_98,(int)local_c0,local_c4,local_c8);
    }
    local_90 = 7;
    recovered_1000c988(local_9c,local_cc,(int *)&local_c0);
    local_bc = 0;
    recovered_10007424(local_c0);
  }
  recovered_10014d0c(local_98);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000ce40
#undef DAT_1000ce44
#undef DAT_1000ce48
#undef DAT_1000ce4c
#undef DAT_1000ce50
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_d0
#undef aiStack_b4
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b04U)
 */

void recovered_1000ce54(undefined1 *param_1,undefined4 *param_2,int *in_r2)

{
  unsigned char frame[64] = {0};

  recovered_1000cbe0(param_1,*param_2,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b18U)
 */

void recovered_1000ce68(int *in_r0,undefined1 *in_r1)

{
  unsigned char frame[64] = {0};

  recovered_100089a4(in_r0,in_r1);
  return;
}


#undef DAT_1000cf84
#define DAT_1000cf84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8c34U)))
#undef DAT_1000cf88
#define DAT_1000cf88 (*(int *)(((uintptr_t)pf_module_state + 0x8c38U)))
#undef DAT_1000cf8c
#define DAT_1000cf8c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8c3cU)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b28U)
 */

void recovered_1000ce78(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_98 = (int *)*param_3;
  *param_3 = 0;
  local_7c = *DAT_1000cf8c;
  local_78 = DAT_1000cf84;
  local_70 = DAT_1000cf88 + ((uintptr_t)pf_module_state+0x8b88U);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10009d8c(param_1,param_2,&local_98);
  if (local_98 != (int *)0x0) {
    (**(code **)(*local_98 + 4))();
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000cf84
#undef DAT_1000cf88
#undef DAT_1000cf8c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c40U)
 */

void recovered_1000cf90(undefined1 *in_r0,int *in_r1,int *in_r2,int *in_r3)

{
  unsigned char frame[64] = {0};

  recovered_1000c550(in_r0,in_r1,in_r2,in_r3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c50U)
 */

void recovered_1000cfa0(undefined1 *in_r0,undefined4 *in_r1,int *in_r2)

{
  unsigned char frame[64] = {0};

  recovered_1000c758(in_r0,in_r1,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c60U)
 */

void recovered_1000cfb0(undefined1 *in_r0,int *in_r1,int *in_r2)

{
  unsigned char frame[64] = {0};

  recovered_1000c974(in_r0,in_r1,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c70U)
 */

void recovered_1000cfc0(undefined1 *in_r0,undefined4 *in_r1,int *in_r2)

{
  unsigned char frame[64] = {0};

  recovered_1000cbcc(in_r0,in_r1,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c80U)
 */

void recovered_1000cfd0(undefined1 *in_r0,undefined4 *in_r1,int *in_r2)

{
  unsigned char frame[64] = {0};

  recovered_1000ce54(in_r0,in_r1,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c90U)
 */

int * recovered_1000cfe0(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_1000d11c(param_2);
  recovered_1000d020(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8cd0U)
 */

void recovered_1000d020(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *pointer;
  uint uVar2;
  int iVar3;
  int in_r3;

  local_1c = 0;
  iVar1 = recovered_1000d14c(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_1000d1a0(param_1);
    }
    else {
      recovered_1000d1d0(param_1,param_3);
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
    recovered_1000d238(&local_28,*param_1 + local_1c,uVar2,in_r3);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = pointer;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10007424(pointer);
  }
  return;
}

#undef local_28
#undef local_20
#undef local_1c
#undef iStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8dccU)
 */

int recovered_1000d11c(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x8dfcU)
 */

undefined4 recovered_1000d14c(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x8e50U)
 */

void recovered_1000d1a0(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_1000d26c(0);
    param_1[2] = 0;
    *param_1 = uVar1;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8e80U)
 */

void recovered_1000d1d0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000d26c(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)(uVar1 + param_1[1]) = 0;
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8ee8U)
 */

undefined4 * recovered_1000d238(undefined4 *param_1,int param_2,uint param_3,int in_r3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_1000d020(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8f1cU)
 */

uint recovered_1000d26c(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_100073f4(param_1 + 1);
  *puVar1 = 0;
  return (uint)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8f38U)
 */

undefined4 * recovered_1000d288(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8f54U)
 */

void recovered_1000d2a4(undefined4 *param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x8f80U)
 */

undefined4 * recovered_1000d2d0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8fa4U)
 */

int * recovered_1000d2f4(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d314(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8fc4U)
 */

void recovered_1000d314(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x28;
  for (; iVar2 = iVar2 + -0x28, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d35c(*param_1 + iVar2);
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x900cU)
 */

void recovered_1000d35c(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d37c((int *)(param_1 + 0x18));
  recovered_1000d288((undefined4 *)param_1);
  return;
}


#undef DAT_1000d444
#define DAT_1000d444 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x90f4U)))
#undef DAT_1000d448
#define DAT_1000d448 (*(int *)(((uintptr_t)pf_module_state + 0x90f8U)))
#undef DAT_1000d44c
#define DAT_1000d44c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x90fcU)))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x902cU)
 */

int * recovered_1000d37c(int *param_1)

{
  unsigned char frame[208] = {0};

  int iVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1000d44c;
  local_78 = DAT_1000d444;
  local_70 = DAT_1000d448 + ((uintptr_t)pf_module_state+0x9078U);
  iVar1 = param_1[3];
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  local_98 = param_1;
  recovered_1000d450(iVar1,param_1);
  recovered_10007908(&uStack_94);
  return local_98;
}

#undef DAT_1000d444
#undef DAT_1000d448
#undef DAT_1000d44c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef uStack_94
#undef local_98
#undef local_90
#undef local_7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9100U)
 */

void recovered_1000d450(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000d45c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x910cU)
 */

void recovered_1000d45c(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 1) {
    return;
  }
  recovered_1000d468(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9118U)
 */

void recovered_1000d468(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 2) {
    return;
  }
  recovered_1000d474(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9124U)
 */

void recovered_1000d474(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 3) {
    return;
  }
  recovered_1000d480(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9130U)
 */

void recovered_1000d480(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 4) {
    recovered_1000d288(param_2);
    return;
  }
  recovered_1000d494(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9144U)
 */

void recovered_1000d494(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 5) {
    recovered_1001cd5c(param_2);
    return;
  }
  recovered_1000d4a8(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9158U)
 */

void recovered_1000d4a8(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 6) {
    recovered_1001d19c(param_2);
    return;
  }
  recovered_1000d4bc(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x916cU)
 */

void recovered_1000d4bc(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 == 7) {
    recovered_1000d4cc(param_2);
    return;
  }
  return;
}


#undef DAT_1000d5dc
#define DAT_1000d5dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x928cU)))
#undef DAT_1000d5e0
#define DAT_1000d5e0 (*(int *)(((uintptr_t)pf_module_state + 0x9290U)))
#undef DAT_1000d5e4
#define DAT_1000d5e4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9294U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x917cU)
 */

void recovered_1000d4cc(int *param_1)

{
  unsigned char frame[208] = {0};

  int iVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1000d5e4;
  local_78 = DAT_1000d5dc;
  local_70 = DAT_1000d5e0 + ((uintptr_t)pf_module_state+0x91c8U);
  piVar2 = (int *)*param_1;
  recovered_100078f0(&uStack_94);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 1;
      local_98 = param_1;
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)*local_98;
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000d5dc
#undef DAT_1000d5e0
#undef DAT_1000d5e4
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9298U)
 */

uint recovered_1000d5e8(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_1000d2d0((undefined4 *)(param_1 + 0x18));
  recovered_1000d2d0((undefined4 *)(param_1 + 0xc));
  piVar1 = recovered_1000d2f4((int *)param_1);
  return (uint)piVar1;
}


#define abStack_62 (*(byte (*)[66])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x92c0U)
 */

void recovered_1000d610(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[146] = {0};

  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;

  if (((param_2 == (byte *)0x0 || param_3 == (byte *)0x0) || (param_3 < param_2)) ||
     (param_6 - 0x25 < 0xffffffdc || param_6 == 1)) {
    *param_1 = param_2;
    param_1[1] = 1;
  }
  else {
    uVar4 = (int)param_5 >> 0x1f;
    uVar9 = CONCAT44((param_5 ^ uVar4) - (uVar4 + ((param_4 ^ uVar4) < uVar4)),
                     (param_4 ^ uVar4) - uVar4);
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
      uVar7 = (uint)uVar9;
      uVar9 = recovered_10004bac(uVar7,uVar5,param_6,0);
      uVar4 = uVar7 - (int)uVar9 * param_6;
      bVar1 = (byte)uVar4;
      bVar6 = bVar1 + 0x57;
      if (uVar4 < 10) {
        bVar6 = bVar1 | 0x30;
      }
      abStack_62[uVar8 + 1] = bVar6;
      uVar4 = uVar8 + 1;
    } while (uVar5 != 0 || uVar5 < (param_6 <= uVar7));
    if (0x7fffffff < param_5) {
      abStack_62[uVar8 + 2] = 0x2d;
      uVar4 = uVar8 + 2;
    }
    uVar2 = 2;
    if (uVar4 <= (uint)((int)param_3 - (int)param_2)) {
      pbVar3 = param_2;
      for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar3 = abStack_62[uVar5];
        pbVar3 = pbVar3 + 1;
      }
      param_3 = param_2 + uVar4;
      uVar2 = 0;
    }
    param_1[1] = uVar2;
    *param_1 = param_3;
  }
  return;
}

#undef abStack_62

#undef DAT_1000da34
#define DAT_1000da34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x96e4U)))
#undef DAT_1000da38
#define DAT_1000da38 (*(double *)(((uintptr_t)pf_module_state + 0x96e8U)))
#undef DAT_1000da40
#define DAT_1000da40 (*(double *)(((uintptr_t)pf_module_state + 0x96f0U)))
#undef DAT_1000da48
#define DAT_1000da48 (*(double *)(((uintptr_t)pf_module_state + 0x96f8U)))
#undef DAT_1000da50
#define DAT_1000da50 (*(uint *)(((uintptr_t)pf_module_state + 0x9700U)))
#undef DAT_1000da54
#define DAT_1000da54 (*(uint *)(((uintptr_t)pf_module_state + 0x9704U)))
#undef DAT_1000da58
#define DAT_1000da58 (*(int *)(((uintptr_t)pf_module_state + 0x9708U)))
#undef DAT_1000da5c
#define DAT_1000da5c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x970cU)))
#undef DAT_1000da60
#define DAT_1000da60 (*(int *)(((uintptr_t)pf_module_state + 0x9710U)))
#undef DAT_1000da64
#define DAT_1000da64 (*(int *)(((uintptr_t)pf_module_state + 0x9714U)))
#undef DAT_1000da68
#define DAT_1000da68 (*(int *)(((uintptr_t)pf_module_state + 0x9718U)))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(uint *)(frame + 28))
#define local_b0 (*(undefined8 *)(frame + 32))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(void * (*)[3])(frame + 44))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x93dcU)
 */

void recovered_1000d72c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[240] = {0};

  bool bVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1 = 0;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_1000da5c;
  local_78 = DAT_1000da34;
  local_70 = DAT_1000da58 + ((uintptr_t)pf_module_state+0x9430U);
  local_98 = param_1;
  recovered_100078f0(&uStack_94);
  dVar6 = pf_bits_double(CONCAT44(param_3,param_2));
  if (NAN(dVar6)) {
    iVar5 = DAT_1000da60;
  }
  else {
    bVar1 = true;
    if (0.0 <= dVar6) {
      if (dVar6 == 0.0) {
        bVar1 = 1.0 / dVar6 < 0.0;
      }
      else {
        bVar1 = false;
      }
    }
    if (dVar6 == DAT_1000da38) {
      iVar5 = DAT_1000da64;
    }
    else {
      if (dVar6 != DAT_1000da40) {
        *local_98 = 0;
        if (bVar1) {
          dVar6 = -dVar6;
        }
        local_98[1] = 0;
        local_98[2] = 0;
        lVar7 = recovered_10004578(SUB84(dVar6,0),(int)(pf_double_bits(dVar6) >> 0x20));
        uVar4 = recovered_1000466c((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20));
        dVar6 = (dVar6 - pf_bits_double(CONCAT44(extraout_r1,uVar4))) * DAT_1000da48 + 0.5;
        uVar8 = recovered_10004578(SUB84(dVar6,0),(int)(pf_double_bits(dVar6) >> 0x20));
        iVar5 = (int)((ulonglong)uVar8 >> 0x20);
        uVar4 = (uint)uVar8;
        uVar9 = CONCAT44(iVar5 - (uint)!CARRY4(uVar4,DAT_1000da50),uVar4 + DAT_1000da50);
        lVar2 = lVar7 + 1;
        if ((uint)-iVar5 < (uint)(uVar4 <= DAT_1000da54)) {
          lVar2 = lVar7;
          uVar9 = uVar8;
        }
        local_b8 = (uint)((ulonglong)uVar9 >> 0x20);
        local_b4 = (uint)uVar9;
        if (bVar1) {
          local_90 = 1;
          local_b0 = CONCAT44((int)((ulonglong)lVar2 >> 0x20),(uint)local_b0);
          local_a8 = (int)lVar2;
          recovered_1000da6c(local_98,0x2d);
          uVar9 = CONCAT44(local_b8,local_b4);
          lVar2 = CONCAT44(PF_PART4(local_b0, 4),local_a8);
        }
        local_b8 = (uint)((ulonglong)uVar9 >> 0x20);
        local_b4 = (uint)uVar9;
        local_90 = 2;
        recovered_1000dad0(local_a4,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
        local_90 = 3;
        recovered_10008fbc(local_98,(int *)local_a4);
        recovered_10007424(local_a4[0]);
        local_90 = 4;
        recovered_1000da6c(local_98,0x2e);
        uVar9 = 100000;
        iVar5 = 6;
        while( true ) {
          piVar3 = local_98;
          if (iVar5 == 0) break;
          local_90 = 5;
          local_b0 = uVar9;
          local_a8 = iVar5;
          uVar9 = recovered_10004bac(local_b4,local_b8,(uint)uVar9,(uint)((ulonglong)uVar9 >> 0x20))
          ;
          uVar9 = recovered_10004cd0((uint)uVar9,(uint)((ulonglong)uVar9 >> 0x20),10,0);
          recovered_1000da6c(piVar3,(byte)uVar9 | 0x30);
          uVar9 = recovered_10004bac((uint)local_b0,PF_PART4(local_b0, 4),10,0);
          iVar5 = local_a8 + -1;
        }
        goto LAB_1000d814;
      }
      iVar5 = DAT_1000da68;
    }
  }
  local_90 = 0xffffffff;
  recovered_1000cfe0(local_98,iVar5);
LAB_1000d814:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000da34
#undef DAT_1000da38
#undef DAT_1000da40
#undef DAT_1000da48
#undef DAT_1000da50
#undef DAT_1000da54
#undef DAT_1000da58
#undef DAT_1000da5c
#undef DAT_1000da60
#undef DAT_1000da64
#undef DAT_1000da68
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_a8
#undef local_a4
#undef auStack_c0
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
 * Address: ((uintptr_t)pf_module_state+0x971cU)
 */

void recovered_1000da6c(int *param_1,undefined1 param_2)

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
    recovered_1000d1d0(param_1,uVar2);
  }
  recovered_1000d1a0(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#define local_38 (*(uint *)(frame + 16))
#define local_34 (*(int *)(frame + 20))
#define auStack_30 (*(undefined1 (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9780U)
 */

void recovered_1000dad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[104] = {0};

  int in_r3;

  recovered_1000db40(&local_38,(uint)auStack_30,(uint)(auStack_30 + 0x20),param_2,param_3,10);
  if (local_34 == 0) {
    recovered_1000d238(param_1,(int)auStack_30,local_38 - (int)auStack_30,in_r3);
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

#undef local_38
#undef local_34
#undef auStack_30

#define local_61 (*(byte (*)[65])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x97f0U)
 */

void recovered_1000db40(uint *param_1,uint param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,uint param_6)

{
  unsigned char frame[145] = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;

  uVar7 = CONCAT44(param_5,param_4);
  if (((param_2 == 0 || param_3 == 0) || (param_3 < param_2)) ||
     (param_6 - 0x25 < 0xffffffdc || param_6 == 1)) {
    *param_1 = param_2;
    param_1[1] = 1;
  }
  else {
    uVar6 = 0;
    do {
      uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
      uVar4 = (uint)uVar7;
      uVar7 = recovered_10004bac(uVar4,uVar5,param_6,0);
      uVar2 = uVar4 - (int)uVar7 * param_6;
      bVar1 = (byte)uVar2;
      bVar3 = bVar1 + 0x57;
      if (uVar2 < 10) {
        bVar3 = bVar1 | 0x30;
      }
      local_61[uVar6] = bVar3;
      uVar6 = uVar6 + 1;
    } while (uVar5 != 0 || uVar5 < (param_6 <= uVar4));
    uVar2 = 2;
    if (uVar6 <= param_3 - param_2) {
      for (uVar2 = 0; uVar6 != uVar2; uVar2 = uVar2 + 1) {
        *(byte *)(param_2 + uVar2) = local_61[(uVar6 - uVar2) + -1];
      }
      param_3 = param_2 + uVar6;
      uVar2 = 0;
    }
    param_1[1] = uVar2;
    *param_1 = param_3;
  }
  return;
}

#undef local_61

#undef DAT_1000dc7c
#define DAT_1000dc7c (*(int *)(((uintptr_t)pf_module_state + 0x992cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x98e8U)
 */

undefined4 * recovered_1000dc38(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_1000dc7c;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_1000d020(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_1000dc7c

#define local_20 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9930U)
 */

int * recovered_1000dc80(int *param_1,int param_2,uint param_3,int in_r3)

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
    iVar1 = recovered_1000d14c(param_1,param_2,&local_20,in_r3);
    iVar3 = param_1[1];
    if (iVar1 == 0) {
      recovered_1000d1d0(param_1,iVar3 + unaff_r5);
      for (; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      if ((uint)(iVar3 - local_20) < unaff_r5) {
        unaff_r5 = iVar3 - local_20;
      }
      recovered_1000d1d0(param_1,unaff_r5 + iVar3);
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
 * Address: ((uintptr_t)pf_module_state+0x9a14U)
 */

void recovered_1000dd64(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int in_r3;

  uVar1 = recovered_1000d11c(param_2);
  recovered_1000dc80(param_1,param_2,uVar1,in_r3);
  return;
}


#undef DAT_1000ddbc
#define DAT_1000ddbc (*(int * *)(((uintptr_t)pf_module_state + 0x9a6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9a40U)
 */

int * recovered_1000dd90(int *param_1,int in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000ddbc + 8;
  recovered_1000cfe0(param_1 + 1,in_r1);
  return param_1;
}

#undef DAT_1000ddbc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9a70U)
 */

void recovered_1000ddc0(int *param_1)

{
  unsigned char frame[64] = {0};

  int *pointer;

  pointer = recovered_1000ddec(param_1);
  recovered_10007424(pointer);
  return;
}


#undef DAT_1000dde8
#define DAT_1000dde8 (*(int *)(((uintptr_t)pf_module_state + 0x9a98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9a84U)
 */

int recovered_1000ddd4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_1000dde8;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}

#undef DAT_1000dde8

#undef DAT_1000de18
#define DAT_1000de18 (*(int * *)(((uintptr_t)pf_module_state + 0x9ac8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9a9cU)
 */

int * recovered_1000ddec(int *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000de18 + 8;
  recovered_1000d288(param_1 + 1);
  return param_1;
}

#undef DAT_1000de18

#define local_18 (*(undefined4 *)(frame + 28))
#define piStack_20 (*(int * *)(frame + 20))
#define uStack_24 (*(undefined4 *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9accU)
 */

undefined4 recovered_1000de1c(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[84] = {0};

  int iVar1;

  uStack_24 = param_1;
  piStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  iVar1 = recovered_1000e444((int *)(param_1 + 0x28),param_2);
  if (iVar1 == *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) * 0x10) {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    recovered_1000e468((int *)&piStack_20,(int *)(param_1 + 0x28),param_2,&local_18);
    recovered_1000e50c((int *)(param_1 + 0x50));
    uStack_24 = uStack_24 & 0xffffff;
    recovered_1000ec30((int *)(param_1 + 0x5c),(undefined1 *)((int)&uStack_24 + 3));
  }
  else {
    local_18 = *(undefined4 *)(iVar1 + 0xc);
  }
  return local_18;
}

#undef local_18
#undef piStack_20
#undef uStack_24
#undef uStack_1c

#define local_19 (*(undefined1 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b48U)
 */

void recovered_1000de98(int param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[73] = {0};


  if (*(uint *)(param_1 + 0x54) <= param_2) {
    recovered_1000ed00((int *)(param_1 + 0x50),param_2 + 1);
    local_19 = 0;
    recovered_1000eda0((int *)(param_1 + 0x5c),param_2 + 1,&local_19);
  }
  recovered_1000e08c((undefined1 *)(*(int *)(param_1 + 0x50) + param_2 * 0x18),param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + param_2) = 1;
  return;
}

#undef local_19

#undef DAT_1000e07c
#define DAT_1000e07c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d2cU)))
#undef DAT_1000e080
#define DAT_1000e080 (*(int *)(((uintptr_t)pf_module_state + 0x9d30U)))
#undef DAT_1000e084
#define DAT_1000e084 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d34U)))
#undef DAT_1000e088
#define DAT_1000e088 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d38U)))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_a8 (*(int (*)[3])(frame + 40))
#define local_b4 (*(int * *)(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_b0 (*(undefined1 (*)[8])(frame + 32))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9bc4U)
 */

int recovered_1000df14(int *param_1,int *param_2)

{
  unsigned char frame[240] = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = recovered_1000ee64(param_1,param_2);
  local_7c = *DAT_1000e084;
  local_78 = DAT_1000e07c;
  local_70 = DAT_1000e080 + ((uintptr_t)pf_module_state+0x9c1cU);
  iVar4 = *param_1;
  iVar3 = param_1[1];
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (iVar2 == iVar4 + iVar3 * 0x28) {
    local_90 = 0xffffffff;
    recovered_1000ee8c((int)param_1);
    local_90 = 1;
    local_9c = 0;
    local_b0[0] = 0;
    local_b4 = param_1;
    recovered_1000eebc(param_1,param_2,local_b0);
    recovered_1000d37c(aiStack_a8);
    piVar1 = local_b4;
    local_90 = 0xffffffff;
    recovered_1000ea5c(local_b4 + 6,(undefined4 *)*DAT_1000e088);
    recovered_1000ef2c((int)piVar1,piVar1[1] + -1);
    iVar2 = *piVar1 + piVar1[1] * 0x28 + -0x28;
  }
  recovered_10007908(&uStack_94);
  return iVar2 + 0x10;
}

#undef DAT_1000e07c
#undef DAT_1000e080
#undef DAT_1000e084
#undef DAT_1000e088
#undef auStack_c0
#undef aiStack_a8
#undef local_b4
#undef uStack_94
#undef local_b0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9d3cU)
 */

undefined1 * recovered_1000e08c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1000f350((int *)(param_1 + 8),(int *)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9d5cU)
 */

void recovered_1000e0ac(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100073f4(0x20);
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  puVar1[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  puVar1[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  puVar1[4] = 0;
  puVar1[5] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  puVar1[6] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  puVar1[7] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  recovered_1000e1b0((undefined2 *)puVar1);
  recovered_1000e1d8(param_1,(int)puVar1);
  return;
}


#undef DAT_1000e128
#define DAT_1000e128 (*(char * *)(((uintptr_t)pf_module_state + 0x9dd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9d98U)
 */

bool recovered_1000e0e8(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar3 = param_1[1];
  pcVar4 = DAT_1000e128;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  iVar2 = recovered_1000d11c((int)param_2);
  bVar1 = recovered_1000e3c4(pcVar4,iVar3,param_2,iVar2);
  return bVar1;
}

#undef DAT_1000e128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ddcU)
 */

int * recovered_1000e12c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#undef DAT_1000e1ac
#define DAT_1000e1ac (*(int *)(((uintptr_t)pf_module_state + 0x9e5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9e24U)
 */

int * recovered_1000e174(int *param_1,int *param_2,int in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != param_2) {
    iVar1 = DAT_1000e1ac;
    if (*param_2 != 0) {
      iVar1 = *param_2;
    }
    recovered_1000d020(param_1,iVar1,param_2[1],in_r3);
  }
  return param_1;
}

#undef DAT_1000e1ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9e60U)
 */

void recovered_1000e1b0(undefined2 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


#undef DAT_1000e230
#define DAT_1000e230 (*(int * *)(((uintptr_t)pf_module_state + 0x9ee0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9e88U)
 */

undefined4 * recovered_1000e1d8(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_100073f4(0x10);
    piVar1[3] = param_2;
    piVar1[2] = 1;
    piVar1[1] = 1;
    *piVar1 = *DAT_1000e230 + 8;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef DAT_1000e230

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ee4U)
 */

void recovered_1000e234(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ee8U)
 */

void recovered_1000e238(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9eecU)
 */

void recovered_1000e23c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    pointer = (void *)recovered_1000e268(*(int *)(param_1 + 0xc));
  }
  recovered_10007424(pointer);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f18U)
 */

int recovered_1000e268(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d288((undefined4 *)(param_1 + 0x14));
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  recovered_1000e2a4((int *)(param_1 + 8));
  return param_1;
}


#undef DAT_1000e3b8
#define DAT_1000e3b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa068U)))
#undef DAT_1000e3bc
#define DAT_1000e3bc (*(int *)(((uintptr_t)pf_module_state + 0xa06cU)))
#undef DAT_1000e3c0
#define DAT_1000e3c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xa070U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9f54U)
 */

int * recovered_1000e2a4(int *param_1)

{
  unsigned char frame[208] = {0};

  int iVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1000e3c0;
  local_78 = DAT_1000e3b8;
  local_70 = DAT_1000e3bc + ((uintptr_t)pf_module_state+0x9fa0U);
  piVar2 = (int *)*param_1;
  recovered_100078f0(&uStack_94);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 1;
      local_98 = param_1;
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)*local_98;
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  recovered_10007908(&uStack_94);
  return param_1;
}

#undef DAT_1000e3b8
#undef DAT_1000e3bc
#undef DAT_1000e3c0
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_a0
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa074U)
 */

bool recovered_1000e3c4(char *param_1,int param_2,char *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0xa0acU)
 */

undefined4 * recovered_1000e3fc(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  recovered_1000d450(param_1[3],param_1);
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[3] = 7;
  param_1[1] = uVar1;
  param_2[1] = 0;
  *param_2 = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa0f4U)
 */

int recovered_1000e444(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000e560(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x10;
}


#undef DAT_1000e508
#define DAT_1000e508 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xa1b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa118U)
 */

void recovered_1000e468(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_1000e444(param_2,param_3);
  bVar2 = iVar1 == *param_2 + param_2[1] * 0x10;
  if (bVar2) {
    recovered_1000e678((int)param_2);
    recovered_1000e6a8(param_2,param_3,param_4);
    recovered_1000ea5c(param_2 + 6,(undefined4 *)*DAT_1000e508);
    recovered_1000e714(param_2,param_2[1] + -1);
    iVar1 = *param_2 + param_2[1] * 0x10 + -0x10;
  }
  *(bool *)(param_1 + 1) = bVar2;
  *param_1 = iVar1;
  return;
}

#undef DAT_1000e508

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa1bcU)
 */

void recovered_1000e50c(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000eab8(param_1,uVar3);
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1 + 1;
  puVar2 = (undefined1 *)(*param_1 + iVar1 * 0x18);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa210U)
 */

int recovered_1000e560(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000e5d4((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      uVar1 = recovered_1000e644((int *)(*param_1 + iVar3 * 0x10),param_2);
      if (uVar1 != 0) {
        return iVar3;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa284U)
 */

uint recovered_1000e5d4(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000e5f8(param_1 + 0x24,param_2);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


#undef DAT_1000e610
#define DAT_1000e610 (*(int *)(((uintptr_t)pf_module_state + 0xa2c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2a8U)
 */

uint recovered_1000e5f8(undefined4 param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar2;
  uint uVar1;

  iVar2 = DAT_1000e610;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  uVar1 = recovered_1000e614(iVar2,param_2[1]);
  return uVar1;
}

#undef DAT_1000e610

#undef DAT_1000e63c
#define DAT_1000e63c (*(uint *)(((uintptr_t)pf_module_state + 0xa2ecU)))
#undef DAT_1000e640
#define DAT_1000e640 (*(int *)(((uintptr_t)pf_module_state + 0xa2f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2c4U)
 */

uint recovered_1000e614(byte *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = DAT_1000e63c;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (uVar1 ^ *param_1) * DAT_1000e640;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

#undef DAT_1000e63c
#undef DAT_1000e640

#undef DAT_1000e674
#define DAT_1000e674 (*(char * *)(((uintptr_t)pf_module_state + 0xa324U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa2f4U)
 */

uint recovered_1000e644(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = (char *)*param_1;
  if ((char *)*param_1 == (char *)0x0) {
    pcVar3 = DAT_1000e674;
  }
  pcVar2 = (char *)*param_2;
  if ((char *)*param_2 == (char *)0x0) {
    pcVar2 = DAT_1000e674;
  }
  bVar1 = recovered_1000e3c4(pcVar3,param_1[1],pcVar2,param_2[1]);
  return (uint)bVar1;
}

#undef DAT_1000e674

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa328U)
 */

void recovered_1000e678(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < (uint)((*(int *)(param_1 + 4) + 1) * 4))) {
    recovered_1000e74c(param_1,*(int *)(param_1 + 4) * 2 + 2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa358U)
 */

int recovered_1000e6a8(int *param_1,int *param_2,undefined4 *param_3)

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
    recovered_1000e964(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000ea40((undefined4 *)(*param_1 + iVar1 * 0x10),param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + (iVar1 + 1) * 0x10 + -0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa3c4U)
 */

void recovered_1000e714(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000e5d4((int)param_1,(int *)(*param_1 + param_2 * 0x10));
  iVar2 = param_1[3];
  *(undefined4 *)(param_1[6] + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


#undef DAT_1000e7a8
#define DAT_1000e7a8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xa458U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa3fcU)
 */

void recovered_1000e74c(int param_1,uint param_2)

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
  uVar1 = recovered_1000e7b8(uVar1);
  puVar2 = (undefined4 *)*DAT_1000e7a8;
  recovered_1000e7ac((int *)(param_1 + 0xc),uVar1,puVar2);
  recovered_1000e7ac((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar2);
  recovered_1000e7d4(param_1);
  return;
}

#undef DAT_1000e7a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa45cU)
 */

void recovered_1000e7ac(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000e82c(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa468U)
 */

uint recovered_1000e7b8(uint param_1)

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
 * Address: ((uintptr_t)pf_module_state+0xa484U)
 */

void recovered_1000e7d4(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_1000e714((int *)param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4dcU)
 */

void recovered_1000e82c(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000e894(param_1,param_2);
    return;
  }
  recovered_1000e8f0(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa544U)
 */

void recovered_1000e894(int *param_1,uint param_2)

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
    recovered_1000e8f0(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0xa5a0U)
 */

void recovered_1000e8f0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000e950(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined4 *)(uVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa600U)
 */

uint recovered_1000e950(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 << 2);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa614U)
 */

void recovered_1000e964(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000e9e4(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000e9f8((undefined4 *)(uVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_1000d288((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0x10;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa694U)
 */

uint recovered_1000e9e4(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 << 4);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa6a8U)
 */

void recovered_1000e9f8(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ea14(param_1,param_2);
  *(undefined4 *)(uVar1 + 0xc) = param_2[3];
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa6c4U)
 */

uint recovered_1000ea14(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xa6f0U)
 */

void recovered_1000ea40(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000dc38(param_1,param_2);
  puVar1[3] = *param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa70cU)
 */

int recovered_1000ea5c(int *param_1,undefined4 *param_2)

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
    recovered_1000e8f0(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa768U)
 */

void recovered_1000eab8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000eb3c(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000eb54((undefined1 *)(uVar1 + iVar2),(undefined1 *)(*param_1 + iVar2));
      recovered_1000d37c((int *)(*param_1 + iVar2 + 8));
      iVar2 = iVar2 + 0x18;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa7ecU)
 */

uint recovered_1000eb3c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 * 0x18);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa804U)
 */

undefined1 * recovered_1000eb54(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1000eb74((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa824U)
 */

undefined8 * recovered_1000eb74(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = *(int *)((int)param_2 + 0xc);
  *(int *)((int)param_1 + 0xc) = iVar1;
  recovered_1000eb9c(iVar1,param_1,param_2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa84cU)
 */

void recovered_1000eb9c(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000eba8(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa858U)
 */

void recovered_1000eba8(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 1) {
    uVar1 = *(undefined4 *)param_3;
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_3 + 4);
    *(undefined4 *)param_2 = uVar1;
    return;
  }
  recovered_1000ebc8(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa878U)
 */

void recovered_1000ebc8(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  recovered_1000ebdc(param_1,(undefined4 *)param_2,(undefined4 *)param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa88cU)
 */

void recovered_1000ebdc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  recovered_1000ebf0(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa8a0U)
 */

void recovered_1000ebf0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 4) {
    recovered_1000ea14(param_2,param_3);
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_3[1] = 0;
    *param_3 = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa8e0U)
 */

int recovered_1000ec30(int *param_1,undefined1 *param_2)

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
    recovered_1000ec90(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa940U)
 */

void recovered_1000ec90(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000ecf0(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa9a0U)
 */

uint recovered_1000ecf0(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa9b0U)
 */

void recovered_1000ed00(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 * 0x18 + -0x10;
    for (; param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_1000d37c((int *)(*param_1 + iVar2));
      iVar2 = iVar2 + -0x18;
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_1000eab8(param_1,param_2);
    uVar3 = param_1[1];
    iVar2 = uVar3 * 0x18;
    while (uVar3 < param_2) {
      uVar3 = uVar3 + 1;
      param_1[1] = uVar3;
      puVar1 = (undefined1 *)(*param_1 + iVar2);
      *puVar1 = 0;
      iVar2 = iVar2 + 0x18;
      *(undefined4 *)(puVar1 + 0x14) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaa50U)
 */

void recovered_1000eda0(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000ee08(param_1,param_2);
    return;
  }
  recovered_1000ec90(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaab8U)
 */

void recovered_1000ee08(int *param_1,uint param_2)

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
    recovered_1000ec90(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0xab14U)
 */

int recovered_1000ee64(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000ef68(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab3cU)
 */

void recovered_1000ee8c(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < (uint)((*(int *)(param_1 + 4) + 1) * 4))) {
    recovered_1000f004(param_1,*(int *)(param_1 + 4) * 2 + 2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab6cU)
 */

int recovered_1000eebc(int *param_1,int *param_2,undefined1 *param_3)

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
    recovered_1000f0d8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000f260(*param_1 + iVar1 * 0x28,param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xabdcU)
 */

void recovered_1000ef2c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_1000efe0(param_1,(int *)(*(int *)param_1 + param_2 * 0x28));
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xac18U)
 */

int recovered_1000ef68(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000efe0((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      uVar1 = recovered_1000e644((int *)(*param_1 + iVar3 * 0x28),param_2);
      if (uVar1 != 0) {
        return iVar3;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xac90U)
 */

uint recovered_1000efe0(int param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000e5f8(param_1 + 0x24,in_r1);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


#undef DAT_1000f060
#define DAT_1000f060 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xad10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xacb4U)
 */

void recovered_1000f004(int param_1,uint param_2)

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
  uVar1 = recovered_1000f064(uVar1);
  puVar2 = (undefined4 *)*DAT_1000f060;
  recovered_1000e7ac((int *)(param_1 + 0xc),uVar1,puVar2);
  recovered_1000e7ac((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar2);
  recovered_1000f080(param_1);
  return;
}

#undef DAT_1000f060

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xad14U)
 */

uint recovered_1000f064(uint param_1)

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
 * Address: ((uintptr_t)pf_module_state+0xad30U)
 */

void recovered_1000f080(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_1000ef2c(param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xad88U)
 */

void recovered_1000f0d8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000f158(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000f170(uVar1 + iVar2,*param_1 + iVar2);
      recovered_1000d35c(*param_1 + iVar2);
      iVar2 = iVar2 + 0x28;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xae08U)
 */

uint recovered_1000f158(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 * 0x28);
  return (uint)pvVar1;
}


#undef DAT_1000f254
#define DAT_1000f254 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaf04U)))
#undef DAT_1000f258
#define DAT_1000f258 (*(int *)(((uintptr_t)pf_module_state + 0xaf08U)))
#undef DAT_1000f25c
#define DAT_1000f25c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xaf0cU)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xae20U)
 */

int recovered_1000f170(int param_1,int param_2)

{
  unsigned char frame[208] = {0};

  int iVar1;

  local_98 = param_1;
  recovered_1000ea14((undefined4 *)param_1,(undefined4 *)param_2);
  iVar1 = local_98;
  local_7c = *DAT_1000f25c;
  local_78 = DAT_1000f254;
  local_70 = DAT_1000f258 + ((uintptr_t)pf_module_state+0xae7cU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000eb54((undefined1 *)(iVar1 + 0x10),(undefined1 *)(param_2 + 0x10));
  iVar1 = local_98;
  recovered_10007908(&uStack_94);
  return iVar1;
}

#undef DAT_1000f254
#undef DAT_1000f258
#undef DAT_1000f25c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_1000f344
#define DAT_1000f344 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaff4U)))
#undef DAT_1000f348
#define DAT_1000f348 (*(int *)(((uintptr_t)pf_module_state + 0xaff8U)))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xaffcU)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xaf10U)
 */

int recovered_1000f260(int param_1,int *param_2,undefined1 *param_3)

{
  unsigned char frame[208] = {0};

  int iVar1;

  local_98 = param_1;
  recovered_1000dc38((undefined4 *)param_1,param_2);
  iVar1 = local_98;
  local_7c = *DAT_1000f34c;
  local_78 = DAT_1000f344;
  local_70 = DAT_1000f348 + ((uintptr_t)pf_module_state+0xaf6cU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000eb54((undefined1 *)(iVar1 + 0x10),param_3);
  iVar1 = local_98;
  recovered_10007908(&uStack_94);
  return iVar1;
}

#undef DAT_1000f344
#undef DAT_1000f348
#undef DAT_1000f34c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb000U)
 */

int * recovered_1000f350(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != param_2) {
    recovered_1000d450(param_1[3],param_1);
    iVar1 = param_2[3];
    param_1[3] = iVar1;
    recovered_1000f390(iVar1,param_1,param_2);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb040U)
 */

void recovered_1000f390(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1000f39c(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb04cU)
 */

void recovered_1000f39c(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 1) {
    iVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = iVar1;
    return;
  }
  recovered_1000f3bc(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb06cU)
 */

void recovered_1000f3bc(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 2) {
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    return;
  }
  recovered_1000f3d0(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb080U)
 */

void recovered_1000f3d0(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 3) {
    *(char *)param_2 = (char)*param_3;
    return;
  }
  recovered_1000f3e4(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb094U)
 */

void recovered_1000f3e4(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 4) {
    recovered_1000dc38(param_2,param_3);
    return;
  }
  recovered_1000f3fc(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb0acU)
 */

void recovered_1000f3fc(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 5) {
    recovered_1000f42c(param_2,param_3);
    return;
  }
  recovered_1000f414(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb0c4U)
 */

void recovered_1000f414(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 6) {
    recovered_1000f464(param_2,param_3);
    return;
  }
  recovered_1000f450(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb0dcU)
 */

void recovered_1000f42c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = param_2[1];
  param_1[1] = iVar1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb100U)
 */

void recovered_1000f450(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 7) {
    recovered_1000f488(param_2,param_3);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb114U)
 */

void recovered_1000f464(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = param_2[1];
  param_1[1] = iVar1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb138U)
 */

void recovered_1000f488(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = param_2[1];
  param_1[1] = iVar1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb15cU)
 */

undefined4 recovered_1000f4ac(int param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_1000f518((int *)(param_1 + 0x28),in_r1);
  if (iVar1 == *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) * 0x10) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb18cU)
 */

int recovered_1000f4dc(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  bool bVar3;

  iVar1 = 0;
  bVar3 = param_2 <= *(uint *)(param_1 + 0x54);
  bVar2 = *(uint *)(param_1 + 0x54) == param_2;
  if (bVar3 && !bVar2) {
    bVar3 = param_2 <= *(uint *)(param_1 + 0x60);
    bVar2 = *(uint *)(param_1 + 0x60) == param_2;
  }
  if (bVar3 && !bVar2) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + param_2) != '\0') {
      iVar1 = *(int *)(param_1 + 0x50) + param_2 * 0x18;
    }
    return iVar1;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb1c8U)
 */

int recovered_1000f518(int *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000e560(param_1,in_r1);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb1ecU)
 */

int * recovered_1000f53c(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x18 + -0x14;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d288((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x18;
  }
  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb240U)
 */

uint recovered_1000f590(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = iVar3 * 0x94;
  for (; iVar1 = iVar1 + -0x94, iVar3 != 0; iVar3 = iVar3 + -1) {
    recovered_1000fd6c(*(int *)(param_1 + 0x18) + iVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  recovered_10007424(*(void **)(param_1 + 0x18));
  recovered_1001d318((int *)(param_1 + 0xc));
  puVar2 = recovered_1000d288((undefined4 *)param_1);
  return (uint)puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb2a0U)
 */

void recovered_1000f5f0(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000f590(param_1 + 0x1c);
  recovered_1000d288((undefined4 *)(param_1 + 0xc));
  recovered_1000f53c((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb2c8U)
 */

void recovered_1000f618(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d288((undefined4 *)(param_1 + 0xc));
  recovered_1000d288((undefined4 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb2e8U)
 */

void recovered_1000f638(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar4 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar4 = 4;
    }
    if (uVar1 < uVar4) {
      pvVar2 = recovered_100073f4(uVar4 * 0x18);
      iVar3 = 0;
      for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
        recovered_1000fad8((undefined1 *)((int)pvVar2 + iVar3),(undefined1 *)(*param_1 + iVar3));
        recovered_1000d288((undefined4 *)(*param_1 + iVar3 + 4));
        iVar3 = iVar3 + 0x18;
      }
      recovered_10007424((void *)*param_1);
      uVar1 = param_1[1];
      param_1[2] = uVar4;
      *param_1 = (int)pvVar2;
    }
  }
  recovered_1000fad8((undefined1 *)(*param_1 + uVar1 * 0x18),param_2);
  param_1[1] = param_1[1] + 1;
  return;
}


#undef DAT_1000f748
#define DAT_1000f748 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb3f8U)))
#undef DAT_1000f750
#define DAT_1000f750 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xb400U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb3acU)
 */

void recovered_1000f6fc(undefined1 *param_1,undefined1 param_2,undefined4 *param_3,
                       undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = param_2;
  uVar1 = DAT_1000f750;
  *(undefined8 *)(param_1 + 8) = DAT_1000f748;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  recovered_1000fb14((undefined4 *)(param_1 + 4),param_3);
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

#undef DAT_1000f748
#undef DAT_1000f750

#undef DAT_1000f834
#define DAT_1000f834 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb4e4U)))
#undef DAT_1000f838
#define DAT_1000f838 (*(int *)(((uintptr_t)pf_module_state + 0xb4e8U)))
#undef DAT_1000f83c
#define DAT_1000f83c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb4ecU)))
#undef DAT_1000f840
#define DAT_1000f840 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb4f0U)))
#undef DAT_1000f844
#define DAT_1000f844 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb4f4U)))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb408U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

void recovered_1000f758(void *message)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  int *piVar2;

  piVar2 = (int *)recovered_10007750(0x10);
  local_7c = *DAT_1000f83c;
  local_78 = DAT_1000f834;
  local_70 = DAT_1000f838 + ((uintptr_t)pf_module_state+0xb464U);
  local_90 = 1;
  local_98 = piVar2;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000fb64(piVar2,message);
  local_90 = 0xffffffff;
  recovered_10007810((int)local_98,*DAT_1000f840,*DAT_1000f844);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    recovered_1000779c((int)local_98);
    local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    recovered_10007950(local_8c);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xb4b0U));
    (*pcVar1)();
  }
}

#undef DAT_1000f834
#undef DAT_1000f838
#undef DAT_1000f83c
#undef DAT_1000f840
#undef DAT_1000f844
#undef auStack_a0
#undef local_98
#undef local_90
#undef uStack_94
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000f9dc
#define DAT_1000f9dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb68cU)))
#undef DAT_1000f9e0
#define DAT_1000f9e0 (*(int *)(((uintptr_t)pf_module_state + 0xb690U)))
#undef DAT_1000f9e4
#define DAT_1000f9e4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb694U)))
#undef DAT_1000f9e8
#define DAT_1000f9e8 (*(int *)(((uintptr_t)pf_module_state + 0xb698U)))
#undef DAT_1000f9ec
#define DAT_1000f9ec (*(int *)(((uintptr_t)pf_module_state + 0xb69cU)))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_ac (*(int * *)(frame + 20))
#define local_a8 (*(int * *)(frame + 24))
#define local_a4 (*(undefined4 * *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb4f8U)
 */

void recovered_1000f848(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                       int *param_5)

{
  unsigned char frame[224] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_1000f9e4;
  local_78 = DAT_1000f9dc;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_70 = DAT_1000f9e0 + ((uintptr_t)pf_module_state+0xb55cU);
  local_90 = 1;
  local_ac = (int *)param_3;
  local_a8 = (int *)param_4;
  local_a4 = param_1;
  recovered_100078f0(&uStack_94);
  recovered_10008fbc((int *)&local_a0,param_2);
  local_90 = 2;
  recovered_1000dd64((int *)&local_a0,DAT_1000f9e8);
  local_90 = 3;
  local_ac = (int *)recovered_1000fb98((int *)&local_a0,local_ac);
  local_90 = 4;
  recovered_1000dd64(local_ac,DAT_1000f9e8);
  local_90 = 5;
  local_a8 = (int *)recovered_1000fb98(local_ac,local_a8);
  local_90 = 6;
  recovered_1000dd64(local_a8,DAT_1000f9ec);
  local_90 = 7;
  recovered_10008fbc(local_a8,param_5);
  local_90 = 8;
  recovered_1000dc38(local_a4,(int *)&local_a0);
  recovered_10007424(local_a0);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000f9dc
#undef DAT_1000f9e0
#undef DAT_1000f9e4
#undef DAT_1000f9e8
#undef DAT_1000f9ec
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef uStack_94
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74

#undef DAT_1000facc
#define DAT_1000facc (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb77cU)))
#undef DAT_1000fad0
#define DAT_1000fad0 (*(int *)(((uintptr_t)pf_module_state + 0xb780U)))
#undef DAT_1000fad4
#define DAT_1000fad4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb784U)))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb6a0U)
 */

void recovered_1000f9f0(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_98 = param_1;
  recovered_1000dc38(param_1,param_2);
  piVar1 = local_98;
  local_7c = *DAT_1000fad4;
  local_78 = DAT_1000facc;
  local_70 = DAT_1000fad0 + ((uintptr_t)pf_module_state+0xb6fcU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000da6c(piVar1,(undefined1)param_3);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1000facc
#undef DAT_1000fad0
#undef DAT_1000fad4
#undef local_98
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb788U)
 */

undefined1 * recovered_1000fad8(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_1000ea14((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7c4U)
 */

undefined4 * recovered_1000fb14(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    recovered_10007424((void *)*param_1);
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


#undef DAT_1000fb94
#define DAT_1000fb94 (*(int * *)(((uintptr_t)pf_module_state + 0xb844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb814U)
 */

int * recovered_1000fb64(int *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000fb94 + 8;
  recovered_1000dc38(param_1 + 1,in_r1);
  return param_1;
}

#undef DAT_1000fb94

#undef DAT_1000fb94
#define DAT_1000fb94 (*(int * *)(((uintptr_t)pf_module_state + 0xb844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb818U)
 */

int * recovered_1000fb68(int *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  *param_1 = *DAT_1000fb94 + 8;
  recovered_1000dc38(param_1 + 1,in_r1);
  return param_1;
}

#undef DAT_1000fb94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb848U)
 */

uint recovered_1000fb98(int *param_1,undefined4 in_r1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_1000fba0(param_1,in_r1,0);
  return (uint)piVar1;
}


#undef DAT_1000fc88
#define DAT_1000fc88 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb938U)))
#undef DAT_1000fc8c
#define DAT_1000fc8c (*(int *)(((uintptr_t)pf_module_state + 0xb93cU)))
#undef DAT_1000fc90
#define DAT_1000fc90 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xb940U)))
#define local_a4 (*(int * *)(frame + 28))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb850U)
 */

int * recovered_1000fba0(int *param_1,undefined4 in_r1,undefined4 in_r2)

{
  unsigned char frame[224] = {0};


  recovered_1000dad0(local_a0,in_r1,in_r2);
  local_7c = *DAT_1000fc90;
  local_78 = DAT_1000fc88;
  local_70 = DAT_1000fc8c + ((uintptr_t)pf_module_state+0xb8a8U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100078f0(&uStack_94);
  local_a4 = param_1;
  recovered_10008fbc(param_1,(int *)local_a0);
  recovered_10007424(local_a0[0]);
  recovered_10007908(&uStack_94);
  return local_a4;
}

#undef DAT_1000fc88
#undef DAT_1000fc8c
#undef DAT_1000fc90
#undef local_a4
#undef auStack_b0
#undef local_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb944U)
 */

int * recovered_1000fc94(int *param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000fcc0(param_1,param_2,param_3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb970U)
 */

void recovered_1000fcc0(int *param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1000fd2c(param_2);
    recovered_1000d1d0(param_1,uVar1);
  }
  recovered_1000d1a0(param_1);
  for (uVar1 = param_1[1]; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = param_3;
  }
  param_1[1] = param_2;
  *(undefined1 *)(*param_1 + param_2) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb9dcU)
 */

uint recovered_1000fd2c(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 0x10;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 << 1;
  } while (uVar2 < param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb9f8U)
 */

undefined4 * recovered_1000fd48(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xba1cU)
 */

void recovered_1000fd6c(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d288((undefined4 *)(param_1 + 0x88));
  recovered_10010168((int *)(param_1 + 0x74));
  recovered_1000d2d0((undefined4 *)(param_1 + 100));
  recovered_100100b4((undefined4 *)(param_1 + 0x58));
  recovered_100100d8(param_1 + 0x30);
  recovered_10010100((int *)(param_1 + 0x24));
  recovered_1000fd48((undefined4 *)(param_1 + 0x18));
  recovered_10010100((int *)(param_1 + 0xc));
  recovered_1000d288((undefined4 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xba74U)
 */

int * recovered_1000fdc4(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  uVar1 = recovered_1000d11c(param_2);
  recovered_1000d020(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbaa4U)
 */

void recovered_1000fdf4(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_100073f4(param_2 * 0x94);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000fe78((int)pvVar1 + iVar2,*param_1 + iVar2);
      recovered_1000fd6c(*param_1 + iVar2);
      iVar2 = iVar2 + 0x94;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbb28U)
 */

int recovered_1000fe78(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 uVar2;

  uVar1 = recovered_1000ea14((undefined4 *)param_1,(undefined4 *)param_2);
  recovered_1000ff40((undefined4 *)(uVar1 + 0xc),(undefined4 *)(param_2 + 0xc));
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  recovered_1000ff40((undefined4 *)(param_1 + 0x24),(undefined4 *)(param_2 + 0x24));
  recovered_1000ff6c((undefined4 *)(param_1 + 0x30),(undefined4 *)(param_2 + 0x30));
  recovered_1000ffcc((undefined4 *)(param_1 + 0x58),(undefined4 *)(param_2 + 0x58));
  recovered_1000fff8((undefined4 *)(param_1 + 100),(undefined4 *)(param_2 + 100));
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  recovered_1000ea14((undefined4 *)(param_1 + 0x88),(undefined4 *)(param_2 + 0x88));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbbf0U)
 */

void recovered_1000ff40(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xbc1cU)
 */

undefined4 * recovered_1000ff6c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ffa0(param_1,param_2);
  recovered_1000fff8((undefined4 *)(uVar1 + 0xc),param_2 + 3);
  recovered_1000fff8(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc50U)
 */

uint recovered_1000ffa0(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xbc7cU)
 */

void recovered_1000ffcc(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xbca8U)
 */

void recovered_1000fff8(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0xbcd4U)
 */

void recovered_10010024(undefined4 *param_1)

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
 * Address: ((uintptr_t)pf_module_state+0xbd00U)
 */

int * recovered_10010050(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010070(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd20U)
 */

void recovered_10010070(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x10;
  for (; iVar2 = iVar2 + -0x10, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d288((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd64U)
 */

undefined4 * recovered_100100b4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbd88U)
 */

void recovered_100100d8(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d2d0((undefined4 *)(param_1 + 0x18));
  recovered_1000d2d0((undefined4 *)(param_1 + 0xc));
  recovered_10010050((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbdb0U)
 */

int * recovered_10010100(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010120(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbdd0U)
 */

void recovered_10010120(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d288((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbe18U)
 */

int * recovered_10010168(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010188(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbe38U)
 */

void recovered_10010188(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x24 + -0x14;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_100100b4((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x24;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbe80U)
 */

void recovered_100101d0(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  recovered_10010284(param_1,*param_1 + param_1[1],param_2,param_2 + param_3);
  return;
}


/* Preserve the scalar little-endian bytecode operand. Pooka's Free Software License. */
void recovered_100101ec(int *vector,uint32_t value){byte data[4]={value,value>>8,value>>16,value>>24};recovered_100101d0(vector,data,4);}


#undef DAT_10010244
#define DAT_10010244 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xbef4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbebcU)
 */

void recovered_1001020c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  recovered_100101ec(param_1,param_2[1]);
  puVar1 = DAT_10010244;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100101d0(param_1,puVar1,param_2[1]);
  return;
}

#undef DAT_10010244

/* Preserve the scalar bytecode opcode. Pooka's Free Software License. */
void recovered_10010248(int *vector,byte value){recovered_100101d0(vector,&value,1);}


/* Preserve the signed bytecode operand bits. Pooka's Free Software License. */
void recovered_10010264(int *vector,int value){recovered_100101ec(vector,(uint32_t)value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbf34U)
 */

int recovered_10010284(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_1000ec90(param_1,uVar5);
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
 * Address: ((uintptr_t)pf_module_state+0xc00cU)
 */

int recovered_1001035c(int *param_1,undefined1 *param_2)

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
    recovered_1000ec90(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc06cU)
 */

undefined4 * recovered_100103bc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc090U)
 */

void recovered_100103e0(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  do {
    do {
      bVar1 = recovered_1001164c(param_1,10);
    } while (bVar1);
    bVar1 = recovered_1001164c(param_1,9);
  } while (bVar1);
  return;
}


#undef DAT_10011040
#define DAT_10011040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xccf0U)))
#undef DAT_10011044
#define DAT_10011044 (*(int *)(((uintptr_t)pf_module_state + 0xccf4U)))
#undef DAT_10011048
#define DAT_10011048 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xccf8U)))
#undef DAT_1001104c
#define DAT_1001104c (*(int *)(((uintptr_t)pf_module_state + 0xccfcU)))
#undef DAT_10011050
#define DAT_10011050 (*(int *)(((uintptr_t)pf_module_state + 0xcd00U)))
#undef DAT_10011054
#define DAT_10011054 (*(int *)(((uintptr_t)pf_module_state + 0xcd04U)))
#undef DAT_10011058
#define DAT_10011058 (*(int *)(((uintptr_t)pf_module_state + 0xcd08U)))
#undef DAT_1001105c
#define DAT_1001105c (*(int *)(((uintptr_t)pf_module_state + 0xcd0cU)))
#undef DAT_10011060
#define DAT_10011060 (*(int *)(((uintptr_t)pf_module_state + 0xcd10U)))
#undef DAT_10011064
#define DAT_10011064 (*(int *)(((uintptr_t)pf_module_state + 0xcd14U)))
#undef DAT_10011068
#define DAT_10011068 (*(int *)(((uintptr_t)pf_module_state + 0xcd18U)))
#define local_13c (*(undefined4 *)(frame + 228))
#define local_bc (*(int (*)[3])(frame + 356))
#define iStack_144 (*(int *)(frame + 220))
#define iStack_148 (*(int *)(frame + 216))
#define local_b0 (*(void * *)(frame + 368))
#define local_ac (*(void * *)(frame + 372))
#define local_a8 (*(int (*)[5])(frame + 376))
#define local_90 (*(undefined4 *)(frame + 400))
#define local_7c (*(undefined4 *)(frame + 420))
#define local_78 (*(undefined4 *)(frame + 424))
#define local_74 (*(undefined1 * *)(frame + 428))
#define local_70 (*(int *)(frame + 432))
#define uStack_94 (*(undefined4 *)(frame + 396))
#define local_6c (*(undefined1 * *)(frame + 436))
#define auStack_68 (*(undefined1 (*)[8])(frame + 440))
#define auStackY_210 (*(undefined1 (*)[128])(frame + 16))
#define local_168 (*(void * (*)[2])(frame + 184))
#define local_150 (*(void * *)(frame + 208))
#define aiStack_160 (*(int (*)[4])(frame + 192))
#define local_14c (*(void * *)(frame + 212))
#define local_140 (*(undefined4 *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc0c8U)
 */

void recovered_10010418(int *param_1,int param_2)

{
  unsigned char frame[576] = {0};

  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  int extraout_r2 = 0;
  int in_r3;
  int extraout_r3 = 0;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;

  bVar1 = recovered_1001164c(param_1,0x1a);
  local_7c = *DAT_10011048;
  local_78 = DAT_10011040;
  local_70 = DAT_10011044 + ((uintptr_t)pf_module_state+0xc124U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_210 + 0x80;
  recovered_100078f0(&uStack_94);
  if (bVar1) {
    local_90 = 0xffffffff;
    iVar7 = *param_1;
    iVar9 = param_1[6];
    recovered_100116ac(param_1,param_2);
    recovered_100118a0(param_1);
    local_a8[0] = 0;
    local_ac = (void *)0x0;
    local_b0 = (void *)0x0;
    iVar7 = iVar7 + iVar9 * 0x18;
    local_90 = 1;
    iVar9 = recovered_100118d4((int)param_1,param_2,0x14,*(undefined4 *)(iVar7 + -8));
    local_150 = (void *)CONCAT13(PF_PART1(local_150, 3),0x1d0000);
    local_150 = (void *)CONCAT22(PF_PART2(local_150, 2),0x1c1b);
    local_90 = 2;
    recovered_10011918(param_1,param_2,(char *)&local_150,3);
    local_90 = 3;
    local_150 = (void *)recovered_100118d4((int)param_1,param_2,0x13,*(undefined4 *)(iVar7 + -8));
    local_90 = 4;
    recovered_10011af8((int *)&local_b0,&local_150);
    iVar7 = param_2 * 0x94 + param_1[0xd];
    *(undefined4 *)(*(int *)(iVar7 + 0x18) + iVar9 * 0x10 + 4) = *(undefined4 *)(iVar7 + 0x1c);
    while (bVar1 = recovered_1001164c(param_1,0x1b), bVar1) {
      local_90 = 5;
      recovered_10011990((undefined1 *)&local_150,
                         (undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
      local_90 = 6;
      recovered_100116ac(param_1,param_2);
      recovered_100118a0(param_1);
      local_90 = 7;
      iVar7 = recovered_100118d4((int)param_1,param_2,0x14,local_140);
      local_168[0] = (void *)CONCAT13(PF_PART1(local_168[0], 3),0x1d0000);
      local_168[0] = (void *)CONCAT22(PF_PART2(local_168[0], 2),0x1c1b);
      local_90 = 8;
      recovered_10011918(param_1,param_2,(char *)local_168,3);
      local_90 = 9;
      local_168[0] = (void *)recovered_100118d4((int)param_1,param_2,0x13,local_140);
      local_90 = 10;
      recovered_10011af8((int *)&local_b0,local_168);
      iVar9 = param_2 * 0x94 + param_1[0xd];
      *(undefined4 *)(*(int *)(iVar9 + 0x18) + iVar7 * 0x10 + 4) = *(undefined4 *)(iVar9 + 0x1c);
      recovered_10007424(local_14c);
    }
    bVar1 = recovered_1001164c(param_1,0x1c);
    if (bVar1) {
      recovered_100118a0(param_1);
      local_90 = 0xb;
      local_150 = (void *)CONCAT31(PF_PART3(local_150, 1),0x1d);
      recovered_10011918(param_1,param_2,(char *)&local_150,1);
    }
    local_90 = 0xc;
    recovered_1000cfe0((int *)&local_150,DAT_1001104c);
    local_90 = 0xd;
    recovered_100119cc(param_1,0x1d,(int *)&local_150);
    recovered_10007424(local_150);
    for (iVar7 = 0; (int)local_ac * 4 != iVar7; iVar7 = iVar7 + 4) {
      iVar9 = param_2 * 0x94 + param_1[0xd];
      *(undefined4 *)(*(int *)(iVar9 + 0x18) + *(int *)((int)local_b0 + iVar7) * 0x10 + 4) =
           *(undefined4 *)(iVar9 + 0x1c);
    }
    local_ac = (void *)0x0;
    local_14c = local_b0;
  }
  else {
    bVar1 = recovered_1001164c(param_1,0x1e);
    if (bVar1) {
      iVar9 = *param_1;
      iVar7 = param_1[6];
      uVar10 = *(undefined4 *)(param_2 * 0x94 + param_1[0xd] + 0x1c);
      local_90 = 0xffffffff;
      recovered_100116ac(param_1,param_2);
      recovered_100118a0(param_1);
      iVar9 = iVar9 + iVar7 * 0x18;
      local_90 = 0xffffffff;
      iVar7 = recovered_100118d4((int)param_1,param_2,0x14,*(undefined4 *)(iVar9 + -8));
      local_90 = 0xffffffff;
      local_150 = (void *)CONCAT31(PF_PART3(local_150, 1),0x1d);
      recovered_10011918(param_1,param_2,(char *)&local_150,1);
      local_90 = 0xffffffff;
      recovered_10011824((int)param_1,param_2,0x13,uVar10,0,*(undefined4 *)(iVar9 + -8));
      local_90 = 0xffffffff;
      recovered_1000cfe0((int *)&local_150,DAT_10011050);
      local_90 = 0xe;
      recovered_100119cc(param_1,0x1d,(int *)&local_150);
      recovered_10007424(local_150);
      iVar9 = param_2 * 0x94 + param_1[0xd];
      *(undefined4 *)(*(int *)(iVar9 + 0x18) + iVar7 * 0x10 + 4) = *(undefined4 *)(iVar9 + 0x1c);
      goto LAB_10010b58;
    }
    bVar1 = recovered_1001164c(param_1,0x1f);
    if (!bVar1) {
      bVar1 = recovered_1001164c(param_1,0x20);
      pbVar8 = (byte *)(*param_1 + param_1[6] * 0x18);
      uVar5 = (uint)*pbVar8;
      if (bVar1) {
        if (((uVar5 - 0x1b < 0x10) && ((1 << (uVar5 - 0x1b & 0xff) & 0x8007U) != 0)) ||
           (uVar5 - 9 < 2)) {
          local_13c = 0;
          local_150 = (void *)((uint)local_150 & 0xffffff00);
          local_90 = 0x21;
          iVar7 = recovered_10011dbc((int)param_1,(undefined1 *)&local_150);
          local_90 = 0x22;
          recovered_10011824((int)param_1,param_2,0,iVar7,0,*(undefined4 *)(pbVar8 + -8));
          recovered_1000d37c(&iStack_148);
        }
        else {
          local_90 = 0xffffffff;
          recovered_100116ac(param_1,param_2);
        }
        uVar10 = *(undefined4 *)(pbVar8 + -8);
        uVar6 = 0x17;
      }
      else {
        if (((uVar5 == 0) && (uVar5 = param_1[6] + 1, uVar5 < (uint)param_1[1])) &&
           (*(char *)(*param_1 + uVar5 * 0x18) == '\x11')) {
          local_90 = 0xffffffff;
          recovered_1000cfe0((int *)&local_b0,DAT_10011064);
          local_90 = 0x23;
          puVar3 = (undefined1 *)recovered_100119cc(param_1,0,(int *)&local_b0);
          local_90 = 0x24;
          recovered_10011990((undefined1 *)&local_150,puVar3);
          recovered_10007424(local_b0);
          local_90 = 0x25;
          recovered_1000cfe0((int *)&local_b0,DAT_10011068);
          local_90 = 0x26;
          recovered_100119cc(param_1,0x11,(int *)&local_b0);
          recovered_10007424(local_b0);
          local_90 = 0x27;
          recovered_100116ac(param_1,param_2);
          local_90 = 0x28;
          recovered_10008370((undefined1 *)&local_b0,(int *)&local_14c);
          local_90 = 0x29;
          iVar7 = recovered_10011dbc((int)param_1,(undefined1 *)&local_b0);
          local_90 = 0x2a;
          recovered_10011824((int)param_1,param_2,2,iVar7,0,local_140);
          recovered_1000d37c(local_a8);
          local_90 = 0x2b;
          recovered_10011824((int)param_1,param_2,3,0,0,local_140);
          goto LAB_10010b54;
        }
        uVar10 = *(undefined4 *)(pbVar8 + 0x10);
        local_90 = 0xffffffff;
        recovered_100116ac(param_1,param_2);
        uVar6 = 3;
      }
      local_90 = 0xffffffff;
      recovered_10011824((int)param_1,param_2,uVar6,0,0,uVar10);
      goto LAB_10010b58;
    }
    local_90 = 0xffffffff;
    iVar9 = *param_1;
    iVar2 = param_1[6];
    recovered_1000cfe0((int *)&local_150,DAT_10011054);
    local_90 = 0xf;
    puVar3 = (undefined1 *)recovered_100119cc(param_1,0,(int *)&local_150);
    local_90 = 0x10;
    recovered_10011990((undefined1 *)&local_b0,puVar3);
    recovered_10007424(local_150);
    local_bc[2] = 0;
    local_bc[1] = 0;
    local_bc[0] = 0;
    bVar1 = recovered_1001164c(param_1,4);
    iVar7 = DAT_10011058;
    if (bVar1) {
      if (*(char *)(*param_1 + param_1[6] * 0x18) != '\x05') {
        do {
          local_90 = 0x11;
          recovered_1000cfe0((int *)&local_150,iVar7);
          local_90 = 0x12;
          iVar4 = recovered_100119cc(param_1,0,(int *)&local_150);
          local_90 = 0x13;
          recovered_10011ddc(local_bc,(int *)(iVar4 + 4));
          recovered_10007424(local_150);
          bVar1 = recovered_1001164c(param_1,8);
        } while (bVar1);
      }
      local_90 = 0x14;
      recovered_1000cfe0((int *)&local_150,DAT_1001105c);
      local_90 = 0x15;
      recovered_100119cc(param_1,5,(int *)&local_150);
      recovered_10007424(local_150);
    }
    local_90 = 0x16;
    recovered_10011b54(&local_150);
    local_90 = 0x17;
    recovered_1000e174((int *)&local_150,(int *)&local_ac,in_r3);
    local_90 = 0x18;
    recovered_10011d70(&iStack_144,local_bc,extraout_r2,extraout_r3);
    iVar4 = param_1[0xe];
    iVar7 = iVar4;
    if (iVar4 == param_1[0xf]) {
      local_90 = 0x19;
      uVar5 = iVar4 << 1;
      if (iVar4 == 0) {
        uVar5 = 4;
      }
      recovered_1000fdf4(param_1 + 0xd,uVar5);
      iVar7 = param_1[0xe];
    }
    local_90 = 0x1a;
    recovered_10011f48(iVar7 * 0x94 + param_1[0xd],(int)&local_150);
    param_1[0xe] = param_1[0xe] + 1;
    recovered_100118a0(param_1);
    local_90 = 0x1b;
    local_168[0] = (void *)CONCAT31(PF_PART3(local_168[0], 1),0x1d);
    recovered_10011918(param_1,iVar4,(char *)local_168,1);
    local_90 = 0x1c;
    recovered_1000cfe0((int *)local_168,DAT_10011060);
    local_90 = 0x1d;
    recovered_100119cc(param_1,0x1d,(int *)local_168);
    recovered_10007424(local_168[0]);
    local_90 = 0x1e;
    recovered_10008370((undefined1 *)local_168,(int *)&local_ac);
    local_90 = 0x1f;
    iVar7 = recovered_10011dbc((int)param_1,(undefined1 *)local_168);
    local_90 = 0x20;
    recovered_10011824((int)param_1,param_2,0x16,iVar7,iVar4,
                       *(undefined4 *)(iVar9 + iVar2 * 0x18 + -8));
    recovered_1000d37c(aiStack_160);
    recovered_1000fd6c((int)&local_150);
    recovered_10010100(local_bc);
    local_14c = local_ac;
  }
LAB_10010b54:
  recovered_10007424(local_14c);
LAB_10010b58:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10011040
#undef DAT_10011044
#undef DAT_10011048
#undef DAT_1001104c
#undef DAT_10011050
#undef DAT_10011054
#undef DAT_10011058
#undef DAT_1001105c
#undef DAT_10011060
#undef DAT_10011064
#undef DAT_10011068
#undef local_13c
#undef local_bc
#undef iStack_144
#undef iStack_148
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68
#undef auStackY_210
#undef local_168
#undef local_150
#undef aiStack_160
#undef local_14c
#undef local_140

#undef DAT_10011638
#define DAT_10011638 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd2e8U)))
#undef DAT_1001163c
#define DAT_1001163c (*(int *)(((uintptr_t)pf_module_state + 0xd2ecU)))
#undef DAT_10011640
#define DAT_10011640 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd2f0U)))
#undef DAT_10011644
#define DAT_10011644 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd2f4U)))
#undef DAT_10011648
#define DAT_10011648 (*(char * *)(((uintptr_t)pf_module_state + 0xd2f8U)))
#define local_ac (*(undefined4 *)(frame + 196))
#define local_a8 (*(undefined4 *)(frame + 200))
#define local_a4 (*(undefined4 *)(frame + 204))
#define local_a0 (*(int (*)[4])(frame + 208))
#define local_90 (*(undefined4 *)(frame + 224))
#define local_7c (*(undefined4 *)(frame + 244))
#define local_78 (*(undefined4 *)(frame + 248))
#define local_74 (*(undefined1 * *)(frame + 252))
#define local_70 (*(int *)(frame + 256))
#define local_6c (*(undefined1 * *)(frame + 260))
#define auStackY_160 (*(undefined1 (*)[128])(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 264))
#define local_b4 (*(void * *)(frame + 188))
#define local_b0 (*(undefined4 *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcd1cU)
 */

void recovered_1001106c(int param_1)

{
  unsigned char frame[400] = {0};

  code *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *in_r0;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r2_01 = 0;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 uVar17;
  int in_r3;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  int *piVar24;
  undefined1 *puVar25;
  int *piVar26;
  bool bVar27;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_160 + 0x80;
  local_7c = *DAT_10011640;
  local_78 = DAT_10011638;
  local_70 = DAT_1001163c + ((uintptr_t)pf_module_state+0xcd68U);
  recovered_100078f0(local_a0 + 3);
  puVar4 = DAT_10011644;
  uVar20 = 0;
  do {
    if (*(uint *)(param_1 + 0x1c) <= uVar20) {
      recovered_10007908(local_a0 + 3);
      return;
    }
    iVar18 = uVar20 * 0x94 + *(int *)(param_1 + 0x18);
    recovered_10010120((int *)(iVar18 + 0x24));
    recovered_10013fd8(iVar18 + 0x30);
    local_90 = 0xffffffff;
    recovered_10013ff8((int *)(iVar18 + 0x58),*(uint *)(iVar18 + 0x1c),puVar4);
    local_90 = 0xffffffff;
    local_a0[0] = -1;
    recovered_1000e7ac((int *)(iVar18 + 100),*(uint *)(iVar18 + 0x1c),local_a0);
    if (uVar20 != 0) {
      local_90 = 0xffffffff;
      recovered_10011e44((int *)(iVar18 + 0x24),*(uint *)(iVar18 + 0x10));
      iVar23 = *(int *)(iVar18 + 0xc);
      uVar15 = extraout_r2;
      uVar17 = extraout_r3;
      for (iVar21 = *(int *)(iVar18 + 0x10) * 0xc; iVar21 != 0; iVar21 = iVar21 + -0xc) {
        local_90 = 0xffffffff;
        recovered_10014004(iVar18,iVar23,uVar15,uVar17);
        iVar23 = iVar23 + 0xc;
        uVar15 = extraout_r2_00;
        uVar17 = extraout_r3_00;
      }
      puVar22 = (uint *)(*(int *)(iVar18 + 0x18) + 4);
      for (iVar21 = *(int *)(iVar18 + 0x1c) << 4; iVar21 != 0; iVar21 = iVar21 + -0x10) {
        if (((((char)puVar22[-1] == '\x02') && (uVar8 = *puVar22, -1 < (int)uVar8)) &&
            (uVar8 < *(uint *)(param_1 + 0x10))) &&
           (pcVar9 = (char *)(*(int *)(param_1 + 0xc) + uVar8 * 0x18), *pcVar9 == '\x04')) {
          if (*(int *)(pcVar9 + 0x14) != 4) goto LAB_100115dc;
          local_90 = 0xffffffff;
          recovered_10014004(iVar18,(int)(pcVar9 + 8),uVar15,uVar17);
          uVar15 = extraout_r2_01;
          uVar17 = extraout_r3_01;
        }
        puVar22 = puVar22 + 4;
      }
      for (uVar8 = 0; uVar8 < *(uint *)(iVar18 + 0x1c); uVar8 = uVar8 + 1) {
        if (((*(byte *)(*(int *)(iVar18 + 0x18) + uVar8 * 0x10) - 1 < 2) &&
            (uVar10 = *(uint *)(*(int *)(iVar18 + 0x18) + uVar8 * 0x10 + 4), -1 < (int)uVar10)) &&
           ((uVar10 < *(uint *)(param_1 + 0x10) &&
            (pcVar9 = (char *)(*(int *)(param_1 + 0xc) + uVar10 * 0x18), *pcVar9 == '\x04')))) {
          if (*(int *)(pcVar9 + 0x14) != 4) {
LAB_100115dc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xd28cU));
            (*pcVar1)();
          }
          local_90 = 0xffffffff;
          iVar21 = recovered_10014064((int *)(iVar18 + 0x30),(int *)(pcVar9 + 8));
          if (iVar21 != *(int *)(iVar18 + 0x30) + *(int *)(iVar18 + 0x34) * 0x10) {
            *(undefined4 *)(*(int *)(iVar18 + 0x58) + uVar8 * 4) = *(undefined4 *)(iVar21 + 0xc);
          }
        }
      }
    }
    piVar24 = (int *)(iVar18 + 0x74);
    *(undefined1 *)(iVar18 + 0x70) = 0;
    recovered_10010188(piVar24);
    puVar11 = *(undefined1 **)(iVar18 + 0x88);
    *(undefined4 *)(iVar18 + 0x8c) = 0;
    *(undefined4 *)(iVar18 + 0x84) = 0xffffffff;
    *(undefined4 *)(iVar18 + 0x80) = 0xffffffff;
    if (puVar11 != (undefined1 *)0x0) {
      *puVar11 = 0;
    }
    if (uVar20 != 0) {
      puVar11 = *(undefined1 **)(iVar18 + 0x1c);
    }
    if ((uVar20 != 0 && puVar11 != (undefined1 *)0x0) &&
       (puVar11 = puVar11 + -1, *(char *)(*(int *)(iVar18 + 0x18) + (int)puVar11 * 0x10) == '\x17'))
    {
      local_a0[2] = 0;
      local_a0[1] = 0;
      local_a0[0] = 0;
      local_90 = 1;
      local_a4 = 0xffffffff;
      bVar7 = recovered_10014144(iVar18,0,(uint)puVar11,local_a0,&local_a4);
      if (bVar7 == 0) {
        puVar14 = *(undefined1 **)(iVar18 + 0x1c);
        puVar12 = *(undefined1 **)(iVar18 + 0x18);
        puVar19 = puVar14;
        puVar25 = puVar14;
        for (puVar16 = (undefined1 *)0x0; puVar11 != puVar16; puVar16 = puVar16 + 1) {
          puVar5 = puVar16;
          puVar6 = puVar25;
          puVar3 = puVar19;
          if (((puVar12[(int)puVar16 * 0x10] == '\x13') ||
              (puVar5 = puVar19, puVar6 = puVar16, puVar3 = puVar25,
              puVar12[(int)puVar16 * 0x10] == '\x14')) &&
             (puVar25 = puVar6, puVar19 = puVar5, puVar3 != puVar14)) goto LAB_100113e8;
        }
        if ((puVar25 != puVar14 && puVar19 != puVar14) && (puVar25 < puVar19)) {
          puVar14 = *(undefined1 **)(puVar12 + (int)puVar25 * 0x10 + 4);
          if (-1 < (int)puVar14) {
            puVar12 = *(undefined1 **)(puVar12 + (int)puVar19 * 0x10 + 4);
          }
          if (((-1 < (int)puVar14 && -1 < (int)puVar12) && (puVar14 == puVar19 + 1)) &&
             ((puVar14 < puVar11 && (puVar12 == puVar14)))) {
            recovered_10010188(local_a0);
            local_90 = 2;
            local_a8 = 0xffffffff;
            bVar7 = recovered_10014144(iVar18,0,(uint)puVar25,local_a0,&local_a8);
            if (bVar7 != 0) {
              local_ac = 0;
              local_b0 = 0;
              local_b4 = (void *)0x0;
              if (((int)puVar19 - (int)(puVar25 + 1) == 4) &&
                 (piVar26 = (int *)(*(int *)(iVar18 + 0x18) + (int)(puVar25 + 1) * 0x10),
                 (char)*piVar26 == '\x01')) {
                cVar2 = (char)piVar26[4];
                bVar27 = cVar2 == '\0';
                if (bVar27) {
                  cVar2 = (char)piVar26[8];
                }
                if (bVar27 && cVar2 == '\x15') {
                  uVar8 = piVar26[9];
                  bVar27 = uVar8 == 1;
                  if (bVar27) {
                    uVar8 = (uint)*(byte *)(piVar26 + 0xc);
                  }
                  if (bVar27 && uVar8 == 3) {
                    in_r0 = (int *)recovered_100147e0(param_1,piVar26[1]);
                    piVar13 = (int *)recovered_100147e0(param_1,piVar26[5]);
                    if (in_r0 != (int *)0x0) {
                      piVar26 = piVar13;
                    }
                    if ((in_r0 != (int *)0x0 && piVar13 != (int *)0x0) &&
                       (uVar8 = recovered_10014828(in_r0,DAT_10011648), uVar8 == 0)) {
                      local_90 = 3;
                      recovered_1000e174((int *)&local_b4,piVar26,in_r3);
                      local_90 = 4;
                      bVar7 = recovered_10014144(iVar18,(uint)puVar14,(uint)puVar11,local_a0,
                                                 &local_a4);
                      if (bVar7 != 0) {
                        *(undefined1 *)(iVar18 + 0x70) = 2;
                        recovered_100146d4(piVar24,local_a0);
                        *(undefined4 *)(iVar18 + 0x84) = local_a8;
                        *(undefined4 *)(iVar18 + 0x80) = local_a4;
                        recovered_1000fb14((undefined4 *)(iVar18 + 0x88),&local_b4);
                      }
                    }
                  }
                }
              }
              recovered_10007424(local_b4);
            }
          }
        }
      }
      else {
        *(undefined1 *)(iVar18 + 0x70) = 1;
        recovered_100146d4(piVar24,local_a0);
        *(undefined4 *)(iVar18 + 0x80) = local_a4;
      }
LAB_100113e8:
      recovered_10010168(local_a0);
    }
    uVar20 = uVar20 + 1;
  } while( true );
}

#undef DAT_10011638
#undef DAT_1001163c
#undef DAT_10011640
#undef DAT_10011644
#undef DAT_10011648
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_160
#undef auStack_68
#undef local_b4
#undef local_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fcU)
 */

bool recovered_1001164c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = (uint)*(byte *)(*param_1 + param_1[6] * 0x18);
  if (uVar1 == param_2) {
    recovered_10011680(param_1);
  }
  return uVar1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd330U)
 */

int recovered_10011680(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1[6];
  if (*(char *)(*param_1 + iVar1 * 0x18) != '*') {
    iVar1 = iVar1 + 1;
    param_1[6] = iVar1;
  }
  return *param_1 + iVar1 * 0x18 + -0x18;
}


#undef DAT_10011818
#define DAT_10011818 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd4c8U)))
#undef DAT_1001181c
#define DAT_1001181c (*(int *)(((uintptr_t)pf_module_state + 0xd4ccU)))
#undef DAT_10011820
#define DAT_10011820 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd4d0U)))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define auStack_ac (*(undefined1 (*)[4])(frame + 164))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd35cU)
 */

void recovered_100116ac(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;

  recovered_10012874(param_1,param_2);
  local_7c = *DAT_10011820;
  local_78 = DAT_10011818;
  local_70 = DAT_1001181c + ((uintptr_t)pf_module_state+0xd3b0U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while ((bVar1 = recovered_1001164c(param_1,0x27), bVar1 ||
         (bVar1 = recovered_1001164c(param_1,0x19), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(auStack_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_10012874(param_1,param_2);
    local_90 = 2;
    recovered_10011824((int)param_1,param_2,0x12,0,0,local_9c);
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10011818
#undef DAT_1001181c
#undef DAT_10011820
#undef auStackY_140
#undef auStack_ac
#undef uStack_94
#undef auStack_68
#undef local_a8
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd4d4U)
 */

void recovered_10011824(int param_1,int param_2,undefined1 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;

  iVar2 = param_2 * 0x94 + *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == *(int *)(iVar2 + 0x20)) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1001230c((int *)(iVar2 + 0x18),uVar3);
    iVar1 = *(int *)(iVar2 + 0x1c);
  }
  puVar4 = (undefined1 *)(*(int *)(iVar2 + 0x18) + iVar1 * 0x10);
  *puVar4 = param_3;
  iVar1 = *(int *)(iVar2 + 0x1c);
  *(undefined4 *)(puVar4 + 0xc) = param_6;
  *(undefined4 *)(puVar4 + 8) = param_5;
  *(undefined4 *)(puVar4 + 4) = param_4;
  *(int *)(iVar2 + 0x1c) = iVar1 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd550U)
 */

void recovered_100118a0(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1001164c(param_1,0x24);
  if (!bVar1) {
    recovered_1001164c(param_1,0x25);
  }
  recovered_100103e0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd584U)
 */

int recovered_100118d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  recovered_10011824(param_1,param_2,(undefined1)param_3,0xffffffff,0,param_4);
  return *(int *)(param_2 * 0x94 + *(int *)(param_1 + 0x34) + 0x1c) + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd5c8U)
 */

void recovered_10011918(int *param_1,int param_2,char *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;

  do {
    recovered_100103e0(param_1);
    cVar1 = *(char *)(*param_1 + param_1[6] * 0x18);
    if (cVar1 == '*') {
      return;
    }
    iVar3 = param_4;
    pcVar4 = param_3;
    while (iVar3 != 0) {
      cVar2 = *pcVar4;
      iVar3 = iVar3 + -1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == cVar2) {
        return;
      }
    }
    recovered_10010418(param_1,param_2);
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd640U)
 */

undefined1 * recovered_10011990(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_1000dc38((undefined4 *)(param_1 + 4),(int *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


#undef DAT_10011aec
#define DAT_10011aec (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd79cU)))
#undef DAT_10011af0
#define DAT_10011af0 (*(int *)(((uintptr_t)pf_module_state + 0xd7a0U)))
#undef DAT_10011af4
#define DAT_10011af4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xd7a4U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 216))
#define local_90 (*(undefined4 *)(frame + 176))
#define local_7c (*(undefined4 *)(frame + 196))
#define local_78 (*(undefined4 *)(frame + 200))
#define local_74 (*(undefined1 * *)(frame + 204))
#define local_70 (*(int *)(frame + 208))
#define local_6c (*(undefined1 * *)(frame + 212))
#define auStackY_130 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 172))
#define auStack_a0 (*(undefined4 (*)[3])(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd67cU)
 */

int recovered_100119cc(int *param_1,uint param_2,int *param_3)

{
  unsigned char frame[352] = {0};

  code *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_130 + 0x80;
  pbVar4 = (byte *)(*param_1 + param_1[6] * 0x18);
  bVar2 = *pbVar4;
  local_7c = *DAT_10011af4;
  local_78 = DAT_10011aec;
  local_70 = DAT_10011af0 + ((uintptr_t)pf_module_state+0xd6e0U);
  recovered_100078f0(&uStack_94);
  if (bVar2 != param_2) {
    local_90 = 0xffffffff;
    recovered_1000f848(auStack_a0,param_1 + 3,*(undefined4 *)(pbVar4 + 0x10),
                       *(undefined4 *)(pbVar4 + 0x14),param_3);
    local_90 = 1;
    recovered_1000f758(auStack_a0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xd768U));
    (*pcVar1)();
  }
  iVar3 = recovered_10011680(param_1);
  recovered_10007908(&uStack_94);
  return iVar3;
}

#undef DAT_10011aec
#undef DAT_10011af0
#undef DAT_10011af4
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_130
#undef uStack_94
#undef auStack_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd7a8U)
 */

int recovered_10011af8(int *param_1,undefined4 *param_2)

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
    recovered_1000e8f0(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


#undef DAT_10011d54
#define DAT_10011d54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xda04U)))
#undef DAT_10011d58
#define DAT_10011d58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xda08U)))
#undef DAT_10011d60
#define DAT_10011d60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xda10U)))
#undef DAT_10011d68
#define DAT_10011d68 (*(int *)(((uintptr_t)pf_module_state + 0xda18U)))
#undef DAT_10011d6c
#define DAT_10011d6c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xda1cU)))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define local_a4 (*(undefined4 * *)(frame + 28))
#define local_a0 (*(undefined4 * *)(frame + 32))
#define local_9c (*(undefined4 * *)(frame + 36))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_98 (*(undefined4 * *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd804U)
 */

undefined4 * recovered_10011b54(undefined4 *param_1)

{
  unsigned char frame[224] = {0};

  undefined8 uVar1;
  undefined4 *puVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  *param_1 = 0;
  local_a0 = param_1 + 3;
  *local_a0 = 0;
  local_9c = param_1 + 6;
  param_1[1] = 0;
  param_1[2] = 0;
  *local_9c = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  local_98 = param_1 + 9;
  param_1[8] = 0;
  *local_98 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x15] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  param_1[0xe] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  param_1[0xf] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_1[0x10] = 0;
  param_1[0x11] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  param_1[0x12] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  param_1[0x13] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_1[0x14] = 0;
  local_7c = *DAT_10011d6c;
  local_78 = DAT_10011d54;
  local_70 = DAT_10011d68 + ((uintptr_t)pf_module_state+0xd8f8U);
  local_90 = 1;
  local_a4 = param_1;
  recovered_100078f0(&uStack_94);
  recovered_10010024(param_1 + 0xc);
  puVar2 = local_a4;
  local_a4[0x16] = 0;
  local_a4[0x17] = 0;
  local_a4[0x18] = 0;
  local_a4[0x19] = 0;
  local_a4[0x1a] = 0;
  local_a4[0x1b] = 0;
  *(undefined1 *)(local_a4 + 0x1c) = 0;
  local_a4[0x1d] = 0;
  uVar1 = DAT_10011d60;
  *(undefined8 *)(local_a4 + 0x1e) = DAT_10011d58;
  *(undefined8 *)(local_a4 + 0x20) = uVar1;
  local_a4[0x22] = 0;
  local_a4[0x23] = 0;
  local_a4[0x24] = 0;
  recovered_10007908(&uStack_94);
  return puVar2;
}

#undef DAT_10011d54
#undef DAT_10011d58
#undef DAT_10011d60
#undef DAT_10011d68
#undef DAT_10011d6c
#undef auStack_b0
#undef local_a4
#undef local_a0
#undef local_9c
#undef uStack_94
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#define iStack_14 (*(int *)(frame + 20))
#define local_18 (*(int * *)(frame + 16))
#define iStack_10 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xda20U)
 */

int * recovered_10011d70(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[72] = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  if (param_1 != param_2) {
    local_18 = param_2;
    iStack_14 = param_3;
    iStack_10 = param_4;
    piVar1 = recovered_10011edc((int *)&local_18,param_2);
    piVar2 = (int *)*param_1;
    iVar3 = param_1[1];
    iVar4 = param_1[2];
    *param_1 = (int)local_18;
    param_1[1] = iStack_14;
    param_1[2] = iStack_10;
    local_18 = piVar2;
    iStack_14 = iVar3;
    iStack_10 = iVar4;
    recovered_10010100(piVar1);
  }
  return param_1;
}

#undef iStack_14
#undef local_18
#undef iStack_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xda6cU)
 */

int recovered_10011dbc(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_100127c4((int *)(param_1 + 0x28),param_2);
  return *(int *)(param_1 + 0x2c) + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xda8cU)
 */

int recovered_10011ddc(int *param_1,int *param_2)

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
    recovered_10011e44(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000dc38((undefined4 *)(*param_1 + iVar1 * 0xc),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdaf4U)
 */

void recovered_10011e44(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_10011ec4(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000ea14((undefined4 *)(uVar1 + iVar2),(undefined4 *)(*param_1 + iVar2));
      recovered_1000d288((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0xc;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdb74U)
 */

uint recovered_10011ec4(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 * 0xc);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdb8cU)
 */

int * recovered_10011edc(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_10011e44(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    recovered_1000dc38((undefined4 *)(*param_1 + iVar2),(int *)(*param_2 + iVar2));
    iVar2 = iVar2 + 0xc;
  }
  param_1[1] = param_2[1];
  return param_1;
}


#undef DAT_10012300
#define DAT_10012300 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xdfb0U)))
#undef DAT_10012304
#define DAT_10012304 (*(int *)(((uintptr_t)pf_module_state + 0xdfb4U)))
#undef DAT_10012308
#define DAT_10012308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xdfb8U)))
#define local_a4 (*(int * *)(frame + 60))
#define local_a0 (*(int * *)(frame + 64))
#define local_9c (*(int * *)(frame + 68))
#define local_98 (*(int * *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define auStack_d0 (*(undefined1 (*)[8])(frame + 16))
#define local_c8 (*(int *)(frame + 24))
#define local_c4 (*(undefined8 * *)(frame + 28))
#define local_c0 (*(undefined8 * *)(frame + 32))
#define local_bc (*(int *)(frame + 36))
#define local_b8 (*(uint *)(frame + 40))
#define local_b4 (*(int *)(frame + 44))
#define local_b0 (*(int * *)(frame + 48))
#define local_ac (*(int * *)(frame + 52))
#define local_a8 (*(int * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdbf8U)
 */

int recovered_10011f48(int param_1,int param_2)

{
  unsigned char frame[256] = {0};

  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;

  local_b4 = param_1;
  recovered_1000dc38((undefined4 *)param_1,(int *)param_2);
  piVar1 = (int *)(local_b4 + 0xc);
  local_7c = *DAT_10012308;
  local_78 = DAT_10012300;
  local_70 = DAT_10012304 + ((uintptr_t)pf_module_state+0xdc60U);
  local_90 = 1;
  local_b0 = piVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  recovered_100078f0(&uStack_94);
  local_c8 = param_2;
  recovered_10011edc(piVar1,(int *)(param_2 + 0xc));
  local_ac = (int *)(local_b4 + 0x18);
  *local_ac = 0;
  *(undefined4 *)(local_b4 + 0x1c) = 0;
  *(undefined4 *)(local_b4 + 0x20) = 0;
  local_90 = 2;
  recovered_1001230c(local_ac,*(uint *)(local_c8 + 0x1c));
  for (uVar6 = 0; uVar6 < *(uint *)(local_c8 + 0x1c); uVar6 = uVar6 + 1) {
    puVar4 = (undefined8 *)(*(int *)(local_c8 + 0x18) + uVar6 * 0x10);
    uVar7 = puVar4[1];
    puVar2 = (undefined8 *)(*local_ac + uVar6 * 0x10);
    *puVar2 = *puVar4;
    puVar2[1] = uVar7;
  }
  *(uint *)(local_b4 + 0x1c) = *(uint *)(local_c8 + 0x1c);
  local_a8 = (int *)(local_b4 + 0x24);
  local_90 = 3;
  recovered_10011edc(local_a8,(int *)(local_c8 + 0x24));
  local_a4 = (int *)(local_b4 + 0x30);
  local_90 = 4;
  recovered_10012374(local_a4,(int *)(local_c8 + 0x30));
  local_a0 = (int *)(local_b4 + 0x58);
  local_90 = 5;
  recovered_100125e4(local_a0,(int *)(local_c8 + 0x58));
  local_9c = (int *)(local_b4 + 100);
  local_90 = 6;
  recovered_100126b0(local_9c,(int *)(local_c8 + 100));
  local_98 = (int *)(local_b4 + 0x74);
  *local_98 = 0;
  *(undefined4 *)(local_b4 + 0x78) = 0;
  *(undefined1 *)(local_b4 + 0x70) = *(undefined1 *)(local_c8 + 0x70);
  *(undefined4 *)(local_b4 + 0x7c) = 0;
  local_90 = 7;
  recovered_10012708(local_98,*(uint *)(local_c8 + 0x78));
  uVar6 = 0;
  iVar5 = 0;
  while( true ) {
    if (*(uint *)(local_c8 + 0x78) <= uVar6) break;
    local_c0 = (undefined8 *)(*local_98 + iVar5);
    local_c4 = (undefined8 *)(*(int *)(local_c8 + 0x74) + iVar5);
    uVar7 = local_c4[1];
    *local_c0 = *local_c4;
    local_c0[1] = uVar7;
    local_90 = 8;
    local_bc = iVar5;
    local_b8 = uVar6;
    recovered_100125e4((int *)(local_c0 + 2),(int *)(local_c4 + 2));
    uVar3 = *(undefined4 *)((int)local_c4 + 0x1c);
    *(undefined4 *)(local_c0 + 4) = *(undefined4 *)(local_c4 + 4);
    *(undefined4 *)((int)local_c0 + 0x1c) = uVar3;
    iVar5 = local_bc + 0x24;
    uVar6 = local_b8 + 1;
  }
  *(uint *)(local_b4 + 0x78) = *(uint *)(local_c8 + 0x78);
  uVar3 = *(undefined4 *)(local_c8 + 0x80);
  *(undefined4 *)(local_b4 + 0x84) = *(undefined4 *)(local_c8 + 0x84);
  *(undefined4 *)(local_b4 + 0x80) = uVar3;
  local_90 = 9;
  recovered_1000dc38((undefined4 *)(local_b4 + 0x88),(int *)(local_c8 + 0x88));
  iVar5 = local_b4;
  recovered_10007908(&uStack_94);
  return iVar5;
}

#undef DAT_10012300
#undef DAT_10012304
#undef DAT_10012308
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_d0
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdfbcU)
 */

void recovered_1001230c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_100073f4(param_2 << 4);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      puVar4 = (undefined8 *)((int)pvVar1 + uVar3 * 0x10);
      puVar5 = (undefined8 *)(*param_1 + uVar3 * 0x10);
      uVar6 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar6;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


#undef DAT_100124a0
#define DAT_100124a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe150U)))
#undef DAT_100124a4
#define DAT_100124a4 (*(int *)(((uintptr_t)pf_module_state + 0xe154U)))
#undef DAT_100124a8
#define DAT_100124a8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xe158U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(int * *)(frame + 16))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe024U)
 */

int * recovered_10012374(int *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_9c = param_1;
  recovered_100124ac(param_1,param_2);
  piVar1 = local_9c + 3;
  local_7c = *DAT_100124a8;
  local_78 = DAT_100124a0;
  local_70 = DAT_100124a4 + ((uintptr_t)pf_module_state+0xe08cU);
  local_90 = 1;
  local_98 = piVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  local_a0 = param_2;
  recovered_100126b0(piVar1,param_2 + 3);
  local_90 = 2;
  recovered_100126b0(local_9c + 6,local_a0 + 6);
  piVar1 = local_9c;
  recovered_10007908(&uStack_94);
  return piVar1;
}

#undef DAT_100124a0
#undef DAT_100124a4
#undef DAT_100124a8
#undef uStack_94
#undef auStack_68
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
 * Address: ((uintptr_t)pf_module_state+0xe15cU)
 */

int * recovered_100124ac(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_10012518(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    recovered_100125c8((undefined4 *)(*param_1 + iVar2),*param_2 + iVar2);
    iVar2 = iVar2 + 0x10;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe1c8U)
 */

void recovered_10012518(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_10012598(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_100125ac((undefined4 *)(uVar1 + iVar2),*param_1 + iVar2);
      recovered_1000d288((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + 0x10;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe248U)
 */

uint recovered_10012598(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 << 4);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe25cU)
 */

void recovered_100125ac(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000ea14(param_1,(undefined4 *)param_2);
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe278U)
 */

void recovered_100125c8(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000dc38(param_1,(int *)param_2);
  puVar1[3] = *(undefined4 *)(param_2 + 0xc);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe294U)
 */

int * recovered_100125e4(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  param_1[1] = 0;
  uVar2 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_1001263c(param_1,uVar2);
  iVar3 = *param_2;
  iVar1 = param_2[1];
  for (iVar4 = 0; iVar1 != iVar4; iVar4 = iVar4 + 1) {
    *(undefined4 *)(*param_1 + iVar4 * 4) = *(undefined4 *)(iVar3 + iVar4 * 4);
  }
  param_1[1] = iVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe2ecU)
 */

void recovered_1001263c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_1001269c(param_2);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined4 *)(uVar1 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe34cU)
 */

uint recovered_1001269c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 << 2);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe360U)
 */

int * recovered_100126b0(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  param_1[1] = 0;
  uVar2 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_1000e8f0(param_1,uVar2);
  iVar1 = *param_2;
  for (uVar2 = 0; uVar2 < (uint)param_2[1]; uVar2 = uVar2 + 1) {
    *(undefined4 *)(*param_1 + uVar2 * 4) = *(undefined4 *)(iVar1 + uVar2 * 4);
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe3b8U)
 */

void recovered_10012708(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_100073f4(param_2 * 0x24);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10012790((undefined8 *)((int)pvVar1 + iVar2),(undefined8 *)(*param_1 + iVar2));
      recovered_100100b4((undefined4 *)(*param_1 + iVar2 + 0x10));
      iVar2 = iVar2 + 0x24;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe440U)
 */

undefined8 * recovered_10012790(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined8 uVar2;

  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  recovered_1000ffcc((undefined4 *)(param_1 + 2),(undefined4 *)(param_2 + 2));
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe474U)
 */

int recovered_100127c4(int *param_1,undefined1 *param_2)

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
    recovered_1000eab8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1001282c((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe4dcU)
 */

undefined1 * recovered_1001282c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1001284c((int)(param_1 + 8),(int)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe4fcU)
 */

int recovered_1001284c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = *(int *)(param_2 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  recovered_1000f390(iVar1,(int *)param_1,(int *)param_2);
  return param_1;
}


#undef DAT_100129e0
#define DAT_100129e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe690U)))
#undef DAT_100129e4
#define DAT_100129e4 (*(int *)(((uintptr_t)pf_module_state + 0xe694U)))
#undef DAT_100129e8
#define DAT_100129e8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xe698U)))
#define local_6c (*(undefined1 * *)(frame + 228))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define auStack_ac (*(undefined1 (*)[4])(frame + 164))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe524U)
 */

void recovered_10012874(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;

  recovered_100129ec(param_1,param_2);
  local_7c = *DAT_100129e8;
  local_78 = DAT_100129e0;
  local_70 = DAT_100129e4 + ((uintptr_t)pf_module_state+0xe578U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while ((bVar1 = recovered_1001164c(param_1,0x26), bVar1 ||
         (bVar1 = recovered_1001164c(param_1,0x18), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(auStack_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_100129ec(param_1,param_2);
    local_90 = 2;
    recovered_10011824((int)param_1,param_2,0x11,0,0,local_9c);
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100129e0
#undef DAT_100129e4
#undef DAT_100129e8
#undef local_6c
#undef auStackY_140
#undef auStack_ac
#undef uStack_94
#undef auStack_68
#undef local_a8
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70

#undef DAT_10012b64
#define DAT_10012b64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe814U)))
#undef DAT_10012b68
#define DAT_10012b68 (*(int *)(((uintptr_t)pf_module_state + 0xe818U)))
#undef DAT_10012b6c
#define DAT_10012b6c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xe81cU)))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define local_ac (*(char (*)[4])(frame + 164))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe69cU)
 */

void recovered_100129ec(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;
  undefined1 uVar2;

  recovered_10012b70(param_1,param_2);
  local_7c = *DAT_10012b6c;
  local_78 = DAT_10012b64;
  local_70 = DAT_10012b68 + ((uintptr_t)pf_module_state+0xe6f0U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while ((bVar1 = recovered_1001164c(param_1,0x12), bVar1 ||
         (bVar1 = recovered_1001164c(param_1,0x13), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(local_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_10012b70(param_1,param_2);
    local_90 = 2;
    uVar2 = 0xc;
    if (local_ac[0] == '\x12') {
      uVar2 = 0xb;
    }
    recovered_10011824((int)param_1,param_2,uVar2,0,0,local_9c);
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10012b64
#undef DAT_10012b68
#undef DAT_10012b6c
#undef auStackY_140
#undef uStack_94
#undef local_ac
#undef local_a8
#undef local_9c
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10012d10
#define DAT_10012d10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe9c0U)))
#undef DAT_10012d14
#define DAT_10012d14 (*(int *)(((uintptr_t)pf_module_state + 0xe9c4U)))
#undef DAT_10012d18
#define DAT_10012d18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xe9c8U)))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define local_ac (*(byte (*)[4])(frame + 164))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_90 (*(undefined4 *)(frame + 192))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe820U)
 */

void recovered_10012b70(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;

  recovered_10012d1c(param_1,param_2);
  local_7c = *DAT_10012d18;
  local_78 = DAT_10012d10;
  local_70 = DAT_10012d14 + ((uintptr_t)pf_module_state+0xe874U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while ((((bVar1 = recovered_1001164c(param_1,0x14), bVar1 ||
           (bVar1 = recovered_1001164c(param_1,0x15), bVar1)) ||
          (bVar1 = recovered_1001164c(param_1,0x16), bVar1)) ||
         (bVar1 = recovered_1001164c(param_1,0x17), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(local_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_10012d1c(param_1,param_2);
    if ((local_ac[0] & 0xfc) == 0x14) {
      local_90 = 2;
      recovered_10011824((int)param_1,param_2,local_ac[0] - 7,0,0,local_9c);
    }
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10012d10
#undef DAT_10012d14
#undef DAT_10012d18
#undef auStackY_140
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10012e94
#define DAT_10012e94 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xeb44U)))
#undef DAT_10012e98
#define DAT_10012e98 (*(int *)(((uintptr_t)pf_module_state + 0xeb48U)))
#undef DAT_10012e9c
#define DAT_10012e9c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xeb4cU)))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define local_ac (*(char (*)[4])(frame + 164))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_90 (*(undefined4 *)(frame + 192))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe9ccU)
 */

void recovered_10012d1c(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;
  undefined1 uVar2;

  recovered_10012ea0(param_1,param_2);
  local_7c = *DAT_10012e9c;
  local_78 = DAT_10012e94;
  local_70 = DAT_10012e98 + ((uintptr_t)pf_module_state+0xea20U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while ((bVar1 = recovered_1001164c(param_1,0xb), bVar1 ||
         (bVar1 = recovered_1001164c(param_1,0xc), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(local_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_10012ea0(param_1,param_2);
    local_90 = 2;
    uVar2 = 5;
    if (local_ac[0] == '\v') {
      uVar2 = 4;
    }
    recovered_10011824((int)param_1,param_2,uVar2,0,0,local_9c);
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10012e94
#undef DAT_10012e98
#undef DAT_10012e9c
#undef auStackY_140
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10013030
#define DAT_10013030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xece0U)))
#undef DAT_10013034
#define DAT_10013034 (*(int *)(((uintptr_t)pf_module_state + 0xece4U)))
#undef DAT_10013038
#define DAT_10013038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xece8U)))
#define auStackY_140 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define local_ac (*(char (*)[4])(frame + 164))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
#define local_a8 (*(void * *)(frame + 168))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb50U)
 */

void recovered_10012ea0(int *param_1,int param_2)

{
  unsigned char frame[368] = {0};

  bool bVar1;

  recovered_1001303c(param_1,param_2);
  local_7c = *DAT_10013038;
  local_78 = DAT_10013030;
  local_70 = DAT_10013034 + ((uintptr_t)pf_module_state+0xeba4U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_140 + 0x80;
  recovered_100078f0(&uStack_94);
  while (((bVar1 = recovered_1001164c(param_1,0xd), bVar1 ||
          (bVar1 = recovered_1001164c(param_1,0xe), bVar1)) ||
         (bVar1 = recovered_1001164c(param_1,0xf), bVar1))) {
    local_90 = 0xffffffff;
    recovered_10011990(local_ac,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
    local_90 = 1;
    recovered_1001303c(param_1,param_2);
    if ((byte)(local_ac[0] - 0xdU) < 3) {
      local_90 = 2;
      recovered_10011824((int)param_1,param_2,local_ac[0] + -7,0,0,local_9c);
    }
    recovered_10007424(local_a8);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10013030
#undef DAT_10013034
#undef DAT_10013038
#undef auStackY_140
#undef uStack_94
#undef local_ac
#undef auStack_68
#undef local_a8
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10013b2c
#define DAT_10013b2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf7dcU)))
#undef DAT_10013b30
#define DAT_10013b30 (*(int *)(((uintptr_t)pf_module_state + 0xf7e0U)))
#undef DAT_10013b34
#define DAT_10013b34 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf7e4U)))
#undef DAT_10013b38
#define DAT_10013b38 (*(byte * *)(((uintptr_t)pf_module_state + 0xf7e8U)))
#undef DAT_10013b3c
#define DAT_10013b3c (*(int *)(((uintptr_t)pf_module_state + 0xf7ecU)))
#undef DAT_10013b40
#define DAT_10013b40 (*(int *)(((uintptr_t)pf_module_state + 0xf7f0U)))
#undef DAT_10013b44
#define DAT_10013b44 (*(int *)(((uintptr_t)pf_module_state + 0xf7f4U)))
#undef DAT_10013b48
#define DAT_10013b48 (*(int *)(((uintptr_t)pf_module_state + 0xf7f8U)))
#undef DAT_10013b4c
#define DAT_10013b4c (*(int *)(((uintptr_t)pf_module_state + 0xf7fcU)))
#define aiStack_d8 (*(int (*)[3])(frame + 184))
#define auStackY_180 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 252))
#define auStack_68 (*(undefined1 (*)[8])(frame + 296))
#define local_cc (*(void * (*)[3])(frame + 196))
#define local_c0 (*(void * *)(frame + 208))
#define local_bc (*(void * *)(frame + 212))
#define local_b8 (*(double *)(frame + 216))
#define local_b0 (*(undefined4 *)(frame + 224))
#define local_ac (*(undefined4 *)(frame + 228))
#define local_a4 (*(double * *)(frame + 236))
#define local_a0 (*(double * *)(frame + 240))
#define local_9c (*(double * *)(frame + 244))
#define local_98 (*(double * *)(frame + 248))
#define local_90 (*(undefined4 *)(frame + 256))
#define local_7c (*(undefined4 *)(frame + 276))
#define local_78 (*(undefined4 *)(frame + 280))
#define local_74 (*(undefined1 * *)(frame + 284))
#define local_70 (*(int *)(frame + 288))
#define local_6c (*(undefined1 * *)(frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xececU)
 */

void recovered_1001303c(int *param_1,int param_2)

{
  unsigned char frame[432] = {0};

  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  double *pdVar6;
  undefined1 *puVar7;
  void *pointer;
  int *piVar8;
  byte *pbVar9;
  int iVar10;

  bVar3 = recovered_1001164c(param_1,0xc);
  local_7c = *DAT_10013b34;
  local_78 = DAT_10013b2c;
  local_70 = DAT_10013b30 + ((uintptr_t)pf_module_state+0xed48U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_180 + 0x80;
  recovered_100078f0(&uStack_94);
  if (bVar3) {
    local_90 = 0xffffffff;
    recovered_10011990((undefined1 *)&local_c0,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18))
    ;
    local_90 = 1;
    recovered_1001303c(param_1,param_2);
    local_90 = 2;
    recovered_10011824((int)param_1,param_2,9,0,0,local_b0);
LAB_100131a8:
    recovered_10007424(local_bc);
LAB_100131b0:
    recovered_10007908(&uStack_94);
    return;
  }
  bVar3 = recovered_1001164c(param_1,0x10);
  if ((bVar3) || (bVar3 = recovered_1001164c(param_1,0x28), bVar3)) {
    local_90 = 0xffffffff;
    recovered_10011990((undefined1 *)&local_c0,(undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18))
    ;
    local_90 = 3;
    recovered_1001303c(param_1,param_2);
    local_90 = 4;
    recovered_10011824((int)param_1,param_2,10,0,0,local_b0);
    goto LAB_100131a8;
  }
  bVar3 = recovered_1001164c(param_1,1);
  if (bVar3) {
    iVar4 = *param_1 + param_1[6] * 0x18;
    pbVar9 = *(byte **)(iVar4 + -0x14);
    local_90 = 0xffffffff;
    pbVar5 = DAT_10013b38;
    if (pbVar9 != (byte *)0x0) {
      pbVar5 = pbVar9;
    }
    local_b8 = pf_bits_double(recovered_10013b50(pbVar5,*(int *)(iVar4 + -0x10),(int *)0x0,
                                          (undefined4 *)0xa));
    local_a4 = &local_b8;
    local_c0 = (void *)CONCAT31(PF_PART3(local_c0, 1),1);
    local_ac = 1;
    local_90 = 5;
    iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
    local_90 = 6;
    recovered_10011824((int)param_1,param_2,0,iVar4,0,
                       *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
    pdVar6 = local_a4;
  }
  else {
    bVar3 = recovered_1001164c(param_1,2);
    if (bVar3) {
      iVar4 = *param_1 + param_1[6] * 0x18;
      pbVar9 = *(byte **)(iVar4 + -0x14);
      pbVar5 = DAT_10013b38;
      if (pbVar9 != (byte *)0x0) {
        pbVar5 = pbVar9;
      }
      local_b8 = recovered_10013bbc(pbVar5,*(int *)(iVar4 + -0x10),(int *)0x0);
      local_a0 = &local_b8;
      local_c0 = (void *)CONCAT31(PF_PART3(local_c0, 1),2);
      local_ac = 2;
      local_90 = 7;
      iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
      local_90 = 8;
      recovered_10011824((int)param_1,param_2,0,iVar4,0,
                         *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
      pdVar6 = local_a0;
    }
    else {
      bVar3 = recovered_1001164c(param_1,3);
      if (bVar3) {
        local_90 = 0xffffffff;
        recovered_10008370((undefined1 *)&local_c0,(int *)(*param_1 + param_1[6] * 0x18 + -0x14));
        local_90 = 9;
        iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
        local_90 = 10;
        recovered_10011824((int)param_1,param_2,0,iVar4,0,
                           *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
LAB_100133e0:
        pdVar6 = &local_b8;
      }
      else {
        bVar3 = recovered_1001164c(param_1,0x21);
        if (bVar3) {
          local_9c = &local_b8;
          local_b8 = pf_bits_double(CONCAT71(PF_PART7(local_b8, 1),1));
          local_c0 = (void *)CONCAT31(PF_PART3(local_c0, 1),3);
          local_ac = 3;
          local_90 = 0xb;
          iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
          local_90 = 0xc;
          recovered_10011824((int)param_1,param_2,0,iVar4,0,
                             *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
          pdVar6 = local_9c;
        }
        else {
          bVar3 = recovered_1001164c(param_1,0x22);
          if (!bVar3) {
            bVar3 = recovered_1001164c(param_1,0x23);
            if (bVar3) {
              local_ac = 0;
              local_c0 = (void *)((uint)local_c0 & 0xffffff00);
              local_90 = 0xf;
              iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
              local_90 = 0x10;
              recovered_10011824((int)param_1,param_2,0,iVar4,0,
                                 *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
            }
            else {
              bVar3 = recovered_1001164c(param_1,0);
              if (!bVar3) {
                bVar3 = recovered_1001164c(param_1,4);
                if (bVar3) {
                  local_90 = 0xffffffff;
                  recovered_100116ac(param_1,param_2);
                  local_90 = 0xffffffff;
                  recovered_1000cfe0((int *)&local_c0,DAT_10013b3c);
                  local_90 = 0x13;
                  recovered_100119cc(param_1,5,(int *)&local_c0);
                  pointer = local_c0;
                }
                else {
                  bVar3 = recovered_1001164c(param_1,6);
                  if (!bVar3) {
                    local_90 = 0xffffffff;
                    recovered_10011990((undefined1 *)&local_c0,
                                       (undefined1 *)(*param_1 + param_1[6] * 0x18));
                    local_90 = 0x18;
                    piVar8 = recovered_1000cfe0(aiStack_d8,DAT_10013b4c);
                    local_90 = 0x19;
                    recovered_1000f848(local_cc,param_1 + 3,local_b0,local_ac,piVar8);
                    local_90 = 0x1a;
                    recovered_1000f758(local_cc);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xf648U));
                    (*pcVar1)();
                  }
                  local_90 = 0xffffffff;
                  recovered_10011990((undefined1 *)&local_c0,
                                     (undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
                  iVar4 = 0;
                  if (*(char *)(*param_1 + param_1[6] * 0x18) != '\a') {
                    do {
                      local_90 = 0x14;
                      recovered_100116ac(param_1,param_2);
                      bVar3 = recovered_1001164c(param_1,8);
                      iVar4 = iVar4 + 1;
                    } while (bVar3);
                  }
                  local_90 = 0x15;
                  recovered_1000cfe0((int *)local_cc,DAT_10013b40);
                  local_90 = 0x16;
                  recovered_100119cc(param_1,7,(int *)local_cc);
                  recovered_10007424(local_cc[0]);
                  local_90 = 0x17;
                  recovered_10011824((int)param_1,param_2,0x18,iVar4,0,local_b0);
                  pointer = local_bc;
                }
                recovered_10007424(pointer);
                iVar4 = DAT_10013b48;
                iVar2 = DAT_10013b44;
                goto LAB_10013520;
              }
              local_90 = 0xffffffff;
              recovered_10008370((undefined1 *)&local_c0,
                                 (int *)(*param_1 + param_1[6] * 0x18 + -0x14));
              local_90 = 0x11;
              iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
              local_90 = 0x12;
              recovered_10011824((int)param_1,param_2,1,iVar4,0,
                                 *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
            }
            goto LAB_100133e0;
          }
          local_98 = &local_b8;
          local_b8 = pf_bits_double((pf_double_bits(local_b8) & 0xffffffffffffff00));
          local_c0 = (void *)CONCAT31(PF_PART3(local_c0, 1),3);
          local_ac = 3;
          local_90 = 0xd;
          iVar4 = recovered_10011dbc((int)param_1,(undefined1 *)&local_c0);
          local_90 = 0xe;
          recovered_10011824((int)param_1,param_2,0,iVar4,0,
                             *(undefined4 *)(*param_1 + param_1[6] * 0x18 + -8));
          pdVar6 = local_98;
        }
      }
    }
  }
  recovered_1000d37c((int *)pdVar6);
  iVar4 = DAT_10013b48;
  iVar2 = DAT_10013b44;
LAB_10013520:
  do {
    bVar3 = recovered_1001164c(param_1,4);
    if (bVar3) {
      iVar10 = 0;
      if (*(char *)(*param_1 + param_1[6] * 0x18) != '\x05') {
        do {
          local_90 = 0xffffffff;
          recovered_100116ac(param_1,param_2);
          bVar3 = recovered_1001164c(param_1,8);
          iVar10 = iVar10 + 1;
        } while (bVar3);
      }
      local_90 = 0xffffffff;
      recovered_1000cfe0((int *)local_cc,iVar2);
      local_90 = 0x1b;
      puVar7 = (undefined1 *)recovered_100119cc(param_1,5,(int *)local_cc);
      local_90 = 0x1c;
      recovered_10011990((undefined1 *)&local_c0,puVar7);
      recovered_10007424(local_cc[0]);
      local_90 = 0x1d;
      recovered_10011824((int)param_1,param_2,0x15,iVar10,0,local_b0);
    }
    else {
      bVar3 = recovered_1001164c(param_1,6);
      if (!bVar3) goto LAB_100131b0;
      local_90 = 0xffffffff;
      recovered_10011990((undefined1 *)&local_c0,
                         (undefined1 *)(*param_1 + param_1[6] * 0x18 + -0x18));
      local_90 = 0x1e;
      recovered_100116ac(param_1,param_2);
      local_90 = 0x1f;
      recovered_1000cfe0((int *)local_cc,iVar4);
      local_90 = 0x20;
      recovered_100119cc(param_1,7,(int *)local_cc);
      recovered_10007424(local_cc[0]);
      local_90 = 0x21;
      recovered_10011824((int)param_1,param_2,0x19,0,0,local_b0);
    }
    recovered_10007424(local_bc);
  } while( true );
}

#undef DAT_10013b2c
#undef DAT_10013b30
#undef DAT_10013b34
#undef DAT_10013b38
#undef DAT_10013b3c
#undef DAT_10013b40
#undef DAT_10013b44
#undef DAT_10013b48
#undef DAT_10013b4c
#undef aiStack_d8
#undef auStackY_180
#undef uStack_94
#undef auStack_68
#undef local_cc
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_ac
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

#define local_20 (*(int *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf800U)
 */

undefined8 recovered_10013b50(byte *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  unsigned char frame[80] = {0};

  code *pcVar1;

  local_14 = 0;
  local_18 = 0;
  recovered_10013dc8(&local_20,param_1,param_1 + param_2,(ulonglong *)&local_18,param_4);
  if (local_1c != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xf868U));
    (*pcVar1)();
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_20 - (int)param_1;
  }
  return CONCAT44(local_14,local_18);
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10013dc0
#define DAT_10013dc0 (*(double *)(((uintptr_t)pf_module_state + 0xfa70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf86cU)
 */

double recovered_10013bbc(byte *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  double dVar10;
  double dVar11;
  double dVar12;

  pbVar7 = param_1 + param_2;
  bVar8 = false;
  pbVar3 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar5 = (uint)*pbVar3;
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
      bVar9 = uVar5 == 0x2b || uVar5 == 0x2d;
      if (uVar5 == 0x2b || uVar5 == 0x2d) {
        bVar9 = uVar5 == 0x2d;
        pbVar3 = pbVar3 + 1;
      }
      goto LAB_10013c34;
    }
    pbVar3 = pbVar3 + 1;
  }
  bVar9 = false;
  pbVar3 = pbVar7;
LAB_10013c34:
  dVar10 = 0.0;
  while (pbVar3 != pbVar7) {
    uVar5 = (uint)(byte)(*pbVar3 - 0x30U);
    if (9 < uVar5) {
      if (*pbVar3 != 0x2e) goto LAB_10013cc4;
      dVar11 = DAT_10013dc0;
      goto LAB_10013c88;
    }
    pbVar3 = pbVar3 + 1;
    bVar8 = true;
    dVar11 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = dVar11 + dVar10 * 10.0;
  }
LAB_10013cc0:
  pbVar3 = pbVar7;
LAB_10013cc4:
  if (!bVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0xfa6cU));
    (*pcVar1)();
  }
  if (pbVar3 != pbVar7) {
    if ((*pbVar3 | 0x20) == 0x65) {
      pbVar4 = pbVar3 + 1;
      uVar5 = 0;
      if (pbVar4 == pbVar7) {
        bVar8 = false;
      }
      else {
        bVar2 = *pbVar4;
        if ((bVar2 == 0x2d) || (bVar8 = false, bVar2 == 0x2b)) {
          pbVar4 = pbVar3 + 2;
          bVar8 = bVar2 == 0x2d;
        }
      }
      bVar6 = false;
      for (; pbVar4 != pbVar7; pbVar4 = pbVar4 + 1) {
        if (9 < (byte)(*pbVar4 - 0x30U)) {
          pbVar7 = pbVar4;
          break;
        }
        bVar6 = true;
        uVar5 = uVar5 * 10 + (uint)(byte)(*pbVar4 - 0x30U);
      }
      if (bVar6) {
        dVar11 = 1.0;
        for (uVar5 = uVar5 & ~((int)uVar5 >> 0x1f); uVar5 != 0; uVar5 = uVar5 - 1) {
          dVar11 = dVar11 * 10.0;
        }
        if (bVar8) {
          dVar10 = dVar10 / dVar11;
        }
        else {
          dVar10 = dVar10 * dVar11;
        }
        goto LAB_10013d98;
      }
    }
    pbVar7 = pbVar3;
  }
LAB_10013d98:
  if (param_3 != (int *)0x0) {
    *param_3 = (int)pbVar7 - (int)param_1;
  }
  if (bVar9) {
    dVar10 = -dVar10;
  }
  return dVar10;
LAB_10013c88:
  pbVar3 = pbVar3 + 1;
  if (pbVar3 == pbVar7) goto LAB_10013cc0;
  uVar5 = *pbVar3 - 0x30U & 0xff;
  if (9 < uVar5) goto LAB_10013cc4;
  bVar8 = true;
  dVar12 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = dVar10 + dVar12 * dVar11;
  dVar11 = dVar11 * DAT_10013dc0;
  goto LAB_10013c88;
}

#undef DAT_10013dc0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfa78U)
 */

undefined4 *
recovered_10013dc8(undefined4 *param_1,byte *param_2,byte *param_3,ulonglong *param_4,
                  undefined4 *param_5)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;

  uVar13 = 1;
  puVar4 = param_1;
  if ((param_2 != (byte *)0x0 && param_3 != (byte *)0x0) && (param_2 <= param_3)) {
    puVar4 = (undefined4 *)((int)param_5 + -0x25);
    if ((undefined4 *)0xffffffdc < puVar4) {
      bVar2 = false;
      pbVar10 = param_2;
      if ((param_2 != param_3) &&
         ((puVar4 = (undefined4 *)(uint)*param_2, puVar4 == (undefined4 *)0x2d ||
          (puVar4 == (undefined4 *)0x2b)))) {
        iVar5 = (int)puVar4 + -0x2d;
        puVar4 = (undefined4 *)LZCOUNT(iVar5);
        bVar2 = iVar5 == 0;
        pbVar10 = param_2 + 1;
      }
      if (pbVar10 != param_3) {
        iVar5 = 0x7fffffff;
        if (bVar2) {
          iVar5 = -0x80000000;
        }
        puVar6 = (undefined4 *)0xffffffff;
        if (bVar2) {
          puVar6 = (undefined4 *)0x0;
        }
        iVar7 = 0;
        uVar1 = 0;
        while( true ) {
          uVar11 = (uint)(uVar1 >> 0x20);
          uVar14 = (uint)uVar1;
          pbVar12 = pbVar10 + iVar7;
          if ((pbVar12 == param_3) ||
             (puVar8 = (undefined4 *)recovered_10013f94((int)(char)*pbVar12), param_5 <= puVar8))
          break;
          uVar16 = recovered_10004bac((int)puVar6 - (int)puVar8,iVar5 - (uint)(puVar6 < puVar8),
                                      (uint)param_5,0);
          uVar9 = (uint)((ulonglong)uVar16 >> 0x20);
          bVar15 = uVar14 <= (uint)uVar16;
          puVar4 = (undefined4 *)(uVar9 - (uVar11 + !bVar15));
          if (uVar9 <= uVar11 && (uint)bVar15 <= uVar9 - uVar11) goto LAB_10013f5c;
          uVar1 = ZEXT48(param_5) * (uVar1 & 0xffffffff) + CONCAT44(uVar11 * (int)param_5,puVar8);
          iVar7 = iVar7 + 1;
        }
        uVar13 = 1;
        puVar4 = (undefined4 *)0x0;
        if (iVar7 != 0) {
          uVar13 = 0;
          uVar3 = CONCAT44(-(uVar11 + (uVar14 != 0)),-uVar14);
          if (!bVar2) {
            uVar3 = uVar1;
          }
          puVar4 = (undefined4 *)uVar3;
          *param_4 = uVar3;
          param_2 = pbVar12;
        }
      }
    }
  }
  goto LAB_10013de8;
  while( true ) {
    puVar4 = (undefined4 *)recovered_10013f94((int)(char)*param_2);
    uVar13 = 2;
    pbVar12 = param_2;
    if (param_5 <= puVar4) break;
LAB_10013f5c:
    param_2 = pbVar12 + 1;
    uVar13 = 2;
    if (param_2 == param_3) break;
  }
LAB_10013de8:
  param_1[1] = uVar13;
  *param_1 = param_2;
  return puVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfc44U)
 */

uint recovered_10013f94(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0xfc88U)
 */

void recovered_10013fd8(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10010070((int *)param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfca8U)
 */

void recovered_10013ff8(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10014088(param_1,param_2,param_3);
  return;
}


#define local_18 (*(undefined4 *)(frame + 24))
#define iStack_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfcb4U)
 */

void recovered_10014004(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[80] = {0};

  int iVar1;

  iStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  iVar1 = recovered_10014064((int *)(param_1 + 0x30),(int *)param_2);
  if (iVar1 == *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 0x10) {
    local_18 = *(undefined4 *)(param_1 + 0x28);
    recovered_10011ddc((int *)(param_1 + 0x24),(int *)param_2);
    recovered_1001483c(&iStack_20,(int *)(param_1 + 0x30),(int *)param_2,&local_18);
  }
  return;
}

#undef local_18
#undef iStack_20
#undef uStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfd14U)
 */

int recovered_10014064(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10014ac8(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfd38U)
 */

void recovered_10014088(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_100140ec(param_1,param_2);
    return;
  }
  recovered_1001263c(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfd9cU)
 */

void recovered_100140ec(int *param_1,uint param_2)

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
    recovered_1001263c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_100146b4
#define DAT_100146b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10364U)))
#undef DAT_100146b8
#define DAT_100146b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10368U)))
#undef DAT_100146c0
#define DAT_100146c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10370U)))
#undef DAT_100146c8
#define DAT_100146c8 (*(int *)(((uintptr_t)pf_module_state + 0x10378U)))
#undef DAT_100146cc
#define DAT_100146cc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1037cU)))
#undef DAT_100146d0
#define DAT_100146d0 (*(int *)(((uintptr_t)pf_module_state + 0x10380U)))
#define uStack_ac (*(undefined4 *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 108))
#define auStack_68 (*(undefined1 (*)[8])(frame + 152))
#define local_e4 (*(uint *)(frame + 28))
#define local_e0 (*(void ** *)(frame + 32))
#define local_dc (*(undefined8 * *)(frame + 36))
#define local_d8 (*(int *)(frame + 40))
#define local_d4 (*(uint *)(frame + 44))
#define local_d0 (*(int * *)(frame + 48))
#define local_cc (*(uint *)(frame + 52))
#define local_c8 (*(int *)(frame + 56))
#define local_c4 (*(ushort (*)[2])(frame + 60))
#define local_c0 (*(uint *)(frame + 64))
#define local_bc (*(undefined4 *)(frame + 68))
#define local_b8 (*(undefined4 *)(frame + 72))
#define local_b4 (*(void * *)(frame + 76))
#define local_b0 (*(undefined4 *)(frame + 80))
#define local_a8 (*(undefined4 *)(frame + 88))
#define auStack_f0 (*(undefined1 (*)[12])(frame + 16))
#define local_a4 (*(undefined4 *)(frame + 92))
#define local_a0 (*(undefined4 * *)(frame + 96))
#define local_9c (*(uint *)(frame + 100))
#define local_98 (*(undefined4 *)(frame + 104))
#define local_90 (*(undefined4 *)(frame + 112))
#define local_7c (*(undefined4 *)(frame + 132))
#define local_78 (*(undefined4 *)(frame + 136))
#define local_74 (*(undefined1 * *)(frame + 140))
#define local_70 (*(int *)(frame + 144))
#define local_6c (*(undefined1 * *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfdf4U)
 */

byte recovered_10014144(int param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  unsigned char frame[288] = {0};

  char cVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_f0;
  local_7c = *DAT_100146cc;
  local_78 = DAT_100146b4;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined4 *)0x0;
  local_70 = DAT_100146c8 + ((uintptr_t)pf_module_state+0xfe5cU);
  local_d4 = param_3;
  local_d0 = param_4;
  recovered_100078f0(&uStack_94);
  local_dc = (undefined8 *)&local_b0;
  local_e0 = &local_b4;
  local_d8 = param_1;
  do {
    uVar4 = local_9c;
    puVar2 = local_a0;
    if (local_d4 <= param_2) {
      bVar3 = 0;
      if (local_9c == 1) {
        bVar3 = 1;
        *param_5 = *local_a0;
      }
switchD_100141f8_caseD_2:
      local_9c = 0;
      recovered_10007424(local_a0);
      recovered_10007908(&uStack_94);
      return bVar3;
    }
    bVar3 = 0;
    pcVar5 = (char *)(*(int *)(local_d8 + 0x18) + param_2 * 0x10);
    cVar1 = *pcVar5;
    local_cc = param_2;
    switch((uintptr_t)(cVar1)) {
    case '\0':
      local_a4 = 0xffffffff;
      uStack_ac = 0;
      local_b0 = 0;
      local_b4 = (void *)0x0;
      local_b8 = 0xffffffff;
      local_bc = 0xffffffff;
      local_c4[0] = 0;
      local_c0 = *(uint *)(pcVar5 + 4);
      local_a8 = *(undefined4 *)(pcVar5 + 0xc);
      local_90 = 1;
      recovered_1001472c(local_d0,(undefined8 *)local_c4);
      local_90 = 2;
      local_c8 = local_d0[1] + -1;
      recovered_10014788((int *)&local_a0,&local_c8);
      break;
    case '\x01':
      local_b8 = 0xffffffff;
      local_bc = 0xffffffff;
      uVar4 = *(uint *)(local_d8 + 0x5c);
      *local_dc = DAT_100146b8;
      local_dc[1] = DAT_100146c0;
      local_b4 = (void *)0x0;
      local_c0 = 0;
      local_c4[0] = 0;
      if ((param_2 < uVar4) &&
         (uVar4 = *(uint *)(*(int *)(local_d8 + 0x58) + param_2 * 4), uVar4 != 0xffffffff)) {
        if (*(uint *)(local_d8 + 0x10) <= uVar4) {
          recovered_10007424((void *)0x0);
          goto switchD_100141f8_caseD_2;
        }
        local_c4[0] = 0x100;
      }
      else {
        local_c4[0] = 0x200;
        uVar4 = *(uint *)(pcVar5 + 4);
      }
      local_a8 = *(undefined4 *)(pcVar5 + 0xc);
      local_90 = 3;
      local_c0 = uVar4;
      recovered_1001472c(local_d0,(undefined8 *)local_c4);
      local_90 = 4;
      local_c8 = local_d0[1] + -1;
      recovered_10014788((int *)&local_a0,&local_c8);
      break;
    default:
      goto switchD_100141f8_caseD_2;
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x10':
      if (local_9c < 2) goto switchD_100141f8_caseD_2;
      local_bc = local_a0[local_9c - 2];
      local_b8 = local_a0[local_9c - 1];
      local_a4 = 0xffffffff;
      uStack_ac = 0;
      local_b0 = 0;
      local_b4 = (void *)0x0;
      local_c0 = 0;
      if ((byte)(cVar1 - 4) < 0xd) {
        bVar3 = *(byte *)(DAT_100146d0 + (uint)(byte)(cVar1 - 4));
      }
      local_c4[0] = (ushort)bVar3;
      local_a8 = *(undefined4 *)(pcVar5 + 0xc);
      local_90 = 6;
      local_9c = local_9c - 2;
      recovered_1001472c(local_d0,(undefined8 *)local_c4);
      local_90 = 7;
      local_c8 = local_d0[1] + -1;
      recovered_10014788((int *)&local_a0,&local_c8);
      break;
    case '\t':
    case '\n':
      if (local_9c == 0) goto switchD_100141f8_caseD_2;
      bVar3 = 7;
      if (cVar1 == '\t') {
        bVar3 = 6;
      }
      *local_dc = DAT_100146b8;
      local_dc[1] = DAT_100146c0;
      local_b8 = 0xffffffff;
      local_c0 = 0;
      local_bc = puVar2[uVar4 - 1];
      local_a8 = *(undefined4 *)(pcVar5 + 0xc);
      puVar2[uVar4 - 1] = local_d0[1];
      local_b4 = (void *)0x0;
      local_c4[0] = (ushort)bVar3;
      local_90 = 5;
      recovered_1001472c(local_d0,(undefined8 *)local_c4);
      break;
    case '\x18':
      uVar4 = *(uint *)(pcVar5 + 4);
      if (((int)uVar4 < 0) || (local_9c < uVar4)) goto switchD_100141f8_caseD_2;
      uStack_ac = 0;
      local_b0 = 0;
      local_b4 = (void *)0x0;
      local_c0 = 0;
      local_a4 = 0xffffffff;
      local_b8 = 0xffffffff;
      local_bc = 0xffffffff;
      local_c4[0] = 0xe;
      local_a8 = *(undefined4 *)(pcVar5 + 0xc);
      local_90 = 8;
      local_e4 = uVar4;
      recovered_100140ec((int *)local_e0,uVar4);
      for (uVar4 = local_e4; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((int)local_b4 + uVar4 * 4 + -4) = local_a0[local_9c - 1];
        local_9c = local_9c - 1;
      }
      local_90 = 9;
      recovered_1001472c(local_d0,(undefined8 *)local_c4);
      local_90 = 10;
      local_c8 = local_d0[1] + -1;
      recovered_10014788((int *)&local_a0,&local_c8);
    }
    local_b0 = 0;
    recovered_10007424(local_b4);
    param_2 = local_cc + 1;
  } while( true );
}

#undef DAT_100146b4
#undef DAT_100146b8
#undef DAT_100146c0
#undef DAT_100146c8
#undef DAT_100146cc
#undef DAT_100146d0
#undef uStack_ac
#undef uStack_94
#undef auStack_68
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
#undef local_a8
#undef auStack_f0
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10384U)
 */

undefined4 * recovered_100146d4(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    recovered_10010188(param_1);
    recovered_10007424((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x103dcU)
 */

void recovered_1001472c(int *param_1,undefined8 *param_2)

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
    recovered_10012708(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10012790((undefined8 *)(*param_1 + iVar1 * 0x24),param_2);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10438U)
 */

int recovered_10014788(int *param_1,undefined4 *param_2)

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
    recovered_1001263c(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}


#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10490U)
 */

char * recovered_100147e0(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = (char *)0x0;
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x10))) {
    pcVar1 = (char *)(*(int *)(param_1 + 0xc) + param_2 * 0x18);
    if (*pcVar1 != '\x04') {
      return (char *)0x0;
    }
    if (*(char **)(pcVar1 + 0x14) != &UndefinedInstruction) {
      software_udf(0xfdee,((uintptr_t)pf_module_state+0x104d4U));
      return *(char **)(pcVar1 + 0x14);
    }
    pcVar1 = pcVar1 + 8;
  }
  return pcVar1;
}

#undef EXT_00000004

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x104d8U)
 */

uint recovered_10014828(int *in_r0,char *in_r1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000e0e8(in_r0,in_r1);
  return bVar1 ^ 1;
}


#undef DAT_100148dc
#define DAT_100148dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1058cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x104ecU)
 */

void recovered_1001483c(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_10014064(param_2,param_3);
  bVar2 = iVar1 == *param_2 + param_2[1] * 0x10;
  if (bVar2) {
    recovered_100148e0((int)param_2);
    recovered_10014910(param_2,param_3,param_4);
    recovered_1000ea5c(param_2 + 6,(undefined4 *)*DAT_100148dc);
    recovered_1001497c((int)param_2,param_2[1] + -1);
    iVar1 = *param_2 + param_2[1] * 0x10 + -0x10;
  }
  *(bool *)(param_1 + 1) = bVar2;
  *param_1 = iVar1;
  return;
}

#undef DAT_100148dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10590U)
 */

void recovered_100148e0(int param_1)

{
  unsigned char frame[64] = {0};

  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x10) * 3) < (uint)((*(int *)(param_1 + 4) + 1) * 4))) {
    recovered_100149b4(param_1,*(int *)(param_1 + 4) * 2 + 2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x105c0U)
 */

int recovered_10014910(int *param_1,int *param_2,undefined4 *param_3)

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
    recovered_10012518(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10014a88((undefined4 *)(*param_1 + iVar1 * 0x10),param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + (iVar1 + 1) * 0x10 + -0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1062cU)
 */

void recovered_1001497c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_10014aa4(param_1,(int *)(*(int *)param_1 + param_2 * 0x10));
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
  *(int *)(iVar2 + uVar1 * 4) = param_2;
  return;
}


#undef DAT_10014a10
#define DAT_10014a10 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x106c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10664U)
 */

void recovered_100149b4(int param_1,uint param_2)

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
  uVar1 = recovered_10014a14(uVar1);
  puVar2 = (undefined4 *)*DAT_10014a10;
  recovered_1000e7ac((int *)(param_1 + 0xc),uVar1,puVar2);
  recovered_1000e7ac((int *)(param_1 + 0x18),*(uint *)(param_1 + 4),puVar2);
  recovered_10014a30(param_1);
  return;
}

#undef DAT_10014a10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x106c4U)
 */

uint recovered_10014a14(uint param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x106e0U)
 */

void recovered_10014a30(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0xffffffff;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    recovered_1001497c(param_1,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10738U)
 */

void recovered_10014a88(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_1000dc38(param_1,param_2);
  puVar1[3] = *param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10754U)
 */

uint recovered_10014aa4(int param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1000e5f8(param_1 + 0x24,in_r1);
  return *(int *)(param_1 + 0x10) - 1U & uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10778U)
 */

int recovered_10014ac8(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_10014aa4((int)param_1,param_2);
    piVar2 = (int *)(param_1[3] + uVar1 * 4);
    while (iVar3 = *piVar2, iVar3 != -1) {
      uVar1 = recovered_1000e644((int *)(*param_1 + iVar3 * 0x10),param_2);
      if (uVar1 != 0) {
        return iVar3;
      }
      piVar2 = (int *)(param_1[6] + iVar3 * 4);
    }
  }
  return -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x107ecU)
 */

int * recovered_10014b3c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_1000eab8(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    recovered_1001282c((undefined1 *)(*param_1 + iVar2),(undefined1 *)(*param_2 + iVar2));
    iVar2 = iVar2 + 0x18;
  }
  param_1[1] = param_2[1];
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10858U)
 */

int recovered_10014ba8(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10014d0c((int *)(param_1 + 8));
  return param_1;
}


#undef DAT_10014cd8
#define DAT_10014cd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10988U)))
#undef DAT_10014cdc
#define DAT_10014cdc (*(int *)(((uintptr_t)pf_module_state + 0x1098cU)))
#undef DAT_10014ce0
#define DAT_10014ce0 (*(int * *)(((uintptr_t)pf_module_state + 0x10990U)))
#undef DAT_10014ce4
#define DAT_10014ce4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x10994U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
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
 * Address: ((uintptr_t)pf_module_state+0x10874U)
 */

int * recovered_10014bc4(int *param_1,char *param_2,uint param_3)

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
  *param_1 = *DAT_10014ce0 + 8;
  local_7c = *DAT_10014ce4;
  local_78 = DAT_10014cd8;
  local_70 = DAT_10014cdc + ((uintptr_t)pf_module_state+0x108fcU);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  local_9c = param_1;
  recovered_10014ce8((int)param_1,param_2,param_3);
  recovered_10007908(&uStack_94);
  return local_9c;
}

#undef DAT_10014cd8
#undef DAT_10014cdc
#undef DAT_10014ce0
#undef DAT_10014ce4
#undef uStack_94
#undef auStack_a0
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
 * Address: ((uintptr_t)pf_module_state+0x10998U)
 */

void recovered_10014ce8(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_10014df8((int *)(param_1 + 8),param_2,param_3 | 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_10014dcc
#define DAT_10014dcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10a7cU)))
#undef DAT_10014dd0
#define DAT_10014dd0 (*(int *)(((uintptr_t)pf_module_state + 0x10a80U)))
#undef DAT_10014dd4
#define DAT_10014dd4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x10a84U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x109bcU)
 */

int * recovered_10014d0c(int *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_10014dd4;
  local_78 = DAT_10014dcc;
  local_70 = DAT_10014dd0 + ((uintptr_t)pf_module_state+0x10a08U);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  local_98 = param_1;
  recovered_10014e44(param_1);
  recovered_10007908(&uStack_94);
  return local_98;
}

#undef DAT_10014dcc
#undef DAT_10014dd0
#undef DAT_10014dd4
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10a88U)
 */

void recovered_10014dd8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10014d0c((int *)((int)param_1 + 8));
  recovered_10007424(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10aa8U)
 */

void recovered_10014df8(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;

  recovered_10014e44(param_1);
  iVar1 = recovered_10014e7c(param_3);
  puVar2 = recovered_10006674(param_2,iVar1);
  *param_1 = (int)puVar2;
  param_1[3] = 0;
  param_1[2] = 0;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10af4U)
 */

void recovered_10014e44(int *param_1)

{
  unsigned char frame[64] = {0};

  if ((uint *)*param_1 != (uint *)0x0) {
    recovered_10006a30((uint *)*param_1);
    *param_1 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


#undef DAT_10014eec
#define DAT_10014eec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10b9cU)))
#undef DAT_10014ef0
#define DAT_10014ef0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10ba0U)))
#undef DAT_10014ef4
#define DAT_10014ef4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10ba4U)))
#undef DAT_10014ef8
#define DAT_10014ef8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10ba8U)))
#undef DAT_10014efc
#define DAT_10014efc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bacU)))
#undef DAT_10014f00
#define DAT_10014f00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bb0U)))
#undef DAT_10014f04
#define DAT_10014f04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bb4U)))
#undef DAT_10014f08
#define DAT_10014f08 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bb8U)))
#undef DAT_10014f0c
#define DAT_10014f0c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bbcU)))
#undef DAT_10014f10
#define DAT_10014f10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bc0U)))
#undef DAT_10014f14
#define DAT_10014f14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bc4U)))
#undef DAT_10014f18
#define DAT_10014f18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10bc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10b2cU)
 */

undefined4 recovered_10014e7c(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if ((param_1 & 3) == 3) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 0x10) == 0) {
        uVar1 = DAT_10014f00;
        uVar2 = DAT_10014efc;
      }
      else {
        uVar1 = DAT_10014ef8;
        uVar2 = DAT_10014ef4;
      }
    }
    else {
      uVar1 = DAT_10014ef0;
      uVar2 = DAT_10014eec;
    }
  }
  else if ((param_1 & 2) == 0) {
    uVar1 = DAT_10014f18;
    uVar2 = DAT_10014f14;
  }
  else if ((param_1 & 8) == 0) {
    uVar1 = DAT_10014f10;
    uVar2 = DAT_10014f0c;
  }
  else {
    uVar1 = DAT_10014f08;
    uVar2 = DAT_10014f04;
  }
  if ((param_1 & 4) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

#undef DAT_10014eec
#undef DAT_10014ef0
#undef DAT_10014ef4
#undef DAT_10014ef8
#undef DAT_10014efc
#undef DAT_10014f00
#undef DAT_10014f04
#undef DAT_10014f08
#undef DAT_10014f0c
#undef DAT_10014f10
#undef DAT_10014f14
#undef DAT_10014f18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10bccU)
 */

void recovered_10014f1c(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_4) && (param_2 != 0 || param_3 == 0 && param_4 == 0)) {
      iVar2 = recovered_10006c00((void *)param_2,1,param_3,(uint *)*param_1);
      bVar1 = iVar2 == param_3;
      goto LAB_10014f80;
    }
  }
  bVar1 = false;
LAB_10014f80:
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


#define auStack_21c (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10c38U)
 */

int * recovered_10014f88(int *param_1,uint param_2)

{
  unsigned char frame[588] = {0};

  uint uVar1;
  int in_r3;

  uVar1 = param_2;
  while ((uVar1 != 0 && (uVar1 = recovered_10006a74(auStack_21c,1,0x200,(int *)param_2), uVar1 != 0)
         )) {
    recovered_1000dc80(param_1,(int)auStack_21c,uVar1,in_r3);
    uVar1 = uVar1 >> 9;
  }
  return param_1;
}

#undef auStack_21c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10ca4U)
 */

int recovered_10014ff4(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10014d0c((int *)(param_1 + 8));
  return param_1;
}


#undef DAT_10015124
#define DAT_10015124 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10dd4U)))
#undef DAT_10015128
#define DAT_10015128 (*(int *)(((uintptr_t)pf_module_state + 0x10dd8U)))
#undef DAT_1001512c
#define DAT_1001512c (*(int * *)(((uintptr_t)pf_module_state + 0x10ddcU)))
#undef DAT_10015130
#define DAT_10015130 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x10de0U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
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
 * Address: ((uintptr_t)pf_module_state+0x10cc0U)
 */

int * recovered_10015010(int *param_1,char *param_2,uint param_3)

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
  *param_1 = *DAT_1001512c + 8;
  local_7c = *DAT_10015130;
  local_78 = DAT_10015124;
  local_70 = DAT_10015128 + ((uintptr_t)pf_module_state+0x10d48U);
  local_90 = 1;
  recovered_100078f0(&uStack_94);
  local_9c = param_1;
  recovered_10015134((int)param_1,param_2,param_3);
  recovered_10007908(&uStack_94);
  return local_9c;
}

#undef DAT_10015124
#undef DAT_10015128
#undef DAT_1001512c
#undef DAT_10015130
#undef uStack_94
#undef auStack_a0
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
 * Address: ((uintptr_t)pf_module_state+0x10de4U)
 */

void recovered_10015134(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_10014df8((int *)(param_1 + 8),param_2,param_3 | 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10e08U)
 */

void recovered_10015158(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10014d0c((int *)((int)param_1 + 8));
  recovered_10007424(param_1);
  return;
}


#undef DAT_10015200
#define DAT_10015200 (*(int *)(((uintptr_t)pf_module_state + 0x10eb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10e28U)
 */

void recovered_10015178(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  puVar2 = recovered_100073f4(0x24);
  uVar3 = recovered_1000ea14(puVar2,(undefined4 *)param_2);
  recovered_10017bd8((undefined4 *)(uVar3 + 0xc),(undefined4 *)(param_2 + 0xc));
  puVar2[6] = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  puVar2[7] = uVar5;
  puVar2[8] = uVar6;
  piVar4 = recovered_100073f4(0x10);
  piVar4[3] = (int)puVar2;
  piVar4[2] = 1;
  piVar4[1] = 1;
  iVar1 = DAT_10015200;
  param_1[1] = puVar2;
  *piVar4 = iVar1 + 8;
  *param_1 = piVar4;
  return;
}

#undef DAT_10015200

#undef DAT_10015a98
#define DAT_10015a98 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11748U)))
#undef DAT_10015a9c
#define DAT_10015a9c (*(int *)(((uintptr_t)pf_module_state + 0x1174cU)))
#undef DAT_10015aa0
#define DAT_10015aa0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x11750U)))
#undef DAT_10015aa4
#define DAT_10015aa4 (*(int *)(((uintptr_t)pf_module_state + 0x11754U)))
#undef DAT_10015aa8
#define DAT_10015aa8 (*(void * *)(((uintptr_t)pf_module_state + 0x11758U)))
#undef DAT_10015aac
#define DAT_10015aac (*(int *)(((uintptr_t)pf_module_state + 0x1175cU)))
#undef DAT_10015ab0
#define DAT_10015ab0 (*(int *)(((uintptr_t)pf_module_state + 0x11760U)))
#undef DAT_10015ab4
#define DAT_10015ab4 (*(int *)(((uintptr_t)pf_module_state + 0x11764U)))
#undef DAT_10015ab8
#define DAT_10015ab8 (*(int *)(((uintptr_t)pf_module_state + 0x11768U)))
#undef DAT_10015abc
#define DAT_10015abc (*(int *)(((uintptr_t)pf_module_state + 0x1176cU)))
#undef DAT_10015ac0
#define DAT_10015ac0 (*(int *)(((uintptr_t)pf_module_state + 0x11770U)))
#define local_ec (*(uint *)(frame + 20))
#define local_e8 (*(int * *)(frame + 24))
#define local_e4 (*(uint *)(frame + 28))
#define local_e0 (*(int * *)(frame + 32))
#define local_dc (*(int *)(frame + 36))
#define local_d8 (*(undefined4 * *)(frame + 40))
#define local_d4 (*(int *)(frame + 44))
#define auStack_f0 (*(undefined1 (*)[4])(frame + 16))
#define local_d0 (*(uint *)(frame + 48))
#define local_cc (*(int * *)(frame + 52))
#define local_c8 (*(uint *)(frame + 56))
#define local_c4 (*(int * *)(frame + 60))
#define local_c0 (*(undefined8 *)(frame + 64))
#define local_b8 (*(uint *)(frame + 72))
#define local_a8 (*(void * *)(frame + 88))
#define local_98 (*(int * *)(frame + 104))
#define local_90 (*(undefined4 *)(frame + 112))
#define local_7c (*(undefined4 *)(frame + 132))
#define aiStack_b4 (*(int (*)[3])(frame + 76))
#define local_78 (*(undefined4 *)(frame + 136))
#define local_74 (*(undefined1 * *)(frame + 140))
#define local_70 (*(int *)(frame + 144))
#define local_6c (*(undefined1 * *)(frame + 148))
#define uStack_94 (*(undefined4 *)(frame + 108))
#define uStack_a4 (*(undefined4 *)(frame + 92))
#define auStack_68 (*(undefined1 (*)[8])(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10eb4U)
 */

void recovered_10015204(int param_1,int *param_2)

{
  unsigned char frame[288] = {0};

  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *out;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_f0;
  local_7c = *DAT_10015aa0;
  local_78 = DAT_10015a98;
  local_70 = DAT_10015a9c + ((uintptr_t)pf_module_state+0x10f04U);
  uVar9 = param_2[1];
  local_98 = (int *)param_1;
  recovered_100078f0(&uStack_94);
  if (uVar9 < 8) {
    local_90 = 0xffffffff;
    piVar7 = recovered_1000cfe0(aiStack_b4,DAT_10015aa4);
    local_90 = 1;
    recovered_1000f758(piVar7);
  }
  else {
    local_90 = 0xffffffff;
    iVar5 = recovered_10004f9c((void *)*param_2,DAT_10015aa8,4);
    if (iVar5 == 0) {
      local_90 = 0xffffffff;
      local_b8 = 4;
      iVar5 = recovered_10017c34(param_2,(int *)&local_b8);
      if (iVar5 == 1) {
        local_90 = 0xffffffff;
        recovered_1000cfe0(local_98,DAT_10015ab4);
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[7] = 0;
        local_98[8] = 0;
        local_90 = 4;
        local_cc = local_98 + 3;
        *local_cc = 0;
        local_e8 = local_98 + 6;
        *local_e8 = 0;
        local_c4 = param_2;
        recovered_10017d70(&local_a8,param_2,(int *)&local_b8);
        recovered_1000fb14(local_98,&local_a8);
        recovered_10007424(local_a8);
        local_90 = 5;
        local_c8 = recovered_10017c34(local_c4,(int *)&local_b8);
        local_90 = 6;
        recovered_1000eab8(local_cc,local_c8);
        uVar9 = local_c8;
        while (uVar9 != 0) {
          local_90 = 8;
          local_c8 = uVar9;
          uVar2 = recovered_10017eb0(local_c4,(int *)&local_b8);
          switch((uintptr_t)(uVar2)) {
          case 0:
            local_90 = 9;
            recovered_1000e50c(local_cc);
            break;
          case 1:
            local_d0 = local_b8 + 8;
            if ((uint)local_c4[1] < local_d0) {
              local_90 = 10;
              recovered_1000cfe0((int *)&local_a8,DAT_10015abc);
              local_90 = 0xb;
              recovered_1000f758(&local_a8);
              goto LAB_10015930;
            }
            uStack_a4 = 0;
            local_a8 = (void *)0x0;
            local_90 = 0xc;
            recovered_10004ee4(&local_a8,(void *)(*local_c4 + local_b8),8);
            local_b8 = local_d0;
            local_c0 = CONCAT44(uStack_a4,local_a8);
            local_90 = 0xd;
            recovered_10017fec(local_cc,(undefined4 *)&local_c0);
            break;
          case 2:
            local_d0 = local_b8 + 8;
            if ((uint)local_c4[1] < local_d0) {
              local_90 = 0xe;
              recovered_1000cfe0((int *)&local_a8,DAT_10015abc);
              local_90 = 0xf;
              recovered_1000f758(&local_a8);
              goto LAB_10015930;
            }
            uStack_a4 = 0;
            local_a8 = (void *)0x0;
            local_90 = 0x10;
            recovered_10004ee4(&local_a8,(void *)(*local_c4 + local_b8),8);
            local_c0 = CONCAT44(uStack_a4,local_a8);
            local_b8 = local_d0;
            local_90 = 0x11;
            recovered_10018054(local_cc,&local_c0);
            break;
          case 3:
            local_90 = 0x12;
            cVar3 = recovered_10017eb0(local_c4,(int *)&local_b8);
            local_90 = 0x13;
            local_a8 = (void *)CONCAT31(PF_PART3(local_a8, 1),cVar3 != '\0');
            recovered_100180b4(local_cc,(undefined1 *)&local_a8);
            break;
          case 4:
            local_90 = 0x14;
            recovered_10017d70(&local_a8,local_c4,(int *)&local_b8);
            local_90 = 0x15;
            recovered_10018114(local_cc,&local_a8);
            recovered_10007424(local_a8);
            break;
          default:
            local_90 = 0x16;
            recovered_1000cfe0((int *)&local_a8,DAT_10015ac0);
            local_90 = 0x17;
            recovered_1000f758(&local_a8);
            goto LAB_10015930;
          }
          uVar9 = local_c8 - 1;
        }
        local_90 = 7;
        uVar9 = recovered_10017c34(local_c4,(int *)&local_b8);
        local_ec = uVar9;
        if (uVar9 != 0) {
          uVar10 = local_98[7];
          if (uVar9 < uVar10) {
            iVar5 = uVar10 * 0x94;
            for (; iVar5 = iVar5 + -0x94, uVar9 < uVar10; uVar10 = uVar10 - 1) {
              recovered_1000fd6c(*local_e8 + iVar5);
            }
            local_98[7] = uVar9;
          }
          else if (uVar10 < uVar9) {
            local_90 = 0x1a;
            recovered_1000fdf4(local_e8,uVar9);
            uVar10 = local_98[7];
            while (uVar9 = local_ec, uVar10 < local_ec) {
              out = (undefined4 *)(uVar10 * 0x94 + *local_e8);
              recovered_10004f54(out,0,0x94);
              local_90 = 0x1b;
              recovered_10011b54(out);
              uVar10 = local_98[7] + 1;
              local_98[7] = uVar10;
            }
          }
          uVar10 = 0;
          while (uVar10 != uVar9) {
            local_90 = 0x1d;
            local_c8 = *local_e8;
            local_e4 = uVar10;
            recovered_10017d70(&local_a8,local_c4,(int *)&local_b8);
            local_d8 = (undefined4 *)(local_e4 * 0x94 + local_c8);
            recovered_1000fb14(local_d8,&local_a8);
            recovered_10007424(local_a8);
            local_90 = 0x1e;
            local_c8 = recovered_10017c34(local_c4,(int *)&local_b8);
            local_90 = 0x1f;
            local_cc = local_d8 + 3;
            recovered_10011e44(local_cc,local_c8);
            uVar9 = local_c8;
            while (uVar9 != 0) {
              local_90 = 0x21;
              local_c8 = uVar9;
              recovered_10017d70(&local_a8,local_c4,(int *)&local_b8);
              local_90 = 0x22;
              recovered_100182b8(local_cc,&local_a8);
              recovered_10007424(local_a8);
              uVar9 = local_c8 - 1;
            }
            local_90 = 0x20;
            local_c8 = recovered_10017c34(local_c4,(int *)&local_b8);
            local_90 = 0x23;
            local_e0 = local_d8 + 6;
            recovered_1001230c(local_e0,local_c8);
            uVar9 = local_c8;
            while (uVar9 != 0) {
              local_90 = 0x24;
              local_c8 = uVar9;
              bVar4 = recovered_10017eb0(local_c4,(int *)&local_b8);
              local_cc = (int *)(uint)bVar4;
              local_90 = 0x25;
              local_d0 = recovered_1001817c(local_c4,(int *)&local_b8);
              local_90 = 0x26;
              local_d4 = recovered_1001817c(local_c4,(int *)&local_b8);
              local_90 = 0x27;
              iVar5 = recovered_10017c34(local_c4,(int *)&local_b8);
              iVar6 = local_d8[7];
              if (iVar6 == local_d8[8]) {
                local_90 = 0x28;
                uVar9 = iVar6 << 1;
                if (iVar6 == 0) {
                  uVar9 = 4;
                }
                local_dc = iVar5;
                recovered_1001230c(local_e0,uVar9);
                iVar6 = local_d8[7];
                iVar5 = local_dc;
              }
              puVar8 = (undefined1 *)(local_d8[6] + iVar6 * 0x10);
              *puVar8 = (char)local_cc;
              *(int *)(puVar8 + 0xc) = iVar5;
              *(int *)(puVar8 + 8) = local_d4;
              *(uint *)(puVar8 + 4) = local_d0;
              local_d8[7] = local_d8[7] + 1;
              uVar9 = local_c8 - 1;
            }
            uVar9 = local_ec;
            uVar10 = local_e4 + 1;
          }
          local_90 = 0x1c;
          recovered_1001106c((int)local_98);
          recovered_10007908(&uStack_94);
          return;
        }
        local_90 = 0x18;
        recovered_1000cfe0((int *)&local_a8,DAT_10015ab8);
        local_90 = 0x19;
        recovered_1000f758(&local_a8);
      }
      else {
        local_90 = 0xffffffff;
        piVar7 = recovered_1000cfe0((int *)&local_a8,DAT_10015ab0);
        local_90 = 3;
        recovered_1000f758(piVar7);
      }
    }
    else {
      local_90 = 0xffffffff;
      piVar7 = recovered_1000cfe0((int *)&local_a8,DAT_10015aac);
      local_90 = 2;
      recovered_1000f758(piVar7);
    }
  }
LAB_10015930:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x115e0U));
  (*pcVar1)();
}

#undef DAT_10015a98
#undef DAT_10015a9c
#undef DAT_10015aa0
#undef DAT_10015aa4
#undef DAT_10015aa8
#undef DAT_10015aac
#undef DAT_10015ab0
#undef DAT_10015ab4
#undef DAT_10015ab8
#undef DAT_10015abc
#undef DAT_10015ac0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef auStack_f0
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_98
#undef local_90
#undef local_7c
#undef aiStack_b4
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef uStack_a4
#undef auStack_68

#undef DAT_10016a44
#define DAT_10016a44 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x126f4U)))
#undef DAT_10016a48
#define DAT_10016a48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x126f8U)))
#undef DAT_10016a4c
#define DAT_10016a4c (*(int *)(((uintptr_t)pf_module_state + 0x126fcU)))
#undef DAT_10017b80
#define DAT_10017b80 (*(int *)(((uintptr_t)pf_module_state + 0x13830U)))
#undef DAT_10017b84
#define DAT_10017b84 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13834U)))
#undef DAT_10017b88
#define DAT_10017b88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13838U)))
#undef DAT_10017b8c
#define DAT_10017b8c (*(int *)(((uintptr_t)pf_module_state + 0x1383cU)))
#undef DAT_10017b90
#define DAT_10017b90 (*(int *)(((uintptr_t)pf_module_state + 0x13840U)))
#undef DAT_10017b94
#define DAT_10017b94 (*(int *)(((uintptr_t)pf_module_state + 0x13844U)))
#undef DAT_10017b98
#define DAT_10017b98 (*(int *)(((uintptr_t)pf_module_state + 0x13848U)))
#undef DAT_10017b9c
#define DAT_10017b9c (*(int *)(((uintptr_t)pf_module_state + 0x1384cU)))
#undef DAT_10017ba0
#define DAT_10017ba0 (*(int *)(((uintptr_t)pf_module_state + 0x13850U)))
#undef DAT_10017ba4
#define DAT_10017ba4 (*(int *)(((uintptr_t)pf_module_state + 0x13854U)))
#undef DAT_10017ba8
#define DAT_10017ba8 (*(int *)(((uintptr_t)pf_module_state + 0x13858U)))
#undef DAT_10017bac
#define DAT_10017bac (*(int *)(((uintptr_t)pf_module_state + 0x1385cU)))
#undef DAT_10017bb0
#define DAT_10017bb0 (*(int *)(((uintptr_t)pf_module_state + 0x13860U)))
#undef DAT_10017bb4
#define DAT_10017bb4 (*(int *)(((uintptr_t)pf_module_state + 0x13864U)))
#undef DAT_10017bb8
#define DAT_10017bb8 (*(int *)(((uintptr_t)pf_module_state + 0x13868U)))
#undef DAT_10017bbc
#define DAT_10017bbc (*(int *)(((uintptr_t)pf_module_state + 0x1386cU)))
#undef DAT_10017bc0
#define DAT_10017bc0 (*(int *)(((uintptr_t)pf_module_state + 0x13870U)))
#undef DAT_10017bc4
#define DAT_10017bc4 (*(int *)(((uintptr_t)pf_module_state + 0x13874U)))
#undef DAT_10017bc8
#define DAT_10017bc8 (*(int *)(((uintptr_t)pf_module_state + 0x13878U)))
#undef DAT_10017bcc
#define DAT_10017bcc (*(int *)(((uintptr_t)pf_module_state + 0x1387cU)))
#undef DAT_10017bd0
#define DAT_10017bd0 (*(int *)(((uintptr_t)pf_module_state + 0x13880U)))
#undef DAT_10017bd4
#define DAT_10017bd4 (*(int *)(((uintptr_t)pf_module_state + 0x13884U)))
#define uStack_94 (*(undefined4 *)(frame + 940))
#define auStack_68 (*(undefined1 (*)[8])(frame + 984))
#define local_398 (*(int * *)(frame + 168))
#define local_394 (*(undefined4 * *)(frame + 172))
#define local_388 (*(int * *)(frame + 184))
#define local_384 (*(undefined4 * *)(frame + 188))
#define local_380 (*(int * *)(frame + 192))
#define local_370 (*(undefined1 (*)[8])(frame + 208))
#define local_368 (*(byte (*)[12])(frame + 216))
#define local_35c (*(undefined4 *)(frame + 228))
#define local_358 (*(uint (*)[2])(frame + 232))
#define local_340 (*(byte (*)[8])(frame + 256))
#define local_338 (*(byte (*)[12])(frame + 264))
#define local_32c (*(int *)(frame + 276))
#define local_328 (*(undefined1 (*)[8])(frame + 280))
#define local_314 (*(undefined4 *)(frame + 300))
#define local_30c (*(int *)(frame + 308))
#define local_308 (*(uint *)(frame + 312))
#define local_304 (*(undefined4 *)(frame + 316))
#define local_300 (*(undefined4 * *)(frame + 320))
#define local_2fc (*(undefined4 *)(frame + 324))
#define local_2f8 (*(undefined4 *)(frame + 328))
#define local_2f4 (*(int * *)(frame + 332))
#define local_2f0 (*(undefined4 *)(frame + 336))
#define local_2ec (*(undefined4 *)(frame + 340))
#define local_2e8 (*(undefined4 *)(frame + 344))
#define local_2d8 (*(int (*)[96])(frame + 360))
#define local_158 (*(void * (*)[3])(frame + 744))
#define local_14c (*(int * *)(frame + 756))
#define local_148 (*(byte * *)(frame + 760))
#define local_144 (*(byte * *)(frame + 764))
#define local_140 (*(uint * *)(frame + 768))
#define local_13c (*(byte * *)(frame + 772))
#define local_138 (*(int * *)(frame + 776))
#define local_134 (*(uint * *)(frame + 780))
#define local_130 (*(uint * *)(frame + 784))
#define local_12c (*(uint * *)(frame + 788))
#define local_128 (*(uint * *)(frame + 792))
#define local_124 (*(uint * *)(frame + 796))
#define local_120 (*(byte * *)(frame + 800))
#define local_11c (*(int * *)(frame + 804))
#define local_118 (*(uint * *)(frame + 808))
#define local_114 (*(byte * *)(frame + 812))
#define local_110 (*(int * *)(frame + 816))
#define local_10c (*(uint * *)(frame + 820))
#define local_108 (*(byte * *)(frame + 824))
#define local_104 (*(int * *)(frame + 828))
#define local_100 (*(uint * *)(frame + 832))
#define local_fc (*(byte * *)(frame + 836))
#define local_f8 (*(int * *)(frame + 840))
#define local_f4 (*(uint * *)(frame + 844))
#define local_f0 (*(byte * *)(frame + 848))
#define local_ec (*(int * *)(frame + 852))
#define local_e8 (*(uint * *)(frame + 856))
#define local_e4 (*(uint * *)(frame + 860))
#define local_e0 (*(int * *)(frame + 864))
#define local_dc (*(uint * *)(frame + 868))
#define local_d8 (*(int * *)(frame + 872))
#define local_d4 (*(byte * *)(frame + 876))
#define local_d0 (*(int * *)(frame + 880))
#define local_cc (*(uint * *)(frame + 884))
#define local_c8 (*(byte * *)(frame + 888))
#define local_c4 (*(int * *)(frame + 892))
#define local_c0 (*(uint * *)(frame + 896))
#define local_bc (*(byte * *)(frame + 900))
#define local_b8 (*(int * *)(frame + 904))
#define local_b4 (*(uint * *)(frame + 908))
#define local_b0 (*(byte * *)(frame + 912))
#define local_ac (*(int * *)(frame + 916))
#define local_a8 (*(uint * *)(frame + 920))
#define local_a4 (*(byte * *)(frame + 924))
#define local_a0 (*(int * *)(frame + 928))
#define local_9c (*(uint * *)(frame + 932))
#define local_98 (*(uint * *)(frame + 936))
#define local_90 (*(undefined4 *)(frame + 944))
#define local_7c (*(undefined4 *)(frame + 964))
#define local_78 (*(undefined4 *)(frame + 968))
#define local_74 (*(undefined1 * *)(frame + 972))
#define local_70 (*(int *)(frame + 976))
#define local_6c (*(undefined1 * *)(frame + 980))
#define auStackY_430 (*(undefined1 (*)[128])(frame + 16))
#define aiStack_350 (*(int (*)[4])(frame + 240))
#define aiStack_320 (*(int (*)[3])(frame + 288))
#define uStack_2e0 (*(undefined4 *)(frame + 352))
#define uStack_2dc (*(undefined4 *)(frame + 356))
#define uStack_2e4 (*(undefined4 *)(frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11774U)
 */

void recovered_10015ac4(undefined1 *param_1,int param_2,int *param_3,uint param_4,int param_5,
                       int param_6)

{
  unsigned char frame[1120] = {0};

  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 extraout_r2 = 0;
  int *piVar12;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  char *pcVar13;
  undefined4 extraout_r3_02 = 0;
  int *piVar14;
  ulonglong uVar15;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_430 + 0x80;
  local_7c = *DAT_10016a44;
  local_78 = DAT_10016a48;
  local_70 = DAT_10016a4c + ((uintptr_t)pf_module_state+0x117c8U);
  piVar14 = (int *)param_3[1];
  recovered_100078f0(&uStack_94);
  if (piVar14 == (int *)0x0) {
    local_14c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_14c,DAT_10017b80);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_14c,*DAT_10017b84,*DAT_10017b88);
  }
  else {
    if (((int)param_4 < 0) || ((uint)piVar14[7] <= param_4)) {
      local_90 = 0xffffffff;
      recovered_1000cfe0(local_2d8,DAT_10017b8c);
      local_90 = 2;
      recovered_10018320(piVar14,0,local_2d8);
      goto LAB_10017428;
    }
    local_388 = (int *)(param_4 * 0x94 + piVar14[6]);
    if (local_388[4] == param_6) {
      piVar14 = (int *)local_388[10];
      local_90 = 0xffffffff;
      local_380 = local_2d8;
      recovered_1001a928((int)local_380);
      uStack_2e4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      uStack_2e0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      uStack_2dc = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      local_384 = &local_2e8;
      local_2e8 = 0;
      local_2ec = 0;
      local_2f0 = 0;
      local_2f4 = (int *)0x0;
      local_2f8 = 0;
      local_2fc = 0;
      local_300 = (undefined4 *)0x0;
      local_394 = (undefined4 *)0x0;
      local_398 = (int *)0x0;
      if (piVar14 != (int *)0x0) {
        if (piVar14 < (int *)0x11) {
          for (piVar12 = (int *)0x0; piVar14 != piVar12; piVar12 = (int *)((int)piVar12 + 1)) {
            *(undefined1 *)((int)&local_2e8 + (int)piVar12) = 0;
          }
        }
        else {
          local_90 = 0xb;
          recovered_1000ed00((int *)&local_2f4,(uint)piVar14);
          local_90 = 0xc;
          local_328[0] = 0;
          recovered_100184ac((int)&local_300,(uint)piVar14,local_328);
          local_384 = local_300;
          local_380 = local_2f4;
        }
        iVar9 = 0;
        for (uVar6 = 0; uVar6 < (uint)local_388[4]; uVar6 = uVar6 + 1) {
          local_90 = 0xd;
          recovered_1000e08c((undefined1 *)((int)local_380 + iVar9),(undefined1 *)(param_5 + iVar9))
          ;
          *(undefined1 *)((int)local_384 + uVar6) = 1;
          iVar9 = iVar9 + 0x18;
        }
        local_394 = local_384;
        local_398 = local_380;
      }
      local_304 = 0;
      local_308 = 0;
      local_30c = 0;
      uVar6 = local_388[7];
      local_90 = 0xe;
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      recovered_1000eab8(&local_30c,uVar6);
      local_314 = 0;
      local_328[0] = 0;
      local_148 = local_368;
      local_140 = (uint *)local_338;
      local_138 = aiStack_350;
      local_384 = (undefined4 *)0x0;
      puVar11 = local_384;
      local_144 = local_148;
      local_13c = local_148;
      local_134 = local_140;
      local_130 = local_140;
      local_12c = local_140;
      local_128 = local_140;
      local_124 = local_140;
      local_120 = local_148;
      local_11c = local_138;
      local_118 = local_140;
      local_114 = local_148;
      local_110 = local_138;
      local_10c = local_140;
      local_108 = local_148;
      local_104 = local_138;
      local_100 = local_140;
      local_fc = local_148;
      local_f8 = local_138;
      local_f4 = local_140;
      local_f0 = local_148;
      local_ec = local_138;
      local_e8 = local_140;
      local_e4 = local_140;
      local_e0 = local_138;
      local_dc = local_140;
      local_d8 = local_138;
      local_d4 = local_148;
      local_d0 = local_138;
      local_cc = local_140;
      local_c8 = local_148;
      local_c4 = local_138;
      local_c0 = local_140;
      local_bc = local_148;
      local_b8 = local_138;
      local_b4 = local_140;
      local_b0 = local_148;
      local_ac = local_138;
      local_a8 = local_140;
      local_a4 = local_148;
      local_a0 = local_138;
      local_9c = local_140;
      local_98 = local_140;
      do {
        local_384 = puVar11;
        if ((uint)local_388[7] <= local_384) {
          local_90 = 0x86;
          recovered_1000eb54(param_1,local_328);
          goto LAB_10016e68;
        }
        pbVar10 = (byte *)(local_388[6] + (int)local_384 * 0x10);
        puVar11 = (undefined4 *)((int)local_384 + 1);
        switch((uintptr_t)(*pbVar10)) {
        case 0:
          piVar12 = (int *)param_3[1];
          uVar6 = *(uint *)(pbVar10 + 4);
          if (((int)uVar6 < 0) || ((uint)piVar12[4] <= uVar6)) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0xf;
            recovered_1000cfe0((int *)local_340,DAT_10017b9c);
            local_90 = 0x10;
            recovered_10018320(piVar12,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          local_90 = 0x11;
          recovered_100127c4(&local_30c,(undefined1 *)(piVar12[3] + uVar6 * 0x18));
          break;
        case 1:
          piVar12 = (int *)0xffffffff;
          if (local_384 < (uint)local_388[0x17]) {
            piVar12 = *(int **)(local_388[0x16] + (int)local_384 * 4);
          }
          if (((piVar14 == (int *)0x0 || piVar12 == (int *)0xffffffff) || (piVar14 <= piVar12)) ||
             (*(char *)((int)local_394 + (int)piVar12) == '\0')) {
            local_90 = 0x13;
            piVar12 = (int *)recovered_100184b8(param_3[1],*(uint *)(pbVar10 + 4),
                                                *(undefined4 *)(pbVar10 + 0xc));
            uVar6 = 0xffffffff;
            if (local_384 < (uint)local_388[0x1a]) {
              uVar6 = *(uint *)(local_388[0x19] + (int)local_384 * 4);
            }
            puVar4 = (undefined1 *)recovered_1000f4dc(param_2,uVar6);
            if (puVar4 == (undefined1 *)0x0) {
              local_90 = 0x14;
              uVar6 = recovered_1000f4ac(param_2,piVar12);
              puVar4 = (undefined1 *)recovered_1000f4dc(param_2,uVar6);
              if (puVar4 == (undefined1 *)0x0) {
                uVar8 = *(undefined4 *)(pbVar10 + 0xc);
                local_90 = 0x16;
                piVar14 = (int *)param_3[1];
                recovered_100090c0((int *)local_358,DAT_10017ba0,piVar12);
                local_90 = 0x17;
                recovered_10008fd8((undefined4 *)local_340,(int *)local_358,DAT_10017ba4);
                local_90 = 0x18;
                recovered_10018320(piVar14,uVar8,(int *)local_340);
                goto LAB_10017428;
              }
              if (local_384 < (uint)local_388[0x1a]) {
                *(uint *)(local_388[0x19] + (int)local_384 * 4) = uVar6;
              }
            }
            local_90 = 0x15;
            recovered_100127c4(&local_30c,puVar4);
          }
          else {
            local_90 = 0x12;
            recovered_100127c4(&local_30c,(undefined1 *)(local_398 + (int)piVar12 * 6));
          }
          break;
        case 2:
          if (local_308 == 0) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x19;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017ba8);
            local_90 = 0x1a;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          if (local_384 < (uint)local_388[0x17]) {
            piVar12 = local_388;
            if (param_4 != 0) {
              piVar12 = *(int **)(local_388[0x16] + (int)local_384 * 4);
            }
            if (param_4 != 0 && piVar12 != (int *)0xffffffff) {
              if (piVar14 <= piVar12) {
                uVar8 = *(undefined4 *)(pbVar10 + 0xc);
                local_90 = 0x20;
                piVar14 = (int *)param_3[1];
                recovered_1000cfe0((int *)local_340,DAT_10017bac);
                local_90 = 0x21;
                recovered_10018320(piVar14,uVar8,(int *)local_340);
                goto LAB_10017428;
              }
              local_90 = 0x22;
              recovered_1000e08c((undefined1 *)(local_398 + (int)piVar12 * 6),
                                 (undefined1 *)(local_30c + local_308 * 0x18 + -0x18));
              *(undefined1 *)((int)local_394 + (int)piVar12) = 1;
              break;
            }
          }
          local_90 = 0x1b;
          piVar12 = (int *)recovered_100184b8(param_3[1],*(uint *)(pbVar10 + 4),
                                              *(undefined4 *)(pbVar10 + 0xc));
          if (((uint)local_388[0x1a] <= local_384) ||
             (uVar6 = *(uint *)(local_388[0x19] + (int)local_384 * 4), uVar6 == 0xffffffff)) {
            local_90 = 0x1c;
            uVar6 = recovered_1000de1c(param_2,piVar12,local_384,extraout_r3);
            if (local_384 < (uint)local_388[0x1a]) {
              *(uint *)(local_388[0x19] + (int)local_384 * 4) = uVar6;
            }
          }
          local_90 = 0x1d;
          recovered_1000de98(param_2,uVar6,(undefined1 *)(local_30c + local_308 * 0x18 + -0x18));
          uVar6 = local_308;
          iVar9 = local_30c;
          local_90 = 0x1e;
          puVar4 = (undefined1 *)recovered_1000df14((int *)param_2,piVar12);
          local_90 = 0x1f;
          recovered_1000e08c(puVar4,(undefined1 *)(iVar9 + uVar6 * 0x18 + -0x18));
          break;
        case 3:
          local_90 = 0x23;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x24;
          recovered_1001877c(local_328,local_340);
          recovered_1000d37c((int *)local_98);
          break;
        case 4:
          local_90 = 0x25;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x26;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x27;
          recovered_1001879c(local_370,(byte *)local_358,local_340,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x28;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_a4);
          recovered_1000d37c(local_a0);
          recovered_1000d37c((int *)local_9c);
          break;
        case 5:
          local_90 = 0x29;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x2a;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x2b;
          recovered_10018aac(local_370,(byte *)local_358,local_340,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x2c;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_b0);
          recovered_1000d37c(local_ac);
          recovered_1000d37c((int *)local_a8);
          break;
        case 6:
          local_90 = 0x2d;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x2e;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x2f;
          recovered_10018c64(local_370,(byte *)local_358,local_340,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x30;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_bc);
          recovered_1000d37c(local_b8);
          recovered_1000d37c((int *)local_b4);
          break;
        case 7:
          local_90 = 0x31;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x32;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x33;
          recovered_10018e20(local_370,(byte *)local_358,local_340,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x34;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_c8);
          recovered_1000d37c(local_c4);
          recovered_1000d37c((int *)local_c0);
          break;
        case 8:
          local_90 = 0x35;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x36;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x37;
          recovered_10019004(local_370,(byte *)local_358,local_340,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x38;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_d4);
          recovered_1000d37c(local_d0);
          recovered_1000d37c((int *)local_cc);
          break;
        case 9:
          local_90 = 0x39;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x3a;
          recovered_10019248(local_340,(byte *)local_358,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x3b;
          recovered_1001a9c0(&local_30c,local_340);
          recovered_1000d37c((int *)local_dc);
          recovered_1000d37c(local_d8);
          break;
        case 10:
          local_90 = 0x3c;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_338[0] = recovered_10008964((char *)local_358);
          local_338[0] = local_338[0] ^ 1;
          local_32c = 3;
          local_340[0] = 3;
          local_90 = 0x3d;
          recovered_1001a9c0(&local_30c,local_340);
          recovered_1000d37c((int *)local_e4);
          recovered_1000d37c(local_e0);
          break;
        case 0xb:
          local_90 = 0x3e;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x3f;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x40;
          uVar6 = recovered_100193c4((byte *)local_358,local_340);
          local_368[0] = (byte)uVar6;
          local_35c = 3;
          local_370[0] = 3;
          local_90 = 0x41;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_f0);
          recovered_1000d37c(local_ec);
          recovered_1000d37c((int *)local_e8);
          break;
        case 0xc:
          local_90 = 0x42;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x43;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x44;
          uVar6 = recovered_100193c4((byte *)local_358,local_340);
          local_368[0] = (byte)uVar6 ^ 1;
          local_35c = 3;
          local_370[0] = 3;
          local_90 = 0x45;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_fc);
          recovered_1000d37c(local_f8);
          recovered_1000d37c((int *)local_f4);
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
          local_90 = 0x46;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x47;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x48;
          recovered_10019674(local_370,(byte *)local_358,local_340,(uint)*pbVar10,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x49;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_108);
          recovered_1000d37c(local_104);
          recovered_1000d37c((int *)local_100);
          break;
        case 0x11:
          local_90 = 0x4a;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x4b;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          bVar3 = recovered_10008964((char *)local_358);
          bVar2 = 0;
          if (bVar3 != 0) {
            bVar2 = recovered_10008964((char *)local_340);
          }
          local_368[0] = bVar2;
          local_35c = 3;
          local_370[0] = 3;
          local_90 = 0x4c;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_114);
          recovered_1000d37c(local_110);
          recovered_1000d37c((int *)local_10c);
          break;
        case 0x12:
          local_90 = 0x4d;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x4e;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          bVar3 = recovered_10008964((char *)local_358);
          bVar2 = 1;
          if (bVar3 == 0) {
            bVar2 = recovered_10008964((char *)local_340);
          }
          local_368[0] = bVar2;
          local_35c = 3;
          local_370[0] = 3;
          local_90 = 0x4f;
          recovered_1001a9c0(&local_30c,local_370);
          recovered_1000d37c((int *)local_120);
          recovered_1000d37c(local_11c);
          recovered_1000d37c((int *)local_118);
          break;
        case 0x13:
          puVar11 = *(undefined4 **)(pbVar10 + 4);
          if (((int)puVar11 < 0) || ((uint)local_388[7] < puVar11)) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x50;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017bb0);
            local_90 = 0x51;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          break;
        case 0x14:
          local_90 = 0x52;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          bVar2 = recovered_10008964((char *)local_340);
          local_384 = puVar11;
          if ((bVar2 == 0) &&
             ((local_384 = *(undefined4 **)(pbVar10 + 4), (int)local_384 < 0 ||
              ((uint)local_388[7] < local_384)))) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x53;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_358,DAT_10017bb4);
            local_90 = 0x54;
            recovered_10018320(piVar14,uVar8,(int *)local_358);
            goto LAB_10017428;
          }
          recovered_1000d37c((int *)local_124);
          puVar11 = local_384;
          break;
        case 0x15:
          uVar6 = *(uint *)(pbVar10 + 4);
          if ((int)uVar6 < 0) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x55;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017bb8);
            local_90 = 0x56;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          if (local_308 <= uVar6) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x57;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017bbc);
            local_90 = 0x58;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          uVar7 = local_308 + ~uVar6;
          local_90 = 0x59;
          pcVar13 = (char *)(local_30c + uVar7 * 0x18);
          pcVar5 = (char *)0x0;
          if (uVar6 != 0) {
            pcVar5 = pcVar13 + 0x18;
          }
          recovered_100198e0(local_340,param_2,(int)param_3,pcVar13,pcVar5,uVar6,
                             *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x5a;
          recovered_1000ed00(&local_30c,uVar7);
          local_90 = 0x5b;
          recovered_1001a9c0(&local_30c,local_340);
          recovered_1000d37c((int *)local_128);
          break;
        case 0x16:
          local_90 = 0x5c;
          piVar12 = (int *)recovered_100184b8(param_3[1],*(uint *)(pbVar10 + 4),
                                              *(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x5d;
          recovered_1001a68c((int)local_358,piVar12,*(undefined4 *)(pbVar10 + 8),param_3);
          local_90 = 0x5e;
          recovered_1001a598(local_340,(int *)local_358);
          recovered_1000d4cc((int *)local_358);
          if (((uint)local_388[0x1a] <= local_384) ||
             (uVar6 = *(uint *)(local_388[0x19] + (int)local_384 * 4), uVar6 == 0xffffffff)) {
            local_90 = 0x5f;
            uVar6 = recovered_1000de1c(param_2,piVar12,extraout_r2,extraout_r3_02);
            if (local_384 < (uint)local_388[0x1a]) {
              *(uint *)(local_388[0x19] + (int)local_384 * 4) = uVar6;
            }
          }
          local_90 = 0x60;
          recovered_1000de98(param_2,uVar6,local_340);
          local_90 = 0x61;
          puVar4 = (undefined1 *)recovered_1000df14((int *)param_2,piVar12);
          local_90 = 0x62;
          recovered_1000e08c(puVar4,local_340);
          recovered_1000d37c((int *)local_12c);
          break;
        case 0x17:
          if (local_308 == 0) {
            *(undefined4 *)(param_1 + 0x14) = 0;
            *param_1 = 0;
          }
          else {
            local_90 = 99;
            recovered_10018644(param_1,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          }
LAB_10016e68:
          recovered_1000d37c(aiStack_320);
          recovered_1001d318(&local_30c);
          local_2fc = 0;
          recovered_10007424(local_300);
          recovered_1001d318((int *)&local_2f4);
          recovered_1001cb84((int)local_2d8);
          recovered_10007908(&uStack_94);
          return;
        case 0x18:
          uVar6 = *(uint *)(pbVar10 + 4);
          if ((int)uVar6 < 0) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 100;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017bc0);
            local_90 = 0x65;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          if (local_308 < uVar6) {
            uVar8 = *(undefined4 *)(pbVar10 + 0xc);
            local_90 = 0x66;
            piVar14 = (int *)param_3[1];
            recovered_1000cfe0((int *)local_340,DAT_10017bc4);
            local_90 = 0x67;
            recovered_10018320(piVar14,uVar8,(int *)local_340);
            goto LAB_10017428;
          }
          local_90 = 0x68;
          recovered_1001cb58(local_358,uVar6);
          iVar9 = uVar6 * 0x18;
          uVar8 = extraout_r3_00;
          for (; iVar9 = iVar9 + -0x18, uVar6 != 0; uVar6 = uVar6 - 1) {
            local_90 = 0x6a;
            recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc)
                              );
            local_90 = 0x6b;
            recovered_1001877c((undefined1 *)(local_358[0] + iVar9),local_340);
            recovered_1000d37c((int *)local_134);
            uVar8 = extraout_r3_01;
          }
          local_90 = 0x69;
          recovered_1000850c(local_340,local_358,0,uVar8);
          local_90 = 0x6c;
          recovered_1001a9c0(&local_30c,local_340);
          recovered_1000d37c((int *)local_130);
          recovered_1001d318((int *)local_358);
          break;
        case 0x19:
          local_90 = 0x6d;
          recovered_10018644(local_340,&local_30c,(int *)param_3[1],*(undefined4 *)(pbVar10 + 0xc));
          local_90 = 0x6e;
          recovered_10018644((undefined1 *)local_358,&local_30c,(int *)param_3[1],
                             *(undefined4 *)(pbVar10 + 0xc));
          uVar7 = local_358[0] & 0xff;
          uVar6 = (uint)local_340[0];
          if (uVar7 == 5 && uVar6 == 1) {
            local_90 = 0x6f;
            piVar12 = (int *)recovered_10009844((char *)local_358);
            if (local_32c != 1) goto LAB_10017428;
            if ((int)local_140[1] < 0) {
              uVar8 = *(undefined4 *)(pbVar10 + 0xc);
              local_90 = 0x70;
              piVar14 = (int *)param_3[1];
              recovered_1000cfe0((int *)local_370,DAT_10017bc8);
              local_90 = 0x71;
              recovered_10018320(piVar14,uVar8,(int *)local_370);
              goto LAB_10017428;
            }
            if ((uint)piVar12[1] <= *local_140) {
              local_35c = 0;
              local_370[0] = 0;
              local_90 = 0x72;
              recovered_1001a9c0(&local_30c,local_370);
              pbVar10 = local_13c;
              goto LAB_10016e3c;
            }
            local_90 = 0x73;
            recovered_100127c4(&local_30c,(undefined1 *)(*piVar12 + *local_140 * 0x18));
          }
          else {
            if (uVar7 == 6 && uVar6 == 4) {
              local_90 = 0x74;
              piVar12 = (int *)recovered_10009aa4((char *)local_358);
              local_90 = 0x75;
              puVar4 = (undefined1 *)recovered_1001a7d4(piVar12,(char *)local_340);
              if (puVar4 == (undefined1 *)0x0) {
                local_35c = 0;
                local_370[0] = 0;
              }
              else {
                local_90 = 0x76;
                recovered_1001282c(local_370,puVar4);
              }
              local_90 = 0x77;
              recovered_100127c4(&local_30c,local_370);
              pbVar10 = local_144;
            }
            else {
              if (uVar7 == 6) {
                local_90 = 0x78;
                piVar12 = (int *)recovered_10009aa4((char *)local_358);
                local_90 = 0x79;
                puVar4 = (undefined1 *)recovered_1001a7d4(piVar12,(char *)local_340);
                if (puVar4 == (undefined1 *)0x0) goto LAB_10016df0;
LAB_10016d50:
                local_90 = 0x7a;
                recovered_1001282c(local_370,puVar4);
              }
              else {
                uVar8 = *(undefined4 *)(pbVar10 + 0xc);
                piVar12 = (int *)param_3[1];
                if (2 < uVar6 - 1) {
                  local_90 = 0x7b;
                  recovered_1000cfe0((int *)local_158,DAT_10017bcc);
                  local_90 = 0x7c;
                  recovered_10018320(piVar12,uVar8,(int *)local_158);
                  goto LAB_10017428;
                }
                local_90 = 0x7d;
                uVar15 = recovered_100091a8((char *)local_340);
                uVar6 = (uint)uVar15;
                if ((longlong)uVar15 < 0) {
                  local_90 = 0x7e;
                  recovered_1000cfe0((int *)local_158,DAT_10017bc8);
                  local_90 = 0x7f;
                  recovered_10018320(piVar12,uVar8,(int *)local_158);
                  goto LAB_10017428;
                }
                if ((local_358[0] & 0xff) == 4) {
                  local_90 = 0x81;
                  piVar12 = (int *)recovered_100095e8((char *)local_358);
                  if (uVar6 < (uint)piVar12[1]) {
                    iVar9 = DAT_10017bd0;
                    if (*piVar12 != 0) {
                      iVar9 = *piVar12;
                    }
                    local_90 = 0x82;
                    recovered_1000fc94((int *)local_158,1,*(undefined1 *)(iVar9 + uVar6));
                    recovered_10008394(local_370,local_158);
                    recovered_10007424(local_158[0]);
                    goto LAB_10016dfc;
                  }
                }
                else {
                  if ((local_358[0] & 0xff) != 5) {
                    local_90 = 0x83;
                    recovered_1000cfe0((int *)local_158,DAT_10017bd4);
                    local_90 = 0x84;
                    recovered_10018320(piVar12,uVar8,(int *)local_158);
                    goto LAB_10017428;
                  }
                  local_90 = 0x80;
                  piVar12 = (int *)recovered_10009844((char *)local_358);
                  if (uVar6 < (uint)piVar12[1]) {
                    puVar4 = (undefined1 *)(*piVar12 + uVar6 * 0x18);
                    goto LAB_10016d50;
                  }
                }
LAB_10016df0:
                local_35c = 0;
                local_370[0] = 0;
              }
LAB_10016dfc:
              local_90 = 0x85;
              recovered_1001a9c0(&local_30c,local_370);
              pbVar10 = local_148;
            }
LAB_10016e3c:
            recovered_1000d37c((int *)pbVar10);
          }
          recovered_1000d37c(local_138);
          recovered_1000d37c((int *)local_140);
        }
      } while( true );
    }
  }
  local_2d8[2] = 0;
  local_2d8[1] = 0;
  local_2d8[0] = 0;
  local_90 = 3;
  recovered_1000dd64(local_2d8,DAT_10017b90);
  local_90 = 4;
  recovered_10008fbc(local_2d8,local_388);
  local_90 = 5;
  recovered_1000dd64(local_2d8,DAT_10017b94);
  local_90 = 6;
  piVar14 = (int *)recovered_100184a4(local_2d8,local_388[4]);
  local_90 = 7;
  recovered_1000dd64(piVar14,DAT_10017b98);
  local_90 = 8;
  recovered_100184a4(piVar14,param_6);
  local_90 = 9;
  piVar14 = (int *)param_3[1];
  recovered_1000dc38((undefined4 *)local_328,local_2d8);
  local_90 = 10;
  recovered_10018320(piVar14,0,(int *)local_328);
LAB_10017428:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x130d8U));
  (*pcVar1)();
}

#undef DAT_10016a44
#undef DAT_10016a48
#undef DAT_10016a4c
#undef DAT_10017b80
#undef DAT_10017b84
#undef DAT_10017b88
#undef DAT_10017b8c
#undef DAT_10017b90
#undef DAT_10017b94
#undef DAT_10017b98
#undef DAT_10017b9c
#undef DAT_10017ba0
#undef DAT_10017ba4
#undef DAT_10017ba8
#undef DAT_10017bac
#undef DAT_10017bb0
#undef DAT_10017bb4
#undef DAT_10017bb8
#undef DAT_10017bbc
#undef DAT_10017bc0
#undef DAT_10017bc4
#undef DAT_10017bc8
#undef DAT_10017bcc
#undef DAT_10017bd0
#undef DAT_10017bd4
#undef uStack_94
#undef auStack_68
#undef local_398
#undef local_394
#undef local_388
#undef local_384
#undef local_380
#undef local_370
#undef local_368
#undef local_35c
#undef local_358
#undef local_340
#undef local_338
#undef local_32c
#undef local_328
#undef local_314
#undef local_30c
#undef local_308
#undef local_304
#undef local_300
#undef local_2fc
#undef local_2f8
#undef local_2f4
#undef local_2f0
#undef local_2ec
#undef local_2e8
#undef local_2d8
#undef local_158
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
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_430
#undef aiStack_350
#undef aiStack_320
#undef uStack_2e0
#undef uStack_2dc
#undef uStack_2e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13888U)
 */

void recovered_10017bd8(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x138b4U)
 */

void recovered_10017c04(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x138b8U)
 */

void recovered_10017c08(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x138bcU)
 */

void recovered_10017c0c(int param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    pointer = (void *)recovered_1000f590(*(int *)(param_1 + 0xc));
  }
  recovered_10007424(pointer);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


#undef DAT_10017d60
#define DAT_10017d60 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13a10U)))
#undef DAT_10017d64
#define DAT_10017d64 (*(int *)(((uintptr_t)pf_module_state + 0x13a14U)))
#undef DAT_10017d68
#define DAT_10017d68 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13a18U)))
#undef DAT_10017d6c
#define DAT_10017d6c (*(int *)(((uintptr_t)pf_module_state + 0x13a1cU)))
#define local_a0 (*(int (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x138e4U)
 */

int recovered_10017c34(int *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  int *message;
  int iVar2;
  uint uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  local_7c = *DAT_10017d68;
  local_78 = DAT_10017d60;
  local_70 = DAT_10017d64 + ((uintptr_t)pf_module_state+0x13934U);
  uVar3 = param_1[1];
  iVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  if (uVar3 < iVar2 + 4U) {
    local_90 = 0xffffffff;
    message = recovered_1000cfe0(local_a0,DAT_10017d6c);
    local_90 = 1;
    recovered_1000f758(message);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x139dcU));
    (*pcVar1)();
  }
  local_a0[0] = 0;
  local_90 = 0xffffffff;
  recovered_10004ee4(local_a0,(void *)(*param_1 + iVar2),4);
  iVar2 = local_a0[0];
  *param_2 = *param_2 + 4;
  recovered_10007908(&uStack_94);
  return iVar2;
}

#undef DAT_10017d60
#undef DAT_10017d64
#undef DAT_10017d68
#undef DAT_10017d6c
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10017ea0
#define DAT_10017ea0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13b50U)))
#undef DAT_10017ea4
#define DAT_10017ea4 (*(int *)(((uintptr_t)pf_module_state + 0x13b54U)))
#undef DAT_10017ea8
#define DAT_10017ea8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13b58U)))
#undef DAT_10017eac
#define DAT_10017eac (*(int *)(((uintptr_t)pf_module_state + 0x13b5cU)))
#define local_90 (*(undefined4 *)(frame + 32))
#define aiStack_a0 (*(int (*)[3])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13a20U)
 */

void recovered_10017d70(undefined4 *param_1,int *param_2,int *param_3)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  uint uVar2;
  int *message;
  int in_r3;
  int iVar3;
  uint uVar4;

  uVar2 = recovered_10017c34(param_2,param_3);
  local_7c = *DAT_10017ea8;
  local_78 = DAT_10017ea0;
  local_70 = DAT_10017ea4 + ((uintptr_t)pf_module_state+0x13a84U);
  uVar4 = param_2[1];
  iVar3 = *param_3;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)aiStack_a0;
  recovered_100078f0(&uStack_94);
  if (uVar4 < iVar3 + uVar2) {
    local_90 = 0xffffffff;
    message = recovered_1000cfe0(aiStack_a0,DAT_10017eac);
    local_90 = 1;
    recovered_1000f758(message);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x13b1cU));
    (*pcVar1)();
  }
  local_90 = 0xffffffff;
  recovered_1000d238(param_1,*param_2 + iVar3,uVar2,in_r3);
  *param_3 = *param_3 + uVar2;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10017ea0
#undef DAT_10017ea4
#undef DAT_10017ea8
#undef DAT_10017eac
#undef local_90
#undef aiStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10017fdc
#define DAT_10017fdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13c8cU)))
#undef DAT_10017fe0
#define DAT_10017fe0 (*(int *)(((uintptr_t)pf_module_state + 0x13c90U)))
#undef DAT_10017fe4
#define DAT_10017fe4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13c94U)))
#undef DAT_10017fe8
#define DAT_10017fe8 (*(int *)(((uintptr_t)pf_module_state + 0x13c98U)))
#define local_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13b60U)
 */

undefined1 recovered_10017eb0(int *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  undefined1 uVar2;
  int *message;
  int iVar3;
  uint uVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = local_a0;
  local_7c = *DAT_10017fe4;
  local_78 = DAT_10017fdc;
  local_70 = DAT_10017fe0 + ((uintptr_t)pf_module_state+0x13bb0U);
  uVar4 = param_1[1];
  iVar3 = *param_2;
  recovered_100078f0(&uStack_94);
  if (uVar4 < iVar3 + 1U) {
    local_90 = 0xffffffff;
    message = recovered_1000cfe0((int *)local_a0,DAT_10017fe8);
    local_90 = 1;
    recovered_1000f758(message);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x13c58U));
    (*pcVar1)();
  }
  local_a0[0] = 0;
  local_90 = 0xffffffff;
  recovered_10004ee4(local_a0,(void *)(*param_1 + iVar3),1);
  uVar2 = local_a0[0];
  *param_2 = *param_2 + 1;
  recovered_10007908(&uStack_94);
  return uVar2;
}

#undef DAT_10017fdc
#undef DAT_10017fe0
#undef DAT_10017fe4
#undef DAT_10017fe8
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13c9cU)
 */

void recovered_10017fec(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000eab8(param_1,uVar3);
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1 + 1;
  puVar2 = (undefined1 *)(*param_1 + iVar1 * 0x18);
  *puVar2 = 1;
  uVar4 = *param_2;
  *(undefined4 *)(puVar2 + 0xc) = param_2[1];
  *(undefined4 *)(puVar2 + 8) = uVar4;
  *(undefined4 *)(puVar2 + 0x14) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d04U)
 */

void recovered_10018054(int *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar3 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar3 = 4;
    }
    recovered_1000eab8(param_1,uVar3);
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1 + 1;
  puVar2 = (undefined1 *)(*param_1 + iVar1 * 0x18);
  *puVar2 = 2;
  uVar4 = *param_2;
  *(undefined4 *)(puVar2 + 0x14) = 2;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d64U)
 */

void recovered_100180b4(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;

  iVar2 = param_1[1];
  if (iVar2 == param_1[2]) {
    uVar4 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar4 = 4;
    }
    recovered_1000eab8(param_1,uVar4);
    iVar2 = param_1[1];
  }
  param_1[1] = iVar2 + 1;
  puVar3 = (undefined1 *)(*param_1 + iVar2 * 0x18);
  *puVar3 = 3;
  uVar1 = *param_2;
  *(undefined4 *)(puVar3 + 0x14) = 3;
  puVar3[8] = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13dc4U)
 */

int recovered_10018114(int *param_1,undefined4 *param_2)

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
    recovered_1000eab8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10008394((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


#undef DAT_100182a8
#define DAT_100182a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x13f58U)))
#undef DAT_100182ac
#define DAT_100182ac (*(int *)(((uintptr_t)pf_module_state + 0x13f5cU)))
#undef DAT_100182b0
#define DAT_100182b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x13f60U)))
#undef DAT_100182b4
#define DAT_100182b4 (*(int *)(((uintptr_t)pf_module_state + 0x13f64U)))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(int (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13e2cU)
 */

int recovered_1001817c(int *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  int *message;
  int iVar2;
  uint uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  local_7c = *DAT_100182b0;
  local_78 = DAT_100182a8;
  local_70 = DAT_100182ac + ((uintptr_t)pf_module_state+0x13e7cU);
  uVar3 = param_1[1];
  iVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  if (uVar3 < iVar2 + 4U) {
    local_90 = 0xffffffff;
    message = recovered_1000cfe0(local_a0,DAT_100182b4);
    local_90 = 1;
    recovered_1000f758(message);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x13f24U));
    (*pcVar1)();
  }
  local_a0[0] = 0;
  local_90 = 0xffffffff;
  recovered_10004ee4(local_a0,(void *)(*param_1 + iVar2),4);
  iVar2 = local_a0[0];
  *param_2 = *param_2 + 4;
  recovered_10007908(&uStack_94);
  return iVar2;
}

#undef DAT_100182a8
#undef DAT_100182ac
#undef DAT_100182b0
#undef DAT_100182b4
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13f68U)
 */

int recovered_100182b8(int *param_1,undefined4 *param_2)

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
    recovered_10011e44(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000ea14((undefined4 *)(*param_1 + iVar1 * 0xc),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}


#undef DAT_10018490
#define DAT_10018490 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14140U)))
#undef DAT_10018494
#define DAT_10018494 (*(int *)(((uintptr_t)pf_module_state + 0x14144U)))
#undef DAT_10018498
#define DAT_10018498 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14148U)))
#undef DAT_1001849c
#define DAT_1001849c (*(int *)(((uintptr_t)pf_module_state + 0x1414cU)))
#undef DAT_100184a0
#define DAT_100184a0 (*(int *)(((uintptr_t)pf_module_state + 0x14150U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_ac (*(undefined4 (*)[3])(frame + 36))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_b4 (*(int * *)(frame + 28))
#define local_b0 (*(int * *)(frame + 32))
#define local_a0 (*(void * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13fd0U)
 */

void recovered_10018320(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[240] = {0};

  code *pcVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10018498;
  local_78 = DAT_10018490;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_70 = DAT_10018494 + ((uintptr_t)pf_module_state+0x14034U);
  local_90 = 1;
  local_b4 = (int *)param_2;
  local_b0 = param_3;
  recovered_100078f0(&uStack_94);
  recovered_10008fbc((int *)&local_a0,param_1);
  local_90 = 2;
  recovered_1000dd64((int *)&local_a0,DAT_1001849c);
  local_90 = 3;
  local_b4 = (int *)recovered_1000fb98((int *)&local_a0,local_b4);
  local_90 = 4;
  recovered_1000dd64(local_b4,DAT_100184a0);
  local_90 = 5;
  recovered_10008fbc(local_b4,local_b0);
  local_90 = 6;
  recovered_1000dc38(auStack_ac,(int *)&local_a0);
  recovered_10007424(local_a0);
  local_90 = 7;
  recovered_1000f758(auStack_ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x140e0U));
  (*pcVar1)();
}

#undef DAT_10018490
#undef DAT_10018494
#undef DAT_10018498
#undef DAT_1001849c
#undef DAT_100184a0
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_ac
#undef auStack_c0
#undef uStack_94
#undef local_b4
#undef local_b0
#undef local_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14154U)
 */

uint recovered_100184a4(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_1000fba0(param_1,param_2,0);
  return (uint)piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1415cU)
 */

void recovered_100184ac(int param_1,uint in_r1,undefined1 *in_r2)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  recovered_1000eda0((int *)param_1,in_r1,in_r2);
  return;
}


#undef DAT_10018630
#define DAT_10018630 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x142e0U)))
#undef DAT_10018634
#define DAT_10018634 (*(int *)(((uintptr_t)pf_module_state + 0x142e4U)))
#undef DAT_10018638
#define DAT_10018638 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x142e8U)))
#undef DAT_1001863c
#define DAT_1001863c (*(int *)(((uintptr_t)pf_module_state + 0x142ecU)))
#undef DAT_10018640
#define DAT_10018640 (*(int *)(((uintptr_t)pf_module_state + 0x142f0U)))
#define aiStack_a0 (*(int (*)[3])(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define aiStack_ac (*(int (*)[3])(frame + 20))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14168U)
 */

char * recovered_100184b8(int param_1,uint param_2,undefined4 param_3)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  uint uVar2;
  char *pcVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10018638;
  local_78 = DAT_10018630;
  local_70 = DAT_10018634 + ((uintptr_t)pf_module_state+0x141bcU);
  uVar2 = *(uint *)(param_1 + 0x10);
  recovered_100078f0(&uStack_94);
  if (((int)param_2 < 0) || (uVar2 <= param_2)) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_1001863c);
    local_90 = 1;
    recovered_10018320((int *)param_1,param_3,aiStack_a0);
  }
  else {
    pcVar3 = (char *)(*(int *)(param_1 + 0xc) + param_2 * 0x18);
    if (*pcVar3 == '\x04') {
      if (*(int *)(pcVar3 + 0x14) == 4) {
        recovered_10007908(&uStack_94);
        return pcVar3 + 8;
      }
    }
    else {
      local_90 = 0xffffffff;
      recovered_1000cfe0(aiStack_ac,DAT_10018640);
      local_90 = 2;
      recovered_10018320((int *)param_1,param_3,aiStack_ac);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x14294U));
  (*pcVar1)();
}

#undef DAT_10018630
#undef DAT_10018634
#undef DAT_10018638
#undef DAT_1001863c
#undef DAT_10018640
#undef aiStack_a0
#undef uStack_94
#undef auStack_b0
#undef aiStack_ac
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001876c
#define DAT_1001876c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1441cU)))
#undef DAT_10018770
#define DAT_10018770 (*(int *)(((uintptr_t)pf_module_state + 0x14420U)))
#undef DAT_10018774
#define DAT_10018774 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14424U)))
#undef DAT_10018778
#define DAT_10018778 (*(int *)(((uintptr_t)pf_module_state + 0x14428U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define aiStack_a0 (*(int (*)[3])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142f4U)
 */

void recovered_10018644(undefined1 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)aiStack_a0;
  local_7c = *DAT_10018774;
  local_78 = DAT_1001876c;
  local_70 = DAT_10018770 + ((uintptr_t)pf_module_state+0x1434cU);
  iVar2 = param_2[1];
  recovered_100078f0(&uStack_94);
  if (iVar2 == 0) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_10018778);
    local_90 = 1;
    recovered_10018320(param_3,param_4,aiStack_a0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x143e8U));
    (*pcVar1)();
  }
  local_90 = 0xffffffff;
  recovered_1000eb54(param_1,(undefined1 *)(*param_2 + iVar2 * 0x18 + -0x18));
  recovered_1001a94c(param_2);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001876c
#undef DAT_10018770
#undef DAT_10018774
#undef DAT_10018778
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef aiStack_a0
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1442cU)
 */

undefined1 * recovered_1001877c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_1001a980((int)(param_1 + 8),(int)(param_2 + 8));
  return param_1;
}


#undef DAT_10018a9c
#define DAT_10018a9c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1474cU)))
#undef DAT_10018aa0
#define DAT_10018aa0 (*(int *)(((uintptr_t)pf_module_state + 0x14750U)))
#undef DAT_10018aa4
#define DAT_10018aa4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14754U)))
#undef DAT_10018aa8
#define DAT_10018aa8 (*(int *)(((uintptr_t)pf_module_state + 0x14758U)))
#define auStack_c0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_bc (*(undefined1 * *)(frame + 20))
#define local_b8 (*(void * (*)[3])(frame + 24))
#define local_ac (*(void * (*)[3])(frame + 36))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(int *)(frame + 52))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1444cU)
 */

void recovered_1001879c(undefined1 *param_1,byte *param_2,byte *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;
  int iVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10018aa4;
  local_78 = DAT_10018a9c;
  local_70 = DAT_10018aa0 + ((uintptr_t)pf_module_state+0x144a4U);
  uVar6 = (uint)*param_2;
  uVar2 = recovered_100078f0(&uStack_94);
  if (uVar6 != 4) {
    uVar2 = (uint)*param_3;
  }
  if (uVar6 != 4 && uVar2 != 4) {
    if (uVar6 == 5 && uVar2 == 5) {
      local_90 = 0xffffffff;
      local_bc = param_1;
      piVar3 = (int *)recovered_10009844((char *)param_2);
      local_90 = 0xffffffff;
      recovered_10014b3c((int *)&local_a0,piVar3);
      local_90 = 3;
      piVar3 = (int *)recovered_10009844((char *)param_3);
      local_90 = 4;
      recovered_1001ab10((int *)&local_a0,(int)((int)local_a0 + local_9c * 0x18),*piVar3,
                         *piVar3 + piVar3[1] * 0x18);
      local_90 = 5;
      recovered_1000850c(local_bc,&local_a0,extraout_r2,extraout_r3);
      recovered_1001d318((int *)&local_a0);
    }
    else {
      bVar7 = 1 < uVar6 - 1;
      if (uVar6 - 1 < 3) {
        bVar7 = 2 < uVar2 - 1;
      }
      if (bVar7) {
        local_90 = 0xffffffff;
        recovered_1000cfe0((int *)&local_a0,DAT_10018aa8);
        local_90 = 6;
        recovered_10018320(param_4,param_5,(int *)&local_a0);
LAB_100189a4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x14654U));
        (*pcVar1)();
      }
      if (uVar6 == 1 && uVar2 == 1) {
        iVar4 = *(int *)(param_2 + 0x14);
        bVar7 = iVar4 == 1;
        if (bVar7) {
          iVar4 = *(int *)(param_3 + 0x14);
        }
        if (!bVar7 || iVar4 != 1) goto LAB_100189a4;
        uVar6 = *(uint *)(param_3 + 8);
        *(undefined4 *)(param_1 + 0x14) = 1;
        *param_1 = 1;
        uVar2 = *(uint *)(param_2 + 8);
        iVar4 = *(int *)(param_2 + 0xc);
        iVar5 = *(int *)(param_3 + 0xc);
        *(uint *)(param_1 + 8) = uVar6 + uVar2;
        *(uint *)(param_1 + 0xc) = iVar5 + iVar4 + (uint)CARRY4(uVar6,uVar2);
      }
      else {
        local_90 = 0xffffffff;
        dVar8 = recovered_10009334(param_2);
        local_90 = 0xffffffff;
        dVar9 = recovered_10009334(param_3);
        *(undefined4 *)(param_1 + 0x14) = 2;
        *param_1 = 2;
        *(double *)(param_1 + 8) =
             pf_bits_double(((pf_double_bits(dVar8) & 0xffffffff00000000) + (pf_double_bits(dVar8) & 0xffffffff))) +
             pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)));
      }
    }
  }
  else {
    local_90 = 0xffffffff;
    local_bc = param_1;
    recovered_100089a4((int *)local_ac,param_2);
    local_90 = 1;
    recovered_100089a4((int *)local_b8,param_3);
    local_90 = 2;
    recovered_1001aa28((int *)&local_a0,(int *)local_ac,(int *)local_b8);
    recovered_10008394(local_bc,&local_a0);
    recovered_10007424(local_a0);
    recovered_10007424(local_b8[0]);
    recovered_10007424(local_ac[0]);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10018a9c
#undef DAT_10018aa0
#undef DAT_10018aa4
#undef DAT_10018aa8
#undef auStack_c0
#undef uStack_94
#undef local_bc
#undef local_b8
#undef local_ac
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10018c54
#define DAT_10018c54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14904U)))
#undef DAT_10018c58
#define DAT_10018c58 (*(int *)(((uintptr_t)pf_module_state + 0x14908U)))
#undef DAT_10018c5c
#define DAT_10018c5c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1490cU)))
#undef DAT_10018c60
#define DAT_10018c60 (*(int *)(((uintptr_t)pf_module_state + 0x14910U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define aiStack_a0 (*(int (*)[3])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1475cU)
 */

void recovered_10018aac(undefined1 *param_1,byte *param_2,byte *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)aiStack_a0;
  local_7c = *DAT_10018c5c;
  local_78 = DAT_10018c54;
  local_70 = DAT_10018c58 + ((uintptr_t)pf_module_state+0x147b4U);
  bVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  uVar3 = bVar2 - 1;
  bVar7 = 1 < uVar3;
  if (uVar3 < 3) {
    uVar3 = (uint)*param_3;
    bVar7 = 2 < uVar3 - 1;
  }
  if (bVar7) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_10018c60);
    local_90 = 1;
    recovered_10018320(param_4,param_5,aiStack_a0);
LAB_10018bac:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1485cU));
    (*pcVar1)();
  }
  if (bVar2 == 1 && uVar3 == 1) {
    iVar4 = *(int *)(param_2 + 0x14);
    bVar7 = iVar4 == 1;
    if (bVar7) {
      iVar4 = *(int *)(param_3 + 0x14);
    }
    if (!bVar7 || iVar4 != 1) goto LAB_10018bac;
    uVar5 = *(uint *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x14) = 1;
    *param_1 = 1;
    uVar3 = *(uint *)(param_3 + 8);
    iVar4 = *(int *)(param_3 + 0xc);
    iVar6 = *(int *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar5 - uVar3;
    *(uint *)(param_1 + 0xc) = iVar6 - (iVar4 + (uint)(uVar5 < uVar3));
  }
  else {
    local_90 = 0xffffffff;
    dVar8 = recovered_10009334(param_2);
    local_90 = 0xffffffff;
    dVar9 = recovered_10009334(param_3);
    *(undefined4 *)(param_1 + 0x14) = 2;
    *param_1 = 2;
    *(double *)(param_1 + 8) =
         pf_bits_double(((pf_double_bits(dVar8) & 0xffffffff00000000) + (pf_double_bits(dVar8) & 0xffffffff))) -
         pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)));
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10018c54
#undef DAT_10018c58
#undef DAT_10018c5c
#undef DAT_10018c60
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef aiStack_a0
#undef uStack_94
#undef auStack_68

#undef DAT_10018e10
#define DAT_10018e10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14ac0U)))
#undef DAT_10018e14
#define DAT_10018e14 (*(int *)(((uintptr_t)pf_module_state + 0x14ac4U)))
#undef DAT_10018e18
#define DAT_10018e18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14ac8U)))
#undef DAT_10018e1c
#define DAT_10018e1c (*(int *)(((uintptr_t)pf_module_state + 0x14accU)))
#define aiStack_a0 (*(int (*)[3])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14914U)
 */

void recovered_10018c64(undefined1 *param_1,byte *param_2,byte *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  double dVar10;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)aiStack_a0;
  local_7c = *DAT_10018e18;
  local_78 = DAT_10018e10;
  local_70 = DAT_10018e14 + ((uintptr_t)pf_module_state+0x1496cU);
  bVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  uVar4 = bVar2 - 1;
  bVar8 = 1 < uVar4;
  if (uVar4 < 3) {
    uVar4 = (uint)*param_3;
    bVar8 = 2 < uVar4 - 1;
  }
  if (bVar8) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_10018e1c);
    local_90 = 1;
    recovered_10018320(param_4,param_5,aiStack_a0);
LAB_10018d64:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x14a14U));
    (*pcVar1)();
  }
  if (bVar2 == 1 && uVar4 == 1) {
    iVar5 = *(int *)(param_2 + 0x14);
    bVar8 = iVar5 == 1;
    if (bVar8) {
      iVar5 = *(int *)(param_3 + 0x14);
    }
    if (!bVar8 || iVar5 != 1) goto LAB_10018d64;
    uVar6 = *(uint *)(param_3 + 8);
    *(undefined4 *)(param_1 + 0x14) = 1;
    *param_1 = 1;
    uVar4 = *(uint *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    iVar7 = *(int *)(param_3 + 0xc);
    lVar3 = (ulonglong)uVar4 * (ulonglong)uVar6;
    *(int *)(param_1 + 8) = (int)lVar3;
    *(uint *)(param_1 + 0xc) = iVar7 * uVar4 + uVar6 * iVar5 + (int)((ulonglong)lVar3 >> 0x20);
  }
  else {
    local_90 = 0xffffffff;
    dVar9 = recovered_10009334(param_2);
    local_90 = 0xffffffff;
    dVar10 = recovered_10009334(param_3);
    *(undefined4 *)(param_1 + 0x14) = 2;
    *param_1 = 2;
    *(double *)(param_1 + 8) =
         pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff))) *
         pf_bits_double(((pf_double_bits(dVar10) & 0xffffffff00000000) + (pf_double_bits(dVar10) & 0xffffffff)));
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10018e10
#undef DAT_10018e14
#undef DAT_10018e18
#undef DAT_10018e1c
#undef aiStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10018fe8
#define DAT_10018fe8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14c98U)))
#undef DAT_10018fec
#define DAT_10018fec (*(double *)(((uintptr_t)pf_module_state + 0x14c9cU)))
#undef DAT_10018ff4
#define DAT_10018ff4 (*(int *)(((uintptr_t)pf_module_state + 0x14ca4U)))
#undef DAT_10018ff8
#define DAT_10018ff8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14ca8U)))
#undef DAT_10018ffc
#define DAT_10018ffc (*(int *)(((uintptr_t)pf_module_state + 0x14cacU)))
#undef DAT_10019000
#define DAT_10019000 (*(int *)(((uintptr_t)pf_module_state + 0x14cb0U)))
#define aiStack_a0 (*(int (*)[3])(frame + 32))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_70 (*(int *)(frame + 80))
#define aiStack_ac (*(int (*)[3])(frame + 20))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14ad0U)
 */

void recovered_10018e20(undefined1 *param_1,byte *param_2,byte *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  byte bVar2;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  bool bVar3;
  double value;
  double dVar4;
  double dVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10018ff8;
  local_78 = DAT_10018fe8;
  local_70 = DAT_10018ff4 + ((uintptr_t)pf_module_state+0x14b28U);
  bVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  bVar3 = 1 < bVar2 - 1;
  if (bVar2 - 1 < 3) {
    bVar3 = 2 < *param_3 - 1;
  }
  if (bVar3) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_10018ffc);
    local_90 = 1;
    recovered_10018320(param_4,param_5,aiStack_a0);
  }
  else {
    local_90 = 0xffffffff;
    recovered_10009334(param_3);
    local_90 = 0xffffffff;
    recovered_100056c8(value);
    if (DAT_10018fec < pf_bits_double(CONCAT44(extraout_r1,extraout_r0))) {
      local_90 = 0xffffffff;
      dVar4 = recovered_10009334(param_2);
      local_90 = 0xffffffff;
      dVar5 = recovered_10009334(param_3);
      *(undefined4 *)(param_1 + 0x14) = 2;
      *param_1 = 2;
      *(double *)(param_1 + 8) =
           pf_bits_double(((pf_double_bits(dVar4) & 0xffffffff00000000) + (pf_double_bits(dVar4) & 0xffffffff))) /
           pf_bits_double(((pf_double_bits(dVar5) & 0xffffffff00000000) + (pf_double_bits(dVar5) & 0xffffffff)));
      recovered_10007908(&uStack_94);
      return;
    }
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_ac,DAT_10019000);
    local_90 = 2;
    recovered_10018320(param_4,param_5,aiStack_ac);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x14c4cU));
  (*pcVar1)();
}

#undef DAT_10018fe8
#undef DAT_10018fec
#undef DAT_10018ff4
#undef DAT_10018ff8
#undef DAT_10018ffc
#undef DAT_10019000
#undef aiStack_a0
#undef local_78
#undef local_74
#undef uStack_94
#undef auStack_b0
#undef local_70
#undef aiStack_ac
#undef local_6c
#undef auStack_68
#undef local_90
#undef local_7c

#undef DAT_1001922c
#define DAT_1001922c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14edcU)))
#undef DAT_10019230
#define DAT_10019230 (*(double *)(((uintptr_t)pf_module_state + 0x14ee0U)))
#undef DAT_10019238
#define DAT_10019238 (*(int *)(((uintptr_t)pf_module_state + 0x14ee8U)))
#undef DAT_1001923c
#define DAT_1001923c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x14eecU)))
#undef DAT_10019240
#define DAT_10019240 (*(int *)(((uintptr_t)pf_module_state + 0x14ef0U)))
#undef DAT_10019244
#define DAT_10019244 (*(int *)(((uintptr_t)pf_module_state + 0x14ef4U)))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define aiStack_ac (*(int (*)[3])(frame + 20))
#define aiStack_a0 (*(int (*)[3])(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14cb4U)
 */

void recovered_10019004(undefined1 *param_1,byte *param_2,byte *param_3,int *param_4,
                       undefined4 param_5)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  byte bVar2;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  int iVar3;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  uint uVar4;
  bool bVar5;
  double value;
  double left;
  double right;
  undefined8 uVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_1001923c;
  local_78 = DAT_1001922c;
  local_70 = DAT_10019238 + ((uintptr_t)pf_module_state+0x14d0cU);
  bVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  bVar5 = 1 < bVar2 - 1;
  if (bVar2 - 1 < 3) {
    bVar5 = 2 < *param_3 - 1;
  }
  if (bVar5) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_10019240);
    local_90 = 1;
    recovered_10018320(param_4,param_5,aiStack_a0);
  }
  else {
    local_90 = 0xffffffff;
    recovered_10009334(param_3);
    local_90 = 0xffffffff;
    recovered_100056c8(value);
    if (DAT_10019230 < pf_bits_double(CONCAT44(extraout_r1,extraout_r0))) {
      bVar2 = *param_2;
      bVar5 = bVar2 == 1;
      if (bVar5) {
        bVar2 = *param_3;
      }
      if (bVar5 && bVar2 == 1) {
        iVar3 = *(int *)(param_2 + 0x14);
        bVar5 = iVar3 == 1;
        if (bVar5) {
          iVar3 = *(int *)(param_3 + 0x14);
        }
        if (!bVar5 || iVar3 != 1) goto LAB_1001914c;
        uVar4 = *(uint *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x14) = 1;
        *param_1 = 1;
        uVar6 = recovered_10004d7c(*(uint *)(param_2 + 8),uVar4,*(uint *)(param_3 + 8),
                                   *(uint *)(param_3 + 0xc));
      }
      else {
        local_90 = 0xffffffff;
        recovered_10009334(param_2);
        local_90 = 0xffffffff;
        recovered_10009334(param_3);
        local_90 = 0xffffffff;
        recovered_10005348(left,right);
        uVar6 = CONCAT44(extraout_r1_00,extraout_r0_00);
        *(undefined4 *)(param_1 + 0x14) = 2;
        *param_1 = 2;
      }
      *(undefined8 *)(param_1 + 8) = uVar6;
      recovered_10007908(&uStack_94);
      return;
    }
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_ac,DAT_10019244);
    local_90 = 2;
    recovered_10018320(param_4,param_5,aiStack_ac);
  }
LAB_1001914c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x14dfcU));
  (*pcVar1)();
}

#undef DAT_1001922c
#undef DAT_10019230
#undef DAT_10019238
#undef DAT_1001923c
#undef DAT_10019240
#undef DAT_10019244
#undef auStack_b0
#undef uStack_94
#undef aiStack_ac
#undef aiStack_a0
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_100193b4
#define DAT_100193b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15064U)))
#undef DAT_100193b8
#define DAT_100193b8 (*(int *)(((uintptr_t)pf_module_state + 0x15068U)))
#undef DAT_100193bc
#define DAT_100193bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1506cU)))
#undef DAT_100193c0
#define DAT_100193c0 (*(int *)(((uintptr_t)pf_module_state + 0x15070U)))
#define aiStack_a0 (*(int (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14ef8U)
 */

void recovered_10019248(undefined1 *param_1,byte *param_2,int *param_3,undefined4 param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  double dVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)aiStack_a0;
  local_7c = *DAT_100193bc;
  local_78 = DAT_100193b4;
  local_70 = DAT_100193b8 + ((uintptr_t)pf_module_state+0x14f50U);
  bVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  if (2 < bVar2 - 1) {
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_100193c0);
    local_90 = 1;
    recovered_10018320(param_3,param_4,aiStack_a0);
LAB_10019380:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x15030U));
    (*pcVar1)();
  }
  if (bVar2 == 1) {
    if (*(int *)(param_2 + 0x14) != 1) goto LAB_10019380;
    iVar4 = *(int *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x14) = 1;
    *param_1 = 1;
    iVar3 = *(int *)(param_2 + 8);
    *(int *)(param_1 + 8) = -iVar3;
    *(uint *)(param_1 + 0xc) = -(iVar4 + (uint)(iVar3 != 0));
  }
  else {
    local_90 = 0xffffffff;
    dVar5 = recovered_10009334(param_2);
    *(undefined4 *)(param_1 + 0x14) = 2;
    *param_1 = 2;
    *(ulonglong *)(param_1 + 8) =
         ((ulonglong)((uint)(pf_double_bits(dVar5) >> 0x20) ^ 0x80000000) << 0x20) +
         (pf_double_bits(dVar5) & 0xffffffff);
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100193b4
#undef DAT_100193b8
#undef DAT_100193bc
#undef DAT_100193c0
#undef aiStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1001966c
#define DAT_1001966c (*(double *)(((uintptr_t)pf_module_state + 0x1531cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15074U)
 */

uint recovered_100193c4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  undefined4 extraout_r0 = 0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1 = 0;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  double value;

  uVar4 = (uint)*param_1;
  if (uVar4 != *param_2) {
    uVar4 = uVar4 - 1;
    if (uVar4 < 3) {
      uVar4 = *param_2 - 1;
    }
    if (uVar4 < 3) {
      recovered_10009334(param_1);
      recovered_10009334(param_2);
      recovered_100056c8(value);
      return (uint)(pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) <= DAT_1001966c);
    }
    return 0;
  }
  uVar6 = 1;
  switch((uintptr_t)(uVar4)) {
  case 0:
    break;
  case 1:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 != 1;
    if (!bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 || iVar5 != 1) goto LAB_100195d4;
    uVar4 = *(uint *)(param_1 + 8) ^ *(uint *)(param_2 + 8) |
            *(uint *)(param_1 + 0xc) ^ *(uint *)(param_2 + 0xc);
    goto LAB_1001953c;
  case 2:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 != 2;
    if (!bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 || iVar5 != 2) goto LAB_100195d4;
    uVar6 = (uint)(*(double *)(param_1 + 8) == *(double *)(param_2 + 8));
    break;
  case 3:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 != 3;
    if (!bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 || iVar5 != 3) goto LAB_100195d4;
    uVar6 = (uint)param_2[8];
    uVar4 = (uint)param_1[8];
    goto LAB_10019538;
  case 4:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 == 4;
    if (bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 && iVar5 == 4) {
      uVar4 = recovered_1000e644((int *)(param_1 + 8),(int *)(param_2 + 8));
      return uVar4;
    }
LAB_100195d4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x15284U));
    (*pcVar1)();
  case 5:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 != 5;
    if (!bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 || iVar5 != 5) goto LAB_100195d4;
    piVar7 = *(int **)(param_1 + 0xc);
    uVar6 = 0;
    piVar8 = *(int **)(param_2 + 0xc);
    if (piVar7[1] == piVar8[1]) {
      uVar4 = 0xffffffff;
      iVar5 = 0;
      do {
        uVar4 = uVar4 + 1;
        if ((uint)piVar7[1] <= uVar4) {
          return 1;
        }
        uVar2 = recovered_100193c4((byte *)(*piVar7 + iVar5),(byte *)(*piVar8 + iVar5));
        uVar6 = 0;
        iVar5 = iVar5 + 0x18;
      } while (uVar2 != 0);
    }
    break;
  case 6:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 == 6;
    if (bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (!bVar9 || iVar5 != 6) goto LAB_100195d4;
    uVar6 = 0;
    piVar8 = *(int **)(param_2 + 0xc);
    iVar5 = (*(undefined4 **)(param_1 + 0xc))[1];
    if (iVar5 == piVar8[1]) {
      piVar7 = (int *)**(undefined4 **)(param_1 + 0xc);
      iVar5 = iVar5 * 0x28;
      do {
        uVar6 = (uint)(iVar5 == 0);
        if (iVar5 == 0) {
          return 1;
        }
        iVar3 = recovered_1001ac58(piVar8,piVar7);
        if (iVar3 == *piVar8 + piVar8[1] * 0x28) {
          return uVar6;
        }
        uVar4 = recovered_100193c4((byte *)(piVar7 + 4),(byte *)(iVar3 + 0x10));
        iVar5 = iVar5 + -0x28;
        piVar7 = piVar7 + 10;
      } while (uVar4 != 0);
    }
    break;
  case 7:
    iVar5 = *(int *)(param_1 + 0x14);
    bVar9 = iVar5 != 7;
    if (!bVar9) {
      iVar5 = *(int *)(param_2 + 0x14);
    }
    if (bVar9 || iVar5 != 7) goto LAB_100195d4;
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar4 = *(uint *)(param_1 + 0xc);
LAB_10019538:
    uVar4 = uVar4 - uVar6;
LAB_1001953c:
    uVar6 = (uint)(uVar4 == 0);
    break;
  default:
    uVar6 = 0;
  }
  return uVar6;
}

#undef DAT_1001966c

#undef DAT_100198d0
#define DAT_100198d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15580U)))
#undef DAT_100198d4
#define DAT_100198d4 (*(int *)(((uintptr_t)pf_module_state + 0x15584U)))
#undef DAT_100198d8
#define DAT_100198d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x15588U)))
#undef DAT_100198dc
#define DAT_100198dc (*(int *)(((uintptr_t)pf_module_state + 0x1558cU)))
#define aiStack_a0 (*(int (*)[3])(frame + 32))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(undefined1 * *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15324U)
 */

void recovered_10019674(undefined1 *param_1,byte *param_2,byte *param_3,int param_4,int *param_5,
                       undefined4 param_6)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *in_r1;
  byte *in_r0;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_100198d8;
  local_78 = DAT_100198d0;
  local_70 = DAT_100198d4 + ((uintptr_t)pf_module_state+0x1537cU);
  uVar5 = (uint)*param_3;
  uVar6 = (uint)*param_2;
  recovered_100078f0(&uStack_94);
  if (uVar6 - 1 < 3) {
    if (uVar5 - 1 < 3) {
      local_90 = 0xffffffff;
      local_a4 = param_1;
      dVar8 = recovered_10009334(param_2);
      local_90 = 0xffffffff;
      dVar9 = recovered_10009334(param_3);
      param_1 = local_a4;
      if (param_4 - 0xdU < 4) {
        dVar9 = pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)));
        dVar8 = pf_bits_double(((pf_double_bits(dVar8) & 0xffffffff00000000) + (pf_double_bits(dVar8) & 0xffffffff)));
        switch((uintptr_t)(param_4)) {
        case 0xd:
          uVar2 = dVar8 < dVar9;
          break;
        case 0xe:
          uVar2 = false;
          if (dVar8 <= dVar9) {
            uVar2 = true;
          }
          break;
        case 0xf:
          uVar2 = dVar9 < dVar8;
          break;
        case 0x10:
          uVar2 = dVar9 <= dVar8;
        }
        goto LAB_1001979c;
      }
      uVar5 = (uint)*param_3;
      uVar6 = (uint)*param_2;
      goto LAB_100197d8;
    }
LAB_100197e4:
    local_90 = 0xffffffff;
    recovered_1000cfe0(aiStack_a0,DAT_100198dc);
    local_90 = 1;
    recovered_10018320(param_5,param_6,aiStack_a0);
LAB_1001989c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1554cU));
    (*pcVar1)();
  }
LAB_100197d8:
  if (uVar6 != 4 || uVar5 != 4) goto LAB_100197e4;
  iVar3 = *(int *)(param_2 + 0x14);
  bVar7 = iVar3 != 4;
  if (!bVar7) {
    iVar3 = *(int *)(param_3 + 0x14);
  }
  if (bVar7 || iVar3 != 4) goto LAB_1001989c;
  if (3 < param_4 - 0xdU) goto LAB_100197e4;
  in_r0 = param_2 + 8;
  in_r1 = param_3 + 8;
  switch((uintptr_t)(param_4)) {
  case 0xd:
    pbVar4 = in_r0;
    break;
  case 0xe:
    uVar5 = recovered_1001acac((int *)in_r0,(int *)in_r1);
    uVar2 = (undefined1)uVar5;
    goto LAB_1001979c;
  case 0xf:
    pbVar4 = in_r1;
    in_r1 = in_r0;
    break;
  case 0x10:
    uVar5 = recovered_1001accc((int *)in_r0,(int *)in_r1);
    uVar2 = (undefined1)uVar5;
    goto LAB_1001979c;
  }
  uVar5 = recovered_1001ac80((int *)pbVar4,(int *)in_r1);
  uVar2 = (undefined1)uVar5;
LAB_1001979c:
  param_1[8] = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *param_1 = 3;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100198d0
#undef DAT_100198d4
#undef DAT_100198d8
#undef DAT_100198dc
#undef aiStack_a0
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001a53c
#define DAT_1001a53c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x161ecU)))
#undef DAT_1001a540
#define DAT_1001a540 (*(int *)(((uintptr_t)pf_module_state + 0x161f0U)))
#undef DAT_1001a544
#define DAT_1001a544 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x161f4U)))
#undef DAT_1001a548
#define DAT_1001a548 (*(int *)(((uintptr_t)pf_module_state + 0x161f8U)))
#undef DAT_1001a54c
#define DAT_1001a54c (*(int *)(((uintptr_t)pf_module_state + 0x161fcU)))
#undef DAT_1001a550
#define DAT_1001a550 (*(int *)(((uintptr_t)pf_module_state + 0x16200U)))
#undef DAT_1001a554
#define DAT_1001a554 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16204U)))
#undef DAT_1001a558
#define DAT_1001a558 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16208U)))
#undef DAT_1001a55c
#define DAT_1001a55c (*(int *)(((uintptr_t)pf_module_state + 0x1620cU)))
#undef DAT_1001a560
#define DAT_1001a560 (*(int *)(((uintptr_t)pf_module_state + 0x16210U)))
#undef DAT_1001a564
#define DAT_1001a564 (*(int *)(((uintptr_t)pf_module_state + 0x16214U)))
#undef DAT_1001a568
#define DAT_1001a568 (*(int *)(((uintptr_t)pf_module_state + 0x16218U)))
#undef DAT_1001a56c
#define DAT_1001a56c (*(int *)(((uintptr_t)pf_module_state + 0x1621cU)))
#undef DAT_1001a570
#define DAT_1001a570 (*(int *)(((uintptr_t)pf_module_state + 0x16220U)))
#undef DAT_1001a574
#define DAT_1001a574 (*(int *)(((uintptr_t)pf_module_state + 0x16224U)))
#undef DAT_1001a578
#define DAT_1001a578 (*(int *)(((uintptr_t)pf_module_state + 0x16228U)))
#undef DAT_1001a57c
#define DAT_1001a57c (*(int *)(((uintptr_t)pf_module_state + 0x1622cU)))
#undef DAT_1001a580
#define DAT_1001a580 (*(int *)(((uintptr_t)pf_module_state + 0x16230U)))
#undef DAT_1001a584
#define DAT_1001a584 (*(uint * *)(((uintptr_t)pf_module_state + 0x16234U)))
#undef DAT_1001a588
#define DAT_1001a588 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16238U)))
#undef DAT_1001a58c
#define DAT_1001a58c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1623cU)))
#undef DAT_1001a590
#define DAT_1001a590 (*(int *)(((uintptr_t)pf_module_state + 0x16240U)))
#undef DAT_1001a594
#define DAT_1001a594 (*(int *)(((uintptr_t)pf_module_state + 0x16244U)))
#define local_90 (*(undefined4 *)(frame + 320))
#define local_8c (*(undefined4 * *)(frame + 324))
#define auStack_68 (*(undefined1 (*)[8])(frame + 360))
#define local_88 (*(int *)(frame + 328))
#define local_7c (*(undefined4 *)(frame + 340))
#define local_78 (*(undefined4 *)(frame + 344))
#define local_74 (*(undefined1 * *)(frame + 348))
#define local_70 (*(int *)(frame + 352))
#define local_6c (*(undefined1 * *)(frame + 356))
#define auStackY_1c0 (*(undefined1 (*)[128])(frame + 16))
#define aiStack_100 (*(int (*)[3])(frame + 208))
#define local_11c (*(undefined4 *)(frame + 180))
#define local_115 (*(undefined1 *)(frame + 187))
#define local_114 (*(void * *)(frame + 188))
#define local_110 (*(int *)(frame + 192))
#define local_10c (*(undefined4 *)(frame + 196))
#define local_108 (*(undefined1 (*)[8])(frame + 200))
#define local_f4 (*(undefined4 *)(frame + 220))
#define local_f0 (*(void * *)(frame + 224))
#define local_ec (*(undefined4 *)(frame + 228))
#define local_e8 (*(undefined4 *)(frame + 232))
#define local_e4 (*(void * (*)[3])(frame + 236))
#define local_d8 (*(void * *)(frame + 248))
#define local_d4 (*(undefined4 *)(frame + 252))
#define uStack_94 (*(undefined4 *)(frame + 316))
#define local_d0 (*(int (*)[4])(frame + 256))
#define local_c0 (*(void * (*)[3])(frame + 272))
#define local_b4 (*(undefined1 * *)(frame + 284))
#define local_b0 (*(int * *)(frame + 288))
#define local_a8 (*(int * *)(frame + 296))
#define local_a4 (*(int * *)(frame + 300))
#define local_a0 (*(int * *)(frame + 304))
#define local_9c (*(int * *)(frame + 308))
#define local_95 (*(char *)(frame + 315))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15590U)
 */

void recovered_100198e0(undefined1 *param_1,int param_2,int param_3,char *param_4,char *param_5,
                       uint param_6,undefined4 param_7)

{
  unsigned char frame[496] = {0};

  code *pcVar1;
  char cVar2;
  uint *puVar3;
  byte bVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 *puVar8;
  void **ppvVar9;
  uint uVar10;
  uint uVar11;
  int extraout_r2 = 0;
  int extraout_r2_00 = 0;
  int extraout_r2_01 = 0;
  undefined4 in_r2;
  int extraout_r2_02 = 0;
  int in_r3;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 uVar12;
  undefined4 in_r3_00;
  undefined4 extraout_r3_02 = 0;
  byte *pbVar13;
  int iVar14;
  bool bVar15;
  ulonglong uVar16;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1c0 + 0x80;
  local_7c = *DAT_1001a544;
  local_78 = DAT_1001a53c;
  local_70 = DAT_1001a540 + ((uintptr_t)pf_module_state+0x155e8U);
  cVar2 = *param_4;
  local_b4 = param_1;
  recovered_100078f0(&uStack_94);
  puVar3 = DAT_1001a584;
  if (cVar2 != '\a') {
    local_90 = 0xffffffff;
    piVar6 = *(int **)(param_3 + 4);
    recovered_1000cfe0((int *)&local_d8,DAT_1001a548);
    local_90 = 1;
    recovered_10018320(piVar6,param_7,(int *)&local_d8);
    goto switchD_1001a2a4_default;
  }
  if (*(int *)(param_4 + 0x14) != 7) goto switchD_1001a2a4_default;
  pcVar5 = *(char **)(param_4 + 0xc);
  if (pcVar5 == (char *)0x0) {
    local_90 = 0xffffffff;
    piVar6 = *(int **)(param_3 + 4);
    recovered_1000cfe0((int *)local_e4,DAT_1001a54c);
    local_90 = 2;
    recovered_10018320(piVar6,param_7,(int *)local_e4);
    goto switchD_1001a2a4_default;
  }
  if (*pcVar5 != '\x01') {
    iVar14 = *(int *)(pcVar5 + 0xc);
    if (iVar14 == 0) {
      local_90 = 0xffffffff;
      piVar6 = *(int **)(param_3 + 4);
      recovered_1000cfe0((int *)&local_d8,DAT_1001a590);
      local_90 = 0x29;
      recovered_10018320(piVar6,param_7,(int *)&local_d8);
      goto switchD_1001a2a4_default;
    }
    uVar10 = *(uint *)(pcVar5 + 4);
    if (((int)uVar10 < 0) || (*(uint *)(iVar14 + 0x1c) <= uVar10)) {
      local_90 = 0xffffffff;
      piVar6 = *(int **)(param_3 + 4);
      recovered_1000cfe0((int *)&local_d8,DAT_1001a594);
      local_90 = 0x2a;
      recovered_10018320(piVar6,param_7,(int *)&local_d8);
      goto switchD_1001a2a4_default;
    }
    iVar14 = uVar10 * 0x94 + *(int *)(iVar14 + 0x18);
    if (*(char *)(iVar14 + 0x70) == '\0') {
      local_90 = 0xffffffff;
      recovered_10015ac4(local_b4,param_2,(int *)(pcVar5 + 8),uVar10,(int)param_5,param_6);
    }
    else {
      local_90 = 0xffffffff;
      recovered_1001b110(local_b4,param_2,(int)(pcVar5 + 8),iVar14,(int)param_5,param_6);
    }
    goto LAB_10019e94;
  }
  cVar2 = pcVar5[1];
  if (cVar2 == '\x02') {
    local_90 = 0xffffffff;
    recovered_1001ad4c(DAT_1001a55c,param_6,1,0xffffffff);
    local_90 = 7;
    local_e8 = 0;
    local_ec = 0;
    local_f0 = (void *)0x0;
    recovered_1000eab8((int *)&local_f0,2);
    local_f4 = 0;
    local_108[0] = 0;
    local_10c = 0;
    local_110 = 0;
    local_114 = (void *)0x0;
    uVar10 = param_6 - 1;
    pcVar5 = (char *)0x0;
    if (uVar10 != 0) {
      pcVar5 = param_5 + 0x18;
    }
    if (*param_5 != '\a') {
      iVar14 = DAT_1001a560;
LAB_10019de4:
      local_90 = 8;
      recovered_1000fdc4((int *)&local_114,iVar14);
      goto LAB_10019df4;
    }
    if (*(int *)(param_5 + 0x14) != 7) goto switchD_1001a2a4_default;
    pcVar7 = *(char **)(param_5 + 0xc);
    if (pcVar7 == (char *)0x0) {
      iVar14 = DAT_1001a564;
      goto LAB_10019de4;
    }
    cVar2 = *pcVar7;
    bVar15 = cVar2 == '\x01';
    if (bVar15) {
      cVar2 = pcVar7[1];
    }
    if (bVar15 && cVar2 == '\x01') {
      local_90 = 9;
      recovered_1001ad4c(DAT_1001a550,uVar10,0,1);
      if (uVar10 == 0) {
        local_90 = 10;
        recovered_1000cfe0((int *)&local_d8,DAT_1001a550);
      }
      else {
        local_90 = 0xb;
        recovered_100089a4((int *)&local_d8,param_5 + 0x18);
      }
      recovered_1000fb14(&local_114,&local_d8);
LAB_10019f14:
      recovered_10007424(local_d8);
LAB_10019df4:
      if (local_110 == 0) {
        local_90 = 0x17;
        local_d8 = (void *)CONCAT31(PF_PART3(local_d8, 1),1);
        recovered_100180b4((int *)&local_f0,(undefined1 *)&local_d8);
        local_90 = 0x18;
        recovered_1001a9c0((int *)&local_f0,local_108);
        iVar14 = extraout_r2_01;
        uVar12 = extraout_r3_01;
      }
      else {
        local_90 = 0x19;
        local_d8 = (void *)((uint)PF_PART3(local_d8, 1) << 8);
        recovered_100180b4((int *)&local_f0,(undefined1 *)&local_d8);
        local_90 = 0x1a;
        recovered_10018114((int *)&local_f0,&local_114);
        iVar14 = extraout_r2_00;
        uVar12 = extraout_r3_00;
      }
    }
    else {
      iVar14 = *(int *)(pcVar7 + 0xc);
      if ((((iVar14 != 0) && (uVar11 = *(uint *)(pcVar7 + 4), -1 < (int)uVar11)) &&
          (uVar11 < *(uint *)(iVar14 + 0x1c))) &&
         (piVar6 = (int *)(uVar11 * 0x94 + *(int *)(iVar14 + 0x18)), (char)piVar6[0x1c] == '\x02'))
      {
        if (piVar6[4] != uVar10) {
          local_d0[0] = 0;
          local_d4 = 0;
          local_d8 = (void *)0x0;
          local_90 = 0xc;
          recovered_1000dd64((int *)&local_d8,DAT_1001a568);
          local_90 = 0xd;
          recovered_10008fbc((int *)&local_d8,piVar6);
          local_90 = 0xe;
          recovered_1000dd64((int *)&local_d8,DAT_1001a56c);
          local_90 = 0xf;
          piVar6 = (int *)recovered_100184a4((int *)&local_d8,piVar6[4]);
          local_90 = 0x10;
          recovered_1000dd64(piVar6,DAT_1001a570);
          local_90 = 0x11;
          recovered_100184a4(piVar6,uVar10);
          local_90 = 0x12;
          recovered_1000dc38(local_c0,(int *)&local_d8);
          recovered_1000fb14(&local_114,local_c0);
          recovered_10007424(local_c0[0]);
          goto LAB_10019f14;
        }
        local_90 = 0x13;
        recovered_1001b974((undefined1 *)&local_d8,param_2,(int)(pcVar7 + 8),(int)piVar6,
                           piVar6[0x21],(int)pcVar5,uVar10);
        bVar4 = recovered_10008964((char *)&local_d8);
        recovered_1000d37c(local_d0);
        if (bVar4 == 0) {
          local_90 = 0x15;
          recovered_1001b974((undefined1 *)&local_d8,param_2,*(int *)(param_5 + 0xc) + 8,(int)piVar6
                             ,piVar6[0x20],(int)pcVar5,uVar10);
          local_90 = 0x16;
          recovered_1001877c(local_108,(undefined1 *)&local_d8);
          recovered_1000d37c(local_d0);
        }
        else {
          local_90 = 0x14;
          recovered_1000e174((int *)&local_114,piVar6 + 0x22,in_r3);
        }
        goto LAB_10019df4;
      }
      local_90 = 0x1b;
      local_d8 = (void *)CONCAT31(PF_PART3(local_d8, 1),1);
      recovered_100180b4((int *)&local_f0,(undefined1 *)&local_d8);
      local_90 = 0x1c;
      recovered_100198e0((undefined1 *)&local_d8,param_2,param_3,param_5,pcVar5,uVar10,param_7);
      local_90 = 0x1d;
      recovered_1001a9c0((int *)&local_f0,(undefined1 *)&local_d8);
      recovered_1000d37c(local_d0);
      iVar14 = extraout_r2;
      uVar12 = extraout_r3;
    }
    goto LAB_10019e64;
  }
  if (cVar2 != '\x03') {
    if (cVar2 == '\x01') {
      local_90 = 0xffffffff;
      recovered_1001ad4c(DAT_1001a550,param_6,0,1);
      local_b0 = (int *)recovered_10007750(0x10);
      if (param_6 != 0) {
        local_90 = 4;
        recovered_100089a4((int *)&local_d8,param_5);
        local_95 = 1;
        local_90 = 5;
        recovered_1000fb68(local_b0,(int *)&local_d8);
        local_95 = '\0';
        local_90 = 6;
        recovered_10007810((int)local_b0,*DAT_1001a554,*DAT_1001a558);
        goto switchD_1001a2a4_default;
      }
      local_90 = 3;
      recovered_1000932c(local_b0,DAT_1001a550);
      piVar6 = local_b0;
      goto LAB_1001a270;
    }
    DataMemoryBarrier(0xb);
    if (((*DAT_1001a584 & 1) == 0) && (uVar10 = recovered_1000772c(DAT_1001a584), uVar10 != 0)) {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      recovered_10007724();
      recovered_1000773c(puVar3);
    }
    if (param_6 == 0) {
      local_90 = 0xffffffff;
      (**(code **)(**(int **)(*(int *)(param_4 + 0xc) + 0x10) + 8))
                (local_b4,*(int **)(*(int *)(param_4 + 0xc) + 0x10),*(undefined4 *)(param_2 + 0x68),
                 puVar3 + 1);
      goto LAB_10019e94;
    }
    local_d0[0] = 0;
    local_d4 = 0;
    local_d8 = (void *)0x0;
    local_90 = 0x26;
    recovered_1000eab8((int *)&local_d8,param_6);
    for (; param_6 != 0; param_6 = param_6 - 1) {
      local_90 = 0x28;
      recovered_100127c4((int *)&local_d8,param_5);
      param_5 = param_5 + 0x18;
    }
    local_90 = 0x27;
    (**(code **)(**(int **)(*(int *)(param_4 + 0xc) + 0x10) + 8))
              (local_b4,*(int **)(*(int *)(param_4 + 0xc) + 0x10),*(undefined4 *)(param_2 + 0x68),
               &local_d8);
    ppvVar9 = &local_d8;
    goto LAB_10019e90;
  }
  local_90 = 0xffffffff;
  recovered_1001ad4c(DAT_1001a574,param_6,3,3);
  pbVar13 = (byte *)(param_5 + 0x18);
  pcVar5 = param_5 + 0x30;
  if (*param_5 == '\x06') {
    local_90 = 0xffffffff;
    piVar6 = (int *)recovered_10009974(param_5);
    local_90 = 0xffffffff;
    puVar8 = (undefined1 *)recovered_1001afd8(piVar6,(char *)pbVar13);
    local_90 = 0xffffffff;
    recovered_1000e08c(puVar8,pcVar5);
LAB_10019d30:
    local_90 = 0xffffffff;
    recovered_1001282c(local_b4,pcVar5);
    goto LAB_10019e94;
  }
  if (*param_5 == '\x05') {
    if (*pbVar13 - 1 < 3) {
      local_90 = 0xffffffff;
      uVar16 = recovered_100091a8((char *)pbVar13);
      uVar10 = (uint)uVar16;
      if (-1 < (longlong)uVar16) {
        local_90 = 0xffffffff;
        piVar6 = (int *)recovered_10009714(param_5);
        if ((uint)piVar6[1] <= uVar10) {
          local_90 = 0xffffffff;
          recovered_1000ed00(piVar6,uVar10 + 1);
        }
        local_90 = 0xffffffff;
        recovered_1000e08c((undefined1 *)(*piVar6 + uVar10 * 0x18),pcVar5);
        goto LAB_10019d30;
      }
      local_a0 = (int *)recovered_10007750(0x10);
      local_90 = 0x24;
      recovered_1000932c(local_a0,DAT_1001a57c);
      piVar6 = local_a0;
    }
    else {
      local_a4 = (int *)recovered_10007750(0x10);
      local_90 = 0x23;
      recovered_1000932c(local_a4,DAT_1001a578);
      piVar6 = local_a4;
    }
  }
  else {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 0x25;
    recovered_1000932c(local_9c,DAT_1001a580);
    piVar6 = local_9c;
  }
LAB_1001a270:
  local_90 = 0xffffffff;
  recovered_10007810((int)piVar6,*DAT_1001a554,*DAT_1001a558);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    goto switchD_1001a2a4_caseD_0;
  case 1:
    local_d8 = local_e4[0];
    goto LAB_1001a4c0;
  case 2:
  case 3:
LAB_1001a4d4:
    piVar6 = local_b0;
    break;
  case 4:
  case 5:
    recovered_10007424(local_d8);
    if (local_95 != '\x01') goto LAB_1001a52c;
    goto LAB_1001a4d4;
  case 6:
    goto LAB_1001a510;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x19:
  case 0x20:
  case 0x1f:
switchD_1001a2a4_caseD_1f:
LAB_1001a4fc:
    recovered_10007424(local_114);
    recovered_1000d37c(aiStack_100);
LAB_1001a510:
    ppvVar9 = &local_f0;
LAB_1001a514:
    recovered_1001d318((int *)ppvVar9);
    goto LAB_1001a52c;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    recovered_10007424(local_d8);
    goto LAB_1001a4fc;
  case 0x15:
    recovered_1000d37c(local_d0);
    goto LAB_1001a4fc;
  case 0x16:
    goto switchD_1001a2a4_caseD_1f;
  case 0x18:
    goto switchD_1001a2a4_caseD_1f;
  case 0x1a:
  case 0x1b:
LAB_1001a374:
    if (local_88 == 1) {
      local_a8 = (int *)recovered_100073c8((int)local_8c);
      local_90 = 0x1e;
      local_115 = 0;
      recovered_100180b4((int *)&local_f0,&local_115);
      local_11c = (**(code **)(*local_a8 + 8))(local_a8);
      local_90 = 0x1f;
      recovered_1001af70((int *)&local_f0,&local_11c,in_r2,in_r3_00);
      local_90 = 0x20;
      recovered_100077b4();
      iVar14 = extraout_r2_02;
      uVar12 = extraout_r3_02;
LAB_10019e64:
      local_90 = 0x21;
      recovered_1000850c(local_b4,&local_f0,iVar14,uVar12);
      recovered_10007424(local_114);
      recovered_1000d37c(aiStack_100);
      ppvVar9 = &local_f0;
LAB_10019e90:
      recovered_1001d318((int *)ppvVar9);
LAB_10019e94:
      recovered_10007908(&uStack_94);
      return;
    }
    goto LAB_1001a4fc;
  case 0x1c:
    recovered_1000d37c(local_d0);
    goto LAB_1001a374;
  case 0x1d:
  case 0x1e:
    local_90 = 0x22;
    recovered_100077b4();
    goto LAB_1001a4fc;
  case 0x21:
                    /* WARNING: Subroutine does not return */
    recovered_100073b8((int)local_8c);
  case 0x22:
    piVar6 = local_a4;
    break;
  case 0x23:
    piVar6 = local_a0;
    break;
  case 0x24:
    piVar6 = local_9c;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
    ppvVar9 = &local_d8;
    goto LAB_1001a514;
  case 0x28:
    goto switchD_1001a2a4_caseD_0;
  case 0x29:
switchD_1001a2a4_caseD_0:
LAB_1001a4c0:
    recovered_10007424(local_d8);
    goto LAB_1001a52c;
  default:
switchD_1001a2a4_default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x15dbcU));
    (*pcVar1)();
  }
  recovered_1000779c((int)piVar6);
LAB_1001a52c:
  local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  recovered_10007950(local_8c);
}

#undef DAT_1001a53c
#undef DAT_1001a540
#undef DAT_1001a544
#undef DAT_1001a548
#undef DAT_1001a54c
#undef DAT_1001a550
#undef DAT_1001a554
#undef DAT_1001a558
#undef DAT_1001a55c
#undef DAT_1001a560
#undef DAT_1001a564
#undef DAT_1001a568
#undef DAT_1001a56c
#undef DAT_1001a570
#undef DAT_1001a574
#undef DAT_1001a578
#undef DAT_1001a57c
#undef DAT_1001a580
#undef DAT_1001a584
#undef DAT_1001a588
#undef DAT_1001a58c
#undef DAT_1001a590
#undef DAT_1001a594
#undef local_90
#undef local_8c
#undef auStack_68
#undef local_88
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_1c0
#undef aiStack_100
#undef local_11c
#undef local_115
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_d8
#undef local_d4
#undef uStack_94
#undef local_d0
#undef local_c0
#undef local_b4
#undef local_b0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_95

#undef DAT_1001a680
#define DAT_1001a680 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16330U)))
#undef DAT_1001a684
#define DAT_1001a684 (*(int *)(((uintptr_t)pf_module_state + 0x16334U)))
#undef DAT_1001a688
#define DAT_1001a688 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16338U)))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(undefined1 * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16248U)
 */

void recovered_1001a598(undefined1 *param_1,int *param_2)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  *param_1 = 7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_7c = *DAT_1001a688;
  local_78 = DAT_1001a680;
  local_70 = DAT_1001a684 + ((uintptr_t)pf_module_state+0x162b0U);
  local_90 = 1;
  local_98 = param_1 + 8;
  recovered_100078f0(&uStack_94);
  recovered_1001cb20((int)(param_1 + 8),param_2);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001a680
#undef DAT_1001a684
#undef DAT_1001a688
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94

#undef DAT_1001a7c8
#define DAT_1001a7c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16478U)))
#undef DAT_1001a7cc
#define DAT_1001a7cc (*(int *)(((uintptr_t)pf_module_state + 0x1647cU)))
#undef DAT_1001a7d0
#define DAT_1001a7d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16480U)))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_9c (*(undefined4 *)(frame + 20))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(int *)(frame + 16))
#define local_98 (*(int *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1633cU)
 */

void recovered_1001a68c(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[208] = {0};

  int iVar1;
  int extraout_r2 = 0;
  int iVar2;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  undefined1 *puVar3;

  local_98 = param_1;
  recovered_1000e0ac((undefined4 *)param_1);
  puVar3 = *(undefined1 **)(local_98 + 4);
  *(undefined4 *)(puVar3 + 4) = param_3;
  *puVar3 = 0;
  local_7c = *DAT_1001a7d0;
  local_78 = DAT_1001a7c8;
  local_70 = DAT_1001a7cc + ((uintptr_t)pf_module_state+0x163b0U);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  iVar2 = extraout_r3;
  if ((int *)(puVar3 + 8) != param_4) {
    iVar1 = *param_4;
    uStack_9c = *(undefined4 *)(puVar3 + 0xc);
    iVar2 = extraout_r2;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int *)(puVar3 + 0xc) = param_4[1];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = iVar2 + 1;
    }
    local_a0 = *(int *)(puVar3 + 8);
    *(int *)(puVar3 + 8) = iVar1;
    recovered_1000e2a4(&local_a0);
    puVar3 = *(undefined1 **)(local_98 + 4);
    iVar2 = extraout_r3_00;
  }
  local_90 = 1;
  recovered_1000e174((int *)(puVar3 + 0x14),param_2,iVar2);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001a7c8
#undef DAT_1001a7cc
#undef DAT_1001a7d0
#undef local_70
#undef local_6c
#undef uStack_94
#undef uStack_9c
#undef auStack_68
#undef local_a0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74

#undef DAT_1001a91c
#define DAT_1001a91c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x165ccU)))
#undef DAT_1001a920
#define DAT_1001a920 (*(int *)(((uintptr_t)pf_module_state + 0x165d0U)))
#undef DAT_1001a924
#define DAT_1001a924 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x165d4U)))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_a4 (*(int * *)(frame + 28))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16484U)
 */

int recovered_1001a7d4(int *param_1,char *param_2)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_1001a924;
  local_78 = DAT_1001a91c;
  local_70 = DAT_1001a920 + ((uintptr_t)pf_module_state+0x164d4U);
  cVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x04') {
    if (*(int *)(param_2 + 0x14) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x16598U));
      (*pcVar1)();
    }
    local_90 = 0xffffffff;
    iVar3 = recovered_1001ac58(param_1,(int *)(param_2 + 8));
  }
  else {
    local_90 = 0xffffffff;
    recovered_1001c79c((int *)local_a0,param_2);
    local_90 = 1;
    local_a4 = param_1;
    iVar3 = recovered_1001ac58(param_1,(int *)local_a0);
    recovered_10007424(local_a0[0]);
    param_1 = local_a4;
  }
  iVar5 = *param_1;
  iVar6 = param_1[1];
  recovered_10007908(&uStack_94);
  iVar4 = 0;
  if (iVar3 != iVar5 + iVar6 * 0x28) {
    iVar4 = iVar3 + 0x10;
  }
  return iVar4;
}

#undef DAT_1001a91c
#undef DAT_1001a920
#undef DAT_1001a924
#undef auStack_b0
#undef uStack_94
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x165d8U)
 */

void recovered_1001a928(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;

  iVar1 = 0;
  do {
    puVar2 = (undefined1 *)(param_1 + iVar1);
    *puVar2 = 0;
    iVar1 = iVar1 + 0x18;
    *(undefined4 *)(puVar2 + 0x14) = 0;
  } while (iVar1 != 0x180);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x165fcU)
 */

void recovered_1001a94c(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d37c((int *)(*param_1 + param_1[1] * 0x18 + -0x10));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16630U)
 */

int recovered_1001a980(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != param_2) {
    recovered_1000d450(*(int *)(param_1 + 0xc),(int *)param_1);
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1;
    recovered_1000eb9c(iVar1,(undefined8 *)param_1,(undefined8 *)param_2);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16670U)
 */

int recovered_1001a9c0(int *param_1,undefined1 *param_2)

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
    recovered_1000eab8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000eb54((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


#undef DAT_1001ab04
#define DAT_1001ab04 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x167b4U)))
#undef DAT_1001ab08
#define DAT_1001ab08 (*(int *)(((uintptr_t)pf_module_state + 0x167b8U)))
#undef DAT_1001ab0c
#define DAT_1001ab0c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x167bcU)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x166d8U)
 */

void recovered_1001aa28(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_98 = param_1;
  recovered_1000dc38(param_1,param_2);
  piVar1 = local_98;
  local_7c = *DAT_1001ab0c;
  local_78 = DAT_1001ab04;
  local_70 = DAT_1001ab08 + ((uintptr_t)pf_module_state+0x16734U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_10008fbc(piVar1,param_3);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001ab04
#undef DAT_1001ab08
#undef DAT_1001ab0c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x167c0U)
 */

int recovered_1001ab10(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  iVar6 = *param_1;
  if (iVar6 == 0) {
    uVar1 = param_1[1];
  }
  else {
    uVar1 = recovered_100043f4(param_2 - iVar6,0x18);
  }
  uVar2 = recovered_10004350(param_4 - param_3,0x18);
  if (0x17 < (uint)(param_4 - param_3)) {
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar7 + uVar2) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 << 1;
      } while (uVar5 < uVar7 + uVar2);
      recovered_1000eab8(param_1,uVar5);
      uVar7 = param_1[1];
    }
    iVar6 = uVar7 * 0x18;
    for (; iVar6 = iVar6 + -0x18, uVar1 < uVar7; uVar7 = uVar7 - 1) {
      recovered_1000eb54((undefined1 *)(*param_1 + iVar6) + uVar2 * 0x18,
                         (undefined1 *)(*param_1 + iVar6));
      recovered_1000d37c((int *)(*param_1 + iVar6 + 8));
    }
    iVar6 = uVar1 * 0x18;
    for (; param_3 != param_4; param_3 = param_3 + 0x18) {
      recovered_1001282c((undefined1 *)(*param_1 + iVar6),(undefined1 *)param_3);
      iVar6 = iVar6 + 0x18;
    }
    iVar6 = *param_1;
    param_1[1] = param_1[1] + uVar2;
  }
  iVar3 = iVar6 + uVar1 * 0x18;
  if (iVar6 == 0) {
    iVar3 = 0;
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16908U)
 */

int recovered_1001ac58(int *param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000ef68(param_1,in_r1);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x28;
}


#undef DAT_1001aca8
#define DAT_1001aca8 (*(int *)(((uintptr_t)pf_module_state + 0x16958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16930U)
 */

uint recovered_1001ac80(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = DAT_1001aca8;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  uVar1 = recovered_1001ace0(param_1,iVar2,param_2[1]);
  return uVar1 >> 0x1f;
}

#undef DAT_1001aca8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1695cU)
 */

uint recovered_1001acac(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1001ac80(param_2,param_1);
  return uVar1 ^ 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1697cU)
 */

uint recovered_1001accc(int *in_r0,int *in_r1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1001ac80(in_r0,in_r1);
  return uVar1 ^ 1;
}


#undef DAT_1001ad48
#define DAT_1001ad48 (*(int *)(((uintptr_t)pf_module_state + 0x169f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16990U)
 */

int recovered_1001ace0(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = param_1[1];
  uVar5 = 0;
  uVar7 = param_3;
  if (uVar6 < param_3) {
    uVar7 = uVar6;
  }
  do {
    if (uVar7 == uVar5) {
      iVar4 = 1;
      if (uVar6 < param_3) {
        iVar4 = -1;
      }
      iVar3 = 0;
      if (uVar6 != param_3) {
        iVar3 = iVar4;
      }
      return iVar3;
    }
    pbVar1 = (byte *)(param_2 + uVar5);
    iVar4 = *param_1;
    if (*param_1 == 0) {
      iVar4 = DAT_1001ad48;
    }
    pbVar2 = (byte *)(iVar4 + uVar5);
    uVar5 = uVar5 + 1;
  } while ((uint)*pbVar2 == (uint)*pbVar1);
  return (uint)*pbVar2 - (uint)*pbVar1;
}

#undef DAT_1001ad48

#undef DAT_1001af58
#define DAT_1001af58 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16c08U)))
#undef DAT_1001af5c
#define DAT_1001af5c (*(int *)(((uintptr_t)pf_module_state + 0x16c0cU)))
#undef DAT_1001af60
#define DAT_1001af60 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16c10U)))
#undef DAT_1001af64
#define DAT_1001af64 (*(int *)(((uintptr_t)pf_module_state + 0x16c14U)))
#undef DAT_1001af68
#define DAT_1001af68 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16c18U)))
#undef DAT_1001af6c
#define DAT_1001af6c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16c1cU)))
#define aiStack_c0 (*(int (*)[3])(frame + 48))
#define aiStack_b4 (*(int (*)[3])(frame + 60))
#define local_d4 (*(uint *)(frame + 28))
#define aiStack_cc (*(int (*)[3])(frame + 36))
#define local_d0 (*(uint *)(frame + 32))
#define local_9c (*(int * *)(frame + 84))
#define local_95 (*(undefined1 *)(frame + 91))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define aiStack_a8 (*(int (*)[3])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
#define auStack_e0 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x169fcU)
 */

void recovered_1001ad4c(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[272] = {0};

  code *pcVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = *DAT_1001af60;
  local_78 = DAT_1001af58;
  local_70 = DAT_1001af5c + ((uintptr_t)pf_module_state+0x16a54U);
  recovered_100078f0(&uStack_94);
  if ((param_2 < param_3) || (param_4 < param_2)) {
    local_d4 = param_3;
    local_d0 = param_4;
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_c0,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_b4,aiStack_c0,DAT_1001af64);
    local_90 = 3;
    recovered_1001b4f8(aiStack_cc,local_d4,local_d0);
    local_90 = 4;
    recovered_1001aa28(aiStack_a8,aiStack_b4,aiStack_cc);
    local_95 = 1;
    local_90 = 5;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 6;
    recovered_10007810((int)local_9c,*DAT_1001af68,*DAT_1001af6c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x16b54U));
    (*pcVar1)();
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001af58
#undef DAT_1001af5c
#undef DAT_1001af60
#undef DAT_1001af64
#undef DAT_1001af68
#undef DAT_1001af6c
#undef aiStack_c0
#undef aiStack_b4
#undef local_d4
#undef aiStack_cc
#undef local_d0
#undef local_9c
#undef local_95
#undef uStack_94
#undef aiStack_a8
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c20U)
 */

int recovered_1001af70(int *param_1,undefined4 *param_2,undefined4 in_r2,undefined4 in_r3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r3 = 0;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    recovered_1000eab8(param_1,uVar2);
    iVar1 = param_1[1];
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  recovered_10008318((undefined1 *)(*param_1 + iVar1 * 0x18),(void *)*param_2,in_r2,in_r3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


#undef DAT_1001b104
#define DAT_1001b104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16db4U)))
#undef DAT_1001b108
#define DAT_1001b108 (*(int *)(((uintptr_t)pf_module_state + 0x16db8U)))
#undef DAT_1001b10c
#define DAT_1001b10c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x16dbcU)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_a0 (*(void * (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c88U)
 */

int recovered_1001afd8(int *param_1,char *param_2)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  int iVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  local_7c = *DAT_1001b10c;
  local_78 = DAT_1001b104;
  local_70 = DAT_1001b108 + ((uintptr_t)pf_module_state+0x16cd8U);
  cVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x04') {
    if (*(int *)(param_2 + 0x14) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x16d80U));
      (*pcVar1)();
    }
    local_90 = 0xffffffff;
    iVar3 = recovered_1000df14(param_1,(int *)(param_2 + 8));
  }
  else {
    local_90 = 0xffffffff;
    recovered_1001c79c((int *)local_a0,param_2);
    local_90 = 1;
    iVar3 = recovered_1001c624(param_1,local_a0);
    recovered_10007424(local_a0[0]);
  }
  recovered_10007908(&uStack_94);
  return iVar3;
}

#undef DAT_1001b104
#undef DAT_1001b108
#undef DAT_1001b10c
#undef uStack_94
#undef local_a0
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001b4d8
#define DAT_1001b4d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17188U)))
#undef DAT_1001b4dc
#define DAT_1001b4dc (*(int *)(((uintptr_t)pf_module_state + 0x1718cU)))
#undef DAT_1001b4e0
#define DAT_1001b4e0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x17190U)))
#undef DAT_1001b4e4
#define DAT_1001b4e4 (*(int *)(((uintptr_t)pf_module_state + 0x17194U)))
#undef DAT_1001b4e8
#define DAT_1001b4e8 (*(int *)(((uintptr_t)pf_module_state + 0x17198U)))
#undef DAT_1001b4ec
#define DAT_1001b4ec (*(int *)(((uintptr_t)pf_module_state + 0x1719cU)))
#undef DAT_1001b4f0
#define DAT_1001b4f0 (*(int *)(((uintptr_t)pf_module_state + 0x171a0U)))
#undef DAT_1001b4f4
#define DAT_1001b4f4 (*(int *)(((uintptr_t)pf_module_state + 0x171a4U)))
#define local_d4 (*(void * (*)[3])(frame + 204))
#define local_c8 (*(undefined1 (*)[8])(frame + 216))
#define local_b4 (*(undefined4 *)(frame + 236))
#define local_b0 (*(int (*)[7])(frame + 240))
#define local_90 (*(undefined4 *)(frame + 272))
#define local_7c (*(undefined4 *)(frame + 292))
#define local_78 (*(undefined4 *)(frame + 296))
#define local_74 (*(undefined1 * *)(frame + 300))
#define local_70 (*(int *)(frame + 304))
#define local_6c (*(undefined1 * *)(frame + 308))
#define auStack_f0 (*(undefined1 (*)[8])(frame + 176))
#define aiStack_e8 (*(int (*)[5])(frame + 184))
#define auStackY_190 (*(undefined1 (*)[128])(frame + 16))
#define aiStack_c0 (*(int (*)[3])(frame + 224))
#define uStack_94 (*(undefined4 *)(frame + 268))
#define auStack_68 (*(undefined1 (*)[8])(frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16dc0U)
 */

void recovered_1001b110(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,
                       uint param_6)

{
  unsigned char frame[448] = {0};

  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_190 + 0x80;
  local_7c = *DAT_1001b4e0;
  local_78 = DAT_1001b4d8;
  local_70 = DAT_1001b4dc + ((uintptr_t)pf_module_state+0x16e18U);
  uVar5 = *(uint *)(param_4 + 0x10);
  recovered_100078f0(&uStack_94);
  if (uVar5 != param_6) {
    local_b0[2] = 0;
    local_b0[1] = 0;
    local_b0[0] = 0;
    local_90 = 1;
    recovered_1000dd64(local_b0,DAT_1001b4e4);
    local_90 = 2;
    recovered_10008fbc(local_b0,(int *)param_4);
    local_90 = 3;
    recovered_1000dd64(local_b0,DAT_1001b4e8);
    local_90 = 4;
    piVar4 = (int *)recovered_100184a4(local_b0,*(undefined4 *)(param_4 + 0x10));
    local_90 = 5;
    recovered_1000dd64(piVar4,DAT_1001b4ec);
    local_90 = 6;
    recovered_100184a4(piVar4,param_6);
    local_90 = 7;
    piVar4 = *(int **)(param_3 + 4);
    recovered_1000dc38((undefined4 *)local_c8,local_b0);
    local_90 = 8;
    recovered_10018320(piVar4,0,(int *)local_c8);
LAB_1001b414:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x170c4U));
    (*pcVar1)();
  }
  if (*(char *)(param_4 + 0x70) == '\x02') {
    local_90 = 0xffffffff;
    recovered_1001b974((undefined1 *)local_b0,param_2,param_3,param_4,*(uint *)(param_4 + 0x84),
                       param_5,param_6);
    bVar2 = recovered_10008964((char *)local_b0);
    recovered_1000d37c(local_b0 + 2);
    if (bVar2 != 0) {
      local_90 = 0xffffffff;
      recovered_10008370((undefined1 *)local_b0,(int *)(param_4 + 0x88));
      local_b4 = 0;
      local_c8[0] = 0;
      local_90 = 9;
      recovered_1000cfe0((int *)local_d4,DAT_1001b4f0);
      local_90 = 10;
      bVar3 = recovered_1000a18c(param_2,local_d4,local_c8);
      recovered_10007424(local_d4[0]);
      if (!bVar3) {
        local_90 = 0xb;
        piVar4 = *(int **)(param_3 + 4);
        recovered_1000cfe0((int *)local_d4,DAT_1001b4f4);
        local_90 = 0xc;
        recovered_10018320(piVar4,0,(int *)local_d4);
        goto LAB_1001b414;
      }
      local_90 = 0xd;
      recovered_100198e0(auStack_f0,param_2,param_3,local_c8,(char *)local_b0,1,0);
      recovered_1000d37c(aiStack_e8);
      recovered_1000d37c(aiStack_c0);
      recovered_1000d37c(local_b0 + 2);
    }
  }
  local_90 = 0xffffffff;
  recovered_1001b974(param_1,param_2,param_3,param_4,*(uint *)(param_4 + 0x80),param_5,param_6);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001b4d8
#undef DAT_1001b4dc
#undef DAT_1001b4e0
#undef DAT_1001b4e4
#undef DAT_1001b4e8
#undef DAT_1001b4ec
#undef DAT_1001b4f0
#undef DAT_1001b4f4
#undef local_d4
#undef local_c8
#undef local_b4
#undef local_b0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_f0
#undef aiStack_e8
#undef auStackY_190
#undef aiStack_c0
#undef uStack_94
#undef auStack_68

#undef DAT_1001b7ec
#define DAT_1001b7ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1749cU)))
#undef DAT_1001b7f0
#define DAT_1001b7f0 (*(int *)(((uintptr_t)pf_module_state + 0x174a0U)))
#undef DAT_1001b7f4
#define DAT_1001b7f4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x174a4U)))
#undef DAT_1001b7f8
#define DAT_1001b7f8 (*(int *)(((uintptr_t)pf_module_state + 0x174a8U)))
#undef DAT_1001b7fc
#define DAT_1001b7fc (*(int *)(((uintptr_t)pf_module_state + 0x174acU)))
#undef DAT_1001b800
#define DAT_1001b800 (*(int *)(((uintptr_t)pf_module_state + 0x174b0U)))
#undef DAT_1001b804
#define DAT_1001b804 (*(int *)(((uintptr_t)pf_module_state + 0x174b4U)))
#undef DAT_1001b808
#define DAT_1001b808 (*(int *)(((uintptr_t)pf_module_state + 0x174b8U)))
#undef DAT_1001b80c
#define DAT_1001b80c (*(int *)(((uintptr_t)pf_module_state + 0x174bcU)))
#define local_d4 (*(int * *)(frame + 28))
#define local_d0 (*(void * (*)[3])(frame + 32))
#define local_c4 (*(void * (*)[3])(frame + 44))
#define local_b8 (*(void * (*)[3])(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define local_ac (*(void * (*)[3])(frame + 68))
#define local_a0 (*(void * (*)[3])(frame + 80))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define auStack_e0 (*(undefined1 (*)[8])(frame + 16))
#define local_d8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x171a8U)
 */

void recovered_1001b4f8(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[272] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = *DAT_1001b7f4;
  local_78 = DAT_1001b7ec;
  local_70 = DAT_1001b7f0 + ((uintptr_t)pf_module_state+0x171fcU);
  recovered_100078f0(&uStack_94);
  if (param_2 == param_3) {
    if (param_2 == 1) {
      local_90 = 0xffffffff;
      recovered_1000cfe0(param_1,DAT_1001b7f8);
      goto LAB_1001b6ec;
    }
    local_90 = 0xffffffff;
    local_d4 = param_1;
    recovered_1001b810(local_ac,param_2);
    local_90 = 1;
    recovered_100090c0((int *)local_a0,DAT_1001b7fc,(int *)local_ac);
    local_90 = 2;
    recovered_10008fd8(local_d4,(int *)local_a0,DAT_1001b800);
LAB_1001b6dc:
    recovered_10007424(local_a0[0]);
  }
  else {
    if (param_3 == 0xffffffff) {
      local_90 = 0xffffffff;
      local_d4 = param_1;
      recovered_1001b810(local_ac,param_2);
      local_90 = 3;
      recovered_100090c0((int *)local_a0,DAT_1001b804,(int *)local_ac);
      local_90 = 4;
      recovered_10008fd8(local_d4,(int *)local_a0,DAT_1001b800);
      goto LAB_1001b6dc;
    }
    local_90 = 0xffffffff;
    local_d8 = param_3;
    local_d4 = param_1;
    recovered_1001b810(local_c4,param_2);
    local_90 = 5;
    recovered_100090c0((int *)local_b8,DAT_1001b808,(int *)local_c4);
    local_90 = 6;
    recovered_10008fd8(local_ac,(int *)local_b8,DAT_1001b80c);
    local_90 = 7;
    recovered_1001b810(local_d0,local_d8);
    local_90 = 8;
    recovered_1001aa28((int *)local_a0,(int *)local_ac,(int *)local_d0);
    local_90 = 9;
    recovered_10008fd8(local_d4,(int *)local_a0,DAT_1001b800);
    recovered_10007424(local_a0[0]);
    recovered_10007424(local_d0[0]);
    recovered_10007424(local_ac[0]);
    recovered_10007424(local_b8[0]);
    local_ac[0] = local_c4[0];
  }
  recovered_10007424(local_ac[0]);
LAB_1001b6ec:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001b7ec
#undef DAT_1001b7f0
#undef DAT_1001b7f4
#undef DAT_1001b7f8
#undef DAT_1001b7fc
#undef DAT_1001b800
#undef DAT_1001b804
#undef DAT_1001b808
#undef DAT_1001b80c
#undef local_d4
#undef local_d0
#undef local_c4
#undef local_b8
#undef uStack_94
#undef local_ac
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c
#undef auStack_e0
#undef local_d8

#define local_38 (*(uint *)(frame + 16))
#define local_34 (*(int *)(frame + 20))
#define auStack_30 (*(undefined1 (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x174c0U)
 */

void recovered_1001b810(undefined4 *param_1,uint param_2)

{
  unsigned char frame[104] = {0};

  int in_r3;

  recovered_1001b87c(&local_38,(uint)auStack_30,(uint)(auStack_30 + 0x20),param_2,10);
  if (local_34 == 0) {
    recovered_1000d238(param_1,(int)auStack_30,local_38 - (int)auStack_30,in_r3);
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

#undef local_38
#undef local_34
#undef auStack_30

#define local_61 (*(byte (*)[65])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1752cU)
 */

void recovered_1001b87c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[145] = {0};

  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;

  if (((param_2 == 0 || param_3 == 0) || (param_3 < param_2)) ||
     (param_5 - 0x25 < 0xffffffdc || param_5 == 1)) {
    *param_1 = param_2;
    param_1[1] = 1;
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar8 = recovered_10004bac(param_4,uVar4,param_5,0);
      uVar5 = param_4 - (uint)uVar8 * param_5;
      bVar3 = (byte)uVar5;
      bVar6 = bVar3 + 0x57;
      if (uVar5 < 10) {
        bVar6 = bVar3 | 0x30;
      }
      local_61[uVar7] = bVar6;
      uVar7 = uVar7 + 1;
      bVar1 = uVar4 != 0;
      bVar2 = uVar4 < (param_5 <= param_4);
      param_4 = (uint)uVar8;
      uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
    } while (bVar1 || bVar2);
    uVar4 = 2;
    if (uVar7 <= param_3 - param_2) {
      for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
        *(byte *)(param_2 + uVar4) = local_61[(uVar7 - uVar4) + -1];
      }
      param_3 = param_2 + uVar7;
      uVar4 = 0;
    }
    param_1[1] = uVar4;
    *param_1 = param_3;
  }
  return;
}

#undef local_61

#undef DAT_1001c604
#define DAT_1001c604 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x182b4U)))
#undef DAT_1001c608
#define DAT_1001c608 (*(int *)(((uintptr_t)pf_module_state + 0x182b8U)))
#undef DAT_1001c60c
#define DAT_1001c60c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x182bcU)))
#undef DAT_1001c610
#define DAT_1001c610 (*(int *)(((uintptr_t)pf_module_state + 0x182c0U)))
#undef DAT_1001c614
#define DAT_1001c614 (*(int *)(((uintptr_t)pf_module_state + 0x182c4U)))
#undef DAT_1001c618
#define DAT_1001c618 (*(int *)(((uintptr_t)pf_module_state + 0x182c8U)))
#undef DAT_1001c61c
#define DAT_1001c61c (*(int *)(((uintptr_t)pf_module_state + 0x182ccU)))
#undef DAT_1001c620
#define DAT_1001c620 (*(int *)(((uintptr_t)pf_module_state + 0x182d0U)))
#define abStack_c0 (*(byte (*)[8])(frame + 208))
#define auStackY_180 (*(undefined1 (*)[128])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 252))
#define aiStack_b8 (*(int (*)[5])(frame + 216))
#define aiStack_a4 (*(int (*)[3])(frame + 236))
#define auStack_68 (*(undefined1 (*)[8])(frame + 296))
#define local_d8 (*(byte (*)[8])(frame + 184))
#define local_d0 (*(int (*)[4])(frame + 192))
#define local_98 (*(int * *)(frame + 248))
#define local_90 (*(undefined4 *)(frame + 256))
#define local_7c (*(undefined4 *)(frame + 276))
#define local_78 (*(undefined4 *)(frame + 280))
#define local_74 (*(undefined1 * *)(frame + 284))
#define local_70 (*(int *)(frame + 288))
#define local_6c (*(undefined1 * *)(frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17624U)
 */

void recovered_1001b974(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,
                       int param_6,uint param_7)

{
  unsigned char frame[432] = {0};

  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  int *piVar11;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_180 + 0x80;
  local_7c = *DAT_1001c60c;
  local_78 = DAT_1001c604;
  local_70 = DAT_1001c608 + ((uintptr_t)pf_module_state+0x1767cU);
  uVar5 = *(uint *)(param_4 + 0x78);
  recovered_100078f0(&uStack_94);
  if (((int)param_5 < 0) || (uVar5 <= param_5)) {
    local_90 = 0xffffffff;
    piVar6 = *(int **)(param_3 + 4);
    recovered_1000cfe0((int *)abStack_c0,DAT_1001c610);
    local_90 = 1;
    recovered_10018320(piVar6,0,(int *)abStack_c0);
    goto LAB_1001c468;
  }
  puVar7 = (undefined1 *)(*(int *)(param_4 + 0x74) + param_5 * 0x24);
  switch((uintptr_t)(*puVar7)) {
  case 0:
    cVar2 = puVar7[1];
    if (cVar2 == '\x02') {
      puVar4 = (undefined1 *)recovered_1000f4dc(param_2,*(uint *)(puVar7 + 0x20));
      if (puVar4 == (undefined1 *)0x0) {
        piVar11 = *(int **)(param_3 + 4);
        piVar6 = (int *)recovered_100147e0((int)piVar11,*(uint *)(puVar7 + 4));
        if (piVar6 == (int *)0x0) {
          uVar9 = *(undefined4 *)(puVar7 + 0x1c);
          local_90 = 0xffffffff;
          recovered_1000cfe0(aiStack_a4,DAT_1001c618);
          local_90 = 3;
          recovered_10018320(piVar11,uVar9,aiStack_a4);
LAB_1001c468:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x18118U));
          (*pcVar1)();
        }
        local_90 = 0xffffffff;
        uVar5 = recovered_1000f4ac(param_2,piVar6);
        puVar4 = (undefined1 *)recovered_1000f4dc(param_2,uVar5);
        if (puVar4 == (undefined1 *)0x0) {
          uVar9 = *(undefined4 *)(puVar7 + 0x1c);
          local_90 = 0xffffffff;
          piVar11 = *(int **)(param_3 + 4);
          recovered_100090c0((int *)local_d8,DAT_1001c61c,piVar6);
          local_90 = 4;
          recovered_10008fd8((undefined4 *)abStack_c0,(int *)local_d8,DAT_1001c620);
          local_90 = 5;
          recovered_10018320(piVar11,uVar9,(int *)abStack_c0);
          goto LAB_1001c468;
        }
        *(uint *)(puVar7 + 0x20) = uVar5;
      }
    }
    else if (cVar2 == '\x01') {
      uVar5 = *(uint *)(puVar7 + 4);
      if (((int)uVar5 < 0) || (param_7 <= uVar5)) goto switchD_1001ba10_default;
      puVar4 = (undefined1 *)(param_6 + uVar5 * 0x18);
    }
    else {
      if (cVar2 != '\0') {
switchD_1001ba10_default:
        *(undefined4 *)(param_1 + 0x14) = 0;
        *param_1 = 0;
        goto LAB_1001c250;
      }
      piVar6 = *(int **)(param_3 + 4);
      uVar5 = *(uint *)(puVar7 + 4);
      if (((int)uVar5 < 0) || ((uint)piVar6[4] <= uVar5)) {
        uVar9 = *(undefined4 *)(puVar7 + 0x1c);
        local_90 = 0xffffffff;
        recovered_1000cfe0((int *)abStack_c0,DAT_1001c614);
        local_90 = 2;
        recovered_10018320(piVar6,uVar9,(int *)abStack_c0);
        goto LAB_1001c468;
      }
      puVar4 = (undefined1 *)(piVar6[3] + uVar5 * 0x18);
    }
    local_90 = 0xffffffff;
    recovered_1001282c(param_1,puVar4);
    goto LAB_1001c250;
  case 1:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 6;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 7;
    recovered_1001879c(param_1,abStack_c0,local_d8,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 2:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 8;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 9;
    recovered_10018aac(param_1,abStack_c0,local_d8,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 3:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 10;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0xb;
    recovered_10018c64(param_1,abStack_c0,local_d8,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 4:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0xc;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0xd;
    recovered_10018e20(param_1,abStack_c0,local_d8,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 5:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0xe;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0xf;
    recovered_10019004(param_1,abStack_c0,local_d8,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 6:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x10;
    recovered_10019248(param_1,abStack_c0,*(int **)(param_3 + 4),*(undefined4 *)(puVar7 + 0x1c));
    goto LAB_1001c24c;
  case 7:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    bVar3 = recovered_10008964((char *)abStack_c0);
    param_1[8] = bVar3 ^ 1;
    *(undefined4 *)(param_1 + 0x14) = 3;
    *param_1 = 3;
    goto LAB_1001c24c;
  case 8:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x11;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x12;
    uVar5 = recovered_100193c4(abStack_c0,local_d8);
    bVar3 = (byte)uVar5;
    goto LAB_1001c22c;
  case 9:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x13;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x14;
    uVar5 = recovered_100193c4(abStack_c0,local_d8);
    bVar3 = (byte)uVar5 ^ 1;
LAB_1001c22c:
    *(undefined4 *)(param_1 + 0x14) = 3;
    *param_1 = 3;
    param_1[8] = bVar3;
    break;
  case 10:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x15;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x16;
    recovered_10019674(param_1,abStack_c0,local_d8,0xd,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 0xb:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x17;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x18;
    recovered_10019674(param_1,abStack_c0,local_d8,0xe,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 0xc:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x19;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x1a;
    recovered_10019674(param_1,abStack_c0,local_d8,0xf,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 0xd:
    local_90 = 0xffffffff;
    recovered_1001b974(abStack_c0,param_2,param_3,param_4,*(uint *)(puVar7 + 8),param_6,param_7);
    local_90 = 0x1b;
    recovered_1001b974(local_d8,param_2,param_3,param_4,*(uint *)(puVar7 + 0xc),param_6,param_7);
    local_90 = 0x1c;
    recovered_10019674(param_1,abStack_c0,local_d8,0x10,*(int **)(param_3 + 4),
                       *(undefined4 *)(puVar7 + 0x1c));
    break;
  case 0xe:
    local_d0[0] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_90 = 0x1d;
    recovered_1000eab8((int *)local_d8,*(uint *)(puVar7 + 0x14));
    puVar10 = *(uint **)(puVar7 + 0x10);
    local_98 = aiStack_b8;
    for (iVar8 = *(int *)(puVar7 + 0x14) << 2; iVar8 != 0; iVar8 = iVar8 + -4) {
      local_90 = 0x1f;
      recovered_1001b974(abStack_c0,param_2,param_3,param_4,*puVar10,param_6,param_7);
      local_90 = 0x20;
      recovered_1001a9c0((int *)local_d8,abStack_c0);
      recovered_1000d37c(local_98);
      puVar10 = puVar10 + 1;
    }
    local_90 = 0x1e;
    recovered_1000850c(param_1,(undefined4 *)local_d8,param_6,param_4);
    recovered_1001d318((int *)local_d8);
    goto LAB_1001c250;
  default:
    goto switchD_1001ba10_default;
  }
  recovered_1000d37c(local_d0);
LAB_1001c24c:
  recovered_1000d37c(aiStack_b8);
LAB_1001c250:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001c604
#undef DAT_1001c608
#undef DAT_1001c60c
#undef DAT_1001c610
#undef DAT_1001c614
#undef DAT_1001c618
#undef DAT_1001c61c
#undef DAT_1001c620
#undef abStack_c0
#undef auStackY_180
#undef uStack_94
#undef aiStack_b8
#undef aiStack_a4
#undef auStack_68
#undef local_d8
#undef local_d0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001c78c
#define DAT_1001c78c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1843cU)))
#undef DAT_1001c790
#define DAT_1001c790 (*(int *)(((uintptr_t)pf_module_state + 0x18440U)))
#undef DAT_1001c794
#define DAT_1001c794 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18444U)))
#undef DAT_1001c798
#define DAT_1001c798 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18448U)))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define aiStack_a8 (*(int (*)[3])(frame + 40))
#define local_b4 (*(int * *)(frame + 28))
#define local_b0 (*(undefined1 (*)[8])(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_9c (*(undefined4 *)(frame + 52))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x182d4U)
 */

int recovered_1001c624(int *param_1,undefined4 *param_2)

{
  unsigned char frame[240] = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = recovered_1000ee64(param_1,param_2);
  local_7c = *DAT_1001c794;
  local_78 = DAT_1001c78c;
  local_70 = DAT_1001c790 + ((uintptr_t)pf_module_state+0x1832cU);
  iVar4 = *param_1;
  iVar3 = param_1[1];
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (iVar2 == iVar4 + iVar3 * 0x28) {
    local_90 = 0xffffffff;
    recovered_1000ee8c((int)param_1);
    local_90 = 1;
    local_9c = 0;
    local_b0[0] = 0;
    local_b4 = param_1;
    recovered_1001c9c0(param_1,param_2,local_b0);
    recovered_1000d37c(aiStack_a8);
    piVar1 = local_b4;
    local_90 = 0xffffffff;
    recovered_1000ea5c(local_b4 + 6,(undefined4 *)*DAT_1001c798);
    recovered_1000ef2c((int)piVar1,piVar1[1] + -1);
    iVar2 = *piVar1 + piVar1[1] * 0x28 + -0x28;
  }
  recovered_10007908(&uStack_94);
  return iVar2 + 0x10;
}

#undef DAT_1001c78c
#undef DAT_1001c790
#undef DAT_1001c794
#undef DAT_1001c798
#undef auStack_c0
#undef uStack_94
#undef aiStack_a8
#undef local_b4
#undef local_b0
#undef auStack_68
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001c9a4
#define DAT_1001c9a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18654U)))
#undef DAT_1001c9a8
#define DAT_1001c9a8 (*(int *)(((uintptr_t)pf_module_state + 0x18658U)))
#undef DAT_1001c9ac
#define DAT_1001c9ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1865cU)))
#undef DAT_1001c9b0
#define DAT_1001c9b0 (*(int *)(((uintptr_t)pf_module_state + 0x18660U)))
#undef DAT_1001c9b4
#define DAT_1001c9b4 (*(int *)(((uintptr_t)pf_module_state + 0x18664U)))
#undef DAT_1001c9b8
#define DAT_1001c9b8 (*(int *)(((uintptr_t)pf_module_state + 0x18668U)))
#undef DAT_1001c9bc
#define DAT_1001c9bc (*(int *)(((uintptr_t)pf_module_state + 0x1866cU)))
#define aiStack_ac (*(int (*)[3])(frame + 20))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_b0 (*(int * *)(frame + 16))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1844cU)
 */

void recovered_1001c79c(int *param_1,undefined1 *param_2)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  undefined1 uVar2;
  int *message;
  int iVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_7c = *DAT_1001c9ac;
  local_78 = DAT_1001c9a4;
  local_70 = DAT_1001c9a8 + ((uintptr_t)pf_module_state+0x1849cU);
  uVar2 = *param_2;
  recovered_100078f0(&uStack_94);
  switch((uintptr_t)(uVar2)) {
  case 0:
    iVar3 = DAT_1001c9b8;
    goto LAB_1001c8d4;
  case 1:
    if (*(int *)(param_2 + 0x14) != 1) break;
    local_90 = 0xffffffff;
    recovered_10008e58(param_1,*(uint *)(param_2 + 8),*(uint *)(param_2 + 0xc));
    goto LAB_1001c904;
  case 2:
    local_98 = 0;
    local_9c = 0;
    local_a0 = (void *)0x0;
    local_b0 = param_1;
    if (*(int *)(param_2 + 0x14) == 2) {
      local_90 = 1;
      recovered_10008ec8((int *)&local_a0,(int)*(undefined8 *)(param_2 + 8),
                         (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20));
      local_90 = 2;
      recovered_1000dc38(local_b0,(int *)&local_a0);
      recovered_10007424(local_a0);
      goto LAB_1001c904;
    }
    break;
  case 3:
    if (*(int *)(param_2 + 0x14) != 3) break;
    iVar3 = DAT_1001c9b4;
    if (param_2[8] != '\0') {
      iVar3 = DAT_1001c9b0;
    }
LAB_1001c8d4:
    local_90 = 0xffffffff;
    recovered_1000cfe0(param_1,iVar3);
LAB_1001c904:
    recovered_10007908(&uStack_94);
    return;
  case 4:
    if (*(int *)(param_2 + 0x14) == 4) {
      local_90 = 0xffffffff;
      recovered_1000dc38(param_1,(int *)(param_2 + 8));
      goto LAB_1001c904;
    }
    break;
  default:
    local_90 = 0xffffffff;
    message = recovered_1000cfe0(aiStack_ac,DAT_1001c9bc);
    local_90 = 3;
    recovered_1000f758(message);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x18604U));
  (*pcVar1)();
}

#undef DAT_1001c9a4
#undef DAT_1001c9a8
#undef DAT_1001c9ac
#undef DAT_1001c9b0
#undef DAT_1001c9b4
#undef DAT_1001c9b8
#undef DAT_1001c9bc
#undef aiStack_ac
#undef uStack_94
#undef local_b0
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18670U)
 */

int recovered_1001c9c0(int *param_1,undefined4 *param_2,undefined1 *param_3)

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
    recovered_1000f0d8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1001ca30(*param_1 + iVar1 * 0x28,param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x28;
}


#undef DAT_1001cb14
#define DAT_1001cb14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x187c4U)))
#undef DAT_1001cb18
#define DAT_1001cb18 (*(int *)(((uintptr_t)pf_module_state + 0x187c8U)))
#undef DAT_1001cb1c
#define DAT_1001cb1c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x187ccU)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x186e0U)
 */

int recovered_1001ca30(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  unsigned char frame[208] = {0};

  int iVar1;

  local_98 = param_1;
  recovered_1000ea14((undefined4 *)param_1,param_2);
  iVar1 = local_98;
  local_7c = *DAT_1001cb1c;
  local_78 = DAT_1001cb14;
  local_70 = DAT_1001cb18 + ((uintptr_t)pf_module_state+0x1873cU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1000eb54((undefined1 *)(iVar1 + 0x10),param_3);
  iVar1 = local_98;
  recovered_10007908(&uStack_94);
  return iVar1;
}

#undef DAT_1001cb14
#undef DAT_1001cb18
#undef DAT_1001cb1c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187d0U)
 */

int recovered_1001cb20(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000d450(*(int *)(param_1 + 0xc),(int *)param_1);
  recovered_1000f488((int *)param_1,param_2);
  *(undefined4 *)(param_1 + 0xc) = 7;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18808U)
 */

undefined4 * recovered_1001cb58(undefined4 *param_1,uint in_r1)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000ed00(param_1,in_r1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18834U)
 */

int recovered_1001cb84(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  iVar1 = 0x170;
  do {
    recovered_1000d37c((int *)(param_1 + iVar1));
    bVar2 = iVar1 != 8;
    iVar1 = iVar1 + -0x18;
  } while (bVar2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18860U)
 */

void recovered_1001cbb0(int *param_1,uint param_2,undefined4 param_3,int param_4)

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
    iVar2 = recovered_10006d0c((int *)*param_1,param_2,iVar2);
    bVar1 = iVar2 == 0;
  }
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x188acU)
 */

ulonglong recovered_1001cbfc(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((*param_1 == 0) || (uVar1 = recovered_10006da4(*param_1), (int)uVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x188f4U)
 */

void recovered_1001cc44(int *param_1,int param_2,int param_3,int param_4)

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
      iVar1 = recovered_10006a74((undefined1 *)param_2,1,param_3,piVar3);
      bVar2 = iVar1 == param_3 && unaff_r5 == 0;
      goto LAB_1001cca0;
    }
  }
  bVar2 = false;
  iVar1 = 0;
LAB_1001cca0:
  param_1[2] = iVar1;
  *(bool *)(param_1 + 1) = bVar2;
  param_1[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18964U)
 */

void recovered_1001ccb4(int param_1,undefined4 *in_r1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0xc) = 4;
  recovered_1000ea14((undefined4 *)param_1,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18970U)
 */

void recovered_1001ccc0(int param_1,int *in_r1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0xc) = 4;
  recovered_1000dc38((undefined4 *)param_1,in_r1);
  return;
}


#undef DAT_1001cd24
#define DAT_1001cd24 (*(int * *)(((uintptr_t)pf_module_state + 0x189d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1897cU)
 */

undefined4 * recovered_1001cccc(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_100073f4(0x10);
    piVar1[3] = param_2;
    piVar1[2] = 1;
    piVar1[1] = 1;
    *piVar1 = *DAT_1001cd24 + 8;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef DAT_1001cd24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x189d8U)
 */

void recovered_1001cd28(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x189dcU)
 */

void recovered_1001cd2c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x189e0U)
 */

void recovered_1001cd30(int param_1)

{
  unsigned char frame[64] = {0};

  int *pointer;

  pointer = (int *)0x0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    pointer = recovered_1001d318(*(int **)(param_1 + 0xc));
  }
  recovered_10007424(pointer);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


#undef DAT_1001ce6c
#define DAT_1001ce6c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18b1cU)))
#undef DAT_1001ce70
#define DAT_1001ce70 (*(int *)(((uintptr_t)pf_module_state + 0x18b20U)))
#undef DAT_1001ce74
#define DAT_1001ce74 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18b24U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18a0cU)
 */

void recovered_1001cd5c(int *param_1)

{
  unsigned char frame[208] = {0};

  int iVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1001ce74;
  local_78 = DAT_1001ce6c;
  local_70 = DAT_1001ce70 + ((uintptr_t)pf_module_state+0x18a58U);
  piVar2 = (int *)*param_1;
  recovered_100078f0(&uStack_94);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 1;
      local_98 = param_1;
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)*local_98;
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001ce6c
#undef DAT_1001ce70
#undef DAT_1001ce74
#undef auStack_68
#undef local_98
#undef auStack_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

#undef DAT_1001cfa4
#define DAT_1001cfa4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18c54U)))
#undef DAT_1001cfa8
#define DAT_1001cfa8 (*(int *)(((uintptr_t)pf_module_state + 0x18c58U)))
#undef DAT_1001cfac
#define DAT_1001cfac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18c5cU)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(int * *)(frame + 16))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18b28U)
 */

int * recovered_1001ce78(int *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_9c = param_1;
  recovered_1001cfb0(param_1,param_2);
  piVar1 = local_9c + 3;
  local_7c = *DAT_1001cfac;
  local_78 = DAT_1001cfa4;
  local_70 = DAT_1001cfa8 + ((uintptr_t)pf_module_state+0x18b90U);
  local_90 = 1;
  local_98 = piVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  local_a0 = param_2;
  recovered_100126b0(piVar1,param_2 + 3);
  local_90 = 2;
  recovered_100126b0(local_9c + 6,local_a0 + 6);
  piVar1 = local_9c;
  recovered_10007908(&uStack_94);
  return piVar1;
}

#undef DAT_1001cfa4
#undef DAT_1001cfa8
#undef DAT_1001cfac
#undef uStack_94
#undef auStack_68
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
 * Address: ((uintptr_t)pf_module_state+0x18c60U)
 */

int * recovered_1001cfb0(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  recovered_1000f0d8(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    recovered_1001d01c(*param_1 + iVar2,*param_2 + iVar2);
    iVar2 = iVar2 + 0x28;
  }
  param_1[1] = param_2[1];
  return param_1;
}


#undef DAT_1001d100
#define DAT_1001d100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18db0U)))
#undef DAT_1001d104
#define DAT_1001d104 (*(int *)(((uintptr_t)pf_module_state + 0x18db4U)))
#undef DAT_1001d108
#define DAT_1001d108 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18db8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18cccU)
 */

int recovered_1001d01c(int param_1,int param_2)

{
  unsigned char frame[208] = {0};

  int iVar1;

  local_98 = param_1;
  recovered_1000dc38((undefined4 *)param_1,(int *)param_2);
  iVar1 = local_98;
  local_7c = *DAT_1001d108;
  local_78 = DAT_1001d100;
  local_70 = DAT_1001d104 + ((uintptr_t)pf_module_state+0x18d28U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  recovered_1001282c((undefined1 *)(iVar1 + 0x10),(undefined1 *)(param_2 + 0x10));
  iVar1 = local_98;
  recovered_10007908(&uStack_94);
  return iVar1;
}

#undef DAT_1001d100
#undef DAT_1001d104
#undef DAT_1001d108
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_1001d164
#define DAT_1001d164 (*(int * *)(((uintptr_t)pf_module_state + 0x18e14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18dbcU)
 */

undefined4 * recovered_1001d10c(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_100073f4(0x10);
    piVar1[3] = param_2;
    piVar1[2] = 1;
    piVar1[1] = 1;
    *piVar1 = *DAT_1001d164 + 8;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  return param_1;
}

#undef DAT_1001d164

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18e18U)
 */

void recovered_1001d168(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18e1cU)
 */

void recovered_1001d16c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18e20U)
 */

void recovered_1001d170(int param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    pointer = (void *)recovered_1000d5e8(*(int *)(param_1 + 0xc));
  }
  recovered_10007424(pointer);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


#undef DAT_1001d2ac
#define DAT_1001d2ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x18f5cU)))
#undef DAT_1001d2b0
#define DAT_1001d2b0 (*(int *)(((uintptr_t)pf_module_state + 0x18f60U)))
#undef DAT_1001d2b4
#define DAT_1001d2b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x18f64U)))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18e4cU)
 */

void recovered_1001d19c(int *param_1)

{
  unsigned char frame[208] = {0};

  int iVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = *DAT_1001d2b4;
  local_78 = DAT_1001d2ac;
  local_70 = DAT_1001d2b0 + ((uintptr_t)pf_module_state+0x18e98U);
  piVar2 = (int *)*param_1;
  recovered_100078f0(&uStack_94);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 1;
      local_98 = param_1;
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)*local_98;
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001d2ac
#undef DAT_1001d2b0
#undef DAT_1001d2b4
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18f68U)
 */

undefined4 * recovered_1001d2b8(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_1001d2ec(param_1,param_2);
  recovered_1000fff8((undefined4 *)(uVar1 + 0xc),param_2 + 3);
  recovered_1000fff8(param_1 + 6,param_2 + 6);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18f9cU)
 */

uint recovered_1001d2ec(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x18fc8U)
 */

int * recovered_1001d318(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1001d338(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18fe8U)
 */

void recovered_1001d338(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x18 + -0x10;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d37c((int *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x18;
  }
  param_1[1] = 0;
  return;
}


#undef DAT_1001d528
#define DAT_1001d528 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x191d8U)))
#undef DAT_1001d52c
#define DAT_1001d52c (*(int *)(((uintptr_t)pf_module_state + 0x191dcU)))
#undef DAT_1001d530
#define DAT_1001d530 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x191e0U)))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[24])(frame + 88))
#define local_a4 (*(undefined4 * *)(frame + 28))
#define local_a0 (*(undefined4 * *)(frame + 32))
#define local_9c (*(undefined4 * *)(frame + 36))
#define local_98 (*(undefined4 * *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19030U)
 */

undefined4 * recovered_1001d380(undefined4 *param_1)

{
  unsigned char frame[224] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar2 = 0;
  uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uVar4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uVar5 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = 0;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = 0;
  local_a4 = param_1;
  recovered_1000d2a4(param_1);
  puVar1 = local_a4 + 10;
  local_a4[0x13] = 0;
  *puVar1 = uVar2;
  local_a4[0xb] = uVar3;
  local_a4[0xc] = uVar4;
  local_a4[0xd] = uVar5;
  local_a4[0xe] = uVar2;
  local_a4[0xf] = uVar3;
  local_a4[0x10] = uVar4;
  local_a4[0x11] = uVar5;
  local_a4[0x12] = 0;
  local_7c = *DAT_1001d530;
  local_78 = DAT_1001d528;
  local_70 = DAT_1001d52c + ((uintptr_t)pf_module_state+0x190c4U);
  local_90 = 1;
  local_a0 = puVar1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100078f0(&uStack_94);
  recovered_1001e7e0(puVar1);
  local_9c = local_a4 + 0x14;
  *local_9c = 0;
  local_98 = local_a4 + 0x17;
  local_a4[0x16] = 0;
  local_a4[0x15] = 0;
  *local_98 = 0;
  local_a4[0x18] = 0;
  local_a4[0x19] = 0;
  local_a4[0x1a] = 0;
  local_90 = 2;
  recovered_1001d534((int)local_a4);
  puVar1 = local_a4;
  recovered_10007908(&uStack_94);
  return puVar1;
}

#undef DAT_1001d528
#undef DAT_1001d52c
#undef DAT_1001d530
#undef auStack_b0
#undef uStack_94
#undef auStack_68
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

#undef DAT_1001e564
#define DAT_1001e564 (*(int *)(((uintptr_t)pf_module_state + 0x1a214U)))
#undef DAT_1001e568
#define DAT_1001e568 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a218U)))
#undef DAT_1001e578
#define DAT_1001e578 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a228U)))
#undef DAT_1001e580
#define DAT_1001e580 (*(int *)(((uintptr_t)pf_module_state + 0x1a230U)))
#undef DAT_1001e5a4
#define DAT_1001e5a4 (*(void * *)(((uintptr_t)pf_module_state + 0x1a254U)))
#undef DAT_1001e5e8
#define DAT_1001e5e8 (*(int *)(((uintptr_t)pf_module_state + 0x1a298U)))
#undef DAT_1001e5f8
#define DAT_1001e5f8 (*(void * *)(((uintptr_t)pf_module_state + 0x1a2a8U)))
#undef DAT_1001e63c
#define DAT_1001e63c (*(int *)(((uintptr_t)pf_module_state + 0x1a2ecU)))
#undef DAT_1001e694
#define DAT_1001e694 (*(int *)(((uintptr_t)pf_module_state + 0x1a344U)))
#undef DAT_1001e6f4
#define DAT_1001e6f4 (*(int *)(((uintptr_t)pf_module_state + 0x1a3a4U)))
#undef DAT_1001e724
#define DAT_1001e724 (*(int *)(((uintptr_t)pf_module_state + 0x1a3d4U)))
#undef DAT_1001e760
#define DAT_1001e760 (*(int *)(((uintptr_t)pf_module_state + 0x1a410U)))
#undef DAT_1001e764
#define DAT_1001e764 (*(int *)(((uintptr_t)pf_module_state + 0x1a414U)))
#undef DAT_1001e768
#define DAT_1001e768 (*(int *)(((uintptr_t)pf_module_state + 0x1a418U)))
#undef DAT_1001e76c
#define DAT_1001e76c (*(int *)(((uintptr_t)pf_module_state + 0x1a41cU)))
#undef DAT_1001e770
#define DAT_1001e770 (*(int *)(((uintptr_t)pf_module_state + 0x1a420U)))
#undef DAT_1001e774
#define DAT_1001e774 (*(int *)(((uintptr_t)pf_module_state + 0x1a424U)))
#undef DAT_1001e778
#define DAT_1001e778 (*(int *)(((uintptr_t)pf_module_state + 0x1a428U)))
#undef DAT_1001e77c
#define DAT_1001e77c (*(int *)(((uintptr_t)pf_module_state + 0x1a42cU)))
#undef DAT_1001e780
#define DAT_1001e780 (*(int *)(((uintptr_t)pf_module_state + 0x1a430U)))
#undef DAT_1001e784
#define DAT_1001e784 (*(int *)(((uintptr_t)pf_module_state + 0x1a434U)))
#undef DAT_1001e788
#define DAT_1001e788 (*(int *)(((uintptr_t)pf_module_state + 0x1a438U)))
#undef DAT_1001e78c
#define DAT_1001e78c (*(int *)(((uintptr_t)pf_module_state + 0x1a43cU)))
#undef DAT_1001e790
#define DAT_1001e790 (*(int *)(((uintptr_t)pf_module_state + 0x1a440U)))
#undef DAT_1001e794
#define DAT_1001e794 (*(int *)(((uintptr_t)pf_module_state + 0x1a444U)))
#undef DAT_1001e798
#define DAT_1001e798 (*(int *)(((uintptr_t)pf_module_state + 0x1a448U)))
#undef DAT_1001e79c
#define DAT_1001e79c (*(int *)(((uintptr_t)pf_module_state + 0x1a44cU)))
#undef DAT_1001e7a0
#define DAT_1001e7a0 (*(int *)(((uintptr_t)pf_module_state + 0x1a450U)))
#undef DAT_1001e7a4
#define DAT_1001e7a4 (*(int *)(((uintptr_t)pf_module_state + 0x1a454U)))
#undef DAT_1001e7a8
#define DAT_1001e7a8 (*(int *)(((uintptr_t)pf_module_state + 0x1a458U)))
#undef DAT_1001e7ac
#define DAT_1001e7ac (*(int *)(((uintptr_t)pf_module_state + 0x1a45cU)))
#undef DAT_1001e7b0
#define DAT_1001e7b0 (*(int *)(((uintptr_t)pf_module_state + 0x1a460U)))
#undef DAT_1001e7b4
#define DAT_1001e7b4 (*(int *)(((uintptr_t)pf_module_state + 0x1a464U)))
#undef DAT_1001e7b8
#define DAT_1001e7b8 (*(int *)(((uintptr_t)pf_module_state + 0x1a468U)))
#undef DAT_1001e7bc
#define DAT_1001e7bc (*(int *)(((uintptr_t)pf_module_state + 0x1a46cU)))
#undef DAT_1001e7c0
#define DAT_1001e7c0 (*(int *)(((uintptr_t)pf_module_state + 0x1a470U)))
#undef DAT_1001e7c4
#define DAT_1001e7c4 (*(int *)(((uintptr_t)pf_module_state + 0x1a474U)))
#undef DAT_1001e7c8
#define DAT_1001e7c8 (*(int *)(((uintptr_t)pf_module_state + 0x1a478U)))
#undef DAT_1001e7cc
#define DAT_1001e7cc (*(int *)(((uintptr_t)pf_module_state + 0x1a47cU)))
#undef DAT_1001e7d0
#define DAT_1001e7d0 (*(int *)(((uintptr_t)pf_module_state + 0x1a480U)))
#undef DAT_1001e7d4
#define DAT_1001e7d4 (*(int *)(((uintptr_t)pf_module_state + 0x1a484U)))
#undef DAT_1001e7d8
#define DAT_1001e7d8 (*(int *)(((uintptr_t)pf_module_state + 0x1a488U)))
#undef DAT_1001e7dc
#define DAT_1001e7dc (*(int *)(((uintptr_t)pf_module_state + 0x1a48cU)))
#define local_130 (*(int * *)(frame + 48))
#define local_12c (*(int * *)(frame + 52))
#define local_128 (*(int * *)(frame + 56))
#define local_124 (*(int * *)(frame + 60))
#define local_120 (*(int * *)(frame + 64))
#define local_11c (*(int * *)(frame + 68))
#define local_118 (*(int * *)(frame + 72))
#define local_114 (*(int * *)(frame + 76))
#define local_110 (*(int * *)(frame + 80))
#define local_10c (*(int * *)(frame + 84))
#define local_108 (*(int * *)(frame + 88))
#define local_104 (*(int * *)(frame + 92))
#define local_100 (*(int * *)(frame + 96))
#define local_fc (*(int * *)(frame + 100))
#define local_f8 (*(int * *)(frame + 104))
#define local_f4 (*(int * *)(frame + 108))
#define local_f0 (*(int * *)(frame + 112))
#define local_ec (*(int * *)(frame + 116))
#define local_e8 (*(int * *)(frame + 120))
#define local_e4 (*(int * *)(frame + 124))
#define local_e0 (*(int * *)(frame + 128))
#define local_dc (*(int * *)(frame + 132))
#define local_d8 (*(int * *)(frame + 136))
#define local_d4 (*(int * *)(frame + 140))
#define local_d0 (*(int * *)(frame + 144))
#define local_cc (*(int * *)(frame + 148))
#define local_c8 (*(int * *)(frame + 152))
#define local_c4 (*(int * *)(frame + 156))
#define local_c0 (*(int * *)(frame + 160))
#define local_bc (*(int * *)(frame + 164))
#define local_b8 (*(void * (*)[2])(frame + 168))
#define local_a0 (*(void * (*)[3])(frame + 192))
#define local_90 (*(undefined4 *)(frame + 208))
#define local_7c (*(undefined4 *)(frame + 228))
#define local_78 (*(undefined4 *)(frame + 232))
#define local_74 (*(undefined1 * *)(frame + 236))
#define local_70 (*(int *)(frame + 240))
#define local_6c (*(undefined1 * *)(frame + 244))
#define uStack_94 (*(undefined4 *)(frame + 204))
#define aiStack_b0 (*(int (*)[4])(frame + 176))
#define auStack_68 (*(undefined1 (*)[8])(frame + 248))
#define local_14c (*(int * *)(frame + 20))
#define local_148 (*(int * *)(frame + 24))
#define local_144 (*(int * *)(frame + 28))
#define auStack_150 (*(undefined1 (*)[4])(frame + 16))
#define local_140 (*(int * *)(frame + 32))
#define local_13c (*(int * *)(frame + 36))
#define local_138 (*(int * *)(frame + 40))
#define local_134 (*(int * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191e4U)
 */

void recovered_1001d534(int param_1)

{
  unsigned char frame[384] = {0};

  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;

  local_14c = (int *)param_1;
  recovered_1000cfe0((int *)local_a0,DAT_1001e564);
  local_7c = *DAT_1001e568;
  local_78 = DAT_1001e578;
  local_70 = DAT_1001e580 + ((uintptr_t)pf_module_state+0x1923cU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_150;
  recovered_100078f0(&uStack_94);
  recovered_10008318((undefined1 *)local_b8,DAT_1001e5a4,extraout_r2,extraout_r3);
  local_90 = 2;
  recovered_1000a144(local_14c,(int *)local_a0,(undefined1 *)local_b8,extraout_r3_00);
  recovered_1000d37c(aiStack_b0);
  recovered_10007424(local_a0[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_a0,DAT_1001e5e8);
  local_90 = 3;
  recovered_10008318((undefined1 *)local_b8,DAT_1001e5f8,extraout_r2_00,extraout_r3_01);
  local_90 = 4;
  recovered_1000a144(local_14c,(int *)local_a0,(undefined1 *)local_b8,extraout_r3_02);
  recovered_1000d37c(aiStack_b0);
  recovered_10007424(local_a0[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e63c);
  local_90 = 5;
  recovered_1001e870(&local_bc);
  local_90 = 6;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_bc);
  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e694);
  local_90 = 7;
  recovered_1001ea68(&local_c0);
  local_90 = 8;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_c0);
  if (local_c0 != (int *)0x0) {
    (**(code **)(*local_c0 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e6f4);
  local_90 = 9;
  recovered_1001ec24(&local_c4);
  local_90 = 10;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_c4);
  if (local_c4 != (int *)0x0) {
    (**(code **)(*local_c4 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e724);
  local_90 = 0xb;
  recovered_1001f060(&local_c8);
  local_90 = 0xc;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_c8);
  if (local_c8 != (int *)0x0) {
    (**(code **)(*local_c8 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e760);
  local_90 = 0xd;
  recovered_1001f188(&local_cc);
  local_90 = 0xe;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_cc);
  if (local_cc != (int *)0x0) {
    (**(code **)(*local_cc + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e764);
  local_90 = 0xf;
  recovered_1001f254(&local_d0);
  local_90 = 0x10;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_d0);
  if (local_d0 != (int *)0x0) {
    (**(code **)(*local_d0 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e768);
  local_90 = 0x11;
  recovered_1001fb54(&local_d4);
  local_90 = 0x12;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_d4);
  if (local_d4 != (int *)0x0) {
    (**(code **)(*local_d4 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e76c);
  local_90 = 0x13;
  recovered_1001fc00(&local_d8);
  local_90 = 0x14;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_d8);
  if (local_d8 != (int *)0x0) {
    (**(code **)(*local_d8 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e770);
  local_90 = 0x15;
  recovered_1001fe18(&local_dc,(int)local_14c);
  local_90 = 0x16;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_dc);
  if (local_dc != (int *)0x0) {
    (**(code **)(*local_dc + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e774);
  local_90 = 0x17;
  recovered_10020598(&local_e0);
  local_90 = 0x18;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_e0);
  if (local_e0 != (int *)0x0) {
    (**(code **)(*local_e0 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e778);
  local_90 = 0x19;
  recovered_10020a98(&local_e4);
  local_90 = 0x1a;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_e4);
  if (local_e4 != (int *)0x0) {
    (**(code **)(*local_e4 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e77c);
  local_90 = 0x1b;
  recovered_10020b40(&local_e8);
  local_90 = 0x1c;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_e8);
  if (local_e8 != (int *)0x0) {
    (**(code **)(*local_e8 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e780);
  local_90 = 0x1d;
  recovered_100210a8(&local_ec);
  local_90 = 0x1e;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_ec);
  if (local_ec != (int *)0x0) {
    (**(code **)(*local_ec + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e784);
  local_90 = 0x1f;
  recovered_10021398(&local_f0);
  local_90 = 0x20;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_f0);
  if (local_f0 != (int *)0x0) {
    (**(code **)(*local_f0 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e788);
  local_90 = 0x21;
  recovered_100216f4(&local_f4);
  local_90 = 0x22;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_f4);
  if (local_f4 != (int *)0x0) {
    (**(code **)(*local_f4 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e78c);
  local_90 = 0x23;
  recovered_10021ac8(&local_f8);
  local_90 = 0x24;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_f8);
  if (local_f8 != (int *)0x0) {
    (**(code **)(*local_f8 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e790);
  local_90 = 0x25;
  recovered_10021fc0(&local_fc);
  local_90 = 0x26;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_fc);
  if (local_fc != (int *)0x0) {
    (**(code **)(*local_fc + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e794);
  local_90 = 0x27;
  recovered_100222e0(&local_100);
  local_90 = 0x28;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_100);
  if (local_100 != (int *)0x0) {
    (**(code **)(*local_100 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e798);
  local_90 = 0x29;
  recovered_10022578(&local_104);
  local_90 = 0x2a;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_104);
  if (local_104 != (int *)0x0) {
    (**(code **)(*local_104 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e79c);
  local_90 = 0x2b;
  recovered_10022644(&local_108);
  local_90 = 0x2c;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_108);
  if (local_108 != (int *)0x0) {
    (**(code **)(*local_108 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7a0);
  local_90 = 0x2d;
  recovered_10022710(&local_10c);
  local_90 = 0x2e;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_10c);
  if (local_10c != (int *)0x0) {
    (**(code **)(*local_10c + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7a4);
  local_90 = 0x2f;
  recovered_1002281c(&local_110);
  local_90 = 0x30;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_110);
  if (local_110 != (int *)0x0) {
    (**(code **)(*local_110 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7a8);
  local_90 = 0x31;
  recovered_10022928(&local_114);
  local_90 = 0x32;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_114);
  if (local_114 != (int *)0x0) {
    (**(code **)(*local_114 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7ac);
  local_90 = 0x33;
  recovered_100229fc(&local_118);
  local_90 = 0x34;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_118);
  if (local_118 != (int *)0x0) {
    (**(code **)(*local_118 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7b0);
  local_90 = 0x35;
  recovered_10022ad0(&local_11c);
  local_90 = 0x36;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_11c);
  if (local_11c != (int *)0x0) {
    (**(code **)(*local_11c + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7b4);
  local_90 = 0x37;
  recovered_10022ba8(&local_120);
  local_90 = 0x38;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_120);
  if (local_120 != (int *)0x0) {
    (**(code **)(*local_120 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7b8);
  local_90 = 0x39;
  recovered_10022c7c(&local_124);
  local_90 = 0x3a;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_124);
  if (local_124 != (int *)0x0) {
    (**(code **)(*local_124 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7bc);
  local_90 = 0x3b;
  recovered_10022d50(&local_128);
  local_90 = 0x3c;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_128);
  if (local_128 != (int *)0x0) {
    (**(code **)(*local_128 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7c0);
  local_90 = 0x3d;
  recovered_10022fa8(&local_12c);
  local_90 = 0x3e;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_12c);
  if (local_12c != (int *)0x0) {
    (**(code **)(*local_12c + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7c4);
  local_90 = 0x3f;
  recovered_100231ec(&local_130);
  local_90 = 0x40;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_130);
  if (local_130 != (int *)0x0) {
    (**(code **)(*local_130 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7c8);
  local_90 = 0x41;
  recovered_100239c0(&local_134);
  local_90 = 0x42;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_134);
  if (local_134 != (int *)0x0) {
    (**(code **)(*local_134 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7cc);
  local_90 = 0x43;
  recovered_10023f00(&local_138);
  local_90 = 0x44;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_138);
  if (local_138 != (int *)0x0) {
    (**(code **)(*local_138 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7d0);
  local_90 = 0x45;
  recovered_10024248(&local_13c);
  local_90 = 0x46;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_13c);
  if (local_13c != (int *)0x0) {
    (**(code **)(*local_13c + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7d4);
  local_90 = 0x47;
  recovered_10024548(&local_140);
  local_90 = 0x48;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_140);
  if (local_140 != (int *)0x0) {
    (**(code **)(*local_140 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7d8);
  local_90 = 0x49;
  recovered_10024aac(&local_144);
  local_90 = 0x4a;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_144);
  if (local_144 != (int *)0x0) {
    (**(code **)(*local_144 + 4))();
  }
  recovered_10007424(local_b8[0]);
  local_90 = 0xffffffff;
  recovered_1000cfe0((int *)local_b8,DAT_1001e7dc);
  local_90 = 0x4b;
  recovered_100250b8(&local_148);
  local_90 = 0x4c;
  recovered_10009ea4(local_14c,(int *)local_b8,&local_148);
  if (local_148 != (int *)0x0) {
    (**(code **)(*local_148 + 4))();
  }
  recovered_10007424(local_b8[0]);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001e564
#undef DAT_1001e568
#undef DAT_1001e578
#undef DAT_1001e580
#undef DAT_1001e5a4
#undef DAT_1001e5e8
#undef DAT_1001e5f8
#undef DAT_1001e63c
#undef DAT_1001e694
#undef DAT_1001e6f4
#undef DAT_1001e724
#undef DAT_1001e760
#undef DAT_1001e764
#undef DAT_1001e768
#undef DAT_1001e76c
#undef DAT_1001e770
#undef DAT_1001e774
#undef DAT_1001e778
#undef DAT_1001e77c
#undef DAT_1001e780
#undef DAT_1001e784
#undef DAT_1001e788
#undef DAT_1001e78c
#undef DAT_1001e790
#undef DAT_1001e794
#undef DAT_1001e798
#undef DAT_1001e79c
#undef DAT_1001e7a0
#undef DAT_1001e7a4
#undef DAT_1001e7a8
#undef DAT_1001e7ac
#undef DAT_1001e7b0
#undef DAT_1001e7b4
#undef DAT_1001e7b8
#undef DAT_1001e7bc
#undef DAT_1001e7c0
#undef DAT_1001e7c4
#undef DAT_1001e7c8
#undef DAT_1001e7cc
#undef DAT_1001e7d0
#undef DAT_1001e7d4
#undef DAT_1001e7d8
#undef DAT_1001e7dc
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
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef aiStack_b0
#undef auStack_68
#undef local_14c
#undef local_148
#undef local_144
#undef auStack_150
#undef local_140
#undef local_13c
#undef local_138
#undef local_134

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a490U)
 */

void recovered_1001e7e0(undefined4 *param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x1a4bcU)
 */

int * recovered_1001e80c(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1001e82c(param_1);
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a4dcU)
 */

void recovered_1001e82c(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x10;
  for (; iVar2 = iVar2 + -0x10, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000d288((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


#undef DAT_1001e8a0
#define DAT_1001e8a0 (*(int * *)(((uintptr_t)pf_module_state + 0x1a550U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a520U)
 */

undefined4 * recovered_1001e870(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001e8a0 + 8;
  return param_1;
}

#undef DAT_1001e8a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a554U)
 */

void recovered_1001e8a4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a558U)
 */

void recovered_1001e8a8(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a55cU)
 */

void recovered_1001e8ac(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001e8e8(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001e8e4
#define DAT_1001e8e4 (*(int * *)(((uintptr_t)pf_module_state + 0x1a594U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a570U)
 */

void recovered_1001e8c0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001e8e4 + 8;
  return;
}

#undef DAT_1001e8e4

#undef DAT_1001ea54
#define DAT_1001ea54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a704U)))
#undef DAT_1001ea58
#define DAT_1001ea58 (*(int *)(((uintptr_t)pf_module_state + 0x1a708U)))
#undef DAT_1001ea5c
#define DAT_1001ea5c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a70cU)))
#undef DAT_1001ea60
#define DAT_1001ea60 (*(int *)(((uintptr_t)pf_module_state + 0x1a710U)))
#undef DAT_1001ea64
#define DAT_1001ea64 (*(int *)(((uintptr_t)pf_module_state + 0x1a714U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b4 (*(undefined1 * *)(frame + 28))
#define local_b0 (*(int *)(frame + 32))
#define local_ac (*(int * *)(frame + 36))
#define local_a8 (*(int *)(frame + 40))
#define local_a4 (*(uint *)(frame + 44))
#define local_a0 (*(void * (*)[3])(frame + 48))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a598U)
 */

void recovered_1001e8e8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[240] = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_1001ea5c;
  local_78 = DAT_1001ea54;
  local_70 = DAT_1001ea58 + ((uintptr_t)pf_module_state+0x1a5e8U);
  local_b4 = param_1;
  recovered_100078f0(&uStack_94);
  iVar3 = 0;
  local_b0 = DAT_1001ea60;
  uVar2 = 0;
  local_ac = param_4;
  while (piVar1 = local_ac, uVar2 < (uint)local_ac[1]) {
    local_a4 = uVar2;
    if (uVar2 != 0) {
      local_90 = 0xffffffff;
      recovered_100081f4(local_b0);
    }
    local_90 = 0xffffffff;
    recovered_100089a4((int *)local_a0,(undefined1 *)(*piVar1 + iVar3));
    local_90 = 1;
    local_a8 = iVar3;
    recovered_100081d8((int *)local_a0);
    recovered_10007424(local_a0[0]);
    iVar3 = local_a8 + 0x18;
    uVar2 = local_a4 + 1;
  }
  local_90 = 0xffffffff;
  recovered_100081f4(DAT_1001ea64);
  local_90 = 0xffffffff;
  recovered_100064e4();
  *(undefined4 *)(local_b4 + 0x14) = 0;
  *local_b4 = 0;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001ea54
#undef DAT_1001ea58
#undef DAT_1001ea5c
#undef DAT_1001ea60
#undef DAT_1001ea64
#undef auStack_68
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_c0
#undef local_6c
#undef uStack_94

#undef DAT_1001ea98
#define DAT_1001ea98 (*(int * *)(((uintptr_t)pf_module_state + 0x1a748U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a718U)
 */

undefined4 * recovered_1001ea68(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001ea98 + 8;
  return param_1;
}

#undef DAT_1001ea98

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a74cU)
 */

void recovered_1001ea9c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a750U)
 */

void recovered_1001eaa0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a754U)
 */

void recovered_1001eaa4(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001eae0(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001eadc
#define DAT_1001eadc (*(int * *)(((uintptr_t)pf_module_state + 0x1a78cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a768U)
 */

void recovered_1001eab8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001eadc + 8;
  return;
}

#undef DAT_1001eadc

#undef DAT_1001ec18
#define DAT_1001ec18 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a8c8U)))
#undef DAT_1001ec1c
#define DAT_1001ec1c (*(int *)(((uintptr_t)pf_module_state + 0x1a8ccU)))
#undef DAT_1001ec20
#define DAT_1001ec20 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a8d0U)))
#define local_ac (*(undefined1 * *)(frame + 20))
#define local_a8 (*(undefined1 * *)(frame + 24))
#define local_a4 (*(int *)(frame + 28))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a790U)
 */

void recovered_1001eae0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[224] = {0};

  int iVar1;
  undefined1 *puVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_1001ec20;
  local_78 = DAT_1001ec18;
  local_70 = DAT_1001ec1c + ((uintptr_t)pf_module_state+0x1a7dcU);
  puVar2 = (undefined1 *)*param_4;
  iVar1 = param_4[1];
  local_ac = param_1;
  recovered_100078f0(&uStack_94);
  iVar1 = iVar1 * 0x18;
  while (iVar1 != 0) {
    local_90 = 0xffffffff;
    local_a4 = iVar1;
    recovered_100089a4((int *)local_a0,puVar2);
    local_90 = 1;
    local_a8 = puVar2;
    recovered_100081d8((int *)local_a0);
    recovered_10007424(local_a0[0]);
    puVar2 = local_a8 + 0x18;
    iVar1 = local_a4 + -0x18;
  }
  local_90 = 0xffffffff;
  recovered_100064e4();
  *(undefined4 *)(local_ac + 0x14) = 0;
  *local_ac = 0;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001ec18
#undef DAT_1001ec1c
#undef DAT_1001ec20
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef auStack_b0
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_1001ec54
#define DAT_1001ec54 (*(int * *)(((uintptr_t)pf_module_state + 0x1a904U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a8d4U)
 */

undefined4 * recovered_1001ec24(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001ec54 + 8;
  return param_1;
}

#undef DAT_1001ec54

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a908U)
 */

void recovered_1001ec58(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a90cU)
 */

void recovered_1001ec5c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a910U)
 */

void recovered_1001ec60(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001ec9c(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001ec98
#define DAT_1001ec98 (*(int * *)(((uintptr_t)pf_module_state + 0x1a948U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a924U)
 */

void recovered_1001ec74(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001ec98 + 8;
  return;
}

#undef DAT_1001ec98

#undef DAT_1001ee20
#define DAT_1001ee20 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aad0U)))
#undef DAT_1001ee24
#define DAT_1001ee24 (*(int *)(((uintptr_t)pf_module_state + 0x1aad4U)))
#undef DAT_1001ee28
#define DAT_1001ee28 (*(int *)(((uintptr_t)pf_module_state + 0x1aad8U)))
#undef DAT_1001ee2c
#define DAT_1001ee2c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1aadcU)))
#undef DAT_1001ee30
#define DAT_1001ee30 (*(int *)(((uintptr_t)pf_module_state + 0x1aae0U)))
#undef DAT_1001ee34
#define DAT_1001ee34 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1aae4U)))
#undef DAT_1001ee38
#define DAT_1001ee38 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1aae8U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a94cU)
 */

/* WARNING: Exceeded maximum restarts with more pending */

void recovered_1001ec9c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  char *pcVar3;

  recovered_1001ee3c(DAT_1001ee28,(int)param_4,1,1);
  pcVar3 = (char *)*param_4;
  cVar2 = *pcVar3;
  local_7c = *DAT_1001ee2c;
  local_78 = DAT_1001ee20;
  local_70 = DAT_1001ee24 + ((uintptr_t)pf_module_state+0x1a9b8U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x06') {
    local_90 = 0xffffffff;
    pcVar3 = (char *)recovered_10009aa4(pcVar3);
  }
  else if (cVar2 == '\x05') {
    local_90 = 0xffffffff;
    pcVar3 = (char *)recovered_10009844(pcVar3);
  }
  else {
    if (cVar2 != '\x04') {
      local_98 = (int *)recovered_10007750(0x10);
      local_90 = 1;
      recovered_1000932c(local_98,DAT_1001ee30);
      local_90 = 0xffffffff;
      recovered_10007810((int)local_98,*DAT_1001ee34,*DAT_1001ee38);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((uintptr_t)(local_90)) {
      case 0:
        recovered_1000779c((int)local_98);
        local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        recovered_10007950(local_8c);
      default:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1aa9cU));
        (*pcVar1)();
      }
    }
    local_90 = 0xffffffff;
    pcVar3 = recovered_100095e8(pcVar3);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pcVar3 + 4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001ee20
#undef DAT_1001ee24
#undef DAT_1001ee28
#undef DAT_1001ee2c
#undef DAT_1001ee30
#undef DAT_1001ee34
#undef DAT_1001ee38
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_98

#undef DAT_1001f048
#define DAT_1001f048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1acf8U)))
#undef DAT_1001f04c
#define DAT_1001f04c (*(int *)(((uintptr_t)pf_module_state + 0x1acfcU)))
#undef DAT_1001f050
#define DAT_1001f050 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1ad00U)))
#undef DAT_1001f054
#define DAT_1001f054 (*(int *)(((uintptr_t)pf_module_state + 0x1ad04U)))
#undef DAT_1001f058
#define DAT_1001f058 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1ad08U)))
#undef DAT_1001f05c
#define DAT_1001f05c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1ad0cU)))
#define aiStack_c0 (*(int (*)[3])(frame + 48))
#define aiStack_b4 (*(int (*)[3])(frame + 60))
#define aiStack_cc (*(int (*)[3])(frame + 36))
#define local_d4 (*(uint *)(frame + 28))
#define local_d0 (*(uint *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define aiStack_a8 (*(int (*)[3])(frame + 72))
#define local_9c (*(int * *)(frame + 84))
#define local_95 (*(undefined1 *)(frame + 91))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define auStack_e0 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1aaecU)
 */

void recovered_1001ee3c(int param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[272] = {0};

  code *pcVar1;
  uint uVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  local_7c = *DAT_1001f050;
  local_78 = DAT_1001f048;
  local_70 = DAT_1001f04c + ((uintptr_t)pf_module_state+0x1ab40U);
  uVar2 = *(uint *)(param_2 + 4);
  recovered_100078f0(&uStack_94);
  if ((uVar2 < param_3) || (param_4 < uVar2)) {
    local_d4 = param_3;
    local_d0 = param_4;
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_c0,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_b4,aiStack_c0,DAT_1001f054);
    local_90 = 3;
    recovered_1001b4f8(aiStack_cc,local_d4,local_d0);
    local_90 = 4;
    recovered_1001aa28(aiStack_a8,aiStack_b4,aiStack_cc);
    local_95 = 1;
    local_90 = 5;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 6;
    recovered_10007810((int)local_9c,*DAT_1001f058,*DAT_1001f05c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1ac44U));
    (*pcVar1)();
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001f048
#undef DAT_1001f04c
#undef DAT_1001f050
#undef DAT_1001f054
#undef DAT_1001f058
#undef DAT_1001f05c
#undef aiStack_c0
#undef aiStack_b4
#undef aiStack_cc
#undef local_d4
#undef local_d0
#undef uStack_94
#undef aiStack_a8
#undef local_9c
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c
#undef auStack_e0

#undef DAT_1001f090
#define DAT_1001f090 (*(int * *)(((uintptr_t)pf_module_state + 0x1ad40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad10U)
 */

undefined4 * recovered_1001f060(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001f090 + 8;
  return param_1;
}

#undef DAT_1001f090

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad44U)
 */

void recovered_1001f094(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad48U)
 */

void recovered_1001f098(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad4cU)
 */

void recovered_1001f09c(undefined1 *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001f0d8(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001f0d4
#define DAT_1001f0d4 (*(int * *)(((uintptr_t)pf_module_state + 0x1ad84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad60U)
 */

void recovered_1001f0b0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001f0d4 + 8;
  return;
}

#undef DAT_1001f0d4

#undef DAT_1001f13c
#define DAT_1001f13c (*(int *)(((uintptr_t)pf_module_state + 0x1adecU)))
#undef DAT_1001f140
#define DAT_1001f140 (*(int * *)(((uintptr_t)pf_module_state + 0x1adf0U)))
#define local_14 (*(uint *)(frame + 16))
#define uStack_10 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ad88U)
 */

void recovered_1001f0d8(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  unsigned char frame[68] = {0};

  uint *puVar1;

  local_14 = param_3;
  uStack_10 = param_4;
  recovered_1001ee3c(DAT_1001f13c,param_4,0,0);
  puVar1 = (uint *)*DAT_1001f140;
  local_14 = *puVar1;
  uStack_10 = puVar1[1];
  *puVar1 = local_14 + 1;
  puVar1[1] = uStack_10 + (0xfffffffe < local_14);
  recovered_1001f144((undefined8 *)(param_1 + 8),&local_14);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  return;
}

#undef DAT_1001f13c
#undef DAT_1001f140
#undef local_14
#undef uStack_10

#undef DAT_1001f180
#define DAT_1001f180 (*(double *)(((uintptr_t)pf_module_state + 0x1ae30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1adf4U)
 */

void recovered_1001f144(undefined8 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_r1 = 0;
  double dVar2;
  undefined8 uVar3;

  uVar1 = recovered_100046a0(*param_2,param_2[1]);
  dVar2 = (pf_bits_double(CONCAT44(extraout_r1,uVar1)) * DAT_1001f180) / DAT_1001f180;
  uVar3 = recovered_10004600(SUB84(dVar2,0),(int)(pf_double_bits(dVar2) >> 0x20));
  *param_1 = uVar3;
  return;
}

#undef DAT_1001f180

#undef DAT_1001f1b8
#define DAT_1001f1b8 (*(int * *)(((uintptr_t)pf_module_state + 0x1ae68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ae38U)
 */

undefined4 * recovered_1001f188(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001f1b8 + 8;
  return param_1;
}

#undef DAT_1001f1b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ae6cU)
 */

void recovered_1001f1bc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ae70U)
 */

void recovered_1001f1c0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ae74U)
 */

void recovered_1001f1c4(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001f200(param_1,(void *)(param_2 + 4),param_3,param_4);
  return;
}


#undef DAT_1001f1fc
#define DAT_1001f1fc (*(int * *)(((uintptr_t)pf_module_state + 0x1aeacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ae88U)
 */

void recovered_1001f1d8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001f1fc + 8;
  return;
}

#undef DAT_1001f1fc

#undef DAT_1001f250
#define DAT_1001f250 (*(int *)(((uintptr_t)pf_module_state + 0x1af00U)))
#define uStack_18 (*(undefined4 *)(frame + 20))
#define puStack_14 (*(undefined4 * *)(frame + 24))
#define local_1c (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1aeb0U)
 */

void recovered_1001f200(undefined1 *param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[76] = {0};


  local_1c = param_2;
  uStack_18 = param_3;
  puStack_14 = param_4;
  recovered_1001ee3c(DAT_1001f250,(int)param_4,1,1);
  recovered_100089a4((int *)&local_1c,(undefined1 *)*param_4);
  recovered_10008394(param_1,&local_1c);
  recovered_10007424(local_1c);
  return;
}

#undef DAT_1001f250
#undef uStack_18
#undef puStack_14
#undef local_1c

#undef DAT_1001f284
#define DAT_1001f284 (*(int * *)(((uintptr_t)pf_module_state + 0x1af34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af04U)
 */

undefined4 * recovered_1001f254(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001f284 + 8;
  return param_1;
}

#undef DAT_1001f284

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af38U)
 */

void recovered_1001f288(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af3cU)
 */

void recovered_1001f28c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af40U)
 */

void recovered_1001f290(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001f2cc(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001f2c8
#define DAT_1001f2c8 (*(int * *)(((uintptr_t)pf_module_state + 0x1af78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af54U)
 */

void recovered_1001f2a4(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001f2c8 + 8;
  return;
}

#undef DAT_1001f2c8

#undef DAT_1001f560
#define DAT_1001f560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b210U)))
#undef DAT_1001f564
#define DAT_1001f564 (*(int *)(((uintptr_t)pf_module_state + 0x1b214U)))
#undef DAT_1001f568
#define DAT_1001f568 (*(int *)(((uintptr_t)pf_module_state + 0x1b218U)))
#undef DAT_1001f56c
#define DAT_1001f56c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b21cU)))
#undef DAT_1001f570
#define DAT_1001f570 (*(int *)(((uintptr_t)pf_module_state + 0x1b220U)))
#undef DAT_1001f574
#define DAT_1001f574 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b224U)))
#undef DAT_1001f578
#define DAT_1001f578 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b228U)))
#undef DAT_1001f57c
#define DAT_1001f57c (*(char * *)(((uintptr_t)pf_module_state + 0x1b22cU)))
#undef DAT_1001f580
#define DAT_1001f580 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b230U)))
#undef DAT_1001f584
#define DAT_1001f584 (*(char * *)(((uintptr_t)pf_module_state + 0x1b234U)))
#define local_a0 (*(char * *)(frame + 16))
#define local_9c (*(undefined4 *)(frame + 20))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1af7cU)
 */

/* WARNING: Exceeded maximum restarts with more pending */

void recovered_1001f2cc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  int *piVar8;
  byte *value;
  double dVar9;
  ulonglong uVar10;

  recovered_1001ee3c(DAT_1001f568,(int)param_4,1,2);
  value = (byte *)*param_4;
  bVar2 = *value;
  local_7c = *DAT_1001f56c;
  local_78 = DAT_1001f560;
  local_70 = DAT_1001f564 + ((uintptr_t)pf_module_state+0x1afe8U);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  if (bVar2 - 1 < 3) {
    local_90 = 0xffffffff;
    dVar9 = recovered_10009334(value);
    dVar9 = pf_bits_double(((pf_double_bits(dVar9) & 0xffffffff00000000) + (pf_double_bits(dVar9) & 0xffffffff)));
LAB_1001f368:
    local_90 = 0xffffffff;
    recovered_1001f588(param_1,dVar9);
    goto LAB_1001f4b4;
  }
  if (bVar2 == 4) {
    local_90 = 0xffffffff;
    piVar4 = (int *)recovered_100095e8((char *)value);
    pcVar7 = DAT_1001f57c;
    if (param_4[1] == 2) {
      local_90 = 0xffffffff;
      uVar10 = recovered_1001f650(DAT_1001f568,param_4,1);
      uVar6 = (uint)uVar10;
      if (uVar6 - 0x25 < 0xffffffdc || uVar6 == 1) {
        local_98 = (int *)recovered_10007750(0x10);
        local_90 = 1;
        recovered_1000932c(local_98,DAT_1001f570);
        local_90 = 0xffffffff;
        recovered_10007810((int)local_98,*DAT_1001f574,*DAT_1001f578);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch((uintptr_t)(local_90)) {
        case 0:
          recovered_1000779c((int)local_98);
          local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
          recovered_10007950(local_8c);
        default:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1b1dcU));
          (*pcVar1)();
        }
      }
    }
    else {
      iVar5 = recovered_1000d11c((int)DAT_1001f57c);
      uVar6 = recovered_1001f8b0(piVar4,pcVar7,iVar5,0);
      if (uVar6 != 0xffffffff) {
        local_a0 = (char *)0x0;
        piVar8 = (int *)*DAT_1001f580;
        *piVar8 = 0;
        local_90 = 0xffffffff;
        pcVar7 = DAT_1001f584;
        if ((char *)*piVar4 != (char *)0x0) {
          pcVar7 = (char *)*piVar4;
        }
        recovered_10005bd4(pcVar7,&local_a0);
        if (((*piVar8 == 0) && (local_a0 != (char *)0x0)) && (*local_a0 == '\0')) {
          dVar9 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
          goto LAB_1001f368;
        }
        goto LAB_1001f464;
      }
      uVar6 = 10;
    }
    local_90 = 0xffffffff;
    local_9c = 0;
    local_a0 = (char *)0x0;
    bVar3 = recovered_1001f820(piVar4,uVar6,(undefined8 *)&local_a0);
    if (bVar3) {
      *(undefined4 *)(param_1 + 0xc) = local_9c;
      *(char **)(param_1 + 8) = local_a0;
    }
    *(uint *)(param_1 + 0x14) = (uint)bVar3;
    *param_1 = bVar3;
  }
  else {
LAB_1001f464:
    *(undefined4 *)(param_1 + 0x14) = 0;
    *param_1 = 0;
  }
LAB_1001f4b4:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1001f560
#undef DAT_1001f564
#undef DAT_1001f568
#undef DAT_1001f56c
#undef DAT_1001f570
#undef DAT_1001f574
#undef DAT_1001f578
#undef DAT_1001f57c
#undef DAT_1001f580
#undef DAT_1001f584
#undef local_a0
#undef local_9c
#undef uStack_94
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_1001f638
#define DAT_1001f638 (*(double *)(((uintptr_t)pf_module_state + 0x1b2e8U)))
#undef DAT_1001f640
#define DAT_1001f640 (*(double *)(((uintptr_t)pf_module_state + 0x1b2f0U)))
#undef DAT_1001f648
#define DAT_1001f648 (*(double *)(((uintptr_t)pf_module_state + 0x1b2f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b238U)
 */

void recovered_1001f588(undefined1 *param_1,double in_d0)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar2;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  uint in_r1;
  double value;
  double value_00;

  in_r1 = (uint)((ulonglong)in_d0 >> 0x20);
  bVar1 = recovered_1001f918(SUB84(in_d0,0),in_r1);
  if (bVar1) {
    value_00 = recovered_10007c20(value);
    recovered_100056c8(value_00);
    if (((in_d0 <= DAT_1001f638) && (DAT_1001f640 <= in_d0)) &&
       (pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) <= DAT_1001f648)) {
      recovered_10005590(SUB84(in_d0,0),in_r1);
      *(undefined4 *)(param_1 + 8) = extraout_r0_00;
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      goto LAB_1001f628;
    }
  }
  uVar2 = 2;
  *(double *)(param_1 + 8) = in_d0;
LAB_1001f628:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *param_1 = (char)uVar2;
  return;
}

#undef DAT_1001f638
#undef DAT_1001f640
#undef DAT_1001f648

#undef DAT_1001f808
#define DAT_1001f808 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b4b8U)))
#undef DAT_1001f80c
#define DAT_1001f80c (*(int *)(((uintptr_t)pf_module_state + 0x1b4bcU)))
#undef DAT_1001f810
#define DAT_1001f810 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b4c0U)))
#undef DAT_1001f814
#define DAT_1001f814 (*(int *)(((uintptr_t)pf_module_state + 0x1b4c4U)))
#undef DAT_1001f818
#define DAT_1001f818 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b4c8U)))
#undef DAT_1001f81c
#define DAT_1001f81c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b4ccU)))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define aiStack_a8 (*(int (*)[3])(frame + 40))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_9c (*(int * *)(frame + 52))
#define local_95 (*(undefined1 *)(frame + 59))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b300U)
 */

ulonglong recovered_1001f650(int param_1,int *param_2,uint param_3)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;

  pbVar3 = (byte *)recovered_1001f930(param_1,param_2,param_3);
  bVar2 = *pbVar3;
  local_7c = *DAT_1001f810;
  local_78 = DAT_1001f808;
  local_70 = DAT_1001f80c + ((uintptr_t)pf_module_state+0x1b358U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (2 < bVar2 - 1) {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_b4,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_a8,aiStack_b4,DAT_1001f814);
    local_95 = 1;
    local_90 = 3;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 4;
    recovered_10007810((int)local_9c,*DAT_1001f818,*DAT_1001f81c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1b43cU));
    (*pcVar1)();
  }
  local_90 = 0xffffffff;
  uVar4 = recovered_100091a8((char *)pbVar3);
  recovered_10007908(&uStack_94);
  return uVar4;
}

#undef DAT_1001f808
#undef DAT_1001f80c
#undef DAT_1001f810
#undef DAT_1001f814
#undef DAT_1001f818
#undef DAT_1001f81c
#undef auStack_c0
#undef aiStack_b4
#undef uStack_94
#undef aiStack_a8
#undef auStack_68
#undef local_9c
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001f8a8
#define DAT_1001f8a8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b558U)))
#undef DAT_1001f8ac
#define DAT_1001f8ac (*(byte * *)(((uintptr_t)pf_module_state + 0x1b55cU)))
#define local_18 (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b4d0U)
 */

bool recovered_1001f820(int *param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[72] = {0};

  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  ulonglong uVar5;

  if (param_1[1] == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    local_18 = (char *)0x0;
    piVar3 = (int *)*DAT_1001f8a8;
    pbVar2 = (byte *)*param_1;
    *piVar3 = 0;
    pbVar1 = DAT_1001f8ac;
    if (pbVar2 != (byte *)0x0) {
      pbVar1 = pbVar2;
    }
    uVar5 = recovered_10007ddc(pbVar1,&local_18,param_2);
    if (((*piVar3 == 0) && (local_18 != (char *)0x0)) && (bVar4 = *local_18 == '\0', bVar4)) {
      *param_3 = uVar5;
    }
  }
  return bVar4;
}

#undef DAT_1001f8a8
#undef DAT_1001f8ac
#undef local_18

#undef DAT_1001f914
#define DAT_1001f914 (*(int *)(((uintptr_t)pf_module_state + 0x1b5c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b560U)
 */

uint recovered_1001f8b0(int *param_1,char *param_2,int param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;

  do {
    if ((uint)param_1[1] <= param_4) {
      return 0xffffffff;
    }
    pcVar2 = param_2;
    iVar3 = param_3;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar2;
      iVar4 = *param_1;
      if (*param_1 == 0) {
        iVar4 = DAT_1001f914;
      }
      pcVar2 = pcVar2 + 1;
      if (*(char *)(iVar4 + param_4) == cVar1) {
        return param_4;
      }
    }
    param_4 = param_4 + 1;
  } while( true );
}

#undef DAT_1001f914

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b5c8U)
 */

bool recovered_1001f918(undefined4 in_r0,uint in_r1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_10007bb0(in_r0,in_r1);
  return bVar1;
}


#undef DAT_1001fb3c
#define DAT_1001fb3c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b7ecU)))
#undef DAT_1001fb40
#define DAT_1001fb40 (*(int *)(((uintptr_t)pf_module_state + 0x1b7f0U)))
#undef DAT_1001fb44
#define DAT_1001fb44 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b7f4U)))
#undef DAT_1001fb48
#define DAT_1001fb48 (*(int *)(((uintptr_t)pf_module_state + 0x1b7f8U)))
#undef DAT_1001fb4c
#define DAT_1001fb4c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b7fcU)))
#undef DAT_1001fb50
#define DAT_1001fb50 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b800U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define aiStack_c0 (*(int (*)[3])(frame + 32))
#define local_d0 (*(uint *)(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 44))
#define local_9c (*(int * *)(frame + 68))
#define local_95 (*(undefined1 *)(frame + 75))
#define aiStack_cc (*(int (*)[3])(frame + 20))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define aiStack_a8 (*(int (*)[3])(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b5e0U)
 */

int recovered_1001f930(int param_1,int *param_2,uint param_3)

{
  unsigned char frame[256] = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  local_7c = *DAT_1001fb44;
  local_78 = DAT_1001fb3c;
  local_70 = DAT_1001fb40 + ((uintptr_t)pf_module_state+0x1b634U);
  uVar3 = param_2[1];
  recovered_100078f0(&uStack_94);
  if (uVar3 <= param_3) {
    local_d0 = param_3;
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_c0,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_b4,aiStack_c0,DAT_1001fb48);
    local_90 = 3;
    recovered_1001b810(aiStack_cc,local_d0 + 1);
    local_90 = 4;
    recovered_1001aa28(aiStack_a8,aiStack_b4,aiStack_cc);
    local_95 = 1;
    local_90 = 5;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 6;
    recovered_10007810((int)local_9c,*DAT_1001fb4c,*DAT_1001fb50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1b738U));
    (*pcVar1)();
  }
  iVar2 = *param_2;
  recovered_10007908(&uStack_94);
  return iVar2 + param_3 * 0x18;
}

#undef DAT_1001fb3c
#undef DAT_1001fb40
#undef DAT_1001fb44
#undef DAT_1001fb48
#undef DAT_1001fb4c
#undef DAT_1001fb50
#undef auStack_68
#undef aiStack_c0
#undef local_d0
#undef aiStack_b4
#undef local_9c
#undef local_95
#undef aiStack_cc
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94
#undef aiStack_a8
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1001fb84
#define DAT_1001fb84 (*(int * *)(((uintptr_t)pf_module_state + 0x1b834U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b804U)
 */

undefined4 * recovered_1001fb54(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001fb84 + 8;
  return param_1;
}

#undef DAT_1001fb84

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b838U)
 */

void recovered_1001fb88(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b83cU)
 */

void recovered_1001fb8c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b840U)
 */

void recovered_1001fb90(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001fbcc(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1001fbc8
#define DAT_1001fbc8 (*(int * *)(((uintptr_t)pf_module_state + 0x1b878U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b854U)
 */

void recovered_1001fba4(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001fbc8 + 8;
  return;
}

#undef DAT_1001fbc8

#undef DAT_1001fbfc
#define DAT_1001fbfc (*(int *)(((uintptr_t)pf_module_state + 0x1b8acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b87cU)
 */

void recovered_1001fbcc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001ee3c(DAT_1001fbfc,param_4,0,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  return;
}

#undef DAT_1001fbfc

#undef DAT_1001fc30
#define DAT_1001fc30 (*(int * *)(((uintptr_t)pf_module_state + 0x1b8e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b8b0U)
 */

undefined4 * recovered_1001fc00(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1001fc30 + 8;
  return param_1;
}

#undef DAT_1001fc30

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b8e4U)
 */

void recovered_1001fc34(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b8e8U)
 */

void recovered_1001fc38(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b8ecU)
 */

void recovered_1001fc3c(undefined4 *in_r3)

{
  unsigned char frame[64] = {0};

  recovered_1001fc78(in_r3);
  return;
}


#undef DAT_1001fc74
#define DAT_1001fc74 (*(int * *)(((uintptr_t)pf_module_state + 0x1b924U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b900U)
 */

void recovered_1001fc50(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1001fc74 + 8;
  return;
}

#undef DAT_1001fc74

#undef DAT_1001fe00
#define DAT_1001fe00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bab0U)))
#undef DAT_1001fe04
#define DAT_1001fe04 (*(int *)(((uintptr_t)pf_module_state + 0x1bab4U)))
#undef DAT_1001fe08
#define DAT_1001fe08 (*(int *)(((uintptr_t)pf_module_state + 0x1bab8U)))
#undef DAT_1001fe0c
#define DAT_1001fe0c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1babcU)))
#undef DAT_1001fe10
#define DAT_1001fe10 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1bac0U)))
#undef DAT_1001fe14
#define DAT_1001fe14 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1bac4U)))
#define aiStack_a8 (*(int (*)[3])(frame + 24))
#define auStack_b0 (*(undefined1 (*)[8])(frame + 16))
#define local_9c (*(int * *)(frame + 36))
#define local_95 (*(undefined1 *)(frame + 43))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b928U)
 */

void recovered_1001fc78(undefined4 *in_r3)

{
  unsigned char frame[224] = {0};

  code *pcVar1;
  int iVar2;

  recovered_1001ee3c(DAT_1001fe08,(int)in_r3,0,1);
  iVar2 = in_r3[1];
  local_9c = (int *)recovered_10007750(0x10);
  local_7c = *DAT_1001fe0c;
  local_78 = DAT_1001fe00;
  local_70 = DAT_1001fe04 + ((uintptr_t)pf_module_state+0x1b99cU);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100078f0(&uStack_94);
  if (iVar2 == 0) {
    local_90 = 1;
    recovered_1000932c(local_9c,DAT_1001fe08);
    local_90 = 0xffffffff;
    recovered_10007810((int)local_9c,*DAT_1001fe10,*DAT_1001fe14);
  }
  local_90 = 2;
  recovered_100089a4(aiStack_a8,(undefined1 *)*in_r3);
  local_95 = 1;
  local_90 = 3;
  recovered_1000fb68(local_9c,aiStack_a8);
  local_95 = 0;
  local_90 = 4;
  recovered_10007810((int)local_9c,*DAT_1001fe10,*DAT_1001fe14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1ba48U));
  (*pcVar1)();
}

#undef DAT_1001fe00
#undef DAT_1001fe04
#undef DAT_1001fe08
#undef DAT_1001fe0c
#undef DAT_1001fe10
#undef DAT_1001fe14
#undef aiStack_a8
#undef auStack_b0
#undef local_9c
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1001fe50
#define DAT_1001fe50 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bac8U)
 */

undefined4 * recovered_1001fe18(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  piVar1[1] = param_2;
  *param_1 = piVar1;
  *piVar1 = *DAT_1001fe50 + 8;
  return param_1;
}

#undef DAT_1001fe50

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bb04U)
 */

void recovered_1001fe54(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bb08U)
 */

void recovered_1001fe58(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bb0cU)
 */

void recovered_1001fe5c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001fea4(param_1,(undefined4 *)(param_2 + 4),param_3,param_4);
  return;
}


#undef DAT_1001fea0
#define DAT_1001fea0 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bb20U)
 */

void recovered_1001fe70(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  piVar1[1] = *(int *)(param_1 + 4);
  *piVar1 = *DAT_1001fea0 + 8;
  return;
}

#undef DAT_1001fea0

#undef DAT_10020560
#define DAT_10020560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c210U)))
#undef DAT_10020564
#define DAT_10020564 (*(int *)(((uintptr_t)pf_module_state + 0x1c214U)))
#undef DAT_10020568
#define DAT_10020568 (*(int *)(((uintptr_t)pf_module_state + 0x1c218U)))
#undef DAT_1002056c
#define DAT_1002056c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c21cU)))
#undef DAT_10020570
#define DAT_10020570 (*(int *)(((uintptr_t)pf_module_state + 0x1c220U)))
#undef DAT_10020574
#define DAT_10020574 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c224U)))
#undef DAT_10020578
#define DAT_10020578 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c228U)))
#undef DAT_1002057c
#define DAT_1002057c (*(int *)(((uintptr_t)pf_module_state + 0x1c22cU)))
#undef DAT_10020580
#define DAT_10020580 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c230U)))
#undef DAT_10020584
#define DAT_10020584 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c234U)))
#undef DAT_10020588
#define DAT_10020588 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c238U)))
#undef DAT_1002058c
#define DAT_1002058c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c23cU)))
#undef DAT_10020590
#define DAT_10020590 (*(int *)(((uintptr_t)pf_module_state + 0x1c240U)))
#undef DAT_10020594
#define DAT_10020594 (*(int *)(((uintptr_t)pf_module_state + 0x1c244U)))
#define local_108 (*(int * *)(frame + 168))
#define local_fc (*(int (*)[3])(frame + 180))
#define local_f0 (*(undefined1 (*)[8])(frame + 192))
#define local_d8 (*(undefined1 (*)[8])(frame + 216))
#define local_c4 (*(undefined4 *)(frame + 236))
#define local_c0 (*(int (*)[3])(frame + 240))
#define local_b4 (*(undefined1 * *)(frame + 252))
#define local_b0 (*(int * *)(frame + 256))
#define local_ac (*(int * *)(frame + 260))
#define local_a8 (*(int * *)(frame + 264))
#define local_a4 (*(int * *)(frame + 268))
#define local_90 (*(undefined4 *)(frame + 288))
#define local_7c (*(undefined4 *)(frame + 308))
#define local_78 (*(undefined4 *)(frame + 312))
#define local_74 (*(undefined1 * *)(frame + 316))
#define local_70 (*(int *)(frame + 320))
#define local_6c (*(undefined1 * *)(frame + 324))
#define auStackY_1a0 (*(undefined1 (*)[128])(frame + 16))
#define aiStack_d0 (*(int (*)[3])(frame + 224))
#define aiStack_e8 (*(int (*)[4])(frame + 200))
#define uStack_94 (*(undefined4 *)(frame + 284))
#define auStack_68 (*(undefined1 (*)[8])(frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1bb54U)
 */

void recovered_1001fea4(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[464] = {0};

  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  char *pcVar11;

  iVar3 = *param_2;
  local_b4 = param_1;
  recovered_1001ee3c(DAT_10020568,(int)param_4,1,0xffffffff);
  local_7c = *DAT_1002056c;
  local_78 = DAT_10020560;
  local_c0[2] = 0;
  local_c0[1] = 0;
  local_c0[0] = 0;
  local_70 = DAT_10020564 + ((uintptr_t)pf_module_state+0x1bbd8U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1a0 + 0x80;
  recovered_100078f0(&uStack_94);
  recovered_1000eab8(local_c0,2);
  puVar2 = DAT_10020584;
  pcVar11 = (char *)*param_4;
  if (*pcVar11 != '\a') {
    local_b0 = (int *)recovered_10007750(0x10);
    local_90 = 2;
    recovered_1000dd90(local_b0,DAT_10020570);
    local_90 = 3;
    recovered_10007810((int)local_b0,*DAT_10020574,*DAT_10020578);
    goto LAB_100202f0;
  }
  if (*(int *)(pcVar11 + 0x14) != 7) goto LAB_100202f0;
  pcVar4 = *(char **)(pcVar11 + 0xc);
  if (pcVar4 == (char *)0x0) {
    local_ac = (int *)recovered_10007750(0x10);
    local_90 = 4;
    recovered_1000dd90(local_ac,DAT_1002057c);
    local_90 = 5;
    recovered_10007810((int)local_ac,*DAT_10020574,*DAT_10020578);
    goto LAB_100202f0;
  }
  uVar7 = param_4[1];
  local_c4 = 0;
  pcVar10 = pcVar11 + 0x18;
  local_d8[0] = 0;
  uVar8 = uVar7 - 1;
  if (uVar7 < 2) {
    pcVar10 = (char *)0x0;
    uVar8 = 0;
  }
  if (*pcVar4 != '\x01') {
    iVar5 = *(int *)(pcVar4 + 0xc);
    if (iVar5 == 0) {
      local_108 = (int *)recovered_10007750(0x10);
      local_90 = 0xc;
      local_a8 = local_108;
      recovered_1000dd90(local_108,DAT_10020590);
    }
    else {
      uVar7 = *(uint *)(pcVar4 + 4);
      if ((-1 < (int)uVar7) && (uVar7 < *(uint *)(iVar5 + 0x1c))) {
        iVar5 = uVar7 * 0x94 + *(int *)(iVar5 + 0x18);
        if (*(char *)(iVar5 + 0x70) == '\0') {
          local_90 = 0x11;
          recovered_10015ac4(local_f0,iVar3,(int *)(pcVar4 + 8),uVar7,(int)pcVar10,uVar8);
          local_90 = 0x12;
          recovered_1001877c(local_d8,local_f0);
        }
        else {
          local_90 = 0xf;
          recovered_1001b110(local_f0,iVar3,(int)(pcVar4 + 8),iVar5,(int)pcVar10,uVar8);
          local_90 = 0x10;
          recovered_1001877c(local_d8,local_f0);
        }
        goto LAB_10020170;
      }
      local_108 = (int *)recovered_10007750(0x10);
      local_90 = 0xd;
      local_a4 = local_108;
      recovered_1000dd90(local_108,DAT_10020594);
    }
    local_90 = 0xe;
    recovered_10007810((int)local_108,*DAT_10020574,*DAT_10020578);
LAB_100202f0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1bfa0U));
    (*pcVar1)();
  }
  if (1 < uVar7) {
    local_fc[2] = 0;
    local_fc[1] = 0;
    local_fc[0] = 0;
    local_90 = 8;
    recovered_1000eab8(local_fc,uVar7 - 1);
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      local_90 = 10;
      recovered_100127c4(local_fc,pcVar10);
      pcVar10 = pcVar10 + 0x18;
    }
    local_90 = 9;
    (**(code **)(**(int **)(*(int *)(pcVar11 + 0xc) + 0x10) + 8))
              (local_f0,*(int **)(*(int *)(pcVar11 + 0xc) + 0x10),param_3,local_fc);
    local_90 = 0xb;
    recovered_1001877c(local_d8,local_f0);
    recovered_1000d37c(aiStack_e8);
    recovered_1001d318(local_fc);
    goto LAB_1002017c;
  }
  puVar9 = (uint *)*DAT_10020580;
  DataMemoryBarrier(0xb);
  if (((*puVar9 & 1) == 0) && (uVar8 = recovered_1000772c(puVar9), uVar8 != 0)) {
    puVar6 = (undefined4 *)*puVar2;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    recovered_10007724();
    recovered_1000773c(puVar9);
  }
  local_90 = 6;
  (**(code **)(**(int **)(*(int *)(pcVar11 + 0xc) + 0x10) + 8))
            (local_f0,*(int **)(*(int *)(pcVar11 + 0xc) + 0x10),param_3,*puVar2);
  local_90 = 7;
  recovered_1001877c(local_d8,local_f0);
LAB_10020170:
  recovered_1000d37c(aiStack_e8);
LAB_1002017c:
  local_90 = 0x13;
  local_f0[0] = 1;
  recovered_100180b4(local_c0,local_f0);
  local_90 = 0x14;
  recovered_100127c4(local_c0,local_d8);
  recovered_1000d37c(aiStack_d0);
  local_90 = 0x18;
  recovered_1000850c(local_b4,local_c0,extraout_r2,extraout_r3);
  recovered_1001d318(local_c0);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10020560
#undef DAT_10020564
#undef DAT_10020568
#undef DAT_1002056c
#undef DAT_10020570
#undef DAT_10020574
#undef DAT_10020578
#undef DAT_1002057c
#undef DAT_10020580
#undef DAT_10020584
#undef DAT_10020588
#undef DAT_1002058c
#undef DAT_10020590
#undef DAT_10020594
#undef local_108
#undef local_fc
#undef local_f0
#undef local_d8
#undef local_c4
#undef local_c0
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_1a0
#undef aiStack_d0
#undef aiStack_e8
#undef uStack_94
#undef auStack_68

#undef DAT_100205c8
#define DAT_100205c8 (*(int * *)(((uintptr_t)pf_module_state + 0x1c278U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c248U)
 */

undefined4 * recovered_10020598(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100205c8 + 8;
  return param_1;
}

#undef DAT_100205c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c27cU)
 */

void recovered_100205cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c280U)
 */

void recovered_100205d0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c284U)
 */

void recovered_100205d4(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10020610(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002060c
#define DAT_1002060c (*(int * *)(((uintptr_t)pf_module_state + 0x1c2bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c298U)
 */

void recovered_100205e8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002060c + 8;
  return;
}

#undef DAT_1002060c

#undef DAT_100208c0
#define DAT_100208c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c570U)))
#undef DAT_100208c4
#define DAT_100208c4 (*(int *)(((uintptr_t)pf_module_state + 0x1c574U)))
#undef DAT_100208c8
#define DAT_100208c8 (*(int *)(((uintptr_t)pf_module_state + 0x1c578U)))
#undef DAT_100208cc
#define DAT_100208cc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c57cU)))
#undef DAT_100208d0
#define DAT_100208d0 (*(int *)(((uintptr_t)pf_module_state + 0x1c580U)))
#define auStack_100 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_ec (*(int (*)[2])(frame + 36))
#define aiStack_c0 (*(int (*)[2])(frame + 80))
#define local_f4 (*(undefined4 * *)(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define local_f0 (*(undefined1 * *)(frame + 32))
#define local_e4 (*(void * (*)[9])(frame + 44))
#define local_b8 (*(void * *)(frame + 88))
#define local_b4 (*(undefined4 *)(frame + 92))
#define local_ac (*(void * (*)[3])(frame + 100))
#define local_a0 (*(void * (*)[3])(frame + 112))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(undefined4 *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c2c0U)
 */

void recovered_10020610(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  unsigned char frame[304] = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_100208c8;
  local_f4 = param_3;
  local_f0 = param_1;
  recovered_1001ee3c(DAT_100208c8,param_4,1,2);
  piVar1 = (int *)recovered_100208d4(iVar2,(int *)param_4,0);
  recovered_1000dc38(local_a0,piVar1);
  local_7c = *DAT_100208cc;
  local_78 = DAT_100208c0;
  local_70 = DAT_100208c4 + ((uintptr_t)pf_module_state+0x1c34cU);
  iVar2 = *(int *)(param_4 + 4);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  recovered_100078f0(&uStack_94);
  if (iVar2 == 2) {
    local_90 = 1;
    piVar1 = (int *)recovered_100208d4(DAT_100208c8,(int *)param_4,1);
    local_90 = 2;
    recovered_1000dc38(local_ac,piVar1);
  }
  else {
    local_90 = 3;
    recovered_1000cfe0((int *)local_ac,DAT_100208d0);
  }
  local_90 = 4;
  recovered_1000a1d4((int *)&local_b8,local_f4,(int *)local_a0,(int *)local_ac);
  local_90 = 5;
  recovered_10015204((int)local_e4,(int *)&local_b8);
  local_90 = 6;
  recovered_10015178(aiStack_c0,(int)local_e4);
  recovered_1000f590((int)local_e4);
  local_90 = 7;
  recovered_1000cfe0((int *)local_e4,DAT_100208d0);
  local_90 = 8;
  recovered_1001a68c((int)aiStack_ec,(int *)local_e4,0,aiStack_c0);
  local_90 = 9;
  recovered_1001a598(local_f0,aiStack_ec);
  recovered_1000d4cc(aiStack_ec);
  recovered_10007424(local_e4[0]);
  recovered_1000e2a4(aiStack_c0);
  local_b4 = 0;
  recovered_10007424(local_b8);
  recovered_10007424(local_ac[0]);
  recovered_10007424(local_a0[0]);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100208c0
#undef DAT_100208c4
#undef DAT_100208c8
#undef DAT_100208cc
#undef DAT_100208d0
#undef auStack_100
#undef aiStack_ec
#undef aiStack_c0
#undef local_f4
#undef uStack_94
#undef local_f0
#undef local_e4
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a0
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10020a80
#define DAT_10020a80 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c730U)))
#undef DAT_10020a84
#define DAT_10020a84 (*(int *)(((uintptr_t)pf_module_state + 0x1c734U)))
#undef DAT_10020a88
#define DAT_10020a88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c738U)))
#undef DAT_10020a8c
#define DAT_10020a8c (*(int *)(((uintptr_t)pf_module_state + 0x1c73cU)))
#undef DAT_10020a90
#define DAT_10020a90 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c740U)))
#undef DAT_10020a94
#define DAT_10020a94 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1c744U)))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define aiStack_a8 (*(int (*)[3])(frame + 40))
#define local_9c (*(int * *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_95 (*(undefined1 *)(frame + 59))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c584U)
 */

char * recovered_100208d4(int param_1,int *in_r1,uint in_r2)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  char cVar2;
  char *pcVar3;

  pcVar3 = (char *)recovered_1001f930(param_1,in_r1,in_r2);
  cVar2 = *pcVar3;
  local_7c = *DAT_10020a88;
  local_78 = DAT_10020a80;
  local_70 = DAT_10020a84 + ((uintptr_t)pf_module_state+0x1c5dcU);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (cVar2 != '\x04') {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_b4,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_a8,aiStack_b4,DAT_10020a8c);
    local_95 = 1;
    local_90 = 3;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 4;
    recovered_10007810((int)local_9c,*DAT_10020a90,*DAT_10020a94);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1c6b4U));
    (*pcVar1)();
  }
  local_90 = 0xffffffff;
  pcVar3 = recovered_100095e8(pcVar3);
  recovered_10007908(&uStack_94);
  return pcVar3;
}

#undef DAT_10020a80
#undef DAT_10020a84
#undef DAT_10020a88
#undef DAT_10020a8c
#undef DAT_10020a90
#undef DAT_10020a94
#undef auStack_c0
#undef aiStack_b4
#undef uStack_94
#undef aiStack_a8
#undef local_9c
#undef auStack_68
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10020ac8
#define DAT_10020ac8 (*(int * *)(((uintptr_t)pf_module_state + 0x1c778U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c748U)
 */

undefined4 * recovered_10020a98(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10020ac8 + 8;
  return param_1;
}

#undef DAT_10020ac8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c77cU)
 */

void recovered_10020acc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c780U)
 */

void recovered_10020ad0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c784U)
 */

void recovered_10020ad4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10020b10(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10020b0c
#define DAT_10020b0c (*(int * *)(((uintptr_t)pf_module_state + 0x1c7bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c798U)
 */

void recovered_10020ae8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10020b0c + 8;
  return;
}

#undef DAT_10020b0c

#undef DAT_10020b3c
#define DAT_10020b3c (*(int *)(((uintptr_t)pf_module_state + 0x1c7ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c7c0U)
 */

void recovered_10020b10(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_1001ee3c(DAT_10020b3c,param_4,0,0);
  recovered_10008864(param_1);
  return;
}

#undef DAT_10020b3c

#undef DAT_10020b70
#define DAT_10020b70 (*(int * *)(((uintptr_t)pf_module_state + 0x1c820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c7f0U)
 */

undefined4 * recovered_10020b40(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10020b70 + 8;
  return param_1;
}

#undef DAT_10020b70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c824U)
 */

void recovered_10020b74(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c828U)
 */

void recovered_10020b78(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c82cU)
 */

void recovered_10020b7c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_10020bb8(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10020bb4
#define DAT_10020bb4 (*(int * *)(((uintptr_t)pf_module_state + 0x1c864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c840U)
 */

void recovered_10020b90(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10020bb4 + 8;
  return;
}

#undef DAT_10020bb4

#undef DAT_10020e54
#define DAT_10020e54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cb04U)))
#undef DAT_10020e58
#define DAT_10020e58 (*(int *)(((uintptr_t)pf_module_state + 0x1cb08U)))
#undef DAT_10020e5c
#define DAT_10020e5c (*(int *)(((uintptr_t)pf_module_state + 0x1cb0cU)))
#undef DAT_10020e60
#define DAT_10020e60 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1cb10U)))
#undef DAT_10020e64
#define DAT_10020e64 (*(int *)(((uintptr_t)pf_module_state + 0x1cb14U)))
#undef DAT_10020e68
#define DAT_10020e68 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1cb18U)))
#undef DAT_10020e6c
#define DAT_10020e6c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1cb1cU)))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_b8 (*(undefined1 * *)(frame + 24))
#define local_b4 (*(int *)(frame + 28))
#define local_b0 (*(uint *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_ac (*(uint (*)[5])(frame + 36))
#define local_98 (*(int * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c868U)
 */

void recovered_10020bb8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2 = 0;
  int extraout_r2_00 = 0;
  int extraout_r2_01 = 0;
  undefined4 extraout_r3 = 0;
  undefined4 uVar6;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  char *pcVar7;

  local_b8 = param_1;
  recovered_1001ee3c(DAT_10020e5c,(int)param_4,1,1);
  pcVar7 = (char *)*param_4;
  cVar2 = *pcVar7;
  local_7c = *DAT_10020e60;
  local_78 = DAT_10020e54;
  local_ac[4] = 0;
  local_ac[3] = 0;
  local_ac[2] = 0;
  local_70 = DAT_10020e58 + ((uintptr_t)pf_module_state+0x1c8e4U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    local_90 = 5;
    local_b4 = recovered_10009844(pcVar7);
    local_90 = 6;
    recovered_1000eab8((int *)(local_ac + 2),*(uint *)(local_b4 + 4));
    uVar4 = 0;
    iVar5 = extraout_r2;
    uVar6 = extraout_r3;
    while (uVar4 < *(uint *)(local_b4 + 4)) {
      local_ac[1] = 0;
      local_90 = 8;
      local_b0 = uVar4;
      local_ac[0] = uVar4;
      recovered_10017fec((int *)(local_ac + 2),local_ac);
      iVar5 = extraout_r2_00;
      uVar6 = extraout_r3_00;
      uVar4 = local_b0 + 1;
    }
    local_90 = 7;
    recovered_1000850c(local_b8,local_ac + 2,iVar5,uVar6);
  }
  else {
    if (cVar2 != '\x06') {
      local_98 = (int *)recovered_10007750(0x10);
      local_90 = 9;
      recovered_1000dd90(local_98,DAT_10020e64);
      local_90 = 10;
      recovered_10007810((int)local_98,*DAT_10020e68,*DAT_10020e6c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1ca84U));
      (*pcVar1)();
    }
    local_90 = 1;
    piVar3 = (int *)recovered_10009aa4(pcVar7);
    iVar5 = *piVar3;
    uVar4 = piVar3[1] * 0x28;
    while (uVar4 != 0) {
      local_90 = 3;
      local_b4 = iVar5;
      local_b0 = uVar4;
      recovered_10020e70((int *)(local_ac + 2),iVar5);
      iVar5 = local_b4 + 0x28;
      uVar4 = local_b0 - 0x28;
    }
    local_90 = 2;
    recovered_10020ed8(local_ac[2],local_ac[2] + local_ac[3] * 0x18);
    local_90 = 4;
    recovered_1000850c(local_b8,local_ac + 2,extraout_r2_01,extraout_r3_01);
  }
  recovered_1001d318((int *)(local_ac + 2));
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10020e54
#undef DAT_10020e58
#undef DAT_10020e5c
#undef DAT_10020e60
#undef DAT_10020e64
#undef DAT_10020e68
#undef DAT_10020e6c
#undef auStack_c0
#undef uStack_94
#undef local_b8
#undef local_b4
#undef local_b0
#undef auStack_68
#undef local_ac
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cb20U)
 */

int recovered_10020e70(int *param_1,int *param_2)

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
    recovered_1000eab8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10008370((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


#undef DAT_1002106c
#define DAT_1002106c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1cd1cU)))
#undef DAT_10021070
#define DAT_10021070 (*(int *)(((uintptr_t)pf_module_state + 0x1cd20U)))
#undef DAT_10021074
#define DAT_10021074 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1cd24U)))
#define local_c0 (*(char * *)(frame + 32))
#define local_bc (*(char * *)(frame + 36))
#define local_98 (*(int * *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define aiStack_b0 (*(int (*)[5])(frame + 48))
#define local_6c (*(undefined1 * *)(frame + 116))
#define uStack_99 (*(undefined1 *)(frame + 71))
#define acStack_b8 (*(char (*)[8])(frame + 40))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_d0 (*(char * *)(frame + 16))
#define local_cc (*(char * *)(frame + 20))
#define local_c8 (*(char * *)(frame + 24))
#define local_c4 (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cb88U)
 */

void recovered_10020ed8(uint param_1,uint param_2)

{
  unsigned char frame[256] = {0};

  uint uVar1;
  char *pcVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  local_7c = *DAT_10021074;
  local_78 = DAT_1002106c;
  local_70 = DAT_10021070 + ((uintptr_t)pf_module_state+0x1cbd8U);
  recovered_100078f0(&uStack_94);
  local_d0 = (char *)param_2;
  local_c8 = (char *)param_1;
  if (param_1 != param_2) {
    local_98 = aiStack_b0;
    while (pcVar2 = (char *)(param_1 + 0x18), pcVar2 < local_d0) {
      local_90 = 0xffffffff;
      local_cc = pcVar2;
      recovered_1000eb54(acStack_b8,pcVar2);
      while (pcVar2 = (char *)(param_1 + 0x18), local_c8 < pcVar2) {
        local_90 = 1;
        local_c0 = pcVar2;
        local_bc = (char *)param_1;
        uVar1 = recovered_10021078(&uStack_99,acStack_b8,(char *)param_1);
        pcVar2 = local_c0;
        if (uVar1 == 0) break;
        local_90 = 2;
        local_c4 = local_bc + -0x18;
        recovered_1001877c(local_c0,local_bc);
        param_1 = (uint)local_c4;
      }
      local_90 = 3;
      recovered_1001877c(pcVar2,acStack_b8);
      recovered_1000d37c(local_98);
      param_1 = (uint)local_cc;
    }
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_1002106c
#undef DAT_10021070
#undef DAT_10021074
#undef local_c0
#undef local_bc
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef aiStack_b0
#undef local_6c
#undef uStack_99
#undef acStack_b8
#undef uStack_94
#undef auStack_68
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cd28U)
 */

uint recovered_10021078(undefined4 param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int *piVar2;
  uint uVar3;

  piVar1 = (int *)recovered_100095e8(param_2);
  piVar2 = (int *)recovered_100095e8(param_3);
  uVar3 = recovered_1001ac80(piVar1,piVar2);
  return uVar3;
}


#undef DAT_100210d8
#define DAT_100210d8 (*(int * *)(((uintptr_t)pf_module_state + 0x1cd88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cd58U)
 */

undefined4 * recovered_100210a8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100210d8 + 8;
  return param_1;
}

#undef DAT_100210d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cd8cU)
 */

void recovered_100210dc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cd90U)
 */

void recovered_100210e0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cd94U)
 */

void recovered_100210e4(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_10021120(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002111c
#define DAT_1002111c (*(int * *)(((uintptr_t)pf_module_state + 0x1cdccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cda8U)
 */

void recovered_100210f8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002111c + 8;
  return;
}

#undef DAT_1002111c

#undef DAT_10021374
#define DAT_10021374 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d024U)))
#undef DAT_10021378
#define DAT_10021378 (*(int *)(((uintptr_t)pf_module_state + 0x1d028U)))
#undef DAT_1002137c
#define DAT_1002137c (*(int *)(((uintptr_t)pf_module_state + 0x1d02cU)))
#undef DAT_10021380
#define DAT_10021380 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d030U)))
#undef DAT_10021384
#define DAT_10021384 (*(int *)(((uintptr_t)pf_module_state + 0x1d034U)))
#undef DAT_10021388
#define DAT_10021388 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d038U)))
#undef DAT_1002138c
#define DAT_1002138c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d03cU)))
#undef DAT_10021390
#define DAT_10021390 (*(int *)(((uintptr_t)pf_module_state + 0x1d040U)))
#undef DAT_10021394
#define DAT_10021394 (*(int *)(((uintptr_t)pf_module_state + 0x1d044U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_a0 (*(int * *)(frame + 16))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cdd0U)
 */

void recovered_10021120(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;

  recovered_1001ee3c(DAT_1002137c,(int)param_4,3,3);
  pcVar6 = (char *)*param_4;
  pbVar7 = (byte *)(pcVar6 + 0x18);
  cVar2 = *pcVar6;
  local_7c = *DAT_10021380;
  local_78 = DAT_10021374;
  local_70 = DAT_10021378 + ((uintptr_t)pf_module_state+0x1ce40U);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x06') {
    local_90 = 0xffffffff;
    piVar4 = (int *)recovered_10009974(pcVar6);
    local_90 = 0xffffffff;
    puVar5 = (undefined1 *)recovered_1001afd8(piVar4,(char *)pbVar7);
LAB_10021234:
    local_90 = 0xffffffff;
    recovered_1000e08c(puVar5,pcVar6 + 0x30);
    local_90 = 0xffffffff;
    recovered_1001282c(param_1,pcVar6 + 0x30);
    recovered_10007908(&uStack_94);
    return;
  }
  if (cVar2 == '\x05') {
    if (*pbVar7 - 1 < 3) {
      local_90 = 0xffffffff;
      uVar8 = recovered_100091a8((char *)pbVar7);
      uVar3 = (uint)uVar8;
      if (-1 < (longlong)uVar8) {
        local_90 = 0xffffffff;
        piVar4 = (int *)recovered_10009714(pcVar6);
        if ((uint)piVar4[1] <= uVar3) {
          local_90 = 0xffffffff;
          recovered_1000ed00(piVar4,uVar3 + 1);
        }
        puVar5 = (undefined1 *)(*piVar4 + uVar3 * 0x18);
        goto LAB_10021234;
      }
      local_9c = (int *)recovered_10007750(0x10);
      local_90 = 2;
      recovered_1000932c(local_9c,DAT_10021390);
      piVar4 = local_9c;
    }
    else {
      local_a0 = (int *)recovered_10007750(0x10);
      local_90 = 1;
      recovered_1000932c(local_a0,DAT_10021384);
      piVar4 = local_a0;
    }
  }
  else {
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 3;
    recovered_1000932c(local_98,DAT_10021394);
    piVar4 = local_98;
  }
  local_90 = 0xffffffff;
  recovered_10007810((int)piVar4,*DAT_10021388,*DAT_1002138c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    piVar4 = local_a0;
    break;
  case 1:
    piVar4 = local_9c;
    break;
  case 2:
    piVar4 = local_98;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1cfc4U));
    (*pcVar1)();
  }
  recovered_1000779c((int)piVar4);
  local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  recovered_10007950(local_8c);
}

#undef DAT_10021374
#undef DAT_10021378
#undef DAT_1002137c
#undef DAT_10021380
#undef DAT_10021384
#undef DAT_10021388
#undef DAT_1002138c
#undef DAT_10021390
#undef DAT_10021394
#undef uStack_94
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_100213c8
#define DAT_100213c8 (*(int * *)(((uintptr_t)pf_module_state + 0x1d078U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d048U)
 */

undefined4 * recovered_10021398(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100213c8 + 8;
  return param_1;
}

#undef DAT_100213c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d07cU)
 */

void recovered_100213cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d080U)
 */

void recovered_100213d0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d084U)
 */

void recovered_100213d4(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_10021410(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002140c
#define DAT_1002140c (*(int * *)(((uintptr_t)pf_module_state + 0x1d0bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d098U)
 */

void recovered_100213e8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002140c + 8;
  return;
}

#undef DAT_1002140c

#undef DAT_10021604
#define DAT_10021604 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d2b4U)))
#undef DAT_10021608
#define DAT_10021608 (*(int *)(((uintptr_t)pf_module_state + 0x1d2b8U)))
#undef DAT_1002160c
#define DAT_1002160c (*(int *)(((uintptr_t)pf_module_state + 0x1d2bcU)))
#undef DAT_10021610
#define DAT_10021610 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d2c0U)))
#undef DAT_10021614
#define DAT_10021614 (*(int *)(((uintptr_t)pf_module_state + 0x1d2c4U)))
#undef DAT_10021618
#define DAT_10021618 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d2c8U)))
#undef DAT_1002161c
#define DAT_1002161c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d2ccU)))
#undef DAT_10021620
#define DAT_10021620 (*(int *)(((uintptr_t)pf_module_state + 0x1d2d0U)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d0c0U)
 */

void recovered_10021410(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  ulonglong uVar5;

  recovered_1001ee3c(DAT_1002160c,(int)param_4,2,3);
  pcVar4 = (char *)*param_4;
  cVar2 = *pcVar4;
  local_7c = *DAT_10021610;
  local_78 = DAT_10021604;
  local_70 = DAT_10021608 + ((uintptr_t)pf_module_state+0x1d12cU);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  if (cVar2 != '\x05') {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_9c,DAT_10021614);
    piVar3 = local_9c;
LAB_10021590:
    local_90 = 0xffffffff;
    recovered_10007810((int)piVar3,*DAT_10021618,*DAT_1002161c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uintptr_t)(local_90)) {
    case 0:
      piVar3 = local_9c;
      break;
    case 1:
      piVar3 = local_98;
      break;
    default:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1d268U));
      (*pcVar1)();
    }
    recovered_1000779c((int)piVar3);
    local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    recovered_10007950(local_8c);
  }
  local_90 = 0xffffffff;
  piVar3 = (int *)recovered_10009714(pcVar4);
  if (param_4[1] == 2) {
    local_90 = 0xffffffff;
    recovered_100127c4(piVar3,(undefined1 *)(*param_4 + 0x18));
  }
  else {
    local_90 = 0xffffffff;
    uVar5 = recovered_1001f650(DAT_1002160c,param_4,1);
    if (((longlong)uVar5 < 0) ||
       ((uint)((uint)uVar5 <= (uint)piVar3[1]) <= (uint)-(int)(uVar5 >> 0x20))) {
      local_98 = (int *)recovered_10007750(0x10);
      local_90 = 2;
      recovered_1000932c(local_98,DAT_10021620);
      piVar3 = local_98;
      goto LAB_10021590;
    }
    local_90 = 0xffffffff;
    recovered_10021624(piVar3,*piVar3 + (uint)uVar5 * 0x18,(undefined1 *)(*param_4 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10021604
#undef DAT_10021608
#undef DAT_1002160c
#undef DAT_10021610
#undef DAT_10021614
#undef DAT_10021618
#undef DAT_1002161c
#undef DAT_10021620
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_8c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d2d4U)
 */

int recovered_10021624(int *param_1,int param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;

  if (*param_1 == 0) {
    uVar2 = param_1[1];
    uVar1 = uVar2;
  }
  else {
    uVar1 = recovered_100043f4(param_2 - *param_1,0x18);
    uVar2 = param_1[1];
  }
  if (uVar2 == param_1[2]) {
    uVar4 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar4 = 4;
    }
    recovered_1000eab8(param_1,uVar4);
  }
  uVar2 = param_1[1];
  iVar5 = uVar2 * 0x18;
  for (; uVar1 < uVar2; uVar2 = uVar2 - 1) {
    puVar3 = (undefined1 *)(*param_1 + iVar5);
    recovered_1000eb54(puVar3,puVar3 + -0x18);
    recovered_1000d37c((int *)(*param_1 + iVar5 + -0x10));
    iVar5 = iVar5 + -0x18;
  }
  recovered_1001282c((undefined1 *)(*param_1 + uVar1 * 0x18),param_3);
  iVar5 = *param_1;
  param_1[1] = param_1[1] + 1;
  if (iVar5 != 0) {
    iVar5 = iVar5 + uVar1 * 0x18;
  }
  return iVar5;
}


#undef DAT_10021724
#define DAT_10021724 (*(int * *)(((uintptr_t)pf_module_state + 0x1d3d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d3a4U)
 */

undefined4 * recovered_100216f4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10021724 + 8;
  return param_1;
}

#undef DAT_10021724

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d3d8U)
 */

void recovered_10021728(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d3dcU)
 */

void recovered_1002172c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d3e0U)
 */

void recovered_10021730(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_1002176c(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10021768
#define DAT_10021768 (*(int * *)(((uintptr_t)pf_module_state + 0x1d418U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d3f4U)
 */

void recovered_10021744(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10021768 + 8;
  return;
}

#undef DAT_10021768

#undef DAT_100219a0
#define DAT_100219a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d650U)))
#undef DAT_100219a4
#define DAT_100219a4 (*(int *)(((uintptr_t)pf_module_state + 0x1d654U)))
#undef DAT_100219a8
#define DAT_100219a8 (*(int *)(((uintptr_t)pf_module_state + 0x1d658U)))
#undef DAT_100219ac
#define DAT_100219ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d65cU)))
#undef DAT_100219b0
#define DAT_100219b0 (*(int *)(((uintptr_t)pf_module_state + 0x1d660U)))
#undef DAT_100219b4
#define DAT_100219b4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d664U)))
#undef DAT_100219b8
#define DAT_100219b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d668U)))
#undef DAT_100219bc
#define DAT_100219bc (*(int *)(((uintptr_t)pf_module_state + 0x1d66cU)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(undefined1 * *)(frame + 16))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d41cU)
 */

void recovered_1002176c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r3 = 0;
  char *pcVar7;
  ulonglong uVar8;

  local_a0 = param_1;
  recovered_1001ee3c(DAT_100219a8,(int)param_4,1,2);
  pcVar7 = (char *)*param_4;
  cVar2 = *pcVar7;
  local_7c = *DAT_100219ac;
  local_78 = DAT_100219a0;
  local_70 = DAT_100219a4 + ((uintptr_t)pf_module_state+0x1d48cU);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    local_90 = 0xffffffff;
    piVar3 = (int *)recovered_10009714(pcVar7);
    uVar6 = piVar3[1];
    if (uVar6 == 0) {
      *local_a0 = 0;
      *(undefined4 *)(local_a0 + 0x14) = 0;
      goto LAB_100218a8;
    }
    if (param_4[1] == 2) {
      local_90 = 0xffffffff;
      uVar8 = recovered_1001f650(DAT_100219a8,param_4,1);
      if (-1 < (longlong)uVar8) {
        uVar6 = piVar3[1];
        goto LAB_10021864;
      }
    }
    else {
      uVar8 = (ulonglong)(uVar6 - 1);
LAB_10021864:
      uVar5 = (uint)(uVar8 >> 0x20);
      uVar4 = (uint)uVar8;
      if (uVar5 == 0 && (uVar6 <= uVar4) <= uVar5) {
        local_90 = 0xffffffff;
        recovered_1001282c(local_a0,(undefined1 *)(*piVar3 + uVar4 * 0x18));
        local_90 = 3;
        recovered_100219c0(piVar3,*piVar3 + uVar4 * 0x18,extraout_r2,extraout_r3);
LAB_100218a8:
        recovered_10007908(&uStack_94);
        return;
      }
    }
    local_98 = (int *)recovered_10007750(0x10);
    local_90 = 2;
    recovered_1000932c(local_98,DAT_100219bc);
    piVar3 = local_98;
  }
  else {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000932c(local_9c,DAT_100219b0);
    piVar3 = local_9c;
  }
  local_90 = 0xffffffff;
  recovered_10007810((int)piVar3,*DAT_100219b4,*DAT_100219b8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    piVar3 = local_9c;
    break;
  case 1:
    piVar3 = local_98;
    break;
  case 2:
    recovered_1000d37c((int *)(local_a0 + 8));
    goto LAB_10021990;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1d5e8U));
    (*pcVar1)();
  }
  recovered_1000779c((int)piVar3);
LAB_10021990:
  local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  recovered_10007950(local_8c);
}

#undef DAT_100219a0
#undef DAT_100219a4
#undef DAT_100219a8
#undef DAT_100219ac
#undef DAT_100219b0
#undef DAT_100219b4
#undef DAT_100219b8
#undef DAT_100219bc
#undef uStack_94
#undef auStack_68
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d670U)
 */

void recovered_100219c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  recovered_100219c8(param_1,param_2,param_2 + 0x18,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d678U)
 */

int recovered_100219c8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar4 = *param_1;
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100043f4(param_2 - iVar4,0x18);
    uVar2 = recovered_100043f4(param_3 - iVar4,0x18);
    if (uVar1 < uVar2) {
      iVar6 = uVar2 - uVar1;
      iVar5 = uVar2 * 0x18;
      iVar3 = uVar1 * 0x18;
      for (; uVar1 = param_1[1], uVar2 < uVar1; uVar2 = uVar2 + 1) {
        recovered_1001877c((undefined1 *)(*param_1 + iVar3),(undefined1 *)(*param_1 + iVar5));
        iVar5 = iVar5 + 0x18;
        iVar3 = iVar3 + 0x18;
      }
      iVar5 = uVar1 * 0x18 + -0x10;
      uVar2 = uVar1;
      while (uVar1 = uVar1 - iVar6, uVar1 < uVar2) {
        recovered_1000d37c((int *)(*param_1 + iVar5));
        iVar5 = iVar5 + -0x18;
        uVar2 = uVar2 - 1;
        uVar1 = param_1[1];
      }
      param_1[1] = uVar1;
      if (*param_1 == 0) {
        return 0;
      }
      return *param_1 + (param_2 - iVar4);
    }
  }
  if (iVar4 != 0) {
    iVar4 = iVar4 + uVar1 * 0x18;
  }
  return iVar4;
}


#undef DAT_10021af8
#define DAT_10021af8 (*(int * *)(((uintptr_t)pf_module_state + 0x1d7a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d778U)
 */

undefined4 * recovered_10021ac8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10021af8 + 8;
  return param_1;
}

#undef DAT_10021af8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d7acU)
 */

void recovered_10021afc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d7b0U)
 */

void recovered_10021b00(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d7b4U)
 */

void recovered_10021b04(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_10021b40(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10021b3c
#define DAT_10021b3c (*(int * *)(((uintptr_t)pf_module_state + 0x1d7ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d7c8U)
 */

void recovered_10021b18(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10021b3c + 8;
  return;
}

#undef DAT_10021b3c

#undef DAT_10021c98
#define DAT_10021c98 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d948U)))
#undef DAT_10021c9c
#define DAT_10021c9c (*(int *)(((uintptr_t)pf_module_state + 0x1d94cU)))
#undef DAT_10021ca0
#define DAT_10021ca0 (*(int *)(((uintptr_t)pf_module_state + 0x1d950U)))
#undef DAT_10021ca4
#define DAT_10021ca4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d954U)))
#undef DAT_10021ca8
#define DAT_10021ca8 (*(int *)(((uintptr_t)pf_module_state + 0x1d958U)))
#undef DAT_10021cac
#define DAT_10021cac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d95cU)))
#undef DAT_10021cb0
#define DAT_10021cb0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1d960U)))
#define local_8c (*(undefined4 * *)(frame + 36))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d7f0U)
 */

/* WARNING: Exceeded maximum restarts with more pending */

void recovered_10021b40(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[208] = {0};

  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;

  recovered_1001ee3c(DAT_10021ca0,(int)param_4,1,1);
  pcVar4 = (char *)*param_4;
  cVar2 = *pcVar4;
  local_7c = *DAT_10021ca4;
  local_78 = DAT_10021c98;
  local_70 = DAT_10021c9c + ((uintptr_t)pf_module_state+0x1d860U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    local_90 = 0xffffffff;
    puVar3 = (undefined4 *)recovered_10009714(pcVar4);
    local_90 = 0xffffffff;
    recovered_10021cb4((byte *)*puVar3,(byte *)*puVar3 + puVar3[1] * 0x18);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *param_1 = 0;
    recovered_10007908(&uStack_94);
    return;
  }
  local_98 = (int *)recovered_10007750(0x10);
  local_90 = 1;
  recovered_1000932c(local_98,DAT_10021ca8);
  local_90 = 0xffffffff;
  recovered_10007810((int)local_98,*DAT_10021cac,*DAT_10021cb0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    recovered_1000779c((int)local_98);
    local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    recovered_10007950(local_8c);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1d914U));
    (*pcVar1)();
  }
}

#undef DAT_10021c98
#undef DAT_10021c9c
#undef DAT_10021ca0
#undef DAT_10021ca4
#undef DAT_10021ca8
#undef DAT_10021cac
#undef DAT_10021cb0
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_98
#undef local_90

#undef DAT_10021e48
#define DAT_10021e48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1daf8U)))
#undef DAT_10021e4c
#define DAT_10021e4c (*(int *)(((uintptr_t)pf_module_state + 0x1dafcU)))
#undef DAT_10021e50
#define DAT_10021e50 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1db00U)))
#define local_d0 (*(byte * *)(frame + 16))
#define local_cc (*(byte * *)(frame + 20))
#define local_c8 (*(byte * *)(frame + 24))
#define local_c4 (*(byte * *)(frame + 28))
#define local_c0 (*(byte * *)(frame + 32))
#define local_bc (*(byte * *)(frame + 36))
#define local_98 (*(int * *)(frame + 72))
#define aiStack_b0 (*(int (*)[5])(frame + 48))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define uStack_99 (*(undefined1 *)(frame + 71))
#define local_78 (*(undefined4 *)(frame + 104))
#define abStack_b8 (*(byte (*)[8])(frame + 40))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d964U)
 */

void recovered_10021cb4(byte *param_1,byte *param_2)

{
  unsigned char frame[256] = {0};

  uint uVar1;
  byte *pbVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  local_7c = *DAT_10021e50;
  local_78 = DAT_10021e48;
  local_70 = DAT_10021e4c + ((uintptr_t)pf_module_state+0x1d9b4U);
  recovered_100078f0(&uStack_94);
  local_d0 = param_2;
  local_c8 = param_1;
  if (param_1 != param_2) {
    local_98 = aiStack_b0;
    while (pbVar2 = param_1 + 0x18, pbVar2 < local_d0) {
      local_90 = 0xffffffff;
      local_cc = pbVar2;
      recovered_1000eb54(abStack_b8,pbVar2);
      while (pbVar2 = param_1 + 0x18, local_c8 < pbVar2) {
        local_90 = 1;
        local_c0 = pbVar2;
        local_bc = param_1;
        uVar1 = recovered_10021e54(&uStack_99,abStack_b8,param_1);
        pbVar2 = local_c0;
        if (uVar1 == 0) break;
        local_90 = 2;
        local_c4 = local_bc + -0x18;
        recovered_1001877c(local_c0,local_bc);
        param_1 = local_c4;
      }
      local_90 = 3;
      recovered_1001877c(pbVar2,abStack_b8);
      recovered_1000d37c(local_98);
      param_1 = local_cc;
    }
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10021e48
#undef DAT_10021e4c
#undef DAT_10021e50
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_98
#undef aiStack_b0
#undef local_90
#undef local_7c
#undef uStack_99
#undef local_78
#undef abStack_b8
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10021fb4
#define DAT_10021fb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dc64U)))
#undef DAT_10021fb8
#define DAT_10021fb8 (*(int *)(((uintptr_t)pf_module_state + 0x1dc68U)))
#undef DAT_10021fbc
#define DAT_10021fbc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1dc6cU)))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_ac (*(void * (*)[3])(frame + 20))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1db04U)
 */

uint recovered_10021e54(undefined4 param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[224] = {0};

  byte bVar1;
  uint uVar2;
  double dVar3;
  double dVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10021fbc;
  local_78 = DAT_10021fb4;
  local_70 = DAT_10021fb8 + ((uintptr_t)pf_module_state+0x1db54U);
  bVar1 = *param_2;
  recovered_100078f0(&uStack_94);
  if ((bVar1 - 1 < 3) && (*param_3 - 1 < 3)) {
    local_90 = 0xffffffff;
    dVar3 = recovered_10009334(param_2);
    local_90 = 0xffffffff;
    dVar4 = recovered_10009334(param_3);
    uVar2 = (uint)(pf_bits_double(((pf_double_bits(dVar3) & 0xffffffff00000000) +
                           (pf_double_bits(dVar3) & 0xffffffff))) <
                  pf_bits_double(((pf_double_bits(dVar4) & 0xffffffff00000000) + (pf_double_bits(dVar4) & 0xffffffff)
                          )));
  }
  else {
    local_90 = 0xffffffff;
    recovered_100089a4((int *)local_a0,param_2);
    local_90 = 1;
    recovered_100089a4((int *)local_ac,param_3);
    uVar2 = recovered_1001ac80((int *)local_a0,(int *)local_ac);
    recovered_10007424(local_ac[0]);
    recovered_10007424(local_a0[0]);
  }
  recovered_10007908(&uStack_94);
  return uVar2;
}

#undef DAT_10021fb4
#undef DAT_10021fb8
#undef DAT_10021fbc
#undef uStack_94
#undef auStack_b0
#undef auStack_68
#undef local_ac
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10021ff0
#define DAT_10021ff0 (*(int * *)(((uintptr_t)pf_module_state + 0x1dca0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dc70U)
 */

undefined4 * recovered_10021fc0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10021ff0 + 8;
  return param_1;
}

#undef DAT_10021ff0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dca4U)
 */

void recovered_10021ff4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dca8U)
 */

void recovered_10021ff8(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dcacU)
 */

void recovered_10021ffc(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022038(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022034
#define DAT_10022034 (*(int * *)(((uintptr_t)pf_module_state + 0x1dce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dcc0U)
 */

void recovered_10022010(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022034 + 8;
  return;
}

#undef DAT_10022034

#undef DAT_100222c4
#define DAT_100222c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1df74U)))
#undef DAT_100222c8
#define DAT_100222c8 (*(int *)(((uintptr_t)pf_module_state + 0x1df78U)))
#undef DAT_100222cc
#define DAT_100222cc (*(int *)(((uintptr_t)pf_module_state + 0x1df7cU)))
#undef DAT_100222d0
#define DAT_100222d0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1df80U)))
#undef DAT_100222d4
#define DAT_100222d4 (*(int *)(((uintptr_t)pf_module_state + 0x1df84U)))
#undef DAT_100222d8
#define DAT_100222d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1df88U)))
#undef DAT_100222dc
#define DAT_100222dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1df8cU)))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_cc (*(undefined1 * *)(frame + 20))
#define local_c8 (*(uint *)(frame + 24))
#define local_c4 (*(int * *)(frame + 28))
#define local_c0 (*(int *)(frame + 32))
#define local_bc (*(void * (*)[3])(frame + 36))
#define auStack_d0 (*(undefined1 (*)[4])(frame + 16))
#define local_b0 (*(void * *)(frame + 48))
#define local_ac (*(undefined4 *)(frame + 52))
#define local_a8 (*(undefined4 *)(frame + 56))
#define local_a4 (*(void * *)(frame + 60))
#define local_a0 (*(undefined4 *)(frame + 64))
#define local_9c (*(undefined4 *)(frame + 68))
#define local_98 (*(int * *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_8c (*(undefined4 * *)(frame + 84))
#define local_7c (*(undefined4 *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dce8U)
 */

void recovered_10022038(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4)

{
  unsigned char frame[256] = {0};

  code *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;

  recovered_1001ee3c(DAT_100222cc,(int)param_4,1,2);
  pcVar5 = (char *)*param_4;
  cVar2 = *pcVar5;
  local_7c = *DAT_100222d0;
  local_78 = DAT_100222c4;
  local_70 = DAT_100222c8 + ((uintptr_t)pf_module_state+0x1dd58U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  recovered_100078f0(&uStack_94);
  if (cVar2 == '\x05') {
    local_cc = param_1;
    if (param_4[1] == 2) {
      local_90 = 0xffffffff;
      piVar3 = (int *)recovered_100208d4(DAT_100222cc,param_4,1);
      local_90 = 0xffffffff;
      recovered_1000dc38(&local_a4,piVar3);
    }
    else {
      local_9c = 0;
      local_a0 = 0;
      local_a4 = (void *)0x0;
    }
    local_90 = 2;
    local_c4 = (int *)recovered_10009844(pcVar5);
    local_a8 = 0;
    local_ac = 0;
    local_c0 = 0;
    local_b0 = (void *)0x0;
    uVar4 = 0;
    while (uVar4 < (uint)local_c4[1]) {
      local_c8 = uVar4;
      if (uVar4 != 0) {
        local_90 = 3;
        recovered_10008fbc((int *)&local_b0,(int *)&local_a4);
      }
      local_90 = 4;
      recovered_100089a4((int *)local_bc,(undefined1 *)(*local_c4 + local_c0));
      local_90 = 5;
      recovered_10008fbc((int *)&local_b0,(int *)local_bc);
      recovered_10007424(local_bc[0]);
      local_c0 = local_c0 + 0x18;
      uVar4 = local_c8 + 1;
    }
    recovered_10008394(local_cc,&local_b0);
    recovered_10007424(local_b0);
    recovered_10007424(local_a4);
    recovered_10007908(&uStack_94);
    return;
  }
  local_98 = (int *)recovered_10007750(0x10);
  local_90 = 1;
  recovered_1000932c(local_98,DAT_100222d4);
  local_90 = 0xffffffff;
  recovered_10007810((int)local_98,*DAT_100222d8,*DAT_100222dc);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uintptr_t)(local_90)) {
  case 0:
    recovered_1000779c((int)local_98);
    goto LAB_100222b4;
  case 1:
    goto LAB_100222ac;
  case 2:
  case 3:
    break;
  case 4:
    recovered_10007424(local_bc[0]);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1deecU));
    (*pcVar1)();
  }
  recovered_10007424(local_b0);
LAB_100222ac:
  recovered_10007424(local_a4);
LAB_100222b4:
  local_90 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  recovered_10007950(local_8c);
}

#undef DAT_100222c4
#undef DAT_100222c8
#undef DAT_100222cc
#undef DAT_100222d0
#undef DAT_100222d4
#undef DAT_100222d8
#undef DAT_100222dc
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef auStack_d0
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_8c
#undef local_7c

#undef DAT_10022310
#define DAT_10022310 (*(int * *)(((uintptr_t)pf_module_state + 0x1dfc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df90U)
 */

undefined4 * recovered_100222e0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022310 + 8;
  return param_1;
}

#undef DAT_10022310

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dfc4U)
 */

void recovered_10022314(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dfc8U)
 */

void recovered_10022318(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dfccU)
 */

void recovered_1002231c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022358(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022354
#define DAT_10022354 (*(int * *)(((uintptr_t)pf_module_state + 0x1e004U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1dfe0U)
 */

void recovered_10022330(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022354 + 8;
  return;
}

#undef DAT_10022354

#undef DAT_100223a8
#define DAT_100223a8 (*(int *)(((uintptr_t)pf_module_state + 0x1e058U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e008U)
 */

void recovered_10022358(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_100223a8;
  recovered_1001ee3c(DAT_100223a8,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_100053fc(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  recovered_1001f588(param_1,pf_bits_double(CONCAT44(extraout_r1,extraout_r0)));
  return;
}

#undef DAT_100223a8

#undef DAT_10022560
#define DAT_10022560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1e210U)))
#undef DAT_10022564
#define DAT_10022564 (*(int *)(((uintptr_t)pf_module_state + 0x1e214U)))
#undef DAT_10022568
#define DAT_10022568 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1e218U)))
#undef DAT_1002256c
#define DAT_1002256c (*(int *)(((uintptr_t)pf_module_state + 0x1e21cU)))
#undef DAT_10022570
#define DAT_10022570 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1e220U)))
#undef DAT_10022574
#define DAT_10022574 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1e224U)))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define aiStack_b4 (*(int (*)[3])(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define aiStack_a8 (*(int (*)[3])(frame + 40))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_9c (*(int * *)(frame + 52))
#define local_95 (*(undefined1 *)(frame + 59))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e05cU)
 */

undefined4 recovered_100223ac(int param_1,int *in_r1,uint in_r2)

{
  unsigned char frame[240] = {0};

  code *pcVar1;
  byte bVar2;
  byte *value;
  double dVar3;

  value = (byte *)recovered_1001f930(param_1,in_r1,in_r2);
  bVar2 = *value;
  local_7c = *DAT_10022568;
  local_78 = DAT_10022560;
  local_70 = DAT_10022564 + ((uintptr_t)pf_module_state+0x1e0b4U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  if (2 < bVar2 - 1) {
    local_9c = (int *)recovered_10007750(0x10);
    local_90 = 1;
    recovered_1000cfe0(aiStack_b4,param_1);
    local_90 = 2;
    recovered_10008fd8(aiStack_a8,aiStack_b4,DAT_1002256c);
    local_95 = 1;
    local_90 = 3;
    recovered_1000fb68(local_9c,aiStack_a8);
    local_95 = 0;
    local_90 = 4;
    recovered_10007810((int)local_9c,*DAT_10022570,*DAT_10022574);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x1e194U));
    (*pcVar1)();
  }
  local_90 = 0xffffffff;
  dVar3 = recovered_10009334(value);
  recovered_10007908(&uStack_94);
  return SUB84(dVar3,0);
}

#undef DAT_10022560
#undef DAT_10022564
#undef DAT_10022568
#undef DAT_1002256c
#undef DAT_10022570
#undef DAT_10022574
#undef auStack_c0
#undef aiStack_b4
#undef uStack_94
#undef aiStack_a8
#undef auStack_68
#undef local_9c
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_100225a8
#define DAT_100225a8 (*(int * *)(((uintptr_t)pf_module_state + 0x1e258U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e228U)
 */

undefined4 * recovered_10022578(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100225a8 + 8;
  return param_1;
}

#undef DAT_100225a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e25cU)
 */

void recovered_100225ac(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e260U)
 */

void recovered_100225b0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef auStack_a0
#undef uStack_94
#undef uStack_78
#undef puStack_74
#undef uStack_90
#undef uStack_7c
#undef auStack_68
#undef iStack_70
#undef puStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e264U)
 */

void recovered_100225b4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_100225f0(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_100225ec
#define DAT_100225ec (*(int * *)(((uintptr_t)pf_module_state + 0x1e29cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e278U)
 */

void recovered_100225c8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_100225ec + 8;
  return;
}

#undef DAT_100225ec

#undef DAT_10022640
#define DAT_10022640 (*(int *)(((uintptr_t)pf_module_state + 0x1e2f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e2a0U)
 */

void recovered_100225f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_10022640;
  recovered_1001ee3c(DAT_10022640,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_1000542c(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  recovered_1001f588(param_1,pf_bits_double(CONCAT44(extraout_r1,extraout_r0)));
  return;
}

#undef DAT_10022640

#undef DAT_10022674
#define DAT_10022674 (*(int * *)(((uintptr_t)pf_module_state + 0x1e324U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e2f4U)
 */

undefined4 * recovered_10022644(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022674 + 8;
  return param_1;
}

#undef DAT_10022674

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e328U)
 */

void recovered_10022678(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e32cU)
 */

void recovered_1002267c(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e330U)
 */

void recovered_10022680(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_100226bc(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_100226b8
#define DAT_100226b8 (*(int * *)(((uintptr_t)pf_module_state + 0x1e368U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e344U)
 */

void recovered_10022694(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_100226b8 + 8;
  return;
}

#undef DAT_100226b8

#undef DAT_1002270c
#define DAT_1002270c (*(int *)(((uintptr_t)pf_module_state + 0x1e3bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e36cU)
 */

void recovered_100226bc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_1002270c;
  recovered_1001ee3c(DAT_1002270c,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_100056c8(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  recovered_1001f588(param_1,pf_bits_double(CONCAT44(extraout_r1,extraout_r0)));
  return;
}

#undef DAT_1002270c

#undef DAT_10022740
#define DAT_10022740 (*(int * *)(((uintptr_t)pf_module_state + 0x1e3f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e3c0U)
 */

undefined4 * recovered_10022710(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022740 + 8;
  return param_1;
}

#undef DAT_10022740

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e3f4U)
 */

void recovered_10022744(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e3f8U)
 */

void recovered_10022748(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e3fcU)
 */

void recovered_1002274c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022788(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022784
#define DAT_10022784 (*(int * *)(((uintptr_t)pf_module_state + 0x1e434U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e410U)
 */

void recovered_10022760(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022784 + 8;
  return;
}

#undef DAT_10022784

#undef DAT_10022818
#define DAT_10022818 (*(int *)(((uintptr_t)pf_module_state + 0x1e4c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e438U)
 */

void recovered_10022788(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint in_r2;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;
  undefined4 extraout_s1_00 = 0;
  double in_d0;

  iVar1 = DAT_10022818;
  in_r2 = 1;
  recovered_1001ee3c(DAT_10022818,param_4,1,0xffffffff);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  in_d0 = pf_bits_double(CONCAT44(extraout_s1,uVar2));
  while (in_r2 < *(uint *)(param_4 + 4)) {
    uVar2 = recovered_100223ac(iVar1,(int *)param_4,in_r2);
    in_r2 = in_r2 + 1;
    if (pf_bits_double(CONCAT44(extraout_s1_00,uVar2)) < in_d0) {
      in_d0 = pf_bits_double(CONCAT44(extraout_s1_00,uVar2));
    }
  }
  recovered_1001f588(param_1,in_d0);
  return;
}

#undef DAT_10022818

#undef DAT_1002284c
#define DAT_1002284c (*(int * *)(((uintptr_t)pf_module_state + 0x1e4fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e4ccU)
 */

undefined4 * recovered_1002281c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1002284c + 8;
  return param_1;
}

#undef DAT_1002284c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e500U)
 */

void recovered_10022850(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e504U)
 */

void recovered_10022854(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e508U)
 */

void recovered_10022858(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022894(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022890
#define DAT_10022890 (*(int * *)(((uintptr_t)pf_module_state + 0x1e540U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e51cU)
 */

void recovered_1002286c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022890 + 8;
  return;
}

#undef DAT_10022890

#undef DAT_10022924
#define DAT_10022924 (*(int *)(((uintptr_t)pf_module_state + 0x1e5d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e544U)
 */

void recovered_10022894(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint in_r2;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;
  undefined4 extraout_s1_00 = 0;
  double in_d0;

  iVar1 = DAT_10022924;
  in_r2 = 1;
  recovered_1001ee3c(DAT_10022924,param_4,1,0xffffffff);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  in_d0 = pf_bits_double(CONCAT44(extraout_s1,uVar2));
  while (in_r2 < *(uint *)(param_4 + 4)) {
    uVar2 = recovered_100223ac(iVar1,(int *)param_4,in_r2);
    in_r2 = in_r2 + 1;
    if (in_d0 < pf_bits_double(CONCAT44(extraout_s1_00,uVar2))) {
      in_d0 = pf_bits_double(CONCAT44(extraout_s1_00,uVar2));
    }
  }
  recovered_1001f588(param_1,in_d0);
  return;
}

#undef DAT_10022924

#undef DAT_10022958
#define DAT_10022958 (*(int * *)(((uintptr_t)pf_module_state + 0x1e608U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e5d8U)
 */

undefined4 * recovered_10022928(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022958 + 8;
  return param_1;
}

#undef DAT_10022958

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e60cU)
 */

void recovered_1002295c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e610U)
 */

void recovered_10022960(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e614U)
 */

void recovered_10022964(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_100229a0(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002299c
#define DAT_1002299c (*(int * *)(((uintptr_t)pf_module_state + 0x1e64cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e628U)
 */

void recovered_10022978(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002299c + 8;
  return;
}

#undef DAT_1002299c

#undef DAT_100229f8
#define DAT_100229f8 (*(int *)(((uintptr_t)pf_module_state + 0x1e6a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e650U)
 */

void recovered_100229a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_100229f8;
  recovered_1001ee3c(DAT_100229f8,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_100055c0(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  *(undefined4 *)(param_1 + 0xc) = extraout_r1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = extraout_r0;
  return;
}

#undef DAT_100229f8

#undef DAT_10022a2c
#define DAT_10022a2c (*(int * *)(((uintptr_t)pf_module_state + 0x1e6dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e6acU)
 */

undefined4 * recovered_100229fc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022a2c + 8;
  return param_1;
}

#undef DAT_10022a2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e6e0U)
 */

void recovered_10022a30(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e6e4U)
 */

void recovered_10022a34(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e6e8U)
 */

void recovered_10022a38(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022a74(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022a70
#define DAT_10022a70 (*(int * *)(((uintptr_t)pf_module_state + 0x1e720U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e6fcU)
 */

void recovered_10022a4c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022a70 + 8;
  return;
}

#undef DAT_10022a70

#undef DAT_10022acc
#define DAT_10022acc (*(int *)(((uintptr_t)pf_module_state + 0x1e77cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e724U)
 */

void recovered_10022a74(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_10022acc;
  recovered_1001ee3c(DAT_10022acc,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_10005678(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  *(undefined4 *)(param_1 + 0xc) = extraout_r1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = extraout_r0;
  return;
}

#undef DAT_10022acc

#undef DAT_10022b00
#define DAT_10022b00 (*(int * *)(((uintptr_t)pf_module_state + 0x1e7b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e780U)
 */

undefined4 * recovered_10022ad0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022b00 + 8;
  return param_1;
}

#undef DAT_10022b00

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e7b4U)
 */

void recovered_10022b04(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e7b8U)
 */

void recovered_10022b08(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e7bcU)
 */

void recovered_10022b0c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022b48(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022b44
#define DAT_10022b44 (*(int * *)(((uintptr_t)pf_module_state + 0x1e7f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e7d0U)
 */

void recovered_10022b20(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022b44 + 8;
  return;
}

#undef DAT_10022b44

#undef DAT_10022b9c
#define DAT_10022b9c (*(double *)(((uintptr_t)pf_module_state + 0x1e84cU)))
#undef DAT_10022ba4
#define DAT_10022ba4 (*(int *)(((uintptr_t)pf_module_state + 0x1e854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e7f8U)
 */

void recovered_10022b48(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s1 = 0;

  iVar2 = DAT_10022ba4;
  recovered_1001ee3c(DAT_10022ba4,param_4,1,1);
  uVar3 = recovered_100223ac(iVar2,(int *)param_4,0);
  dVar1 = DAT_10022b9c;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(double *)(param_1 + 8) = pf_bits_double(CONCAT44(extraout_s1,uVar3)) * dVar1;
  return;
}

#undef DAT_10022b9c
#undef DAT_10022ba4

#undef DAT_10022bd8
#define DAT_10022bd8 (*(int * *)(((uintptr_t)pf_module_state + 0x1e888U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e858U)
 */

undefined4 * recovered_10022ba8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022bd8 + 8;
  return param_1;
}

#undef DAT_10022bd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e88cU)
 */

void recovered_10022bdc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e890U)
 */

void recovered_10022be0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e894U)
 */

void recovered_10022be4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022c20(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022c1c
#define DAT_10022c1c (*(int * *)(((uintptr_t)pf_module_state + 0x1e8ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e8a8U)
 */

void recovered_10022bf8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022c1c + 8;
  return;
}

#undef DAT_10022c1c

#undef DAT_10022c78
#define DAT_10022c78 (*(int *)(((uintptr_t)pf_module_state + 0x1e928U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e8d0U)
 */

void recovered_10022c20(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_10022c78;
  recovered_1001ee3c(DAT_10022c78,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_100054c0(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  *(undefined4 *)(param_1 + 0xc) = extraout_r1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = extraout_r0;
  return;
}

#undef DAT_10022c78

#undef DAT_10022cac
#define DAT_10022cac (*(int * *)(((uintptr_t)pf_module_state + 0x1e95cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e92cU)
 */

undefined4 * recovered_10022c7c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022cac + 8;
  return param_1;
}

#undef DAT_10022cac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e960U)
 */

void recovered_10022cb0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e964U)
 */

void recovered_10022cb4(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e968U)
 */

void recovered_10022cb8(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022cf4(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022cf0
#define DAT_10022cf0 (*(int * *)(((uintptr_t)pf_module_state + 0x1e9a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e97cU)
 */

void recovered_10022ccc(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022cf0 + 8;
  return;
}

#undef DAT_10022cf0

#undef DAT_10022d4c
#define DAT_10022d4c (*(int *)(((uintptr_t)pf_module_state + 0x1e9fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e9a4U)
 */

void recovered_10022cf4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 uVar2;
  undefined4 extraout_s1 = 0;

  iVar1 = DAT_10022d4c;
  recovered_1001ee3c(DAT_10022d4c,param_4,1,1);
  uVar2 = recovered_100223ac(iVar1,(int *)param_4,0);
  recovered_10005470(pf_bits_double(CONCAT44(extraout_s1,uVar2)));
  *(undefined4 *)(param_1 + 0xc) = extraout_r1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 8) = extraout_r0;
  return;
}

#undef DAT_10022d4c

#undef DAT_10022d80
#define DAT_10022d80 (*(int * *)(((uintptr_t)pf_module_state + 0x1ea30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea00U)
 */

undefined4 * recovered_10022d50(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022d80 + 8;
  return param_1;
}

#undef DAT_10022d80

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea34U)
 */

void recovered_10022d84(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea38U)
 */

void recovered_10022d88(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea3cU)
 */

void recovered_10022d8c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10022dc8(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10022dc4
#define DAT_10022dc4 (*(int * *)(((uintptr_t)pf_module_state + 0x1ea74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea50U)
 */

void recovered_10022da0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10022dc4 + 8;
  return;
}

#undef DAT_10022dc4

#undef DAT_10022f64
#define DAT_10022f64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ec14U)))
#undef DAT_10022f68
#define DAT_10022f68 (*(int *)(((uintptr_t)pf_module_state + 0x1ec18U)))
#undef DAT_10022f6c
#define DAT_10022f6c (*(int *)(((uintptr_t)pf_module_state + 0x1ec1cU)))
#undef DAT_10022f70
#define DAT_10022f70 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1ec20U)))
#define local_b8 (*(undefined1 * *)(frame + 24))
#define local_b4 (*(byte * *)(frame + 28))
#define local_b0 (*(byte * *)(frame + 32))
#define local_ac (*(void * *)(frame + 36))
#define local_a8 (*(undefined4 *)(frame + 40))
#define local_a4 (*(undefined4 *)(frame + 44))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ea78U)
 */

void recovered_10022dc8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[240] = {0};

  int *piVar1;
  int iVar2;
  byte *pbVar3;

  iVar2 = DAT_10022f6c;
  local_b8 = param_1;
  recovered_1001ee3c(DAT_10022f6c,param_4,1,1);
  piVar1 = (int *)recovered_100208d4(iVar2,(int *)param_4,0);
  recovered_1000dc38(&local_ac,piVar1);
  local_7c = *DAT_10022f70;
  local_78 = DAT_10022f64;
  local_70 = DAT_10022f68 + ((uintptr_t)pf_module_state+0x1eb04U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100078f0(&uStack_94);
  local_b0 = (byte *)recovered_10022f90(&local_ac);
  local_90 = 2;
  local_b4 = (byte *)recovered_10022f74(&local_ac);
  pbVar3 = local_b0;
  while (local_98 = local_a4, local_9c = local_a8, pbVar3 != local_b4) {
    local_90 = 3;
    local_b0 = pbVar3;
    iVar2 = recovered_10005074((uint)*pbVar3);
    pbVar3 = local_b0 + 1;
    *local_b0 = (byte)iVar2;
  }
  local_a0 = local_ac;
  local_a8 = 0;
  local_a4 = 0;
  local_ac = (void *)0x0;
  recovered_10008394(local_b8,&local_a0);
  recovered_10007424(local_a0);
  recovered_10007424(local_ac);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10022f64
#undef DAT_10022f68
#undef DAT_10022f6c
#undef DAT_10022f70
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef auStack_c0
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
 * Address: ((uintptr_t)pf_module_state+0x1ec24U)
 */

int recovered_10022f74(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10022f90(param_1);
  return iVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec40U)
 */

undefined4 recovered_10022f90(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d1a0(param_1);
  return *param_1;
}


#undef DAT_10022fd8
#define DAT_10022fd8 (*(int * *)(((uintptr_t)pf_module_state + 0x1ec88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec58U)
 */

undefined4 * recovered_10022fa8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10022fd8 + 8;
  return param_1;
}

#undef DAT_10022fd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8cU)
 */

void recovered_10022fdc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec90U)
 */

void recovered_10022fe0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec94U)
 */

void recovered_10022fe4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10023020(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002301c
#define DAT_1002301c (*(int * *)(((uintptr_t)pf_module_state + 0x1ecccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1eca8U)
 */

void recovered_10022ff8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002301c + 8;
  return;
}

#undef DAT_1002301c

#undef DAT_10023198
#define DAT_10023198 (*(int *)(((uintptr_t)pf_module_state + 0x1ee48U)))
#define auStack_22c (*(undefined4 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ecd0U)
 */

void recovered_10023020(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[604] = {0};

  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *unaff_r5;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  iVar8 = DAT_10023198;
  recovered_1001ee3c(DAT_10023198,param_4,2,3);
  piVar4 = (int *)recovered_100208d4(iVar8,(int *)param_4,0);
  uVar10 = recovered_1001f650(iVar8,(int *)param_4,1);
  if (*(int *)(param_4 + 4) == 3) {
    uVar11 = recovered_1001f650(DAT_10023198,(int *)param_4,2);
    uVar6 = piVar4[1];
  }
  else {
    uVar6 = piVar4[1];
    uVar11 = (ulonglong)uVar6;
  }
  if (uVar6 == 0) {
    unaff_r5 = (void *)0x0;
  }
  else {
    uVar3 = uVar11 + uVar6 + 1;
    if (-1 < (longlong)uVar11) {
      uVar3 = uVar11;
    }
    iVar8 = (int)(uVar3 >> 0x20);
    bVar1 = (int)(uint)((uint)uVar3 < uVar6) <= iVar8;
    if (bVar1) {
      iVar8 = 0;
    }
    uVar11 = uVar10 + uVar6 + 1;
    if (-1 < (longlong)uVar10) {
      uVar11 = uVar10;
    }
    iVar5 = (int)(uVar11 >> 0x20);
    uVar9 = (uint)uVar11;
    bVar2 = (int)-(iVar5 + (uint)(1 < uVar9)) < 0 ==
            (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(1 < uVar9)));
    if (bVar2) {
      iVar5 = 0;
    }
    uVar7 = (uint)uVar3;
    if (bVar1) {
      uVar7 = uVar6;
    }
    if (bVar2) {
      uVar9 = 1;
    }
    if ((int)(iVar8 - (iVar5 + (uint)(uVar7 < uVar9))) < 0 ==
        (SBORROW4(iVar8,iVar5) != SBORROW4(iVar8 - iVar5,(uint)(uVar7 < uVar9)))) {
      recovered_1002319c(auStack_22c + 0x80,piVar4,uVar9 - 1,(uVar7 - uVar9) + 1);
    }
    else {
      unaff_r5 = (void *)0x0;
    }
  }
  recovered_10008394(param_1,auStack_22c + 0x80);
  recovered_10007424(unaff_r5);
  return;
}

#undef DAT_10023198
#undef auStack_22c

#undef DAT_100231e8
#define DAT_100231e8 (*(int *)(((uintptr_t)pf_module_state + 0x1ee98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ee4cU)
 */

void recovered_1002319c(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

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
  iVar2 = DAT_100231e8;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  recovered_1000d238(param_1,iVar2 + param_3,uVar3,param_4);
  return;
}

#undef DAT_100231e8

#undef DAT_1002321c
#define DAT_1002321c (*(int * *)(((uintptr_t)pf_module_state + 0x1eeccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ee9cU)
 */

undefined4 * recovered_100231ec(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_1002321c + 8;
  return param_1;
}

#undef DAT_1002321c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1eed0U)
 */

void recovered_10023220(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1eed4U)
 */

void recovered_10023224(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1eed8U)
 */

void recovered_10023228(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10023264(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10023260
#define DAT_10023260 (*(int * *)(((uintptr_t)pf_module_state + 0x1ef10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1eeecU)
 */

void recovered_1002323c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10023260 + 8;
  return;
}

#undef DAT_10023260

#undef DAT_100235a0
#define DAT_100235a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f250U)))
#undef DAT_100235a4
#define DAT_100235a4 (*(int *)(((uintptr_t)pf_module_state + 0x1f254U)))
#undef DAT_100235a8
#define DAT_100235a8 (*(int *)(((uintptr_t)pf_module_state + 0x1f258U)))
#undef DAT_100235ac
#define DAT_100235ac (*(char * *)(((uintptr_t)pf_module_state + 0x1f25cU)))
#undef DAT_100235b0
#define DAT_100235b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1f260U)))
#undef DAT_100235b4
#define DAT_100235b4 (*(char * *)(((uintptr_t)pf_module_state + 0x1f264U)))
#define local_f4 (*(undefined1 * *)(frame + 28))
#define local_f0 (*(int (*)[5])(frame + 32))
#define local_dc (*(undefined4 *)(frame + 52))
#define local_d8 (*(undefined1 *)(frame + 56))
#define local_d0 (*(int *)(frame + 64))
#define local_cc (*(undefined4 *)(frame + 68))
#define local_c4 (*(undefined4 *)(frame + 76))
#define local_b0 (*(int * *)(frame + 96))
#define local_ac (*(int *)(frame + 100))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(undefined4 *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
#define auStack_100 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define aiStack_bc (*(int (*)[3])(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ef14U)
 */

void recovered_10023264(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[304] = {0};

  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int extraout_r2 = 0;
  int extraout_r2_00 = 0;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  int iVar6;

  iVar6 = DAT_100235a8;
  recovered_1001ee3c(DAT_100235a8,param_4,2,2);
  piVar2 = (int *)recovered_100208d4(iVar6,(int *)param_4,0);
  piVar3 = (int *)recovered_100208d4(iVar6,(int *)param_4,1);
  bVar1 = recovered_1000e0e8(piVar3,DAT_100235ac);
  local_7c = *DAT_100235b0;
  local_78 = DAT_100235a0;
  local_70 = DAT_100235a4 + ((uintptr_t)pf_module_state+0x1efb0U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  recovered_100078f0(&uStack_94);
  if (bVar1) {
    local_90 = 0xffffffff;
    recovered_100235b8((int *)&local_b0,piVar2);
    if (local_ac == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *param_1 = 0;
    }
    else {
      local_f0[3] = 0;
      local_cc = 0;
      local_d0 = local_b0[1];
      local_f0[2] = *local_b0 + 1;
      local_dc = 1;
      PF_PART1(local_f0[0], 0) = 1;
      local_c4 = 1;
      local_d8 = 1;
      local_90 = 1;
      local_f4 = param_1;
      recovered_100238b4(aiStack_bc,(int)local_f0,2);
      local_90 = 2;
      recovered_1000850c(local_f4,aiStack_bc,extraout_r2,extraout_r3);
      recovered_1001d318(aiStack_bc);
      iVar6 = 0x20;
      do {
        recovered_1000d37c((int *)((int)local_f0 + iVar6));
        bVar1 = iVar6 != 8;
        iVar6 = iVar6 + -0x18;
      } while (bVar1);
    }
    local_ac = 0;
    recovered_10007424(local_b0);
  }
  else {
    pcVar5 = DAT_100235b4;
    if ((char *)*piVar3 != (char *)0x0) {
      pcVar5 = (char *)*piVar3;
    }
    uVar4 = recovered_10023784(piVar2,pcVar5,piVar3[1],0);
    if (uVar4 == 0xffffffff) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *param_1 = 0;
    }
    else {
      local_f0[3] = 0;
      local_cc = 0;
      local_d0 = piVar3[1] + uVar4;
      local_dc = 1;
      PF_PART1(local_f0[0], 0) = 1;
      local_c4 = 1;
      local_d8 = 1;
      local_90 = 3;
      local_f4 = param_1;
      local_f0[2] = uVar4 + 1;
      recovered_100238b4(&local_b0,(int)local_f0,2);
      local_90 = 4;
      recovered_1000850c(local_f4,&local_b0,extraout_r2_00,extraout_r3_00);
      recovered_1001d318((int *)&local_b0);
      iVar6 = 0x20;
      do {
        recovered_1000d37c((int *)((int)local_f0 + iVar6));
        bVar1 = iVar6 != 8;
        iVar6 = iVar6 + -0x18;
      } while (bVar1);
    }
  }
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100235a0
#undef DAT_100235a4
#undef DAT_100235a8
#undef DAT_100235ac
#undef DAT_100235b0
#undef DAT_100235b4
#undef local_f4
#undef local_f0
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_b0
#undef local_ac
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_100
#undef uStack_94
#undef aiStack_bc
#undef auStack_68

#undef DAT_10023774
#define DAT_10023774 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f424U)))
#undef DAT_10023778
#define DAT_10023778 (*(int *)(((uintptr_t)pf_module_state + 0x1f428U)))
#undef DAT_1002377c
#define DAT_1002377c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1f42cU)))
#undef DAT_10023780
#define DAT_10023780 (*(int *)(((uintptr_t)pf_module_state + 0x1f430U)))
#define local_a0 (*(uint *)(frame + 32))
#define local_9c (*(uint *)(frame + 36))
#define local_98 (*(int * *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_a8 (*(int *)(frame + 24))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(int * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f268U)
 */

void recovered_100235b8(int *param_1,int *param_2)

{
  unsigned char frame[224] = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_7c = *DAT_1002377c;
  local_78 = DAT_10023774;
  local_9c = 0;
  local_70 = DAT_10023778 + ((uintptr_t)pf_module_state+0x1f2d4U);
  local_98 = param_1;
  recovered_100078f0(&uStack_94);
  local_a8 = DAT_10023780;
  uVar3 = 0;
  local_a4 = param_2;
  do {
    while( true ) {
      if ((uint)local_a4[1] <= uVar3) {
        recovered_10007908(&uStack_94);
        return;
      }
      iVar2 = *local_a4;
      if (*local_a4 == 0) {
        iVar2 = local_a8;
      }
      local_90 = 1;
      bVar1 = recovered_10007b34((uint)*(byte *)(iVar2 + uVar3));
      if (bVar1) break;
      uVar3 = local_9c + 1;
      local_9c = uVar3;
    }
    local_a0 = local_9c;
    for (; local_9c < (uint)local_a4[1]; local_9c = local_9c + 1) {
      iVar2 = *local_a4;
      if (*local_a4 == 0) {
        iVar2 = local_a8;
      }
      local_90 = 2;
      bVar1 = recovered_10007b34((uint)*(byte *)(iVar2 + local_9c));
      if (!bVar1) break;
    }
    local_90 = 3;
    recovered_100237bc(local_98,&local_a0,&local_9c);
    uVar3 = local_9c;
  } while( true );
}

#undef DAT_10023774
#undef DAT_10023778
#undef DAT_1002377c
#undef DAT_10023780
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
#undef local_a8
#undef auStack_68
#undef local_a4

#undef DAT_100237b8
#define DAT_100237b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1f468U)))
#define aiStack_210 (*(int (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f434U)
 */

uint recovered_10023784(int *param_1,char *param_2,uint param_3,uint param_4)

{
  unsigned char frame[576] = {0};

  uint uVar1;

  uVar1 = recovered_10023938(aiStack_210 + 0x80,param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_100237b8
#undef aiStack_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f46cU)
 */

int recovered_100237bc(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
    recovered_10023824(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar4 = *param_1;
  puVar5 = (undefined4 *)(iVar4 + iVar1 * 8);
  *puVar5 = *param_2;
  uVar3 = *param_3;
  param_1[1] = iVar1 + 1;
  puVar5[1] = uVar3;
  return iVar4 + (iVar1 + 1) * 8 + -8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f4d4U)
 */

void recovered_10023824(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  if ((uint)param_1[2] < param_2) {
    uVar1 = recovered_100238a0(param_2);
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
      uVar4 = ((undefined4 *)(*param_1 + iVar2))[1];
      puVar5 = (undefined4 *)(uVar1 + iVar2);
      *puVar5 = *(undefined4 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 8;
      puVar5[1] = uVar4;
    }
    recovered_10007424((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f550U)
 */

uint recovered_100238a0(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_100073f4(param_1 << 3);
  return (uint)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f564U)
 */

undefined4 * recovered_100238b4(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_1000eab8(param_1,param_3);
  for (iVar1 = param_3 * 0x18; iVar1 != 0; iVar1 = iVar1 + -0x18) {
    recovered_100127c4(param_1,(undefined1 *)param_2);
    param_2 = param_2 + 0x18;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f5c4U)
 */

undefined4 * recovered_10023914(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007424((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f5e8U)
 */

uint recovered_10023938(int *param_1,char *param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r9;
  char *pcVar5;

  uVar3 = param_1[1];
  if (param_3 == 0) {
    if (uVar3 < param_4) {
      param_4 = 0xffffffff;
    }
  }
  else {
    if (param_3 <= uVar3) {
      unaff_r9 = uVar3 - param_3;
    }
    if (param_3 <= uVar3 && param_4 <= unaff_r9) {
      for (; param_4 <= unaff_r9; param_4 = param_4 + 1) {
        iVar4 = *param_1;
        uVar3 = param_3;
        pcVar5 = param_2;
        do {
          if (uVar3 == 0) {
            return param_4;
          }
          pcVar1 = (char *)(iVar4 + param_4);
          iVar4 = iVar4 + 1;
          cVar2 = *pcVar5;
          uVar3 = uVar3 - 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 == cVar2);
      }
      param_4 = 0xffffffff;
    }
    else {
      param_4 = 0xffffffff;
    }
  }
  return param_4;
}


#undef DAT_100239f0
#define DAT_100239f0 (*(int * *)(((uintptr_t)pf_module_state + 0x1f6a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f670U)
 */

undefined4 * recovered_100239c0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100239f0 + 8;
  return param_1;
}

#undef DAT_100239f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f6a4U)
 */

void recovered_100239f4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f6a8U)
 */

void recovered_100239f8(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f6acU)
 */

void recovered_100239fc(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10023a38(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10023a34
#define DAT_10023a34 (*(int * *)(((uintptr_t)pf_module_state + 0x1f6e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f6c0U)
 */

void recovered_10023a10(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10023a34 + 8;
  return;
}

#undef DAT_10023a34

#undef DAT_10023ee4
#define DAT_10023ee4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1fb94U)))
#undef DAT_10023ee8
#define DAT_10023ee8 (*(int *)(((uintptr_t)pf_module_state + 0x1fb98U)))
#undef DAT_10023eec
#define DAT_10023eec (*(int *)(((uintptr_t)pf_module_state + 0x1fb9cU)))
#undef DAT_10023ef0
#define DAT_10023ef0 (*(char * *)(((uintptr_t)pf_module_state + 0x1fba0U)))
#undef DAT_10023ef4
#define DAT_10023ef4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1fba4U)))
#undef DAT_10023ef8
#define DAT_10023ef8 (*(char * *)(((uintptr_t)pf_module_state + 0x1fba8U)))
#undef DAT_10023efc
#define DAT_10023efc (*(char * *)(((uintptr_t)pf_module_state + 0x1fbacU)))
#define local_ec (*(uint * (*)[3])(frame + 52))
#define local_e0 (*(uint * *)(frame + 64))
#define local_dc (*(int *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 184))
#define local_b0 (*(void * (*)[7])(frame + 112))
#define local_90 (*(undefined4 *)(frame + 144))
#define local_7c (*(undefined4 *)(frame + 164))
#define local_78 (*(undefined4 *)(frame + 168))
#define local_74 (*(undefined1 * *)(frame + 172))
#define local_70 (*(int *)(frame + 176))
#define local_6c (*(undefined1 * *)(frame + 180))
#define auStack_110 (*(undefined1 (*)[4])(frame + 16))
#define auStack_c8 (*(undefined1 (*)[24])(frame + 88))
#define local_10c (*(undefined1 * *)(frame + 20))
#define uStack_94 (*(undefined4 *)(frame + 140))
#define local_108 (*(uint *)(frame + 24))
#define local_104 (*(int * *)(frame + 28))
#define local_100 (*(uint *)(frame + 32))
#define local_fc (*(uint *)(frame + 36))
#define local_f8 (*(void * (*)[3])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f6e8U)
 */

void recovered_10023a38(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[320] = {0};

  bool bVar1;
  int *piVar2;
  int *in_r1;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;

  iVar5 = DAT_10023eec;
  recovered_1001ee3c(DAT_10023eec,param_4,2,2);
  piVar2 = (int *)recovered_100208d4(iVar5,(int *)param_4,0);
  in_r1 = (int *)recovered_100208d4(iVar5,(int *)param_4,1);
  bVar1 = recovered_1000e0e8(in_r1,DAT_10023ef0);
  local_7c = *DAT_10023ef4;
  local_78 = DAT_10023ee4;
  local_70 = DAT_10023ee8 + ((uintptr_t)pf_module_state+0x1f788U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_110;
  recovered_100078f0(&uStack_94);
  pcVar10 = DAT_10023ef8;
  if (bVar1) {
    uVar9 = 0;
    local_10c = param_1;
    do {
      do {
        do {
          do {
            uVar8 = uVar9;
            if ((uint)piVar2[1] <= uVar8) {
              *(undefined4 *)(local_10c + 0x14) = 0;
              *local_10c = 0;
              goto LAB_10023dc0;
            }
            pcVar4 = (char *)*piVar2;
            if ((char *)*piVar2 == (char *)0x0) {
              pcVar4 = pcVar10;
            }
            local_90 = 0xffffffff;
            bVar1 = recovered_10004fec((uint)(byte)pcVar4[uVar8]);
            uVar9 = uVar8 + 1;
          } while (!bVar1);
          uVar7 = 0;
          local_fc = uVar8 + 1;
          while( true ) {
            uVar3 = piVar2[1];
            uVar9 = uVar8 + uVar7;
            if (uVar3 <= uVar9) break;
            pcVar4 = (char *)*piVar2;
            if ((char *)*piVar2 == (char *)0x0) {
              pcVar4 = pcVar10;
            }
            local_90 = 0xffffffff;
            bVar1 = recovered_10004fec((uint)(byte)pcVar4[uVar7 + uVar8]);
            if (!bVar1) {
              uVar3 = piVar2[1];
              break;
            }
            uVar7 = uVar7 + 1;
          }
        } while (uVar3 <= uVar9);
        pcVar4 = (char *)*piVar2;
        if ((char *)*piVar2 == (char *)0x0) {
          pcVar4 = pcVar10;
        }
      } while (pcVar4[uVar7 + uVar8] != '-');
      local_104 = (int *)(local_fc + uVar7);
      local_108 = uVar8;
      local_100 = uVar7;
      for (uVar6 = 0; (int)local_104 + uVar6 < uVar3; uVar6 = uVar6 + 1) {
        pcVar4 = (char *)*piVar2;
        if ((char *)*piVar2 == (char *)0x0) {
          pcVar4 = pcVar10;
        }
        local_90 = 0xffffffff;
        bVar1 = recovered_10007b34((uint)(byte)pcVar4[uVar6 + local_100 + local_fc]);
        if (!bVar1) break;
        uVar3 = piVar2[1];
      }
    } while (uVar6 == 0);
    local_90 = 1;
    local_104 = piVar2;
    local_fc = uVar6;
    recovered_1002319c(local_ec,piVar2,local_108,local_100);
    iVar5 = local_108 + local_100;
    recovered_10008394((undefined1 *)&local_e0,local_ec);
    local_90 = 2;
    recovered_1002319c(local_f8,local_104,iVar5 + 1,local_fc);
    recovered_10008394(auStack_c8,local_f8);
    local_90 = 3;
    recovered_100238b4(local_b0,(int)&local_e0,2);
    local_90 = 4;
    recovered_1000850c(local_10c,local_b0,extraout_r2,extraout_r3);
    recovered_1001d318((int *)local_b0);
    iVar5 = 0x20;
    do {
      recovered_1000d37c((int *)((int)local_ec + iVar5 + 0xc));
      bVar1 = iVar5 != 8;
      iVar5 = iVar5 + -0x18;
    } while (bVar1);
    recovered_10007424(local_f8[0]);
  }
  else {
    bVar1 = recovered_1000e0e8(in_r1,DAT_10023efc);
    if (!bVar1) {
      if ((char *)*in_r1 != (char *)0x0) {
        pcVar10 = (char *)*in_r1;
      }
      uVar9 = recovered_10023784(piVar2,pcVar10,in_r1[1],0);
      if (uVar9 == 0xffffffff) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *param_1 = 0;
      }
      else {
        local_90 = 0xffffffff;
        recovered_10008370(param_1,in_r1);
      }
      goto LAB_10023dc0;
    }
    local_90 = 0xffffffff;
    recovered_100235b8((int *)&local_e0,piVar2);
    if (local_dc == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *param_1 = 0;
    }
    else {
      local_90 = 5;
      local_10c = param_1;
      recovered_1002319c(local_b0,piVar2,*local_e0,local_e0[1] - *local_e0);
      recovered_10008394(local_10c,local_b0);
      recovered_10007424(local_b0[0]);
    }
    local_dc = 0;
    local_ec[0] = local_e0;
  }
  recovered_10007424(local_ec[0]);
LAB_10023dc0:
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10023ee4
#undef DAT_10023ee8
#undef DAT_10023eec
#undef DAT_10023ef0
#undef DAT_10023ef4
#undef DAT_10023ef8
#undef DAT_10023efc
#undef local_ec
#undef local_e0
#undef local_dc
#undef auStack_68
#undef local_b0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_110
#undef auStack_c8
#undef local_10c
#undef uStack_94
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8

#undef DAT_10023f30
#define DAT_10023f30 (*(int * *)(((uintptr_t)pf_module_state + 0x1fbe0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fbb0U)
 */

undefined4 * recovered_10023f00(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10023f30 + 8;
  return param_1;
}

#undef DAT_10023f30

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fbe4U)
 */

void recovered_10023f34(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fbe8U)
 */

void recovered_10023f38(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fbecU)
 */

void recovered_10023f3c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10023f78(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10023f74
#define DAT_10023f74 (*(int * *)(((uintptr_t)pf_module_state + 0x1fc24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fc00U)
 */

void recovered_10023f50(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10023f74 + 8;
  return;
}

#undef DAT_10023f74

#undef DAT_10024230
#define DAT_10024230 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1fee0U)))
#undef DAT_10024234
#define DAT_10024234 (*(int *)(((uintptr_t)pf_module_state + 0x1fee4U)))
#undef DAT_10024238
#define DAT_10024238 (*(int *)(((uintptr_t)pf_module_state + 0x1fee8U)))
#undef DAT_1002423c
#define DAT_1002423c (*(char * *)(((uintptr_t)pf_module_state + 0x1feecU)))
#undef DAT_10024240
#define DAT_10024240 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1fef0U)))
#undef DAT_10024244
#define DAT_10024244 (*(char * *)(((uintptr_t)pf_module_state + 0x1fef4U)))
#define local_cc (*(undefined1 * *)(frame + 20))
#define local_c8 (*(int * *)(frame + 24))
#define local_c4 (*(char * *)(frame + 28))
#define local_c0 (*(uint * *)(frame + 32))
#define local_bc (*(int * *)(frame + 36))
#define local_b8 (*(void * (*)[3])(frame + 40))
#define local_ac (*(uint * *)(frame + 52))
#define local_a8 (*(uint *)(frame + 56))
#define local_a0 (*(int (*)[4])(frame + 64))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define auStack_d0 (*(undefined1 (*)[4])(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fc28U)
 */

void recovered_10023f78(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[256] = {0};

  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  int extraout_r2 = 0;
  undefined4 extraout_r3 = 0;
  uint uVar8;

  iVar1 = DAT_10024238;
  local_cc = param_1;
  recovered_1001ee3c(DAT_10024238,param_4,2,2);
  uVar8 = 0;
  piVar3 = (int *)recovered_100208d4(iVar1,(int *)param_4,0);
  piVar4 = (int *)recovered_100208d4(iVar1,(int *)param_4,1);
  local_a0[2] = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  bVar2 = recovered_1000e0e8(piVar4,DAT_1002423c);
  local_7c = *DAT_10024240;
  local_78 = DAT_10024230;
  local_70 = DAT_10024234 + ((uintptr_t)pf_module_state+0x1fcd8U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  recovered_100078f0(local_a0 + 3);
  local_bc = piVar3;
  if (bVar2) {
    local_90 = 1;
    recovered_100235b8((int *)&local_ac,piVar3);
    local_90 = 2;
    recovered_1000eab8(local_a0,local_a8);
    pcVar6 = (char *)(local_a8 << 3);
    puVar5 = local_ac;
    while( true ) {
      if (pcVar6 == (char *)0x0) break;
      local_90 = 4;
      local_c4 = pcVar6;
      local_c0 = puVar5;
      recovered_1002319c(local_b8,local_bc,*puVar5,puVar5[1] - *puVar5);
      local_90 = 5;
      recovered_10018114(local_a0,local_b8);
      recovered_10007424(local_b8[0]);
      pcVar6 = local_c4 + -8;
      puVar5 = local_c0 + 2;
    }
    local_90 = 3;
    recovered_1000850c(local_cc,local_a0,0,puVar5);
    local_a8 = 0;
    recovered_10007424(local_ac);
  }
  else {
    uVar7 = piVar4[1];
    local_c4 = DAT_10024244;
    local_c8 = piVar4;
    while( true ) {
      piVar3 = local_c8;
      pcVar6 = (char *)*local_c8;
      if ((char *)*local_c8 == (char *)0x0) {
        pcVar6 = local_c4;
      }
      puVar5 = (uint *)recovered_10023784(local_bc,pcVar6,uVar7,uVar8);
      if (puVar5 == (uint *)0xffffffff) break;
      local_90 = 6;
      local_c0 = puVar5;
      recovered_10020e70(local_a0,piVar3);
      uVar7 = local_c8[1];
      uVar8 = uVar7 + (int)local_c0;
    }
    local_90 = 7;
    recovered_1000850c(local_cc,local_a0,extraout_r2,extraout_r3);
  }
  recovered_1001d318(local_a0);
  recovered_10007908(local_a0 + 3);
  return;
}

#undef DAT_10024230
#undef DAT_10024234
#undef DAT_10024238
#undef DAT_1002423c
#undef DAT_10024240
#undef DAT_10024244
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_d0
#undef auStack_68

#undef DAT_10024278
#define DAT_10024278 (*(int * *)(((uintptr_t)pf_module_state + 0x1ff28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fef8U)
 */

undefined4 * recovered_10024248(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10024278 + 8;
  return param_1;
}

#undef DAT_10024278

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ff2cU)
 */

void recovered_1002427c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ff30U)
 */

void recovered_10024280(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ff34U)
 */

void recovered_10024284(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_100242c0(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_100242bc
#define DAT_100242bc (*(int * *)(((uintptr_t)pf_module_state + 0x1ff6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ff48U)
 */

void recovered_10024298(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_100242bc + 8;
  return;
}

#undef DAT_100242bc

#undef DAT_10024534
#define DAT_10024534 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x201e4U)))
#undef DAT_10024538
#define DAT_10024538 (*(int *)(((uintptr_t)pf_module_state + 0x201e8U)))
#undef DAT_1002453c
#define DAT_1002453c (*(int *)(((uintptr_t)pf_module_state + 0x201ecU)))
#undef DAT_10024540
#define DAT_10024540 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x201f0U)))
#undef DAT_10024544
#define DAT_10024544 (*(int *)(((uintptr_t)pf_module_state + 0x201f4U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_c0 (*(undefined1 * *)(frame + 16))
#define local_b4 (*(int *)(frame + 28))
#define local_b0 (*(undefined8 *)(frame + 32))
#define local_a8 (*(uint (*)[6])(frame + 40))
#define piStack_b8 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 64))
#define uStack_bc (*(undefined4 *)(frame + 20))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ff70U)
 */

void recovered_100242c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[240] = {0};

  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_r2 = 0;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  iVar3 = DAT_1002453c;
  local_c0 = param_1;
  recovered_1001ee3c(DAT_1002453c,param_4,1,3);
  local_b4 = 0;
  piVar2 = (int *)recovered_100208d4(iVar3,(int *)param_4,0);
  local_7c = *DAT_10024540;
  local_78 = DAT_10024534;
  local_70 = DAT_10024538 + ((uintptr_t)pf_module_state+0x1fff8U);
  uVar7 = *(uint *)(param_4 + 4);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  recovered_100078f0(local_a8 + 5);
  if (uVar7 < 2) {
    uVar7 = piVar2[1];
    uVar1 = 1;
    uVar10 = 1;
  }
  else {
    local_90 = 0xffffffff;
    uVar9 = recovered_1001f650(DAT_1002453c,(int *)param_4,1);
    piVar4 = (int *)(uVar9 >> 0x20);
    iVar3 = (int)uVar9;
    bVar8 = *(int *)(param_4 + 4) == 3;
    if (bVar8) {
      local_90 = 0xffffffff;
      piVar4 = (int *)param_4;
      iVar3 = DAT_1002453c;
    }
    uVar10 = CONCAT44(piVar4,iVar3);
    if (bVar8) {
      uVar10 = recovered_1001f650(iVar3,piVar4,2);
    }
    uVar7 = piVar2[1];
    uVar1 = uVar9 + uVar7 + 1;
    if (-1 < (longlong)uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffffffffffff < uVar10) {
      uVar10 = uVar10 + uVar7 + 1;
    }
  }
  iVar3 = (int)(uVar1 >> 0x20);
  iVar5 = (int)(uVar10 >> 0x20);
  local_a8[4] = 0;
  local_a8[3] = 0;
  local_a8[2] = 0;
  bVar8 = (uint)uVar10 < uVar7;
  uVar6 = (uint)((int)(iVar5 - (local_b4 + (uint)bVar8)) < 0 !=
                (SBORROW4(iVar5,local_b4) != SBORROW4(iVar5 - local_b4,(uint)bVar8)));
  uVar9 = CONCAT44(local_b4,uVar7);
  if (uVar6 != 0) {
    uVar9 = uVar10;
  }
  uStack_bc = (undefined4)uVar9;
  bVar8 = 1 < (uint)uVar1;
  if ((int)-(iVar3 + (uint)bVar8) < 0 == (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar8))) {
    uVar1 = 1;
  }
  piStack_b8 = piVar2;
  while( true ) {
    local_b4 = (int)(uVar9 >> 0x20);
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)uVar1;
    bVar8 = (uint)uVar9 < uVar7;
    if ((int)(local_b4 - (iVar5 + (uint)bVar8)) < 0 !=
        (SBORROW4(local_b4,iVar5) != SBORROW4(local_b4 - iVar5,(uint)bVar8))) break;
    iVar3 = DAT_10024544;
    if (*piStack_b8 != 0) {
      iVar3 = *piStack_b8;
    }
    local_a8[0] = (uint)*(byte *)(iVar3 + uVar7 + -1);
    local_a8[1] = 0;
    local_90 = 2;
    local_b0 = uVar1;
    recovered_10017fec((int *)(local_a8 + 2),local_a8);
    uVar9 = CONCAT44(local_b4,uStack_bc);
    uVar1 = local_b0 + 1;
    iVar3 = extraout_r2;
    uVar6 = extraout_r3;
  }
  local_90 = 1;
  recovered_1000850c(local_c0,local_a8 + 2,iVar3,uVar6);
  recovered_1001d318((int *)(local_a8 + 2));
  recovered_10007908(local_a8 + 5);
  return;
}

#undef DAT_10024534
#undef DAT_10024538
#undef DAT_1002453c
#undef DAT_10024540
#undef DAT_10024544
#undef auStack_68
#undef local_c0
#undef local_b4
#undef local_b0
#undef local_a8
#undef piStack_b8
#undef local_90
#undef uStack_bc
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10024578
#define DAT_10024578 (*(int * *)(((uintptr_t)pf_module_state + 0x20228U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x201f8U)
 */

undefined4 * recovered_10024548(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10024578 + 8;
  return param_1;
}

#undef DAT_10024578

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2022cU)
 */

void recovered_1002457c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20230U)
 */

void recovered_10024580(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20234U)
 */

void recovered_10024584(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  recovered_100245c0(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_100245bc
#define DAT_100245bc (*(int * *)(((uintptr_t)pf_module_state + 0x2026cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20248U)
 */

void recovered_10024598(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_100245bc + 8;
  return;
}

#undef DAT_100245bc

#undef DAT_10024998
#define DAT_10024998 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20648U)))
#undef DAT_1002499c
#define DAT_1002499c (*(int *)(((uintptr_t)pf_module_state + 0x2064cU)))
#undef DAT_100249a0
#define DAT_100249a0 (*(int *)(((uintptr_t)pf_module_state + 0x20650U)))
#undef DAT_100249a4
#define DAT_100249a4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x20654U)))
#undef DAT_100249a8
#define DAT_100249a8 (*(int *)(((uintptr_t)pf_module_state + 0x20658U)))
#undef DAT_100249ac
#define DAT_100249ac (*(int *)(((uintptr_t)pf_module_state + 0x2065cU)))
#undef DAT_100249b0
#define DAT_100249b0 (*(int *)(((uintptr_t)pf_module_state + 0x20660U)))
#undef DAT_100249b4
#define DAT_100249b4 (*(int *)(((uintptr_t)pf_module_state + 0x20664U)))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
#define aiStack_b8 (*(int (*)[3])(frame + 40))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define local_d0 (*(undefined1 * *)(frame + 16))
#define local_cc (*(int * *)(frame + 20))
#define local_c8 (*(uint *)(frame + 24))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_c4 (*(int * *)(frame + 28))
#define local_c0 (*(int *)(frame + 32))
#define local_bc (*(uint *)(frame + 36))
#define local_ac (*(void * (*)[3])(frame + 52))
#define local_a0 (*(void * *)(frame + 64))
#define local_9c (*(undefined4 *)(frame + 68))
#define local_98 (*(undefined4 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20270U)
 */

void recovered_100245c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char frame[256] = {0};

  code *pcVar1;
  int *piVar2;
  char *value;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;

  iVar3 = DAT_100249a0;
  local_c8 = 1;
  local_d0 = param_1;
  recovered_1001ee3c(DAT_100249a0,(int)param_4,1,0xffffffff);
  uVar5 = 0;
  local_cc = param_4;
  piVar2 = (int *)recovered_100208d4(iVar3,param_4,0);
  local_7c = *DAT_100249a4;
  local_78 = DAT_10024998;
  local_98 = 0;
  local_70 = DAT_1002499c + ((uintptr_t)pf_module_state+0x202fcU);
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  recovered_100078f0(&uStack_94);
  local_c0 = DAT_100249a8;
  local_c4 = piVar2;
  do {
    if ((uint)local_c4[1] <= uVar5) {
      local_90 = 1;
      recovered_1000dc38(local_ac,(int *)&local_a0);
      recovered_10007424(local_a0);
      recovered_10008394(local_d0,local_ac);
      recovered_10007424(local_ac[0]);
      recovered_10007908(&uStack_94);
      return;
    }
    iVar3 = *local_c4;
    if (*local_c4 == 0) {
      iVar3 = local_c0;
    }
    if (*(char *)(iVar3 + uVar5) == '%') {
      uVar5 = uVar5 + 1;
      if ((uint)local_c4[1] <= uVar5) {
        local_90 = 3;
        recovered_1000cfe0((int *)local_ac,DAT_100249ac);
        local_90 = 4;
        recovered_1000f758(local_ac);
LAB_100248c8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x20578U));
        (*pcVar1)();
      }
      local_bc = (uint)*(byte *)(iVar3 + uVar5);
      if (local_bc == 0x25) {
        local_90 = 5;
        local_bc = uVar5;
        recovered_1000da6c((int *)&local_a0,0x25);
      }
      else {
        if ((uint)local_cc[1] <= local_c8) {
          local_90 = 6;
          local_bc = uVar5;
          recovered_1000cfe0((int *)local_ac,DAT_100249b0);
          local_90 = 7;
          recovered_1000f758(local_ac);
          goto LAB_100248c8;
        }
        uVar4 = local_c8 + 1;
        value = (char *)(*local_cc + local_c8 * 0x18);
        local_c8 = uVar4;
        if (local_bc == 100) {
LAB_1002473c:
          local_90 = 8;
          local_bc = uVar5;
          uVar6 = recovered_100091a8(value);
          local_90 = 9;
          recovered_100249b8((int *)&local_a0,(uint)uVar6,(uint)(uVar6 >> 0x20));
        }
        else if (local_bc == 0x66) {
          local_90 = 10;
          local_bc = uVar5;
          dVar7 = recovered_10009334(value);
          local_90 = 0xb;
          recovered_10008ec8((int *)&local_a0,SUB84(dVar7,0),(int)(pf_double_bits(dVar7) >> 0x20));
        }
        else {
          if (local_bc != 0x73) {
            if (local_bc != 0x69) {
              local_90 = 0xe;
              recovered_1000cfe0(aiStack_b8,DAT_100249b4);
              local_90 = 0xf;
              recovered_1000f9f0((int *)local_ac,aiStack_b8,(int)(char)local_bc);
              local_90 = 0x10;
              recovered_1000f758(local_ac);
              goto LAB_100248c8;
            }
            goto LAB_1002473c;
          }
          local_90 = 0xc;
          local_bc = uVar5;
          recovered_100089a4((int *)local_ac,value);
          local_90 = 0xd;
          recovered_10008fbc((int *)&local_a0,(int *)local_ac);
          recovered_10007424(local_ac[0]);
        }
      }
    }
    else {
      local_90 = 2;
      local_bc = uVar5;
      recovered_1000da6c((int *)&local_a0,*(char *)(iVar3 + uVar5));
    }
    uVar5 = local_bc + 1;
  } while( true );
}

#undef DAT_10024998
#undef DAT_1002499c
#undef DAT_100249a0
#undef DAT_100249a4
#undef DAT_100249a8
#undef DAT_100249ac
#undef DAT_100249b0
#undef DAT_100249b4
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef aiStack_b8
#undef uStack_94
#undef local_d0
#undef local_cc
#undef local_c8
#undef auStack_68
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_ac
#undef local_a0
#undef local_9c
#undef local_98

#undef DAT_10024aa0
#define DAT_10024aa0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20750U)))
#undef DAT_10024aa4
#define DAT_10024aa4 (*(int *)(((uintptr_t)pf_module_state + 0x20754U)))
#undef DAT_10024aa8
#define DAT_10024aa8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x20758U)))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(int * *)(frame + 28))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20668U)
 */

int * recovered_100249b8(int *param_1,uint in_r1,uint in_r2)

{
  unsigned char frame[224] = {0};


  recovered_10008e58(local_a0,in_r1,in_r2);
  local_7c = *DAT_10024aa8;
  local_78 = DAT_10024aa0;
  local_70 = DAT_10024aa4 + ((uintptr_t)pf_module_state+0x206c0U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100078f0(&uStack_94);
  local_a4 = param_1;
  recovered_10008fbc(param_1,(int *)local_a0);
  recovered_10007424(local_a0[0]);
  recovered_10007908(&uStack_94);
  return local_a4;
}

#undef DAT_10024aa0
#undef DAT_10024aa4
#undef DAT_10024aa8
#undef uStack_94
#undef auStack_b0
#undef auStack_68
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10024adc
#define DAT_10024adc (*(int * *)(((uintptr_t)pf_module_state + 0x2078cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2075cU)
 */

undefined4 * recovered_10024aac(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_10024adc + 8;
  return param_1;
}

#undef DAT_10024adc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20790U)
 */

void recovered_10024ae0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20794U)
 */

void recovered_10024ae4(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20798U)
 */

void recovered_10024ae8(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10024b24(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_10024b20
#define DAT_10024b20 (*(int * *)(((uintptr_t)pf_module_state + 0x207d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x207acU)
 */

void recovered_10024afc(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_10024b20 + 8;
  return;
}

#undef DAT_10024b20

#undef DAT_10024f8c
#define DAT_10024f8c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20c3cU)))
#undef DAT_10024f90
#define DAT_10024f90 (*(int *)(((uintptr_t)pf_module_state + 0x20c40U)))
#undef DAT_10024f94
#define DAT_10024f94 (*(int *)(((uintptr_t)pf_module_state + 0x20c44U)))
#undef DAT_10024f98
#define DAT_10024f98 (*(char * *)(((uintptr_t)pf_module_state + 0x20c48U)))
#undef DAT_10024f9c
#define DAT_10024f9c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x20c4cU)))
#undef DAT_10024fa0
#define DAT_10024fa0 (*(char * *)(((uintptr_t)pf_module_state + 0x20c50U)))
#undef DAT_10024fa4
#define DAT_10024fa4 (*(byte * *)(((uintptr_t)pf_module_state + 0x20c54U)))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_d0 (*(undefined1 * *)(frame + 16))
#define local_cc (*(int * *)(frame + 20))
#define local_c8 (*(int * *)(frame + 24))
#define local_c4 (*(int * *)(frame + 28))
#define local_c0 (*(byte * *)(frame + 32))
#define local_bc (*(uint *)(frame + 36))
#define local_b8 (*(void * *)(frame + 40))
#define local_b4 (*(undefined4 *)(frame + 44))
#define local_b0 (*(undefined4 *)(frame + 48))
#define local_ac (*(byte * *)(frame + 52))
#define local_a8 (*(int *)(frame + 56))
#define local_a0 (*(void * *)(frame + 64))
#define local_9c (*(undefined4 *)(frame + 68))
#define local_98 (*(undefined4 *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x207d4U)
 */

void recovered_10024b24(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[256] = {0};

  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;

  iVar1 = DAT_10024f94;
  local_d0 = param_1;
  recovered_1001ee3c(DAT_10024f94,param_4,3,3);
  piVar3 = (int *)recovered_100208d4(iVar1,(int *)param_4,0);
  piVar4 = (int *)recovered_100208d4(iVar1,(int *)param_4,1);
  local_c4 = (int *)recovered_100208d4(iVar1,(int *)param_4,2);
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  bVar2 = recovered_1000e0e8(piVar4,DAT_10024f98);
  local_7c = *DAT_10024f9c;
  local_78 = DAT_10024f8c;
  local_70 = DAT_10024f90 + ((uintptr_t)pf_module_state+0x2089cU);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_d0;
  recovered_100078f0(&uStack_94);
  local_c8 = piVar3;
  if (bVar2) {
    local_90 = 1;
    recovered_100235b8((int *)&local_ac,piVar3);
    if (local_a8 == 0) {
      local_90 = 2;
      recovered_1000dc38(&local_b8,local_c8);
    }
    else {
      uVar5 = 0;
      uVar6 = local_a8 << 3;
      pbVar7 = local_ac;
      while (uVar6 != 0) {
        local_90 = 4;
        local_c0 = pbVar7;
        local_bc = uVar6;
        recovered_10024fa8((int *)&local_a0,local_c8,uVar5,*(int *)pbVar7 - uVar5);
        local_90 = 5;
        recovered_10008fbc((int *)&local_a0,local_c4);
        pbVar7 = local_c0 + 8;
        uVar5 = *(uint *)(local_c0 + 4);
        uVar6 = local_bc - 8;
      }
      local_90 = 3;
      recovered_10024fa8((int *)&local_a0,local_c8,uVar5,local_c8[1] - uVar5);
      local_b0 = local_98;
      local_b4 = local_9c;
      local_b8 = local_a0;
      local_9c = 0;
      local_98 = 0;
      local_a0 = (void *)0x0;
    }
    local_a8 = 0;
    recovered_10007424(local_ac);
  }
  else {
    bVar2 = recovered_1000e0e8(piVar4,DAT_10024fa0);
    if (bVar2) {
      local_90 = 6;
      recovered_1000d1d0((int *)&local_a0,piVar3[1]);
      uVar6 = local_c8[1];
      pbVar7 = DAT_10024fa4;
      if ((byte *)*local_c8 != (byte *)0x0) {
        pbVar7 = (byte *)*local_c8;
      }
      while (uVar6 != 0) {
        local_c8 = (int *)(uint)*pbVar7;
        local_90 = 7;
        local_c0 = pbVar7;
        local_bc = uVar6;
        bVar2 = recovered_10007b34((int)local_c8);
        if (bVar2) {
          local_90 = 8;
          recovered_10008fbc((int *)&local_a0,local_c4);
        }
        else {
          local_90 = 9;
          recovered_1000da6c((int *)&local_a0,(char)local_c8);
        }
        pbVar7 = local_c0 + 1;
        uVar6 = local_bc - 1;
      }
    }
    else {
      uVar6 = piVar4[1];
      if (uVar6 == 0) {
        local_90 = 10;
        recovered_1000dc38(&local_b8,piVar3);
        goto LAB_10024ea8;
      }
      local_c0 = DAT_10024fa4;
      uVar5 = 0;
      local_cc = piVar4;
      while (piVar4 = local_c8, uVar5 < (uint)piVar3[1]) {
        pbVar7 = (byte *)*local_cc;
        if ((byte *)*local_cc == (byte *)0x0) {
          pbVar7 = local_c0;
        }
        uVar6 = recovered_10023784(local_c8,(char *)pbVar7,uVar6,uVar5);
        if (uVar6 == 0xffffffff) {
          local_90 = 0xb;
          recovered_10024fa8((int *)&local_a0,piVar4,uVar5,piVar4[1] - uVar5);
          break;
        }
        local_90 = 0xc;
        local_bc = uVar6;
        recovered_10024fa8((int *)&local_a0,piVar4,uVar5,uVar6 - uVar5);
        local_90 = 0xd;
        recovered_10008fbc((int *)&local_a0,local_c4);
        uVar6 = local_cc[1];
        piVar3 = local_c8;
        uVar5 = uVar6 + local_bc;
      }
    }
    local_b0 = local_98;
    local_b4 = local_9c;
    local_b8 = local_a0;
    local_9c = 0;
    local_98 = 0;
    local_a0 = (void *)0x0;
  }
LAB_10024ea8:
  recovered_10007424(local_a0);
  recovered_10008394(local_d0,&local_b8);
  recovered_10007424(local_b8);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_10024f8c
#undef DAT_10024f90
#undef DAT_10024f94
#undef DAT_10024f98
#undef DAT_10024f9c
#undef DAT_10024fa0
#undef DAT_10024fa4
#undef uStack_94
#undef auStack_68
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
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10025090
#define DAT_10025090 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20d40U)))
#undef DAT_10025094
#define DAT_10025094 (*(int *)(((uintptr_t)pf_module_state + 0x20d44U)))
#undef DAT_10025098
#define DAT_10025098 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x20d48U)))
#define local_a0 (*(void * (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20c58U)
 */

uint recovered_10024fa8(int *param_1,int *in_r1,uint in_r2,uint in_r3)

{
  unsigned char frame[208] = {0};

  uint uVar1;

  recovered_1002319c(local_a0,in_r1,in_r2,in_r3);
  local_7c = *DAT_10025098;
  local_78 = DAT_10025090;
  local_70 = DAT_10025094 + ((uintptr_t)pf_module_state+0x20cb0U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  recovered_100078f0(&uStack_94);
  uVar1 = recovered_1002509c(param_1,(int *)local_a0);
  recovered_10007424(local_a0[0]);
  recovered_10007908(&uStack_94);
  return uVar1;
}

#undef DAT_10025090
#undef DAT_10025094
#undef DAT_10025098
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_100250b4
#define DAT_100250b4 (*(int *)(((uintptr_t)pf_module_state + 0x20d64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d4cU)
 */

uint recovered_1002509c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;
  int in_r3;

  in_r3 = *param_2;
  iVar2 = DAT_100250b4;
  if (in_r3 != 0) {
    iVar2 = in_r3;
  }
  piVar1 = recovered_1000dc80(param_1,iVar2,param_2[1],in_r3);
  return (uint)piVar1;
}

#undef DAT_100250b4

#undef DAT_100250e8
#define DAT_100250e8 (*(int * *)(((uintptr_t)pf_module_state + 0x20d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d68U)
 */

undefined4 * recovered_100250b8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *param_1 = piVar1;
  *piVar1 = *DAT_100250e8 + 8;
  return param_1;
}

#undef DAT_100250e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d9cU)
 */

void recovered_100250ec(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100074d8
#define DAT_100074d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100074dc
#define DAT_100074dc (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100074e0
#define DAT_100074e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20da0U)
 */

void recovered_100250f0(void *pointer)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100074e0;
  uStack_78 = DAT_100074d8;
  iStack_70 = DAT_100074dc + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100078f0(&uStack_94);
  recovered_10004e58(pointer);
  recovered_10007908(&uStack_94);
  return;
}

#undef DAT_100074d8
#undef DAT_100074dc
#undef DAT_100074e0
#undef uStack_94
#undef auStack_a0
#undef puStack_74
#undef uStack_78
#undef uStack_7c
#undef uStack_90
#undef auStack_68
#undef puStack_6c
#undef iStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20da4U)
 */

void recovered_100250f4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_10025130(param_1,param_2 + 4,param_3,param_4);
  return;
}


#undef DAT_1002512c
#define DAT_1002512c (*(int * *)(((uintptr_t)pf_module_state + 0x20ddcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20db8U)
 */

void recovered_10025108(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100073f4(8);
  *piVar1 = *DAT_1002512c + 8;
  return;
}

#undef DAT_1002512c

#undef DAT_100251d0
#define DAT_100251d0 (*(int *)(((uintptr_t)pf_module_state + 0x20e80U)))
#undef DAT_100251d4
#define DAT_100251d4 (*(byte * *)(((uintptr_t)pf_module_state + 0x20e84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20de0U)
 */

void recovered_10025130(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  iVar3 = DAT_100251d0;
  recovered_1001ee3c(DAT_100251d0,param_4,1,1);
  pcVar2 = recovered_100208d4(iVar3,(int *)param_4,0);
  iVar3 = *(int *)(pcVar2 + 4);
  pbVar4 = DAT_100251d4;
  if (*(byte **)pcVar2 != (byte *)0x0) {
    pbVar4 = *(byte **)pcVar2;
  }
  iVar6 = 0;
  uVar7 = 0;
  while (iVar3 != 0) {
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    iVar3 = iVar3 + -1;
    pbVar4 = pbVar5;
    if ((bVar1 & 0xc0) != 0x80) {
      iVar6 = iVar6 + (uint)(0xfffffffe < uVar7);
      uVar7 = uVar7 + 1;
    }
  }
  *(uint *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_1 = 1;
  *(int *)(param_1 + 0xc) = iVar6;
  return;
}

#undef DAT_100251d0
#undef DAT_100251d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20e88U)
 */

void recovered_100251d8(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000d2d0((undefined4 *)(param_1 + 0x18));
  recovered_1000d2d0((undefined4 *)(param_1 + 0xc));
  recovered_1001e80c((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20eb0U)
 */

int * recovered_10025200(int *param_1)

{
  unsigned char frame[64] = {0};

  void *pointer;

  pointer = (void *)0x0;
  if (*param_1 != 0) {
    pointer = (void *)recovered_10025228(*param_1);
  }
  recovered_10007424(pointer);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20ed8U)
 */

uint recovered_10025228(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  recovered_100103bc((undefined4 *)(param_1 + 0x5c));
  recovered_1001d318((int *)(param_1 + 0x50));
  recovered_100251d8(param_1 + 0x28);
  uVar1 = recovered_1000d5e8(param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20f08U)
 */

void recovered_10025258(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  void *pointer;

  iVar1 = *param_1;
  *param_1 = param_2;
  pointer = (void *)0x0;
  if (iVar1 != 0) {
    pointer = (void *)recovered_10025228(iVar1);
  }
  recovered_10007424(pointer);
  return;
}

