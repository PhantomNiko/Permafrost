/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_100018a4(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  recovered_100018ac(param_1,param_2,(uint *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8U)
 */

uint recovered_100018ac(uint param_1,uint param_2,uint *param_3)

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
uint recovered_10001924(uint a,uint b){uint remainder=0;recovered_100018ac(a,b,&remainder);return remainder;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa4U)
 */

int recovered_10001948(uint param_1,uint param_2)

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
  uVar1 = recovered_100018ac(uVar1,uVar2,(uint *)0x0);
  if ((int)(param_2 ^ param_1) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#define local_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdcU)
 */

int recovered_10001980(int param_1,int param_2)

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
  recovered_100018ac(uVar1,param_2,&local_10);
  if (param_1 < 0) {
    local_10 = -local_10;
  }
  return local_10;
}

#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x120U)
 */

undefined8 recovered_100019c4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


#undef DAT_10001b4c
#define DAT_10001b4c (*(double *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228U)
 */

undefined8 recovered_10001acc(undefined4 param_1,undefined4 param_2)

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
    dVar9 = DAT_10001b4c;
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

#undef DAT_10001b4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b0U)
 */

undefined8 recovered_10001b54(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10001acc(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10001acc(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fcU)
 */

void recovered_10001ba0(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10001acc(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30cU)
 */

void recovered_10001bb0(float param_1)

{
  unsigned char frame[64] = {0};

  recovered_10001b54(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31cU)
 */

void recovered_10001bc0(uint param_1,uint param_2)

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

void recovered_10001bf4(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 0) {
    recovered_10001bc0(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10001bc0(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x378U)
 */

float recovered_10001c1c(void)

{
  unsigned char frame[64] = {0};

  uint in_r0;
  undefined4 extraout_r0 = 0;
  uint in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10001bc0(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x394U)
 */

float recovered_10001c38(void)

{
  unsigned char frame[64] = {0};

  int in_r0;
  undefined4 extraout_r0 = 0;
  int in_r1;
  undefined4 extraout_r1 = 0;

  recovered_10001bf4(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_10001c64
#define DAT_10001c64 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b0U)
 */

void recovered_10001c54(void)

{
  unsigned char frame[64] = {0};

  *DAT_10001c64 = 0;
  recovered_10001c68();
  return;
}

#undef DAT_10001c64

#undef DAT_10001e48
#define DAT_10001e48 (*(uint * *)(((uintptr_t)pf_module_state + 0x5a4U)))
#undef DAT_10001e4c
#define DAT_10001e4c (*(char * *)(((uintptr_t)pf_module_state + 0x5a8U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_a4 (*(uint (*)[32])(frame + 16))
#define local_24 (*(int *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c4U)
 */

void recovered_10001c68(void)

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

  pcVar1 = DAT_10001e4c;
  local_24 = 0;
  if (*DAT_10001e4c == '\0') {
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar5 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10001e48[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar5 != uVar10; uVar5 = uVar5 + 1) {
      uVar8 = DAT_10001e48[uVar5 * 2 + 2];
      uVar4 = DAT_10001e48[uVar5 * 2 + 3];
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
      recovered_10003838(puVar3[-1],*puVar3,&local_24,in_r3);
      in_r3 = extraout_r3;
      puVar3 = puVar3 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar5 = 0x4000000;
      if (0x300000 < *DAT_10001e48) {
        uVar5 = *DAT_10001e48 & 0xfffffff0;
      }
      uVar10 = uVar5 - 0x300000;
      if (uVar5 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      recovered_10003838(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10001e48
#undef DAT_10001e4c
#undef EXT_00000010
#undef local_a4
#undef local_24

#undef DAT_10001e90
#define DAT_10001e90 (*(int * *)(((uintptr_t)pf_module_state + 0x5ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5acU)
 */

int recovered_10001e50(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001c68();
  iVar1 = 0;
  piVar2 = DAT_10001e90;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_10001e90

#undef DAT_10001ee0
#define DAT_10001ee0 (*(int *)(((uintptr_t)pf_module_state + 0x63cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f0U)
 */

void recovered_10001e94(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10001c68();
  iVar1 = DAT_10001ee0;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10001ee0

#undef DAT_10001f18
#define DAT_10001f18 (*(int * *)(((uintptr_t)pf_module_state + 0x674U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x640U)
 */

int recovered_10001ee4(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001c68();
  iVar1 = 0;
  piVar2 = DAT_10001f18;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10001f18

#undef DAT_10001f58
#define DAT_10001f58 (*(int *)(((uintptr_t)pf_module_state + 0x6b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x678U)
 */

void recovered_10001f1c(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_10001c68();
  iVar1 = DAT_10001f58;
  do {
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != 0);
  return;
}

#undef DAT_10001f58

#undef DAT_10001ffc
#define DAT_10001ffc (*(uint * *)(((uintptr_t)pf_module_state + 0x758U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b8U)
 */

uint * recovered_10001f5c(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    recovered_10001c68();
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10001ffc;
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

#undef DAT_10001ffc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x75cU)
 */

longlong recovered_10002000(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_1000205c(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100020b4(uint param_1,int param_2,uint param_3)

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

undefined8 recovered_10002100(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_1000211c(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x878U)
 */

undefined8 recovered_1000211c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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

undefined8 recovered_10002224(void)

{
  unsigned char frame[584] = {0};

  uint in_r0;
  uint in_r1;
  uint in_r2;
  uint in_r3;

  recovered_1000211c(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9b4U)
 */

undefined8 recovered_10002258(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_1000211c((param_1 ^ uVar1) - uVar1,
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

undefined8 recovered_100022d0(uint param_1,uint param_2,uint param_3,uint param_4)

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
    recovered_1000211c((param_1 ^ uVar2) - uVar2,
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

void recovered_10002354(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xab8U)
 */

int recovered_1000235c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10002368(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_100023ac(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100023ec(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb94U)
 */

void * recovered_10002438(void *out,void *data,ulong size)

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

void * recovered_10002454(void *out,void *data,ulong size)

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

void * recovered_100024a8(void *out,int value,ulong size)

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

void recovered_100024c0(undefined1 *param_1,int param_2)

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

void recovered_100024d8(undefined1 *param_1,int param_2)

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

int recovered_100024f0(void *left,void *right,ulong size)

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

bool recovered_10002518(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc88U)
 */

bool recovered_1000252c(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc9cU)
 */

bool recovered_10002540(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcb4U)
 */

bool recovered_10002558(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xce0U)
 */

bool recovered_10002584(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd00U)
 */

bool recovered_100025a4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd14U)
 */

int recovered_100025b8(int param_1)

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

int recovered_100025c8(int param_1)

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

ulong recovered_100025d8(char *text)

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

int recovered_10002608(char *left,char *right)

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

int recovered_10002634(char *left,char *right)

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

void recovered_10002638(int param_1,int param_2)

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

void * recovered_10002654(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_100025d8(param_1);
    out = recovered_10002368(uVar1 + 1);
    if (out != (void *)0x0) {
      pvVar2 = recovered_10002438(out,param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xdf8U)
 */

char * recovered_1000269c(char *param_1,char param_2)

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

int recovered_100026c8(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = recovered_1000269c(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe68U)
 */

char * recovered_1000270c(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_1000269c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xea8U)
 */

char * recovered_1000274c(char *param_1,char *param_2)

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


#undef DAT_1000279c
#define DAT_1000279c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xef8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xef0U)
 */

undefined4 recovered_10002794(void)

{
  unsigned char frame[64] = {0};

  return DAT_1000279c;
}

#undef DAT_1000279c

#undef DAT_100027a8
#define DAT_100027a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xefcU)
 */

undefined4 recovered_100027a0(void)

{
  unsigned char frame[64] = {0};

  return DAT_100027a8;
}

#undef DAT_100027a8

#undef DAT_100027c0
#define DAT_100027c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf08U)
 */

void recovered_100027ac(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_100027c0;
  }
  return;
}

#undef DAT_100027c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf20U)
 */

double recovered_100027c4(undefined4 param_1,undefined4 param_2,int param_3)

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

double recovered_10002804(undefined4 param_1,undefined4 param_2,int *param_3)

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

double recovered_1000289c(double left,double right)

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

double recovered_100028d4(double left,double right)

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

double recovered_10002950(double value)

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

double recovered_10002980(double value)

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

double recovered_100029c4(double value)

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


#undef DAT_10002ad4
#define DAT_10002ad4 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1230U)))
#undef DAT_10002adc
#define DAT_10002adc (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1238U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1170U)
 */

double recovered_10002a14(double value)

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

#undef DAT_10002ad4
#undef DAT_10002adc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1240U)
 */

void recovered_10002ae4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  recovered_10001b54(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return;
}


#undef DAT_10002b64
#define DAT_10002b64 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c0U)))
#undef DAT_10002b6c
#define DAT_10002b6c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1270U)
 */

double recovered_10002b14(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10002b74();
  return extraout_d0;
}

#undef DAT_10002b64
#undef DAT_10002b6c

#undef DAT_10002bac
#define DAT_10002bac (*(double *)(((uintptr_t)pf_module_state + 0x1308U)))
#undef DAT_10002bb4
#define DAT_10002bb4 (*(double *)(((uintptr_t)pf_module_state + 0x1310U)))
#undef DAT_10002bbc
#define DAT_10002bbc (*(double *)(((uintptr_t)pf_module_state + 0x1318U)))
#undef DAT_10002bc4
#define DAT_10002bc4 (*(double *)(((uintptr_t)pf_module_state + 0x1320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x12d0U)
 */

void recovered_10002b74(void)

{
  unsigned char frame[64] = {0};

  double in_d0;

  for (; DAT_10002bac < in_d0; in_d0 = in_d0 + DAT_10002bc4) {
  }
  for (; in_d0 < DAT_10002bb4; in_d0 = in_d0 + DAT_10002bbc) {
  }
  return;
}

#undef DAT_10002bac
#undef DAT_10002bb4
#undef DAT_10002bbc
#undef DAT_10002bc4

#undef DAT_10002c14
#define DAT_10002c14 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1328U)
 */

double recovered_10002bcc(double value)

{
  unsigned char frame[64] = {0};

  double extraout_d0 = 0;

  recovered_10002b74();
  return extraout_d0;
}

#undef DAT_10002c14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1378U)
 */

double recovered_10002c1c(double value)

{
  unsigned char frame[64] = {0};

  return value;
}


#undef DAT_10002c74
#define DAT_10002c74 (*(float *)(((uintptr_t)pf_module_state + 0x13d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1398U)
 */

float recovered_10002c3c(float left,float right)

{
  unsigned char frame[64] = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (in_r1 == 0.0) {
    fVar2 = DAT_10002c74;
  }
  else {
    uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)in_r0 - dVar3 * (double)in_r1);
  }
  return fVar2;
}

#undef DAT_10002c74

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x13d4U)
 */

float recovered_10002c78(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002804(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1400U)
 */

float recovered_10002ca4(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100027c4(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)(double)((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x142cU)
 */

float recovered_10002cd0(float left,float right)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double in_d1;

  recovered_100028d4(pf_bits_double(CONCAT44(right,in_r1)),in_d1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1464U)
 */

float recovered_10002d08(float value)

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

float recovered_10002d40(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002980(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x14c4U)
 */

double recovered_10002d68(double value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;
  double dVar2;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar2 = recovered_10002980(value);
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

float recovered_10002da8(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002d68(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x152cU)
 */

float recovered_10002dd0(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_100029c4(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1554U)
 */

float recovered_10002df8(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002a14(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x157cU)
 */

void recovered_10002e20(void)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  recovered_10002ae4(in_r0,in_r1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x158cU)
 */

float recovered_10002e30(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002b14(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15b4U)
 */

float recovered_10002e58(float value)

{
  unsigned char frame[64] = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10002bcc(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15dcU)
 */

float recovered_10002e80(float value)

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

int recovered_10002e9c(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar2 = recovered_10002fc4((int)(char)*pbVar1);
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

uint recovered_10002fc4(int param_1)

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

int recovered_10003008(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto LAB_10003064;
  }
  bVar1 = false;
LAB_10003064:
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
    uVar3 = recovered_10002fc4((int)(char)*pbVar2);
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

double recovered_10003128(char *text,char **end)

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
        recovered_100027c4(SUB84(dVar8,0),(int)(pf_double_bits(dVar8) >> 0x20),iVar3 * iVar7);
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

float recovered_100032c4(char *text,char **end)

{
  unsigned char frame[64] = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003128(text,end);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_100036d8
#define DAT_100036d8 (*(char * *)(((uintptr_t)pf_module_state + 0x1e34U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1a3cU)
 */

int recovered_100032e0(char *out,ulong capacity,char *format,void *arguments)

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
LAB_1000333c:
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
LAB_1000336c:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_10003370;
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
LAB_100033f4:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10003404_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10003404_caseD_64;
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
switchD_10003404_caseD_65:
      if (local_48 < 2) goto LAB_10003370;
      *local_44 = 0x3f;
      goto LAB_1000336c;
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
      recovered_1000376c((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
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
      goto LAB_100033b8;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10003404_caseD_68;
    case 0x70:
      uVar2 = *(uint *)arguments;
      recovered_10003718((int *)&local_44,&local_48,&local_4c,DAT_100036d8);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)arguments + 4);
      recovered_10003718((int *)&local_44,&local_48,&local_4c,*(char **)arguments);
      goto LAB_100033b8;
    case 0x75:
      uVar2 = *(uint *)arguments;
      goto LAB_10003688;
    case 0x78:
      uVar2 = *(uint *)arguments;
      iVar3 = 0;
LAB_10003674:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)arguments;
          iVar3 = 1;
          goto LAB_10003674;
        }
        goto switchD_10003404_caseD_65;
      }
      goto switchD_10003404_caseD_64;
    }
    goto LAB_100036a0;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = arguments;
  format = format + 1;
  goto LAB_100033b0;
switchD_10003404_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_100033f4;
switchD_10003404_caseD_64:
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
LAB_10003688:
  uVar12 = 10;
  iVar3 = 0;
LAB_100036a0:
  pdVar7 = (double *)((int)arguments + 4);
  recovered_1000376c((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_100033b8;
switchD_10003404_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)arguments;
    local_44 = local_44 + 1;
  }
  arguments = (void *)((int)arguments + 4);
LAB_10003370:
  pdVar7 = arguments;
LAB_100033b0:
  local_4c = local_4c + 1;
LAB_100033b8:
  format = format + 1;
  arguments = pdVar7;
  goto LAB_1000333c;
}

#undef DAT_100036d8
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e38U)
 */

void recovered_100036dc(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_10003768
#define DAT_10003768 (*(char * *)(((uintptr_t)pf_module_state + 0x1ec4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1e74U)
 */

void recovered_10003718(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = DAT_10003768;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_100036dc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_10003768

#undef DAT_10003804
#define DAT_10003804 (*(int *)(((uintptr_t)pf_module_state + 0x1f60U)))
#undef DAT_10003808
#define DAT_10003808 (*(int *)(((uintptr_t)pf_module_state + 0x1f64U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ec8U)
 */

void recovered_1000376c(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] = {0};

  int iVar1;
  uint extraout_r0 = 0;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_10003808;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar3 = DAT_10003804;
  }
  do {
    iVar2 = iVar1;
    recovered_100018a4(param_4,param_5);
    bVar4 = param_5 <= param_4;
    local_40[-iVar2] = *(undefined1 *)(iVar3 + (param_4 - extraout_r0 * param_5));
    param_4 = extraout_r0;
    iVar1 = iVar2 + -1;
  } while (bVar4);
  for (; iVar2 != 1; iVar2 = iVar2 + 1) {
    recovered_100036dc(param_1,param_2,param_3,local_40[-iVar2]);
  }
  return;
}

#undef DAT_10003804
#undef DAT_10003808
#undef local_40

#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f68U)
 */

int recovered_1000380c(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_r3;

  local_4 = in_r3;
  iVar1 = recovered_100032e0(out,capacity,format,&local_4);
  return iVar1;
}

#undef local_4

#undef DAT_1000389c
#define DAT_1000389c (*(int *)(((uintptr_t)pf_module_state + 0x1ff8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1f94U)
 */

void recovered_10003838(uint param_1,uint param_2,int *param_3,int *param_4)

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
    piVar2 = (int *)(DAT_1000389c + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_1000389c

#undef DAT_100038ec
#define DAT_100038ec (*(int *)(((uintptr_t)pf_module_state + 0x2048U)))
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

undefined4 recovered_100038a0(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_100038ec) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_100038ec
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

#undef DAT_1000399c
#define DAT_1000399c (*(int * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#undef DAT_100039a0
#define DAT_100039a0 (*(int *)(((uintptr_t)pf_module_state + 0x20fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x204cU)
 */

void recovered_100038f0(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_100039a0;
  piVar2 = DAT_1000399c;
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
LAB_10003980:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          recovered_100039a4(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_10003980;
      }
      recovered_100039a4(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_1000399c
#undef DAT_100039a0

#undef DAT_10003a24
#define DAT_10003a24 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2180U)))
#undef DAT_10003a28
#define DAT_10003a28 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2184U)))
#undef DAT_10003a2c
#define DAT_10003a2c (*(void * *)(((uintptr_t)pf_module_state + 0x2188U)))
#define local_214 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2100U)
 */

void recovered_100039a4(int param_1)

{
  unsigned char frame[580] = {0};

  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong size;

  puVar1 = DAT_10003a28;
  size = *DAT_10003a28;
  if (size != 0 || param_1 != 0) {
    uVar2 = 0;
    if (size != 0) {
      recovered_10002438(local_214,DAT_10003a2c,size);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = recovered_100047e8(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10003a24 != (code *)0x0)) {
      (*(code *)*DAT_10003a24)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10003a24
#undef DAT_10003a28
#undef DAT_10003a2c
#undef local_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x218cU)
 */

void recovered_10003a30(void)

{
  unsigned char frame[64] = {0};

  recovered_100039a4(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2194U)
 */

void recovered_10003a38(void)

{
  unsigned char frame[64] = {0};

  recovered_100039a4(0);
  return;
}


#undef DAT_10003a88
#define DAT_10003a88 (*(char * *)(((uintptr_t)pf_module_state + 0x21e4U)))
#undef DAT_10003a8c
#define DAT_10003a8c (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)))
#define acStack_14c (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x219cU)
 */

void recovered_10003a40(char *param_1,int param_2)

{
  unsigned char frame[380] = {0};

  int iVar1;
  char *format;

  format = DAT_10003a88;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  iVar1 = DAT_10003a8c;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = recovered_1000380c(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    recovered_100038f0(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_10003a88
#undef DAT_10003a8c
#undef acStack_14c

#undef DAT_10003acc
#define DAT_10003acc (*(char * *)(((uintptr_t)pf_module_state + 0x2228U)))
#undef DAT_10003ad0
#define DAT_10003ad0 (*(char * *)(((uintptr_t)pf_module_state + 0x222cU)))
#undef DAT_10003ad4
#define DAT_10003ad4 (*(char * *)(((uintptr_t)pf_module_state + 0x2230U)))
#undef DAT_10003ad8
#define DAT_10003ad8 (*(char * *)(((uintptr_t)pf_module_state + 0x2234U)))
#undef DAT_10003adc
#define DAT_10003adc (*(char * *)(((uintptr_t)pf_module_state + 0x2238U)))
#undef DAT_10003ae0
#define DAT_10003ae0 (*(char * *)(((uintptr_t)pf_module_state + 0x223cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21ecU)
 */

void recovered_10003a90(void)

{
  unsigned char frame[64] = {0};

  recovered_10003ae4(DAT_10003acc);
  recovered_10003ae4(DAT_10003ad0);
  recovered_10003ae4(DAT_10003ad4);
  recovered_10003ae4(DAT_10003ad8);
  recovered_10003ae4(DAT_10003adc);
  recovered_10003ae4(DAT_10003ae0);
  return;
}

#undef DAT_10003acc
#undef DAT_10003ad0
#undef DAT_10003ad4
#undef DAT_10003ad8
#undef DAT_10003adc
#undef DAT_10003ae0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2240U)
 */

void recovered_10003ae4(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_100025d8(param_1);
  recovered_100038f0(param_1,uVar1);
  return;
}


#undef DAT_10003b28
#define DAT_10003b28 (*(char * *)(((uintptr_t)pf_module_state + 0x2284U)))
#undef DAT_10003b2c
#define DAT_10003b2c (*(char * *)(((uintptr_t)pf_module_state + 0x2288U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2268U)
 */

void recovered_10003b0c(void)

{
  unsigned char frame[64] = {0};

  recovered_10003ae4(DAT_10003b28);
  recovered_10003ae4(DAT_10003b2c);
  return;
}

#undef DAT_10003b28
#undef DAT_10003b2c

#undef DAT_10003bb0
#define DAT_10003bb0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x230cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x228cU)
 */

bool recovered_10003b30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_10003a38();
    iVar1 = recovered_100047e8(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_10003bb0 != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_10003bb0)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10003bb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2310U)
 */

undefined4 recovered_10003bb4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2318U)
 */

void recovered_10003bbc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x231cU)
 */

undefined4 recovered_10003bc0(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10003e70
#define DAT_10003e70 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x25ccU)))
#undef DAT_10003e74
#define DAT_10003e74 (*(char * *)(((uintptr_t)pf_module_state + 0x25d0U)))
#undef DAT_10003e78
#define DAT_10003e78 (*(char * *)(((uintptr_t)pf_module_state + 0x25d4U)))
#undef DAT_10003e7c
#define DAT_10003e7c (*(char * *)(((uintptr_t)pf_module_state + 0x25d8U)))
#undef DAT_10003e80
#define DAT_10003e80 (*(char * *)(((uintptr_t)pf_module_state + 0x25dcU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2324U)
 */

undefined4 * recovered_10003bc8(char *param_1,int param_2)

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
    goto LAB_10003e0c;
  }
  iVar2 = recovered_10002608(param_1,DAT_10003e74);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10003da8:
    puVar4 = recovered_10002368(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100024a8(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      recovered_1000380c((char *)(puVar4 + 1),0xf1,DAT_10003e80,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10002608(param_1,DAT_10003e78);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10003da8;
    }
    iVar3 = recovered_10002608(param_1,DAT_10003e7c);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10003da8;
    }
    puVar4 = recovered_10002368(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_100024a8(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_1000269c(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_1000269c(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_1000269c(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_1000269c(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_1000269c(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_1000269c(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = recovered_1000269c(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      recovered_1000380c((char *)(puVar4 + 1),0xf1,DAT_10003e80,param_1);
      recovered_100024a8(auStack_a8 + 0x80,0,0xc);
      iVar2 = recovered_10003e84(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_10003e70 = 2;
LAB_10003e44:
          recovered_100023ac(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = recovered_1000269c(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = recovered_10003ed0((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10003e44;
            recovered_10002438((void *)puVar4[0x3f],unaff_r5,unaff_r6);
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
LAB_10003e0c:
  *(undefined4 *)*DAT_10003e70 = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_10003e70
#undef DAT_10003e74
#undef DAT_10003e78
#undef DAT_10003e7c
#undef DAT_10003e80
#undef auStack_a8

#undef DAT_10003ecc
#define DAT_10003ecc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25e0U)
 */

undefined4 recovered_10003e84(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_100047e8(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10003ecc == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x261cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10003ecc)(param_1,param_2);
  return uVar2;
}

#undef DAT_10003ecc

#undef DAT_10003f54
#define DAT_10003f54 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x26b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x262cU)
 */

undefined4 recovered_10003ed0(int param_1,uint param_2)

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
      pvVar2 = recovered_100023ec(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10003f54 = 0xc;
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

#undef DAT_10003f54

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26b4U)
 */

void recovered_10003f58(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (uint *)0x0) {
    recovered_10003f84(param_3);
  }
  recovered_10003bc8(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26e0U)
 */

undefined4 recovered_10003f84(uint *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000431c(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_100023ac((void *)param_1[0x3f]);
    }
    recovered_100023ac(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2724U)
 */

int recovered_10003fc8(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
          uVar1 = recovered_10004068(unaff_r6);
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


#undef DAT_10004150
#define DAT_10004150 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x28acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c4U)
 */

uint recovered_10004068(int *param_1)

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
        bVar1 = recovered_10003b30((int)text,0x1fe,DAT_10004150,0);
        if (!bVar1) goto LAB_10004140;
        uVar3 = recovered_100025d8(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_10004140:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_10004150

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28b0U)
 */

int recovered_10004154(void *param_1,int param_2,int param_3,uint *param_4)

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
        recovered_100038f0(param_1,size);
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
        iVar3 = recovered_10003ed0((int)unaff_r5,uVar1 + size);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          recovered_100024a8((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        recovered_10002438((void *)(unaff_r5[0x3f] + uVar1),param_1,size);
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


#undef DAT_100042f4
#define DAT_100042f4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29bcU)
 */

undefined4 recovered_10004260(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_1000427c;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10004274;
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
LAB_10004274:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_1000427c:
  *(undefined4 *)*DAT_100042f4 = 0x16;
  return 0xffffffff;
}

#undef DAT_100042f4

#undef DAT_10004318
#define DAT_10004318 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2a74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a54U)
 */

undefined4 recovered_100042f8(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10004318 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10004318

#undef DAT_10004390
#define DAT_10004390 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a78U)
 */

undefined4 recovered_1000431c(uint *param_1)

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
      iVar1 = recovered_1000452c(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10004390 = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_10004390

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af0U)
 */

undefined1 recovered_10004394(int param_1)

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

undefined1 recovered_100043a4(int param_1)

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

void recovered_100043b4(int param_1)

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

void recovered_100043d0(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10004438
#define DAT_10004438 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2b94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b50U)
 */

undefined4 recovered_100043f4(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = recovered_1000443c(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_10004438 = uVar2;
  return 0xffffffff;
}

#undef DAT_10004438

#undef DAT_1000447c
#define DAT_1000447c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b98U)
 */

undefined4 recovered_1000443c(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_100047e8(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_1000447c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2bccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_1000447c)(param_1);
  return uVar2;
}

#undef DAT_1000447c

#undef DAT_10004528
#define DAT_10004528 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2c84U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bdcU)
 */

undefined4 recovered_10004480(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    recovered_100024a8(&local_20,0,0xc);
    iVar1 = recovered_10003e84(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = recovered_1000452c(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = recovered_1000443c(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10004528 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10004528 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10004528
#undef local_20
#undef uStack_1c
#undef uStack_18

#undef DAT_1000457c
#define DAT_1000457c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2cd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2c88U)
 */

undefined4 recovered_1000452c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_100047e8(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_1000457c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2cccU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_1000457c)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_1000457c

#define auStack_a8 (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cdcU)
 */

undefined4 recovered_10004580(int param_1,undefined4 *param_2,uint *param_3)

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
      recovered_100024a8(auStack_a8 + 0x80,0,0xc);
      iVar1 = recovered_10003e84(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        out = recovered_10002368(size);
        if (out != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            recovered_10002438(out,unaff_r5,unaff_r6);
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

bool recovered_10004638(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = recovered_1000452c(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2dd4U)
 */

undefined4 recovered_10004678(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ddcU)
 */

void recovered_10004680(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de0U)
 */

undefined4 recovered_10004684(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2de8U)
 */

undefined4 recovered_1000468c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df0U)
 */

undefined4 recovered_10004694(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2df8U)
 */

void recovered_1000469c(int param_1,char param_2,int param_3)

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

int recovered_100046c4(char *left,char *right,ulong size)

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


#undef DAT_1000479c
#define DAT_1000479c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ef8U)))
#undef DAT_100047a0
#define DAT_100047a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2efcU)))
#undef DAT_100047a4
#define DAT_100047a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f00U)))
#undef DAT_100047a8
#define DAT_100047a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f04U)))
#undef DAT_100047ac
#define DAT_100047ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f08U)))
#undef DAT_100047b0
#define DAT_100047b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f0cU)))
#undef DAT_100047b4
#define DAT_100047b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f10U)))
#undef DAT_100047b8
#define DAT_100047b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f14U)))
#undef DAT_100047bc
#define DAT_100047bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e60U)
 */

undefined4 recovered_10004704(int param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_100047bc;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10004718_caseD_0;
  case 2:
    return DAT_100047a0;
  case 5:
    return DAT_100047a4;
  case 9:
    return DAT_100047a8;
  case 0xc:
    return DAT_100047ac;
  case 0xd:
    return DAT_100047b0;
  default:
    if (param_1 == 0x11) {
      return DAT_100047b4;
    }
    if (param_1 == 0x16) {
      return DAT_1000479c;
    }
switchD_10004718_caseD_0:
    return DAT_100047b8;
  }
}

#undef DAT_1000479c
#undef DAT_100047a0
#undef DAT_100047a4
#undef DAT_100047a8
#undef DAT_100047ac
#undef DAT_100047b0
#undef DAT_100047b4
#undef DAT_100047b8
#undef DAT_100047bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f1cU)
 */

undefined4 recovered_100047c0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f24U)
 */

undefined4 recovered_100047c8(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100047e4
#define DAT_100047e4 (*(int * *)(((uintptr_t)pf_module_state + 0x2f40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2cU)
 */

void recovered_100047d0(void)

{
  unsigned char frame[64] = {0};

  *DAT_100047e4 = *DAT_100047e4 + 1;
  return;
}

#undef DAT_100047e4

#undef DAT_10004834
#define DAT_10004834 (*(int *)(((uintptr_t)pf_module_state + 0x2f90U)))
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

undefined4 recovered_100047e8(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10004834) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10004834
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_10004838(int param_1)

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

undefined4 recovered_10004848(undefined4 *param_1)

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

int recovered_10004860(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    param_2 = 1;
  }
  return param_2;
}


#undef DAT_100048f8
#define DAT_100048f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3054U)))
#undef DAT_100048fc
#define DAT_100048fc (*(int *)(((uintptr_t)pf_module_state + 0x3058U)))
#undef DAT_10004900
#define DAT_10004900 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x305cU)))
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

void recovered_10004880(void)

{
  unsigned char frame[108] = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_10004900;
  local_20 = DAT_100048f8;
  local_18 = DAT_100048fc + ((uintptr_t)pf_module_state+0x3008U);
  local_38 = 1;
  recovered_10004e44(&uStack_3c);
  recovered_10002354();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_module_state+0x3030U));
  (*pcVar1)();
}

#undef DAT_100048f8
#undef DAT_100048fc
#undef DAT_10004900
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

undefined4 recovered_10004904(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3068U)
 */

void recovered_1000490c(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000491c(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004880();
}


#undef DAT_100082cc
#define DAT_100082cc (*(int *)(((uintptr_t)pf_module_state + 0x6a28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3078U)
 */

void recovered_1000491c(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100082cc;
  DAT_100082cc = param_1;
  recovered_10004d00(param_1);
  return;
}

#undef DAT_100082cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a4U)
 */

void * recovered_10004948(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002368(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002354();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30d0U)
 */

void * recovered_10004974(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10002368(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10002354();
  }
  return pvVar1;
}


#undef DAT_10004a2c
#define DAT_10004a2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3188U)))
#undef DAT_10004a30
#define DAT_10004a30 (*(int *)(((uintptr_t)pf_module_state + 0x318cU)))
#undef DAT_10004a34
#define DAT_10004a34 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3190U)))
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
 * Address: ((uintptr_t)pf_module_state+0x30d4U)
 */

void recovered_10004978(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004a34;
  local_78 = DAT_10004a2c;
  local_70 = DAT_10004a30 + ((uintptr_t)pf_module_state+0x311cU);
  local_90 = 1;
  recovered_10004e44(&uStack_94);
  recovered_100023ac(data);
  recovered_10004e5c(&uStack_94);
  return;
}

#undef DAT_10004a2c
#undef DAT_10004a30
#undef DAT_10004a34
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10004aec
#define DAT_10004aec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3248U)))
#undef DAT_10004af0
#define DAT_10004af0 (*(int *)(((uintptr_t)pf_module_state + 0x324cU)))
#undef DAT_10004af4
#define DAT_10004af4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3250U)))
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

void recovered_10004a38(void *data)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004af4;
  local_78 = DAT_10004aec;
  local_70 = DAT_10004af0 + ((uintptr_t)pf_module_state+0x31dcU);
  local_90 = 1;
  recovered_10004e44(&uStack_94);
  recovered_100023ac(data);
  recovered_10004e5c(&uStack_94);
  return;
}

#undef DAT_10004aec
#undef DAT_10004af0
#undef DAT_10004af4
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_10004bac
#define DAT_10004bac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3308U)))
#undef DAT_10004bb0
#define DAT_10004bb0 (*(int *)(((uintptr_t)pf_module_state + 0x330cU)))
#undef DAT_10004bb4
#define DAT_10004bb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3310U)))
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

void recovered_10004af8(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004bb4;
  local_78 = DAT_10004bac;
  local_70 = DAT_10004bb0 + ((uintptr_t)pf_module_state+0x329cU);
  local_90 = 1;
  recovered_10004e44(&uStack_94);
  recovered_100023ac(param_1);
  recovered_10004e5c(&uStack_94);
  return;
}

#undef DAT_10004bac
#undef DAT_10004bb0
#undef DAT_10004bb4
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10004c6c
#define DAT_10004c6c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33c8U)))
#undef DAT_10004c70
#define DAT_10004c70 (*(int *)(((uintptr_t)pf_module_state + 0x33ccU)))
#undef DAT_10004c74
#define DAT_10004c74 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x33d0U)))
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

void recovered_10004bb8(void *param_1)

{
  unsigned char frame[208] = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10004c74;
  local_78 = DAT_10004c6c;
  local_70 = DAT_10004c70 + ((uintptr_t)pf_module_state+0x335cU);
  local_90 = 1;
  recovered_10004e44(&uStack_94);
  recovered_100023ac(param_1);
  recovered_10004e5c(&uStack_94);
  return;
}

#undef DAT_10004c6c
#undef DAT_10004c70
#undef DAT_10004c74
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

undefined4 recovered_10004c78(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33dcU)
 */

uint recovered_10004c80(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33ecU)
 */

void recovered_10004c90(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33fcU)
 */

void recovered_10004ca0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3400U)
 */

undefined1 * recovered_10004ca4(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_10002368(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004880();
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

void recovered_10004cf0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100023ac((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x345cU)
 */

int recovered_10004d00(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x1c;
}


#undef DAT_10004d60
#define DAT_10004d60 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x34bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3464U)
 */

void recovered_10004d08(void)

{
  unsigned char frame[64] = {0};

  void *buffer;

  buffer = (void *)*DAT_10004d60;
  if (buffer == (void *)0x0) {
    return;
  }
  *DAT_10004d60 = *(undefined4 *)((int)buffer + 8);
  *(undefined4 *)((int)buffer + 8) = 0;
  if (*(char *)((int)buffer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)buffer + 4) != (code *)0x0) {
    (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
  }
  recovered_100023ac(buffer);
  return;
}

#undef DAT_10004d60

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34c0U)
 */

void recovered_10004d64(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  recovered_10004d8c((undefined4 *)(param_1 + -0x1c));
}


#undef DAT_10004e08
#define DAT_10004e08 (*(int * *)(((uintptr_t)pf_module_state + 0x3564U)))
#define local_28 (*(undefined4 *)(frame + 16))
#define local_24 (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e8U)
 */

void recovered_10004d8c(undefined4 *param_1)

{
  unsigned char frame[88] = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10004e08;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004880();
    }
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = recovered_10005334((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
                    /* WARNING: Subroutine does not return */
  recovered_10004ec8(param_1);
}

#undef DAT_10004e08
#undef local_28
#undef local_24
#undef local_20

#undef LAB_10004e40
#define LAB_10004e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
#undef _LAB_10004e40
#define _LAB_10004e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x359cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3568U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004e0c(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*(uint *)(uintptr_t)_LAB_10004e40;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    recovered_10004880();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  recovered_10004d8c(puVar1);
}

#undef LAB_10004e40
#undef _LAB_10004e40

#undef DAT_10004e58
#define DAT_10004e58 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a0U)
 */

void recovered_10004e44(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10004e58;
  *param_1 = *DAT_10004e58;
  *puVar1 = param_1;
  return;
}

#undef DAT_10004e58

#undef DAT_10004e88
#define DAT_10004e88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x35e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35b8U)
 */

void recovered_10004e5c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10004e88;
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

#undef DAT_10004e88

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35e8U)
 */

void recovered_10004e8c(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10004d8c(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35f4U)
 */

void recovered_10004e98(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004880();
}


#undef DAT_10004ec4
#define DAT_10004ec4 (*(int * *)(((uintptr_t)pf_module_state + 0x3620U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3600U)
 */

void recovered_10004ea4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*DAT_10004ec4 != (int *)0x0) {
    *DAT_10004ec4 = *(int *)*DAT_10004ec4;
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004ec8(param_1);
}

#undef DAT_10004ec4

#undef DAT_10004f70
#define DAT_10004f70 (*(int * *)(((uintptr_t)pf_module_state + 0x36ccU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3624U)
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3680U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x36b0U)) */

void recovered_10004ec8(undefined4 *param_1)

{
  unsigned char frame[344] = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = DAT_10004f70;
  piVar4 = (int *)*DAT_10004f70;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004880();
    }
    if (piVar4 == (int *)param_1[3]) break;
    recovered_10005334((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  recovered_10004838((int)piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

#undef DAT_10004f70
#undef auStack_128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36d0U)
 */

void recovered_10004f74(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_r0;

                    /* WARNING: Subroutine does not return */
  recovered_10004ea4(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36dcU)
 */

undefined4 recovered_10004f80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36e4U)
 */

void recovered_10004f88(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004880();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f0U)
 */

int recovered_10004f94(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = recovered_10004fd4(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}


#undef DAT_10005078
#define DAT_10005078 (*(int *)(((uintptr_t)pf_module_state + 0x37d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3730U)
 */

bool recovered_10004fd4(int *param_1,int *param_2)

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
    if (*piVar3 == DAT_10005078 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10005078

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d8U)
 */

void recovered_1000507c(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37dcU)
 */

undefined4 recovered_10005080(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37e4U)
 */

bool recovered_10005088(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

bool recovered_1000509c(int param_1)

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

bool recovered_100050d8(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3860U)
 */

bool recovered_10005104(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x387cU)
 */

bool recovered_10005120(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3898U)
 */

bool recovered_1000513c(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38b4U)
 */

bool recovered_10005158(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x38d0U)
 */

double recovered_10005174(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10002950(value);
  return dVar1;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3928U)
 */

ulonglong recovered_100051cc(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10005218;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10005218:
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

ulonglong recovered_10005330(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10005218;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10005218:
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

#undef DAT_1000554c
#define DAT_1000554c (*(int *)(((uintptr_t)pf_module_state + 0x3ca8U)))
#define local_24 (*(byte * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a90U)
 */

undefined4 recovered_10005334(int param_1,int *param_2,undefined2 *param_3)

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
      recovered_10005550((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = recovered_1000567c(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = recovered_1000567c(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = recovered_1000567c(&local_24);
        uVar6 = recovered_1000567c(&local_24);
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
            uVar6 = recovered_100056dc((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
            uVar7 = recovered_100056dc((undefined4 *)((int)(uintptr_t)(frame + 52) + -0x28));
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
                local_24 = pbVar8 + *(int *)(DAT_1000554c + uVar5 * 4) * uVar6;
                puVar9 = recovered_10005550(uVar4,(int *)&local_24);
              }
              bVar3 = recovered_10004fd4(param_2,(int *)puVar9);
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

#undef DAT_1000554c
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3cacU)
 */

uint * recovered_10005550(uint param_1,int *param_2)

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
    recovered_100056b4(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_10005638;
  case 1:
    puVar2 = (uint *)recovered_1000567c(param_2);
    break;
  case 2:
    recovered_100056b4(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_10005638;
  case 4:
  case 0xc:
    recovered_100056b4(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_10005638:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_10005584_caseD_5;
  case 9:
    puVar2 = (uint *)recovered_100056dc(param_2);
    break;
  case 10:
    recovered_100056b4(iVar3,2);
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
switchD_10005584_caseD_5:
  return puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd8U)
 */

uint recovered_1000567c(undefined4 *param_1)

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

void recovered_100056b4(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e38U)
 */

uint recovered_100056dc(undefined4 *param_1)

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


#undef DAT_10005884
#define DAT_10005884 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3fe0U)))
#undef DAT_10005888
#define DAT_10005888 (*(int *)(((uintptr_t)pf_module_state + 0x3fe4U)))
#undef DAT_1000588c
#define DAT_1000588c (*(int *)(((uintptr_t)pf_module_state + 0x3fe8U)))
#undef DAT_10005890
#define DAT_10005890 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x3fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e88U)
 */

int * recovered_1000572c(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *data;
  uint uVar5;

  piVar2 = recovered_10004948(0xb8);
  piVar2[0xd] = 0;
  iVar4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  iVar3 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  iVar1 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined1 *)((int)piVar2 + 0x32) = 0;
  *(undefined2 *)(piVar2 + 0xc) = 0;
  piVar2[0xb] = 0;
  piVar2[10] = 0;
  *(undefined1 *)(piVar2 + 9) = 0xf6;
  piVar2[1] = 0;
  piVar2[2] = iVar4;
  piVar2[3] = iVar3;
  piVar2[4] = iVar1;
  piVar2[8] = -0x90a0000;
  piVar2[0xe] = 0;
  piVar2[0xf] = iVar4;
  piVar2[0x10] = iVar3;
  piVar2[0x11] = iVar1;
  piVar2[0x12] = 0;
  piVar2[0x13] = iVar4;
  piVar2[0x14] = iVar3;
  piVar2[0x15] = iVar1;
  piVar2[0x16] = 0;
  piVar2[0x17] = iVar4;
  piVar2[0x18] = iVar3;
  piVar2[0x19] = iVar1;
  piVar2[0x1a] = 0;
  piVar2[0x1b] = iVar4;
  piVar2[0x1c] = iVar3;
  piVar2[0x1d] = iVar1;
  piVar2[0x1e] = 0;
  piVar2[0x1f] = iVar4;
  piVar2[0x20] = iVar3;
  piVar2[0x21] = iVar1;
  piVar2[0x22] = 0;
  piVar2[0x23] = iVar4;
  piVar2[0x24] = iVar3;
  piVar2[0x25] = iVar1;
  piVar2[0x26] = 0;
  piVar2[0x27] = iVar4;
  piVar2[0x28] = iVar3;
  piVar2[0x29] = iVar1;
  piVar2[0x2a] = 0;
  piVar2[0x2b] = iVar4;
  piVar2[0x2c] = iVar3;
  piVar2[0x2d] = iVar1;
  piVar2[7] = 0;
  piVar2[6] = 0;
  *piVar2 = 0;
  piVar2[5] = 0;
  iVar4 = DAT_10005888;
  if (param_1 != 0) {
    iVar4 = param_1;
  }
  recovered_10005894(piVar2,iVar4);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  uVar5 = 1;
  if (1 < (int)param_2) {
    uVar5 = param_2;
  }
  piVar2[0xb] = param_3 >> 1;
  piVar2[10] = uVar5 >> 1;
  piVar2[5] = param_3;
  piVar2[4] = uVar5;
  iVar4 = DAT_1000588c;
  if (*piVar2 != 0) {
    iVar4 = *piVar2;
  }
  iVar3 = recovered_10007590(0xa0);
  if ((iVar3 == 0) || ((code *)*DAT_10005884 == (code *)0x0)) {
    piVar2[3] = 0;
  }
  else {
    iVar4 = (*(code *)*DAT_10005884)(iVar4,uVar5,param_3);
    piVar2[3] = iVar4;
    if (iVar4 != 0) {
      *DAT_10005890 = piVar2;
      recovered_100058e4(piVar2);
      recovered_10005d14((int)piVar2);
      return piVar2;
    }
  }
  recovered_100058c4(piVar2);
  recovered_10004978(data);
  return (int *)0x0;
}

#undef DAT_10005884
#undef DAT_10005888
#undef DAT_1000588c
#undef DAT_10005890

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ff0U)
 */

int * recovered_10005894(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  uVar1 = recovered_10007424(param_2);
  recovered_10007328(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4020U)
 */

void recovered_100058c4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100075e0(param_1 + 0xd);
  recovered_1000730c(param_1);
  return;
}


#undef DAT_10005d00
#define DAT_10005d00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x445cU)))
#undef DAT_10005d04
#define DAT_10005d04 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4460U)))
#undef DAT_10005d08
#define DAT_10005d08 (*(int *)(((uintptr_t)pf_module_state + 0x4464U)))
#undef DAT_10005d0c
#define DAT_10005d0c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4468U)))
#undef DAT_10005d10
#define DAT_10005d10 (*(int *)(((uintptr_t)pf_module_state + 0x446cU)))
#define local_e0 (*(int *)(frame + 16))
#define local_dc (*(int *)(frame + 20))
#define local_d8 (*(uint *)(frame + 24))
#define local_c8 (*(int *)(frame + 40))
#define local_c4 (*(int *)(frame + 44))
#define local_c0 (*(int *)(frame + 48))
#define local_bc (*(uint *)(frame + 52))
#define local_b8 (*(uint *)(frame + 56))
#define local_b4 (*(uint *)(frame + 60))
#define local_b0 (*(int *)(frame + 64))
#define local_ac (*(uint *)(frame + 68))
#define local_a8 (*(void * *)(frame + 72))
#define local_a4 (*(int * *)(frame + 76))
#define local_a0 (*(void * *)(frame + 80))
#define local_9c (*(undefined4 *)(frame + 84))
#define local_98 (*(undefined4 *)(frame + 88))
#define local_90 (*(undefined4 *)(frame + 96))
#define local_7c (*(undefined4 *)(frame + 116))
#define local_78 (*(undefined4 *)(frame + 120))
#define local_74 (*(undefined1 * *)(frame + 124))
#define local_70 (*(int *)(frame + 128))
#define local_6c (*(undefined1 * *)(frame + 132))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4040U)
 */

void recovered_100058e4(int *param_1)

{
  unsigned char frame[272] = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_r8;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_e0;
  local_7c = *DAT_10005d0c;
  local_78 = DAT_10005d00;
  local_70 = DAT_10005d08 + ((uintptr_t)pf_module_state+0x408cU);
  recovered_10004e44(&uStack_94);
  if (param_1 != (int *)0x0) {
    unaff_r8 = param_1[3];
  }
  if (param_1 != (int *)0x0 && unaff_r8 != 0) {
    iVar7 = param_1[5];
    iVar4 = param_1[4];
    local_98 = 0;
    local_9c = 0;
    local_c8 = 1;
    if (1 < iVar7) {
      local_c8 = iVar7;
    }
    local_a0 = (void *)0x0;
    local_c4 = 1;
    if (1 < iVar4) {
      local_c4 = iVar4;
    }
    local_a4 = param_1;
    if ((param_1[0xe] == 0) || (param_1[0x10] < 1)) {
      local_c0 = 0;
    }
    else {
      local_c0 = 0;
      if (0 < param_1[0x11]) {
        local_90 = 1;
        local_a8 = (void *)(iVar4 * iVar7 * 4);
        recovered_10007604((int *)&local_a0,(uint)local_a8);
        param_1 = local_a4;
        for (uVar5 = 0; uVar5 < local_a8; uVar5 = uVar5 + 4) {
          *(undefined1 *)((int)local_a0 + uVar5) = *(undefined1 *)((int)local_a4 + 0x22);
          *(undefined1 *)((int)local_a0 + uVar5 + 1) = *(undefined1 *)((int)local_a4 + 0x23);
          *(char *)((int)local_a0 + uVar5 + 2) = (char)local_a4[9];
          *(undefined1 *)((int)local_a0 + uVar5 + 3) = 0xff;
        }
        uVar13 = local_a4[4];
        uVar12 = local_a4[0x11];
        uVar5 = local_a4[0x10];
        uVar14 = local_a4[5];
        uVar16 = recovered_10002258((uint)((longlong)(int)uVar12 * (longlong)(int)uVar13),
                                    (uint)((ulonglong)
                                           ((longlong)(int)uVar12 * (longlong)(int)uVar13) >> 0x20),
                                    uVar5,(int)uVar5 >> 0x1f);
        local_bc = (uint)uVar16;
        if ((int)local_bc < 2) {
          local_bc = 1;
        }
        uVar8 = uVar13;
        if ((int)uVar14 < (int)local_bc) {
          uVar16 = recovered_10002258((uint)((longlong)(int)uVar14 * (longlong)(int)uVar5),
                                      (uint)((ulonglong)
                                             ((longlong)(int)uVar14 * (longlong)(int)uVar5) >> 0x20)
                                      ,uVar12,(int)uVar12 >> 0x1f);
          uVar8 = 1;
          if (1 < (int)(uint)uVar16) {
            uVar8 = (uint)uVar16;
          }
          local_bc = uVar14;
        }
        local_a8 = (void *)((int)(uVar14 - local_bc) / 2);
        local_b0 = (int)(uVar13 - uVar8) / 2;
        local_b8 = local_bc & ~((int)local_bc >> 0x1f);
        local_ac = uVar8 & ~((int)uVar8 >> 0x1f);
        uVar5 = 0;
        while (uVar5 != local_b8) {
          iVar4 = param_1[0x11];
          local_b4 = uVar5;
          iVar7 = recovered_10001948(iVar4 * uVar5,local_bc);
          iVar4 = iVar4 + -1;
          uVar5 = 0;
          if (iVar7 <= iVar4) {
            iVar4 = iVar7;
          }
          if (iVar7 < 0) {
            iVar4 = 0;
          }
          while (local_ac != uVar5) {
            iVar15 = local_a4[4];
            iVar10 = local_a4[0xd];
            iVar11 = local_a4[0x10];
            iVar6 = recovered_10001948(iVar11 * uVar5,uVar8);
            iVar7 = iVar11 + -1;
            if (iVar6 <= iVar11 + -1) {
              iVar7 = iVar6;
            }
            iVar7 = iVar11 * iVar4 + iVar7;
            iVar9 = local_b0 + uVar5;
            uVar5 = uVar5 + 1;
            if (iVar6 < 0) {
              iVar7 = iVar11 * iVar4;
            }
            iVar9 = (int)local_a8 * iVar15 + iVar9;
            *(undefined1 *)((int)local_a0 + iVar9 * 4) = *(undefined1 *)(iVar10 + iVar7 * 4);
            *(undefined1 *)((int)local_a0 + iVar9 * 4 + 1) =
                 *(undefined1 *)(local_a4[0xd] + iVar7 * 4 + 1);
            *(undefined1 *)((int)local_a0 + iVar9 * 4 + 2) =
                 *(undefined1 *)(local_a4[0xd] + iVar7 * 4 + 2);
            *(undefined1 *)((int)local_a0 + iVar9 * 4 + 3) =
                 *(undefined1 *)(local_a4[0xd] + iVar7 * 4 + 3);
            param_1 = local_a4;
          }
          local_a8 = (void *)((int)local_a8 + 1);
          uVar5 = local_b4 + 1;
        }
        unaff_r8 = param_1[3];
      }
    }
    iVar4 = DAT_10005d10;
    if (*param_1 != 0) {
      iVar4 = *param_1;
    }
    bVar1 = *(byte *)((int)param_1 + 0x22);
    bVar2 = *(byte *)((int)param_1 + 0x23);
    bVar3 = *(byte *)(param_1 + 9);
    local_a8 = local_a0;
    iVar7 = recovered_10007590(0xa4);
    if ((iVar7 != 0) && ((code *)*DAT_10005d04 != (code *)0x0)) {
      local_d8 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
      local_90 = 2;
      local_dc = local_c4 << 2;
      local_e0 = local_c8;
      local_c0 = (*(code *)*DAT_10005d04)(unaff_r8,iVar4,local_a8);
    }
    *(bool *)((int)local_a4 + 0x21) = local_c0 != 0;
    local_9c = 0;
    recovered_10004978(local_a0);
  }
  recovered_10004e5c(&uStack_94);
  return;
}

#undef DAT_10005d00
#undef DAT_10005d04
#undef DAT_10005d08
#undef DAT_10005d0c
#undef DAT_10005d10
#undef local_e0
#undef local_dc
#undef local_d8
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
#undef uStack_94
#undef auStack_68

#undef DAT_10005d98
#define DAT_10005d98 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x44f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4470U)
 */

undefined4 recovered_10005d14(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int unaff_r4;
  undefined4 uVar2;
  int unaff_r6;

  uVar2 = 0;
  if (param_1 != 0) {
    unaff_r6 = *(int *)(param_1 + 0xc);
    unaff_r4 = param_1;
  }
  if (param_1 != 0 && unaff_r6 != 0) {
    iVar1 = recovered_10007590(0xb4);
    if (((iVar1 != 0) && ((code *)*DAT_10005d98 != (code *)0x0)) &&
       (iVar1 = (*(code *)*DAT_10005d98)(unaff_r6,unaff_r4 + 0x48), iVar1 != 0)) {
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

#undef DAT_10005d98

#undef DAT_10005e18
#define DAT_10005e18 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4574U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x44f8U)
 */

void recovered_10005d9c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      iVar1 = recovered_10007590(0xb0);
      if ((iVar1 != 0) && ((code *)*DAT_10005e18 != (code *)0x0)) {
        (*(code *)*DAT_10005e18)(iVar2,uVar4,uVar3,1,1);
      }
    }
  }
  return;
}

#undef DAT_10005e18

#undef DAT_10005e88
#define DAT_10005e88 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x45e4U)))
#undef DAT_10005e8c
#define DAT_10005e8c (*(int * *)(((uintptr_t)pf_module_state + 0x45e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4578U)
 */

void recovered_10005e1c(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  void *data;
  int iVar2;

  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (*DAT_10005e8c == param_1) {
    *DAT_10005e8c = 0;
  }
  if (((iVar2 != 0) && (iVar1 = recovered_10007590(0xa8), iVar1 != 0)) &&
     ((code *)*DAT_10005e88 != (code *)0x0)) {
    (*(code *)*DAT_10005e88)(iVar2);
  }
  recovered_100058c4((undefined4 *)param_1);
  recovered_10004978(data);
  return;
}

#undef DAT_10005e88
#undef DAT_10005e8c

#undef DAT_10005fcc
#define DAT_10005fcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4728U)))
#undef DAT_10005fd0
#define DAT_10005fd0 (*(int *)(((uintptr_t)pf_module_state + 0x472cU)))
#undef DAT_10005fd4
#define DAT_10005fd4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4730U)))
#undef DAT_10005fd8
#define DAT_10005fd8 (*(void * *)(((uintptr_t)pf_module_state + 0x4734U)))
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
 * Address: ((uintptr_t)pf_module_state+0x45ecU)
 */

void * recovered_10005e90(int *param_1)

{
  unsigned char frame[224] = {0};

  ulong size;
  void *pvVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_7c = *DAT_10005fd4;
  local_78 = DAT_10005fcc;
  local_70 = DAT_10005fd0 + ((uintptr_t)pf_module_state+0x4638U);
  recovered_10004e44(&uStack_94);
  if (param_1 == (int *)0x0) {
    local_98 = 0;
    local_9c = 0;
    local_a0 = (void *)0x0;
    size = 1;
  }
  else {
    local_90 = 0xffffffff;
    recovered_100076d0(&local_a0,param_1);
    size = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10004974(size);
  local_90 = 2;
  pvVar1 = DAT_10005fd8;
  if (local_a0 != (void *)0x0) {
    pvVar1 = local_a0;
  }
  recovered_10002438(local_a4,pvVar1,local_9c + 1);
  pvVar1 = local_a4;
  recovered_10004978(local_a0);
  recovered_10004e5c(&uStack_94);
  return pvVar1;
}

#undef DAT_10005fcc
#undef DAT_10005fd0
#undef DAT_10005fd4
#undef DAT_10005fd8
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
 * Address: ((uintptr_t)pf_module_state+0x4738U)
 */

void recovered_10005fdc(int param_1,undefined4 *param_2,undefined4 *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x476cU)
 */

void recovered_10006010(int param_1,int param_2,int param_3)

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
  recovered_10006054(param_1);
  recovered_100058e4((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47b0U)
 */

void recovered_10006054(int param_1)

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


#undef DAT_100060e0
#define DAT_100060e0 (*(int *)(((uintptr_t)pf_module_state + 0x483cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4808U)
 */

void recovered_100060ac(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return;
  }
  iVar1 = DAT_100060e0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  recovered_10005894((int *)param_1,iVar1);
  recovered_100058e4((int *)param_1);
  return;
}

#undef DAT_100060e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4840U)
 */

void recovered_100060e4(int param_1,int *param_2,int param_3)

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
      recovered_10006150((int *)(param_1 + 0x34),puVar2,puVar2 + iVar1 * param_3 * 4);
      iVar3 = param_2[1];
      *(int *)(param_1 + 0x40) = *param_2;
      *(int *)(param_1 + 0x44) = iVar3;
      recovered_100058e4((int *)param_1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48acU)
 */

void recovered_10006150(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007c48(param_1,*param_1,param_2,param_3);
  return;
}


#undef DAT_100063b8
#define DAT_100063b8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b14U)))
#define iStack_34 (*(int *)(frame + 84))
#define pcStack_30 (*(code * *)(frame + 88))
#define local_78 (*(uint *)(frame + 16))
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
 * Address: ((uintptr_t)pf_module_state+0x48c4U)
 */

void recovered_10006168(int param_1)

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
  uint extraout_r2 = 0;
  code *pcVar7;
  int extraout_r3 = 0;
  int extraout_r3_00 = 0;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;

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
  recovered_10005d14(param_1);
  iVar2 = recovered_10007590(0x80);
  puVar1 = DAT_100063b8;
  pcVar6 = extraout_r1;
  if (iVar2 != 0) {
    pcVar6 = (code *)DAT_100063b8[1];
  }
  if ((iVar2 == 0 || pcVar6 == (code *)0x0) || (iVar2 = (*pcVar6)(&local_78), iVar2 == 0))
  goto LAB_100061bc;
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
  iVar3 = recovered_10007590(0x7c);
  pcVar6 = extraout_r1_00;
  if (iVar3 != 0) {
    pcVar6 = (code *)*puVar1;
  }
  iVar8 = extraout_r3;
  if (iVar3 == 0 || pcVar6 == (code *)0x0) {
LAB_100062b8:
    bVar11 = true;
    pcVar7 = (code *)0x0;
  }
  else {
    uVar12 = (*pcVar6)(&local_58);
    iVar8 = extraout_r3_00;
    if ((int)uVar12 != 0) {
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
              goto LAB_100062bc;
            }
          }
        }
      }
      goto LAB_100062b8;
    }
    bVar11 = true;
    pcVar6 = (code *)((ulonglong)uVar12 >> 0x20);
    pcVar7 = (code *)0x0;
  }
LAB_100062bc:
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
LAB_10006340:
    *(code **)(param_1 + 0x2c) = pcVar6;
  }
  else if (!bVar11 && (~local_78 & 1) == 0) {
    uVar4 = recovered_10007718(local_70,local_60,(int)pcVar7);
    uVar5 = recovered_10007718(local_6c,local_5c,iVar2);
    pcVar6 = (code *)((uVar5 - iVar9) + -0x26);
    *(uint *)(param_1 + 0x28) = (uVar4 - iVar3) + -0xe;
    goto LAB_10006340;
  }
  bVar11 = (*(uint *)(param_1 + 0x6c) & 6) == 2;
  *(byte *)(param_1 + 0x32) = bVar11 & (byte)(((uint)pcStack_74 & 4) >> 2);
  *(byte *)(param_1 + 0x30) = bVar11 & (byte)pcStack_74;
  *(byte *)(param_1 + 0x31) = bVar11 & (byte)(((uint)pcStack_74 & 2) >> 1);
  recovered_10006054(param_1);
LAB_100061bc:
  recovered_100063bc();
  if (*(char *)(param_1 + 0x21) == '\0') {
    recovered_100058e4((int *)param_1);
  }
  iVar2 = recovered_10007590(0x9c);
  pcVar6 = (code *)0x0;
  if (iVar2 != 0) {
    pcVar6 = (code *)puVar1[8];
  }
  if (iVar2 != 0 && pcVar6 != (code *)0x0) {
    (*pcVar6)();
  }
  return;
}

#undef DAT_100063b8
#undef iStack_34
#undef pcStack_30
#undef local_78
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

#undef DAT_10006710
#define DAT_10006710 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4e6cU)))
#undef DAT_10006714
#define DAT_10006714 (*(int * *)(((uintptr_t)pf_module_state + 0x4e70U)))
#undef DAT_10006718
#define DAT_10006718 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e74U)))
#undef DAT_1000671c
#define DAT_1000671c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e78U)))
#undef DAT_10006720
#define DAT_10006720 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e7cU)))
#undef DAT_10006724
#define DAT_10006724 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e80U)))
#undef DAT_10006728
#define DAT_10006728 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e84U)))
#undef DAT_1000672c
#define DAT_1000672c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e88U)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e8cU)))
#undef DAT_10006734
#define DAT_10006734 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e90U)))
#undef DAT_10006738
#define DAT_10006738 (*(int *)(((uintptr_t)pf_module_state + 0x4e94U)))
#undef DAT_1000673c
#define DAT_1000673c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e98U)))
#undef DAT_10006740
#define DAT_10006740 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4e9cU)))
#undef DAT_10006744
#define DAT_10006744 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4ea0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b18U)
 */

void recovered_100063bc(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;

  recovered_100068cc();
  piVar2 = DAT_10006714;
  iVar16 = *DAT_10006714;
  if (((iVar16 == 0) ||
      (iVar10 = recovered_10005d14(iVar16), puVar9 = DAT_10006730, puVar8 = DAT_1000672c,
      puVar7 = DAT_10006728, puVar6 = DAT_10006724, puVar5 = DAT_10006720, puVar4 = DAT_1000671c,
      puVar3 = DAT_10006718, puVar1 = DAT_10006710, iVar10 == 0)) ||
     ((*(uint *)(iVar16 + 0x6c) & 6) != 2)) {
    return;
  }
switchD_10006650_caseD_49:
  do {
    do {
      iVar16 = recovered_10007590(0x2c);
      pcVar14 = (code *)0x0;
      if (iVar16 != 0) {
        pcVar14 = (code *)*puVar1;
      }
      if (iVar16 == 0 || pcVar14 == (code *)0x0) {
        return;
      }
      uVar11 = (*pcVar14)();
      if (uVar11 == 0) {
        return;
      }
      iVar16 = *piVar2;
      uVar13 = uVar11 >> 8;
      if ((uVar11 & 0xff) == 0) goto LAB_1000648c;
    } while (iVar16 == 0);
    if (piVar2[1] != 2) {
      if (piVar2[1] == 1) {
        piVar2[1] = (uint)((uVar11 & 0xff) == 0x5b) << 1;
        goto switchD_100065b0_caseD_5;
      }
      uVar15 = uVar11 & 0xff;
      if (uVar15 == 0x1b) {
        piVar2[1] = 1;
        goto switchD_100065b0_caseD_5;
      }
      if ((uVar11 - 0x20 & 0xff) < 0x5f) {
        *DAT_10006734 = (char)uVar11;
        if (0x19 < (uVar11 - 0x61 & 0xff)) {
          if (0x19 < (uVar11 - 0x41 & 0xff)) {
            if ((uVar11 - 0x30 & 0xff) < 10) {
              puVar12 = *(undefined1 **)(DAT_10006738 + (uVar11 + 0xd0 & 0xff) * 4);
              goto LAB_1000662c;
            }
            goto LAB_1000659c;
          }
          uVar11 = uVar11 | 0x20;
        }
        recovered_1000777c((int)(char)uVar11);
        goto switchD_100065b0_caseD_5;
      }
LAB_1000659c:
      switch((uintptr_t)(uVar11 & 0xff)) {
      case 3:
      case 4:
        *(undefined1 *)(iVar16 + 0x20) = 1;
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xb:
      case 0xc:
        goto switchD_100065b0_caseD_5;
      case 8:
switchD_100065b0_caseD_8:
        puVar12 = puVar7;
        break;
      case 10:
      case 0xd:
        puVar12 = puVar8;
        break;
      default:
        if (uVar15 == 0x20) {
          puVar12 = DAT_1000673c;
        }
        else if (uVar15 == 0x2d) {
          puVar12 = DAT_10006740;
        }
        else {
          if (uVar15 != 0x2e) {
            if (uVar15 == 0x7f) goto switchD_100065b0_caseD_8;
            goto switchD_100065b0_caseD_5;
          }
          puVar12 = DAT_10006744;
        }
      }
      goto LAB_1000662c;
    }
    piVar2[1] = 0;
    switch((uintptr_t)(uVar11 & 0xff)) {
    case 0x41:
      puVar12 = puVar3;
      goto LAB_1000662c;
    case 0x42:
      puVar12 = puVar4;
LAB_1000662c:
      *puVar12 = 1;
      break;
    case 0x43:
      *puVar5 = 1;
      break;
    case 0x44:
      *puVar6 = 1;
    }
switchD_100065b0_caseD_5:
    iVar16 = *piVar2;
  } while (iVar16 == 0);
  goto LAB_1000663c;
LAB_1000648c:
  if (iVar16 == 0) goto switchD_10006650_caseD_49;
  switch((uintptr_t)(uVar13 & 0xff)) {
  case 1:
switchD_10006650_caseD_48:
    *puVar3 = 1;
    goto switchD_10006650_caseD_49;
  case 2:
switchD_10006650_caseD_50:
    *puVar4 = 1;
    goto switchD_10006650_caseD_49;
  case 3:
switchD_10006650_caseD_4d:
    *puVar5 = 1;
    goto switchD_10006650_caseD_49;
  case 4:
switchD_10006650_caseD_4b:
    *puVar6 = 1;
    goto switchD_10006650_caseD_49;
  }
  if ((uVar13 & 0xff) != 0x17) {
LAB_1000663c:
    switch((uintptr_t)(uVar13 & 0xff)) {
    case 0x48:
      goto switchD_10006650_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_10006650_caseD_49;
    case 0x4b:
      goto switchD_10006650_caseD_4b;
    case 0x4d:
      goto switchD_10006650_caseD_4d;
    case 0x50:
      goto switchD_10006650_caseD_50;
    case 0x53:
      *puVar9 = 1;
      goto switchD_10006650_caseD_49;
    default:
      uVar13 = uVar13 & 0xff;
      if (uVar13 != 1) {
        if (uVar13 == 0xe) {
          *puVar7 = 1;
        }
        else if (uVar13 == 0x1c) {
          *puVar8 = 1;
        }
        goto switchD_10006650_caseD_49;
      }
    }
  }
  *(undefined1 *)(iVar16 + 0x20) = 1;
  goto switchD_10006650_caseD_49;
}

#undef DAT_10006710
#undef DAT_10006714
#undef DAT_10006718
#undef DAT_1000671c
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ea4U)
 */

byte recovered_10006748(int param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    recovered_10005d14(param_1);
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  return bVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ed4U)
 */

void recovered_10006778(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 0x23) = param_3;
  *(undefined1 *)(param_1 + 0x22) = param_2;
  recovered_100058e4((int *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4eecU)
 */

int * recovered_10006790(int param_1)

{
  unsigned char frame[64] = {0};

  uint size;
  undefined2 uVar1;
  int *piVar2;
  void *out;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;

  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar2 = recovered_10004948(0x18);
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
  out = recovered_10004974(size);
  iVar3 = *(int *)(param_1 + 0x38);
  piVar2[2] = (int)out;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    bVar8 = iVar3 == iVar7;
    if (bVar8) {
      iVar3 = *(int *)(param_1 + 0x44);
    }
    if (bVar8 && iVar3 == iVar5) {
      recovered_10002438(out,*(void **)(param_1 + 0x34),size);
      goto LAB_1000684c;
    }
  }
  for (uVar4 = 0; uVar4 < size; uVar4 = uVar4 + 4) {
    puVar6 = (undefined1 *)((int)out + uVar4);
    *puVar6 = *(undefined1 *)(param_1 + 0x22);
    uVar1 = *(undefined2 *)(param_1 + 0x23);
    puVar6[3] = 0xff;
    *(undefined2 *)(puVar6 + 1) = uVar1;
  }
LAB_1000684c:
  piVar2[5] = 0;
  piVar2[4] = 0;
  piVar2[3] = 0;
  return piVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fc4U)
 */

void recovered_10006868(int param_1,undefined4 *param_2,undefined4 *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x5008U)
 */

byte recovered_100068ac(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + param_2 + 0x30);
  }
  return bVar1 & 1;
}


#undef DAT_10006a4c
#define DAT_10006a4c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a8U)))
#undef DAT_10006a50
#define DAT_10006a50 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10006a54
#define DAT_10006a54 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b0U)))
#undef DAT_10006a58
#define DAT_10006a58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_10006a5c
#define DAT_10006a5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b8U)))
#undef DAT_10006a60
#define DAT_10006a60 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51bcU)))
#undef DAT_10006a64
#define DAT_10006a64 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c0U)))
#undef DAT_10006a68
#define DAT_10006a68 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c4U)))
#undef DAT_10006a6c
#define DAT_10006a6c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c8U)))
#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_10006a74
#define DAT_10006a74 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d0U)))
#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d4U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d8U)))
#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef DAT_10006a84
#define DAT_10006a84 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e0U)))
#undef DAT_10006a88
#define DAT_10006a88 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e4U)))
#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ecU)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f0U)))
#undef DAT_10006a98
#define DAT_10006a98 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f4U)))
#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51fcU)))
#undef DAT_10006aa4
#define DAT_10006aa4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5200U)))
#undef DAT_10006aa8
#define DAT_10006aa8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5204U)))
#undef DAT_10006aac
#define DAT_10006aac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5208U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_10006ab4
#define DAT_10006ab4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5210U)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5214U)))
#undef DAT_10006abc
#define DAT_10006abc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5218U)))
#undef DAT_10006ac0
#define DAT_10006ac0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x521cU)))
#undef DAT_10006ac4
#define DAT_10006ac4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5220U)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006acc
#define DAT_10006acc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006ad4
#define DAT_10006ad4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006ad8
#define DAT_10006ad8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006adc
#define DAT_10006adc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006ae4
#define DAT_10006ae4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006ae8
#define DAT_10006ae8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006aec
#define DAT_10006aec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006af0
#define DAT_10006af0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006af4
#define DAT_10006af4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006af8
#define DAT_10006af8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006afc
#define DAT_10006afc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
#undef DAT_10006b00
#define DAT_10006b00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x525cU)))
#undef DAT_10006b04
#define DAT_10006b04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5260U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5028U)
 */

void recovered_100068cc(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006a4c = 0;
  *DAT_10006a50 = 0;
  *DAT_10006a54 = 0;
  *DAT_10006a58 = 0;
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
  return;
}

#undef DAT_10006a4c
#undef DAT_10006a50
#undef DAT_10006a54
#undef DAT_10006a58
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

#undef DAT_10006a4c
#define DAT_10006a4c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51a8U)))
#undef DAT_10006a50
#define DAT_10006a50 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51acU)))
#undef DAT_10006a54
#define DAT_10006a54 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b0U)))
#undef DAT_10006a58
#define DAT_10006a58 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b4U)))
#undef DAT_10006a5c
#define DAT_10006a5c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51b8U)))
#undef DAT_10006a60
#define DAT_10006a60 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51bcU)))
#undef DAT_10006a64
#define DAT_10006a64 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c0U)))
#undef DAT_10006a68
#define DAT_10006a68 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c4U)))
#undef DAT_10006a6c
#define DAT_10006a6c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51c8U)))
#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ccU)))
#undef DAT_10006a74
#define DAT_10006a74 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d0U)))
#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d4U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51d8U)))
#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51dcU)))
#undef DAT_10006a84
#define DAT_10006a84 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e0U)))
#undef DAT_10006a88
#define DAT_10006a88 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e4U)))
#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51ecU)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f0U)))
#undef DAT_10006a98
#define DAT_10006a98 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f4U)))
#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x51fcU)))
#undef DAT_10006aa4
#define DAT_10006aa4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5200U)))
#undef DAT_10006aa8
#define DAT_10006aa8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5204U)))
#undef DAT_10006aac
#define DAT_10006aac (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5208U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x520cU)))
#undef DAT_10006ab4
#define DAT_10006ab4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5210U)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5214U)))
#undef DAT_10006abc
#define DAT_10006abc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5218U)))
#undef DAT_10006ac0
#define DAT_10006ac0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x521cU)))
#undef DAT_10006ac4
#define DAT_10006ac4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5220U)))
#undef DAT_10006ac8
#define DAT_10006ac8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef DAT_10006acc
#define DAT_10006acc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5228U)))
#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef DAT_10006ad4
#define DAT_10006ad4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5230U)))
#undef DAT_10006ad8
#define DAT_10006ad8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5234U)))
#undef DAT_10006adc
#define DAT_10006adc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5238U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x523cU)))
#undef DAT_10006ae4
#define DAT_10006ae4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5240U)))
#undef DAT_10006ae8
#define DAT_10006ae8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5244U)))
#undef DAT_10006aec
#define DAT_10006aec (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5248U)))
#undef DAT_10006af0
#define DAT_10006af0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x524cU)))
#undef DAT_10006af4
#define DAT_10006af4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5250U)))
#undef DAT_10006af8
#define DAT_10006af8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5254U)))
#undef DAT_10006afc
#define DAT_10006afc (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5258U)))
#undef DAT_10006b00
#define DAT_10006b00 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x525cU)))
#undef DAT_10006b04
#define DAT_10006b04 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5260U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5264U)
 */

void recovered_10006b08(void)

{
  unsigned char frame[64] = {0};

  *DAT_10006a4c = 0;
  *DAT_10006a50 = 0;
  *DAT_10006a54 = 0;
  *DAT_10006a58 = 0;
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
  return;
}

#undef DAT_10006a4c
#undef DAT_10006a50
#undef DAT_10006a54
#undef DAT_10006a58
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5268U)
 */

void recovered_10006b0c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x526cU)
 */

void recovered_10006b10(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5270U)
 */

undefined4 recovered_10006b14(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5278U)
 */

void recovered_10006b1c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x527cU)
 */

undefined4 recovered_10006b20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000700c
#define DAT_1000700c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5768U)))
#undef DAT_10007010
#define DAT_10007010 (*(int *)(((uintptr_t)pf_module_state + 0x576cU)))
#undef DAT_10007014
#define DAT_10007014 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5770U)))
#undef DAT_10007018
#define DAT_10007018 (*(char * *)(((uintptr_t)pf_module_state + 0x5774U)))
#undef DAT_1000701c
#define DAT_1000701c (*(char * *)(((uintptr_t)pf_module_state + 0x5778U)))
#undef DAT_10007020
#define DAT_10007020 (*(char * *)(((uintptr_t)pf_module_state + 0x577cU)))
#undef DAT_10007024
#define DAT_10007024 (*(char * *)(((uintptr_t)pf_module_state + 0x5780U)))
#define auStack_110 (*(undefined1 (*)[12])(frame + 16))
#define local_104 (*(int * *)(frame + 28))
#define local_100 (*(int * *)(frame + 32))
#define local_fc (*(char * *)(frame + 36))
#define local_f8 (*(char * *)(frame + 40))
#define iStack_c4 (*(int *)(frame + 92))
#define local_f4 (*(char * *)(frame + 44))
#define local_f0 (*(char * *)(frame + 48))
#define local_ec (*(uint *)(frame + 52))
#define local_e8 (*(char * *)(frame + 56))
#define local_e4 (*(void * *)(frame + 60))
#define local_e0 (*(char * *)(frame + 64))
#define local_dc (*(void * *)(frame + 68))
#define local_d4 (*(char * (*)[3])(frame + 76))
#define local_c8 (*(char * *)(frame + 88))
#define local_c0 (*(ulong *)(frame + 96))
#define local_bc (*(int *)(frame + 100))
#define uStack_94 (*(undefined4 *)(frame + 140))
#define local_b8 (*(int *)(frame + 104))
#define local_b4 (*(undefined4 *)(frame + 108))
#define local_ac (*(void * *)(frame + 116))
#define local_a8 (*(int *)(frame + 120))
#define local_a0 (*(int *)(frame + 128))
#define local_9c (*(char * *)(frame + 132))
#define auStack_68 (*(undefined1 (*)[8])(frame + 184))
#define local_98 (*(undefined4 *)(frame + 136))
#define local_90 (*(undefined4 *)(frame + 144))
#define local_7c (*(undefined4 *)(frame + 164))
#define local_78 (*(undefined4 *)(frame + 168))
#define local_74 (*(undefined1 * *)(frame + 172))
#define local_70 (*(int *)(frame + 176))
#define local_6c (*(undefined1 * *)(frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5284U)
 */

void * recovered_10006b28(char *param_1,int *param_2,int *param_3)

{
  unsigned char frame[320] = {0};

  ulong size;
  bool bVar1;
  void *extraout_r0;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_110;
  local_7c = *DAT_10007014;
  local_78 = DAT_1000700c;
  local_70 = DAT_10007010 + ((uintptr_t)pf_module_state+0x52d8U);
  recovered_10004e44(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (char *)0x0) {
    pvVar5 = (void *)0x0;
    goto LAB_10006f3c;
  }
  iStack_c4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_c0 = *(ulong *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_bc = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pvVar5 = (void *)0x0;
  local_c8 = (char *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_90 = 0xffffffff;
  local_104 = param_2;
  local_100 = param_3;
  recovered_10007c08(&local_e0,(int)param_1);
  local_98 = 0;
  local_9c = (char *)0x0;
  local_a0 = 0;
  local_ec = 0;
  if (local_dc != (void *)0x0) {
    pcVar4 = local_e0;
    if (local_e0 == (char *)0x0) {
      pcVar4 = DAT_10007018;
    }
    local_ec = (uint)(*pcVar4 == '/');
  }
  local_f4 = DAT_10007018;
  local_f0 = DAT_1000701c;
  local_e8 = DAT_10007020;
  local_f8 = param_1;
  do {
    if (local_dc <= pvVar5) break;
    recovered_100077a4((int *)&local_e0,'/',(uint)pvVar5);
    local_90 = 1;
    pvVar2 = local_dc;
    if (extraout_r0 != (void *)0xffffffff) {
      pvVar2 = extraout_r0;
    }
    local_e4 = extraout_r0;
    recovered_100077dc(&local_ac,(int *)&local_e0,(uint)pvVar5,(int)pvVar2 - (int)pvVar5);
    if ((local_a8 != 0) && (bVar1 = recovered_10007074((int *)&local_ac,local_f0), bVar1)) {
      bVar1 = recovered_1000782c((int *)&local_ac,local_e8);
      if (bVar1) {
        if ((local_9c == (char *)0x0) ||
           (bVar1 = recovered_10007074((int *)(local_a0 + (int)local_9c * 0xc + -0xc),local_e8),
           !bVar1)) {
          if (local_ec == 0) goto LAB_10006d00;
        }
        else {
          recovered_10007870(&local_a0);
        }
      }
      else {
LAB_10006d00:
        local_90 = 2;
        recovered_10007990(&local_a0,(int *)&local_ac);
      }
    }
    recovered_10004978(local_ac);
    pvVar5 = (void *)((int)local_e4 + 1);
  } while (local_e4 != (void *)0xffffffff);
  local_90 = 3;
  local_fc = DAT_10007024;
  pcVar4 = local_f4;
  if (local_ec != 0) {
    pcVar4 = DAT_10007024;
  }
  recovered_10007c08(&local_ac,(int)pcVar4);
  pvVar5 = (void *)0x0;
  pcVar4 = (char *)0x0;
  while (pcVar4 < local_9c) {
    local_e8 = pcVar4;
    local_e4 = pvVar5;
    if (pcVar4 != (char *)0x0 || (local_ec & 1) != 0) {
      local_90 = 4;
      recovered_100078a4((int *)&local_ac,0x2f);
    }
    local_90 = 5;
    recovered_10007908((int *)&local_ac,(int *)(local_a0 + (int)local_e4));
    pvVar5 = (void *)((int)local_e4 + 0xc);
    pcVar4 = local_e8 + 1;
  }
  if (local_a8 == 0) {
    local_90 = 6;
    pcVar4 = local_f0;
    if (local_ec != 0) {
      pcVar4 = local_fc;
    }
    recovered_10007c08(local_d4,(int)pcVar4);
  }
  else {
    local_90 = 7;
    recovered_100076d0(local_d4,(int *)&local_ac);
  }
  recovered_10004978(local_ac);
  recovered_10007ba0(&local_a0);
  recovered_10004978(local_e0);
  local_90 = 8;
  pcVar4 = local_f4;
  if (local_d4[0] != (char *)0x0) {
    pcVar4 = local_d4[0];
  }
  iVar3 = recovered_10007028(pcVar4,&local_c8);
  pcVar4 = local_f8;
  if (iVar3 == 0) {
    bVar1 = recovered_10007074((int *)local_d4,local_f8);
    pvVar5 = (void *)0x0;
    if (bVar1) {
      local_90 = 9;
      iVar3 = recovered_10007028(pcVar4,&local_c8);
      pvVar5 = (void *)0x0;
      if (iVar3 != 0) goto LAB_10006e5c;
    }
  }
  else {
LAB_10006e5c:
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
          local_e4 = recovered_10004974(size);
          local_90 = 0xb;
          recovered_10002438(local_e4,local_e8,local_c0);
          local_90 = 0xc;
          recovered_10007088(local_e8);
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
  recovered_10004978(local_d4[0]);
LAB_10006f3c:
  recovered_10004e5c(&uStack_94);
  return pvVar5;
}

#undef DAT_1000700c
#undef DAT_10007010
#undef DAT_10007014
#undef DAT_10007018
#undef DAT_1000701c
#undef DAT_10007020
#undef DAT_10007024
#undef auStack_110
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef iStack_c4
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_c8
#undef local_c0
#undef local_bc
#undef uStack_94
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_9c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10007070
#define DAT_10007070 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x57ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5784U)
 */

undefined4 recovered_10007028(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007590(0x58);
  if ((iVar1 == 0) || ((code *)*DAT_10007070 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x57c0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10007070)(param_1,param_2);
  return uVar2;
}

#undef DAT_10007070

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57d0U)
 */

bool recovered_10007074(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000782c(param_1,param_2);
  return !bVar1;
}


#undef DAT_100070c4
#define DAT_100070c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5820U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57e4U)
 */

void recovered_10007088(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10007590(0x50);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_100070c4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5818U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_100070c4)(param_1);
  return;
}

#undef DAT_100070c4

#undef DAT_10007110
#define DAT_10007110 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x586cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5824U)
 */

undefined4 recovered_100070c8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = recovered_10007590(0x68);
  if ((iVar1 == 0) || ((code *)*DAT_10007110 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5860U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10007110)(param_1,param_2);
  return uVar2;
}

#undef DAT_10007110

#undef DAT_10007158
#define DAT_10007158 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x58b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5870U)
 */

void recovered_10007114(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10007590(0x70);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_10007158 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x58acU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_10007158)(param_1,param_2);
  return;
}

#undef DAT_10007158

#undef DAT_100072c0
#define DAT_100072c0 (*(double *)(((uintptr_t)pf_module_state + 0x5a1cU)))
#undef DAT_100072c8
#define DAT_100072c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5a24U)))
#define local_40 (*(longlong *)(frame + 16))
#define local_38 (*(ulong *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
#define local_30 (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58b8U)
 */

int * recovered_1000715c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                        double param_6)

{
  unsigned char frame[112] = {0};

  bool bVar1;
  void *data;
  int iVar2;
  void *out;
  int *piVar3;
  int unaff_r5;
  ulong size;
  undefined4 uVar4;
  double dVar5;

  local_38 = *(ulong *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_34 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar3 = (int *)0x0;
  local_40 = (ulonglong)*(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4) << 0x20;
  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  local_30 = 0;
  if (param_1 != 0 && param_2 != 0) {
    bVar1 = param_6 < 0.0;
    if (1.0 < param_6) {
      param_6 = 1.0;
    }
    dVar5 = param_6 * DAT_100072c0;
    if (bVar1) {
      dVar5 = 0.0;
    }
    iVar2 = recovered_10007590(0x74);
    if ((iVar2 != 0) && ((code *)*DAT_100072c8 != (code *)0x0)) {
      uVar4 = VectorFloatToUnsigned(dVar5,3);
      iVar2 = (*(code *)*DAT_100072c8)(param_1,unaff_r5,param_3,param_4,param_5,uVar4,&local_40);
      size = local_38;
      if (iVar2 != 0) {
        data = (void *)local_40;
        if ((void *)local_40 != (void *)0x0) {
          param_4 = local_34;
        }
        if (((void *)local_40 != (void *)0x0 && param_4 != 0) &&
           (iVar2 = (int)local_30, (int)local_30 != 0)) {
          piVar3 = recovered_10004948(0x18);
          *piVar3 = local_34;
          piVar3[1] = (int)local_30;
          if (size == 0) {
            size = param_4 * iVar2 * 4;
          }
          out = recovered_10004974(size);
          piVar3[2] = (int)out;
          recovered_10002438(out,data,size);
          piVar3[5] = 0;
          piVar3[4] = 0;
          piVar3[3] = 0;
        }
        else if ((void *)local_40 == (void *)0x0) {
          return (int *)0x0;
        }
        recovered_10007088(data);
      }
    }
  }
  return piVar3;
}

#undef DAT_100072c0
#undef DAT_100072c8
#undef local_40
#undef local_38
#undef local_34
#undef local_30

#undef DAT_10007308
#define DAT_10007308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x5a64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a28U)
 */

void recovered_100072cc(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10007590(0x78);
  if (iVar1 == 0) {
    return;
  }
  if ((code *)*DAT_10007308 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x5a5cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_10007308)(param_1);
  return;
}

#undef DAT_10007308

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a68U)
 */

undefined4 * recovered_1000730c(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004978((void *)*param_1);
  return param_1;
}


#define local_28 (*(void * *)(frame + 16))
#define local_20 (*(int *)(frame + 24))
#define local_1c (*(int *)(frame + 28))
#define iStack_24 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a84U)
 */

void recovered_10007328(int *param_1,int param_2,uint param_3,int param_4)

{
  unsigned char frame[88] = {0};

  int iVar1;
  void *data;
  uint uVar2;
  int iVar3;

  local_1c = 0;
  iVar1 = recovered_10007454(param_1,param_2,&local_1c,param_4);
  if (param_2 == 0) {
    param_3 = 0;
  }
  if (iVar1 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_100074a8(param_1);
    }
    else {
      recovered_100074d8(param_1,param_3);
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
    recovered_10007540(&local_28,*param_1 + local_1c,uVar2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    iVar3 = param_1[2];
    *param_1 = (int)local_28;
    param_1[1] = iStack_24;
    param_1[2] = local_20;
    local_28 = data;
    iStack_24 = iVar1;
    local_20 = iVar3;
    recovered_10004978(data);
  }
  return;
}

#undef local_28
#undef local_20
#undef local_1c
#undef iStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5b80U)
 */

int recovered_10007424(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x5bb0U)
 */

undefined4 recovered_10007454(int *param_1,int param_2,int *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x5c04U)
 */

void recovered_100074a8(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;

  if (*param_1 == 0) {
    recovered_10007574(0);
    param_1[2] = 0;
    *param_1 = extraout_r0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c34U)
 */

void recovered_100074d8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10007574(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_r0 + param_1[1]) = 0;
    recovered_10004978((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c9cU)
 */

undefined4 * recovered_10007540(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int in_r3;

  param_1[2] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  *param_1 = 0;
  recovered_10007328(param_1,param_2,param_3,in_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5cd0U)
 */

void recovered_10007574(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10004948(param_1 + 1);
  *puVar1 = 0;
  return;
}


#undef DAT_100075dc
#define DAT_100075dc (*(int *)(((uintptr_t)pf_module_state + 0x5d38U)))
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
 * Address: ((uintptr_t)pf_module_state+0x5cecU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007590(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_100075dc) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_100075dc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d3cU)
 */

undefined4 * recovered_100075e0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10004978((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d60U)
 */

void recovered_10007604(int *param_1,uint param_2)

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
    recovered_10007660(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x5dbcU)
 */

void recovered_10007660(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_100076c0(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_r0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_10004978((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e1cU)
 */

void recovered_100076c0(ulong param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004948(param_1);
  return;
}


#undef DAT_10007714
#define DAT_10007714 (*(int *)(((uintptr_t)pf_module_state + 0x5e70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e2cU)
 */

undefined4 * recovered_100076d0(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = DAT_10007714;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_10007328(param_1,iVar1,param_2[1],iVar1);
  return param_1;
}

#undef DAT_10007714

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e74U)
 */

uint recovered_10007718(uint param_1,uint param_2,int param_3)

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
    uVar3 = recovered_10002100((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
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


#undef DAT_100077a0
#define DAT_100077a0 (*(int *)(((uintptr_t)pf_module_state + 0x5efcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ed8U)
 */

void recovered_1000777c(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0x1a) {
    **(undefined1 **)(DAT_100077a0 + uVar1 * 4) = 1;
    return;
  }
  return;
}

#undef DAT_100077a0

#undef DAT_100077d8
#define DAT_100077d8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5f34U)))
#define aiStack_210 (*(int (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f00U)
 */

void recovered_100077a4(int *param_1,char param_2,uint param_3)

{
  unsigned char frame[576] = {0};


  recovered_10007924(aiStack_210 + 0x80,param_2,param_3);
  return;
}

#undef DAT_100077d8
#undef aiStack_210

#undef DAT_10007828
#define DAT_10007828 (*(int *)(((uintptr_t)pf_module_state + 0x5f84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f38U)
 */

void recovered_100077dc(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

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
  iVar2 = DAT_10007828;
  if (*param_2 != 0) {
    iVar2 = *param_2;
  }
  recovered_10007540(param_1,iVar2 + param_3,uVar3);
  return;
}

#undef DAT_10007828

#undef DAT_1000786c
#define DAT_1000786c (*(char * *)(((uintptr_t)pf_module_state + 0x5fc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f88U)
 */

bool recovered_1000782c(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;

  iVar3 = param_1[1];
  pcVar4 = DAT_1000786c;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)*param_1;
  }
  iVar2 = recovered_10007424((int)param_2);
  bVar1 = recovered_10007958(pcVar4,iVar3,param_2,iVar2);
  return bVar1;
}

#undef DAT_1000786c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fccU)
 */

void recovered_10007870(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000730c((undefined4 *)(*param_1 + param_1[1] * 0xc + -0xc));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6000U)
 */

void recovered_100078a4(int *param_1,undefined1 param_2)

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
    recovered_100074d8(param_1,uVar2);
  }
  recovered_100074a8(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10007920
#define DAT_10007920 (*(int *)(((uintptr_t)pf_module_state + 0x607cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6064U)
 */

void recovered_10007908(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_10007920;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  recovered_10007abc(param_1,iVar1,param_2[1]);
  return;
}

#undef DAT_10007920

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6080U)
 */

uint recovered_10007924(int *param_1,char param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x60b4U)
 */

bool recovered_10007958(char *param_1,int param_2,char *param_3,int param_4)

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
 * Address: ((uintptr_t)pf_module_state+0x60ecU)
 */

int recovered_10007990(int *param_1,int *param_2)

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
    recovered_100079f8(param_1,uVar2);
    iVar1 = param_1[1];
  }
  recovered_100076d0((undefined4 *)(*param_1 + iVar1 * 0xc),param_2);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6154U)
 */

void recovered_100079f8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_r0 = 0;
  int iVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    recovered_10007a78(param_2);
    iVar1 = 0;
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10007a90((undefined4 *)(extraout_r0 + iVar1),(undefined4 *)(*param_1 + iVar1));
      recovered_1000730c((undefined4 *)(*param_1 + iVar1));
      iVar1 = iVar1 + 0xc;
    }
    recovered_10004978((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = extraout_r0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61d4U)
 */

void recovered_10007a78(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004948(param_1 * 0xc);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61ecU)
 */

void recovered_10007a90(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x6218U)
 */

int * recovered_10007abc(int *param_1,int param_2,uint param_3)

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
    iVar1 = recovered_10007454(param_1,param_2,&local_20,in_r3);
    iVar3 = param_1[1];
    if (iVar1 == 0) {
      recovered_100074d8(param_1,iVar3 + unaff_r5);
      for (; unaff_r5 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar2) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      if ((uint)(iVar3 - local_20) < unaff_r5) {
        unaff_r5 = iVar3 - local_20;
      }
      recovered_100074d8(param_1,unaff_r5 + iVar3);
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
 * Address: ((uintptr_t)pf_module_state+0x62fcU)
 */

int * recovered_10007ba0(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007bc0(param_1);
  recovered_10004978((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x631cU)
 */

void recovered_10007bc0(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0xc;
  for (; iVar2 = iVar2 + -0xc, iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_1000730c((undefined4 *)(*param_1 + iVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6364U)
 */

undefined4 * recovered_10007c08(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int extraout_r3 = 0;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = recovered_10007424(param_2);
  recovered_10007328(param_1,param_2,uVar1,extraout_r3);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63a4U)
 */

int recovered_10007c48(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10007660(param_1,uVar5);
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

