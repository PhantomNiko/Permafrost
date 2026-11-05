/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100080fc
#define DAT_100080fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10001230(void)

{
  unsigned char frame[64] = {0};

  DAT_100080fc = 0;
  recovered_10001240();
  return;
}

#undef DAT_100080fc

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_100080fc
#define DAT_100080fc (*(char *)(((uintptr_t)pf_module_state + 0x6eccU)))
#undef DAT_10008100
#define DAT_10008100 (*(int *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#define local_20 (*(int *)(frame + 152))
#define local_1c (*(uint *)(frame + 156))
#define local_18 (*(uint *)(frame + 160))
#define local_14 (*(uint *)(frame + 164))
#define auStack_a8 (*(uint (*)[34])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001240(void)

{
  unsigned char frame[216] = {0};

  uint uVar1;
  uint extraout_EAX = 0;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;

  local_20 = 0;
  if (DAT_100080fc == '\0') {
    DAT_10008100 = 0;
    local_1c = _DAT_0000608c;
    if (0xf < _DAT_0000608c) {
      local_1c = 0x10;
    }
    uVar3 = 0;
    uVar1 = 0;
    while (uVar1 != local_1c) {
      local_18 = uVar3;
      uVar6 = *(uint *)(&DAT_00006090 + uVar1 * 8);
      local_14 = uVar1;
      uVar1 = *(uint *)(&DAT_00006094 + uVar1 * 8);
      uVar4 = uVar1 + uVar6;
      if (!(CARRY4(uVar1,uVar6) < (uVar4 < 0x300001) || uVar1 == 0)) {
        if (uVar6 < 0x300001) {
          uVar6 = 0x300000;
        }
        if (uVar3 < 0x10) {
          for (; (uVar3 != 0 && (uVar6 < auStack_a8[uVar3 * 2])); uVar3 = uVar3 - 1) {
            uVar1 = auStack_a8[uVar3 * 2];
            auStack_a8[uVar3 * 2 + 3] = auStack_a8[uVar3 * 2 + 1];
            auStack_a8[uVar3 * 2 + 2] = uVar1;
          }
          auStack_a8[uVar3 * 2 + 2] = uVar6;
          auStack_a8[uVar3 * 2 + 3] = uVar4 - uVar6;
          uVar3 = local_18 + 1;
        }
      }
      uVar1 = local_14 + 1;
    }
    if (uVar3 == 0) {
      iVar5 = 0;
    }
    else {
      puVar2 = auStack_a8 + 4;
      iVar5 = 1;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        uVar6 = auStack_a8[iVar5 * 2 + 1] + auStack_a8[iVar5 * 2];
        if (uVar6 < *puVar2) {
          uVar1 = *puVar2;
          auStack_a8[iVar5 * 2 + 3] = puVar2[1];
          auStack_a8[iVar5 * 2 + 2] = uVar1;
          iVar5 = iVar5 + 1;
        }
        else {
          uVar1 = *puVar2 + puVar2[1];
          if (uVar6 < uVar1) {
            uVar1 = uVar1 - auStack_a8[iVar5 * 2];
            auStack_a8[iVar5 * 2 + 1] = uVar1;
          }
        }
        puVar2 = puVar2 + 2;
      }
    }
    puVar2 = auStack_a8 + 3;
    while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
      recovered_10002913(uVar1,*puVar2,puVar2[-1],&local_20);
      puVar2 = puVar2 + 2;
      uVar1 = extraout_EAX;
    }
    if (DAT_10008100 == 0) {
      if (_DAT_00006088 < 0x300001) {
        uVar1 = 0x4000000;
      }
      else {
        uVar1 = _DAT_00006088 & 0xfffffff0;
      }
      uVar3 = 0x3d00000;
      if (0x30001c < uVar1) {
        uVar1 = uVar1 - 0x300000;
        uVar3 = uVar1;
      }
      recovered_10002913(uVar1,uVar3,0x300000,&local_20);
    }
    DAT_100080fc = '\x01';
  }
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_100080fc
#undef DAT_10008100
#undef _DAT_00006088
#undef _DAT_0000608c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a8

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b0U)
 */

int recovered_100013e0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001240();
  iVar1 = 0;
  for (piVar2 = &DAT_10008100; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_10008100

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1daU)
 */

void recovered_1000140a(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10001240();
  for (piVar1 = &DAT_10008100; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_10008100

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x209U)
 */

int recovered_10001439(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10001240();
  iVar1 = 0;
  for (piVar2 = &DAT_10008100; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_10008100

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22dU)
 */

void recovered_1000145d(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10001240();
  for (piVar1 = &DAT_10008100; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_10008100

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x256U)
 */

uint * recovered_10001486(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  if (param_1 != 0) {
    recovered_10001240();
    uVar4 = param_1 + 0xfU & 0xfffffff0;
    for (puVar3 = &DAT_10008100; puVar3 = (uint *)*puVar3, puVar3 != (uint *)0x0;
        puVar3 = puVar3 + 1) {
      if ((char)puVar3[2] == '\x01') {
        uVar2 = *puVar3;
        if (uVar4 <= uVar2) {
          if (uVar4 + 0x20 <= uVar2) {
            piVar1 = (int *)((int)puVar3 + uVar4 + 0x10);
            *piVar1 = (uVar2 - uVar4) + -0x10;
            piVar1[1] = puVar3[1];
            *(undefined1 *)(piVar1 + 2) = 1;
            *puVar3 = uVar4;
            puVar3[1] = (uint)piVar1;
          }
          *(undefined1 *)(puVar3 + 2) = 0;
          return puVar3 + 4;
        }
      }
    }
  }
  return (uint *)0x0;
}

#undef DAT_10008100

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bbU)
 */

longlong recovered_100014eb(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 << (bVar1 & 0x1f) | param_1 >> (0x20 - bVar1 & 0x1f),
                        param_1 << (bVar1 & 0x1f));
      }
      return (ulonglong)(param_1 << (bVar1 - 0x20 & 0x1f)) << 0x20;
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2faU)
 */

ulonglong recovered_1000152a(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 >> (bVar1 & 0x1f),
                        param_1 >> (bVar1 & 0x1f) | param_2 << (0x20 - bVar1 & 0x1f));
      }
      return (ulonglong)(param_2 >> (bVar1 - 0x20 & 0x1f));
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x339U)
 */

undefined8 recovered_10001569(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;

  uVar1 = param_1;
  if (0 < (int)param_3) {
    uVar1 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44((int)param_2 >> (bVar2 & 0x1f),
                        param_1 >> (bVar2 & 0x1f) | param_2 << (0x20 - bVar2 & 0x1f));
      }
      return CONCAT44(uVar1,(int)param_2 >> (bVar2 - 0x20 & 0x1f));
    }
    param_2 = uVar1;
  }
  return CONCAT44(param_2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37aU)
 */

undefined8 recovered_100015aa(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_100015cb(param_1,param_3,param_2,param_4,param_5,(uint *)0x0);
  return uVar1;
}


#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39bU)
 */

undefined8 recovered_100015cb(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  uint *param_6)

{
  unsigned char frame[68] = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;

  if (param_4 == 0 && param_5 == 0) {
    uVar4 = 0;
    uVar6 = 0;
    local_14 = 0;
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    for (uVar2 = 0x3f; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
      uVar7 = uVar6 << 1 | uVar4 >> 0x1f;
      uVar9 = recovered_1000152a(param_3,param_2,uVar2 & 0xff);
      uVar6 = ((uint)uVar9 & 1) + uVar4 * 2;
      lVar10 = recovered_100014eb(1,0,uVar2 & 0xff);
      uVar5 = 0;
      uVar8 = 0;
      lVar1 = 0;
      if (param_5 <= uVar7 && (uint)(uVar6 < param_4) <= uVar7 - param_5) {
        uVar5 = param_4;
        uVar8 = param_5;
        lVar1 = lVar10;
      }
      uVar3 = uVar3 | (uint)((ulonglong)lVar1 >> 0x20);
      local_14 = local_14 | (uint)lVar1;
      uVar4 = uVar6 - uVar5;
      uVar6 = (uVar7 - uVar8) - (uint)(uVar6 < uVar5);
    }
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar4;
    param_6[1] = uVar6;
  }
  return CONCAT44(uVar3,local_14);
}

#undef local_14

#define local_14 (*(uint *)(frame + 16))
#define local_10 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47cU)
 */

undefined8 recovered_100016ac(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  unsigned char frame[68] = {0};


  local_10 = 0;
  local_14 = 0;
  recovered_100015cb(param_3,param_2,param_1,param_3,param_4,&local_14);
  return CONCAT44(local_10,local_14);
}

#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b4U)
 */

int recovered_100016e4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;

  if (param_3 == 0 && param_4 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = (int)param_4 >> 0x1f;
    uVar3 = (int)param_2 >> 0x1f;
    iVar2 = ((param_4 ^ uVar1) - uVar1) - (uint)((param_3 ^ uVar1) < uVar1);
    uVar4 = recovered_100015cb(iVar2,((param_2 ^ uVar3) - uVar3) - (uint)((param_1 ^ uVar3) < uVar3)
                               ,(param_1 ^ uVar3) - uVar3,(param_3 ^ uVar1) - uVar1,iVar2,
                               (uint *)0x0);
    iVar2 = (int)uVar4;
    if (param_2 >> 0x1f != -uVar1) {
      iVar2 = -(int)uVar4;
    }
  }
  return iVar2;
}


#define local_1c (*(uint *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x526U)
 */

undefined8 recovered_10001756(uint param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[76] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = param_2 >> 0x1f;
    uVar3 = (int)param_4 >> 0x1f;
    iVar1 = ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3);
    local_18 = 0;
    local_1c = 0;
    recovered_100015cb(iVar1,((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2),
                       (param_1 ^ uVar2) - uVar2,(param_3 ^ uVar3) - uVar3,iVar1,&local_1c);
    uVar2 = -local_1c;
    iVar1 = -(uint)(local_1c != 0) - local_18;
    if (-1 < param_2) {
      uVar2 = local_1c;
      iVar1 = local_18;
    }
  }
  return CONCAT44(iVar1,uVar2);
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x598U)
 */

void recovered_100017c8(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59fU)
 */

int recovered_100017cf(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100017e0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10001808(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_1000182e(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x626U)
 */

void * recovered_10001856(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x647U)
 */

void * recovered_10001877(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (size != 0 && out != data) {
    if (out < data) {
      for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
        *(undefined1 *)((int)out + uVar1) = *(undefined1 *)((int)data + uVar1);
      }
    }
    else {
      while (size != 0) {
        *(undefined1 *)((int)out + (size - 1)) = *(undefined1 *)((int)data + (size - 1));
        size = size - 1;
      }
    }
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68dU)
 */

void * recovered_100018bd(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)out + uVar1) = (undefined1)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a9U)
 */

void recovered_100018d9(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bfU)
 */

void recovered_100018ef(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6d5U)
 */

int recovered_10001905(void *left,void *right,ulong size)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;

  uVar3 = 0;
  do {
    if (size == uVar3) {
      return 0;
    }
    pbVar1 = (byte *)((int)left + uVar3);
    pbVar2 = (byte *)((int)right + uVar3);
    uVar3 = uVar3 + 1;
  } while (*pbVar1 == *pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x704U)
 */

bool recovered_10001934(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717U)
 */

bool recovered_10001947(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72aU)
 */

bool recovered_1000195a(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740U)
 */

bool recovered_10001970(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x764U)
 */

bool recovered_10001994(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77dU)
 */

bool recovered_100019ad(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x790U)
 */

int recovered_100019c0(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7a3U)
 */

int recovered_100019d3(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7b6U)
 */

ulong recovered_100019e6(char *text)

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
 * Address: ((uintptr_t)pf_module_state+0x7d1U)
 */

int recovered_10001a01(char *left,char *right)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    bVar1 = left[iVar2];
    if ((bVar1 == 0) || (bVar1 != right[iVar2])) break;
    iVar2 = iVar2 + 1;
  }
  return (uint)bVar1 - (uint)(byte)right[iVar2];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7f9U)
 */

void recovered_10001a29(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10001a01(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x802U)
 */

void recovered_10001a32(int param_1,int param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x81cU)
 */

void * recovered_10001a4c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_100019e6(param_1);
    out = recovered_100017e0(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10001856(out,param_1,uVar1 + 1);
      pvVar2 = out;
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x866U)
 */

char * recovered_10001a96(char *param_1,char param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x88aU)
 */

int recovered_10001aba(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_10001a96(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c1U)
 */

char * recovered_10001af1(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001a96(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8efU)
 */

char * recovered_10001b1f(char *param_1,char *param_2)

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


#undef DAT_10006c90
#define DAT_10006c90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91cU)
 */

undefined * recovered_10001b4c(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10006c90;
}

#undef DAT_10006c90

#undef PTR_DAT_1000804c
#define PTR_DAT_1000804c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x926U)
 */

undefined ** recovered_10001b56(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000804c;
}

#undef PTR_DAT_1000804c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x930U)
 */

undefined4 recovered_10001b60(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x947U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001b77(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    lVar2 = lVar2 + lVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    lVar2 = lVar2 * (longdouble)_DAT_10006a70;
  }
  return lVar2;
}

#undef DAT_10006a70
#undef _DAT_10006a70

#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x971U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ba1(double param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  int iVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    dVar1 = -param_1;
    if (-param_1 <= param_1) {
      dVar1 = param_1;
    }
    iVar2 = 0;
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_10006a70) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_10006a70)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10006a70
#undef _DAT_10006a70

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ffU)
 */

double recovered_10001c2f(double left,double right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  if ((right != 0.0) || (NAN(right))) {
    dVar1 = left - right * (double)(int)ROUND(left / right);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xa51U)
 */

double recovered_10001c81(double left,double right)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(right);
  dVar3 = 0.0;
  if ((((double)(int)uVar1 == right) && (!NAN((double)(int)uVar1) && !NAN(right))) &&
     (dVar3 = 1.0, uVar1 != 0)) {
    dVar2 = 1.0;
    for (uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f); uVar4 != 0; uVar4 = uVar4 >> 1
        ) {
      if ((uVar4 & 1) != 0) {
        dVar2 = left * dVar2;
      }
      left = left * left;
    }
    dVar3 = 1.0 / dVar2;
    if (-1 < (int)uVar1) {
      dVar3 = dVar2;
    }
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xadaU)
 */

double recovered_10001d0a(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  dVar2 = (double)((int)ROUND(value) + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb22U)
 */

double recovered_10001d52(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  dVar2 = (double)((int)ROUND(value) + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  dVar1 = dVar2 + 1.0;
  if (value <= dVar2) {
    dVar1 = dVar2;
  }
  return dVar1;
}


#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7dU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001dad(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  int iVar2;
  bool bVar3;

  dVar1 = 0.0;
  if (0.0 < value) {
    dVar1 = value;
    if (value < 1.0) {
      dVar1 = 1.0;
    }
    iVar2 = 0x18;
    while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
      dVar1 = (value / dVar1 + dVar1) * (double)_DAT_10006a70;
    }
  }
  return dVar1;
}

#undef DAT_10006a70
#undef _DAT_10006a70

#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10006a74
#define DAT_10006a74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x584cU)))
#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5870U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a74
#define _DAT_10006a74 (*(float *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef _DAT_10006a78
#define _DAT_10006a78 (*(float *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef _DAT_10006a7c
#define _DAT_10006a7c (*(float *)(((uintptr_t)pf_module_state + 0x584cU)))
#undef _DAT_10006a80
#define _DAT_10006a80 (*(float *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef _DAT_10006aa0
#define _DAT_10006aa0 (*(double *)(((uintptr_t)pf_module_state + 0x5870U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc7U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001df7(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;

  dVar3 = 0.0;
  if (value <= 0.0) {
    dVar3 = (double)_DAT_10006a74;
  }
  else {
    iVar6 = 0;
    for (; (double)_DAT_10006a78 < value; value = value * (double)_DAT_10006a70) {
      iVar6 = iVar6 + 1;
    }
    for (; value < (double)_DAT_10006a7c; value = value + value) {
      iVar6 = iVar6 + -1;
    }
    dVar4 = 1.0;
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    for (uVar5 = 1; uVar5 < 0x14; uVar5 = uVar5 + 2) {
      dVar3 = dVar1 / dVar4 + dVar3;
      dVar1 = dVar1 * dVar2;
      dVar4 = dVar4 + (double)_DAT_10006a80;
    }
    dVar3 = dVar3 + dVar3 + (double)iVar6 * _DAT_10006aa0;
  }
  return dVar3;
}

#undef DAT_10006a70
#undef DAT_10006a74
#undef DAT_10006a78
#undef DAT_10006a7c
#undef DAT_10006a80
#undef DAT_10006aa0
#undef _DAT_10006a70
#undef _DAT_10006a74
#undef _DAT_10006a78
#undef _DAT_10006a7c
#undef _DAT_10006a80
#undef _DAT_10006aa0

#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc6bU)
 */

