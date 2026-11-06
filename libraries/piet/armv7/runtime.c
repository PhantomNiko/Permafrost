#include "word_divide.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

uint32_t recovered_1000202c(uint32_t a,uint32_t b){uint32_t rest;return pf_word_divide(a,b,0);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_10002034(uint param_1,uint param_2,uint *param_3)

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
uint32_t recovered_100020ac(uint32_t a,uint32_t b){uint32_t rest;return (pf_word_divide(a,b,&rest),rest);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

uint32_t recovered_100020d0(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,0);}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

uint32_t recovered_10002108(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,1);}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_1000214c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


#undef DAT_100022d4
#define DAT_100022d4 (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10002254(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_100022d4;
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

#undef DAT_100022d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_100022dc(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10002254(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10002254(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_10002328(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002254(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_10002338(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_100022dc(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

void recovered_10002348(uint param_1,uint param_2)

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

void recovered_1000237c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 0) {
    recovered_10002348(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10002348(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_100023a4(void)

{
  unsigned char frame[64] = {0};

  uint in_r0;
  undefined4 extraout_r0 = 0;
  uint in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10002348(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_100023c0(void)

{
  unsigned char frame[64] = {0};

  int in_r0;
  undefined4 extraout_r0 = 0;
  int in_r1;
  undefined4 extraout_r1 = 0;

  recovered_1000237c(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_100023ec
#define DAT_100023ec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_100023dc(void)

{
  unsigned char frame[64] = {0};

  *DAT_100023ec = 0;
  recovered_100023f0();
  return;
}

#undef DAT_100023ec

#undef DAT_100025d0
#define DAT_100025d0 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_100025d4
#define DAT_100025d4 (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_a4 (*(uint (*)[32])(frame + 16))
#define local_24 (*(int *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

void recovered_100023f0(void)

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

  pcVar1 = DAT_100025d4;
  local_24 = 0;
  if (*DAT_100025d4 == '\0') {
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar5 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_100025d0[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar5 != uVar10; uVar5 = uVar5 + 1) {
      uVar8 = DAT_100025d0[uVar5 * 2 + 2];
      uVar4 = DAT_100025d0[uVar5 * 2 + 3];
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
      recovered_10003fc0(puVar3[-1],*puVar3,&local_24,in_r3);
      in_r3 = extraout_r3;
      puVar3 = puVar3 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar5 = 0x4000000;
      if (0x300000 < *DAT_100025d0) {
        uVar5 = *DAT_100025d0 & 0xfffffff0;
      }
      uVar10 = uVar5 - 0x300000;
      if (uVar5 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10003fc0(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_100025d0
#undef DAT_100025d4
#undef EXT_00000010
#undef local_a4
#undef local_24

#undef DAT_10002618
#define DAT_10002618 (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_100025d8(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_100023f0();
  iVar1 = 0;
  piVar2 = DAT_10002618;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_10002618

#undef DAT_10002668
#define DAT_10002668 (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_1000261c(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100023f0();
  iVar1 = DAT_10002668;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10002668

#undef DAT_100026a0
#define DAT_100026a0 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_1000266c(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_100023f0();
  iVar1 = 0;
  piVar2 = DAT_100026a0;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_100026a0

#undef DAT_100026e0
#define DAT_100026e0 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_100026a4(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100023f0();
  iVar1 = DAT_100026e0;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_100026e0

#undef DAT_10002784
#define DAT_10002784 (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_100026e4(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_100023f0();
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10002784;
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

#undef DAT_10002784

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_10002788(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_100027e4(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_1000283c(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10002888(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_100028a4(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_100028a4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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

undefined8 recovered_100029ac(void)

{
  unsigned char frame[584] = {0};

  uint in_r0;
  uint in_r1;
  uint in_r2;
  uint in_r3;

  recovered_100028a4(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_100029e0(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_100028a4((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_10002a58(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_100028a4((param_1 ^ uVar2) - uVar2,
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

void recovered_10002adc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_10002ae4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10002af0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10002b34(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10002b74(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10002bc0(void *out,void *data,ulong size)

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

void * recovered_10002bdc(void *out,void *data,ulong size)

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

void * recovered_10002c30(void *out,int value,ulong size)

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

void recovered_10002c48(undefined1 *param_1,int param_2)

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

void recovered_10002c60(undefined1 *param_1,int param_2)

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

int recovered_10002c78(void *left,void *right,ulong size)

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

bool recovered_10002ca0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_10002cb4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_10002cc8(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_10002ce0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_10002d0c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_10002d2c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_10002d40(int param_1)

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

int recovered_10002d50(int param_1)

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

ulong recovered_10002d60(char *text)

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

int recovered_10002d90(char *left,char *right)

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

int recovered_10002dbc(char *left,char *right)

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

void recovered_10002dc0(int param_1,int param_2)

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

void * recovered_10002ddc(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10002d60(param_1);
    out = recovered_10002af0(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10002bc0(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_10002e24(char *param_1,char param_2)

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

int recovered_10002e50(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_10002e24(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_10002e94(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10002e24(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_10002ed4(char *param_1,char *param_2)

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


#undef DAT_10002f24
#define DAT_10002f24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_10002f1c(void)

{
  unsigned char frame[64] = {0};

  return DAT_10002f24;
}

#undef DAT_10002f24

#undef DAT_10002f30
#define DAT_10002f30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_10002f28(void)

{
  unsigned char frame[64] = {0};

  return DAT_10002f30;
}

#undef DAT_10002f30

#undef DAT_10002f48
#define DAT_10002f48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_10002f34(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10002f48;
  }
  return;
}

#undef DAT_10002f48

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_10002f4c(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_10002f8c(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_10003024(double left,double right)

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

double recovered_1000305c(double left,double right)

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

double recovered_100030d8(double value)

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

double recovered_10003108(double value)

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

double recovered_1000314c(double value)

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


#undef DAT_1000325c
#define DAT_1000325c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10003264
#define DAT_10003264 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_1000319c(double value)

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

#undef DAT_1000325c
#undef DAT_10003264

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_1000326c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_100022dc(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_100032ec
#define DAT_100032ec (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_100032f4
#define DAT_100032f4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_1000329c(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_100032fc();
  return extraout_d0;
}

#undef DAT_100032ec
#undef DAT_100032f4

#undef DAT_10003334
#define DAT_10003334 (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_1000333c
#define DAT_1000333c (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10003344
#define DAT_10003344 (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_1000334c
#define DAT_1000334c (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

void recovered_100032fc(void)

{
  unsigned char frame[64] = {0};

  double in_d0;

  for (; DAT_10003334 < in_d0; in_d0 = in_d0 + DAT_1000334c) {
  }
  for (; in_d0 < DAT_1000333c; in_d0 = in_d0 + DAT_10003344) {
  }
  return;
}

#undef DAT_10003334
#undef DAT_1000333c
#undef DAT_10003344
#undef DAT_1000334c

#undef DAT_1000339c
#define DAT_1000339c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10003354(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_100032fc();
  return extraout_d0;
}

#undef DAT_1000339c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_100033a4(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_100033fc
#define DAT_100033fc (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_100033c4(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_100033fc;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_100033fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10003400(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002f8c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_1000342c(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002f4c(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_10003458(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_1000305c(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10003490(float value)

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

float recovered_100034c8(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10003108(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_100034f0(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_10003108(value);
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

float recovered_10003530(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100034f0(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_10003558(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000314c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10003580(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000319c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_100035a8(void)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  recovered_1000326c(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_100035b8(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1000329c(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_100035e0(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10003354(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_10003608(float value)

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

int recovered_10003624(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_1000374c((int)(char)*pbVar1);
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

uint recovered_1000374c(int param_1)

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

int recovered_10003790(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_100037ec;
  }
  bVar1 = false;
LAB_100037ec:
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
    uVar3 = recovered_1000374c((int)(char)*pbVar2);
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

double recovered_100038b0(char *text,char **end)

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
        recovered_10002f4c(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_10003a4c(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100038b0(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10003e60
#define DAT_10003e60 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_10003a68(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10003ac4:
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
LAB_10003af4:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_10003af8;
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
LAB_10003b7c:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10003b8c_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10003b8c_caseD_64;
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
switchD_10003b8c_caseD_65:
      if (local_48 < 2) goto LAB_10003af8;
      *local_44 = 0x3f;
      goto LAB_10003af4;
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
      recovered_10003ef4((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_10003b40;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10003b8c_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10003ea0((int *)&local_44,&local_48,&local_4c,DAT_10003e60);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10003ea0((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_10003b40;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_10003e10;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_10003dfc:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_10003dfc;
        }
        goto switchD_10003b8c_caseD_65;
      }
      goto switchD_10003b8c_caseD_64;
    }
    goto LAB_10003e28;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_10003b38;
switchD_10003b8c_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10003b7c;
switchD_10003b8c_caseD_64:
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
LAB_10003e10:
  uVar12 = 10;
  iVar3 = 0;
LAB_10003e28:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_10003ef4((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_10003b40;
switchD_10003b8c_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_10003af8:
  pdVar7 = arguments;
LAB_10003b38:
  local_4c = local_4c + 1;
LAB_10003b40:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_10003ac4;
}

#undef DAT_10003e60
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_10003e64(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_10003ef0
#define DAT_10003ef0 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10003ea0(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_10003ef0;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10003e64(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10003ef0

#undef DAT_10003f8c
#define DAT_10003f8c (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10003f90
#define DAT_10003f90 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_10003ef4(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_10003f90;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar3 = DAT_10003f8c;
  }
  do {
    iVar2 = iVar1;
    recovered_1000202c(param_4,param_5);
    bVar4 = param_5 <= param_4;
    local_40[-iVar2] = *(undefined1 *)(iVar3 + (param_4 - extraout_r0 * param_5));
    param_4 = extraout_r0;
    iVar1 = iVar2 + -1;
  } while (bVar4);
  for (; iVar2 != 1; iVar2 = iVar2 + 1) {
    recovered_10003e64(param_1,param_2,param_3,local_40[-iVar2]);
  }
  return;
}

#undef DAT_10003f8c
#undef DAT_10003f90
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_10003f94(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_10003a68(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_10004024
#define DAT_10004024 (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10003fc0(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_10004024 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_10004024

#undef DAT_10004074
#define DAT_10004074 (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
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

undefined4 recovered_10004028(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10004074) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10004074
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_10004124
#define DAT_10004124 (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_10004128
#define DAT_10004128 (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_10004078(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_10004128;
  piVar2 = DAT_10004124;
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
LAB_10004108:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_1000412c(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10004108;
      }
      recovered_1000412c(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10004124
#undef DAT_10004128

#undef DAT_100041ac
#define DAT_100041ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_100041b0
#define DAT_100041b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_100041b4
#define DAT_100041b4 (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_1000412c(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_100041b0;
  size = *DAT_100041b0;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10002bc0(local_214,DAT_100041b4,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_10004f70(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_100041ac != (code *)0x0)) {
      (*(code *)*DAT_100041ac)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_100041ac
#undef DAT_100041b0
#undef DAT_100041b4
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_100041b8(void)

{
  unsigned char frame[64] = {0};

  recovered_1000412c(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_100041c0(void)

{
  unsigned char frame[64] = {0};

  recovered_1000412c(0);
  return;
}


#undef DAT_10004210
#define DAT_10004210 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10004214
#define DAT_10004214 (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_100041c8(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10004210;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10004214;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_10003f94(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_10004078(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10004210
#undef DAT_10004214
#undef acStack_14c

#undef DAT_10004254
#define DAT_10004254 (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10004258
#define DAT_10004258 (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_1000425c
#define DAT_1000425c (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10004260
#define DAT_10004260 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10004264
#define DAT_10004264 (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10004268
#define DAT_10004268 (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_10004218(void)

{
  unsigned char frame[64] = {0};

  recovered_1000426c(DAT_10004254);
  recovered_1000426c(DAT_10004258);
  recovered_1000426c(DAT_1000425c);
  recovered_1000426c(DAT_10004260);
  recovered_1000426c(DAT_10004264);
  recovered_1000426c(DAT_10004268);
  return;
}

#undef DAT_10004254
#undef DAT_10004258
#undef DAT_1000425c
#undef DAT_10004260
#undef DAT_10004264
#undef DAT_10004268

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_1000426c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10002d60(param_1);
  recovered_10004078(param_1,uVar1);
  return;
}


#undef DAT_100042b0
#define DAT_100042b0 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_100042b4
#define DAT_100042b4 (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10004294(void)

{
  unsigned char frame[64] = {0};

  recovered_1000426c(DAT_100042b0);
  recovered_1000426c(DAT_100042b4);
  return;
}

#undef DAT_100042b0
#undef DAT_100042b4

#undef DAT_10004338
#define DAT_10004338 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_100042b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_100041c0();
    iVar1 = recovered_10004f70(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_10004338 != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_10004338)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10004338

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_1000433c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_10004344(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_10004348(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_100045f8
#define DAT_100045f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_100045fc
#define DAT_100045fc (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10004600
#define DAT_10004600 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10004604
#define DAT_10004604 (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_10004608
#define DAT_10004608 (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10004350(char *param_1,int param_2)

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
    goto LAB_10004594;
  }
  iVar2 = recovered_10002d90(param_1,DAT_100045fc);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10004530:
    puVar4 = recovered_10002af0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002c30(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_10003f94((char *)(puVar4 + 1),0xf1,DAT_10004608,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10002d90(param_1,DAT_10004600);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10004530;
    }
    iVar3 = recovered_10002d90(param_1,DAT_10004604);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10004530;
    }
    puVar4 = recovered_10002af0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002c30(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10002e24(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10002e24(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10002e24(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10002e24(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10002e24(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10002e24(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_10002e24(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_10003f94((char *)(puVar4 + 1),0xf1,DAT_10004608,param_1);
      recovered_10002c30(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_1000460c(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_100045f8 = 2;
LAB_100045cc:
          recovered_10002b34(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_10002e24(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_10004658((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_100045cc;
            recovered_10002bc0((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10004594:
  *(undefined4 *)*DAT_100045f8 = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_100045f8
#undef DAT_100045fc
#undef DAT_10004600
#undef DAT_10004604
#undef DAT_10004608
#undef auStack_a8

#undef DAT_10004654
#define DAT_10004654 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_1000460c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004f70(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10004654 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10004654)(param_1,param_2);
  return uVar2;
}

#undef DAT_10004654

#undef DAT_100046dc
#define DAT_100046dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_10004658(int param_1,uint param_2)

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
      pvVar2 = recovered_10002b74(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_100046dc = 0xc;
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

#undef DAT_100046dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_100046e0(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_1000470c(param_3);
  }
  recovered_10004350(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_1000470c(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10004aa4(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10002b34((void *)param_1[0x3f]);
    }
    recovered_10002b34(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10004750(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_100047f0(unaff_r6);
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


#undef DAT_100048d8
#define DAT_100048d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_100047f0(int *param_1)

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
        bVar1 = recovered_100042b8((int)text,0x1fe,DAT_100048d8,0);
        if (!bVar1) goto LAB_100048c8;
        uVar3 = recovered_10002d60(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_100048c8:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_100048d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_100048dc(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_10004078(param_1,size);
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
        iVar3 = recovered_10004658((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_10002c30((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10002bc0((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_10004a7c
#define DAT_10004a7c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_100049e8(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10004a04;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_100049fc;
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
LAB_100049fc:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10004a04:
  *(undefined4 *)*DAT_10004a7c = 0x16;
  return 0xffffffff;
}

#undef DAT_10004a7c

#undef DAT_10004aa0
#define DAT_10004aa0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_10004a80(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10004aa0 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10004aa0

#undef DAT_10004b18
#define DAT_10004b18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_10004aa4(uint *param_1)

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
      iVar1 = recovered_10004cb4(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10004b18 = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_10004b18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_10004b1c(int param_1)

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

undefined1 recovered_10004b2c(int param_1)

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

void recovered_10004b3c(int param_1)

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

void recovered_10004b58(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10004bc0
#define DAT_10004bc0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_10004b7c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_10004bc4(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10004bc0 = uVar2;
  return 0xffffffff;
}

#undef DAT_10004bc0

#undef DAT_10004c04
#define DAT_10004c04 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_10004bc4(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004f70(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_10004c04 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10004c04)(param_1);
  return uVar2;
}

#undef DAT_10004c04

#undef DAT_10004cb0
#define DAT_10004cb0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_10004c08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10002c30(&local_20,0,0xc);
    iVar1 = recovered_1000460c(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_10004cb4(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_10004bc4(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10004cb0 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10004cb0 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10004cb0
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_10004d04
#define DAT_10004d04 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_10004cb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10004f70(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_10004d04 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10004d04)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_10004d04

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_10004d08(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_10002c30(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_1000460c(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_10002af0(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10002bc0(out,unaff_r5,unaff_r6);
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

bool recovered_10004dc0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_10004cb4(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_10004e00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_10004e08(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_10004e0c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_10004e14(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_10004e1c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_10004e24(int param_1,char param_2,int param_3)

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

int recovered_10004e4c(char *left,char *right,ulong size)

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


#undef DAT_10004f24
#define DAT_10004f24 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_10004f28
#define DAT_10004f28 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_10004f2c
#define DAT_10004f2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_10004f30
#define DAT_10004f30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_10004f34
#define DAT_10004f34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_10004f38
#define DAT_10004f38 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_10004f3c
#define DAT_10004f3c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_10004f40
#define DAT_10004f40 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_10004f44
#define DAT_10004f44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10004e8c(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_10004f44;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10004ea0_caseD_0;
  case 2:
    return DAT_10004f28;
  case 5:
    return DAT_10004f2c;
  case 9:
    return DAT_10004f30;
  case 0xc:
    return DAT_10004f34;
  case 0xd:
    return DAT_10004f38;
  default:
    if (param_1 == 0x11) {
      return DAT_10004f3c;
    }
    if (param_1 == 0x16) {
      return DAT_10004f24;
    }
switchD_10004ea0_caseD_0:
    return DAT_10004f40;
  }
}

#undef DAT_10004f24
#undef DAT_10004f28
#undef DAT_10004f2c
#undef DAT_10004f30
#undef DAT_10004f34
#undef DAT_10004f38
#undef DAT_10004f3c
#undef DAT_10004f40
#undef DAT_10004f44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_10004f48(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_10004f50(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10004f6c
#define DAT_10004f6c (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_10004f58(void)

{
  unsigned char frame[64] = {0};

  *DAT_10004f6c = *DAT_10004f6c + 1;
  return;
}

#undef DAT_10004f6c

#undef DAT_10004fbc
#define DAT_10004fbc (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
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

undefined4 recovered_10004f70(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10004fbc) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10004fbc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_10004fc0(int param_1)

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

undefined4 recovered_10004fd0(undefined4 *param_1)

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

int recovered_10004fe8(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_10005080
#define DAT_10005080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_10005084
#define DAT_10005084 (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10005088
#define DAT_10005088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
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

void recovered_10005008(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10005088;
  local_20 = DAT_10005080;
  local_18 = DAT_10005084 + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_100055cc(&uStack_3c);
  recovered_10002adc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_10005080
#undef DAT_10005084
#undef DAT_10005088
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

undefined4 recovered_1000508c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_10005094(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100050a4(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10005008();
}


#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int *)(((uintptr_t)pf_module_state + 0xa29cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_100050a4(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1000c2c8;
  DAT_1000c2c8 = param_1;
  recovered_10005488(param_1);
  return;
}

#undef DAT_1000c2c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_100050d0(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002af0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002adc();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_100050fc(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002af0(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002adc();
  }
  return pvVar1;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10005100(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100051bc;
  local_78 = DAT_100051b4;
  local_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10005274
#define DAT_10005274 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_10005278
#define DAT_10005278 (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_1000527c
#define DAT_1000527c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3194U)
 */

void recovered_100051c0(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000527c;
  local_78 = DAT_10005274;
  local_70 = DAT_10005278 + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_10005274
#undef DAT_10005278
#undef DAT_1000527c
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_10005334
#define DAT_10005334 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_10005338
#define DAT_10005338 (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_1000533c
#define DAT_1000533c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3254U)
 */

void recovered_10005280(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000533c;
  local_78 = DAT_10005334;
  local_70 = DAT_10005338 + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(param_1);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_10005334
#undef DAT_10005338
#undef DAT_1000533c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

#undef DAT_100053f4
#define DAT_100053f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_100053f8
#define DAT_100053f8 (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_100053fc
#define DAT_100053fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
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
 * Address: ((uintptr_t)pf_module_state+0x3314U)
 */

void recovered_10005340(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100053fc;
  local_78 = DAT_100053f4;
  local_70 = DAT_100053f8 + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(param_1);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100053f4
#undef DAT_100053f8
#undef DAT_100053fc
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_68
#undef local_74
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d4U)
 */

undefined4 recovered_10005400(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_10005408(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_10005418(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_10005428(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_1000542c(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_10002af0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005008();
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

void recovered_10005478(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10002b34((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_10005488(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_100054e8
#define DAT_100054e8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10005490(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_100054e8;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_100054e8 = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_10002b34(buffer);
  return;
}

#undef DAT_100054e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_100054ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10005514((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10005590
#define DAT_10005590 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10005514(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10005590;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) goto LAB_1000558c;
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10005abc((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
  recovered_10005650(param_1);
LAB_1000558c:
                    /* WARNING: Subroutine does not return */
  recovered_10005008();
}

#undef DAT_10005590
#undef local_28
#undef local_24
#undef local_20

#undef DAT_100055c8
#define DAT_100055c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

void recovered_10005594(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_100055c8;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_10005008();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10005514(puVar1);
}

#undef DAT_100055c8

#undef DAT_100055e0
#define DAT_100055e0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

void recovered_100055cc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_100055e0;
  *param_1 = *DAT_100055e0;
  *puVar1 = param_1;
  return;
}

#undef DAT_100055e0

#undef DAT_10005610
#define DAT_10005610 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_100055e4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10005610;
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

#undef DAT_10005610

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10005614(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10005514(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10005620(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005008();
}


#undef LAB_1000564c
#define LAB_1000564c (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
#undef LAB_100056f8
#define LAB_100056f8 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#undef piRam1000564c
#define piRam1000564c (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
#undef piRam100056f8
#define piRam100056f8 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_130 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_1000562c(undefined4 *param_1)

{
  unsigned char frame[352] = {0};

  int *piVar1;
  undefined4 *extraout_r0 = 0;
  undefined4 uVar2;
  undefined4 *extraout_r0_00 = 0;
  undefined4 uVar3;
  int *piVar4;

  if ((int *)*piRam1000564c != (int *)0x0) {
    *piRam1000564c = *(int *)*piRam1000564c;
  }
  recovered_10005650(param_1);
  piVar1 = piRam100056f8;
  piVar4 = (int *)*piRam100056f8;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10005008();
    }
    if (piVar4 == (int *)extraout_r0[3]) break;
    recovered_10005abc((int)piVar4,(int *)*extraout_r0,auStack_130 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = extraout_r0[5];
  piVar4[2] = (int)extraout_r0;
  uVar2 = extraout_r0[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_10004fc0((int)piVar4);
                    /* WARNING: Subroutine does not return */
  recovered_1000562c(extraout_r0_00);
}

#undef LAB_1000564c
#undef LAB_100056f8
#undef piRam1000564c
#undef piRam100056f8
#undef auStack_130

#undef LAB_100056f8
#define LAB_100056f8 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#undef piRam100056f8
#define piRam100056f8 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10005650(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 *extraout_r0 = 0;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = piRam100056f8;
  piVar4 = (int *)*piRam100056f8;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10005008();
    }
    if (piVar4 == (int *)param_1[3]) break;
    recovered_10005abc((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_10004fc0((int)piVar4);
                    /* WARNING: Subroutine does not return */
  recovered_1000562c(extraout_r0);
}

#undef LAB_100056f8
#undef piRam100056f8
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_100056fc(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_1000562c(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_10005708(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_10005710(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005008();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_1000571c(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_1000575c(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_10005800
#define DAT_10005800 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_1000575c(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_10005800 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10005800

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_10005804(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_10005808(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_10005810(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_10005824(int param_1)

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

bool recovered_10005860(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_1000588c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_100058a8(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_100058c4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_100058e0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_100058fc(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100030d8(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_10005954(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_100059a0;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_100059a0:
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

ulonglong recovered_10005ab8(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_100059a0;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_100059a0:
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

#undef DAT_10005cd4
#define DAT_10005cd4 (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_10005abc(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10005cd8((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_10005e04(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_10005e04(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_10005e04(&local_24);
        uVar6 = recovered_10005e04(&local_24);
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
            uVar6 = recovered_10005e64((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_10005e64((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_10005cd4 + uVar5 * 4) * uVar6;
                puVar9 = recovered_10005cd8(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_1000575c(param_2,(int *)puVar9);
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

#undef DAT_10005cd4
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_10005cd8(uint param_1,int *param_2)

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
    recovered_10005e3c(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_10005dc0;
  case 1:
    puVar2 = (uint *)recovered_10005e04(param_2);
    break;
  case 2:
    recovered_10005e3c(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_10005dc0;
  case 4:
  case 0xc:
    recovered_10005e3c(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_10005dc0:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_10005d0c_caseD_5;
  case 9:
    puVar2 = (uint *)recovered_10005e64(param_2);
    break;
  case 10:
    recovered_10005e3c(iVar3,2);
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
switchD_10005d0c_caseD_5:
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_10005e04(undefined4 *param_1)

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

void recovered_10005e3c(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e38U)
 */

uint recovered_10005e64(undefined4 *param_1)

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

void recovered_10005eb4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e8cU)
 */

void recovered_10005eb8(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_10005fcc
#define DAT_10005fcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3fa0U)))
#undef DAT_10005fd0
#define DAT_10005fd0 (*(int *)(((uintptr_t)pf_module_state + 0x3fa4U)))
#undef DAT_10005fd4
#define DAT_10005fd4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3fa8U)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(undefined1 * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e90U)
 */

void recovered_10005ebc(undefined1 *param_1,int *param_2)

{
  unsigned char frame[208] = {0};

  int *piVar1;
  undefined4 extraout_r2 = 0;
  int extraout_r3 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *piVar1 = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  local_7c = *DAT_10005fd4;
  local_78 = DAT_10005fcc;
  local_70 = DAT_10005fd0 + ((uintptr_t)pf_module_state+0x3f14U);
  local_90 = 1;
  local_9c = param_1;
  local_98 = piVar1;
  recovered_100055cc(&uStack_94);
  recovered_10005fd8(piVar1,param_2,extraout_r2,extraout_r3);
  local_9c[0x1c] = 0;
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_10005fcc
#undef DAT_10005fd0
#undef DAT_10005fd4
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

#undef DAT_10006010
#define DAT_10006010 (*(int *)(((uintptr_t)pf_module_state + 0x3fe4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3facU)
 */

int * recovered_10005fd8(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != param_2) {
    iVar1 = DAT_10006010;
    if (*param_2 != 0) {
      iVar1 = *param_2;
    }
    recovered_10008c5c(param_1,iVar1,param_2[1],param_4);
  }
  return param_1;
}

#undef DAT_10006010

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fe8U)
 */

void recovered_10006014(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  recovered_10006050((undefined4 *)(param_1 + 4),param_2);
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4024U)
 */

undefined4 * recovered_10006050(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    recovered_10005100((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x4074U)
 */

void recovered_100060a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *param_1 = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x40a0U)
 */

void recovered_100060cc(undefined1 *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x1c] = 0;
  *param_1 = 2;
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x40d4U)
 */

void recovered_10006100(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x40f8U)
 */

void recovered_10006124(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  int *in_r1;
  undefined4 in_r2;
  int in_r3;

  *param_1 = 1;
  recovered_10005fd8((int *)(param_1 + 4),in_r1,in_r2,in_r3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4124U)
 */

void recovered_10006150(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r1;

  *param_1 = 1;
  recovered_10006050((undefined4 *)(param_1 + 4),in_r1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4150U)
 */

void recovered_1000617c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4178U)
 */

void recovered_100061a4(undefined4 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  if (*param_2 == '\x02') {
    recovered_100061f8(param_1,*(uint *)(param_2 + 0x10),*(uint *)(param_2 + 0x14));
    return;
  }
  if (*param_2 == '\x01') {
    recovered_10008e2c(param_1,(int *)(param_2 + 4));
    return;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


#define local_38 (*(int *)(frame + 16))
#define local_34 (*(int *)(frame + 20))
#define abStack_30 (*(byte (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x41ccU)
 */

void recovered_100061f8(undefined4 *param_1,uint param_2,uint param_3)

{
  unsigned char frame[104] = {0};


  recovered_10008e74(&local_38,abStack_30,abStack_30 + 0x20,param_2,param_3,10);
  if (local_34 == 0) {
    recovered_10008ddc(param_1,(int)abStack_30,local_38 - (int)abStack_30);
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
#undef abStack_30

#undef DAT_1000639c
#define DAT_1000639c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4370U)))
#undef DAT_100063a0
#define DAT_100063a0 (*(byte * *)(((uintptr_t)pf_module_state + 0x4374U)))
#define local_18 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x423cU)
 */

undefined4 recovered_10006268(char *param_1)

{
  unsigned char frame[72] = {0};

  undefined4 uVar1;
  byte *extraout_r3 = 0;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  ulonglong uVar5;

  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 8) != 0) {
      piVar3 = (int *)*DAT_1000639c;
      local_18 = (byte *)0x0;
      *piVar3 = 0;
      pbVar4 = DAT_100063a0;
      pbVar2 = *(byte **)(param_1 + 4);
      if (*(byte **)(param_1 + 4) == (byte *)0x0) {
        pbVar2 = DAT_100063a0;
      }
      uVar5 = recovered_10005ab8(pbVar2,&local_18,10);
      pbVar2 = *(byte **)(param_1 + 4);
      if (*(byte **)(param_1 + 4) == (byte *)0x0) {
        pbVar2 = pbVar4;
      }
      if (((local_18 != (byte *)0x0 && local_18 != pbVar2) && (*local_18 == 0)) && (*piVar3 != 0x22)
         ) {
        return (int)uVar5;
      }
      if (((2 < *(uint *)(param_1 + 8)) && (*pbVar2 == 0x30)) && ((pbVar2[1] | 0x20) == 0x78)) {
        *piVar3 = 0;
        local_18 = (byte *)0x0;
        uVar5 = recovered_10005ab8(pbVar2 + 2,&local_18,0x10);
        if (*(byte **)(param_1 + 4) != (byte *)0x0) {
          pbVar4 = *(byte **)(param_1 + 4);
        }
        pbVar2 = extraout_r3;
        if (local_18 != (byte *)0x0) {
          pbVar2 = pbVar4 + 2;
        }
        if (((local_18 != (byte *)0x0 && local_18 != pbVar2) && (*local_18 == 0)) &&
           (*piVar3 != 0x22)) {
          return (int)uVar5;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*param_1 == '\x02') {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
  }
  return uVar1;
}

#undef DAT_1000639c
#undef DAT_100063a0
#undef local_18

#undef DAT_100064e0
#define DAT_100064e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44b4U)))
#undef DAT_100064e8
#define DAT_100064e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44bcU)))
#undef DAT_100064f0
#define DAT_100064f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x44c4U)))
#undef DAT_100064f4
#define DAT_100064f4 (*(int *)(((uintptr_t)pf_module_state + 0x44c8U)))
#undef DAT_100064f8
#define DAT_100064f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x44ccU)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 * *)(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(undefined4 * *)(frame + 20))
#define local_98 (*(undefined4 * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4378U)
 */

undefined4 * recovered_100063a4(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[208] = {0};

  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1 = 0;
  int extraout_r2 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  local_9c = param_1 + 1;
  *param_1 = param_2;
  local_98 = param_1 + 4;
  *local_9c = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *local_98 = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  param_1[10] = 0xfff;
  uVar1 = DAT_100064e8;
  *(undefined8 *)(param_1 + 5) = DAT_100064e0;
  *(undefined8 *)(param_1 + 7) = uVar1;
  *(undefined1 *)(param_1 + 9) = 0;
  local_7c = *DAT_100064f8;
  local_78 = DAT_100064f0;
  local_70 = DAT_100064f4 + ((uintptr_t)pf_module_state+0x441cU);
  local_90 = 1;
  recovered_100055cc(&uStack_94);
  local_a0 = param_1;
  recovered_100064fc((int)param_1);
  puVar2 = local_a0;
  recovered_10007778(local_a0,extraout_r1,extraout_r2);
  recovered_100055e4(&uStack_94);
  return puVar2;
}

#undef DAT_100064e0
#undef DAT_100064e8
#undef DAT_100064f0
#undef DAT_100064f4
#undef DAT_100064f8
#undef uStack_94
#undef local_a0
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10007530
#define DAT_10007530 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5504U)))
#undef DAT_10007534
#define DAT_10007534 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5508U)))
#undef DAT_10007538
#define DAT_10007538 (*(int *)(((uintptr_t)pf_module_state + 0x550cU)))
#undef DAT_10007578
#define DAT_10007578 (*(int *)(((uintptr_t)pf_module_state + 0x554cU)))
#undef DAT_100075f4
#define DAT_100075f4 (*(int *)(((uintptr_t)pf_module_state + 0x55c8U)))
#undef DAT_10007670
#define DAT_10007670 (*(int *)(((uintptr_t)pf_module_state + 0x5644U)))
#undef DAT_100076ec
#define DAT_100076ec (*(int *)(((uintptr_t)pf_module_state + 0x56c0U)))
#undef DAT_10007730
#define DAT_10007730 (*(int *)(((uintptr_t)pf_module_state + 0x5704U)))
#undef DAT_10007734
#define DAT_10007734 (*(int *)(((uintptr_t)pf_module_state + 0x5708U)))
#undef DAT_10007738
#define DAT_10007738 (*(int *)(((uintptr_t)pf_module_state + 0x570cU)))
#undef DAT_1000773c
#define DAT_1000773c (*(int *)(((uintptr_t)pf_module_state + 0x5710U)))
#undef DAT_10007740
#define DAT_10007740 (*(int *)(((uintptr_t)pf_module_state + 0x5714U)))
#undef DAT_10007744
#define DAT_10007744 (*(int *)(((uintptr_t)pf_module_state + 0x5718U)))
#undef DAT_10007748
#define DAT_10007748 (*(int *)(((uintptr_t)pf_module_state + 0x571cU)))
#undef DAT_1000774c
#define DAT_1000774c (*(int *)(((uintptr_t)pf_module_state + 0x5720U)))
#undef DAT_10007750
#define DAT_10007750 (*(int *)(((uintptr_t)pf_module_state + 0x5724U)))
#undef DAT_10007754
#define DAT_10007754 (*(int *)(((uintptr_t)pf_module_state + 0x5728U)))
#undef DAT_10007758
#define DAT_10007758 (*(int *)(((uintptr_t)pf_module_state + 0x572cU)))
#undef DAT_1000775c
#define DAT_1000775c (*(int *)(((uintptr_t)pf_module_state + 0x5730U)))
#undef DAT_10007760
#define DAT_10007760 (*(int *)(((uintptr_t)pf_module_state + 0x5734U)))
#undef DAT_10007764
#define DAT_10007764 (*(int *)(((uintptr_t)pf_module_state + 0x5738U)))
#undef DAT_10007768
#define DAT_10007768 (*(int *)(((uintptr_t)pf_module_state + 0x573cU)))
#undef DAT_1000776c
#define DAT_1000776c (*(int *)(((uintptr_t)pf_module_state + 0x5740U)))
#undef DAT_10007770
#define DAT_10007770 (*(int *)(((uintptr_t)pf_module_state + 0x5744U)))
#undef DAT_10007774
#define DAT_10007774 (*(int *)(((uintptr_t)pf_module_state + 0x5748U)))
#define auStack_200 (*(undefined1 (*)[4])(frame + 16))
#define local_1fc (*(int *)(frame + 20))
#define local_1f8 (*(int * *)(frame + 24))
#define local_1f4 (*(void * *)(frame + 28))
#define local_1f0 (*(undefined4 *)(frame + 32))
#define local_1e8 (*(int * *)(frame + 40))
#define local_1e4 (*(void * *)(frame + 44))
#define local_1e0 (*(undefined4 *)(frame + 48))
#define local_1d8 (*(int * *)(frame + 56))
#define local_1d4 (*(void * *)(frame + 60))
#define local_1d0 (*(undefined4 *)(frame + 64))
#define local_1c8 (*(int * *)(frame + 72))
#define local_1c4 (*(void * *)(frame + 76))
#define local_1c0 (*(undefined4 *)(frame + 80))
#define local_1b8 (*(int * *)(frame + 88))
#define local_1b4 (*(void * *)(frame + 92))
#define local_1b0 (*(undefined4 *)(frame + 96))
#define local_1a8 (*(int * *)(frame + 104))
#define local_1a4 (*(void * *)(frame + 108))
#define local_1a0 (*(undefined4 *)(frame + 112))
#define local_198 (*(int * *)(frame + 120))
#define local_194 (*(void * *)(frame + 124))
#define local_190 (*(undefined4 *)(frame + 128))
#define local_188 (*(int * *)(frame + 136))
#define local_184 (*(void * *)(frame + 140))
#define local_180 (*(undefined4 *)(frame + 144))
#define local_178 (*(int * *)(frame + 152))
#define local_174 (*(void * *)(frame + 156))
#define local_170 (*(undefined4 *)(frame + 160))
#define local_168 (*(int * *)(frame + 168))
#define local_164 (*(void * *)(frame + 172))
#define local_160 (*(undefined4 *)(frame + 176))
#define local_158 (*(int * *)(frame + 184))
#define local_154 (*(void * *)(frame + 188))
#define local_150 (*(undefined4 *)(frame + 192))
#define local_148 (*(int * *)(frame + 200))
#define local_144 (*(void * *)(frame + 204))
#define local_140 (*(undefined4 *)(frame + 208))
#define local_138 (*(int * *)(frame + 216))
#define local_134 (*(void * *)(frame + 220))
#define local_130 (*(undefined4 *)(frame + 224))
#define local_128 (*(int * *)(frame + 232))
#define local_124 (*(void * *)(frame + 236))
#define local_120 (*(undefined4 *)(frame + 240))
#define local_118 (*(int * *)(frame + 248))
#define local_113 (*(undefined2 *)(frame + 253))
#define local_111 (*(undefined1 *)(frame + 255))
#define local_110 (*(void * *)(frame + 256))
#define local_10c (*(undefined4 *)(frame + 260))
#define local_104 (*(int * *)(frame + 268))
#define local_100 (*(void * *)(frame + 272))
#define local_fc (*(undefined4 *)(frame + 276))
#define local_f4 (*(int * *)(frame + 284))
#define local_f0 (*(void * *)(frame + 288))
#define local_ec (*(undefined4 *)(frame + 292))
#define local_e4 (*(int * *)(frame + 300))
#define local_e0 (*(void * *)(frame + 304))
#define local_dc (*(undefined4 *)(frame + 308))
#define local_d4 (*(int * *)(frame + 316))
#define local_d0 (*(void * *)(frame + 320))
#define uStack_94 (*(undefined4 *)(frame + 380))
#define local_cc (*(undefined4 *)(frame + 324))
#define local_c4 (*(int * *)(frame + 332))
#define local_c0 (*(void * *)(frame + 336))
#define local_bc (*(undefined4 *)(frame + 340))
#define local_b4 (*(int * *)(frame + 348))
#define local_b0 (*(void * *)(frame + 352))
#define auStack_68 (*(undefined1 (*)[8])(frame + 424))
#define local_ac (*(undefined4 *)(frame + 356))
#define local_a4 (*(int * *)(frame + 364))
#define local_a0 (*(void * *)(frame + 368))
#define local_9c (*(undefined4 *)(frame + 372))
#define local_90 (*(undefined4 *)(frame + 384))
#define local_7c (*(undefined4 *)(frame + 404))
#define local_78 (*(undefined4 *)(frame + 408))
#define local_74 (*(undefined1 * *)(frame + 412))
#define local_70 (*(int *)(frame + 416))
#define local_6c (*(undefined1 * *)(frame + 420))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x44d0U)
 */

void recovered_100064fc(int param_1)

{
  unsigned char frame[560] = {0};


  local_1fc = param_1;
  recovered_10008568((int *)(param_1 + 0x10));
  local_113 = (ushort)PF_PART1(local_113, 1) << 8;
  recovered_10009500((int *)&local_a0,(undefined1 *)&local_113,1);
  local_7c = *DAT_10007530;
  local_78 = DAT_10007534;
  local_70 = DAT_10007538 + ((uintptr_t)pf_module_state+0x4540U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_200;
  recovered_100055cc(&uStack_94);
  local_a4 = recovered_100050d0(8);
  *local_a4 = DAT_10007578 + 8;
  local_90 = 2;
  recovered_10008338(local_1fc,1,&local_a0,(int *)&local_a4);
  if (local_a4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_a4 + 4)))(local_a4);
  }
  local_9c = 0;
  recovered_10005100(local_a0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_10009500((int *)&local_b0,(undefined1 *)&local_113,1);
  local_90 = 3;
  local_b4 = recovered_100050d0(8);
  *local_b4 = DAT_100075f4 + 8;
  local_90 = 4;
  recovered_10008338(local_1fc,2,&local_b0,(int *)&local_b4);
  if (local_b4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_b4 + 4)))(local_b4);
  }
  local_ac = 0;
  recovered_10005100(local_b0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_10009500((int *)&local_c0,(undefined1 *)&local_113,1);
  local_90 = 5;
  local_c4 = recovered_100050d0(8);
  *local_c4 = DAT_10007670 + 8;
  local_90 = 6;
  recovered_10008338(local_1fc,3,&local_c0,(int *)&local_c4);
  if (local_c4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_c4 + 4)))(local_c4);
  }
  local_bc = 0;
  recovered_10005100(local_c0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_10009500((int *)&local_d0,(undefined1 *)&local_113,1);
  local_90 = 7;
  local_d4 = recovered_100050d0(8);
  *local_d4 = DAT_100076ec + 8;
  local_90 = 8;
  recovered_10008338(local_1fc,4,&local_d0,(int *)&local_d4);
  if (local_d4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_d4 + 4)))(local_d4);
  }
  local_cc = 0;
  recovered_10005100(local_d0);
  local_90 = 0xffffffff;
  local_113 = local_113 & 0xff00;
  recovered_10009500((int *)&local_e0,(undefined1 *)&local_113,1);
  local_90 = 9;
  local_e4 = recovered_100050d0(8);
  *local_e4 = DAT_10007730 + 8;
  local_90 = 10;
  recovered_10008338(local_1fc,5,&local_e0,(int *)&local_e4);
  if (local_e4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_e4 + 4)))(local_e4);
  }
  local_dc = 0;
  recovered_10005100(local_e0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_10009500((int *)&local_f0,(undefined1 *)&local_113,1);
  local_90 = 0xb;
  local_f4 = recovered_100050d0(8);
  *local_f4 = DAT_10007734 + 8;
  local_90 = 0xc;
  recovered_10008338(local_1fc,6,&local_f0,(int *)&local_f4);
  if (local_f4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_f4 + 4)))(local_f4);
  }
  local_ec = 0;
  recovered_10005100(local_f0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_10009500((int *)&local_100,(undefined1 *)&local_113,1);
  local_90 = 0xd;
  local_104 = recovered_100050d0(8);
  *local_104 = DAT_10007738 + 8;
  local_90 = 0xe;
  recovered_10008338(local_1fc,7,&local_100,(int *)&local_104);
  if (local_104 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_104 + 4)))(local_104);
  }
  local_fc = 0;
  recovered_10005100(local_100);
  local_90 = 0xffffffff;
  local_111 = 1;
  local_113 = 0x101;
  recovered_10009500((int *)&local_110,(undefined1 *)&local_113,3);
  local_90 = 0xf;
  local_118 = recovered_100050d0(8);
  *local_118 = DAT_1000773c + 8;
  local_90 = 0x10;
  recovered_10008338(local_1fc,8,&local_110,(int *)&local_118);
  if (local_118 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_118 + 4)))(local_118);
  }
  local_10c = 0;
  recovered_10005100(local_110);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  local_111 = 0;
  recovered_10009500((int *)&local_124,(undefined1 *)&local_113,3);
  local_90 = 0x11;
  local_128 = recovered_100050d0(8);
  *local_128 = DAT_10007740 + 8;
  local_90 = 0x12;
  recovered_10008338(local_1fc,9,&local_124,(int *)&local_128);
  if (local_128 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_128 + 4)))(local_128);
  }
  local_120 = 0;
  recovered_10005100(local_124);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  recovered_10009500((int *)&local_134,(undefined1 *)&local_113,2);
  local_90 = 0x13;
  local_138 = recovered_100050d0(8);
  *local_138 = DAT_10007744 + 8;
  local_90 = 0x14;
  recovered_10008338(local_1fc,10,&local_134,(int *)&local_138);
  if (local_138 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_138 + 4)))(local_138);
  }
  local_130 = 0;
  recovered_10005100(local_134);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_10009500((int *)&local_144,(undefined1 *)&local_113,1);
  local_90 = 0x15;
  local_148 = recovered_100050d0(8);
  *local_148 = DAT_10007748 + 8;
  local_90 = 0x16;
  recovered_10008338(local_1fc,0xb,&local_144,(int *)&local_148);
  if (local_148 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_148 + 4)))(local_148);
  }
  local_140 = 0;
  recovered_10005100(local_144);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_154,(undefined1 *)&local_113,2);
  local_90 = 0x17;
  local_158 = recovered_100050d0(8);
  *local_158 = DAT_1000774c + 8;
  local_90 = 0x18;
  recovered_10008338(local_1fc,0xc,&local_154,(int *)&local_158);
  if (local_158 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_158 + 4)))(local_158);
  }
  local_150 = 0;
  recovered_10005100(local_154);
  local_90 = 0xffffffff;
  local_113 = 2;
  recovered_10009500((int *)&local_164,(undefined1 *)&local_113,2);
  local_90 = 0x19;
  local_168 = recovered_100050d0(8);
  *local_168 = DAT_10007750 + 8;
  local_90 = 0x1a;
  recovered_10008338(local_1fc,0xd,&local_164,(int *)&local_168);
  if (local_168 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_168 + 4)))(local_168);
  }
  local_160 = 0;
  recovered_10005100(local_164);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_10009500((int *)&local_174,(undefined1 *)&local_113,2);
  local_90 = 0x1b;
  local_178 = recovered_100050d0(8);
  *local_178 = DAT_10007754 + 8;
  local_90 = 0x1c;
  recovered_10008338(local_1fc,0xe,&local_174,(int *)&local_178);
  if (local_178 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_178 + 4)))(local_178);
  }
  local_170 = 0;
  recovered_10005100(local_174);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_184,(undefined1 *)&local_113,2);
  local_90 = 0x1d;
  local_188 = recovered_100050d0(8);
  *local_188 = DAT_10007758 + 8;
  local_90 = 0x1e;
  recovered_10008338(local_1fc,0xf,&local_184,(int *)&local_188);
  if (local_188 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_188 + 4)))(local_188);
  }
  local_180 = 0;
  recovered_10005100(local_184);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_10009500((int *)&local_194,(undefined1 *)&local_113,2);
  local_90 = 0x1f;
  local_198 = recovered_100050d0(8);
  *local_198 = DAT_1000775c + 8;
  local_90 = 0x20;
  recovered_10008338(local_1fc,0x10,&local_194,(int *)&local_198);
  if (local_198 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_198 + 4)))(local_198);
  }
  local_190 = 0;
  recovered_10005100(local_194);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_1a4,(undefined1 *)&local_113,2);
  local_90 = 0x21;
  local_1a8 = recovered_100050d0(8);
  *local_1a8 = DAT_10007760 + 8;
  local_90 = 0x22;
  recovered_10008338(local_1fc,0x11,&local_1a4,(int *)&local_1a8);
  if (local_1a8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1a8 + 4)))(local_1a8);
  }
  local_1a0 = 0;
  recovered_10005100(local_1a4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_10009500((int *)&local_1b4,(undefined1 *)&local_113,2);
  local_90 = 0x23;
  local_1b8 = recovered_100050d0(8);
  *local_1b8 = DAT_10007764 + 8;
  local_90 = 0x24;
  recovered_10008338(local_1fc,0x12,&local_1b4,(int *)&local_1b8);
  if (local_1b8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1b8 + 4)))(local_1b8);
  }
  local_1b0 = 0;
  recovered_10005100(local_1b4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_1c4,(undefined1 *)&local_113,2);
  local_90 = 0x25;
  local_1c8 = recovered_100050d0(8);
  *local_1c8 = DAT_10007768 + 8;
  local_90 = 0x26;
  recovered_10008338(local_1fc,0x13,&local_1c4,(int *)&local_1c8);
  if (local_1c8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1c8 + 4)))(local_1c8);
  }
  local_1c0 = 0;
  recovered_10005100(local_1c4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_10009500((int *)&local_1d4,(undefined1 *)&local_113,2);
  local_90 = 0x27;
  local_1d8 = recovered_100050d0(8);
  *local_1d8 = DAT_1000776c + 8;
  local_90 = 0x28;
  recovered_10008338(local_1fc,0x14,&local_1d4,(int *)&local_1d8);
  if (local_1d8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1d8 + 4)))(local_1d8);
  }
  local_1d0 = 0;
  recovered_10005100(local_1d4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_1e4,(undefined1 *)&local_113,2);
  local_90 = 0x29;
  local_1e8 = recovered_100050d0(8);
  *local_1e8 = DAT_10007770 + 8;
  local_90 = 0x2a;
  recovered_10008338(local_1fc,0x15,&local_1e4,(int *)&local_1e8);
  if (local_1e8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1e8 + 4)))(local_1e8);
  }
  local_1e0 = 0;
  recovered_10005100(local_1e4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_10009500((int *)&local_1f4,(undefined1 *)&local_113,2);
  local_90 = 0x2b;
  local_1f8 = recovered_100050d0(8);
  *local_1f8 = DAT_10007774 + 8;
  local_90 = 0x2c;
  recovered_10008338(local_1fc,0x16,&local_1f4,(int *)&local_1f8);
  if (local_1f8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_1f8 + 4)))(local_1f8);
  }
  local_1f0 = 0;
  recovered_10005100(local_1f4);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_10007530
#undef DAT_10007534
#undef DAT_10007538
#undef DAT_10007578
#undef DAT_100075f4
#undef DAT_10007670
#undef DAT_100076ec
#undef DAT_10007730
#undef DAT_10007734
#undef DAT_10007738
#undef DAT_1000773c
#undef DAT_10007740
#undef DAT_10007744
#undef DAT_10007748
#undef DAT_1000774c
#undef DAT_10007750
#undef DAT_10007754
#undef DAT_10007758
#undef DAT_1000775c
#undef DAT_10007760
#undef DAT_10007764
#undef DAT_10007768
#undef DAT_1000776c
#undef DAT_10007770
#undef DAT_10007774
#undef auStack_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_198
#undef local_194
#undef local_190
#undef local_188
#undef local_184
#undef local_180
#undef local_178
#undef local_174
#undef local_170
#undef local_168
#undef local_164
#undef local_160
#undef local_158
#undef local_154
#undef local_150
#undef local_148
#undef local_144
#undef local_140
#undef local_138
#undef local_134
#undef local_130
#undef local_128
#undef local_124
#undef local_120
#undef local_118
#undef local_113
#undef local_111
#undef local_110
#undef local_10c
#undef local_104
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef uStack_94
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b4
#undef local_b0
#undef auStack_68
#undef local_ac
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
 * Address: ((uintptr_t)pf_module_state+0x574cU)
 */

void recovered_10007778(undefined4 *param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  param_1[10] = 0xfff;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[8] = 1;
  param_1[7] = 1;
  bVar1 = recovered_100077cc((int *)*param_1,param_2,param_3);
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(bool *)(param_1 + 0xb) = !bVar1;
  return;
}


#undef DAT_100064e0
#define DAT_100064e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44b4U)))
#undef DAT_100064e8
#define DAT_100064e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44bcU)))
#undef DAT_100064f0
#define DAT_100064f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x44c4U)))
#undef DAT_100064f4
#define DAT_100064f4 (*(int *)(((uintptr_t)pf_module_state + 0x44c8U)))
#undef DAT_100064f8
#define DAT_100064f8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x44ccU)))
#define puStack_a0 (*(undefined4 * *)(frame + 16))
#define puStack_9c (*(undefined4 * *)(frame + 20))
#define puStack_98 (*(undefined4 * *)(frame + 24))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define uStack_78 (*(undefined4 *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x578cU)
 */

undefined4 * recovered_100077b8(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[208] = {0};

  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1 = 0;
  int extraout_r2 = 0;

  puStack_74 = auStack_68 + 0x60;
  puStack_6c = (undefined1 *)&puStack_a0;
  puStack_9c = param_1 + 1;
  *param_1 = param_2;
  puStack_98 = param_1 + 4;
  *puStack_9c = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *puStack_98 = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  param_1[10] = 0xfff;
  uVar1 = DAT_100064e8;
  *(undefined8 *)(param_1 + 5) = DAT_100064e0;
  *(undefined8 *)(param_1 + 7) = uVar1;
  *(undefined1 *)(param_1 + 9) = 0;
  uStack_7c = *DAT_100064f8;
  uStack_78 = DAT_100064f0;
  iStack_70 = DAT_100064f4 + ((uintptr_t)pf_module_state+0x441cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  puStack_a0 = param_1;
  recovered_100064fc((int)param_1);
  puVar2 = puStack_a0;
  recovered_10007778(puStack_a0,extraout_r1,extraout_r2);
  recovered_100055e4(&uStack_94);
  return puVar2;
}

#undef DAT_100064e0
#undef DAT_100064e8
#undef DAT_100064f0
#undef DAT_100064f4
#undef DAT_100064f8
#undef puStack_a0
#undef puStack_9c
#undef puStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef uStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5790U)
 */

void recovered_100077bc(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int in_r2;

  *param_1 = param_2;
  recovered_10007778(param_1,param_2,in_r2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5798U)
 */

undefined4 recovered_100077c4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57a0U)
 */

bool recovered_100077cc(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 != (int *)0x0) {
    param_3 = param_1[2];
  }
  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (*param_1 < 1) {
      return false;
    }
    return 0 < param_1[1];
  }
  return false;
}


#undef DAT_10007e08
#define DAT_10007e08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5ddcU)))
#undef DAT_10007e10
#define DAT_10007e10 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5de4U)))
#undef DAT_10007f1c
#define DAT_10007f1c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5ef0U)))
#undef DAT_10007f20
#define DAT_10007f20 (*(int *)(((uintptr_t)pf_module_state + 0x5ef4U)))
#undef DAT_10007f24
#define DAT_10007f24 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5ef8U)))
#define auStack_130 (*(undefined1 (*)[16])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 172))
#define auStack_68 (*(undefined1 (*)[8])(frame + 216))
#define local_120 (*(undefined4 * *)(frame + 32))
#define local_11c (*(undefined4 * *)(frame + 36))
#define local_118 (*(uint * *)(frame + 40))
#define local_114 (*(byte * *)(frame + 44))
#define local_110 (*(uint *)(frame + 48))
#define local_10c (*(int *)(frame + 52))
#define local_108 (*(byte * *)(frame + 56))
#define local_104 (*(undefined1 * *)(frame + 60))
#define local_100 (*(undefined4 * *)(frame + 64))
#define local_fc (*(int * *)(frame + 68))
#define local_f8 (*(undefined1 * *)(frame + 72))
#define local_f4 (*(uint *)(frame + 76))
#define local_f0 (*(int *)(frame + 80))
#define local_ec (*(undefined1 * *)(frame + 84))
#define local_e8 (*(undefined4 *)(frame + 88))
#define local_e4 (*(undefined4 *)(frame + 92))
#define local_e0 (*(undefined4 (*)[2])(frame + 96))
#define local_d8 (*(uint *)(frame + 104))
#define local_d4 (*(undefined1 *)(frame + 108))
#define local_d0 (*(undefined1 * *)(frame + 112))
#define local_cc (*(undefined4 *)(frame + 116))
#define local_c8 (*(undefined4 *)(frame + 120))
#define local_c4 (*(undefined1 * *)(frame + 124))
#define local_c0 (*(uint (*)[2])(frame + 128))
#define local_b8 (*(int *)(frame + 136))
#define local_b4 (*(undefined1 * *)(frame + 140))
#define local_b0 (*(byte *)(frame + 144))
#define local_ac (*(int (*)[3])(frame + 148))
#define local_a0 (*(undefined1 * *)(frame + 160))
#define local_9c (*(int *)(frame + 164))
#define local_98 (*(byte *)(frame + 168))
#define local_97 (*(byte (*)[3])(frame + 169))
#define local_90 (*(undefined4 *)(frame + 176))
#define local_7c (*(undefined4 *)(frame + 196))
#define local_78 (*(undefined4 *)(frame + 200))
#define local_74 (*(undefined1 * *)(frame + 204))
#define local_70 (*(int *)(frame + 208))
#define local_6c (*(undefined1 * *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57d8U)
 */

byte recovered_10007804(undefined4 *param_1)

{
  unsigned char frame[352] = {0};

  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_130;
  local_7c = *DAT_10007f24;
  local_78 = DAT_10007f1c;
  local_70 = DAT_10007f20 + ((uintptr_t)pf_module_state+0x5824U);
  cVar1 = *(char *)(param_1 + 0xb);
  recovered_100055cc(&uStack_94);
  bVar12 = 0;
  if (cVar1 != '\0') goto LAB_10007de4;
  piVar10 = (int *)*param_1;
  iVar9 = param_1[7];
  puVar13 = (undefined1 *)param_1[8];
  bVar2 = recovered_10007f28(piVar10,iVar9,(int)puVar13);
  if (bVar2) {
    local_100 = param_1;
    uVar4 = recovered_10007f7c(piVar10,iVar9,(int)puVar13);
    param_1 = local_100;
    if (uVar4 == 0) {
      recovered_10008018((int)local_100);
      local_f0 = param_1[7];
      local_c4 = (undefined1 *)param_1[8];
    }
    else {
      if (uVar4 == 0xffffff) {
        local_100[10] = 0xfff;
        local_f0 = iVar9;
        local_c4 = puVar13;
        recovered_10007fd4(&local_f0,(int *)&local_c4,(uint)*(byte *)(local_100 + 9));
        param_1[7] = local_f0;
        param_1[8] = local_c4;
        bVar2 = recovered_10007f28((int *)*param_1,local_f0,(int)local_c4);
        if (bVar2) {
          bVar12 = *(byte *)(param_1 + 0xb) ^ 1;
          goto LAB_10007de4;
        }
        goto LAB_10007908;
      }
      uVar6 = local_100[10];
      cVar1 = *(char *)((int)local_100 + 0x2d);
      uVar11 = uVar4 - uVar6;
      *(undefined1 *)((int)local_100 + 0x2d) = 0;
      if (uVar4 < uVar6) {
        uVar11 = uVar6 - uVar4;
      }
      local_100[10] = uVar4;
      if (cVar1 != '\0' || uVar4 != uVar6) {
        local_a0 = puVar13;
        local_9c = iVar9;
        recovered_10007fd4(&local_9c,(int *)&local_a0,(uint)*(byte *)(local_100 + 9));
        local_ac[2] = 0;
        local_ac[1] = 0;
        local_ac[0] = 0;
        if ((uVar11 < (uint)param_1[5]) && (param_1[4] != 0)) {
          local_120 = (undefined4 *)(param_1[4] + uVar11 * 0x10);
          local_90 = 1;
          recovered_10008038(local_ac,local_120[1]);
          local_11c = local_e0;
          local_118 = local_c0;
          pbVar7 = (byte *)*local_120;
          local_114 = pbVar7 + local_120[1];
          puVar13 = local_a0;
          param_1 = local_100;
          iVar9 = local_9c;
          do {
            if (pbVar7 == local_114) {
              param_1[8] = puVar13;
              param_1[7] = iVar9;
              piVar10 = (int *)local_120[3];
              if (piVar10 != (int *)0x0) {
                local_90 = 9;
                (**(code **)(*piVar10 + 8))(piVar10,param_1,local_ac);
                puVar13 = (undefined1 *)local_100[8];
                param_1 = local_100;
                iVar9 = local_100[7];
              }
              goto LAB_10007d6c;
            }
            local_110 = (uint)*pbVar7;
            bVar2 = false;
            local_fc = (int *)*param_1;
            local_c4 = (undefined1 *)0x0;
            *(undefined8 *)local_118 = DAT_10007e08;
            *(undefined8 *)(local_118 + 2) = DAT_10007e10;
            local_f8 = (undefined1 *)(uint)*(byte *)(param_1 + 9);
            local_b0 = 0;
            local_10c = iVar9;
            local_108 = pbVar7;
            local_104 = puVar13;
            local_f0 = iVar9;
            local_d0 = puVar13;
LAB_10007a48:
            puVar13 = local_d0;
            iVar9 = local_f0;
            piVar10 = local_fc;
            bVar3 = recovered_10007f28(local_fc,local_f0,(int)local_d0);
            if (bVar3) {
              uVar4 = recovered_10007f7c(piVar10,iVar9,(int)puVar13);
              if (uVar4 != 0xffffff) goto code_r0x10007a7c;
              recovered_10007fd4(&local_f0,(int *)&local_d0,local_f8);
              local_b8 = local_f0;
              local_b4 = local_d0;
              if ((local_b0 & 1) != 0) goto LAB_10007b48;
              if (local_110 == 2) {
                uVar15 = recovered_10008188(&local_c4);
                uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
                local_11c[1] = 0;
                *local_11c = 0;
                local_90 = 7;
                local_f0 = CONCAT31(PF_PART3(local_f0, 1),2);
                local_e4 = 0;
                local_e8 = 0;
                local_f4 = 0xffffffff;
                local_ec = (undefined1 *)0x0;
                if (uVar4 == 0 && (0xfffffffd < (uint)uVar15) <= uVar4) {
                  local_f4 = (uint)uVar15 + 1;
                }
                local_d4 = local_c0[0] == 0;
                local_d8 = local_f4;
                recovered_10009394(local_ac,(undefined1 *)&local_f0);
                local_90 = 8;
                recovered_100081d0((int)local_100,local_f4);
LAB_10007cd4:
                puVar13 = local_ec;
              }
              else {
                if (local_110 == 1) {
                  uVar14 = recovered_10008188(&local_c4);
                  uVar8 = (undefined4)(uVar14 >> 0x20);
                  uVar5 = (undefined4)uVar14;
                  if (0x7fffffffffffffff < uVar14) {
                    uVar8 = 0x7fffffff;
                  }
                  local_11c[1] = uVar8;
                  if (0x7fffffffffffffff < uVar14) {
                    uVar5 = 0xffffffff;
                  }
                  *local_11c = uVar5;
                  local_d8 = 0;
                  local_e4 = 0;
                  local_e8 = 0;
                  local_ec = (undefined1 *)0x0;
                  local_f0 = CONCAT31(PF_PART3(local_f0, 1),1);
                  local_90 = 6;
                  local_d4 = local_c0[0] == 0;
                  recovered_10009394(local_ac,(undefined1 *)&local_f0);
                  goto LAB_10007cd4;
                }
                if (local_110 != 0) goto LAB_10007d24;
                local_c8 = 0;
                local_cc = 0;
                local_d0 = (undefined1 *)0x0;
                local_90 = 3;
                recovered_100080bc((int *)&local_d0,local_c0[0]);
                puVar13 = local_c4;
                uVar4 = local_c0[0];
                while (uVar4 != 0) {
                  local_90 = 5;
                  local_f8 = puVar13;
                  local_f4 = uVar4;
                  recovered_10008124((int *)&local_d0,*puVar13);
                  puVar13 = local_f8 + 1;
                  uVar4 = local_f4 - 1;
                }
                recovered_10006014((undefined1 *)&local_f0,&local_d0);
                local_90 = 4;
                local_d4 = local_c0[0] == 0;
                recovered_10009394(local_ac,(undefined1 *)&local_f0);
                recovered_10005100(local_ec);
                puVar13 = local_d0;
              }
              recovered_10005100(puVar13);
LAB_10007d24:
              bVar2 = false;
              local_104 = local_b4;
              iVar9 = local_b8;
              goto LAB_10007d34;
            }
            local_b0 = 1;
            local_b8 = iVar9;
            local_b4 = puVar13;
LAB_10007b48:
            bVar2 = true;
            local_100[8] = local_b4;
            local_100[7] = local_b8;
            *(undefined1 *)(local_100 + 0xb) = 1;
            iVar9 = local_10c;
LAB_10007d34:
            param_1 = local_100;
            bVar12 = 0;
            local_c0[0] = 0;
            recovered_10005100(local_c4);
            pbVar7 = local_108 + 1;
            puVar13 = local_104;
          } while (!bVar2);
        }
        else {
          param_1[7] = local_9c;
          param_1[8] = local_a0;
          puVar13 = local_a0;
          iVar9 = local_9c;
LAB_10007d6c:
          bVar3 = recovered_10007f28((int *)*param_1,iVar9,(int)puVar13);
          bVar2 = bVar3;
          if (!bVar3) {
            bVar2 = true;
          }
          bVar12 = 0;
          if (bVar3) {
            bVar12 = *(byte *)(param_1 + 0xb) ^ 1;
          }
          else {
            *(bool *)(param_1 + 0xb) = bVar2;
          }
        }
        recovered_100092ac(local_ac);
        goto LAB_10007de4;
      }
      local_f0 = iVar9;
      local_c4 = puVar13;
    }
    recovered_10007fd4(&local_f0,(int *)&local_c4,(uint)*(byte *)(param_1 + 9));
    param_1[7] = local_f0;
    param_1[8] = local_c4;
    bVar2 = recovered_10007f28((int *)*param_1,local_f0,(int)local_c4);
    if (bVar2) {
      bVar12 = *(byte *)(param_1 + 0xb) ^ 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
  }
  else {
LAB_10007908:
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
LAB_10007de4:
  recovered_100055e4(&uStack_94);
  return bVar12 & 1;
code_r0x10007a7c:
  bVar3 = !bVar2;
  bVar2 = true;
  if (bVar3) {
    local_97[2] = (char)uVar4;
    local_97[1] = (char)(uVar4 >> 8);
    uVar6 = uVar4 >> 0x10;
    uVar11 = 0;
    local_97[0] = (byte)(uVar4 >> 0x10);
    while( true ) {
      bVar2 = uVar11 != 3;
      if (uVar11 != 3) {
        local_98 = local_97[uVar11];
        uVar6 = (uint)local_98;
      }
      if (uVar11 == 3 || uVar6 == 0xff) break;
      local_90 = 2;
      local_f4 = uVar11;
      uVar6 = recovered_10008f90((int *)&local_c4,&local_98);
      uVar11 = local_f4 + 1;
    }
  }
  recovered_10007fd4(&local_f0,(int *)&local_d0,local_f8);
  goto LAB_10007a48;
}

#undef DAT_10007e08
#undef DAT_10007e10
#undef DAT_10007f1c
#undef DAT_10007f20
#undef DAT_10007f24
#undef auStack_130
#undef uStack_94
#undef auStack_68
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
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a0
#undef local_9c
#undef local_98
#undef local_97
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5efcU)
 */

bool recovered_10007f28(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = recovered_100077cc(param_1,param_2,param_3);
  iVar1 = param_3;
  if (0 < param_3) {
    iVar1 = param_2;
  }
  if (((0 < iVar1) && (bVar2)) && (param_2 <= *param_1)) {
    return param_3 <= param_1[1];
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f50U)
 */

uint recovered_10007f7c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;

  bVar1 = recovered_10007f28(param_1,param_2,param_3);
  uVar2 = 0;
  if (bVar1) {
    iVar3 = param_1[2] + (*param_1 * (param_3 + -1) + param_2) * 4;
    uVar2 = (uint)*(byte *)(iVar3 + -3) << 8 | (uint)*(byte *)(iVar3 + -4) << 0x10 |
            (uint)*(byte *)(iVar3 + -2);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fa8U)
 */

void recovered_10007fd4(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = 1;
  switch((uintptr_t)(param_3)) {
  case 0:
    break;
  case 2:
    iVar1 = -1;
    break;
  case 3:
    iVar1 = -1;
  case 1:
    param_1 = param_2;
    break;
  default:
    return;
  }
  *param_1 = *param_1 + iVar1;
  return;
}


#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x6008U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fecU)
 */

void recovered_10008018(int param_1)

{
  unsigned char frame[64] = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(DAT_10008034 >> ((*(byte *)(param_1 + 0x24) & 0x1f) << 3));
  }
  return;
}

#undef DAT_10008034

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x600cU)
 */

void recovered_10008038(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_10009310(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10009324((undefined1 *)(extraout_r0 + iVar1),(undefined1 *)(*param_1 + iVar1));
      recovered_10009060((undefined4 *)(*param_1 + iVar1 + 4));
      iVar1 = iVar1 + 0x20;
    }
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6090U)
 */

void recovered_100080bc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10008e10(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_r0 + param_1[1]) = 0;
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60f8U)
 */

void recovered_10008124(int *param_1,undefined1 param_2)

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
    recovered_100080bc(param_1,uVar2);
  }
  recovered_10008dac(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x615cU)
 */

undefined8 recovered_10008188(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;

  uVar2 = 0;
  iVar3 = param_1[1];
  uVar1 = 0;
  pbVar4 = (byte *)*param_1;
  while( true ) {
    if (iVar3 == 0) {
      return CONCAT44(uVar2,uVar1);
    }
    if (uVar2 >> 0x18 != 0) break;
    uVar2 = uVar2 << 8 | uVar1 >> 0x18;
    iVar3 = iVar3 + -1;
    uVar1 = (uint)*pbVar4 | uVar1 << 8;
    pbVar4 = pbVar4 + 1;
  }
  return 0xffffffffffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61a4U)
 */

int recovered_100081d0(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_100085bc((int *)(param_1 + 4),param_2);
  }
  return *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61e8U)
 */

void recovered_10008214(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  do {
    bVar1 = recovered_10007804(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6208U)
 */

undefined1 recovered_10008234(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6210U)
 */

void recovered_1000823c(int param_1,uint param_2,int *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int *extraout_r2 = 0;
  int *piVar1;
  int extraout_r3 = 0;

  piVar1 = param_3;
  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_1000827c((int *)(param_1 + 0x10),param_2 + 1);
    piVar1 = extraout_r2;
    param_4 = extraout_r3;
  }
  recovered_10008310((int *)(*(int *)(param_1 + 0x10) + param_2 * 0x10),param_3,(int)piVar1,param_4)
  ;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6250U)
 */

void recovered_1000827c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 * 0x10;
    for (; iVar2 = iVar2 + -0x10, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_100091f4((undefined4 *)(*param_1 + iVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_100093f8(param_1,param_2);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      puVar1 = (undefined4 *)(*param_1 + uVar3 * 0x10);
      *puVar1 = 0;
      puVar1[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar1[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar1[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x62e4U)
 */

int * recovered_10008310(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  recovered_1000907c(param_1,param_2,param_3,param_4);
  recovered_100090d0(param_1 + 3,param_2 + 3);
  return param_1;
}


#undef DAT_10008448
#define DAT_10008448 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x641cU)))
#undef DAT_1000844c
#define DAT_1000844c (*(int *)(((uintptr_t)pf_module_state + 0x6420U)))
#undef DAT_10008450
#define DAT_10008450 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6424U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(int (*)[5])(frame + 28))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x630cU)
 */

void recovered_10008338(int param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  unsigned char frame[224] = {0};

  int extraout_r3 = 0;

  local_a4[3] = 0;
  local_a4[2] = 0;
  local_a4[1] = 0;
  local_a4[0] = 0;
  recovered_10008454(local_a4,param_3);
  recovered_100084a8(local_a4 + 3,param_4);
  local_7c = *DAT_10008450;
  local_78 = DAT_10008448;
  local_70 = DAT_1000844c + ((uintptr_t)pf_module_state+0x6390U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100055cc(local_a4 + 4);
  recovered_1000823c(param_1,param_2,local_a4,extraout_r3);
  recovered_100091f4(local_a4);
  recovered_100055e4(local_a4 + 4);
  return;
}

#undef DAT_10008448
#undef DAT_1000844c
#undef DAT_10008450
#undef auStack_68
#undef local_a4
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6428U)
 */

undefined4 * recovered_10008454(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10005100((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x647cU)
 */

int * recovered_100084a8(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    if ((int *)*param_1 != (int *)0x0) {
      ((uintptr_t (*)(void *))(*(uintptr_t *)(*(uintptr_t *)(uintptr_t)*param_1 + 4)))((void *)(uintptr_t)*param_1);
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
#define local_10 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64c4U)
 */

void recovered_100084f0(int param_1,uint param_2)

{
  unsigned char frame[76] = {0};


  if (param_2 < *(uint *)(param_1 + 0x14)) {
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_10008540(*(int *)(param_1 + 0x10) + param_2 * 0x10,(int)&local_1c);
    recovered_100091f4(&local_1c);
    return;
  }
  return;
}

#undef local_1c
#undef local_18
#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6514U)
 */

int recovered_10008540(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  recovered_10008454((undefined4 *)param_1,(undefined4 *)param_2);
  recovered_100084a8((int *)(param_1 + 0xc),(int *)(param_2 + 0xc));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x653cU)
 */

void recovered_10008568(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x10;
  for (; iVar2 = iVar2 + -0x10, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_100091f4((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6580U)
 */

int recovered_100085ac(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6588U)
 */

int recovered_100085b4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6590U)
 */

void recovered_100085bc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 * 0x18 + -0x14;
    for (; param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_10009060((undefined4 *)(*param_1 + iVar2));
      iVar2 = iVar2 + -0x18;
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_1000af08(param_1,param_2);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      puVar1 = (undefined4 *)(*param_1 + uVar3 * 0x18);
      puVar1[5] = 0;
      *puVar1 = 0;
      puVar1[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      puVar1[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      puVar1[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      puVar1[4] = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6638U)
 */

int recovered_10008664(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6664U)
 */

void recovered_10008690(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000afe0((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6684U)
 */

void recovered_100086b0(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000b048((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_100087e4
#define DAT_100087e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x67b8U)))
#undef DAT_100087e8
#define DAT_100087e8 (*(int *)(((uintptr_t)pf_module_state + 0x67bcU)))
#undef DAT_100087ec
#define DAT_100087ec (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x67c0U)))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66a4U)
 */

undefined4 recovered_100086d0(int param_1,undefined4 param_2)

{
  unsigned char frame[224] = {0};

  undefined4 extraout_r0 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_7c = *DAT_100087ec;
  local_78 = DAT_100087e4;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = (void *)0x0;
  local_ac[0] = 0;
  local_70 = DAT_100087e8 + ((uintptr_t)pf_module_state+0x6710U);
  local_90 = 1;
  local_b0 = param_1;
  recovered_100055cc(&uStack_94);
  recovered_10006124(local_ac);
  local_90 = 2;
  recovered_100086b0(local_b0,local_ac);
  recovered_10005100(local_a8);
  recovered_100055e4(&uStack_94);
  return extraout_r0;
}

#undef DAT_100087e4
#undef DAT_100087e8
#undef DAT_100087ec
#undef local_9c
#undef local_98
#undef local_90
#undef auStack_68
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0

#undef DAT_100088f4
#define DAT_100088f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x68c8U)))
#undef DAT_100088f8
#define DAT_100088f8 (*(int *)(((uintptr_t)pf_module_state + 0x68ccU)))
#undef DAT_100088fc
#define DAT_100088fc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x68d0U)))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67c4U)
 */

undefined4 recovered_100087f0(int param_1)

{
  unsigned char frame[224] = {0};

  undefined4 extraout_r0 = 0;

  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = (void *)0x0;
  local_ac[0] = 0;
  recovered_10006150(local_ac);
  local_7c = *DAT_100088fc;
  local_78 = DAT_100088f4;
  local_70 = DAT_100088f8 + ((uintptr_t)pf_module_state+0x6838U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100055cc(&uStack_94);
  recovered_100086b0(param_1,local_ac);
  recovered_10005100(local_a8);
  recovered_100055e4(&uStack_94);
  return extraout_r0;
}

#undef DAT_100088f4
#undef DAT_100088f8
#undef DAT_100088fc
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_94
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78

#undef DAT_100089fc
#define DAT_100089fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x69d0U)))
#undef DAT_10008a00
#define DAT_10008a00 (*(int *)(((uintptr_t)pf_module_state + 0x69d4U)))
#undef DAT_10008a04
#define DAT_10008a04 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x69d8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68d4U)
 */

undefined4 recovered_10008900(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[224] = {0};

  undefined4 extraout_r0 = 0;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10008a04;
  local_78 = DAT_100089fc;
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_a4 = 0;
  local_70 = DAT_10008a00 + ((uintptr_t)pf_module_state+0x6934U);
  local_ac[0] = 2;
  local_90 = 1;
  local_9c = param_2;
  local_98 = param_3;
  recovered_100055cc(&uStack_94);
  recovered_100086b0(param_1,local_ac);
  recovered_10005100(local_a8);
  recovered_100055e4(&uStack_94);
  return extraout_r0;
}

#undef DAT_100089fc
#undef DAT_10008a00
#undef DAT_10008a04
#undef auStack_68
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
#undef auStack_b0
#undef local_70
#undef local_6c
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x69dcU)
 */

void recovered_10008a08(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  uint in_r1;

  puVar1 = (undefined1 *)recovered_100081d0(param_1,in_r1);
  recovered_10008690(param_1,puVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x69fcU)
 */

void recovered_10008a28(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  recovered_10008a6c(param_1,param_2);
  puVar1 = (undefined1 *)recovered_100081d0(param_1,param_2);
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 0;
  if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 4) = 0;
  }
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a40U)
 */

void recovered_10008a6c(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_100085bc((int *)(param_1 + 4),param_2);
    return;
  }
  return;
}


#undef DAT_10008bc8
#define DAT_10008bc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b9cU)))
#undef DAT_10008bcc
#define DAT_10008bcc (*(int *)(((uintptr_t)pf_module_state + 0x6ba0U)))
#undef DAT_10008bd0
#define DAT_10008bd0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6ba4U)))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_b0 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a60U)
 */

int recovered_10008a8c(int param_1)

{
  unsigned char frame[224] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  uint uVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_7c = *DAT_10008bd0;
  local_78 = DAT_10008bc8;
  local_70 = DAT_10008bcc + ((uintptr_t)pf_module_state+0x6aacU);
  uVar2 = *(uint *)(param_1 + 0x30);
  recovered_100055cc(&uStack_94);
  if (uVar2 == 0) {
    local_98 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = (void *)0x0;
    local_ac[0] = 0;
    local_90 = 1;
    local_b0 = param_1;
    recovered_100086b0(param_1,local_ac);
    local_90 = 2;
    iVar1 = recovered_100081d0(local_b0,extraout_r0);
    recovered_10005100(local_a8);
  }
  else {
    local_90 = 0xffffffff;
    iVar1 = recovered_100081d0(param_1,uVar2);
  }
  recovered_100055e4(&uStack_94);
  return iVar1;
}

#undef DAT_10008bc8
#undef DAT_10008bcc
#undef DAT_10008bd0
#undef local_ac
#undef local_a8
#undef local_a4
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
#undef uStack_94
#undef local_b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6ba8U)
 */

int recovered_10008bd4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x30);
  iVar1 = 0;
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + uVar2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bd8U)
 */

int recovered_10008c04(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6be0U)
 */

int recovered_10008c0c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6be8U)
 */

undefined4 recovered_10008c14(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bf0U)
 */

undefined4 recovered_10008c1c(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bf8U)
 */

undefined4 recovered_10008c24(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c00U)
 */

undefined1 recovered_10008c2c(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c08U)
 */

void recovered_10008c34(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c14U)
 */

undefined4 recovered_10008c40(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c1cU)
 */

void recovered_10008c48(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x6c28U)
 */

void recovered_10008c54(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x6c2cU)
 */

void recovered_10008c58(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c30U)
 */

void recovered_10008c5c(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *data;
  uint uVar2;
  int iVar3;

  local_1c = 0;
  iVar1 = recovered_10008d58(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10008dac(param_1);
    }
    else {
      recovered_100080bc(param_1,param_3);
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
    recovered_10008ddc(&local_28,*param_1 + local_1c,uVar2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = data;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10005100(data);
  }
  return;
}

#undef local_28
#undef local_20
#undef local_1c
#undef iStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6d2cU)
 */

undefined4 recovered_10008d58(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x6d80U)
 */

void recovered_10008dac(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;

  if (*param_1 == 0) {
    recovered_10008e10(0);
    param_1[2] = 0;
    *param_1 = extraout_r0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6db0U)
 */

undefined4 * recovered_10008ddc(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int in_r3;

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_10008c5c(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6de4U)
 */

void recovered_10008e10(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_100050d0(param_1 + 1);
  *puVar1 = 0;
  return;
}


#undef DAT_10008e70
#define DAT_10008e70 (*(int *)(((uintptr_t)pf_module_state + 0x6e44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6e00U)
 */

undefined4 * recovered_10008e2c(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_10008e70;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_10008c5c(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_10008e70

#define abStack_62 (*(byte (*)[66])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6e48U)
 */

void recovered_10008e74(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,
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
      uVar9 = recovered_10002888(uVar7,uVar5,param_6,0);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6f64U)
 */

int recovered_10008f90(int *param_1,undefined1 *param_2)

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
    recovered_10008ff0(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6fc4U)
 */

void recovered_10008ff0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10009050(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7024U)
 */

void recovered_10009050(ulong param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100050d0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7034U)
 */

undefined4 * recovered_10009060(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005100((void *)*param_1);
  return param_1;
}


#define iStack_14 (*(int *)(frame + 20))
#define local_18 (*(int * *)(frame + 16))
#define local_10 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7050U)
 */

int * recovered_1000907c(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[72] = {0};

  int *data;
  int iVar1;

  if (param_1 != param_2) {
    local_18 = param_2;
    iStack_14 = param_3;
    local_10 = param_4;
    recovered_1000912c((int *)&local_18,param_2);
    data = (int *)*param_1;
    iVar1 = param_1[2];
    param_1[2] = local_10;
    *param_1 = (int)local_18;
    param_1[1] = iStack_14;
    iStack_14 = 0;
    local_18 = data;
    local_10 = iVar1;
    recovered_10005100(data);
  }
  return param_1;
}

#undef iStack_14
#undef local_18
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x70a4U)
 */

int * recovered_100090d0(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  if (param_1 != param_2) {
    if ((int *)*param_2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = ((uintptr_t (*)(void *))(*(uintptr_t *)(*(int *)*param_2 + 0xc)))((void *)(uintptr_t)((int *)*param_2));
    }
    piVar2 = (int *)*param_1;
    *param_1 = iVar1;
    if (piVar2 != (int *)0x0) {
      ((uintptr_t (*)(void *))(*(uintptr_t *)(*piVar2 + 4)))(piVar2);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7100U)
 */

int * recovered_1000912c(int *param_1,int *param_2)

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
  recovered_10009184(param_1,uVar2);
  iVar3 = *param_2;
  iVar1 = param_2[1];
  for (iVar4 = 0; iVar1 != iVar4; iVar4 = iVar4 + 1) {
    *(undefined1 *)(*param_1 + iVar4) = *(undefined1 *)(iVar3 + iVar4);
  }
  param_1[1] = iVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7158U)
 */

void recovered_10009184(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_100091e4(param_2);
    uVar1 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
      *(undefined1 *)(extraout_r0 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x71b8U)
 */

void recovered_100091e4(ulong param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100050d0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x71c8U)
 */

void recovered_100091f4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)param_1[3] != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*(int *)param_1[3] + 4)))((void *)(uintptr_t)((int *)param_1[3]));
  }
  recovered_100094dc(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x71f8U)
 */

int * recovered_10009224(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10009244(param_1);
  recovered_10005100((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7218U)
 */

void recovered_10009244(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x18 + -0x14;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10009060((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x18;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7260U)
 */

undefined4 * recovered_1000928c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008568(param_1);
  recovered_10005100((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7280U)
 */

int * recovered_100092ac(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100092cc(param_1);
  recovered_10005100((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72a0U)
 */

void recovered_100092cc(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x20 + -0x1c;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10009060((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x20;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72e4U)
 */

void recovered_10009310(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100050d0(param_1 << 5);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72f8U)
 */

undefined1 * recovered_10009324(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10009368((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x733cU)
 */

void recovered_10009368(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x7368U)
 */

int recovered_10009394(int *param_1,undefined1 *param_2)

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
    recovered_10008038(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10009324((undefined1 *)(*param_1 + iVar1 * 0x20),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + (iVar1 + 1) * 0x20 + -0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x73ccU)
 */

void recovered_100093f8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_10009478(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_1000948c((undefined4 *)(extraout_r0 + iVar1),(undefined4 *)(*param_1 + iVar1));
      recovered_100091f4((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0x10;
    }
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x744cU)
 */

void recovered_10009478(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100050d0(param_1 << 4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7460U)
 */

void recovered_1000948c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;

  recovered_100094b0(param_1,param_2);
  *(undefined4 *)(extraout_r0 + 0xc) = param_2[3];
  param_2[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7484U)
 */

void recovered_100094b0(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x74b0U)
 */

undefined4 * recovered_100094dc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005100((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x74d4U)
 */

int * recovered_10009500(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  recovered_10009184(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_10009558(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x752cU)
 */

int recovered_10009558(int *param_1,undefined1 *param_2)

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
    recovered_10009184(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined1 *)(iVar3 + iVar1) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + iVar1 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7584U)
 */

void recovered_100095b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7588U)
 */

void recovered_100095b4(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_100096f4
#define DAT_100096f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76c8U)))
#undef DAT_100096f8
#define DAT_100096f8 (*(int *)(((uintptr_t)pf_module_state + 0x76ccU)))
#undef DAT_100096fc
#define DAT_100096fc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x76d0U)))
#undef DAT_10009700
#define DAT_10009700 (*(int * *)(((uintptr_t)pf_module_state + 0x76d4U)))
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
 * Address: ((uintptr_t)pf_module_state+0x758cU)
 */

void recovered_100095b8(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[208] = {0};

  char *pcVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  local_7c = *DAT_100096fc;
  local_78 = DAT_100096f4;
  local_70 = DAT_100096f8 + ((uintptr_t)pf_module_state+0x75dcU);
  iVar2 = param_3[1];
  recovered_100055cc(&uStack_94);
  if (iVar2 != 0) {
    if (*(char *)(*param_3 + 0x1c) == '\x01') {
      pcVar1 = (char *)recovered_10008bd4(param_2);
      if (pcVar1 != (char *)0x0) {
        local_90 = 0xffffffff;
        recovered_100061a4(local_a0,pcVar1);
        local_90 = 1;
        recovered_10009728(*DAT_10009700,(int *)local_a0);
        recovered_10005100(local_a0[0]);
      }
    }
    else {
      local_90 = 0xffffffff;
      recovered_10009728(*DAT_10009700,(int *)(*param_3 + 4));
    }
  }
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100096f4
#undef DAT_100096f8
#undef DAT_100096fc
#undef DAT_10009700
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10009724
#define DAT_10009724 (*(int *)(((uintptr_t)pf_module_state + 0x76f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x76d8U)
 */

void recovered_10009704(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009724 + 8;
  return;
}

#undef DAT_10009724

#undef DAT_10009740
#define DAT_10009740 (*(int *)(((uintptr_t)pf_module_state + 0x7714U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x76fcU)
 */

void recovered_10009728(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = DAT_10009740;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  recovered_10009744(param_1,iVar1,param_2[1],iVar2);
  return;
}

#undef DAT_10009740

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7718U)
 */

int recovered_10009744(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  if (param_3 != 0) {
    if (param_2 != 0) {
      param_4 = *(undefined4 *)(param_1 + 4);
    }
    if (param_2 != 0 && (uint *)param_4 != (uint *)0x0) {
      recovered_100048dc((void *)param_2,1,param_3,(uint *)param_4);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7750U)
 */

void recovered_1000977c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7754U)
 */

void recovered_10009780(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_100097e8
#define DAT_100097e8 (*(int * *)(((uintptr_t)pf_module_state + 0x77bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7758U)
 */

void recovered_10009784(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  if (param_3[1] == 0) {
    return;
  }
  if (*(char *)(*param_3 + 0x1c) == '\x01') {
    pcVar1 = (char *)recovered_10008bd4(param_2);
    if (pcVar1 == (char *)0x0) {
      return;
    }
    recovered_10006268(pcVar1);
  }
  recovered_10009810(*DAT_100097e8);
  return;
}

#undef DAT_100097e8

#undef DAT_1000980c
#define DAT_1000980c (*(int *)(((uintptr_t)pf_module_state + 0x77e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77c0U)
 */

void recovered_100097ec(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000980c + 8;
  return;
}

#undef DAT_1000980c

#undef DAT_100098f8
#define DAT_100098f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x78ccU)))
#undef DAT_100098fc
#define DAT_100098fc (*(int *)(((uintptr_t)pf_module_state + 0x78d0U)))
#undef DAT_10009900
#define DAT_10009900 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x78d4U)))
#define local_a0 (*(void * (*)[3])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77e4U)
 */

undefined4 recovered_10009810(int param_1)

{
  unsigned char frame[208] = {0};

  undefined4 extraout_r0 = 0;
  uint in_r1;
  uint in_r2;

  recovered_100061f8(local_a0,in_r1,in_r2);
  local_7c = *DAT_10009900;
  local_78 = DAT_100098f8;
  local_70 = DAT_100098fc + ((uintptr_t)pf_module_state+0x783cU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)local_a0;
  recovered_100055cc(&uStack_94);
  recovered_10009728(param_1,(int *)local_a0);
  recovered_10005100(local_a0[0]);
  recovered_100055e4(&uStack_94);
  return extraout_r0;
}

#undef DAT_100098f8
#undef DAT_100098fc
#undef DAT_10009900
#undef local_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x78d8U)
 */

void recovered_10009904(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x78dcU)
 */

void recovered_10009908(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#define uStack_14 (*(undefined4 *)(frame + 24))
#define piStack_18 (*(int * *)(frame + 20))
#define local_1c (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x78e0U)
 */

void recovered_1000990c(undefined4 param_1,void *param_2,int *param_3,undefined4 param_4)

{
  unsigned char frame[76] = {0};

  char *pcVar1;

  local_1c = param_2;
  piStack_18 = param_3;
  uStack_14 = param_4;
  recovered_10008a6c((int)param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0((int)param_2,*(uint *)(*param_3 + 0x18));
  recovered_100061a4(&local_1c,pcVar1);
  recovered_10006150(pcVar1);
  recovered_10005100(local_1c);
  return;
}

#undef uStack_14
#undef piStack_18
#undef local_1c

#undef DAT_1000998c
#define DAT_1000998c (*(int *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7940U)
 */

void recovered_1000996c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000998c + 8;
  return;
}

#undef DAT_1000998c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7964U)
 */

void recovered_10009990(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7968U)
 */

void recovered_10009994(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x796cU)
 */

void recovered_10009998(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r1 = 0;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  uVar2 = recovered_10006268(pcVar1);
  *(undefined4 *)(pcVar1 + 0x14) = extraout_r1;
  *(undefined4 *)(pcVar1 + 0x10) = uVar2;
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_10009a18
#define DAT_10009a18 (*(int *)(((uintptr_t)pf_module_state + 0x79ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x79ccU)
 */

void recovered_100099f8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009a18 + 8;
  return;
}

#undef DAT_10009a18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x79f0U)
 */

void recovered_10009a1c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x79f4U)
 */

void recovered_10009a20(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x79f8U)
 */

void recovered_10009a24(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (*(int *)(param_2 + 0x30) == 0) {
    recovered_100086d0(param_2,*param_3 + 4);
    return;
  }
  puVar1 = (undefined1 *)recovered_10008a8c(param_2);
  recovered_10006124(puVar1);
  return;
}


#undef DAT_10009a84
#define DAT_10009a84 (*(int *)(((uintptr_t)pf_module_state + 0x7a58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7a38U)
 */

void recovered_10009a64(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009a84 + 8;
  return;
}

#undef DAT_10009a84

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7a5cU)
 */

void recovered_10009a88(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7a60U)
 */

void recovered_10009a8c(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x7a64U)
 */

void recovered_10009a90(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if (*(int *)(param_2 + 0x30) == 0) {
    recovered_10008900(param_2,*(undefined4 *)(*param_3 + 0x10),*(undefined4 *)(*param_3 + 0x14));
    return;
  }
  puVar1 = (undefined1 *)recovered_10008a8c(param_2);
  iVar2 = *param_3;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 8) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(puVar1 + 0x10) = uVar3;
  if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 4) = 0;
  }
  return;
}


#undef DAT_10009b18
#define DAT_10009b18 (*(int *)(((uintptr_t)pf_module_state + 0x7aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7accU)
 */

void recovered_10009af8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009b18 + 8;
  return;
}

#undef DAT_10009b18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7af0U)
 */

void recovered_10009b1c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7af4U)
 */

void recovered_10009b20(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_10009c4c
#define DAT_10009c4c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c20U)))
#undef DAT_10009c50
#define DAT_10009c50 (*(int *)(((uintptr_t)pf_module_state + 0x7c24U)))
#undef DAT_10009c54
#define DAT_10009c54 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x7c28U)))
#define auStack_ac (*(undefined1 (*)[4])(frame + 20))
#define local_7c (*(undefined4 *)(frame + 68))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a8 (*(void * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7af8U)
 */

void recovered_10009b24(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] = {0};

  undefined1 *puVar1;
  int iVar2;

  puVar1 = (undefined1 *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  recovered_10009cb8(auStack_ac,puVar1);
  local_7c = *DAT_10009c54;
  local_78 = DAT_10009c4c;
  local_70 = DAT_10009c50 + ((uintptr_t)pf_module_state+0x7b60U);
  iVar2 = *(int *)(param_2 + 0x30);
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  recovered_100055cc(&uStack_94);
  if (iVar2 == 0) {
    local_90 = 1;
    recovered_10008690(param_2,auStack_ac);
  }
  else {
    local_90 = 2;
    puVar1 = (undefined1 *)recovered_10008a8c(param_2);
    local_90 = 3;
    recovered_10009c7c(puVar1,auStack_ac);
  }
  recovered_10005100(local_a8);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_10009c4c
#undef DAT_10009c50
#undef DAT_10009c54
#undef auStack_ac
#undef local_7c
#undef auStack_b0
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68
#undef local_a8
#undef local_90

#undef DAT_10009c78
#define DAT_10009c78 (*(int *)(((uintptr_t)pf_module_state + 0x7c4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7c2cU)
 */

void recovered_10009c58(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009c78 + 8;
  return;
}

#undef DAT_10009c78

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7c50U)
 */

undefined1 * recovered_10009c7c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 in_r2;
  int in_r3;

  *param_1 = *param_2;
  recovered_10005fd8((int *)(param_1 + 4),(int *)(param_2 + 4),in_r2,in_r3);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7c8cU)
 */

undefined1 * recovered_10009cb8(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_10008e2c((undefined4 *)(param_1 + 4),(int *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7cc8U)
 */

void recovered_10009cf4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7cccU)
 */

void recovered_10009cf8(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x7cd0U)
 */

void recovered_10009cfc(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  iVar4 = *param_3;
  uVar2 = *(uint *)(iVar4 + 0x10);
  iVar1 = *(int *)(iVar4 + 0x14);
  uVar5 = *(uint *)(iVar4 + 0x30);
  iVar6 = *(int *)(iVar4 + 0x34);
  if ((int)(-1 - (iVar1 + (uint)(0x80000000 < uVar2))) < 0 ==
      (SBORROW4(-1,iVar1) != SBORROW4(-1 - iVar1,(uint)(0x80000000 < uVar2)))) {
    iVar1 = -1;
    uVar2 = 0x80000000;
  }
  if ((int)(uint)(uVar2 < 0x7fffffff) <= iVar1) {
    uVar2 = 0x7fffffff;
  }
  uVar3 = 0x80000000;
  iVar1 = -1;
  if ((int)(-1 - (iVar6 + (uint)(0x80000000 < uVar5))) < 0 !=
      (SBORROW4(-1,iVar6) != SBORROW4(-1 - iVar6,(uint)(0x80000000 < uVar5)))) {
    uVar3 = uVar5;
    iVar1 = iVar6;
  }
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar1) {
    uVar3 = 0x7fffffff;
  }
  recovered_10009db4((int *)*param_2,uVar2,uVar3,*(uint *)(iVar4 + 0x50));
  return;
}


#undef DAT_10009db0
#define DAT_10009db0 (*(int *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7d64U)
 */

void recovered_10009d90(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_10009db0 + 8;
  return;
}

#undef DAT_10009db0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7d88U)
 */

void recovered_10009db4(int *param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined1 uVar2;
  undefined1 uVar1;
  bool bVar3;
  int iVar4;
  int iVar5;

  bVar3 = recovered_10007f28(param_1,param_2,param_3);
  if (bVar3) {
    iVar4 = *param_1 * (param_3 + -1) + param_2;
    iVar5 = iVar4 * 4 + -3;
    iVar4 = iVar4 * 4 + -4;
    uVar1 = (undefined1)(param_4 >> 8);
    uVar2 = (undefined1)(param_4 >> 0x10);
    if (param_4 >> 0x18 == 0) {
      *(undefined1 *)(param_1[2] + iVar4) = uVar2;
      *(undefined1 *)(param_1[2] + iVar5) = uVar1;
      *(char *)(param_1[2] + iVar4 + 2) = (char)param_4;
      param_4 = 0xff;
    }
    else {
      *(char *)(param_1[2] + iVar4) = (char)(param_4 >> 0x18);
      *(undefined1 *)(param_1[2] + iVar5) = uVar2;
      *(undefined1 *)(param_1[2] + iVar4 + 2) = uVar1;
    }
    *(char *)(param_1[2] + iVar4 + 3) = (char)param_4;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7e34U)
 */

void recovered_10009e60(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x7e38U)
 */

void recovered_10009e64(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000a16c
#define DAT_1000a16c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8140U)))
#undef DAT_1000a170
#define DAT_1000a170 (*(int *)(((uintptr_t)pf_module_state + 0x8144U)))
#undef DAT_1000a174
#define DAT_1000a174 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8148U)))
#undef DAT_1000a178
#define DAT_1000a178 (*(byte * *)(((uintptr_t)pf_module_state + 0x814cU)))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int * *)(frame + 16))
#define local_ac (*(undefined4 * *)(frame + 20))
#define local_a8 (*(byte * *)(frame + 24))
#define local_a4 (*(char * *)(frame + 28))
#define local_a0 (*(char * *)(frame + 32))
#define local_9c (*(uint *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7e3cU)
 */

void recovered_10009e68(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[224] = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_7c = *DAT_1000a174;
  local_78 = DAT_1000a16c;
  local_a4 = (char *)*param_3;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (char *)0x0;
  local_70 = DAT_1000a170 + ((uintptr_t)pf_module_state+0x7ea0U);
  uVar10 = *(uint *)(local_a4 + 0x48);
  local_90 = 1;
  local_b0 = param_3;
  local_ac = param_2;
  recovered_100055cc(&uStack_94);
  recovered_100080bc((int *)&local_a0,uVar10);
  pcVar8 = *(char **)(local_a4 + 0x48);
  pbVar11 = DAT_1000a178;
  if (*(byte **)(local_a4 + 0x44) != (byte *)0x0) {
    pbVar11 = *(byte **)(local_a4 + 0x44);
  }
  for (; pcVar8 != (char *)0x0; pcVar8 = pcVar8 + -1) {
    uVar10 = *pbVar11 - 9;
    if ((0x1a < uVar10) || ((1 << (uVar10 & 0xff) & 0x4800013U) == 0)) {
      local_90 = 2;
      local_a8 = pbVar11;
      local_a4 = pcVar8;
      recovered_10008124((int *)&local_a0,*pbVar11);
      pcVar8 = local_a4;
      pbVar11 = local_a8;
    }
    pbVar11 = pbVar11 + 1;
  }
  uVar10 = 0;
  bVar2 = false;
  if (1 < local_9c) {
    if ((*local_a0 == '0') && ((byte)(local_a0[1] | 0x20U) == 0x78)) {
      recovered_1000a1a0((int *)&local_a0,0,2);
    }
    if (local_9c == 8 || local_9c == 6) {
      local_90 = 3;
      local_a4 = (char *)recovered_1000a22c(&local_a0);
      local_90 = 4;
      pcVar3 = (char *)recovered_1000a210(&local_a0);
      uVar10 = 0;
      for (pcVar8 = local_a4; bVar2 = pcVar8 == pcVar3, pcVar8 != pcVar3; pcVar8 = pcVar8 + 1) {
        cVar1 = *pcVar8;
        bVar5 = cVar1 - 0x30;
        if (9 < (byte)(cVar1 - 0x30U)) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            bVar5 = cVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) {
              uVar10 = 0;
              break;
            }
            bVar5 = cVar1 - 0x37;
          }
        }
        uVar10 = (uint)bVar5 | uVar10 << 4;
      }
    }
  }
  recovered_10005100(local_a0);
  if (bVar2) {
    iVar6 = *local_b0;
    uVar4 = *(uint *)(iVar6 + 0x10);
    iVar9 = *(int *)(iVar6 + 0x14);
    uVar12 = *(uint *)(iVar6 + 0x30);
    iVar6 = *(int *)(iVar6 + 0x34);
    if ((int)(-1 - (iVar9 + (uint)(0x80000000 < uVar4))) < 0 ==
        (SBORROW4(-1,iVar9) != SBORROW4(-1 - iVar9,(uint)(0x80000000 < uVar4)))) {
      iVar9 = -1;
      uVar4 = 0x80000000;
    }
    if ((int)(uint)(uVar4 < 0x7fffffff) <= iVar9) {
      uVar4 = 0x7fffffff;
    }
    uVar7 = 0x80000000;
    iVar9 = -1;
    if ((int)(-1 - (iVar6 + (uint)(0x80000000 < uVar12))) < 0 !=
        (SBORROW4(-1,iVar6) != SBORROW4(-1 - iVar6,(uint)(0x80000000 < uVar12)))) {
      uVar7 = uVar12;
      iVar9 = iVar6;
    }
    if ((int)(uint)(uVar7 < 0x7fffffff) <= iVar9) {
      uVar7 = 0x7fffffff;
    }
    recovered_10009db4((int *)*local_ac,uVar4,uVar7,uVar10);
  }
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_1000a16c
#undef DAT_1000a170
#undef DAT_1000a174
#undef DAT_1000a178
#undef uStack_94
#undef auStack_68
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

#undef DAT_1000a19c
#define DAT_1000a19c (*(int *)(((uintptr_t)pf_module_state + 0x8170U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8150U)
 */

void recovered_1000a17c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a19c + 8;
  return;
}

#undef DAT_1000a19c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8174U)
 */

void recovered_1000a1a0(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar2 = uVar1 - param_2;
  uVar3 = param_3;
  if (uVar2 < param_3) {
    uVar3 = uVar2;
  }
  if (param_3 == 0xffffffff) {
    uVar3 = uVar2;
  }
  for (; uVar3 + param_2 < uVar1; param_2 = param_2 + 1) {
    *(undefined1 *)(*param_1 + param_2) = *(undefined1 *)(*param_1 + param_2 + uVar3);
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 - uVar3;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + (uVar1 - uVar3)) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x81e4U)
 */

int recovered_1000a210(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_1000a22c(param_1);
  return iVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8200U)
 */

undefined4 recovered_1000a22c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008dac(param_1);
  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8218U)
 */

void recovered_1000a244(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x821cU)
 */

void recovered_1000a248(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8220U)
 */

void recovered_1000a24c(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *param_3;
  uVar1 = *(uint *)(iVar3 + 0x30);
  iVar2 = *(int *)(iVar3 + 0x34);
  uVar4 = *(uint *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if ((int)(-1 - (iVar2 + (uint)(0x80000000 < uVar1))) < 0 ==
      (SBORROW4(-1,iVar2) != SBORROW4(-1 - iVar2,(uint)(0x80000000 < uVar1)))) {
    iVar2 = -1;
    uVar1 = 0x80000000;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x20) = uVar1;
  uVar1 = 0x80000000;
  iVar2 = -1;
  if ((int)(-1 - (iVar3 + (uint)(0x80000000 < uVar4))) < 0 !=
      (SBORROW4(-1,iVar3) != SBORROW4(-1 - iVar3,(uint)(0x80000000 < uVar4)))) {
    uVar1 = uVar4;
    iVar2 = iVar3;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x1c) = uVar1;
  return;
}


#undef DAT_1000a2f0
#define DAT_1000a2f0 (*(int *)(((uintptr_t)pf_module_state + 0x82c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x82a4U)
 */

void recovered_1000a2d0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a2f0 + 8;
  return;
}

#undef DAT_1000a2f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x82c8U)
 */

void recovered_1000a2f4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x82ccU)
 */

void recovered_1000a2f8(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x82d0U)
 */

void recovered_1000a2fc(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(*param_3 + 0x10);
  iVar2 = *(int *)(*param_3 + 0x14);
  if ((int)-(iVar2 + (uint)(1 < uVar1)) < 0 ==
      (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(1 < uVar1)))) {
    uVar1 = 1;
  }
  recovered_10008a28(param_2,uVar1);
  return;
}


#undef DAT_1000a33c
#define DAT_1000a33c (*(int *)(((uintptr_t)pf_module_state + 0x8310U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x82f0U)
 */

void recovered_1000a31c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a33c + 8;
  return;
}

#undef DAT_1000a33c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8314U)
 */

void recovered_1000a340(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8318U)
 */

void recovered_1000a344(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000a4b4
#define DAT_1000a4b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8488U)))
#undef DAT_1000a4b8
#define DAT_1000a4b8 (*(int *)(((uintptr_t)pf_module_state + 0x848cU)))
#undef DAT_1000a4bc
#define DAT_1000a4bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x8490U)))
#define auStack_c0 (*(undefined1 (*)[4])(frame + 16))
#define local_bc (*(char * *)(frame + 20))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_b8 (*(void * (*)[3])(frame + 24))
#define local_ac (*(void * (*)[3])(frame + 36))
#define local_a0 (*(void * (*)[3])(frame + 48))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x831cU)
 */

void recovered_1000a348(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[240] = {0};

  char *pcVar1;
  char *pcVar2;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  recovered_100061a4(local_a0,pcVar2);
  local_7c = *DAT_1000a4bc;
  local_78 = DAT_1000a4b4;
  local_70 = DAT_1000a4b8 + ((uintptr_t)pf_module_state+0x83acU);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  recovered_100055cc(&uStack_94);
  local_bc = pcVar1;
  recovered_100061a4(local_b8,pcVar1);
  local_90 = 2;
  recovered_1000a4e4((int *)local_ac,(int *)local_b8,(int *)local_a0);
  recovered_10006150(local_bc);
  recovered_10005100(local_ac[0]);
  recovered_10005100(local_b8[0]);
  recovered_10005100(local_a0[0]);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_1000a4b4
#undef DAT_1000a4b8
#undef DAT_1000a4bc
#undef auStack_c0
#undef local_bc
#undef uStack_94
#undef local_b8
#undef local_ac
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_1000a4e0
#define DAT_1000a4e0 (*(int *)(((uintptr_t)pf_module_state + 0x84b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8494U)
 */

void recovered_1000a4c0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a4e0 + 8;
  return;
}

#undef DAT_1000a4e0

#undef DAT_1000a5c0
#define DAT_1000a5c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8594U)))
#undef DAT_1000a5c4
#define DAT_1000a5c4 (*(int *)(((uintptr_t)pf_module_state + 0x8598U)))
#undef DAT_1000a5c8
#define DAT_1000a5c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x859cU)))
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
 * Address: ((uintptr_t)pf_module_state+0x84b8U)
 */

void recovered_1000a4e4(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[208] = {0};

  int *piVar1;

  local_98 = param_1;
  recovered_10008e2c(param_1,param_2);
  piVar1 = local_98;
  local_7c = *DAT_1000a5c8;
  local_78 = DAT_1000a5c0;
  local_70 = DAT_1000a5c4 + ((uintptr_t)pf_module_state+0x8514U);
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  recovered_100055cc(&uStack_94);
  recovered_1000a5cc(piVar1,param_3);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_1000a5c0
#undef DAT_1000a5c4
#undef DAT_1000a5c8
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

#undef DAT_1000a5e4
#define DAT_1000a5e4 (*(int *)(((uintptr_t)pf_module_state + 0x85b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x85a0U)
 */

void recovered_1000a5cc(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_1000a5e4;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_1000a5e8(param_1,iVar1,param_2[1]);
  return;
}

#undef DAT_1000a5e4

#define local_20 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x85bcU)
 */

int * recovered_1000a5e8(int *param_1,int param_2,uint param_3)

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
    iVar1 = recovered_10008d58(param_1,param_2,&local_20,in_r3);
    iVar3 = param_1[1];
    if (iVar1 == 0) {
      recovered_100080bc(param_1,iVar3 + unaff_r5);
      for (; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      if ((uint)(iVar3 - local_20) < unaff_r5) {
        unaff_r5 = iVar3 - local_20;
      }
      recovered_100080bc(param_1,unaff_r5 + iVar3);
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
 * Address: ((uintptr_t)pf_module_state+0x86a0U)
 */

void recovered_1000a6cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x86a4U)
 */

void recovered_1000a6d0(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
#undef uStack_94
#undef auStack_a0
#undef uStack_7c
#undef uStack_90
#undef puStack_74
#undef uStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000a7fc
#define DAT_1000a7fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x87d0U)))
#undef DAT_1000a800
#define DAT_1000a800 (*(int *)(((uintptr_t)pf_module_state + 0x87d4U)))
#undef DAT_1000a804
#define DAT_1000a804 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x87d8U)))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(char * *)(frame + 16))
#define local_ac (*(void * (*)[3])(frame + 20))
#define local_a0 (*(void * (*)[3])(frame + 32))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(undefined4 *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x86a8U)
 */

void recovered_1000a6d4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] = {0};

  int iVar1;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  local_b0 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  recovered_100061a4(local_ac,local_b0);
  local_7c = *DAT_1000a804;
  local_78 = DAT_1000a7fc;
  local_70 = DAT_1000a800 + ((uintptr_t)pf_module_state+0x872cU);
  iVar1 = *param_3;
  local_90 = 1;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  recovered_100055cc(&uStack_94);
  recovered_1000a4e4((int *)local_a0,(int *)local_ac,(int *)(iVar1 + 0x24));
  recovered_10006150(local_b0);
  recovered_10005100(local_a0[0]);
  recovered_10005100(local_ac[0]);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_1000a7fc
#undef DAT_1000a800
#undef DAT_1000a804
#undef uStack_94
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_1000a828
#define DAT_1000a828 (*(int *)(((uintptr_t)pf_module_state + 0x87fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x87dcU)
 */

void recovered_1000a808(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a828 + 8;
  return;
}

#undef DAT_1000a828

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8800U)
 */

void recovered_1000a82c(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8804U)
 */

void recovered_1000a830(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8808U)
 */

void recovered_1000a834(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  uint uVar2;
  int extraout_r1 = 0;
  int iVar3;
  uint uVar4;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  uVar2 = recovered_10006268(pcVar1);
  iVar3 = *param_3;
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  uVar4 = *(uint *)(iVar3 + 0x30);
  iVar3 = *(int *)(iVar3 + 0x34);
  *(uint *)(pcVar1 + 0x10) = uVar4 + uVar2;
  *(uint *)(pcVar1 + 0x14) = iVar3 + extraout_r1 + (uint)CARRY4(uVar4,uVar2);
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000a8c8
#define DAT_1000a8c8 (*(int *)(((uintptr_t)pf_module_state + 0x889cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x887cU)
 */

void recovered_1000a8a8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a8c8 + 8;
  return;
}

#undef DAT_1000a8c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x88a0U)
 */

void recovered_1000a8cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x88a4U)
 */

void recovered_1000a8d0(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x88a8U)
 */

void recovered_1000a8d4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1 = 0;
  int extraout_r1_00 = 0;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  uVar3 = recovered_10006268(pcVar2);
  uVar4 = recovered_10006268(pcVar1);
  *(uint *)(pcVar1 + 0x10) = uVar4 + uVar3;
  *(uint *)(pcVar1 + 0x14) = extraout_r1_00 + extraout_r1 + (uint)CARRY4(uVar4,uVar3);
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000a97c
#define DAT_1000a97c (*(int *)(((uintptr_t)pf_module_state + 0x8950U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8930U)
 */

void recovered_1000a95c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000a97c + 8;
  return;
}

#undef DAT_1000a97c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8954U)
 */

void recovered_1000a980(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8958U)
 */

void recovered_1000a984(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x895cU)
 */

void recovered_1000a988(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  uint uVar2;
  int extraout_r1 = 0;
  int iVar3;
  uint uVar4;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  uVar2 = recovered_10006268(pcVar1);
  iVar3 = *param_3;
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  uVar4 = *(uint *)(iVar3 + 0x30);
  iVar3 = *(int *)(iVar3 + 0x34);
  *(uint *)(pcVar1 + 0x10) = uVar2 - uVar4;
  *(uint *)(pcVar1 + 0x14) = extraout_r1 - (iVar3 + (uint)(uVar2 < uVar4));
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000aa1c
#define DAT_1000aa1c (*(int *)(((uintptr_t)pf_module_state + 0x89f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x89d0U)
 */

void recovered_1000a9fc(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000aa1c + 8;
  return;
}

#undef DAT_1000aa1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x89f4U)
 */

void recovered_1000aa20(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x89f8U)
 */

void recovered_1000aa24(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x89fcU)
 */

void recovered_1000aa28(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1 = 0;
  int extraout_r1_00 = 0;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  uVar3 = recovered_10006268(pcVar2);
  uVar4 = recovered_10006268(pcVar1);
  *(uint *)(pcVar1 + 0x10) = uVar4 - uVar3;
  *(uint *)(pcVar1 + 0x14) = extraout_r1_00 - (extraout_r1 + (uint)(uVar4 < uVar3));
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000aad0
#define DAT_1000aad0 (*(int *)(((uintptr_t)pf_module_state + 0x8aa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8a84U)
 */

void recovered_1000aab0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000aad0 + 8;
  return;
}

#undef DAT_1000aad0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8aa8U)
 */

void recovered_1000aad4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8aacU)
 */

void recovered_1000aad8(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8ab0U)
 */

void recovered_1000aadc(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  int extraout_r1 = 0;
  int iVar4;
  uint uVar5;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  uVar3 = recovered_10006268(pcVar2);
  iVar4 = *param_3;
  *pcVar2 = '\x02';
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  uVar5 = *(uint *)(iVar4 + 0x30);
  iVar4 = *(int *)(iVar4 + 0x34);
  lVar1 = (ulonglong)uVar3 * (ulonglong)uVar5;
  *(int *)(pcVar2 + 0x10) = (int)lVar1;
  *(uint *)(pcVar2 + 0x14) = iVar4 * uVar3 + uVar5 * extraout_r1 + (int)((ulonglong)lVar1 >> 0x20);
  if (*(undefined1 **)(pcVar2 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 4) = 0;
  }
  return;
}


#undef DAT_1000ab74
#define DAT_1000ab74 (*(int *)(((uintptr_t)pf_module_state + 0x8b48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b28U)
 */

void recovered_1000ab54(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000ab74 + 8;
  return;
}

#undef DAT_1000ab74

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8b4cU)
 */

void recovered_1000ab78(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8b50U)
 */

void recovered_1000ab7c(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8b54U)
 */

void recovered_1000ab80(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1 = 0;
  int extraout_r1_00 = 0;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  uVar3 = recovered_10006268(pcVar2);
  uVar4 = recovered_10006268(pcVar1);
  *pcVar1 = '\x02';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  *(int *)(pcVar1 + 0x10) = (int)((ulonglong)uVar3 * (ulonglong)uVar4);
  *(uint *)(pcVar1 + 0x14) =
       extraout_r1_00 * uVar3 +
       uVar4 * extraout_r1 + (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20);
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000ac2c
#define DAT_1000ac2c (*(int *)(((uintptr_t)pf_module_state + 0x8c00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8be0U)
 */

void recovered_1000ac0c(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000ac2c + 8;
  return;
}

#undef DAT_1000ac2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c04U)
 */

void recovered_1000ac30(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8c08U)
 */

void recovered_1000ac34(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8c0cU)
 */

void recovered_1000ac38(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint extraout_r1 = 0;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;

  iVar1 = *param_3;
  uVar5 = *(uint *)(iVar1 + 0x30);
  uVar4 = *(uint *)(iVar1 + 0x34);
  recovered_10008a6c(param_2,*(uint *)(iVar1 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  if (uVar5 == 0 && uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = recovered_10006268(pcVar2);
    uVar6 = recovered_100029e0(uVar3,extraout_r1,uVar5,uVar4);
  }
  *(int *)(pcVar2 + 0x10) = (int)uVar6;
  *pcVar2 = '\x02';
  *(int *)(pcVar2 + 0x14) = (int)((ulonglong)uVar6 >> 0x20);
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(undefined1 **)(pcVar2 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar2 + 4) = 0;
  }
  return;
}


#undef DAT_1000acf0
#define DAT_1000acf0 (*(int *)(((uintptr_t)pf_module_state + 0x8cc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8ca4U)
 */

void recovered_1000acd0(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000acf0 + 8;
  return;
}

#undef DAT_1000acf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8cc8U)
 */

void recovered_1000acf4(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8cccU)
 */

void recovered_1000acf8(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8cd0U)
 */

void recovered_1000acfc(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  undefined8 uVar5;

  recovered_10008a6c(param_2,*(uint *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  uVar3 = recovered_10006268(pcVar2);
  if (uVar3 == 0 && extraout_r1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = recovered_10006268(pcVar1);
    uVar5 = recovered_100029e0(uVar4,extraout_r1_00,uVar3,extraout_r1);
  }
  *(int *)(pcVar1 + 0x10) = (int)uVar5;
  *pcVar1 = '\x02';
  *(int *)(pcVar1 + 0x14) = (int)((ulonglong)uVar5 >> 0x20);
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef DAT_1000adc8
#define DAT_1000adc8 (*(int *)(((uintptr_t)pf_module_state + 0x8d9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8d7cU)
 */

void recovered_1000ada8(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000adc8 + 8;
  return;
}

#undef DAT_1000adc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8da0U)
 */

void recovered_1000adcc(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100051b4
#define DAT_100051b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_100051b8
#define DAT_100051b8 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_100051bc
#define DAT_100051bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x8da4U)
 */

void recovered_1000add0(void *data)

{
  unsigned char frame[208] = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  uStack_7c = DAT_100051bc;
  uStack_78 = DAT_100051b4;
  iStack_70 = DAT_100051b8 + ((uintptr_t)pf_module_state+0x311cU);
  uStack_90 = 1;
  recovered_100055cc(&uStack_94);
  recovered_10002b34(data);
  recovered_100055e4(&uStack_94);
  return;
}

#undef DAT_100051b4
#undef DAT_100051b8
#undef DAT_100051bc
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
 * Address: ((uintptr_t)pf_module_state+0x8da8U)
 */

void recovered_1000add4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x18));
  pcVar4 = (char *)recovered_100081d0(param_2,*(uint *)(*param_3 + 0x38));
  cVar1 = *pcVar3;
  if (cVar1 != *pcVar4) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      bVar2 = recovered_1000ae9c((int *)(pcVar3 + 4),(int *)(pcVar4 + 4));
      if (!bVar2) {
        return;
      }
    }
    else if ((cVar1 != '\x02') ||
            (*(int *)(pcVar3 + 0x10) != *(int *)(pcVar4 + 0x10) ||
             *(int *)(pcVar3 + 0x14) != *(int *)(pcVar4 + 0x14))) {
      return;
    }
  }
  recovered_10008018(param_2);
  return;
}


#undef DAT_1000ae98
#define DAT_1000ae98 (*(int *)(((uintptr_t)pf_module_state + 0x8e6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8e4cU)
 */

void recovered_1000ae78(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = recovered_100050d0(8);
  *piVar1 = DAT_1000ae98 + 8;
  return;
}

#undef DAT_1000ae98

#undef DAT_1000aecc
#define DAT_1000aecc (*(char * *)(((uintptr_t)pf_module_state + 0x8ea0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8e70U)
 */

bool recovered_1000ae9c(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = (char *)*param_1;
  if ((char *)*param_1 == (char *)0x0) {
    pcVar3 = DAT_1000aecc;
  }
  pcVar2 = (char *)*param_2;
  if ((char *)*param_2 == (char *)0x0) {
    pcVar2 = DAT_1000aecc;
  }
  bVar1 = recovered_1000aed0(pcVar3,param_1[1],pcVar2,param_2[1]);
  return bVar1;
}

#undef DAT_1000aecc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8ea4U)
 */

bool recovered_1000aed0(char *param_1,int param_2,char *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x8edcU)
 */

void recovered_1000af08(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_1000af8c(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_1000afa4((undefined1 *)(extraout_r0 + iVar1),(undefined1 *)(*param_1 + iVar1));
      recovered_10009060((undefined4 *)(*param_1 + iVar1 + 4));
      iVar1 = iVar1 + 0x18;
    }
    recovered_10005100((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8f60U)
 */

void recovered_1000af8c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100050d0(param_1 * 0x18);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8f78U)
 */

undefined1 * recovered_1000afa4(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_10009368((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8fb4U)
 */

int recovered_1000afe0(int *param_1,undefined1 *param_2)

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
    recovered_1000af08(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_10009cb8((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x901cU)
 */

int recovered_1000b048(int *param_1,undefined1 *param_2)

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
    recovered_1000af08(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_1000afa4((undefined1 *)(*param_1 + iVar1 * 0x18),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}


#undef DAT_1000b128
#define DAT_1000b128 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x90fcU)))
#undef DAT_1000b12c
#define DAT_1000b12c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9100U)))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9104U)))
#undef DAT_1000b134
#define DAT_1000b134 (*(int * *)(((uintptr_t)pf_module_state + 0x9108U)))
#undef DAT_1000b138
#define DAT_1000b138 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x910cU)))
#undef DAT_1000b13c
#define DAT_1000b13c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9110U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9084U)
 */

void recovered_1000b0b0(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_1000b128;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10005408(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_1000b12c;
  piVar2[1] = *(int *)*DAT_1000b130;
  *piVar2 = *DAT_1000b134 + 8;
  recovered_10005400();
  recovered_10005418(puVar3);
  return;
}

#undef DAT_1000b128
#undef DAT_1000b12c
#undef DAT_1000b130
#undef DAT_1000b134
#undef DAT_1000b138
#undef DAT_1000b13c

#undef DAT_1000b1b8
#define DAT_1000b1b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x918cU)))
#undef DAT_1000b1bc
#define DAT_1000b1bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9190U)))
#undef DAT_1000b1c0
#define DAT_1000b1c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9194U)))
#undef DAT_1000b1c4
#define DAT_1000b1c4 (*(int * *)(((uintptr_t)pf_module_state + 0x9198U)))
#undef DAT_1000b1c8
#define DAT_1000b1c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x919cU)))
#undef DAT_1000b1cc
#define DAT_1000b1cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x91a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9114U)
 */

void recovered_1000b140(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_1000b1b8;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10005408(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_1000b1bc;
  piVar2[1] = *(int *)*DAT_1000b1c0;
  *piVar2 = *DAT_1000b1c4 + 8;
  recovered_10005400();
  recovered_10005418(puVar3);
  return;
}

#undef DAT_1000b1b8
#undef DAT_1000b1bc
#undef DAT_1000b1c0
#undef DAT_1000b1c4
#undef DAT_1000b1c8
#undef DAT_1000b1cc

#undef DAT_1000b248
#define DAT_1000b248 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x921cU)))
#undef DAT_1000b24c
#define DAT_1000b24c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9220U)))
#undef DAT_1000b250
#define DAT_1000b250 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9224U)))
#undef DAT_1000b254
#define DAT_1000b254 (*(int * *)(((uintptr_t)pf_module_state + 0x9228U)))
#undef DAT_1000b258
#define DAT_1000b258 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x922cU)))
#undef DAT_1000b25c
#define DAT_1000b25c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9230U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91a4U)
 */

void recovered_1000b1d0(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_1000b248;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10005408(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_1000b24c;
  piVar2[1] = *(int *)*DAT_1000b250;
  *piVar2 = *DAT_1000b254 + 8;
  recovered_10005400();
  recovered_10005418(puVar3);
  return;
}

#undef DAT_1000b248
#undef DAT_1000b24c
#undef DAT_1000b250
#undef DAT_1000b254
#undef DAT_1000b258
#undef DAT_1000b25c

#undef DAT_1000b2d8
#define DAT_1000b2d8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x92acU)))
#undef DAT_1000b2dc
#define DAT_1000b2dc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x92b0U)))
#undef DAT_1000b2e0
#define DAT_1000b2e0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x92b4U)))
#undef DAT_1000b2e4
#define DAT_1000b2e4 (*(int * *)(((uintptr_t)pf_module_state + 0x92b8U)))
#undef DAT_1000b2e8
#define DAT_1000b2e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92bcU)))
#undef DAT_1000b2ec
#define DAT_1000b2ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x92c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9234U)
 */

void recovered_1000b260(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;
  uint *puVar3;

  puVar3 = (uint *)*DAT_1000b2d8;
  DataMemoryBarrier(0xb);
  if ((*puVar3 & 1) != 0) {
    return;
  }
  uVar1 = recovered_10005408(puVar3);
  if (uVar1 == 0) {
    return;
  }
  piVar2 = (int *)*DAT_1000b2dc;
  piVar2[1] = *(int *)*DAT_1000b2e0;
  *piVar2 = *DAT_1000b2e4 + 8;
  recovered_10005400();
  recovered_10005418(puVar3);
  return;
}

#undef DAT_1000b2d8
#undef DAT_1000b2dc
#undef DAT_1000b2e0
#undef DAT_1000b2e4
#undef DAT_1000b2e8
#undef DAT_1000b2ec