longlong recovered_10001e9b(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10006ad0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10006ad0

#undef DAT_10006a84
#define DAT_10006a84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5854U)))
#undef DAT_10006a88
#define DAT_10006a88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5858U)))
#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x585cU)))
#undef _DAT_10006a84
#define _DAT_10006a84 (*(float *)(((uintptr_t)pf_module_state + 0x5854U)))
#undef _DAT_10006a88
#define _DAT_10006a88 (*(float *)(((uintptr_t)pf_module_state + 0x5858U)))
#undef _DAT_10006a8c
#define _DAT_10006a8c (*(float *)(((uintptr_t)pf_module_state + 0x585cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcafU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001edf(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001f21(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)(((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10006a8c +
                  (lVar1 * lVar1) / (longdouble)_DAT_10006a88 +
                  (longdouble)1 + lVar1 / (longdouble)_DAT_10006a84) * extraout_ST0);
}

#undef DAT_10006a84
#undef DAT_10006a88
#undef DAT_10006a8c
#undef _DAT_10006a84
#undef _DAT_10006a88
#undef _DAT_10006a8c

#undef DAT_10006aa8
#define DAT_10006aa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5878U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5880U)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5888U)))
#undef DAT_10006ac0
#define DAT_10006ac0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5890U)))
#undef _DAT_10006aa8
#define _DAT_10006aa8 (*(double *)(((uintptr_t)pf_module_state + 0x5878U)))
#undef _DAT_10006ab0
#define _DAT_10006ab0 (*(double *)(((uintptr_t)pf_module_state + 0x5880U)))
#undef _DAT_10006ab8
#define _DAT_10006ab8 (*(double *)(((uintptr_t)pf_module_state + 0x5888U)))
#undef _DAT_10006ac0
#define _DAT_10006ac0 (*(double *)(((uintptr_t)pf_module_state + 0x5890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcf1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f21(double param_1)

{
  unsigned char frame[64] = {0};

  for (; _DAT_10006aa8 < param_1; param_1 = param_1 + _DAT_10006ac0) {
  }
  for (; param_1 < _DAT_10006ab0; param_1 = param_1 + _DAT_10006ab8) {
  }
  return;
}

#undef DAT_10006aa8
#undef DAT_10006ab0
#undef DAT_10006ab8
#undef DAT_10006ac0
#undef _DAT_10006aa8
#undef _DAT_10006ab0
#undef _DAT_10006ab8
#undef _DAT_10006ac0

#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5860U)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5864U)))
#undef DAT_10006a98
#define DAT_10006a98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5868U)))
#undef _DAT_10006a90
#define _DAT_10006a90 (*(float *)(((uintptr_t)pf_module_state + 0x5860U)))
#undef _DAT_10006a94
#define _DAT_10006a94 (*(float *)(((uintptr_t)pf_module_state + 0x5864U)))
#undef _DAT_10006a98
#define _DAT_10006a98 (*(float *)(((uintptr_t)pf_module_state + 0x5868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001f5f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001f21(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10006a98 +
                 (lVar1 * lVar1) / (longdouble)_DAT_10006a94 +
                 (longdouble)1 + lVar1 * (longdouble)_DAT_10006a90);
}

#undef DAT_10006a90
#undef DAT_10006a94
#undef DAT_10006a98
#undef _DAT_10006a90
#undef _DAT_10006a94
#undef _DAT_10006a98

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd6dU)
 */

double recovered_10001f9d(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = -value;
  if (-value <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd88U)
 */

float recovered_10001fb8(float left,float right)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - right * (float)(int)ROUND(left / right);
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xde0U)
 */

longdouble recovered_10002010(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_10001ba1((double)param_1,param_2);
  return (longdouble)(float)extraout_ST0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe03U)
 */

longdouble recovered_10002033(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10001b77((double)param_1,param_2);
  return (longdouble)(float)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe26U)
 */

float recovered_10002056(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001c81((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe49U)
 */

float recovered_10002079(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  fVar2 = (float)((int)ROUND(value) + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe97U)
 */

float recovered_100020c7(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001d52((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb3U)
 */

double recovered_100020e3(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10001d52(value);
    return dVar2;
  }
  dVar2 = (double)(int)ROUND(value);
  dVar1 = (double)((int)ROUND(value) + -1);
  if (dVar2 <= value) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf0fU)
 */

float recovered_1000213f(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100020e3((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf2bU)
 */

float recovered_1000215b(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001dad((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf47U)
 */

float recovered_10002177(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001df7((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf63U)
 */

void recovered_10002193(double param_1)

{
  unsigned char frame[64] = {0};

  recovered_10001e9b(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf79U)
 */

float recovered_100021a9(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001edf((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf95U)
 */

float recovered_100021c5(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001f5f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfb1U)
 */

float recovered_100021e1(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = -value;
  if (-value <= value) {
    fVar1 = value;
  }
  return fVar1;
}


#define local_1c (*(byte * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfccU)
 */

int recovered_100021fc(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;

  local_14 = param_3;
  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar3 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar2 = pbVar4 + uVar3;
  local_1c = param_1;
  if (param_3 == 0x10) {
    local_14 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar4[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar2 = pbVar4 + uVar3 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar2 == 0x30) {
      if ((pbVar4[uVar3 + 1] | 0x20) == 0x78) {
        pbVar2 = pbVar4 + uVar3 + 2;
        uStack_20 = 0x10;
      }
      else {
        uStack_20 = 8;
      }
    }
    else {
      uStack_20 = 10;
    }
    local_14 = uStack_20;
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  local_18 = 0;
  while( true ) {
    pbVar2 = pbVar2 + 1;
    uVar3 = recovered_100022f1();
    if (local_14 <= uVar3) break;
    local_18 = local_18 * local_14 + uVar3;
    local_1c = pbVar2;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_1c;
  }
  if (bVar1 == 0x2d) {
    local_18 = -local_18;
  }
  return local_18;
}

#undef local_1c
#undef local_18
#undef local_14
#undef uStack_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10c1U)
 */

int recovered_100022f1(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int in_ECX;
  char cVar2;

  cVar2 = (char)in_ECX;
  if ((byte)(cVar2 - 0x30U) < 10) {
    iVar1 = in_ECX + -0x30;
  }
  else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    iVar1 = in_ECX + -0x57;
  }
  else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
    iVar1 = in_ECX + -0x37;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


#define local_1c (*(byte * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10f6U)
 */

int recovered_10002326(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;

  local_14 = param_3;
  pbVar4 = param_1;
  while( true ) {
    bVar1 = *pbVar4;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar3 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar2 = pbVar4 + uVar3;
  local_1c = param_1;
  if (param_3 == 0x10) {
    local_14 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar4[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar2 = pbVar4 + uVar3 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar2 == 0x30) {
      if ((pbVar4[uVar3 + 1] | 0x20) == 0x78) {
        pbVar2 = pbVar4 + uVar3 + 2;
        uStack_20 = 0x10;
      }
      else {
        uStack_20 = 8;
      }
    }
    else {
      uStack_20 = 10;
    }
    local_14 = uStack_20;
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  local_18 = 0;
  while( true ) {
    pbVar2 = pbVar2 + 1;
    uVar3 = recovered_100022f1();
    if (local_14 <= uVar3) break;
    local_18 = local_18 * local_14 + uVar3;
    local_1c = pbVar2;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_1c;
  }
  if (bVar1 == 0x2d) {
    local_18 = -local_18;
  }
  return local_18;
}

#undef local_1c
#undef local_18
#undef local_14
#undef uStack_20

#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x586cU)))
#undef _DAT_10006a9c
#define _DAT_10006a9c (*(float *)(((uintptr_t)pf_module_state + 0x586cU)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11ebU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000241b(char *text,char **end)

{
  unsigned char frame[68] = {0};

  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;

  pbVar2 = (byte *)text;
  while( true ) {
    bVar1 = *pbVar2;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar2 = pbVar2 + 1;
  }
  pbVar2 = pbVar2 + ((bVar1 - 0x2b & 0xfd) == 0);
  lVar7 = (longdouble)0;
  bVar4 = false;
  for (; bVar3 = *pbVar2, (byte)(bVar3 - 0x30) < 10; pbVar2 = pbVar2 + 1) {
    lVar7 = lVar7 * (longdouble)_DAT_10006a9c + (longdouble)(int)(bVar3 - 0x30);
    bVar4 = true;
  }
  lVar9 = (longdouble)1;
  lVar8 = (longdouble)0;
  if (bVar3 == 0x2e) {
    lVar9 = (longdouble)1;
    lVar8 = (longdouble)0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
      if (9 < (byte)(bVar3 - 0x30)) break;
      lVar8 = lVar8 * (longdouble)_DAT_10006a9c + (longdouble)(int)(bVar3 - 0x30);
      lVar9 = lVar9 * (longdouble)_DAT_10006a9c;
      bVar4 = true;
    }
  }
  if (bVar4) {
    lVar7 = lVar8 / lVar9 + lVar7;
    if ((bVar3 | 0x20) == 0x65) {
      if (pbVar2[1] == 0x2b) {
        local_14 = 1;
        pbVar6 = pbVar2 + 2;
      }
      else if (pbVar2[1] == 0x2d) {
        pbVar6 = pbVar2 + 2;
        local_14 = -1;
      }
      else {
        local_14 = 1;
        pbVar6 = pbVar2 + 1;
      }
      iVar5 = 0;
      bVar4 = false;
      for (; (byte)(*pbVar6 - 0x30) < 10; pbVar6 = pbVar6 + 1) {
        iVar5 = iVar5 * 10 + -0x30 + (uint)*pbVar6;
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = recovered_10001b77((double)lVar7,iVar5 * local_14);
        pbVar2 = pbVar6;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar2;
    }
    lVar9 = -lVar7;
    if (bVar1 != 0x2d) {
      lVar9 = lVar7;
    }
  }
  else {
    lVar9 = (longdouble)0;
    if (end != (char **)0x0) {
      *end = text;
    }
  }
  return (double)lVar9;
}

#undef DAT_10006a9c
#undef _DAT_10006a9c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x133fU)
 */

float recovered_1000256f(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000241b(text,end);
  return (float)dVar1;
}


#undef DAT_10006a9c
#define DAT_10006a9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x586cU)))
#undef DAT_10006cbe
#define DAT_10006cbe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a8eU)))
#undef _DAT_10006a9c
#define _DAT_10006a9c (*(float *)(((uintptr_t)pf_module_state + 0x586cU)))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(ulong *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1361U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002591(char *out,ulong capacity,char *format,void *arguments)

{
  unsigned char frame[132] = {0};

  char *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;

  local_14 = out;
  local_18 = capacity;
  local_1c = 0;
  if (capacity != 0) {
    *out = '\0';
  }
  do {
    cVar5 = *format;
    if (cVar5 == '%') {
      cVar5 = format[1];
      format = format + 1;
      if (cVar5 == '%') {
        if (1 < local_18) {
          *local_14 = '%';
LAB_100025f4:
          local_14 = local_14 + 1;
          local_18 = local_18 - 1;
        }
      }
      else {
        while ((byte)(cVar5 - 0x30U) < 10) {
          pcVar1 = format + 1;
          format = format + 1;
          cVar5 = *pcVar1;
        }
        if (cVar5 == '.') {
          do {
            cVar5 = format[1];
            format = format + 1;
          } while ((byte)(cVar5 - 0x30U) < 10);
        }
LAB_10002622:
        switch((uintptr_t)(cVar5)) {
        case 'c':
          if (1 < local_18) {
            *local_14 = *(char *)arguments;
            local_14 = local_14 + 1;
            local_18 = local_18 - 1;
          }
          arguments = (void *)((int)arguments + 4);
          break;
        case 'e':
        case 'g':
        case 'j':
        case 'k':
        case 'm':
        case 'n':
        case 'o':
        case 'q':
        case 'r':
        case 'v':
        case 'w':
        case 'y':
switchD_1000262d_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_100025f4;
        case 'f':
          dVar3 = *(double *)arguments;
          if (dVar3 < 0.0) {
            if (1 < local_18) {
              *local_14 = '-';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = local_1c + 1;
            dVar3 = -dVar3;
          }
          recovered_10002886(&local_1c,&local_18,(int *)&local_14,&local_1c,(int)ROUND(dVar3),10,
                             '\0');
          if (1 < local_18) {
            *local_14 = '.';
            local_14 = local_14 + 1;
            local_18 = local_18 - 1;
          }
          arguments = (void *)((int)arguments + 8);
          dVar3 = dVar3 - (double)(int)ROUND(dVar3);
          iVar7 = 6;
          while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
            dVar4 = (double)_DAT_10006a9c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_100025ff;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_1000262d_caseD_68;
        case 'p':
          uVar6 = *(uint *)arguments;
          recovered_10002844(&local_1c,&DAT_10006cbe);
          cVar5 = '\0';
          uVar9 = 0x10;
          goto LAB_100027fe;
        case 's':
          recovered_10002844(&local_1c,*(char **)arguments);
          goto LAB_10002807;
        case 'u':
          cVar5 = '\0';
          uVar9 = 10;
          goto LAB_100027f9;
        case 'x':
          cVar5 = '\0';
LAB_100027eb:
          uVar9 = 0x10;
LAB_100027f9:
          uVar6 = *(uint *)arguments;
          goto LAB_100027fe;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              cVar5 = '\x01';
              goto LAB_100027eb;
            }
            goto switchD_1000262d_caseD_65;
          }
        case 'd':
        case 'i':
          uVar6 = *(uint *)arguments;
          if ((int)uVar6 < 0) {
            if (1 < local_18) {
              *local_14 = '-';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = local_1c + 1;
            uVar6 = -uVar6;
          }
          cVar5 = '\0';
          uVar9 = 10;
LAB_100027fe:
          recovered_10002886(&local_1c,&local_18,(int *)&local_14,&local_1c,uVar6,uVar9,cVar5);
LAB_10002807:
          arguments = (void *)((int)arguments + 4);
          goto LAB_100025ff;
        }
      }
    }
    else {
      if (cVar5 == '\0') {
        if (capacity != 0) {
          *local_14 = '\0';
        }
        return local_1c;
      }
      if (1 < local_18) {
        *local_14 = cVar5;
        local_14 = local_14 + 1;
        local_18 = local_18 - 1;
      }
    }
    local_1c = local_1c + 1;
LAB_100025ff:
    format = format + 1;
  } while( true );
switchD_1000262d_caseD_68:
  cVar5 = format[1];
  format = format + 1;
  goto LAB_10002622;
}

#undef DAT_10006a9c
#undef DAT_10006cbe
#undef _DAT_10006a9c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f6U)
 */

void recovered_10002826(undefined4 param_1,uint *param_2,int *param_3,int *param_4,undefined1 param_5)

{
  unsigned char frame[64] = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_3 = param_5;
    *param_3 = *param_3 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_4 = *param_4 + 1;
  return;
}


#undef str_10006c95
#define str_10006c95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a65U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1614U)
 */

void recovered_10002844(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *in_ECX;
  uint *in_EDX;
  char *pcVar2;

  pcVar2 = str_10006c95;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  for (; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    recovered_10002826((int)cVar1,in_EDX,in_ECX,param_1,cVar1);
  }
  return;
}

#undef str_10006c95

#undef str_10006c9c
#define str_10006c9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6cU)))
#undef str_10006cad
#define str_10006cad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a7dU)))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1656U)
 */

void recovered_10002886(undefined4 param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
                  uint param_6,char param_7)

{
  unsigned char frame[105] = {0};

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  pcVar3 = str_10006c9c;
  if (param_7 == '\0') {
    pcVar3 = str_10006cad;
  }
  iVar2 = 0;
  local_18 = param_3;
  local_14 = param_2;
  do {
    acStack_39[iVar2 + 1] = pcVar3[param_5 % param_6];
    puVar1 = local_14;
    iVar2 = iVar2 + 1;
    bVar4 = param_6 <= param_5;
    param_5 = param_5 / param_6;
  } while (bVar4);
  while (iVar2 != 0) {
    recovered_10002826((int)acStack_39[iVar2],puVar1,local_18,param_4,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}

#undef str_10006c9c
#undef str_10006cad
#undef local_18
#undef local_14
#undef acStack_39

#define uStack00000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c0U)
 */

int recovered_100028f0(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10002591(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16e3U)
 */

void recovered_10002913(undefined4 param_1,uint param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;

  piVar3 = (int *)(param_3 + 0xfU & 0xfffffff0);
  uVar2 = param_2 - ((int)piVar3 - param_3);
  if ((((uint)((int)piVar3 - param_3) <= param_2 && uVar2 != 0) && param_4 != (int *)0x0) &&
     (uVar2 = uVar2 & 0xfffffff0, 0x1c < uVar2)) {
    *piVar3 = uVar2 - 0x10;
    piVar3[1] = 0;
    *(undefined1 *)(piVar3 + 2) = 1;
    if (DAT_10008100 == 0) {
      puVar1 = &DAT_10008100;
    }
    else {
      puVar1 = (undefined4 *)(*param_4 + 4);
    }
    *puVar1 = piVar3;
    *param_4 = (int)piVar3;
  }
  return;
}

#undef DAT_10008100

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1735U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002965(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int in_ECX;

  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
    uVar1 = CONCAT31((int3)(_DAT_00006808 >> 8),in_ECX + 4U <= _DAT_00006808);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808

#undef DAT_10008104
#define DAT_10008104 (*(int *)(((uintptr_t)pf_module_state + 0x6ed4U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ed8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x176aU)
 */

void recovered_1000299a(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;

  if (param_1 != (char *)0x0) {
    while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10008104 != 0) {
          DAT_10008104 = DAT_10008104 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002a21();
        }
        else {
          if (DAT_10008104 - 0x1ffU < 0xfffffe00) {
            recovered_10002a21();
          }
          pcVar1 = &DAT_10008108 + DAT_10008104;
          DAT_10008104 = DAT_10008104 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10008104
#undef DAT_10008108

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_10008104
#define DAT_10008104 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed4U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ed8U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17f1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002a21(void)

{
  unsigned char frame[568] = {0};

  ulong uVar1;
  undefined4 uVar2;
  byte in_CL;

  if ((DAT_10008104 == 0 & (in_CL ^ 1)) == 0) {
    if (DAT_10008104 == 0) {
      uVar1 = 0;
    }
    else {
      recovered_10001856(local_208,&DAT_10008108,DAT_10008104);
      uVar1 = DAT_10008104;
    }
    local_208[uVar1] = 0;
    uVar2 = recovered_10003657();
    if (((char)uVar2 != '\0') && (_DAT_00006840 != (code *)0x0)) {
      (*_DAT_00006840)(local_208);
    }
    DAT_10008104 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_10008104
#undef DAT_10008108
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1867U)
 */

void recovered_10002a97(void)

{
  unsigned char frame[64] = {0};

  recovered_10002a21();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1873U)
 */

void recovered_10002aa3(void)

{
  unsigned char frame[64] = {0};

  recovered_10002a21();
  return;
}


#undef DAT_10006c94
#define DAT_10006c94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
#undef DAT_10006cc1
#define DAT_10006cc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a91U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187eU)
 */

void recovered_10002aae(char *param_1,undefined *param_2)

{
  unsigned char frame[376] = {0};

  char *format;
  int iVar1;
  undefined *puVar2;

  format = &DAT_10006cc1;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10006c94;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_100028f0(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_1000299a(local_148,iVar1);
  }
  return;
}

#undef DAT_10006c94
#undef DAT_10006cc1
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18d4U)
 */

void recovered_10002b04(void)

{
  unsigned char frame[64] = {0};

  recovered_10002b4a();
  recovered_10002b4a();
  recovered_10002b4a();
  recovered_10002b4a();
  recovered_10002b4a();
  recovered_10002b4a();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191aU)
 */

void recovered_10002b4a(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *in_ECX;

  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_100019e6(in_ECX);
    recovered_1000299a(in_ECX,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1941U)
 */

void recovered_10002b71(void)

{
  unsigned char frame[64] = {0};

  recovered_10002b4a();
  recovered_10002b4a();
  return;
}


#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(code * *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x195fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002b8f(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10002aa3();
    uVar1 = recovered_10003657();
    if (((char)uVar1 != '\0') && (_DAT_00006844 != (code *)0x0)) {
      iVar2 = (*_DAT_00006844)(param_1,param_2,param_3,param_4);
      return iVar2 != 0;
    }
  }
  return false;
}

#undef DAT_00006844
#undef _DAT_00006844

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19aeU)
 */

undefined4 recovered_10002bde(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19b5U)
 */

void recovered_10002be5(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19baU)
 */

undefined1 recovered_10002bea(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10006cc1
#define DAT_10006cc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a91U)))
#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
#undef str_10006e42
#define str_10006e42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c12U)))
#undef str_10006e4f
#define str_10006e4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c1fU)))
#undef str_10006e5d
#define str_10006e5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c2dU)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19c1U)
 */

undefined4 * recovered_10002bf1(char *param_1,int param_2)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;

  if (param_1 == (char *)0x0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar1 = recovered_10001a01(param_1,str_10006e42);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    iVar2 = recovered_10001a01(param_1,str_10006e4f);
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    else {
      iVar2 = recovered_10001a01(param_1,str_10006e5d);
      if (iVar2 != 0) {
        puVar3 = recovered_100017e0(800);
        if (puVar3 != (undefined4 *)0x0) {
          recovered_100018bd(puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_10001a96((char *)param_2,'r');
          bVar8 = true;
          bVar7 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_10001a96((char *)param_2,'+');
            bVar7 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_10001a96((char *)param_2,'a');
              bVar7 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar7;
          pcVar4 = recovered_10001a96((char *)param_2,'w');
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_10001a96((char *)param_2,'a'), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_10001a96((char *)param_2,'+');
            bVar8 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar8;
          pcVar4 = recovered_10001a96((char *)param_2,'a');
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_100028f0((char *)(puVar3 + 1),0xf1,&DAT_10006cc1,param_1);
          pvVar5 = recovered_100018bd(&local_1c,0,0xc);
          iVar1 = recovered_10002eac(pvVar5,&local_1c,param_1);
          if (iVar1 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_10008000 = 2;
LAB_10002e78:
              recovered_10001808(puVar3);
              return (undefined4 *)0x0;
            }
          }
          else {
            pcVar4 = recovered_10001a96((char *)param_2,'w');
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar6 = recovered_10002edc(CONCAT31((int3)((uint)pcVar4 >> 8),pcVar4 != (char *)0x0)
                                           ,local_18,(int)puVar3);
                if ((char)uVar6 == '\0') goto LAB_10002e78;
                recovered_10001856((void *)puVar3[0x3f],local_1c,local_18);
              }
              else {
                puVar3[0x3e] = local_1c;
              }
              puVar3[0x40] = local_18;
            }
          }
          if (*(char *)((int)puVar3 + 0x112) == '\x01') {
            puVar3[0x42] = puVar3[0x40];
            return puVar3;
          }
          return puVar3;
        }
        goto LAB_10002e4d;
      }
      uVar6 = 3;
    }
  }
  puVar3 = recovered_100017e0(800);
  if (puVar3 != (undefined4 *)0x0) {
    recovered_100018bd(puVar3,0,800);
    *puVar3 = uVar6;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_100028f0((char *)(puVar3 + 1),0xf1,&DAT_10006cc1,param_1);
    return puVar3;
  }
LAB_10002e4d:
  *(undefined4 *)PTR_DAT_10008000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_10006cc1
#undef PTR_DAT_10008000
#undef str_10006e42
#undef str_10006e4f
#undef str_10006e5d
#undef local_1c
#undef local_18

#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1c7cU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002eac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003657();
  if (((char)uVar1 == '\0') || (_DAT_00006834 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006834)(param_3,param_2);
  }
  return uVar1;
}

#undef DAT_00006834
#undef _DAT_00006834

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cacU)
 */

undefined4 recovered_10002edc(undefined4 param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;

  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0x104);
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (param_2 <= uVar2) {
      return uVar4;
    }
    uVar1 = 0x100;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while (uVar2 < param_2);
    pvVar3 = recovered_1000182e(*(void **)(param_3 + 0xfc),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_3 + 0xfc) = pvVar3;
      *(uint *)(param_3 + 0x104) = uVar2;
      *(void **)(param_3 + 0xf8) = pvVar3;
      return uVar4;
    }
    *(undefined4 *)PTR_DAT_10008000 = 0xc;
    *(undefined1 *)(param_3 + 0x115) = 1;
  }
  return 0;
}

#undef PTR_DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d22U)
 */

void recovered_10002f52(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_10002f70(param_3);
  }
  recovered_10002bf1(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d40U)
 */

undefined4 recovered_10002f70(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100032a7(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10001808((void *)param_1[0x3f]);
    }
    recovered_10001808(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d80U)
 */

int recovered_10002fb0(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    for (iVar1 = 0; puVar3 = param_1, iVar4 = param_2, iVar1 != param_3; iVar1 = iVar1 + 1) {
      while (iVar4 != 0) {
        uVar2 = recovered_10003023(param_4);
        if (uVar2 == 0xffffffff) {
          return iVar1;
        }
        *puVar3 = (char)uVar2;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      }
      param_1 = param_1 + param_2;
    }
    iVar1 = param_3;
  }
  return iVar1;
}


#undef DAT_10006c94
#define DAT_10006c94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df3U)
 */

uint recovered_10003023(int *param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  ulong uVar2;
  uint uVar3;

  if ((param_1 != (int *)0x0) && ((char)param_1[0x44] == '\x01')) {
    uVar3 = param_1[0x43];
    if (uVar3 != 0xffffffff) {
      param_1[0x43] = -1;
      return uVar3;
    }
    if (*param_1 == 1) {
      uVar3 = param_1[199];
      if (uVar3 < (uint)param_1[0xc6]) {
LAB_100030bd:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      bVar1 = recovered_10002b8f((int)param_1 + 0x116,0x1fe,&DAT_10006c94,0);
      if (bVar1) {
        uVar2 = recovered_100019e6((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_100030bd;
      }
    }
    else {
      uVar3 = param_1[0x42];
      if (uVar3 < (uint)param_1[0x40]) {
        param_1[0x42] = uVar3 + 1;
        return (uint)*(byte *)(param_1[0x3e] + uVar3);
      }
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  return 0xffffffff;
}

#undef DAT_10006c94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ed4U)
 */

int recovered_10003104(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  uint uVar2;
  ulong size;
  uint uVar3;
  int iVar4;

  iVar4 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (void *)0x0)) &&
     ((param_4 != (uint *)0x0 && (*(char *)((int)param_4 + 0x111) == '\x01')))) {
    size = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_1000299a(param_1,size);
      param_4[0x42] = param_4[0x42] + size;
      iVar4 = param_3;
    }
    else {
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar3 = param_4[0x42];
      }
      else {
        uVar3 = param_4[0x40];
        param_4[0x42] = uVar3;
      }
      uVar1 = recovered_10002edc(*param_4 & 0xfffffffe,uVar3 + size,(int)param_4);
      if ((char)uVar1 != '\0') {
        uVar3 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
          recovered_100018bd((void *)(uVar3 + param_4[0x3f]),0,uVar2 - uVar3);
          uVar2 = param_4[0x42];
        }
        recovered_10001856((void *)(uVar2 + param_4[0x3f]),param_1,size);
        uVar3 = size + param_4[0x42];
        param_4[0x42] = uVar3;
        if (param_4[0x40] < uVar3) {
          param_4[0x40] = uVar3;
        }
        *(undefined2 *)((int)param_4 + 0x113) = 1;
        iVar4 = param_3;
      }
    }
  }
  return iVar4;
}


#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fdcU)
 */

undefined4 recovered_1000320c(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000321b;
        iVar1 = 0x100;
      }
      param_2 = param_2 + *(int *)((int)param_1 + iVar1);
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      param_1[0x43] = -1;
      return 0;
    }
  }
LAB_1000321b:
  *(undefined4 *)PTR_DAT_10008000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10008000

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2055U)
 */

undefined4 recovered_10003285(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_10008000

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2077U)
 */

undefined4 recovered_100032a7(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = recovered_10003466(param_1[0x40],param_1[0x3e],param_1 + 1,param_1[0x40]);
    if (iVar1 == 0) {
      *(undefined4 *)PTR_DAT_10008000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
  }
  return uVar2;
}

#undef PTR_DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d8U)
 */

undefined1 recovered_10003308(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x20efU)
 */

undefined1 recovered_1000331f(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x2106U)
 */

void recovered_10003336(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2121U)
 */

uint recovered_10003351(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0xffffffff || param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
    *(undefined1 *)(param_2 + 0x114) = 0;
  }
  return uVar1;
}


#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2150U)
 */

undefined4 recovered_10003380(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    iVar1 = recovered_100033b1();
    if (iVar1 != 0) {
      return 0;
    }
    uStack_10 = 5;
  }
  *(undefined4 *)PTR_DAT_10008000 = uStack_10;
  return 0xffffffff;
}

#undef PTR_DAT_10008000
#undef uStack_10

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2181U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100033b1(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003657();
  if (((char)uVar1 == '\0') || (_DAT_0000683c == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_0000683c)();
  }
  return uVar1;
}

#undef DAT_0000683c
#undef _DAT_0000683c

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd0U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21acU)
 */

undefined4 recovered_100033dc(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
  }
  else {
    pvVar1 = recovered_100018bd(&local_1c,0,0xc);
    iVar2 = recovered_10002eac(pvVar1,&local_1c,param_1);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      iVar2 = recovered_10003466(iVar2,local_1c,param_2,local_18);
      uVar3 = 5;
      if ((iVar2 != 0) && (iVar2 = recovered_100033b1(), iVar2 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_10008000 = uVar3;
  }
  return 0xffffffff;
}

#undef PTR_DAT_10008000
#undef local_1c
#undef local_18

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2236U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003466(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003657();
  if (((char)uVar1 == '\0') || (_DAT_00006838 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006838)(param_3,param_2,param_4);
  }
  return uVar1;
}

#undef DAT_00006838
#undef _DAT_00006838

#define local_18 (*(ulong *)(frame + 20))
#define local_1c (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2269U)
 */

undefined4 recovered_10003499(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    pvVar1 = recovered_100018bd(&local_1c,0,0xc);
    iVar2 = recovered_10002eac(pvVar1,&local_1c,param_1);
    if (iVar2 != 0) {
      pvVar1 = recovered_100017e0(local_18 + (local_18 == 0));
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_10001856(pvVar1,local_1c,local_18);
        uVar3 = local_18;
      }
      *param_2 = pvVar1;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef local_18
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22fbU)
 */

bool recovered_1000352b(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  iVar1 = recovered_10003466(param_3,param_2,param_1,param_3);
  return iVar1 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2332U)
 */

undefined4 recovered_10003562(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2339U)
 */

void recovered_10003569(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x233eU)
 */

undefined4 recovered_1000356e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2345U)
 */

undefined4 recovered_10003575(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x234cU)
 */

undefined4 recovered_1000357c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2353U)
 */

int recovered_10003583(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;

  iVar3 = param_1 + -1;
  do {
    bVar4 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      return 0;
    }
    iVar1 = iVar3 + 1;
    pcVar2 = (char *)(iVar3 + 1);
    iVar3 = iVar1;
  } while (*pcVar2 != param_2);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2377U)
 */

int recovered_100035a7(char *left,char *right,ulong size)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (size == uVar2) {
      return 0;
    }
    bVar1 = left[uVar2];
    if (bVar1 != right[uVar2]) break;
    uVar2 = uVar2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)bVar1 - (uint)(byte)right[uVar2];
}


#undef DAT_10006dd1
#define DAT_10006dd1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ba1U)))
#undef str_10006dd4
#define str_10006dd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ba4U)))
#undef str_10006de1
#define str_10006de1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bb1U)))
#undef str_10006deb
#define str_10006deb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbbU)))
#undef str_10006dff
#define str_10006dff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bcfU)))
#undef str_10006e0d
#define str_10006e0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bddU)))
#undef str_10006e1f
#define str_10006e1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5befU)))
#undef str_10006e2b
#define str_10006e2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bfbU)))
#undef str_10006e3c
#define str_10006e3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x23aaU)
 */

char * recovered_100035da(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10006dd1;
    break;
  case 2:
    pcVar1 = str_10006dd4;
    break;
  case 5:
    pcVar1 = str_10006de1;
    break;
  case 9:
    pcVar1 = str_10006deb;
    break;
  case 0xc:
    pcVar1 = str_10006dff;
    break;
  case 0xd:
    pcVar1 = str_10006e0d;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10006e1f;
    }
    if (param_1 == 0x16) {
      return str_10006e2b;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10006e3c;
  }
  return pcVar1;
}

#undef DAT_10006dd1
#undef str_10006dd4
#undef str_10006de1
#undef str_10006deb
#undef str_10006dff
#undef str_10006e0d
#undef str_10006e1f
#undef str_10006e2b
#undef str_10006e3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2405U)
 */

undefined4 recovered_10003635(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x240cU)
 */

undefined4 recovered_1000363c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10008308
#define DAT_10008308 (*(int *)(((uintptr_t)pf_module_state + 0x70d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2414U)
 */

void recovered_10003644(void)

{
  unsigned char frame[64] = {0};

  DAT_10008308 = DAT_10008308 + 1;
  return;
}

#undef DAT_10008308

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2427U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003657(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int in_ECX;

  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
    uVar1 = CONCAT31((int3)(_DAT_00006808 >> 8),in_ECX + 4U <= _DAT_00006808);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2460U)
 */

void recovered_10003690(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x246dU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


#define unaff_retaddr (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x246fU)
 */

undefined4 recovered_1000369f(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 unaff_EBX = 0;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;

  *param_1 = unaff_EBX;
  param_1[1] = unaff_ESI;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_EBP;
  param_1[4] = &param_1;
  param_1[5] = unaff_retaddr;
  return 0;
}

#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2490U)
 */

void recovered_100036c0(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x24b2U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_10003723
#define DAT_10003723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f3U)))
#undef DAT_10006ec4
#define DAT_10006ec4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c94U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x24b6U)
 */

void recovered_100036e6(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003750;
  local_28 = &DAT_10006ec4;
  local_20 = &DAT_10003723;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_100017c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10003723
#undef DAT_10006ec4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_cc
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2520U)
 */

undefined4 recovered_10003750(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_1000830c
#define DAT_1000830c (*(int *)(((uintptr_t)pf_module_state + 0x70dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2530U)
 */

int recovered_10003760(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000830c;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000830c = param_1;
  iVar1 = recovered_100039f8();
  return iVar1;
}

#undef DAT_1000830c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2552U)
 */

void * recovered_10003782(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_100017e0(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100017c8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x257bU)
 */

void * recovered_100037ab(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10003782(size);
  return pvVar1;
}


#undef DAT_10006ed4
#define DAT_10006ed4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ca4U)))
#undef LAB_10003808
#define LAB_10003808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25d8U)))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2584U)
 */

void recovered_100037b4(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003750;
  local_28 = &DAT_10006ed4;
  local_20 = &LAB_10003808;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_10001808(data);
  recovered_10003aff(&local_44);
  return;
}

#undef DAT_10006ed4
#undef LAB_10003808
#undef local_1c
#undef auStack_18
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10006ee4
#define DAT_10006ee4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cb4U)))
#undef LAB_1000387b
#define LAB_1000387b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x264bU)))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(undefined4 *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x25f7U)
 */

void recovered_10003827(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003750;
  local_28 = &DAT_10006ee4;
  local_20 = &LAB_1000387b;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_10001808(data);
  recovered_10003aff(&local_44);
  return;
}

#undef DAT_10006ee4
#undef LAB_1000387b
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_10006ef4
#define DAT_10006ef4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cc4U)))
#undef LAB_100038ee
#define LAB_100038ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26beU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x266aU)
 */

void recovered_1000389a(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003750;
  local_28 = &DAT_10006ef4;
  local_20 = &LAB_100038ee;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_10001808(param_1);
  recovered_10003aff(&local_44);
  return;
}

#undef DAT_10006ef4
#undef LAB_100038ee
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

#undef DAT_10006f04
#define DAT_10006f04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cd4U)))
#undef LAB_10003961
#define LAB_10003961 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2731U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26ddU)
 */

void recovered_1000390d(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003750;
  local_28 = &DAT_10006f04;
  local_20 = &LAB_10003961;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_10001808(param_1);
  recovered_10003aff(&local_44);
  return;
}

#undef DAT_10006f04
#undef LAB_10003961
#undef auStack_18
#undef local_44
#undef local_40
#undef auStackY_cc
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2750U)
 */

undefined4 recovered_10003980(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2757U)
 */

uint recovered_10003987(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2766U)
 */

void recovered_10003996(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2771U)
 */

void recovered_100039a1(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2776U)
 */

undefined1 * recovered_100039a6(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  bool bVar3;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_100017e0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100036e6();
  }
  puVar2 = puVar1;
  while (bVar3 = size != 0, size = size - 1, bVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27abU)
 */

void recovered_100039db(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10001808((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27c8U)
 */

int recovered_100039f8(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  return in_ECX + 0x1c;
}


#undef DAT_1000830c
#define DAT_1000830c (*(void * *)(((uintptr_t)pf_module_state + 0x70dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27d0U)
 */

void recovered_10003a00(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  void *buffer;

  buffer = DAT_1000830c;
  if (DAT_1000830c != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000830c + 8);
    DAT_1000830c = *(void **)((int)DAT_1000830c + 8);
    *puVar1 = 0;
    if (*(char *)((int)buffer + 0x18) == '\0') {
      if (*(code **)((int)buffer + 4) != (code *)0x0) {
        (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
      }
      recovered_10001808(buffer);
    }
  }
  return;
}

#undef DAT_1000830c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x280eU)
 */

void recovered_10003a3e(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  recovered_10003a6a();
  return;
}


#undef DAT_10008310
#define DAT_10008310 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x70e0U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x283aU)
 */

void recovered_10003a6a(void)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;

  puVar2 = &DAT_10008310;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_10003abb;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_10003edd((undefined2 *)&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  recovered_10003b5f();
LAB_10003abb:
                    /* WARNING: Subroutine does not return */
  recovered_100036e6();
}

#undef DAT_10008310
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000830c
#define DAT_1000830c (*(int *)(((uintptr_t)pf_module_state + 0x70dcU)))
#undef DAT_10008310
#define DAT_10008310 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70e0U)))
#define puStack_8 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2890U)
 */

void recovered_10003ac0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_1000830c;
  if (DAT_1000830c == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100036e6();
  }
  *(undefined1 *)(DAT_1000830c + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  recovered_10003a6a();
  *puStack_8 = DAT_10008310;
  DAT_10008310 = puStack_8;
  return;
}

#undef DAT_1000830c
#undef DAT_10008310
#undef puStack_8

#undef DAT_10008310
#define DAT_10008310 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28baU)
 */

void recovered_10003aea(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_10008310;
  DAT_10008310 = param_1;
  return;
}

#undef DAT_10008310

#undef DAT_10008310
#define DAT_10008310 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x70e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28cfU)
 */

void recovered_10003aff(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10008310;
  if (DAT_10008310 == param_1) {
    puVar2 = &DAT_10008310;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_10008310

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28f8U)
 */

void recovered_10003b28(void)

{
  unsigned char frame[64] = {0};

  recovered_10003a6a();
                    /* WARNING: Subroutine does not return */
  recovered_100036e6();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2906U)
 */

void recovered_10003b36(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100036e6();
}


#undef DAT_10008310
#define DAT_10008310 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2911U)
 */

void recovered_10003b41(void)

{
  unsigned char frame[64] = {0};

  if (DAT_10008310 != (undefined4 *)0x0) {
    DAT_10008310 = (undefined4 *)*DAT_10008310;
  }
  recovered_10003b5f();
  return;
}

#undef DAT_10008310

#undef DAT_10008310
#define DAT_10008310 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x70e0U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x292fU)
 */

void recovered_10003b5f(void)

{
  unsigned char frame[76] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;

  while( true ) {
    puVar1 = DAT_10008310;
    if (DAT_10008310 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_100036e6();
    }
    if (DAT_10008310 == *(undefined4 **)(in_ECX + 0xc)) break;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_10003edd((undefined2 *)&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = in_ECX;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_10003bc7;
    }
    DAT_10008310 = (undefined4 *)*puVar1;
  }
  DAT_10008310[2] = in_ECX;
  puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
LAB_10003bc7:
  puVar1[1] = uVar2;
  recovered_10003690((int)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10003b41();
}

#undef DAT_10008310
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29a2U)
 */

void recovered_10003bd2(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003b41();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29b3U)
 */

undefined4 recovered_10003be3(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29baU)
 */

void recovered_10003bea(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100036e6();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29c5U)
 */

int recovered_10003bf5(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int iVar3;

  iVar3 = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = (int)param_1 + *(int *)(iVar1 + -8);
    bVar2 = recovered_10003c2b(iVar1,param_3,*(undefined4 **)(iVar1 + -4));
    if (!bVar2) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


#undef DAT_100080e4
#define DAT_100080e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eb4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29fbU)
 */

bool recovered_10003c2b(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;

  if (param_2 == (undefined4 *)0x0) {
    return true;
  }
  do {
    puVar5 = param_3;
    if (puVar5 == param_2) {
      return puVar5 != (undefined4 *)0x0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      return false;
    }
    iVar3 = puVar5[1];
    iVar4 = param_2[1];
    if (iVar4 == 0 || iVar3 == 0) {
      if (iVar3 == iVar4) {
        return true;
      }
    }
    else {
      iVar6 = 0;
      do {
        cVar1 = *(char *)(iVar3 + iVar6);
        cVar2 = *(char *)(iVar4 + iVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) {
            return true;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (cVar1 == cVar2);
    }
    param_3 = (undefined4 *)0x0;
    if ((undefined *)*puVar5 == &DAT_100080e4) {
      param_3 = (undefined4 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_100080e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a62U)
 */

void recovered_10003c92(void)

{
  unsigned char frame[64] = {0};

  recovered_100017c8();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a6bU)
 */

undefined4 recovered_10003c9b(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a72U)
 */

bool recovered_10003ca2(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a85U)
 */

bool recovered_10003cb5(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((param_1 - 9U < 0x18) && ((0x80001bU >> (param_1 - 9U & 0x1f) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2aacU)
 */

bool recovered_10003cdc(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2aceU)
 */

bool recovered_10003cfe(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ae3U)
 */

bool recovered_10003d13(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af8U)
 */

byte recovered_10003d28(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b32U)
 */

bool recovered_10003d62(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10006a90
#define DAT_10006a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5860U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a90
#define _DAT_10006a90 (*(float *)(((uintptr_t)pf_module_state + 0x5860U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b47U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003d77(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10001d0a(value);
  if ((double)_DAT_10006a70 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10006a90 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_10006a70
#undef DAT_10006a90
#undef _DAT_10006a70
#undef _DAT_10006a90

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define local_14 (*(uint *)(frame + 24))
#define uStack_1c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b8fU)
 */

ulonglong recovered_10003dbf(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[76] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  local_14 = param_3;
  for (pbVar7 = param_1; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + 1) {
    uVar3 = (uint)*pbVar7;
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_10003df7;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_10003df7:
  if (((char)uVar3 == '-') || (uVar3 == 0x2b)) {
    bVar8 = (char)uVar3 == '-';
    pbVar7 = pbVar7 + 1;
  }
  else {
    bVar8 = false;
  }
  if (param_3 == 0x10) {
    local_14 = 0x10;
    if ((*pbVar7 == 0x30) && ((pbVar7[1] | 0x20) == 0x78)) {
      pbVar7 = pbVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar7 == 0x30) {
      if ((pbVar7[1] | 0x20) == 0x78) {
        pbVar7 = pbVar7 + 2;
        uStack_1c = 0x10;
      }
      else {
        uStack_1c = 8;
      }
    }
    else {
      uStack_1c = 10;
    }
    local_14 = uStack_1c;
  }
  iVar4 = 0;
  uVar1 = 0;
  while( true ) {
    iVar6 = (int)(uVar1 >> 0x20);
    uVar5 = (uint)pbVar7[iVar4];
    uVar3 = uVar5 - 0x30;
    if (9 < uVar3) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar3 = uVar5 - 0x57;
      }
      else if (uVar5 - 0x41 < 0x1a) {
        uVar3 = uVar5 - 0x37;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    if (((int)uVar3 < 0) || ((int)local_14 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_14 + CONCAT44(iVar6 * local_14,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (iVar4 != 0) {
      param_1 = pbVar7 + iVar4;
    }
    *param_2 = param_1;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef DAT_00000000
#undef local_14
#undef uStack_1c

#define in_stack_00000004 (*(byte * *)(frame + 36))
#define in_stack_00000008 (*(undefined4 * *)(frame + 40))
#define in_stack_0000000c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2ca4U)
 */

void recovered_10003ed4(void)

{
  unsigned char frame[64] = {0};


  recovered_10003dbf(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_10006bc4
#define DAT_10006bc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5994U)))
#define local_18 (*(byte * *)(frame + 16))
#define local_14 (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cadU)
 */

undefined4 recovered_10003edd(undefined2 *param_1)

{
  unsigned char frame[72] = {0};

  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int in_ECX;
  undefined4 *in_EDX;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;

  pbVar5 = *(byte **)(in_ECX + 0x1c);
  if (pbVar5 != (byte *)0x0) {
    local_14 = pbVar5 + 1;
    bVar4 = *pbVar5;
    if (bVar4 != 0xff) {
      recovered_1000407b(CONCAT31((int3)((uint)pbVar5 >> 8),bVar4),&local_14,(uint)bVar4);
    }
    pbVar5 = local_14 + 1;
    uVar7 = (ushort)*local_14;
    if (uVar7 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar5;
      uVar1 = recovered_1000412f();
      local_18 = local_14 + uVar1;
      pbVar5 = local_14;
    }
    local_14 = pbVar5 + 1;
    uVar1 = recovered_1000412f();
    iVar8 = *(int *)(in_ECX + 4);
    if (0 < iVar8) {
      pbVar5 = local_14 + uVar1;
      while (local_14 < pbVar5) {
        uVar1 = recovered_1000412f();
        uVar2 = recovered_1000412f();
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          *param_1 = 1;
          *(undefined1 *)(param_1 + 1) = 0;
          *(uint *)(param_1 + 2) = uVar1;
          *(undefined4 *)(param_1 + 4) = 0;
          if (uVar2 == 0) {
            *(undefined1 *)((int)param_1 + 1) = 1;
            return 0;
          }
          uVar1 = uVar7 & 0xf;
          bVar4 = (byte)uVar1;
          iVar8 = 0x40;
          do {
            bVar9 = iVar8 == 0;
            iVar8 = iVar8 + -1;
            if (bVar9) {
              return 0;
            }
            uVar2 = recovered_1000417b();
            pbVar5 = (byte *)recovered_1000417b();
            if (uVar2 == 0) {
              *(undefined1 *)((int)param_1 + 1) = 1;
            }
            else if (0 < (int)uVar2) {
              pbVar3 = pbVar5;
              pbVar6 = (byte *)0x0;
              if (((~(byte)(0x1c1d >> bVar4) | ~(bVar4 < 0xd && local_18 != (byte *)0x0)) & 1) == 0)
              {
                local_14 = local_18 + *(int *)(&DAT_10006bc4 + uVar1 * 4) * uVar2;
                pbVar3 = recovered_1000407b(local_14,&local_14,(uint)uVar7);
                pbVar6 = pbVar3;
              }
              bVar9 = recovered_10003c2b(pbVar3,(undefined4 *)pbVar6,in_EDX);
              if (bVar9) {
                *(undefined1 *)(param_1 + 1) = 1;
                *(uint *)(param_1 + 4) = uVar2;
                return CONCAT31((int3)((uint)param_1 >> 8),1);
              }
            }
            if (pbVar5 == (byte *)0x0) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

#undef DAT_10006bc4
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e4bU)
 */

byte * recovered_1000407b(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;

  pbVar4 = (byte *)0x0;
  if (param_3 == 0xff) {
    return (byte *)0x0;
  }
  uVar2 = param_3 & 0xf;
  if (0xc < uVar2) {
    return (byte *)0x0;
  }
  pbVar1 = (byte *)*param_2;
  switch((uintptr_t)(uVar2)) {
  case 0:
  case 3:
  case 0xb:
    pbVar4 = (byte *)recovered_1000415a(uVar2,4,pbVar1);
    pbVar3 = pbVar1 + 4;
    break;
  case 1:
    pbVar4 = (byte *)recovered_1000412f();
    goto LAB_10004108;
  case 2:
    pbVar4 = (byte *)recovered_1000415a(uVar2,2,pbVar1);
    goto LAB_10004100;
  case 4:
  case 0xc:
    pbVar4 = (byte *)recovered_1000415a(uVar2,8,pbVar1);
    pbVar3 = pbVar1 + 8;
    break;
  default:
    goto switchD_100040a9_caseD_5;
  case 9:
    pbVar4 = (byte *)recovered_1000417b();
    goto LAB_10004108;
  case 10:
    uVar2 = recovered_1000415a(uVar2,2,pbVar1);
    pbVar4 = (byte *)((int)(short)uVar2 & 0xffff0000U | uVar2);
LAB_10004100:
    pbVar3 = pbVar1 + 2;
  }
  *param_2 = pbVar3;
LAB_10004108:
  if ((param_3 & 0x70) != 0) {
    if ((param_3 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar4 = pbVar4 + (int)pbVar1;
  }
  if (((char)param_3 < '\0') && (pbVar4 != (byte *)0x0)) {
    pbVar4 = *(byte **)pbVar4;
  }
switchD_100040a9_caseD_5:
  return pbVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2effU)
 */

uint recovered_1000412f(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *in_ECX;

  bVar4 = 0;
  uVar3 = 0;
  pbVar2 = (byte *)*in_ECX;
  do {
    *in_ECX = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (bVar4 & 0x1f);
    bVar4 = bVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f2aU)
 */

uint recovered_1000415a(undefined4 param_1,int param_2,byte *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  bool bVar3;

  bVar2 = 0;
  uVar1 = 0;
  while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
    uVar1 = uVar1 | (uint)*param_3 << (bVar2 & 0x1f);
    bVar2 = bVar2 + 8;
    param_3 = param_3 + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f4bU)
 */

uint recovered_1000417b(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar3 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*in_ECX;
  do {
    *in_ECX = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (bVar1 & 0x7f) << ((byte)uVar4 & 0x1f);
    uVar4 = uVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  uVar6 = 0;
  if (0x3f < bVar1) {
    uVar6 = -1 << ((byte)uVar4 & 0x1f);
  }
  uVar5 = 0;
  if (uVar4 < 0x20) {
    uVar5 = uVar6;
  }
  return uVar3 | uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f94U)
 */

void recovered_100041c4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f9aU)
 */

void recovered_100041ca(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f9fU)
 */

void recovered_100041cf(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fafU)
 */

void recovered_100041df(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


#undef DAT_10006f14
#define DAT_10006f14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ce4U)))
#undef LAB_100042db
#define LAB_100042db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30abU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define auStack_12 (*(undefined1 (*)[2])(frame + 234))
#define local_5c (*(undefined4 *)(frame + 160))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define local_40 (*(undefined * *)(frame + 188))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_26 (*(ushort *)(frame + 214))
#define local_24 (*(void * *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(int *)(frame + 228))
#define local_14 (*(short *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fbfU)
 */

undefined4 * recovered_100041ef(int param_1)

{
  unsigned char frame[284] = {0};

  undefined4 uVar1;
  undefined4 *puVar2;

  local_3c = auStack_12 + 0xe;
  local_34 = auStackY_ec + 0x80;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_44 = PTR_recovered_10003750_1000803c;
  local_40 = &DAT_10006f14;
  local_38 = &LAB_100042db;
  recovered_10003aea(&local_5c);
  if (param_1 != 0) {
    local_26 = 2;
    local_58 = 1;
    uVar1 = recovered_10004312(param_1,(int)&local_24,&local_26);
    if ((((byte)uVar1 & local_14 == 2) == 1) && (local_18 != 0)) {
      local_58 = 2;
      puVar2 = recovered_10003782(0x18);
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      recovered_100043f8(puVar2,&local_24);
      puVar2[5] = 0;
      goto LAB_100042ba;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_100042ba:
  local_20 = 0;
  recovered_100037b4(local_24);
  recovered_10003aff(&local_5c);
  return puVar2;
}

#undef DAT_10006f14
#undef LAB_100042db
#undef PTR_recovered_10003750_1000803c
#undef auStackY_ec
#undef auStack_12
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_26
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10006f1c
#define DAT_10006f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cecU)))
#undef LAB_100043bb
#define LAB_100043bb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x318bU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_1c (*(void * *)(frame + 224))
#define local_18 (*(uint *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30e2U)
 */

undefined4 recovered_10004312(int param_1,int param_2,ushort *param_3)

{
  unsigned char frame[284] = {0};

  undefined4 uVar1;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_3c = PTR_recovered_10003750_1000803c;
  local_38 = &DAT_10006f1c;
  local_30 = &LAB_100043bb;
  local_50 = 1;
  recovered_10003aea(&local_54);
  uVar1 = recovered_100050f1(param_1,(int *)&local_1c);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
  }
  else {
    local_50 = 2;
    uVar1 = recovered_10005290(local_1c,local_18,param_2,param_3);
  }
  local_18 = 0;
  recovered_100037b4(local_1c);
  recovered_10003aff(&local_54);
  return uVar1;
}

#undef DAT_10006f1c
#undef LAB_100043bb
#undef PTR_recovered_10003750_1000803c
#undef auStackY_ec
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31c8U)
 */

undefined4 * recovered_100043f8(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10004d42(param_1,param_2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}


#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10006a7c
#define DAT_10006a7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x584cU)))
#undef DAT_10006ab8
#define DAT_10006ab8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5888U)))
#undef DAT_10006c58
#define DAT_10006c58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a28U)))
#undef _DAT_10006a70
#define _DAT_10006a70 (*(float *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef _DAT_10006a7c
#define _DAT_10006a7c (*(float *)(((uintptr_t)pf_module_state + 0x584cU)))
#undef _DAT_10006ab8
#define _DAT_10006ab8 (*(double *)(((uintptr_t)pf_module_state + 0x5888U)))
#undef _DAT_10006c58
#define _DAT_10006c58 (*(float *)(((uintptr_t)pf_module_state + 0x5a28U)))
#define local_24 (*(void * *)(frame + 48))
#define local_20 (*(undefined4 *)(frame + 52))
#define local_1c (*(undefined4 *)(frame + 56))
#define local_18 (*(int *)(frame + 60))
#define local_14 (*(uint *)(frame + 64))
#define local_44 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31f4U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10004424(uint param_1,uint param_2,int param_3,int param_4)

{
  unsigned char frame[116] = {0};

  uint uVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;

  if ((int)(param_2 | param_1) < 0) {
    return (int *)0x0;
  }
  if (param_3 == 0) {
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
  }
  else {
    recovered_10005f2a((int *)&local_24,param_3);
  }
  local_18 = 0;
  cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c73U));
  if (cVar4 == '\0') {
    cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c7aU));
    if (cVar4 != '\0') {
      local_18 = 1;
      goto LAB_100044ae;
    }
    cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c7fU));
    if (cVar4 != '\0') {
      local_18 = 2;
      goto LAB_100044ae;
    }
    local_18 = 1;
    bVar3 = false;
  }
  else {
LAB_100044ae:
    bVar3 = true;
  }
  recovered_100037b4(local_24);
  if (!bVar3) {
    return (int *)0x0;
  }
  if (param_4 == 0) {
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
  }
  else {
    recovered_10005f2a((int *)&local_24,param_4);
  }
  local_14 = 0;
  cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c83U));
  if (cVar4 == '\0') {
    cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c88U));
    if (cVar4 == '\0') {
      local_14 = 2;
      cVar4 = recovered_10005edd(&local_24,((uintptr_t)pf_module_state+0x5c8eU));
      if (cVar4 == '\0') {
        bVar3 = false;
        goto LAB_10004545;
      }
    }
    else {
      local_14 = 1;
    }
  }
  bVar3 = true;
LAB_10004545:
  recovered_100037b4(local_24);
  if (bVar3) {
    piVar5 = recovered_10003782(0x18);
    piVar5[4] = 0;
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[5] = 0;
    piVar5[3] = 0xac44;
    *(undefined2 *)(piVar5 + 4) = 2;
    uVar8 = 0;
    uVar6 = recovered_10004699(0xac44,0,param_2,0xac44);
    local_24 = (void *)((uint)local_24 & 0xffff0000);
    recovered_10004706(piVar5,uVar6 * 2,(undefined2 *)&local_24);
    if (0 < (int)param_1) {
      uVar1 = local_14 - 1;
      local_44 = -1.0;
      dVar2 = (double)_DAT_10006a70;
      for (; uVar6 != uVar8; uVar8 = uVar8 + 1) {
        dVar10 = ((double)(int)param_1 * (double)uVar8) / (double)(uint)piVar5[3];
        dVar9 = recovered_10001d0a(dVar10);
        dVar9 = dVar10 - dVar9;
        if (local_18 == 2) {
          dVar10 = dVar9 + dVar9 + -1.0;
        }
        else if (local_18 == 1) {
          dVar10 = recovered_10001edf(dVar10 * _DAT_10006ab8);
        }
        else {
          dVar10 = 1.0;
          if (dVar2 <= dVar9) {
            dVar10 = local_44;
          }
        }
        iVar7 = recovered_10004716(dVar10 * (double)_DAT_10006a7c * (double)_DAT_10006c58);
        if ((local_14 & 1) == 0) {
          *(short *)(*piVar5 + uVar8 * 4) = (short)iVar7;
        }
        if (uVar1 < 2) {
          *(short *)(*piVar5 + 2 + uVar8 * 4) = (short)iVar7;
        }
      }
    }
    piVar5[5] = 0;
    return piVar5;
  }
  return (int *)0x0;
}

#undef DAT_10006a70
#undef DAT_10006a7c
#undef DAT_10006ab8
#undef DAT_10006c58
#undef _DAT_10006a70
#undef _DAT_10006a7c
#undef _DAT_10006ab8
#undef _DAT_10006c58
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_44

#undef DAT_10006c50
#define DAT_10006c50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef DAT_10006c5c
#define DAT_10006c5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a2cU)))
#undef _DAT_10006c50
#define _DAT_10006c50 (*(double *)(((uintptr_t)pf_module_state + 0x5a20U)))
#undef _DAT_10006c5c
#define _DAT_10006c5c (*(float *)(((uintptr_t)pf_module_state + 0x5a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3469U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004699(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  double dVar1;
  undefined4 uVar2;
  longlong lVar3;

  uVar2 = 0;
  if (param_4 != 0 && (int)(uint)(param_3 == 0) <= param_2) {
    dVar1 = ((double)param_4 * pf_bits_double(CONCAT44(param_2,param_3))) / (double)_DAT_10006c5c;
    uVar2 = 0x7fffffff;
    if (dVar1 < _DAT_10006c50) {
      lVar3 = recovered_10001e9b(dVar1);
      uVar2 = (undefined4)lVar3;
    }
  }
  return uVar2;
}

#undef DAT_10006c50
#undef DAT_10006c5c
#undef _DAT_10006c50
#undef _DAT_10006c5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34d6U)
 */

void recovered_10004706(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100067ba(param_1,param_2,param_3);
  return;
}


#undef DAT_10006c58
#define DAT_10006c58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a28U)))
#undef DAT_10006c60
#define DAT_10006c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a30U)))
#undef _DAT_10006c58
#define _DAT_10006c58 (*(float *)(((uintptr_t)pf_module_state + 0x5a28U)))
#undef _DAT_10006c60
#define _DAT_10006c60 (*(float *)(((uintptr_t)pf_module_state + 0x5a30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e6U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10004716(double param_1)

{
  unsigned char frame[64] = {0};

  short extraout_AX;
  short sVar1;

  sVar1 = -0x8000;
  if (((double)_DAT_10006c60 < param_1) && (sVar1 = 0x7fff, param_1 < (double)_DAT_10006c58)) {
    recovered_10002193(param_1);
    sVar1 = extraout_AX;
  }
  return (int)sVar1;
}

#undef DAT_10006c58
#undef DAT_10006c60
#undef _DAT_10006c58
#undef _DAT_10006c60

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x352bU)
 */

undefined4 recovered_1000475b(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;
  bool bVar2;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    param_2[3] = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    if ((param_1 != (undefined4 *)0x0) && (bVar2 = recovered_100047ba((int)param_1), !bVar2)) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = 0;
      param_2[3] = param_1[3];
      uVar1 = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(param_2 + 4) = uVar1;
      return CONCAT31((uint3)(byte)((ushort)uVar1 >> 8),1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x358aU)
 */

bool recovered_100047ba(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = true;
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    bVar1 = *(short *)(param_1 + 0x10) == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35a8U)
 */

undefined1 recovered_100047d8(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_2 == 0 || param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = recovered_10004808(param_2,param_1);
  return uVar1;
}


#undef DAT_10006f24
#define DAT_10006f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cf4U)))
#undef LAB_10004905
#define LAB_10004905 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36d5U)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define local_6c (*(undefined4 (*)[2])(frame + 160))
#define local_64 (*(int *)(frame + 168))
#define local_60 (*(undefined1 *)(frame + 172))
#define local_54 (*(undefined4 *)(frame + 184))
#define local_50 (*(undefined4 *)(frame + 188))
#define local_3c (*(undefined * *)(frame + 208))
#define local_38 (*(undefined * *)(frame + 212))
#define local_34 (*(undefined1 * *)(frame + 216))
#define local_30 (*(undefined1 * *)(frame + 220))
#define local_2c (*(undefined1 * *)(frame + 224))
#define local_20 (*(void * *)(frame + 236))
#define local_1c (*(int *)(frame + 240))
#define local_18 (*(undefined4 *)(frame + 244))
#define local_14 (*(int * *)(frame + 248))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x35d8U)
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 recovered_10004808(int param_1,undefined4 *param_2)

{
  unsigned char frame[300] = {0};

  undefined4 uVar1;
  undefined1 uVar2;

  local_34 = (undefined1 *)(local_6c + 0x1a);
  local_2c = auStackY_fc + 0x80;
  local_3c = PTR_recovered_10003750_1000803c;
  local_38 = &DAT_10006f24;
  local_30 = &LAB_10004905;
  recovered_10003aea(&local_54);
  if (param_1 == 0) {
    uVar2 = 0;
    goto LAB_100048f3;
  }
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_50 = 1;
  uVar1 = recovered_1000613c(param_2,&local_20);
  if ((char)uVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_50 = 2;
    recovered_10006642(local_6c,(char *)param_1,4);
    local_14 = &local_64;
    if (local_64 == 0) {
LAB_100048d4:
      uVar2 = 0;
    }
    else {
      local_50 = 3;
      recovered_1000674c(local_14,(int)local_20,local_1c,0);
      if (local_64 == 0) goto LAB_100048d4;
      uVar2 = local_60;
    }
    recovered_1000593a(local_14);
  }
  local_1c = 0;
  recovered_100037b4(local_20);
LAB_100048f3:
  recovered_10003aff(&local_54);
  return uVar2;
}

#undef DAT_10006f24
#undef LAB_10004905
#undef PTR_recovered_10003750_1000803c
#undef local_6c
#undef local_64
#undef local_60
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_fc

#define local_4c (*(uint *)(frame + 16))
#define local_2c (*(double *)(frame + 48))
#define local_1c (*(uint *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x372cU)
 */

undefined4 recovered_1000495c(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[124] = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longdouble lVar15;
  double dVar16;

  if ((((param_4 < 0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) ||
       ((short)param_1[4] != 2)) || ((short)param_2[4] != 2)) ||
     ((piVar4 = (int *)param_1[3], piVar4 == (int *)0x0 || (param_2[3] == 0)))) {
    uVar7 = 0;
  }
  else {
    uVar5 = param_2[1];
    if (1 < uVar5 && 1 < (uint)param_1[1]) {
      piVar9 = (int *)((uint)param_1[1] >> 1);
      piVar4 = (int *)recovered_10004699(piVar4,param_4,param_3,(uint)piVar4);
      uVar10 = (int)piVar9 - (int)piVar4;
      if (piVar4 <= piVar9 && uVar10 != 0) {
        uVar2 = param_2[3];
        uVar3 = param_1[3];
        dVar16 = recovered_10001d52((double)(uVar5 >> 1) / ((double)uVar2 / (double)uVar3));
        local_4c = (uint)(longlong)ROUND(dVar16);
        local_1c = local_4c;
        if (uVar10 <= local_4c) {
          local_1c = uVar10;
        }
        iVar12 = (int)piVar4 << 2;
        local_2c = 0.0;
        for (uVar5 = 0; uVar5 < local_1c; uVar5 = uVar5 + 1) {
          uVar8 = 0;
          iVar13 = 2;
          iVar11 = iVar12;
          while (bVar14 = iVar13 != 0, iVar13 = iVar13 + -1, bVar14) {
            uVar1 = *(ushort *)(*param_1 + iVar11);
            lVar15 = recovered_10004acd((uint)uVar1,uVar8,param_2,
                                        local_2c * ((double)uVar2 / (double)uVar3));
            iVar6 = recovered_10004716((double)(lVar15 + (longdouble)(short)uVar1));
            *(short *)(*param_1 + iVar11) = (short)iVar6;
            uVar8 = uVar8 + 1;
            iVar11 = iVar11 + 2;
          }
          local_2c = local_2c + 1.0;
          iVar12 = iVar12 + 4;
        }
        param_1[5] = 0;
        piVar4 = param_1;
      }
    }
    uVar7 = CONCAT31((int3)((uint)piVar4 >> 8),1);
  }
  return uVar7;
}

#undef local_4c
#undef local_2c
#undef local_1c

#define local_34 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x389dU)
 */

longdouble recovered_10004acd(undefined4 param_1,ushort param_2,int *param_3,double param_4)

{
  unsigned char frame[100] = {0};

  uint uVar1;
  uint uVar2;
  longdouble lVar3;
  double dVar4;

  uVar2 = (uint)*(ushort *)(param_3 + 4);
  if ((((uVar2 != 0) && (uVar1 = param_3[1], 0.0 <= param_4 && uVar1 != 0)) &&
      (param_2 < *(ushort *)(param_3 + 4))) && (param_4 < (double)(uVar1 / uVar2) && uVar2 <= uVar1)
     ) {
    dVar4 = recovered_10001d0a(param_4);
    local_34 = (int)(longlong)ROUND(dVar4);
    uVar2 = uVar1 / uVar2 - 1;
    if (local_34 + 1U <= uVar2) {
      uVar2 = local_34 + 1U;
    }
    lVar3 = (longdouble)
            *(short *)(*param_3 + local_34 * (uint)*(ushort *)(param_3 + 4) * 2 + (uint)param_2 * 2)
    ;
    return lVar3 + ((longdouble)
                    *(short *)(*param_3 + uVar2 * *(ushort *)(param_3 + 4) * 2 + (uint)param_2 * 2)
                   - lVar3) *
                   ((longdouble)param_4 - (longdouble)((longlong)ROUND(dVar4) & 0xffffffff));
  }
  return (longdouble)0;
}

#undef local_34

#undef DAT_10006f30
#define DAT_10006f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d00U)))
#undef LAB_10004ced
#define LAB_10004ced (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3abdU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_1c (*(void * *)(frame + 224))
#define local_18 (*(undefined4 *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3982U)
 */

undefined4 recovered_10004bb2(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[284] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_3c = PTR_recovered_10003750_1000803c;
  local_38 = &DAT_10006f30;
  local_30 = &LAB_10004ced;
  recovered_10003aea(&local_54);
  uVar5 = 0;
  if ((((SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2))) ==
        (int)((param_5 - param_3) - (uint)(param_4 < param_2)) < 0) && (param_1 != (int *)0x0)) &&
     (-1 < (int)(param_5 | param_3))) {
    if ((*(ushort *)(param_1 + 4) == 0) || (param_1[3] == 0)) {
      uVar5 = 0;
    }
    else {
      uVar1 = (uint)param_1[1] / (uint)*(ushort *)(param_1 + 4);
      local_50 = 0xffffffff;
      uVar2 = recovered_10004699(0xffffffff,param_3,param_2,param_1[3]);
      local_50 = 0xffffffff;
      uVar3 = recovered_10004699(param_1[3],param_5,param_4,param_1[3]);
      uVar4 = uVar1;
      if (uVar2 <= uVar1) {
        uVar4 = uVar2;
      }
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      local_1c = (void *)0x0;
      local_18 = 0;
      local_14 = 0;
      iVar6 = uVar1 * *(ushort *)(param_1 + 4);
      local_50 = 1;
      recovered_10004d20((int *)&local_1c,
                         (undefined2 *)(*param_1 + uVar4 * *(ushort *)(param_1 + 4) * 2),
                         (undefined2 *)(*param_1 + iVar6 * 2));
      recovered_10004d42(param_1,&local_1c);
      param_1[5] = 0;
      local_18 = 0;
      recovered_100037b4(local_1c);
      uVar5 = CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
  }
  recovered_10003aff(&local_54);
  return uVar5;
}

#undef DAT_10006f30
#undef LAB_10004ced
#undef PTR_recovered_10003750_1000803c
#undef auStackY_ec
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3af0U)
 */

void recovered_10004d20(int *param_1,undefined2 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006808(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b12U)
 */

undefined4 * recovered_10004d42(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100037b4((void *)*param_1);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}


#define local_2c (*(void * *)(frame + 16))
#define local_28 (*(undefined4 *)(frame + 20))
#define local_18 (*(double *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3b56U)
 */

undefined4 recovered_10004d86(int param_1,double param_2)

{
  unsigned char frame[92] = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = param_2;
    bVar1 = recovered_10003d62(SUB84(param_2,0),(uint)((ulonglong)param_2 >> 0x20));
    uVar3 = 0;
    if ((0.0 < local_18) && (CONCAT31(extraout_var,bVar1) != 0)) {
      uVar3 = 1;
      if (((local_18 != 1.0) || (NAN(local_18))) &&
         ((uVar2 = (uint)*(ushort *)(param_1 + 0x10), uVar2 != 0 &&
          (uVar2 <= *(uint *)(param_1 + 4))))) {
        uVar2 = *(uint *)(param_1 + 4) / uVar2;
        recovered_10004e25(uVar2,param_1,(int *)&local_2c,uVar2,(int)((ulonglong)param_2 >> 0x20),
                           local_18);
        recovered_100043f8((undefined4 *)param_1,&local_2c);
        local_28 = 0;
        recovered_100037b4(local_2c);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  return uVar3;
}

#undef local_2c
#undef local_28
#undef local_18

#undef DAT_10006f38
#define DAT_10006f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d08U)))
#undef LAB_10004f89
#define LAB_10004f89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d59U)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define uStack_30 (*(undefined4 *)(frame + 236))
#define local_7c (*(undefined4 *)(frame + 160))
#define local_78 (*(undefined4 *)(frame + 164))
#define local_64 (*(undefined * *)(frame + 184))
#define local_60 (*(undefined * *)(frame + 188))
#define local_5c (*(undefined1 * *)(frame + 192))
#define local_58 (*(undefined1 * *)(frame + 196))
#define local_54 (*(undefined1 * *)(frame + 200))
#define local_44 (*(double *)(frame + 216))
#define local_3c (*(double *)(frame + 224))
#define local_34 (*(uint *)(frame + 232))
#define local_2a (*(undefined2 *)(frame + 242))
#define local_28 (*(uint *)(frame + 244))
#define local_24 (*(uint *)(frame + 248))
#define local_20 (*(int * *)(frame + 252))
#define local_1c (*(int *)(frame + 256))
#define local_18 (*(int * *)(frame + 260))
#define local_14 (*(int * *)(frame + 264))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3bf5U)
 */

int * recovered_10004e25(undefined4 param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,
                  double param_6)

{
  unsigned char frame[316] = {0};

  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longdouble lVar5;

  local_5c = (undefined1 *)((int)(uintptr_t)(frame + 284) + -4);
  local_54 = auStackY_10c + 0x80;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = *(int *)(param_2 + 0xc);
  uVar1 = *(ushort *)(param_2 + 0x10);
  *(ushort *)(param_3 + 4) = uVar1;
  local_2a = 0;
  local_64 = PTR_recovered_10003750_1000803c;
  local_3c = param_6;
  local_60 = &DAT_10006f38;
  local_58 = &LAB_10004f89;
  local_78 = 1;
  local_20 = param_3;
  local_18 = (int *)param_2;
  local_14 = param_3;
  recovered_10003aea(&local_7c);
  recovered_10004706(param_3,uVar1 * param_4,&local_2a);
  if ((((0.0 < local_3c) && ((short)local_18[4] != 0)) && (local_18[3] != 0)) && (local_18[1] != 0))
  {
    local_1c = 0;
    uVar2 = 0;
    while (uVar2 != param_4) {
      uStack_30 = 0;
      local_44 = local_3c * (double)uVar2;
      uVar4 = 0;
      local_34 = uVar2;
      local_24 = uVar2;
      while (uVar4 < *(ushort *)(local_14 + 4)) {
        local_78 = 2;
        local_28 = uVar4;
        lVar5 = recovered_10004acd((uint)*(ushort *)(local_14 + 4),(ushort)uVar4,local_18,local_44);
        local_78 = 3;
        iVar3 = recovered_10004716((double)lVar5);
        *(short *)((uint)*(ushort *)(local_14 + 4) * local_1c + *local_14 + local_28 * 2) =
             (short)iVar3;
        uVar4 = local_28 + 1;
      }
      local_1c = local_1c + 2;
      uVar2 = local_24 + 1;
    }
  }
  recovered_10003aff(&local_7c);
  return local_20;
}

#undef DAT_10006f38
#undef LAB_10004f89
#undef PTR_recovered_10003750_1000803c
#undef uStack_30
#undef local_7c
#undef local_78
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_44
#undef local_3c
#undef local_34
#undef local_2a
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_10c

#define uStack_18 (*(undefined4 *)(frame + 48))
#define local_38 (*(void * *)(frame + 16))
#define local_34 (*(undefined4 *)(frame + 20))
#define local_24 (*(double *)(frame + 36))
#define local_1c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3d8eU)
 */

undefined4 recovered_10004fbe(int param_1,double param_2)

{
  unsigned char frame[104] = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar7;
  double dVar6;

  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    local_24 = param_2;
    bVar1 = recovered_10003d62(SUB84(param_2,0),(uint)((ulonglong)param_2 >> 0x20));
    uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
    uVar4 = 0;
    if ((0.0 < local_24) && (CONCAT31(extraout_var,bVar1) != 0)) {
      uVar4 = 1;
      if (((local_24 != 1.0) || (NAN(local_24))) &&
         ((local_1c = (uint)*(ushort *)(param_1 + 0x10), local_1c != 0 &&
          (local_1c <= *(uint *)(param_1 + 4))))) {
        local_1c = *(uint *)(param_1 + 4) / local_1c;
        uStack_18 = 0;
        dVar6 = (double)local_1c / local_24;
        uVar2 = CONCAT22((short)(local_1c >> 0x10),
                         (ushort)(0.0 < dVar6) << 8 | (ushort)NAN(dVar6) << 10 |
                         (ushort)(dVar6 == 0.0) << 0xe);
        uVar3 = 0;
        if (0.0 < dVar6) {
          lVar5 = recovered_10001e9b(dVar6);
          uVar7 = (undefined4)(pf_double_bits(dVar6) >> 0x20);
          uVar2 = (uint)lVar5;
          uVar3 = uVar2;
        }
        recovered_10004e25(uVar2,param_1,(int *)&local_38,uVar3,uVar7,local_24);
        recovered_100043f8((undefined4 *)param_1,&local_38);
        local_34 = 0;
        recovered_100037b4(local_38);
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
  }
  return uVar4;
}

#undef uStack_18
#undef local_38
#undef local_34
#undef local_24
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e68U)
 */

undefined4 recovered_10005098(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e6fU)
 */

undefined8 recovered_1000509f(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e78U)
 */

undefined8 recovered_100050a8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e81U)
 */

void recovered_100050b1(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  param_1[5] = 0;
  recovered_1000679e(param_1);
  recovered_100037b4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ea8U)
 */

void recovered_100050d8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eaeU)
 */

void recovered_100050de(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100037b4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eb8U)
 */

void recovered_100050e8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100037b4(param_1);
  return;
}


#undef DAT_10006f44
#define DAT_10006f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d14U)))
#undef LAB_10005246
#define LAB_10005246 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4016U)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
#define local_6c (*(undefined4 (*)[2])(frame + 160))
#define local_64 (*(int *)(frame + 168))
#define local_60 (*(undefined1 *)(frame + 172))
#define local_54 (*(undefined4 *)(frame + 184))
#define local_50 (*(undefined4 *)(frame + 188))
#define local_3c (*(undefined * *)(frame + 208))
#define local_38 (*(undefined * *)(frame + 212))
#define local_34 (*(undefined1 * *)(frame + 216))
#define local_30 (*(undefined1 * *)(frame + 220))
#define local_2c (*(undefined1 * *)(frame + 224))
#define local_1c (*(int *)(frame + 240))
#define local_18 (*(uint *)(frame + 244))
#define local_14 (*(int * *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ec1U)
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 recovered_100050f1(int param_1,int *param_2)

{
  unsigned char frame[300] = {0};

  uint extraout_EAX = 0;
  int extraout_EDX = 0;
  bool bVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar1;

  local_34 = (undefined1 *)(local_6c + 0x1a);
  local_2c = auStackY_fc + 0x80;
  local_3c = PTR_recovered_10003750_1000803c;
  local_38 = &DAT_10006f44;
  local_30 = &LAB_10005246;
  recovered_10003aea(&local_54);
  bVar2 = param_2 == (int *)0x0 || param_1 == 0;
  if (bVar2) {
    uVar1 = 0;
    goto LAB_10005234;
  }
  local_50 = 0xffffffff;
  recovered_10005850(local_6c,(char *)param_1,4);
  local_14 = &local_64;
  if (local_64 == 0) {
    uVar1 = 0;
  }
  else {
    local_50 = 1;
    recovered_10005ad8(local_14,0,0,2);
    local_50 = 2;
    recovered_10005b26(local_14);
    if ((int)(uint)(extraout_EAX == 0) <= extraout_EDX) {
      local_50 = 3;
      local_1c = extraout_EDX;
      local_18 = extraout_EAX;
      recovered_10005ad8(local_14,0,0,0);
      local_50 = 4;
      recovered_100057f8(param_2,local_18);
      local_50 = 5;
      recovered_10005bb6(local_14,*param_2,local_18,local_1c);
      if (local_64 != 0) {
        uVar1 = CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                         CONCAT11(bVar2,param_1 == 0)) >> 8),local_60);
        goto LAB_10005229;
      }
    }
    uVar1 = 0;
  }
LAB_10005229:
  recovered_1000593a(local_14);
LAB_10005234:
  recovered_10003aff(&local_54);
  return uVar1;
}

#undef DAT_10006f44
#undef LAB_10005246
#undef PTR_recovered_10003750_1000803c
#undef auStackY_fc
#undef local_6c
#undef local_64
#undef local_60
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10006e8f
#define DAT_10006e8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c5fU)))
#undef DAT_10006e94
#define DAT_10006e94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c64U)))
#undef DAT_10006e99
#define DAT_10006e99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c69U)))
#undef DAT_10006e9e
#define DAT_10006e9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c6eU)))
#undef DAT_10006f54
#define DAT_10006f54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d24U)))
#undef LAB_1000578b
#define LAB_1000578b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x455bU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define local_ac (*(void * *)(frame + 176))
#define local_a8 (*(undefined4 *)(frame + 180))
#define local_a4 (*(undefined4 *)(frame + 184))
#define local_a0 (*(int *)(frame + 188))
#define local_9c (*(short *)(frame + 192))
#define local_98 (*(uint *)(frame + 196))
#define auStackY_14c (*(undefined1 (*)[128])(frame + 16))
#define local_94 (*(uint *)(frame + 200))
#define local_90 (*(uint *)(frame + 204))
#define local_8c (*(uint *)(frame + 208))
#define local_88 (*(int *)(frame + 212))
#define local_84 (*(undefined4 *)(frame + 216))
#define local_80 (*(undefined4 *)(frame + 220))
#define local_6c (*(undefined * *)(frame + 240))
#define local_68 (*(undefined * *)(frame + 244))
#define local_64 (*(undefined1 * *)(frame + 248))
#define local_60 (*(undefined1 * *)(frame + 252))
#define local_5c (*(undefined1 * *)(frame + 256))
#define local_50 (*(int *)(frame + 268))
#define local_4c (*(uint *)(frame + 272))
#define local_48 (*(uint3 * *)(frame + 276))
#define local_44 (*(uint *)(frame + 280))
#define local_40 (*(uint *)(frame + 284))
#define local_3c (*(uint3 * *)(frame + 288))
#define local_38 (*(uint *)(frame + 292))
#define local_34 (*(double *)(frame + 296))
#define local_2c (*(uint3 * *)(frame + 304))
#define local_28 (*(double *)(frame + 308))
#define local_20 (*(uint *)(frame + 316))
#define local_1c (*(uint *)(frame + 320))
#define local_18 (*(uint *)(frame + 324))
#define local_12 (*(undefined2 *)(frame + 330))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4060U)
 */

undefined4 recovered_10005290(void *param_1,uint param_2,int param_3,ushort *param_4)

{
  unsigned char frame[380] = {0};

  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint3 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longdouble lVar9;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 348) + -4);
  local_5c = auStackY_14c + 0x80;
  local_6c = PTR_recovered_10003750_1000803c;
  local_68 = &DAT_10006f54;
  local_60 = &LAB_1000578b;
  recovered_10003aea(&local_84);
  uVar6 = 0;
  if (((param_2 < 0xc) || (param_1 == (void *)0x0)) || (param_3 == 0)) goto LAB_1000532a;
  local_80 = 0xffffffff;
  iVar2 = recovered_10001905(param_1,&DAT_10006e8f,4);
  if (iVar2 == 0) {
    local_80 = 0xffffffff;
    iVar2 = recovered_10001905((void *)((int)param_1 + 8),&DAT_10006e94,4);
    uVar6 = 0;
    if (iVar2 != 0) goto LAB_1000532a;
    local_1c = 0;
    local_12 = 0;
    local_20 = 0;
    local_2c = (uint3 *)0x0;
    local_3c = (uint3 *)0x0;
    local_34 = pf_bits_double((pf_double_bits(local_34) & 0xffffffff00000000));
    local_28 = pf_bits_double((pf_double_bits(local_28) & 0xffffffff00000000));
    iVar2 = 0xc;
    while (uVar7 = iVar2 + 8, uVar7 <= param_2) {
      uVar4 = *(uint *)((int)param_1 + iVar2 + 4);
      if (param_2 < uVar4 + uVar7) goto LAB_100052fb;
      local_80 = 0xffffffff;
      local_18 = uVar4 + uVar7;
      iVar3 = recovered_10001905((void *)(iVar2 + (int)param_1),&DAT_10006e99,4);
      if (iVar3 == 0) {
        if (uVar4 < 0x10) goto LAB_100052fb;
        local_12 = *(ushort *)((int)param_1 + uVar7);
        local_28 = pf_bits_double(CONCAT44(PF_PART4(local_28, 4),(uint)*(ushort *)((int)param_1 + iVar2 + 10)));
        local_34 = pf_bits_double(CONCAT44(PF_PART4(local_34, 4),*(undefined4 *)((int)param_1 + iVar2 + 0xc)));
        uVar1 = *(ushort *)((int)param_1 + iVar2 + 0x16);
        uVar6 = recovered_10005c10(&local_12,(int)param_1 + uVar7,uVar4);
        if ((char)uVar6 == '\0') goto LAB_100052fb;
        local_20 = CONCAT31((uint3)(byte)(local_12 >> 8),1);
        local_3c = (uint3 *)(uint)uVar1;
        uVar6 = recovered_10005c58(local_12,uVar1);
        if ((char)uVar6 == '\0') goto LAB_100052fb;
      }
      else {
        local_80 = 0xffffffff;
        iVar2 = recovered_10001905((void *)(iVar2 + (int)param_1),&DAT_10006e9e,4);
        if (iVar2 == 0 && local_2c == (uint3 *)0x0) {
          local_2c = (uint3 *)(uVar7 + (int)param_1);
          local_1c = uVar4;
        }
      }
      iVar2 = local_18 + (uVar4 & 1);
    }
    uVar6 = 0;
    if (((((local_20 & 1) == 0) || (local_2c == (uint3 *)0x0)) ||
        ((local_1c == 0 || ((PF_PART2(local_28, 0) == 0 || (PF_PART4(local_34, 0) == 0)))))) ||
       (uVar6 = 0, (ushort)local_3c < 8)) goto LAB_1000532a;
    local_4c = (uint)PF_PART2(local_28, 0);
    local_18 = (uint)local_3c & 0xffff;
    local_20 = local_18 >> 3;
    uVar7 = local_4c * local_20;
    if ((uVar7 == 0) || (local_1c < uVar7)) goto LAB_1000532a;
    uVar4 = (uint)*param_4;
    if (*param_4 == 0) {
      uVar4 = PF_PART4(local_28, 0);
    }
    if ((short)uVar4 != 0) {
      local_40 = uVar4 & 0xffff;
      local_50 = 0;
      local_90 = local_1c / uVar7;
      local_ac = (void *)0x0;
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = PF_PART4(local_34, 0);
      local_80 = 1;
      local_9c = (short)uVar4;
      local_8c = uVar4;
      local_38 = uVar7;
      recovered_10005c86((int *)&local_ac,local_90 * local_40);
      local_44 = local_20;
      if (PF_PART2(local_28, 0) < 2) {
        local_44 = 0;
      }
      uVar4 = PF_PART4(local_28, 0) & 0xffff;
      local_94 = PF_PART4(local_28, 0) - 1;
      local_88 = local_40 * 2;
      local_48 = local_2c;
      uVar8 = 0;
      uVar7 = local_38;
      local_98 = uVar4;
      while (uVar8 < local_90) {
        puVar5 = (uint3 *)(uVar8 * uVar7 + (int)local_2c);
        local_34 = pf_bits_double(CONCAT44(PF_PART4(local_34, 4),puVar5));
        local_1c = uVar8;
        if ((short)local_8c == 2) {
          local_80 = 4;
          lVar9 = recovered_10005cc2(puVar5,local_12,(ushort)local_18);
          local_28 = (double)lVar9;
          local_80 = 5;
          lVar9 = recovered_10005cc2((uint3 *)(PF_PART4(local_34, 0) + local_44),local_12,(ushort)local_18)
          ;
          local_34 = (double)lVar9;
          local_80 = 6;
          iVar2 = recovered_10005e18(local_28);
          *(short *)((int)local_ac + local_1c * 4) = (short)iVar2;
          local_80 = 7;
          iVar2 = recovered_10005e18(local_34);
          *(short *)((int)local_ac + local_1c * 4 + 2) = (short)iVar2;
LAB_10005745:
          uVar7 = local_38;
        }
        else {
          if (local_40 == 1) {
            lVar9 = (longdouble)0;
            uVar7 = local_4c;
            puVar5 = local_48;
            while (uVar7 != 0) {
              local_34 = pf_bits_double(CONCAT44(PF_PART4(local_34, 4),uVar7 - 1));
              local_28 = (double)lVar9;
              local_80 = 3;
              local_3c = puVar5;
              lVar9 = recovered_10005cc2(puVar5,local_12,(ushort)local_18);
              lVar9 = (longdouble)local_28 + lVar9;
              puVar5 = (uint3 *)((int)local_3c + local_20);
              uVar7 = PF_PART4(local_34, 0);
            }
            local_80 = 2;
            iVar2 = recovered_10005e18((double)(lVar9 / (longdouble)uVar4));
            *(short *)((int)local_ac + local_1c * 2) = (short)iVar2;
            goto LAB_10005745;
          }
          uVar8 = 0;
          while (local_40 != uVar8) {
            local_28 = pf_bits_double(CONCAT44(PF_PART4(local_28, 4),uVar8));
            if (local_4c <= uVar8) {
              uVar8 = local_94;
            }
            local_80 = 8;
            lVar9 = recovered_10005cc2((uint3 *)((uVar8 & 0xffff) * local_20 + PF_PART4(local_34, 0)),
                                       local_12,(ushort)local_18);
            local_80 = 9;
            iVar2 = recovered_10005e18((double)lVar9);
            *(short *)((int)local_ac + PF_PART4(local_28, 0) * 2 + local_50) = (short)iVar2;
            uVar7 = local_38;
            uVar8 = PF_PART4(local_28, 0) + 1;
          }
        }
        local_48 = (uint3 *)((int)local_48 + uVar7);
        local_50 = local_50 + local_88;
        uVar8 = local_1c + 1;
      }
      recovered_100043f8((undefined4 *)param_3,&local_ac);
      local_a8 = 0;
      recovered_100037b4(local_ac);
      uVar6 = 1;
      goto LAB_1000532a;
    }
  }
LAB_100052fb:
  uVar6 = 0;
LAB_1000532a:
  recovered_10003aff(&local_84);
  return uVar6;
}

#undef DAT_10006e8f
#undef DAT_10006e94
#undef DAT_10006e99
#undef DAT_10006e9e
#undef DAT_10006f54
#undef LAB_1000578b
#undef PTR_recovered_10003750_1000803c
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef auStackY_14c
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
#undef local_12

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x45c8U)
 */

void recovered_100057f8(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_10005b58(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x4606U)
 */

void recovered_10005836(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000593a((int *)(param_1 + 8));
  return;
}


#undef DAT_10006f6c
#define DAT_10006f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d3cU)))
#undef LAB_100058d9
#define LAB_100058d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46a9U)))
#undef PTR_DAT_10008034
#define PTR_DAT_10008034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e04U)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 200))
#define local_14 (*(uint * *)(frame + 216))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4620U)
 */

void recovered_10005850(undefined4 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[268] = {0};


  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  local_14 = param_1 + 2;
  *local_14 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = PTR_DAT_10008034 + 8;
  local_34 = PTR_recovered_10003750_1000803c;
  local_30 = &DAT_10006f6c;
  local_28 = &LAB_100058d9;
  local_48 = 1;
  recovered_10003aea(&local_4c);
  recovered_1000590c((int)param_1,param_2,param_3);
  recovered_10003aff(&local_4c);
  return;
}

#undef DAT_10006f6c
#undef LAB_100058d9
#undef PTR_DAT_10008034
#undef PTR_recovered_10003750_1000803c
#undef local_4c
#undef local_48
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_14
#undef auStackY_dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x46dcU)
 */

void recovered_1000590c(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_100059d2((int *)(param_1 + 8),param_2,param_3 | 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_10006f74
#define DAT_10006f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d44U)))
#undef LAB_1000598f
#define LAB_1000598f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x475fU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(undefined * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x470aU)
 */

void recovered_1000593a(int *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = PTR_recovered_10003750_1000803c;
  local_28 = &DAT_10006f74;
  local_20 = &LAB_1000598f;
  local_40 = 1;
  recovered_10003aea(&local_44);
  recovered_10005a18(param_1);
  recovered_10003aff(&local_44);
  return;
}

#undef DAT_10006f74
#undef LAB_1000598f
#undef PTR_recovered_10003750_1000803c
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4784U)
 */

void recovered_100059b4(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000593a((int *)((int)param_1 + 8));
  recovered_100037b4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47a2U)
 */

void recovered_100059d2(int *param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined4 *puVar2;

  recovered_10005a18(param_1);
  puVar1 = recovered_10005a43(param_3);
  puVar2 = recovered_10002bf1(param_2,(int)puVar1);
  *param_1 = (int)puVar2;
  *(bool *)(param_1 + 1) = puVar2 != (undefined4 *)0x0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47e8U)
 */

void recovered_10005a18(int *param_1)

{
  unsigned char frame[64] = {0};

  if ((int *)*param_1 != (int *)0x0) {
    recovered_10002f70((int *)*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


#undef DAT_10006e6b
#define DAT_10006e6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c3bU)))
#undef DAT_10006e6f
#define DAT_10006e6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c3fU)))
#undef DAT_10006e72
#define DAT_10006e72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c42U)))
#undef DAT_10006e76
#define DAT_10006e76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c46U)))
#undef DAT_10006e79
#define DAT_10006e79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c49U)))
#undef DAT_10006e7d
#define DAT_10006e7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c4dU)))
#undef DAT_10006e80
#define DAT_10006e80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c50U)))
#undef DAT_10006e83
#define DAT_10006e83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c53U)))
#undef DAT_10006e85
#define DAT_10006e85 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c55U)))
#undef DAT_10006e88
#define DAT_10006e88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c58U)))
#undef DAT_10006e8a
#define DAT_10006e8a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c5aU)))
#undef DAT_10006e8d
#define DAT_10006e8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c5dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4813U)
 */

undefined * recovered_10005a43(uint param_1)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;

  if ((~param_1 & 3) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 0x10) == 0) {
        puVar1 = &DAT_10006e7d;
        if ((param_1 & 4) != 0) {
          puVar1 = &DAT_10006e79;
        }
      }
      else {
        puVar1 = &DAT_10006e76;
        if ((param_1 & 4) != 0) {
          puVar1 = &DAT_10006e72;
        }
      }
    }
    else {
      puVar1 = &DAT_10006e6f;
      if ((param_1 & 4) != 0) {
        puVar1 = &DAT_10006e6b;
      }
    }
  }
  else if ((param_1 & 2) == 0) {
    puVar1 = &DAT_10006e8d;
    if ((param_1 & 4) != 0) {
      puVar1 = &DAT_10006e8a;
    }
  }
  else if ((param_1 & 8) == 0) {
    puVar1 = &DAT_10006e88;
    if ((param_1 & 4) != 0) {
      puVar1 = &DAT_10006e85;
    }
  }
  else {
    puVar1 = &DAT_10006e83;
    if ((param_1 & 4) != 0) {
      puVar1 = &DAT_10006e80;
    }
  }
  return puVar1;
}

#undef DAT_10006e6b
#undef DAT_10006e6f
#undef DAT_10006e72
#undef DAT_10006e76
#undef DAT_10006e79
#undef DAT_10006e7d
#undef DAT_10006e80
#undef DAT_10006e83
#undef DAT_10006e85
#undef DAT_10006e88
#undef DAT_10006e8a
#undef DAT_10006e8d

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4892U)
 */

void recovered_10005ac2(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003760(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100036e6();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48a8U)
 */

void recovered_10005ad8(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  if ((int *)*param_1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = 1;
    if (param_4 != 1) {
      iVar1 = (uint)(param_4 == 2) * 2;
    }
    iVar1 = recovered_1000320c((int *)*param_1,param_2,iVar1);
    bVar2 = iVar1 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48f6U)
 */

void recovered_10005b26(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((*param_1 == 0) || (iVar1 = recovered_10003285(*param_1), iVar1 < 0)) {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4928U)
 */

void recovered_10005b58(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10005ba2(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_100037b4((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4972U)
 */

void * recovered_10005ba2(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_10003782(param_1);
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4986U)
 */

void recovered_10005bb6(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  iVar1 = 0;
  bVar2 = false;
  if (((-1 < param_4) && (param_2 != 0)) && ((int *)*param_1 != (int *)0x0)) {
    iVar1 = recovered_10002fb0((undefined1 *)param_2,1,param_3,(int *)*param_1);
    bVar2 = iVar1 == param_3 && param_4 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  param_1[2] = iVar1;
  param_1[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x49e0U)
 */

undefined4 recovered_10005c10(ushort *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined4 in_EAX = 0;
  undefined4 uVar1;

  if (param_1 != (ushort *)0x0) {
    uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
    if (*param_1 != 0xfffe) {
      return uVar1;
    }
    if (((0x27 < param_3 && param_2 != 0) && (0x15 < *(ushort *)(param_2 + 0x10))) &&
       ((*(ushort *)(param_2 + 0x18) & 0xfffd) == 1)) {
      *param_1 = *(ushort *)(param_2 + 0x18);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a28U)
 */

undefined4 recovered_10005c58(short param_1,ushort param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  if (param_1 == 3) {
    uVar2 = param_2 - 0x20;
    uVar1 = uVar2 & 0xffdf;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar2 = param_2 - 8;
    uVar1 = uVar2 & 0xffe7;
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar1 == 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a56U)
 */

void recovered_10005c86(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_10005e72(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_10006c64
#define DAT_10006c64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a34U)))
#undef DAT_10006c68
#define DAT_10006c68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a38U)))
#undef DAT_10006c6c
#define DAT_10006c6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef DAT_10006c70
#define DAT_10006c70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a40U)))
#undef _DAT_10006c64
#define _DAT_10006c64 (*(float *)(((uintptr_t)pf_module_state + 0x5a34U)))
#undef _DAT_10006c68
#define _DAT_10006c68 (*(float *)(((uintptr_t)pf_module_state + 0x5a38U)))
#undef _DAT_10006c6c
#define _DAT_10006c6c (*(float *)(((uintptr_t)pf_module_state + 0x5a3cU)))
#undef _DAT_10006c70
#define _DAT_10006c70 (*(float *)(((uintptr_t)pf_module_state + 0x5a40U)))
#define local_14 (*(double (*)[2])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a92U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005cc2(uint3 *param_1,short param_2,ushort param_3)

{
  unsigned char frame[68] = {0};

  uint uVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;

  lVar5 = (longdouble)0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_14[0] = 0.0;
      recovered_10001856(local_14,param_1,8);
      lVar4 = (longdouble)(uintptr_t)local_14[0];
      lVar3 = (longdouble)1;
      lVar2 = lVar3;
      if (lVar4 <= lVar3) {
        lVar2 = lVar4;
      }
      lVar5 = -lVar3;
      if (-lVar3 <= lVar4) {
        lVar5 = lVar2;
      }
    }
    else if (param_3 == 0x20) {
      local_14[0] = (double)((ulonglong)local_14[0] & 0xffffffff00000000);
      recovered_10001856(local_14,param_1,4);
      lVar2 = (longdouble)PF_PART4(local_14[0], 0);
      lVar5 = (longdouble)1;
      lVar3 = lVar5;
      if (lVar2 <= lVar5) {
        lVar3 = lVar2;
      }
      lVar5 = -lVar5;
      if (-(longdouble)1 <= lVar2) {
        lVar5 = lVar3;
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      lVar5 = (longdouble)(int)((byte)*param_1 - 0x80) * (longdouble)_DAT_10006c70;
      break;
    case 1:
      lVar5 = (longdouble)(short)*param_1 * (longdouble)_DAT_10006c6c;
      break;
    case 2:
      if ((char)*(byte *)((int)param_1 + 2) < '\0') {
        uVar1 = (uint)*(byte *)((int)param_1 + 2) * 0x10000 + -0x1000000 + (uint)(ushort)*param_1;
      }
      else {
        uVar1 = (uint)*param_1;
      }
      lVar5 = (longdouble)(int)uVar1 * (longdouble)_DAT_10006c68;
      break;
    case 3:
      lVar5 = (longdouble)*(int *)param_1 * (longdouble)_DAT_10006c64;
    }
  }
  return lVar5;
}

#undef DAT_10006c64
#undef DAT_10006c68
#undef DAT_10006c6c
#undef DAT_10006c70
#undef _DAT_10006c64
#undef _DAT_10006c68
#undef _DAT_10006c6c
#undef _DAT_10006c70
#undef local_14

#undef DAT_10006c80
#define DAT_10006c80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4be8U)
 */

int recovered_10005e18(double param_1)

{
  unsigned char frame[64] = {0};

  short extraout_AX;
  short sVar1;

  sVar1 = -0x8000;
  if ((-1.0 < param_1) && (sVar1 = 0x7fff, param_1 < 1.0)) {
    recovered_10002193(param_1 * *(double *)(&DAT_10006c80 + (uint)(param_1 < 0.0) * 8));
    sVar1 = extraout_AX;
  }
  return (int)sVar1;
}

#undef DAT_10006c80

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c42U)
 */

void recovered_10005e72(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_10005ebd(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)((int)pvVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_100037b4((void *)*param_1);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c8dU)
 */

void * recovered_10005ebd(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10003782(param_1 * 2);
  }
  return pvVar1;
}


#undef DAT_10006c94
#define DAT_10006c94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4cadU)
 */

undefined1 recovered_10005edd(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;

  iVar3 = param_1[1];
  puVar6 = &DAT_10006c94;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar6 = (undefined *)*param_1;
  }
  iVar4 = recovered_10006026(param_2);
  iVar5 = 0;
  if (iVar3 == iVar4) {
    do {
      if (iVar3 == iVar5) {
        return 1;
      }
      pcVar1 = puVar6 + iVar5;
      pcVar2 = (char *)(param_2 + iVar5);
      iVar5 = iVar5 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  return 0;
}

#undef DAT_10006c94

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4cfaU)
 */

void recovered_10005f2a(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = recovered_10006026(param_2);
  recovered_10005f5c(param_1,param_2,uVar1);
  return;
}


#define local_20 (*(void * *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4d2cU)
 */

void recovered_10005f5c(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[80] = {0};

  void *data;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = param_3;
  }
  local_14 = 0;
  uVar3 = recovered_10006042(param_1,param_2,&local_14);
  if ((char)uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar4 == 0) {
      recovered_10006080(param_1);
    }
    else {
      recovered_100060a2(param_1,uVar4);
      for (uVar3 = 0; uVar4 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
      param_1[1] = uVar4;
      *(undefined1 *)(*param_1 + uVar4) = 0;
    }
  }
  else {
    if ((uint)(param_1[1] - local_14) <= uVar4) {
      uVar4 = param_1[1] - local_14;
    }
    recovered_100060f2(&local_20,local_14 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (int)local_20;
    iVar1 = param_1[1];
    param_1[1] = local_1c;
    iVar2 = param_1[2];
    param_1[2] = local_18;
    local_20 = data;
    local_1c = iVar1;
    local_18 = iVar2;
    recovered_100037b4(data);
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4df6U)
 */

int recovered_10006026(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x4e12U)
 */

uint recovered_10006042(int *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = 0;
  if (param_2 != 0 && *param_1 != 0) {
    iVar2 = param_2 - *param_1;
    do {
      if ((uint)param_1[1] < uVar1) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (iVar2 + 1U != uVar1);
    *param_3 = iVar2;
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4e50U)
 */

void recovered_10006080(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;

  if (*param_1 == 0) {
    recovered_10006122(0);
    *param_1 = extraout_EAX;
    param_1[2] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4e72U)
 */

void recovered_100060a2(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10006122(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_EAX + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_EAX + param_1[1]) = 0;
    recovered_100037b4((void *)*param_1);
    *param_1 = extraout_EAX;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ec2U)
 */

void recovered_100060f2(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_10005f5c(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ef2U)
 */

void recovered_10006122(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10003782(param_1 + 1);
  *puVar1 = 0;
  return;
}


#undef DAT_10006e8f
#define DAT_10006e8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c5fU)))
#undef DAT_10006e94
#define DAT_10006e94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c64U)))
#undef DAT_10006e99
#define DAT_10006e99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c69U)))
#undef DAT_10006e9e
#define DAT_10006e9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c6eU)))
#undef DAT_10006f84
#define DAT_10006f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d54U)))
#undef LAB_100063cb
#define LAB_100063cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x519bU)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
#define local_64 (*(undefined4 *)(frame + 168))
#define local_60 (*(undefined4 *)(frame + 172))
#define local_4c (*(undefined * *)(frame + 192))
#define local_48 (*(undefined * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_40 (*(undefined1 * *)(frame + 204))
#define local_3c (*(undefined1 * *)(frame + 208))
#define local_2c (*(undefined4 *)(frame + 224))
#define local_28 (*(int *)(frame + 228))
#define local_24 (*(undefined2 * *)(frame + 232))
#define local_20 (*(uint *)(frame + 236))
#define local_1c (*(void * *)(frame + 240))
#define local_18 (*(undefined4 *)(frame + 244))
#define local_14 (*(undefined4 *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f0cU)
 */

undefined4 recovered_1000613c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[300] = {0};

  longlong lVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;

  local_44 = auStackY_fc + 0xf8;
  local_3c = auStackY_fc + 0x80;
  local_4c = PTR_recovered_10003750_1000803c;
  local_48 = &DAT_10006f84;
  local_40 = &LAB_100063cb;
  recovered_10003aea(&local_64);
  if (param_2 != (undefined4 *)0x0) {
    if (param_1[3] != 0) {
      uVar4 = (uint)*(ushort *)(param_1 + 4);
      if (uVar4 != 0) {
        local_20 = param_1[1];
        uVar3 = 0;
        if (local_20 % uVar4 != 0) goto LAB_100061b1;
        local_24 = (undefined2 *)(uVar4 * 2);
        lVar1 = (ulonglong)(uint)param_1[3] * ZEXT48(local_24);
        if (-1 < (short)*(ushort *)(param_1 + 4) && (int)((ulonglong)lVar1 >> 0x20) == 0) {
          local_28 = local_20 * 2;
          local_1c = (void *)0x0;
          local_18 = 0;
          local_14 = 0;
          local_60 = 1;
          local_2c = (int)lVar1;
          recovered_10005b58((int *)&local_1c,local_28 + 0x2c);
          local_60 = 2;
          recovered_10006459((int *)&local_1c,&DAT_10006e8f,4);
          local_60 = 3;
          recovered_1000647d((int *)&local_1c,local_20 * 2 + 0x24);
          local_60 = 4;
          recovered_10006459((int *)&local_1c,&DAT_10006e94,4);
          local_60 = 5;
          recovered_10006459((int *)&local_1c,&DAT_10006e99,4);
          local_60 = 6;
          recovered_1000647d((int *)&local_1c,0x10);
          local_60 = 7;
          recovered_100064df((int *)&local_1c,1);
          local_60 = 8;
          recovered_100064df((int *)&local_1c,*(undefined2 *)(param_1 + 4));
          local_60 = 9;
          recovered_1000647d((int *)&local_1c,param_1[3]);
          local_60 = 10;
          recovered_1000647d((int *)&local_1c,local_2c);
          local_60 = 0xb;
          recovered_100064df((int *)&local_1c,(short)local_24);
          local_60 = 0xc;
          recovered_100064df((int *)&local_1c,0x10);
          local_60 = 0xd;
          recovered_10006459((int *)&local_1c,&DAT_10006e9e,4);
          local_60 = 0xe;
          recovered_1000647d((int *)&local_1c,local_28);
          puVar2 = (undefined2 *)*param_1;
          uVar4 = param_1[1] * 2;
          while (uVar4 != 0) {
            local_60 = 0xf;
            local_24 = puVar2;
            local_20 = uVar4;
            recovered_100064df((int *)&local_1c,*puVar2);
            puVar2 = local_24 + 1;
            uVar4 = local_20 - 2;
          }
          recovered_10006516(param_2,&local_1c);
          local_18 = 0;
          recovered_100037b4(local_1c);
          uVar3 = 1;
          goto LAB_100061b1;
        }
      }
    }
  }
  uVar3 = 0;
LAB_100061b1:
  recovered_10003aff(&local_64);
  return uVar3;
}

#undef DAT_10006e8f
#undef DAT_10006e94
#undef DAT_10006e99
#undef DAT_10006e9e
#undef DAT_10006f84
#undef LAB_100063cb
#undef PTR_recovered_10003750_1000803c
#undef auStackY_fc
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5210U)
 */

void recovered_10006440(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000593a((int *)(param_1 + 8));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5229U)
 */

void recovered_10006459(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000655a(param_1,*param_1 + param_1[1],param_2,param_2 + param_3);
  return;
}


#define local_10 (*(undefined1 *)(frame + 16))
#define local_f (*(undefined1 *)(frame + 17))
#define local_e (*(undefined1 *)(frame + 18))
#define local_d (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x524dU)
 */

void recovered_1000647d(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};


  local_10 = (undefined1)param_2;
  recovered_100065fe(param_1,&local_10);
  local_f = (undefined1)((uint)param_2 >> 8);
  recovered_100065fe(param_1,&local_f);
  local_e = (undefined1)((uint)param_2 >> 0x10);
  recovered_100065fe(param_1,&local_e);
  local_d = (undefined1)((uint)param_2 >> 0x18);
  recovered_100065fe(param_1,&local_d);
  return;
}

#undef local_10
#undef local_f
#undef local_e
#undef local_d

#define local_e (*(undefined1 *)(frame + 18))
#define local_d (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52afU)
 */

void recovered_100064df(int *param_1,undefined2 param_2)

{
  unsigned char frame[64] = {0};


  local_e = (undefined1)param_2;
  recovered_100065fe(param_1,&local_e);
  local_d = (undefined1)((ushort)param_2 >> 8);
  recovered_100065fe(param_1,&local_d);
  return;
}

#undef local_e
#undef local_d

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52e6U)
 */

undefined4 * recovered_10006516(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_100037b4((void *)*param_1);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x532aU)
 */

int recovered_1000655a(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;

  iVar3 = *param_1;
  bVar7 = iVar3 == 0;
  if (bVar7) {
    uVar5 = param_1[1];
  }
  else {
    uVar5 = param_2 - iVar3;
  }
  iVar6 = (int)param_4 - (int)param_3;
  if (iVar6 != 0) {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
    if (uVar1 < uVar2 + iVar6) {
      if (uVar1 == 0) {
        uVar1 = 4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 * 2;
      } while (uVar4 < uVar2 + iVar6);
      recovered_10005b58(param_1,uVar4);
      uVar2 = param_1[1];
    }
    for (; uVar5 < uVar2; uVar2 = uVar2 - 1) {
      *(undefined1 *)(iVar6 + (uVar2 - 1) + *param_1) = *(undefined1 *)((uVar2 - 1) + *param_1);
    }
    uVar2 = uVar5;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar2) = *param_3;
      uVar2 = uVar2 + 1;
    }
    param_1[1] = param_1[1] + iVar6;
    iVar3 = *param_1;
    bVar7 = iVar3 == 0;
  }
  iVar6 = 0;
  if (!bVar7) {
    iVar6 = iVar3 + uVar5;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53ceU)
 */

int recovered_100065fe(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 == param_1[2]) {
    if (iVar2 == 0) {
      uVar1 = 4;
    }
    else {
      uVar1 = iVar2 * 2;
    }
    recovered_10005b58(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar2) = *param_2;
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 + 1 + *param_1 + -1;
}


#undef DAT_10006fa8
#define DAT_10006fa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d78U)))
#undef LAB_100066cb
#define LAB_100066cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x549bU)))
#undef PTR_DAT_10008038
#define PTR_DAT_10008038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e08U)))
#undef PTR_recovered_10003750_1000803c
#define PTR_recovered_10003750_1000803c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e0cU)))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 200))
#define local_14 (*(uint * *)(frame + 216))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5412U)
 */

void recovered_10006642(undefined4 *param_1,char *param_2,uint param_3)

{
  unsigned char frame[268] = {0};


  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  local_14 = param_1 + 2;
  *local_14 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = PTR_DAT_10008038 + 8;
  local_34 = PTR_recovered_10003750_1000803c;
  local_30 = &DAT_10006fa8;
  local_28 = &LAB_100066cb;
  local_48 = 1;
  recovered_10003aea(&local_4c);
  recovered_10006700((int)param_1,param_2,param_3);
  recovered_10003aff(&local_4c);
  return;
}

#undef DAT_10006fa8
#undef LAB_100066cb
#undef PTR_DAT_10008038
#undef PTR_recovered_10003750_1000803c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_14
#undef auStackY_dc
#undef local_4c
#undef local_48
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x54d0U)
 */

void recovered_10006700(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_100059d2((int *)(param_1 + 8),param_2,param_3 | 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x54feU)
 */

void recovered_1000672e(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000593a((int *)((int)param_1 + 8));
  recovered_100037b4(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x551cU)
 */

void recovered_1000674c(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((uint *)*param_1 != (uint *)0x0) {
    if ((-1 < param_4) && (param_2 != 0 || param_3 == 0 && param_4 == 0)) {
      iVar1 = recovered_10003104((void *)param_2,1,param_3,(uint *)*param_1);
      *(bool *)(param_1 + 1) = iVar1 == param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x556eU)
 */

void recovered_1000679e(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100037b4((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x558aU)
 */

void recovered_100067ba(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_10005c86(param_1,param_2);
    return;
  }
  recovered_10005e72(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x55d8U)
 */

int recovered_10006808(int *param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  iVar4 = *param_1;
  bVar8 = iVar4 == 0;
  if (bVar8) {
    uVar1 = param_1[1];
  }
  else {
    uVar1 = param_2 - iVar4 >> 1;
  }
  if (1 < (uint)((int)param_4 - (int)param_3)) {
    uVar2 = (uint)((int)param_4 - (int)param_3) >> 1;
    uVar7 = param_1[1];
    uVar6 = param_1[2];
    if (uVar6 < uVar7 + uVar2) {
      if (uVar6 == 0) {
        uVar6 = 4;
      }
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 * 2;
      } while (uVar5 < uVar7 + uVar2);
      recovered_10005e72(param_1,uVar5);
      uVar7 = param_1[1];
    }
    for (uVar6 = uVar7; uVar1 < uVar6; uVar6 = uVar6 - 1) {
      *(undefined2 *)(uVar2 * 2 + -2 + *param_1 + uVar6 * 2) =
           *(undefined2 *)(*param_1 + -2 + uVar6 * 2);
    }
    iVar4 = uVar1 * 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined2 *)(*param_1 + iVar4) = *param_3;
      iVar4 = iVar4 + 2;
    }
    param_1[1] = uVar7 + uVar2;
    iVar4 = *param_1;
    bVar8 = iVar4 == 0;
  }
  iVar3 = 0;
  if (!bVar8) {
    iVar3 = iVar4 + uVar1 * 2;
  }
  return iVar3;
}


#undef PTR_DAT_10008004
#define PTR_DAT_10008004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd4U)))
#undef PTR_DAT_1000801c
#define PTR_DAT_1000801c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6decU)))
#undef PTR_DAT_1000802c
#define PTR_DAT_1000802c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dfcU)))
#undef PTR_DAT_10008044
#define PTR_DAT_10008044 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e14U)))
#undef PTR_recovered_100041c4_10008014
#define PTR_recovered_100041c4_10008014 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6de4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x56b0U)
 */

void recovered_100068e0(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_10008004;
  if (*PTR_DAT_10008004 == '\0') {
    uVar4 = recovered_10003987((uint *)PTR_DAT_10008004);
    puVar3 = PTR_DAT_1000801c;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_10008044;
      *(undefined **)PTR_DAT_1000801c = PTR_DAT_1000802c + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10003980();
      recovered_10003996(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_10008004
#undef PTR_DAT_1000801c
#undef PTR_DAT_1000802c
#undef PTR_DAT_10008044
#undef PTR_recovered_100041c4_10008014

#undef PTR_DAT_10008010
#define PTR_DAT_10008010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6de0U)))
#undef PTR_DAT_10008028
#define PTR_DAT_10008028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6df8U)))
#undef PTR_DAT_10008030
#define PTR_DAT_10008030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e00U)))
#undef PTR_DAT_10008048
#define PTR_DAT_10008048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e18U)))
#undef PTR_recovered_100041ca_10008018
#define PTR_recovered_100041ca_10008018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6de8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5711U)
 */

void recovered_10006941(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_10008010;
  if (*PTR_DAT_10008010 == '\0') {
    uVar4 = recovered_10003987((uint *)PTR_DAT_10008010);
    puVar3 = PTR_DAT_10008028;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_10008048;
      *(undefined **)PTR_DAT_10008028 = PTR_DAT_10008030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10003980();
      recovered_10003996(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_10008010
#undef PTR_DAT_10008028
#undef PTR_DAT_10008030
#undef PTR_DAT_10008048
#undef PTR_recovered_100041ca_10008018

#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6dd8U)))
#undef PTR_DAT_10008020
#define PTR_DAT_10008020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6df0U)))
#undef PTR_DAT_10008030
#define PTR_DAT_10008030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e00U)))
#undef PTR_DAT_10008040
#define PTR_DAT_10008040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e10U)))
#undef PTR_recovered_100041ca_10008018
#define PTR_recovered_100041ca_10008018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6de8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5772U)
 */

void recovered_100069a2(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_10008008;
  if (*PTR_DAT_10008008 == '\0') {
    uVar4 = recovered_10003987((uint *)PTR_DAT_10008008);
    puVar3 = PTR_DAT_10008020;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_10008040;
      *(undefined **)PTR_DAT_10008020 = PTR_DAT_10008030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10003980();
      recovered_10003996(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_10008008
#undef PTR_DAT_10008020
#undef PTR_DAT_10008030
#undef PTR_DAT_10008040
#undef PTR_recovered_100041ca_10008018

#undef PTR_DAT_1000800c
#define PTR_DAT_1000800c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6ddcU)))
#undef PTR_DAT_10008024
#define PTR_DAT_10008024 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6df4U)))
#undef PTR_DAT_10008030
#define PTR_DAT_10008030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e00U)))
#undef PTR_DAT_10008040
#define PTR_DAT_10008040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6e10U)))
#undef PTR_recovered_100041ca_10008018
#define PTR_recovered_100041ca_10008018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6de8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x57d3U)
 */

void recovered_10006a03(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_1000800c;
  if (*PTR_DAT_1000800c == '\0') {
    uVar4 = recovered_10003987((uint *)PTR_DAT_1000800c);
    puVar3 = PTR_DAT_10008024;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_10008040;
      *(undefined **)PTR_DAT_10008024 = PTR_DAT_10008030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10003980();
      recovered_10003996(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_1000800c
#undef PTR_DAT_10008024
#undef PTR_DAT_10008030
#undef PTR_DAT_10008040
#undef PTR_recovered_100041ca_10008018
