/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a0f4
#define DAT_1000a0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_100006f0(void)

{
  unsigned char frame[64] = {0};

  DAT_1000a0f4 = 0;
  recovered_10000700();
  return;
}

#undef DAT_1000a0f4

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_1000a0f4
#define DAT_1000a0f4 (*(char *)(((uintptr_t)pf_module_state + 0x9a04U)))
#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(int *)(((uintptr_t)pf_module_state + 0x9a08U)))
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

void recovered_10000700(void)

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
  if (DAT_1000a0f4 == '\0') {
    DAT_1000a0f8 = 0;
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
      recovered_10001dd3(uVar1,*puVar2,puVar2[-1],&local_20);
      puVar2 = puVar2 + 2;
      uVar1 = extraout_EAX;
    }
    if (DAT_1000a0f8 == 0) {
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
      recovered_10001dd3(uVar1,uVar3,0x300000,&local_20);
    }
    DAT_1000a0f4 = '\x01';
  }
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_1000a0f4
#undef DAT_1000a0f8
#undef _DAT_00006088
#undef _DAT_0000608c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a8

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b0U)
 */

int recovered_100008a0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000700();
  iVar1 = 0;
  for (piVar2 = &DAT_1000a0f8; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000a0f8

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1daU)
 */

void recovered_100008ca(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000700();
  for (piVar1 = &DAT_1000a0f8; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a0f8

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x209U)
 */

int recovered_100008f9(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000700();
  iVar1 = 0;
  for (piVar2 = &DAT_1000a0f8; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_1000a0f8

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22dU)
 */

void recovered_1000091d(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000700();
  for (piVar1 = &DAT_1000a0f8; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a0f8

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x256U)
 */

uint * recovered_10000946(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  if (param_1 != 0) {
    recovered_10000700();
    uVar4 = param_1 + 0xfU & 0xfffffff0;
    for (puVar3 = &DAT_1000a0f8; puVar3 = (uint *)*puVar3, puVar3 != (uint *)0x0;
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

#undef DAT_1000a0f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bbU)
 */

longlong recovered_100009ab(uint param_1,int param_2,uint param_3)

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

ulonglong recovered_100009ea(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10000a29(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10000a6a(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_10000a8b(param_1,param_3,param_2,param_4,param_5,(uint *)0x0);
  return uVar1;
}


#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39bU)
 */

undefined8 recovered_10000a8b(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
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
      uVar9 = recovered_100009ea(param_3,param_2,uVar2 & 0xff);
      uVar6 = ((uint)uVar9 & 1) + uVar4 * 2;
      lVar10 = recovered_100009ab(1,0,uVar2 & 0xff);
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

undefined8 recovered_10000b6c(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  unsigned char frame[68] = {0};


  local_10 = 0;
  local_14 = 0;
  recovered_10000a8b(param_3,param_2,param_1,param_3,param_4,&local_14);
  return CONCAT44(local_10,local_14);
}

#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b4U)
 */

int recovered_10000ba4(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_10000a8b(iVar2,((param_2 ^ uVar3) - uVar3) - (uint)((param_1 ^ uVar3) < uVar3)
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

undefined8 recovered_10000c16(uint param_1,int param_2,uint param_3,uint param_4)

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
    recovered_10000a8b(iVar1,((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2),
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

void recovered_10000c88(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59fU)
 */

int recovered_10000c8f(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000ca0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000cc8(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000cee(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x626U)
 */

void * recovered_10000d16(void *out,void *data,ulong size)

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

void * recovered_10000d37(void *out,void *data,ulong size)

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

void * recovered_10000d7d(void *out,int value,ulong size)

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

void recovered_10000d99(undefined1 *param_1,int param_2)

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

void recovered_10000daf(undefined1 *param_1,int param_2)

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

int recovered_10000dc5(void *left,void *right,ulong size)

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

bool recovered_10000df4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717U)
 */

bool recovered_10000e07(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72aU)
 */

bool recovered_10000e1a(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740U)
 */

bool recovered_10000e30(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x764U)
 */

bool recovered_10000e54(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77dU)
 */

bool recovered_10000e6d(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x790U)
 */

int recovered_10000e80(int param_1)

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

int recovered_10000e93(int param_1)

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

ulong recovered_10000ea6(char *text)

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

int recovered_10000ec1(char *left,char *right)

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

void recovered_10000ee9(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10000ec1(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x802U)
 */

void recovered_10000ef2(int param_1,int param_2)

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

void * recovered_10000f0c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000ea6(param_1);
    out = recovered_10000ca0(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000d16(out,param_1,uVar1 + 1);
      pvVar2 = out;
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x866U)
 */

char * recovered_10000f56(char *param_1,char param_2)

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

int recovered_10000f7a(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_10000f56(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c1U)
 */

char * recovered_10000fb1(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000f56(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8efU)
 */

char * recovered_10000fdf(char *param_1,char *param_2)

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


#undef DAT_10008c93
#define DAT_10008c93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91cU)
 */

undefined * recovered_1000100c(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10008c93;
}

#undef DAT_10008c93

#undef PTR_DAT_1000a044
#define PTR_DAT_1000a044 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9954U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x926U)
 */

undefined ** recovered_10001016(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000a044;
}

#undef PTR_DAT_1000a044

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x930U)
 */

undefined4 recovered_10001020(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef _DAT_10008050
#define _DAT_10008050 (*(float *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x947U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001037(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    lVar2 = lVar2 + lVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    lVar2 = lVar2 * (longdouble)_DAT_10008050;
  }
  return lVar2;
}

#undef DAT_10008050
#undef _DAT_10008050

#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef _DAT_10008050
#define _DAT_10008050 (*(float *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x971U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001061(double param_1,int *param_2)

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
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_10008050) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_10008050)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10008050
#undef _DAT_10008050

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ffU)
 */

double recovered_100010ef(double left,double right)

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

double recovered_10001141(double left,double right)

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

double recovered_100011ca(double value)

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

double recovered_10001212(double value)

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


#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef _DAT_10008050
#define _DAT_10008050 (*(float *)(((uintptr_t)pf_module_state + 0x7960U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7dU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000126d(double value)

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
      dVar1 = (value / dVar1 + dVar1) * (double)_DAT_10008050;
    }
  }
  return dVar1;
}

#undef DAT_10008050
#undef _DAT_10008050

#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef DAT_10008054
#define DAT_10008054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7964U)))
#undef DAT_10008058
#define DAT_10008058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef DAT_1000805c
#define DAT_1000805c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x796cU)))
#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef DAT_10008080
#define DAT_10008080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7990U)))
#undef _DAT_10008050
#define _DAT_10008050 (*(float *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef _DAT_10008054
#define _DAT_10008054 (*(float *)(((uintptr_t)pf_module_state + 0x7964U)))
#undef _DAT_10008058
#define _DAT_10008058 (*(float *)(((uintptr_t)pf_module_state + 0x7968U)))
#undef _DAT_1000805c
#define _DAT_1000805c (*(float *)(((uintptr_t)pf_module_state + 0x796cU)))
#undef _DAT_10008060
#define _DAT_10008060 (*(float *)(((uintptr_t)pf_module_state + 0x7970U)))
#undef _DAT_10008080
#define _DAT_10008080 (*(double *)(((uintptr_t)pf_module_state + 0x7990U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc7U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100012b7(double value)

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
    dVar3 = (double)_DAT_10008054;
  }
  else {
    iVar6 = 0;
    for (; (double)_DAT_10008058 < value; value = value * (double)_DAT_10008050) {
      iVar6 = iVar6 + 1;
    }
    for (; value < (double)_DAT_1000805c; value = value + value) {
      iVar6 = iVar6 + -1;
    }
    dVar4 = 1.0;
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    for (uVar5 = 1; uVar5 < 0x14; uVar5 = uVar5 + 2) {
      dVar3 = dVar1 / dVar4 + dVar3;
      dVar1 = dVar1 * dVar2;
      dVar4 = dVar4 + (double)_DAT_10008060;
    }
    dVar3 = dVar3 + dVar3 + (double)iVar6 * _DAT_10008080;
  }
  return dVar3;
}

#undef DAT_10008050
#undef DAT_10008054
#undef DAT_10008058
#undef DAT_1000805c
#undef DAT_10008060
#undef DAT_10008080
#undef _DAT_10008050
#undef _DAT_10008054
#undef _DAT_10008058
#undef _DAT_1000805c
#undef _DAT_10008060
#undef _DAT_10008080

#undef DAT_100080b0
#define DAT_100080b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc6bU)
 */

longlong recovered_1000135b(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_100080b0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_100080b0

#undef DAT_10008064
#define DAT_10008064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7974U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7978U)))
#undef DAT_1000806c
#define DAT_1000806c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x797cU)))
#undef _DAT_10008064
#define _DAT_10008064 (*(float *)(((uintptr_t)pf_module_state + 0x7974U)))
#undef _DAT_10008068
#define _DAT_10008068 (*(float *)(((uintptr_t)pf_module_state + 0x7978U)))
#undef _DAT_1000806c
#define _DAT_1000806c (*(float *)(((uintptr_t)pf_module_state + 0x797cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcafU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000139f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_100013e1(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)(((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_1000806c +
                  (lVar1 * lVar1) / (longdouble)_DAT_10008068 +
                  (longdouble)1 + lVar1 / (longdouble)_DAT_10008064) * extraout_ST0);
}

#undef DAT_10008064
#undef DAT_10008068
#undef DAT_1000806c
#undef _DAT_10008064
#undef _DAT_10008068
#undef _DAT_1000806c

#undef DAT_10008088
#define DAT_10008088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7998U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef DAT_100080a0
#define DAT_100080a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79b0U)))
#undef _DAT_10008088
#define _DAT_10008088 (*(double *)(((uintptr_t)pf_module_state + 0x7998U)))
#undef _DAT_10008090
#define _DAT_10008090 (*(double *)(((uintptr_t)pf_module_state + 0x79a0U)))
#undef _DAT_10008098
#define _DAT_10008098 (*(double *)(((uintptr_t)pf_module_state + 0x79a8U)))
#undef _DAT_100080a0
#define _DAT_100080a0 (*(double *)(((uintptr_t)pf_module_state + 0x79b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcf1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100013e1(double param_1)

{
  unsigned char frame[64] = {0};

  for (; _DAT_10008088 < param_1; param_1 = param_1 + _DAT_100080a0) {
  }
  for (; param_1 < _DAT_10008090; param_1 = param_1 + _DAT_10008098) {
  }
  return;
}

#undef DAT_10008088
#undef DAT_10008090
#undef DAT_10008098
#undef DAT_100080a0
#undef _DAT_10008088
#undef _DAT_10008090
#undef _DAT_10008098
#undef _DAT_100080a0

#undef DAT_10008070
#define DAT_10008070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7980U)))
#undef DAT_10008074
#define DAT_10008074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7984U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7988U)))
#undef _DAT_10008070
#define _DAT_10008070 (*(float *)(((uintptr_t)pf_module_state + 0x7980U)))
#undef _DAT_10008074
#define _DAT_10008074 (*(float *)(((uintptr_t)pf_module_state + 0x7984U)))
#undef _DAT_10008078
#define _DAT_10008078 (*(float *)(((uintptr_t)pf_module_state + 0x7988U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000141f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_100013e1(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10008078 +
                 (lVar1 * lVar1) / (longdouble)_DAT_10008074 +
                 (longdouble)1 + lVar1 * (longdouble)_DAT_10008070);
}

#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008078
#undef _DAT_10008070
#undef _DAT_10008074
#undef _DAT_10008078

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd6dU)
 */

double recovered_1000145d(double value)

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

float recovered_10001478(float left,float right)

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

longdouble recovered_100014d0(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_10001061((double)param_1,param_2);
  return (longdouble)(float)extraout_ST0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe03U)
 */

longdouble recovered_100014f3(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10001037((double)param_1,param_2);
  return (longdouble)(float)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe26U)
 */

float recovered_10001516(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001141((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe49U)
 */

float recovered_10001539(float value)

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

float recovered_10001587(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001212((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb3U)
 */

double recovered_100015a3(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10001212(value);
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

float recovered_100015ff(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100015a3((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf2bU)
 */

float recovered_1000161b(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000126d((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf47U)
 */

float recovered_10001637(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012b7((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf63U)
 */

void recovered_10001653(double param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000135b(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf79U)
 */

float recovered_10001669(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000139f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf95U)
 */

float recovered_10001685(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000141f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfb1U)
 */

float recovered_100016a1(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = -value;
  if (-value <= value) {
    fVar1 = value;
  }
  return fVar1;
}


#define local_18 (*(int *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
#define local_1c (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfccU)
 */

int recovered_100016bc(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_100017b1();
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

#undef local_18
#undef local_14
#undef uStack_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10c1U)
 */

int recovered_100017b1(void)

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

int recovered_100017e6(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_100017b1();
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

#undef DAT_1000807c
#define DAT_1000807c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef _DAT_1000807c
#define _DAT_1000807c (*(float *)(((uintptr_t)pf_module_state + 0x798cU)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11ebU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100018db(char *text,char **end)

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
    lVar7 = lVar7 * (longdouble)_DAT_1000807c + (longdouble)(int)(bVar3 - 0x30);
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
      lVar8 = lVar8 * (longdouble)_DAT_1000807c + (longdouble)(int)(bVar3 - 0x30);
      lVar9 = lVar9 * (longdouble)_DAT_1000807c;
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
        lVar7 = recovered_10001037((double)lVar7,iVar5 * local_14);
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

#undef DAT_1000807c
#undef _DAT_1000807c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x133fU)
 */

float recovered_10001a2f(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100018db(text,end);
  return (float)dVar1;
}


#undef DAT_1000807c
#define DAT_1000807c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x798cU)))
#undef DAT_10008cc1
#define DAT_10008cc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85d1U)))
#undef _DAT_1000807c
#define _DAT_1000807c (*(float *)(((uintptr_t)pf_module_state + 0x798cU)))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(ulong *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1361U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001a51(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10001ab4:
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
LAB_10001ae2:
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
switchD_10001aed_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_10001ab4;
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
          recovered_10001d46(&local_1c,&local_18,(int *)&local_14,&local_1c,(int)ROUND(dVar3),10,
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
            dVar4 = (double)_DAT_1000807c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_10001abf;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_10001aed_caseD_68;
        case 'p':
          uVar6 = *(uint *)arguments;
          recovered_10001d04(&local_1c,&DAT_10008cc1);
          cVar5 = '\0';
          uVar9 = 0x10;
          goto LAB_10001cbe;
        case 's':
          recovered_10001d04(&local_1c,*(char **)arguments);
          goto LAB_10001cc7;
        case 'u':
          cVar5 = '\0';
          uVar9 = 10;
          goto LAB_10001cb9;
        case 'x':
          cVar5 = '\0';
LAB_10001cab:
          uVar9 = 0x10;
LAB_10001cb9:
          uVar6 = *(uint *)arguments;
          goto LAB_10001cbe;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              cVar5 = '\x01';
              goto LAB_10001cab;
            }
            goto switchD_10001aed_caseD_65;
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
LAB_10001cbe:
          recovered_10001d46(&local_1c,&local_18,(int *)&local_14,&local_1c,uVar6,uVar9,cVar5);
LAB_10001cc7:
          arguments = (void *)((int)arguments + 4);
          goto LAB_10001abf;
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
LAB_10001abf:
    format = format + 1;
  } while( true );
switchD_10001aed_caseD_68:
  cVar5 = format[1];
  format = format + 1;
  goto LAB_10001ae2;
}

#undef DAT_1000807c
#undef DAT_10008cc1
#undef _DAT_1000807c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f6U)
 */

void recovered_10001ce6(undefined4 param_1,uint *param_2,int *param_3,int *param_4,undefined1 param_5)

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


#undef str_10008c98
#define str_10008c98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1614U)
 */

void recovered_10001d04(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *in_ECX;
  uint *in_EDX;
  char *pcVar2;

  pcVar2 = str_10008c98;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  for (; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    recovered_10001ce6((int)cVar1,in_EDX,in_ECX,param_1,cVar1);
  }
  return;
}

#undef str_10008c98

#undef str_10008c9f
#define str_10008c9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85afU)))
#undef str_10008cb0
#define str_10008cb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85c0U)))
#define local_18 (*(int * *)(frame + 49))
#define acStack_39 (*(char (*)[33])(frame + 16))
#define local_14 (*(uint * *)(frame + 53))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1656U)
 */

void recovered_10001d46(undefined4 param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
                  uint param_6,char param_7)

{
  unsigned char frame[105] = {0};

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  pcVar3 = str_10008c9f;
  if (param_7 == '\0') {
    pcVar3 = str_10008cb0;
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
    recovered_10001ce6((int)acStack_39[iVar2],puVar1,local_18,param_4,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}

#undef str_10008c9f
#undef str_10008cb0
#undef local_18
#undef acStack_39
#undef local_14

#define uStack00000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c0U)
 */

int recovered_10001db0(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10001a51(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

#undef DAT_1000a0f8
#define DAT_1000a0f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16e3U)
 */

void recovered_10001dd3(undefined4 param_1,uint param_2,int param_3,int *param_4)

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
    if (DAT_1000a0f8 == 0) {
      puVar1 = &DAT_1000a0f8;
    }
    else {
      puVar1 = (undefined4 *)(*param_4 + 4);
    }
    *puVar1 = piVar3;
    *param_4 = (int)piVar3;
  }
  return;
}

#undef DAT_1000a0f8

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

undefined4 recovered_10001e25(void)

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

#undef DAT_1000a0fc
#define DAT_1000a0fc (*(int *)(((uintptr_t)pf_module_state + 0x9a0cU)))
#undef DAT_1000a100
#define DAT_1000a100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x176aU)
 */

void recovered_10001e5a(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;

  if (param_1 != (char *)0x0) {
    while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000a0fc != 0) {
          DAT_1000a0fc = DAT_1000a0fc + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001ee1();
        }
        else {
          if (DAT_1000a0fc - 0x1ffU < 0xfffffe00) {
            recovered_10001ee1();
          }
          pcVar1 = &DAT_1000a100 + DAT_1000a0fc;
          DAT_1000a0fc = DAT_1000a0fc + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000a0fc
#undef DAT_1000a100

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000a0fc
#define DAT_1000a0fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9a0cU)))
#undef DAT_1000a100
#define DAT_1000a100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a10U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17f1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ee1(void)

{
  unsigned char frame[568] = {0};

  ulong uVar1;
  undefined4 uVar2;
  byte in_CL;

  if ((DAT_1000a0fc == 0 & (in_CL ^ 1)) == 0) {
    if (DAT_1000a0fc == 0) {
      uVar1 = 0;
    }
    else {
      recovered_10000d16(local_208,&DAT_1000a100,DAT_1000a0fc);
      uVar1 = DAT_1000a0fc;
    }
    local_208[uVar1] = 0;
    uVar2 = recovered_10002b17();
    if (((char)uVar2 != '\0') && (_DAT_00006840 != (code *)0x0)) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000a0fc = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_1000a0fc
#undef DAT_1000a100
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1867U)
 */

void recovered_10001f57(void)

{
  unsigned char frame[64] = {0};

  recovered_10001ee1();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1873U)
 */

void recovered_10001f63(void)

{
  unsigned char frame[64] = {0};

  recovered_10001ee1();
  return;
}


#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
#undef DAT_10008cc4
#define DAT_10008cc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85d4U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187eU)
 */

void recovered_10001f6e(char *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_10008cc4;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10008c97;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10001db0(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10001e5a(local_148,iVar1);
  }
  return;
}

#undef DAT_10008c97
#undef DAT_10008cc4
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18d4U)
 */

void recovered_10001fc4(void)

{
  unsigned char frame[64] = {0};

  recovered_1000200a();
  recovered_1000200a();
  recovered_1000200a();
  recovered_1000200a();
  recovered_1000200a();
  recovered_1000200a();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191aU)
 */

void recovered_1000200a(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *in_ECX;

  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_10000ea6(in_ECX);
    recovered_10001e5a(in_ECX,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1941U)
 */

void recovered_10002031(void)

{
  unsigned char frame[64] = {0};

  recovered_1000200a();
  recovered_1000200a();
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

bool recovered_1000204f(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10001f63();
    uVar1 = recovered_10002b17();
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

undefined4 recovered_1000209e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19b5U)
 */

void recovered_100020a5(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19baU)
 */

undefined1 recovered_100020aa(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10008cc4
#define DAT_10008cc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85d4U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
#undef str_10008e45
#define str_10008e45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8755U)))
#undef str_10008e52
#define str_10008e52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8762U)))
#undef str_10008e60
#define str_10008e60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8770U)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19c1U)
 */

undefined4 * recovered_100020b1(char *param_1,int param_2)

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
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar1 = recovered_10000ec1(param_1,str_10008e45);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    iVar2 = recovered_10000ec1(param_1,str_10008e52);
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    else {
      iVar2 = recovered_10000ec1(param_1,str_10008e60);
      if (iVar2 != 0) {
        puVar3 = recovered_10000ca0(800);
        if (puVar3 != (undefined4 *)0x0) {
          recovered_10000d7d(puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_10000f56((char *)param_2,'r');
          bVar8 = true;
          bVar7 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_10000f56((char *)param_2,'+');
            bVar7 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_10000f56((char *)param_2,'a');
              bVar7 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar7;
          pcVar4 = recovered_10000f56((char *)param_2,'w');
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_10000f56((char *)param_2,'a'), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_10000f56((char *)param_2,'+');
            bVar8 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar8;
          pcVar4 = recovered_10000f56((char *)param_2,'a');
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_10001db0((char *)(puVar3 + 1),0xf1,&DAT_10008cc4,param_1);
          pvVar5 = recovered_10000d7d(&local_1c,0,0xc);
          iVar1 = recovered_1000236c(pvVar5,&local_1c,param_1);
          if (iVar1 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_1000a000 = 2;
LAB_10002338:
              recovered_10000cc8(puVar3);
              return (undefined4 *)0x0;
            }
          }
          else {
            pcVar4 = recovered_10000f56((char *)param_2,'w');
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar6 = recovered_1000239c(CONCAT31((int3)((uint)pcVar4 >> 8),pcVar4 != (char *)0x0)
                                           ,local_18,(int)puVar3);
                if ((char)uVar6 == '\0') goto LAB_10002338;
                recovered_10000d16((void *)puVar3[0x3f],local_1c,local_18);
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
        goto LAB_1000230d;
      }
      uVar6 = 3;
    }
  }
  puVar3 = recovered_10000ca0(800);
  if (puVar3 != (undefined4 *)0x0) {
    recovered_10000d7d(puVar3,0,800);
    *puVar3 = uVar6;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_10001db0((char *)(puVar3 + 1),0xf1,&DAT_10008cc4,param_1);
    return puVar3;
  }
LAB_1000230d:
  *(undefined4 *)PTR_DAT_1000a000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_10008cc4
#undef PTR_DAT_1000a000
#undef str_10008e45
#undef str_10008e52
#undef str_10008e60
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

undefined4 recovered_1000236c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10002b17();
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

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cacU)
 */

undefined4 recovered_1000239c(undefined4 param_1,uint param_2,int param_3)

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
    pvVar3 = recovered_10000cee(*(void **)(param_3 + 0xfc),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_3 + 0xfc) = pvVar3;
      *(uint *)(param_3 + 0x104) = uVar2;
      *(void **)(param_3 + 0xf8) = pvVar3;
      return uVar4;
    }
    *(undefined4 *)PTR_DAT_1000a000 = 0xc;
    *(undefined1 *)(param_3 + 0x115) = 1;
  }
  return 0;
}

#undef PTR_DAT_1000a000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d22U)
 */

void recovered_10002412(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_10002430(param_3);
  }
  recovered_100020b1(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d40U)
 */

undefined4 recovered_10002430(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002767(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10000cc8((void *)param_1[0x3f]);
    }
    recovered_10000cc8(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d80U)
 */

int recovered_10002470(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
        uVar2 = recovered_100024e3(param_4);
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


#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df3U)
 */

uint recovered_100024e3(int *param_1)

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
LAB_1000257d:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      bVar1 = recovered_1000204f((int)param_1 + 0x116,0x1fe,&DAT_10008c97,0);
      if (bVar1) {
        uVar2 = recovered_10000ea6((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_1000257d;
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

#undef DAT_10008c97

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ed4U)
 */

int recovered_100025c4(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10001e5a(param_1,size);
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
      uVar1 = recovered_1000239c(*param_4 & 0xfffffffe,uVar3 + size,(int)param_4);
      if ((char)uVar1 != '\0') {
        uVar3 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
          recovered_10000d7d((void *)(uVar3 + param_4[0x3f]),0,uVar2 - uVar3);
          uVar2 = param_4[0x42];
        }
        recovered_10000d16((void *)(uVar2 + param_4[0x3f]),param_1,size);
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


#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fdcU)
 */

undefined4 recovered_100026cc(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_100026db;
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
LAB_100026db:
  *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000a000

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2055U)
 */

undefined4 recovered_10002745(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000a000

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2077U)
 */

undefined4 recovered_10002767(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = recovered_10002926(param_1[0x40],param_1[0x3e],param_1 + 1,param_1[0x40]);
    if (iVar1 == 0) {
      *(undefined4 *)PTR_DAT_1000a000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
  }
  return uVar2;
}

#undef PTR_DAT_1000a000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d8U)
 */

undefined1 recovered_100027c8(int param_1)

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

undefined1 recovered_100027df(int param_1)

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

void recovered_100027f6(int param_1)

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

uint recovered_10002811(uint param_1,int param_2)

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


#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2150U)
 */

undefined4 recovered_10002840(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    iVar1 = recovered_10002871();
    if (iVar1 != 0) {
      return 0;
    }
    uStack_10 = 5;
  }
  *(undefined4 *)PTR_DAT_1000a000 = uStack_10;
  return 0xffffffff;
}

#undef PTR_DAT_1000a000
#undef uStack_10

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2181U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002871(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10002b17();
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

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21acU)
 */

undefined4 recovered_1000289c(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  }
  else {
    pvVar1 = recovered_10000d7d(&local_1c,0,0xc);
    iVar2 = recovered_1000236c(pvVar1,&local_1c,param_1);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      iVar2 = recovered_10002926(iVar2,local_1c,param_2,local_18);
      uVar3 = 5;
      if ((iVar2 != 0) && (iVar2 = recovered_10002871(), iVar2 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_1000a000 = uVar3;
  }
  return 0xffffffff;
}

#undef PTR_DAT_1000a000
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

undefined4 recovered_10002926(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10002b17();
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

undefined4 recovered_10002959(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    pvVar1 = recovered_10000d7d(&local_1c,0,0xc);
    iVar2 = recovered_1000236c(pvVar1,&local_1c,param_1);
    if (iVar2 != 0) {
      pvVar1 = recovered_10000ca0(local_18 + (local_18 == 0));
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_10000d16(pvVar1,local_1c,local_18);
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

bool recovered_100029eb(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  iVar1 = recovered_10002926(param_3,param_2,param_1,param_3);
  return iVar1 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2332U)
 */

undefined4 recovered_10002a22(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2339U)
 */

void recovered_10002a29(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x233eU)
 */

undefined4 recovered_10002a2e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2345U)
 */

undefined4 recovered_10002a35(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x234cU)
 */

undefined4 recovered_10002a3c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2353U)
 */

int recovered_10002a43(int param_1,char param_2,int param_3)

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

int recovered_10002a67(char *left,char *right,ulong size)

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


#undef DAT_10008dd4
#define DAT_10008dd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86e4U)))
#undef str_10008dd7
#define str_10008dd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86e7U)))
#undef str_10008de4
#define str_10008de4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86f4U)))
#undef str_10008dee
#define str_10008dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86feU)))
#undef str_10008e02
#define str_10008e02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8712U)))
#undef str_10008e10
#define str_10008e10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8720U)))
#undef str_10008e22
#define str_10008e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8732U)))
#undef str_10008e2e
#define str_10008e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x873eU)))
#undef str_10008e3f
#define str_10008e3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x874fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x23aaU)
 */

char * recovered_10002a9a(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10008dd4;
    break;
  case 2:
    pcVar1 = str_10008dd7;
    break;
  case 5:
    pcVar1 = str_10008de4;
    break;
  case 9:
    pcVar1 = str_10008dee;
    break;
  case 0xc:
    pcVar1 = str_10008e02;
    break;
  case 0xd:
    pcVar1 = str_10008e10;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10008e22;
    }
    if (param_1 == 0x16) {
      return str_10008e2e;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10008e3f;
  }
  return pcVar1;
}

#undef DAT_10008dd4
#undef str_10008dd7
#undef str_10008de4
#undef str_10008dee
#undef str_10008e02
#undef str_10008e10
#undef str_10008e22
#undef str_10008e2e
#undef str_10008e3f

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2405U)
 */

undefined4 recovered_10002af5(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x240cU)
 */

undefined4 recovered_10002afc(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000a300
#define DAT_1000a300 (*(int *)(((uintptr_t)pf_module_state + 0x9c10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2414U)
 */

void recovered_10002b04(void)

{
  unsigned char frame[64] = {0};

  DAT_1000a300 = DAT_1000a300 + 1;
  return;
}

#undef DAT_1000a300

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

undefined4 recovered_10002b17(void)

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

void recovered_10002b50(int param_1)

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

undefined4 recovered_10002b5f(undefined4 *param_1)

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

void recovered_10002b80(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x24b2U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_10002be3
#define DAT_10002be3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f3U)))
#undef DAT_10008e70
#define DAT_10008e70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8780U)))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(undefined4 *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x24b6U)
 */

void recovered_10002ba6(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10002c10;
  local_28 = &DAT_10008e70;
  local_20 = &DAT_10002be3;
  local_40 = 1;
  recovered_10002fba(&local_44);
  recovered_10000c88();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002be3
#undef DAT_10008e70
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2520U)
 */

undefined4 recovered_10002c10(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2523U)
 */

void recovered_10002c13(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c30(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002ba6();
}


#undef DAT_1000a304
#define DAT_1000a304 (*(int *)(((uintptr_t)pf_module_state + 0x9c14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2540U)
 */

int recovered_10002c30(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000a304;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000a304 = param_1;
  iVar1 = recovered_10002ec8();
  return iVar1;
}

#undef DAT_1000a304

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2562U)
 */

void * recovered_10002c52(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ca0(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000c88();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x258bU)
 */

void * recovered_10002c7b(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002c52(size);
  return pvVar1;
}


#undef DAT_10008e80
#define DAT_10008e80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8790U)))
#undef LAB_10002cd8
#define LAB_10002cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25e8U)))
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
 * Address: ((uintptr_t)pf_module_state+0x2594U)
 */

void recovered_10002c84(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10002c10;
  local_28 = &DAT_10008e80;
  local_20 = &LAB_10002cd8;
  local_40 = 1;
  recovered_10002fba(&local_44);
  recovered_10000cc8(data);
  recovered_10002fcf(&local_44);
  return;
}

#undef DAT_10008e80
#undef LAB_10002cd8
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

#undef DAT_10008e90
#define DAT_10008e90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87a0U)))
#undef LAB_10002d4b
#define LAB_10002d4b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265bU)))
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
 * Address: ((uintptr_t)pf_module_state+0x2607U)
 */

void recovered_10002cf7(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10002c10;
  local_28 = &DAT_10008e90;
  local_20 = &LAB_10002d4b;
  local_40 = 1;
  recovered_10002fba(&local_44);
  recovered_10000cc8(data);
  recovered_10002fcf(&local_44);
  return;
}

#undef DAT_10008e90
#undef LAB_10002d4b
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_10008ea0
#define DAT_10008ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87b0U)))
#undef LAB_10002dbe
#define LAB_10002dbe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26ceU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x267aU)
 */

void recovered_10002d6a(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10002c10;
  local_28 = &DAT_10008ea0;
  local_20 = &LAB_10002dbe;
  local_40 = 1;
  recovered_10002fba(&local_44);
  recovered_10000cc8(param_1);
  recovered_10002fcf(&local_44);
  return;
}

#undef DAT_10008ea0
#undef LAB_10002dbe
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef auStackY_cc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10008eb0
#define DAT_10008eb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87c0U)))
#undef LAB_10002e31
#define LAB_10002e31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2741U)))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26edU)
 */

void recovered_10002ddd(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10002c10;
  local_28 = &DAT_10008eb0;
  local_20 = &LAB_10002e31;
  local_40 = 1;
  recovered_10002fba(&local_44);
  recovered_10000cc8(param_1);
  recovered_10002fcf(&local_44);
  return;
}

#undef DAT_10008eb0
#undef LAB_10002e31
#undef local_20
#undef local_1c
#undef auStack_18
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2760U)
 */

undefined4 recovered_10002e50(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2767U)
 */

uint recovered_10002e57(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2776U)
 */

void recovered_10002e66(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2781U)
 */

void recovered_10002e71(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2786U)
 */

undefined1 * recovered_10002e76(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  bool bVar3;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10000ca0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002ba6();
  }
  puVar2 = puVar1;
  while (bVar3 = size != 0, size = size - 1, bVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27bbU)
 */

void recovered_10002eab(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10000cc8((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27d8U)
 */

int recovered_10002ec8(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  return in_ECX + 0x1c;
}


#undef DAT_1000a304
#define DAT_1000a304 (*(void * *)(((uintptr_t)pf_module_state + 0x9c14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27e0U)
 */

void recovered_10002ed0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  void *buffer;

  buffer = DAT_1000a304;
  if (DAT_1000a304 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000a304 + 8);
    DAT_1000a304 = *(void **)((int)DAT_1000a304 + 8);
    *puVar1 = 0;
    if (*(char *)((int)buffer + 0x18) == '\0') {
      if (*(code **)((int)buffer + 4) != (code *)0x0) {
        (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
      }
      recovered_10000cc8(buffer);
    }
  }
  return;
}

#undef DAT_1000a304

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x281eU)
 */

void recovered_10002f0e(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  recovered_10002f3a();
  return;
}


#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9c18U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x284aU)
 */

void recovered_10002f3a(void)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;

  puVar2 = &DAT_1000a308;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_10002f8b;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_100033ad((undefined2 *)&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  recovered_1000302f();
LAB_10002f8b:
                    /* WARNING: Subroutine does not return */
  recovered_10002ba6();
}

#undef DAT_1000a308
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000a304
#define DAT_1000a304 (*(int *)(((uintptr_t)pf_module_state + 0x9c14U)))
#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9c18U)))
#define puStack_8 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28a0U)
 */

void recovered_10002f90(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_1000a304;
  if (DAT_1000a304 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002ba6();
  }
  *(undefined1 *)(DAT_1000a304 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  recovered_10002f3a();
  *puStack_8 = DAT_1000a308;
  DAT_1000a308 = puStack_8;
  return;
}

#undef DAT_1000a304
#undef DAT_1000a308
#undef puStack_8

#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9c18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28caU)
 */

void recovered_10002fba(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000a308;
  DAT_1000a308 = param_1;
  return;
}

#undef DAT_1000a308

#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9c18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28dfU)
 */

void recovered_10002fcf(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000a308;
  if (DAT_1000a308 == param_1) {
    puVar2 = &DAT_1000a308;
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

#undef DAT_1000a308

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2908U)
 */

void recovered_10002ff8(void)

{
  unsigned char frame[64] = {0};

  recovered_10002f3a();
                    /* WARNING: Subroutine does not return */
  recovered_10002ba6();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2916U)
 */

void recovered_10003006(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002ba6();
}


#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9c18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2921U)
 */

void recovered_10003011(void)

{
  unsigned char frame[64] = {0};

  if (DAT_1000a308 != (undefined4 *)0x0) {
    DAT_1000a308 = (undefined4 *)*DAT_1000a308;
  }
  recovered_1000302f();
  return;
}

#undef DAT_1000a308

#undef DAT_1000a308
#define DAT_1000a308 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9c18U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x293fU)
 */

void recovered_1000302f(void)

{
  unsigned char frame[76] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;

  while( true ) {
    puVar1 = DAT_1000a308;
    if (DAT_1000a308 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002ba6();
    }
    if (DAT_1000a308 == *(undefined4 **)(in_ECX + 0xc)) break;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_100033ad((undefined2 *)&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = in_ECX;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_10003097;
    }
    DAT_1000a308 = (undefined4 *)*puVar1;
  }
  DAT_1000a308[2] = in_ECX;
  puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
LAB_10003097:
  puVar1[1] = uVar2;
  recovered_10002b50((int)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10003011();
}

#undef DAT_1000a308
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29b2U)
 */

void recovered_100030a2(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003011();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29c3U)
 */

undefined4 recovered_100030b3(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29caU)
 */

void recovered_100030ba(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002ba6();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29d5U)
 */

int recovered_100030c5(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int iVar3;

  iVar3 = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = (int)param_1 + *(int *)(iVar1 + -8);
    bVar2 = recovered_100030fb(iVar1,param_3,*(undefined4 **)(iVar1 + -4));
    if (!bVar2) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


#undef DAT_1000a0dc
#define DAT_1000a0dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x99ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a0bU)
 */

bool recovered_100030fb(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    if ((undefined *)*puVar5 == &DAT_1000a0dc) {
      param_3 = (undefined4 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_1000a0dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a72U)
 */

void recovered_10003162(void)

{
  unsigned char frame[64] = {0};

  recovered_10000c88();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a7bU)
 */

undefined4 recovered_1000316b(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a82U)
 */

bool recovered_10003172(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a95U)
 */

bool recovered_10003185(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x2abcU)
 */

bool recovered_100031ac(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2adeU)
 */

bool recovered_100031ce(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af3U)
 */

bool recovered_100031e3(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b08U)
 */

byte recovered_100031f8(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b42U)
 */

bool recovered_10003232(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7980U)))
#undef _DAT_10008050
#define _DAT_10008050 (*(float *)(((uintptr_t)pf_module_state + 0x7960U)))
#undef _DAT_10008070
#define _DAT_10008070 (*(float *)(((uintptr_t)pf_module_state + 0x7980U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b57U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003247(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100011ca(value);
  if ((double)_DAT_10008050 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10008070 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_10008050
#undef DAT_10008070
#undef _DAT_10008050
#undef _DAT_10008070

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define local_14 (*(uint *)(frame + 24))
#define uStack_1c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b9fU)
 */

ulonglong recovered_1000328f(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_100032c7;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_100032c7:
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
 * Address: ((uintptr_t)pf_module_state+0x2cb4U)
 */

void recovered_100033a4(void)

{
  unsigned char frame[64] = {0};


  recovered_1000328f(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_100081a4
#define DAT_100081a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ab4U)))
#define local_18 (*(byte * *)(frame + 16))
#define local_14 (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cbdU)
 */

undefined4 recovered_100033ad(undefined2 *param_1)

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
      recovered_1000354b(CONCAT31((int3)((uint)pbVar5 >> 8),bVar4),&local_14,(uint)bVar4);
    }
    pbVar5 = local_14 + 1;
    uVar7 = (ushort)*local_14;
    if (uVar7 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar5;
      uVar1 = recovered_100035ff();
      local_18 = local_14 + uVar1;
      pbVar5 = local_14;
    }
    local_14 = pbVar5 + 1;
    uVar1 = recovered_100035ff();
    iVar8 = *(int *)(in_ECX + 4);
    if (0 < iVar8) {
      pbVar5 = local_14 + uVar1;
      while (local_14 < pbVar5) {
        uVar1 = recovered_100035ff();
        uVar2 = recovered_100035ff();
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
            uVar2 = recovered_1000364b();
            pbVar5 = (byte *)recovered_1000364b();
            if (uVar2 == 0) {
              *(undefined1 *)((int)param_1 + 1) = 1;
            }
            else if (0 < (int)uVar2) {
              pbVar3 = pbVar5;
              pbVar6 = (byte *)0x0;
              if (((~(byte)(0x1c1d >> bVar4) | ~(bVar4 < 0xd && local_18 != (byte *)0x0)) & 1) == 0)
              {
                local_14 = local_18 + *(int *)(&DAT_100081a4 + uVar1 * 4) * uVar2;
                pbVar3 = recovered_1000354b(local_14,&local_14,(uint)uVar7);
                pbVar6 = pbVar3;
              }
              bVar9 = recovered_100030fb(pbVar3,(undefined4 *)pbVar6,in_EDX);
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

#undef DAT_100081a4
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e5bU)
 */

byte * recovered_1000354b(undefined4 param_1,undefined4 *param_2,uint param_3)

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
    pbVar4 = (byte *)recovered_1000362a(uVar2,4,pbVar1);
    pbVar3 = pbVar1 + 4;
    break;
  case 1:
    pbVar4 = (byte *)recovered_100035ff();
    goto LAB_100035d8;
  case 2:
    pbVar4 = (byte *)recovered_1000362a(uVar2,2,pbVar1);
    goto LAB_100035d0;
  case 4:
  case 0xc:
    pbVar4 = (byte *)recovered_1000362a(uVar2,8,pbVar1);
    pbVar3 = pbVar1 + 8;
    break;
  default:
    goto switchD_10003579_caseD_5;
  case 9:
    pbVar4 = (byte *)recovered_1000364b();
    goto LAB_100035d8;
  case 10:
    uVar2 = recovered_1000362a(uVar2,2,pbVar1);
    pbVar4 = (byte *)((int)(short)uVar2 & 0xffff0000U | uVar2);
LAB_100035d0:
    pbVar3 = pbVar1 + 2;
  }
  *param_2 = pbVar3;
LAB_100035d8:
  if ((param_3 & 0x70) != 0) {
    if ((param_3 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar4 = pbVar4 + (int)pbVar1;
  }
  if (((char)param_3 < '\0') && (pbVar4 != (byte *)0x0)) {
    pbVar4 = *(byte **)pbVar4;
  }
switchD_10003579_caseD_5:
  return pbVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f0fU)
 */

uint recovered_100035ff(void)

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
 * Address: ((uintptr_t)pf_module_state+0x2f3aU)
 */

uint recovered_1000362a(undefined4 param_1,int param_2,byte *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x2f5bU)
 */

uint recovered_1000364b(void)

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
 * Address: ((uintptr_t)pf_module_state+0x2fa4U)
 */

void recovered_10003694(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2faaU)
 */

void recovered_1000369a(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_10008ec0
#define DAT_10008ec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87d0U)))
#undef LAB_10003731
#define LAB_10003731 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3041U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_14 (*(undefined4 *)(frame + 216))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fb0U)
 */

undefined1 * recovered_100036a0(undefined1 *param_1,int *param_2)

{
  unsigned char frame[268] = {0};

  int *piVar1;

  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  local_34 = PTR_recovered_10002c10_1000a034;
  local_30 = &DAT_10008ec0;
  local_28 = &LAB_10003731;
  local_48 = 1;
  local_14 = piVar1;
  recovered_10002fba(&local_4c);
  recovered_10003760(piVar1,param_2);
  param_1[0x1c] = 0;
  recovered_10002fcf(&local_4c);
  return param_1;
}

#undef DAT_10008ec0
#undef LAB_10003731
#undef PTR_recovered_10002c10_1000a034
#undef local_14
#undef local_4c
#undef local_48
#undef local_34
#undef auStackY_dc
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3070U)
 */

int * recovered_10003760(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10008c97;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000600a(param_1,(int)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10008c97

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30a6U)
 */

undefined1 * recovered_10003796(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  recovered_100037dc((undefined4 *)(param_1 + 4),param_2);
  param_1[0x1c] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30ecU)
 */

undefined4 * recovered_100037dc(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    recovered_10002c84((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x312cU)
 */

void recovered_1000381c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x315aU)
 */

void recovered_1000384a(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(uint *)(param_1 + 0x18) = param_2 + (uint)(param_2 == 0);
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x318cU)
 */

void recovered_1000387c(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31aeU)
 */

void recovered_1000389e(undefined1 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  recovered_10003760((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x31daU)
 */

void recovered_100038ca(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 1;
  recovered_100037dc((undefined4 *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3206U)
 */

void recovered_100038f6(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x322cU)
 */

undefined4 * recovered_1000391c(undefined4 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  if (*param_2 == '\x02') {
    recovered_10003971(param_1,*(uint *)(param_2 + 0x10),*(uint *)(param_2 + 0x14));
  }
  else if (*param_2 == '\x01') {
    recovered_1000617e(param_1,(undefined4 *)(param_2 + 4));
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}


#define local_2c (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3281U)
 */

undefined4 * recovered_10003971(undefined4 *param_1,uint param_2,uint param_3)

{
  unsigned char frame[92] = {0};

  undefined8 uVar1;

  uVar1 = recovered_100061b5(local_2c,local_2c + 0x20,param_2,param_3,10);
  if ((int)((ulonglong)uVar1 >> 0x20) == 0) {
    recovered_10006134(param_1,(int)local_2c,(int)uVar1 - (int)local_2c);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}

#undef local_2c

#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x32d4U)
 */

/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x3357U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x335cU)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x33b4U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x33bbU)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_module_state+0x33c0U)) */

undefined4 recovered_100039c4(char *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  char *pcVar2;

  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)PTR_DAT_1000a000 = 0;
      recovered_100033a4();
      pcVar2 = &DAT_10008c97;
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        pcVar2 = *(char **)(param_1 + 4);
      }
      if (((2 < *(uint *)(param_1 + 8)) && (*pcVar2 == '0')) && ((byte)(pcVar2[1] | 0x20U) == 0x78))
      {
        *(undefined4 *)PTR_DAT_1000a000 = 0;
        recovered_100033a4();
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

#undef DAT_10008c97
#undef PTR_DAT_1000a000

#undef DAT_10008ec8
#define DAT_10008ec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87d8U)))
#undef LAB_10003b70
#define LAB_10003b70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3480U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 200))
#define local_18 (*(undefined4 * *)(frame + 212))
#define local_14 (*(uint * *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x33d8U)
 */

void recovered_10003ac8(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[268] = {0};


  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  *param_1 = param_2;
  local_14 = param_1 + 1;
  *local_14 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_18 = param_1 + 4;
  *local_18 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  local_34 = PTR_recovered_10002c10_1000a034;
  local_30 = &DAT_10008ec8;
  local_28 = &LAB_10003b70;
  local_48 = 1;
  recovered_10002fba(&local_4c);
  recovered_10003baa((int)param_1);
  recovered_10004e6e((int)param_1);
  recovered_10002fcf(&local_4c);
  return;
}

#undef DAT_10008ec8
#undef LAB_10003b70
#undef PTR_recovered_10002c10_1000a034
#undef auStackY_dc
#undef local_4c
#undef local_48
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_18
#undef local_14

#undef DAT_10008ed0
#define DAT_10008ed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x87e0U)))
#undef LAB_100049e5
#define LAB_100049e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42f5U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#undef PTR_recovered_100067c6_10009048
#define PTR_recovered_100067c6_10009048 (*(void * *)(((uintptr_t)pf_module_state + 0x8958U)))
#undef PTR_recovered_1000693e_10009074
#define PTR_recovered_1000693e_10009074 (*(void * *)(((uintptr_t)pf_module_state + 0x8984U)))
#undef PTR_recovered_10006a74_10009098
#define PTR_recovered_10006a74_10009098 (*(void * *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef PTR_recovered_10006b04_100090bc
#define PTR_recovered_10006b04_100090bc (*(void * *)(((uintptr_t)pf_module_state + 0x89ccU)))
#undef PTR_recovered_10006b8a_100090e0
#define PTR_recovered_10006b8a_100090e0 (*(void * *)(((uintptr_t)pf_module_state + 0x89f0U)))
#undef PTR_recovered_10006bfe_10009104
#define PTR_recovered_10006bfe_10009104 (*(void * *)(((uintptr_t)pf_module_state + 0x8a14U)))
#undef PTR_recovered_10006c84_10009128
#define PTR_recovered_10006c84_10009128 (*(void * *)(((uintptr_t)pf_module_state + 0x8a38U)))
#undef PTR_recovered_10006dfc_1000914c
#define PTR_recovered_10006dfc_1000914c (*(void * *)(((uintptr_t)pf_module_state + 0x8a5cU)))
#undef PTR_recovered_10006f26_10009170
#define PTR_recovered_10006f26_10009170 (*(void * *)(((uintptr_t)pf_module_state + 0x8a80U)))
#undef PTR_recovered_1000721a_10009194
#define PTR_recovered_1000721a_10009194 (*(void * *)(((uintptr_t)pf_module_state + 0x8aa4U)))
#undef PTR_recovered_100072b0_100091b8
#define PTR_recovered_100072b0_100091b8 (*(void * *)(((uintptr_t)pf_module_state + 0x8ac8U)))
#undef PTR_recovered_1000730e_100091dc
#define PTR_recovered_1000730e_100091dc (*(void * *)(((uintptr_t)pf_module_state + 0x8aecU)))
#undef PTR_recovered_10007610_10009200
#define PTR_recovered_10007610_10009200 (*(void * *)(((uintptr_t)pf_module_state + 0x8b10U)))
#undef PTR_recovered_10007736_10009224
#define PTR_recovered_10007736_10009224 (*(void * *)(((uintptr_t)pf_module_state + 0x8b34U)))
#undef PTR_recovered_100077c4_10009248
#define PTR_recovered_100077c4_10009248 (*(void * *)(((uintptr_t)pf_module_state + 0x8b58U)))
#undef PTR_recovered_1000786e_1000926c
#define PTR_recovered_1000786e_1000926c (*(void * *)(((uintptr_t)pf_module_state + 0x8b7cU)))
#undef PTR_recovered_100078fc_10009290
#define PTR_recovered_100078fc_10009290 (*(void * *)(((uintptr_t)pf_module_state + 0x8ba0U)))
#undef PTR_recovered_100079a6_100092b4
#define PTR_recovered_100079a6_100092b4 (*(void * *)(((uintptr_t)pf_module_state + 0x8bc4U)))
#undef PTR_recovered_10007a44_100092d8
#define PTR_recovered_10007a44_100092d8 (*(void * *)(((uintptr_t)pf_module_state + 0x8be8U)))
#undef PTR_recovered_10007af8_100092fc
#define PTR_recovered_10007af8_100092fc (*(void * *)(((uintptr_t)pf_module_state + 0x8c0cU)))
#undef PTR_recovered_10007ba4_10009320
#define PTR_recovered_10007ba4_10009320 (*(void * *)(((uintptr_t)pf_module_state + 0x8c30U)))
#undef PTR_recovered_10007c62_10009344
#define PTR_recovered_10007c62_10009344 (*(void * *)(((uintptr_t)pf_module_state + 0x8c54U)))
#define local_100 (*(void * *)(frame + 348))
#define local_fc (*(undefined4 *)(frame + 352))
#define local_f4 (*(void * *)(frame + 360))
#define local_f0 (*(undefined4 *)(frame + 364))
#define local_e8 (*(void * *)(frame + 372))
#define local_e4 (*(undefined4 *)(frame + 376))
#define local_dc (*(void * *)(frame + 384))
#define local_d8 (*(undefined4 *)(frame + 388))
#define local_d0 (*(void * *)(frame + 396))
#define local_cc (*(undefined4 *)(frame + 400))
#define local_c4 (*(void * *)(frame + 408))
#define local_c0 (*(undefined4 *)(frame + 412))
#define local_b8 (*(void * *)(frame + 420))
#define local_b4 (*(undefined4 *)(frame + 424))
#define local_ac (*(int * *)(frame + 432))
#define local_a8 (*(int * *)(frame + 436))
#define local_a4 (*(int * *)(frame + 440))
#define local_a0 (*(int * *)(frame + 444))
#define local_9c (*(int * *)(frame + 448))
#define local_98 (*(int * *)(frame + 452))
#define local_94 (*(int * *)(frame + 456))
#define local_90 (*(int * *)(frame + 460))
#define local_8c (*(int * *)(frame + 464))
#define local_88 (*(int * *)(frame + 468))
#define local_84 (*(int * *)(frame + 472))
#define local_80 (*(int * *)(frame + 476))
#define local_7c (*(int * *)(frame + 480))
#define local_78 (*(int * *)(frame + 484))
#define local_74 (*(int * *)(frame + 488))
#define local_70 (*(int * *)(frame + 492))
#define local_6c (*(int * *)(frame + 496))
#define local_68 (*(int * *)(frame + 500))
#define local_64 (*(int * *)(frame + 504))
#define local_60 (*(int * *)(frame + 508))
#define local_5c (*(int * *)(frame + 512))
#define local_58 (*(int * *)(frame + 516))
#define local_54 (*(undefined4 *)(frame + 520))
#define local_50 (*(undefined4 *)(frame + 524))
#define local_3c (*(undefined * *)(frame + 544))
#define local_38 (*(undefined * *)(frame + 548))
#define local_34 (*(undefined1 * *)(frame + 552))
#define local_30 (*(undefined1 * *)(frame + 556))
#define local_2c (*(undefined1 * *)(frame + 560))
#define local_1c (*(undefined2 * *)(frame + 576))
#define local_18 (*(undefined4 *)(frame + 580))
#define local_13 (*(undefined2 *)(frame + 585))
#define local_11 (*(undefined1 *)(frame + 587))
#define auStackY_24c (*(undefined1 (*)[128])(frame + 16))
#define local_1b4 (*(void * *)(frame + 168))
#define local_1b0 (*(undefined4 *)(frame + 172))
#define local_1a8 (*(void * *)(frame + 180))
#define local_1a4 (*(undefined4 *)(frame + 184))
#define local_19c (*(void * *)(frame + 192))
#define local_198 (*(undefined4 *)(frame + 196))
#define local_190 (*(void * *)(frame + 204))
#define local_18c (*(undefined4 *)(frame + 208))
#define local_184 (*(void * *)(frame + 216))
#define local_180 (*(undefined4 *)(frame + 220))
#define local_178 (*(void * *)(frame + 228))
#define local_174 (*(undefined4 *)(frame + 232))
#define local_16c (*(void * *)(frame + 240))
#define local_168 (*(undefined4 *)(frame + 244))
#define local_160 (*(void * *)(frame + 252))
#define local_15c (*(undefined4 *)(frame + 256))
#define local_154 (*(void * *)(frame + 264))
#define local_150 (*(undefined4 *)(frame + 268))
#define local_148 (*(void * *)(frame + 276))
#define local_144 (*(undefined4 *)(frame + 280))
#define local_13c (*(void * *)(frame + 288))
#define local_138 (*(undefined4 *)(frame + 292))
#define local_130 (*(void * *)(frame + 300))
#define local_12c (*(undefined4 *)(frame + 304))
#define local_124 (*(void * *)(frame + 312))
#define local_120 (*(undefined4 *)(frame + 316))
#define local_118 (*(void * *)(frame + 324))
#define local_114 (*(undefined4 *)(frame + 328))
#define local_10c (*(void * *)(frame + 336))
#define local_108 (*(undefined4 *)(frame + 340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34baU)
 */

void recovered_10003baa(int param_1)

{
  unsigned char frame[636] = {0};


  recovered_10005a5e((int *)(param_1 + 0x10));
  local_1c = &local_13;
  local_13 = (ushort)PF_PART1(local_13, 1) << 8;
  local_18 = 1;
  recovered_1000673c((int *)&local_1b4,(undefined1 *)local_1c,1);
  local_2c = auStackY_24c + 0x80;
  local_3c = PTR_recovered_10002c10_1000a034;
  local_38 = &DAT_10008ed0;
  local_30 = &LAB_100049e5;
  local_50 = 1;
  local_34 = (undefined1 *)((int)(uintptr_t)(frame + 604) + -4);
  recovered_10002fba(&local_54);
  local_ac = recovered_10002c52(8);
  *local_ac = (int)&PTR_recovered_100067c6_10009048;
  local_50 = 2;
  recovered_100058a8(param_1,1,&local_1b4,(int *)&local_ac);
  if (local_ac != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_ac + 4)))(local_ac);
  }
  local_1b0 = 0;
  recovered_10002c84(local_1b4);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_1a8,(undefined1 *)local_1c,1);
  local_50 = 3;
  local_a8 = recovered_10002c52(8);
  *local_a8 = (int)&PTR_recovered_1000693e_10009074;
  local_50 = 4;
  recovered_100058a8(param_1,2,&local_1a8,(int *)&local_a8);
  if (local_a8 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_a8 + 4)))(local_a8);
  }
  local_1a4 = 0;
  recovered_10002c84(local_1a8);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_19c,(undefined1 *)local_1c,1);
  local_50 = 5;
  local_a4 = recovered_10002c52(8);
  *local_a4 = (int)&PTR_recovered_10006a74_10009098;
  local_50 = 6;
  recovered_100058a8(param_1,3,&local_19c,(int *)&local_a4);
  if (local_a4 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_a4 + 4)))(local_a4);
  }
  local_198 = 0;
  recovered_10002c84(local_19c);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_190,(undefined1 *)local_1c,1);
  local_50 = 7;
  local_a0 = recovered_10002c52(8);
  *local_a0 = (int)&PTR_recovered_10006b04_100090bc;
  local_50 = 8;
  recovered_100058a8(param_1,4,&local_190,(int *)&local_a0);
  if (local_a0 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_a0 + 4)))(local_a0);
  }
  local_18c = 0;
  recovered_10002c84(local_190);
  local_13 = local_13 & 0xff00;
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_184,(undefined1 *)local_1c,1);
  local_50 = 9;
  local_9c = recovered_10002c52(8);
  *local_9c = (int)&PTR_recovered_10006b8a_100090e0;
  local_50 = 10;
  recovered_100058a8(param_1,5,&local_184,(int *)&local_9c);
  if (local_9c != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_9c + 4)))(local_9c);
  }
  local_180 = 0;
  recovered_10002c84(local_184);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_178,(undefined1 *)local_1c,1);
  local_50 = 0xb;
  local_98 = recovered_10002c52(8);
  *local_98 = (int)&PTR_recovered_10006bfe_10009104;
  local_50 = 0xc;
  recovered_100058a8(param_1,6,&local_178,(int *)&local_98);
  if (local_98 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_98 + 4)))(local_98);
  }
  local_174 = 0;
  recovered_10002c84(local_178);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_16c,(undefined1 *)local_1c,1);
  local_50 = 0xd;
  local_94 = recovered_10002c52(8);
  *local_94 = (int)&PTR_recovered_10006c84_10009128;
  local_50 = 0xe;
  recovered_100058a8(param_1,7,&local_16c,(int *)&local_94);
  if (local_94 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_94 + 4)))(local_94);
  }
  local_168 = 0;
  recovered_10002c84(local_16c);
  local_13 = 0x101;
  local_11 = 1;
  local_1c = &local_13;
  local_18 = 3;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_160,(undefined1 *)local_1c,3);
  local_50 = 0xf;
  local_90 = recovered_10002c52(8);
  *local_90 = (int)&PTR_recovered_10006dfc_1000914c;
  local_50 = 0x10;
  recovered_100058a8(param_1,8,&local_160,(int *)&local_90);
  if (local_90 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_90 + 4)))(local_90);
  }
  local_15c = 0;
  recovered_10002c84(local_160);
  local_13 = 0x101;
  local_11 = 0;
  local_1c = &local_13;
  local_18 = 3;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_154,(undefined1 *)local_1c,3);
  local_50 = 0x11;
  local_8c = recovered_10002c52(8);
  *local_8c = (int)&PTR_recovered_10006f26_10009170;
  local_50 = 0x12;
  recovered_100058a8(param_1,9,&local_154,(int *)&local_8c);
  if (local_8c != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_8c + 4)))(local_8c);
  }
  local_150 = 0;
  recovered_10002c84(local_154);
  local_13 = 0x101;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_148,(undefined1 *)local_1c,2);
  local_50 = 0x13;
  local_88 = recovered_10002c52(8);
  *local_88 = (int)&PTR_recovered_1000721a_10009194;
  local_50 = 0x14;
  recovered_100058a8(param_1,10,&local_148,(int *)&local_88);
  if (local_88 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_88 + 4)))(local_88);
  }
  local_144 = 0;
  recovered_10002c84(local_148);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_13c,(undefined1 *)local_1c,1);
  local_50 = 0x15;
  local_84 = recovered_10002c52(8);
  *local_84 = (int)&PTR_recovered_100072b0_100091b8;
  local_50 = 0x16;
  recovered_100058a8(param_1,0xb,&local_13c,(int *)&local_84);
  if (local_84 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_84 + 4)))(local_84);
  }
  local_138 = 0;
  recovered_10002c84(local_13c);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_130,(undefined1 *)local_1c,2);
  local_50 = 0x17;
  local_80 = recovered_10002c52(8);
  *local_80 = (int)&PTR_recovered_1000730e_100091dc;
  local_50 = 0x18;
  recovered_100058a8(param_1,0xc,&local_130,(int *)&local_80);
  if (local_80 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_80 + 4)))(local_80);
  }
  local_12c = 0;
  recovered_10002c84(local_130);
  local_13 = 2;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_124,(undefined1 *)local_1c,2);
  local_50 = 0x19;
  local_7c = recovered_10002c52(8);
  *local_7c = (int)&PTR_recovered_10007610_10009200;
  local_50 = 0x1a;
  recovered_100058a8(param_1,0xd,&local_124,(int *)&local_7c);
  if (local_7c != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_7c + 4)))(local_7c);
  }
  local_120 = 0;
  recovered_10002c84(local_124);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_118,(undefined1 *)local_1c,2);
  local_50 = 0x1b;
  local_78 = recovered_10002c52(8);
  *local_78 = (int)&PTR_recovered_10007736_10009224;
  local_50 = 0x1c;
  recovered_100058a8(param_1,0xe,&local_118,(int *)&local_78);
  if (local_78 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_78 + 4)))(local_78);
  }
  local_114 = 0;
  recovered_10002c84(local_118);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_10c,(undefined1 *)local_1c,2);
  local_50 = 0x1d;
  local_74 = recovered_10002c52(8);
  *local_74 = (int)&PTR_recovered_100077c4_10009248;
  local_50 = 0x1e;
  recovered_100058a8(param_1,0xf,&local_10c,(int *)&local_74);
  if (local_74 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_74 + 4)))(local_74);
  }
  local_108 = 0;
  recovered_10002c84(local_10c);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_100,(undefined1 *)local_1c,2);
  local_50 = 0x1f;
  local_70 = recovered_10002c52(8);
  *local_70 = (int)&PTR_recovered_1000786e_1000926c;
  local_50 = 0x20;
  recovered_100058a8(param_1,0x10,&local_100,(int *)&local_70);
  if (local_70 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_70 + 4)))(local_70);
  }
  local_fc = 0;
  recovered_10002c84(local_100);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_f4,(undefined1 *)local_1c,2);
  local_50 = 0x21;
  local_6c = recovered_10002c52(8);
  *local_6c = (int)&PTR_recovered_100078fc_10009290;
  local_50 = 0x22;
  recovered_100058a8(param_1,0x11,&local_f4,(int *)&local_6c);
  if (local_6c != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_6c + 4)))(local_6c);
  }
  local_f0 = 0;
  recovered_10002c84(local_f4);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_e8,(undefined1 *)local_1c,2);
  local_50 = 0x23;
  local_68 = recovered_10002c52(8);
  *local_68 = (int)&PTR_recovered_100079a6_100092b4;
  local_50 = 0x24;
  recovered_100058a8(param_1,0x12,&local_e8,(int *)&local_68);
  if (local_68 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_68 + 4)))(local_68);
  }
  local_e4 = 0;
  recovered_10002c84(local_e8);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_dc,(undefined1 *)local_1c,2);
  local_50 = 0x25;
  local_64 = recovered_10002c52(8);
  *local_64 = (int)&PTR_recovered_10007a44_100092d8;
  local_50 = 0x26;
  recovered_100058a8(param_1,0x13,&local_dc,(int *)&local_64);
  if (local_64 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_64 + 4)))(local_64);
  }
  local_d8 = 0;
  recovered_10002c84(local_dc);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_d0,(undefined1 *)local_1c,2);
  local_50 = 0x27;
  local_60 = recovered_10002c52(8);
  *local_60 = (int)&PTR_recovered_10007af8_100092fc;
  local_50 = 0x28;
  recovered_100058a8(param_1,0x14,&local_d0,(int *)&local_60);
  if (local_60 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_60 + 4)))(local_60);
  }
  local_cc = 0;
  recovered_10002c84(local_d0);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_c4,(undefined1 *)local_1c,2);
  local_50 = 0x29;
  local_5c = recovered_10002c52(8);
  *local_5c = (int)&PTR_recovered_10007ba4_10009320;
  local_50 = 0x2a;
  recovered_100058a8(param_1,0x15,&local_c4,(int *)&local_5c);
  if (local_5c != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_5c + 4)))(local_5c);
  }
  local_c0 = 0;
  recovered_10002c84(local_c4);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000673c((int *)&local_b8,(undefined1 *)local_1c,2);
  local_50 = 0x2b;
  local_58 = recovered_10002c52(8);
  *local_58 = (int)&PTR_recovered_10007c62_10009344;
  local_50 = 0x2c;
  recovered_100058a8(param_1,0x16,&local_b8,(int *)&local_58);
  if (local_58 != (int *)0x0) {
    ((uintptr_t (*)(void *))(*(uintptr_t *)(*local_58 + 4)))(local_58);
  }
  local_b4 = 0;
  recovered_10002c84(local_b8);
  recovered_10002fcf(&local_54);
  return;
}

#undef DAT_10008ed0
#undef LAB_100049e5
#undef PTR_recovered_10002c10_1000a034
#undef PTR_recovered_100067c6_10009048
#undef PTR_recovered_1000693e_10009074
#undef PTR_recovered_10006a74_10009098
#undef PTR_recovered_10006b04_100090bc
#undef PTR_recovered_10006b8a_100090e0
#undef PTR_recovered_10006bfe_10009104
#undef PTR_recovered_10006c84_10009128
#undef PTR_recovered_10006dfc_1000914c
#undef PTR_recovered_10006f26_10009170
#undef PTR_recovered_1000721a_10009194
#undef PTR_recovered_100072b0_100091b8
#undef PTR_recovered_1000730e_100091dc
#undef PTR_recovered_10007610_10009200
#undef PTR_recovered_10007736_10009224
#undef PTR_recovered_100077c4_10009248
#undef PTR_recovered_1000786e_1000926c
#undef PTR_recovered_100078fc_10009290
#undef PTR_recovered_100079a6_100092b4
#undef PTR_recovered_10007a44_100092d8
#undef PTR_recovered_10007af8_100092fc
#undef PTR_recovered_10007ba4_10009320
#undef PTR_recovered_10007c62_10009344
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_13
#undef local_11
#undef auStackY_24c
#undef local_1b4
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_19c
#undef local_198
#undef local_190
#undef local_18c
#undef local_184
#undef local_180
#undef local_178
#undef local_174
#undef local_16c
#undef local_168
#undef local_160
#undef local_15c
#undef local_154
#undef local_150
#undef local_148
#undef local_144
#undef local_13c
#undef local_138
#undef local_130
#undef local_12c
#undef local_124
#undef local_120
#undef local_118
#undef local_114
#undef local_10c
#undef local_108

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x477eU)
 */

void recovered_10004e6e(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xfff;
  bVar1 = recovered_10004ec6();
  *(bool *)(param_1 + 0x2c) = !bVar1;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}


#define in_stack_00000004 (*(undefined4 * *)(frame + 36))
#define in_stack_00000008 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47b0U)
 */

void recovered_10004ea0(void)

{
  unsigned char frame[64] = {0};


  recovered_10003ac8(in_stack_00000004,in_stack_00000008);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47baU)
 */

void recovered_10004eaa(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = param_2;
  recovered_10004e6e((int)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47ccU)
 */

undefined4 recovered_10004ebc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47d6U)
 */

bool recovered_10004ec6(void)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  int *in_ECX;

  if (((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) || (*in_ECX < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < in_ECX[1];
  }
  return bVar1;
}


#undef DAT_10008f2c
#define DAT_10008f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x883cU)))
#undef LAB_100054ac
#define LAB_100054ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbcU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_20 (*(undefined1 * *)(frame + 332))
#define local_19 (*(undefined1 *)(frame + 339))
#define local_18 (*(undefined1 *)(frame + 340))
#define local_17 (*(undefined1 *)(frame + 341))
#define local_16 (*(char (*)[2])(frame + 342))
#define local_14 (*(undefined4 *)(frame + 344))
#define auStackY_15c (*(undefined1 (*)[128])(frame + 16))
#define local_bc (*(undefined4 *)(frame + 176))
#define local_b8 (*(undefined4 *)(frame + 180))
#define local_a4 (*(undefined * *)(frame + 200))
#define local_a0 (*(undefined * *)(frame + 204))
#define local_9c (*(undefined1 * *)(frame + 208))
#define local_98 (*(undefined1 * *)(frame + 212))
#define local_94 (*(undefined1 * *)(frame + 216))
#define local_84 (*(int *)(frame + 232))
#define local_80 (*(undefined1 * *)(frame + 236))
#define local_7c (*(int *)(frame + 240))
#define local_78 (*(undefined4 * *)(frame + 244))
#define local_74 (*(int (*)[3])(frame + 248))
#define local_68 (*(undefined1 * *)(frame + 260))
#define local_64 (*(int *)(frame + 264))
#define local_60 (*(undefined1 * *)(frame + 268))
#define local_5c (*(undefined4 *)(frame + 272))
#define local_58 (*(undefined4 *)(frame + 276))
#define local_54 (*(undefined8 *)(frame + 280))
#define local_4c (*(int * *)(frame + 288))
#define local_48 (*(undefined1 *)(frame + 292))
#define local_44 (*(undefined1 * *)(frame + 296))
#define local_40 (*(undefined4 *)(frame + 300))
#define local_3c (*(undefined4 *)(frame + 304))
#define local_38 (*(undefined1 * *)(frame + 308))
#define local_34 (*(int * *)(frame + 312))
#define local_30 (*(undefined4 *)(frame + 316))
#define local_2c (*(int *)(frame + 320))
#define local_28 (*(undefined1 * *)(frame + 324))
#define local_24 (*(byte *)(frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47f6U)
 */

uint recovered_10004ee6(undefined4 *param_1)

{
  unsigned char frame[396] = {0};

  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 extraout_EAX = 0;
  undefined3 extraout_var = 0;
  char *pcVar4;
  int *piVar5;
  undefined3 extraout_var_00 = 0;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined3 uVar14;
  undefined4 *puVar13;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;

  local_9c = local_16 + 0x12;
  local_94 = auStackY_15c + 0x80;
  cVar1 = *(char *)(param_1 + 0xb);
  local_a4 = PTR_recovered_10002c10_1000a034;
  local_a0 = &DAT_10008f2c;
  local_98 = &LAB_100054ac;
  recovered_10002fba(&local_bc);
  if (cVar1 != '\0') {
    uVar12 = 0;
    goto LAB_1000505d;
  }
  local_14 = (int *)*param_1;
  iVar10 = param_1[7];
  puVar6 = (undefined1 *)param_1[8];
  bVar3 = recovered_1000554d(extraout_EAX,iVar10,local_14,(int)puVar6);
  if (bVar3) {
    uVar12 = recovered_10005588(CONCAT31(extraout_var,bVar3),iVar10,local_14,(int)puVar6);
    if (uVar12 == 0) {
      recovered_100055f8((int)param_1);
      local_64 = param_1[7];
      local_38 = (undefined1 *)param_1[8];
      recovered_100055d2((uint)*(byte *)(param_1 + 9),(int *)&local_38,&local_64,
                         *(byte *)(param_1 + 9));
      param_1[7] = local_64;
      param_1[8] = local_38;
      bVar3 = recovered_1000554d(local_38,local_64,(int *)*param_1,(int)local_38);
      if (!bVar3) {
        *(undefined1 *)(param_1 + 0xb) = 1;
        goto LAB_10005055;
      }
      uVar11 = *(undefined1 *)(param_1 + 0xb);
      uVar14 = (undefined3)((uint)param_1 >> 8);
    }
    else {
      if (uVar12 == 0xffffff) {
        param_1[10] = 0xfff;
        local_64 = iVar10;
        local_38 = puVar6;
        recovered_100055d2((uint)*(byte *)(param_1 + 9),(int *)&local_38,&local_64,
                           *(byte *)(param_1 + 9));
        param_1[7] = local_64;
        param_1[8] = local_38;
        piVar8 = (int *)*param_1;
      }
      else {
        uVar2 = param_1[10];
        uVar15 = uVar12 - uVar2;
        if (uVar12 < uVar2) {
          uVar15 = -(uVar12 - uVar2);
        }
        param_1[10] = uVar12;
        cVar1 = *(char *)((int)param_1 + 0x2d);
        *(undefined1 *)((int)param_1 + 0x2d) = 0;
        if ((cVar1 != '\0') || (uVar2 != uVar12)) {
          local_84 = iVar10;
          local_80 = puVar6;
          recovered_100055d2((uint)*(byte *)(param_1 + 9),(int *)&local_80,&local_84,
                             *(byte *)(param_1 + 9));
          local_74[0] = 0;
          local_74[1] = 0;
          local_74[2] = 0;
          puVar13 = param_1;
          if ((uVar15 < (uint)param_1[5]) && (param_1[4] != 0)) {
            local_78 = (undefined4 *)(param_1[4] + uVar15 * 0x10);
            local_b8 = 1;
            recovered_10005616(local_74,local_78[1]);
            pcVar9 = (char *)*local_78;
            pcVar4 = pcVar9 + local_78[1];
            local_68 = local_80;
            iVar10 = local_84;
            do {
              if (pcVar9 == pcVar4) {
                param_1[7] = iVar10;
                param_1[8] = local_68;
                puVar6 = local_68;
                if ((int *)local_78[3] != (int *)0x0) {
                  local_b8 = 9;
                  ((uintptr_t (*)(void *))(*(uintptr_t *)(*(int *)local_78[3] + 8)))((void *)(uintptr_t)((int *)local_78[3]));
                  puVar6 = (undefined1 *)param_1[8];
                  iVar10 = param_1[7];
                }
                goto LAB_1000543b;
              }
              cVar1 = *pcVar9;
              piVar8 = (int *)*param_1;
              local_16[1] = *(char *)(param_1 + 9);
              local_38 = (undefined1 *)0x0;
              local_34 = (int *)0x0;
              local_30 = 0;
              piVar5 = (int *)0x1;
              local_2c = 1;
              local_28 = (undefined1 *)0x1;
              local_24 = 0;
              local_44 = local_68;
              local_14 = (int *)0x0;
              local_7c = iVar10;
              local_64 = iVar10;
              while( true ) {
                puVar6 = local_44;
                iVar10 = local_64;
                bVar3 = recovered_1000554d(piVar5,local_64,piVar8,(int)local_44);
                uVar14 = (undefined3)((uint)piVar8 >> 8);
                if (!bVar3) break;
                uVar12 = recovered_10005588(CONCAT31(extraout_var_00,bVar3),iVar10,piVar8,
                                            (int)puVar6);
                local_20 = (undefined1 *)(uint)(byte)local_16[1];
                if (uVar12 == 0xffffff) {
                  recovered_100055d2(local_20,(int *)&local_44,&local_64,local_16[1]);
                  local_2c = local_64;
                  local_28 = local_44;
                  if ((local_24 & 1) != 0) goto LAB_10005226;
                  if (cVar1 == '\x02') {
                    uVar17 = recovered_10005727();
                    if ((uint)((uVar17 >> 1) >> 0x20) < (uint)((uint)(uVar17 >> 1) < 0x7fffffff)) {
                      local_4c = (int *)((int)uVar17 + 1);
                    }
                    else {
                      local_4c = (int *)0xffffffff;
                    }
                    local_60 = (undefined1 *)0x0;
                    local_5c = 0;
                    local_58 = 0;
                    PF_PART4(local_54, 4) = 0;
                    PF_PART4(local_54, 0) = 0;
                    local_64 = CONCAT31(PF_PART3(local_64, 1),2);
                    local_48 = local_34 == (int *)0x0;
                    local_b8 = 7;
                    local_14 = local_4c;
                    recovered_100065f2(local_74,(undefined1 *)&local_64);
                    local_b8 = 8;
                    recovered_10005760((int)param_1,(int)local_14);
LAB_100053e2:
                    puVar6 = local_60;
                  }
                  else {
                    if (cVar1 == '\x01') {
                      lVar16 = recovered_10005727();
                      if (lVar16 < 0) {
                        lVar16 = 0x7fffffffffffffff;
                      }
                      local_60 = (undefined1 *)0x0;
                      local_5c = 0;
                      local_58 = 0;
                      local_4c = (int *)0x0;
                      local_64 = CONCAT31(PF_PART3(local_64, 1),1);
                      local_48 = local_34 == (int *)0x0;
                      local_b8 = 6;
                      local_54 = lVar16;
                      recovered_100065f2(local_74,(undefined1 *)&local_64);
                      goto LAB_100053e2;
                    }
                    if (cVar1 != '\0') goto LAB_100053f0;
                    local_44 = (undefined1 *)0x0;
                    local_40 = 0;
                    local_3c = 0;
                    local_b8 = 3;
                    recovered_10005684((int *)&local_44,(uint)local_34);
                    puVar6 = local_38;
                    piVar8 = local_34;
                    while (piVar8 != (int *)0x0) {
                      local_b8 = 5;
                      local_20 = puVar6;
                      local_14 = piVar8;
                      recovered_100056d4((int *)&local_44,*puVar6);
                      puVar6 = local_20 + 1;
                      piVar8 = (int *)((int)local_14 - 1);
                    }
                    recovered_10003796((undefined1 *)&local_64,&local_44);
                    local_48 = local_34 == (int *)0x0;
                    local_b8 = 4;
                    recovered_100065f2(local_74,(undefined1 *)&local_64);
                    recovered_10002c84(local_60);
                    puVar6 = local_44;
                  }
                  recovered_10002c84(puVar6);
LAB_100053f0:
                  local_7c = local_2c;
                  local_68 = local_28;
                  puVar13 = (undefined4 *)0x0;
                  goto LAB_100053fe;
                }
                piVar5 = (int *)CONCAT31(uVar14,1);
                if (((uint)local_14 & 1) == 0) {
                  local_19 = (undefined1)(uVar12 >> 0x10);
                  local_18 = (undefined1)(uVar12 >> 8);
                  local_17 = (undefined1)uVar12;
                  piVar7 = (int *)0xfffffffd;
                  while ((piVar5 = (int *)CONCAT31((int3)((uint)piVar5 >> 8),piVar7 != (int *)0x0),
                         piVar7 != (int *)0x0 &&
                         (local_16[0] = local_16[(int)piVar7], local_16[0] != -1))) {
                    local_b8 = 2;
                    local_14 = piVar7;
                    recovered_10006290((int *)&local_38,local_16);
                    piVar7 = (int *)((int)local_14 + 1);
                  }
                }
                recovered_100055d2(local_20,(int *)&local_44,&local_64,(char)local_20);
                local_14 = piVar5;
              }
              local_24 = 1;
              local_2c = iVar10;
              local_28 = puVar6;
LAB_10005226:
              param_1[7] = local_2c;
              param_1[8] = local_28;
              *(undefined1 *)(param_1 + 0xb) = 1;
              puVar13 = (undefined4 *)CONCAT31(uVar14,1);
LAB_100053fe:
              local_34 = (int *)0x0;
              recovered_10002c84(local_38);
              pcVar9 = pcVar9 + 1;
              iVar10 = local_7c;
            } while ((char)puVar13 == '\0');
LAB_10005457:
            uVar12 = 0;
          }
          else {
            param_1[7] = local_84;
            param_1[8] = local_80;
            puVar6 = local_80;
            iVar10 = local_84;
LAB_1000543b:
            bVar3 = recovered_1000554d(puVar6,iVar10,(int *)*param_1,(int)puVar6);
            if (!bVar3) {
              *(undefined1 *)(param_1 + 0xb) = 1;
              goto LAB_10005457;
            }
            uVar12 = CONCAT31((int3)((uint)puVar13 >> 8),*(undefined1 *)(param_1 + 0xb)) ^ 1;
          }
          recovered_10006514(local_74);
          goto LAB_1000505d;
        }
        local_64 = iVar10;
        local_38 = puVar6;
        recovered_100055d2((uint)*(byte *)(param_1 + 9),(int *)&local_38,&local_64,
                           *(byte *)(param_1 + 9));
        param_1[7] = local_64;
        param_1[8] = local_38;
        piVar8 = (int *)*param_1;
      }
      bVar3 = recovered_1000554d(local_38,local_64,piVar8,(int)local_38);
      if (!bVar3) goto LAB_10005051;
      uVar11 = *(undefined1 *)(param_1 + 0xb);
      uVar14 = (undefined3)((uint)&local_38 >> 8);
    }
    uVar12 = CONCAT31(uVar14,uVar11) ^ 1;
  }
  else {
LAB_10005051:
    *(undefined1 *)(param_1 + 0xb) = 1;
LAB_10005055:
    uVar12 = 0;
  }
LAB_1000505d:
  recovered_10002fcf(&local_bc);
  return uVar12 & 0xffffff01;
}

#undef DAT_10008f2c
#undef LAB_100054ac
#undef PTR_recovered_10002c10_1000a034
#undef local_20
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_14
#undef auStackY_15c
#undef local_bc
#undef local_b8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4e5dU)
 */

bool recovered_1000554d(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  bool bVar2;

  bVar1 = recovered_10004ec6();
  bVar2 = false;
  if (((0 < param_4) && (0 < param_2)) && (bVar1)) {
    if (*param_3 < param_2) {
      bVar2 = false;
    }
    else {
      bVar2 = param_4 <= param_3[1];
    }
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4e98U)
 */

uint recovered_10005588(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;

  bVar2 = recovered_1000554d(param_1,param_2,param_3,param_4);
  uVar3 = 0;
  if (bVar2) {
    iVar4 = param_2 + (param_4 + -1) * *param_3;
    iVar1 = param_3[2];
    uVar3 = (uint)*(byte *)(iVar1 + -2 + iVar4 * 4) |
            (uint)*(byte *)(iVar1 + -3 + iVar4 * 4) << 8 |
            (uint)*(byte *)(iVar1 + -4 + iVar4 * 4) << 0x10;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ee2U)
 */

void recovered_100055d2(undefined4 param_1,int *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = 1;
  switch((uintptr_t)(param_4)) {
  case 1:
    break;
  case 2:
    iVar1 = -1;
  case 0:
    param_2 = param_3;
    break;
  case 3:
    iVar1 = -1;
    break;
  default:
    goto switchD_100055e2_default;
  }
  *param_2 = *param_2 + iVar1;
switchD_100055e2_default:
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f08U)
 */

void recovered_100055f8(int param_1)

{
  unsigned char frame[64] = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x24) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f26U)
 */

void recovered_10005616(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_1000656d(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_1000658e((undefined1 *)((int)pvVar1 + iVar3),(undefined1 *)(*param_1 + iVar3));
      recovered_10006332((undefined4 *)(*param_1 + 4 + iVar3));
      iVar3 = iVar3 + 0x20;
    }
    recovered_10002c84((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4f94U)
 */

void recovered_10005684(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10006164(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_EAX + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_EAX + param_1[1]) = 0;
    recovered_10002c84((void *)*param_1);
    *param_1 = extraout_EAX;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4fe4U)
 */

void recovered_100056d4(int *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = iVar1 * 2;
    }
    recovered_10005684(param_1,uVar2);
  }
  recovered_10006112(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5037U)
 */

undefined8 recovered_10005727(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  byte *pbVar3;
  uint uVar4;

  pbVar3 = (byte *)*in_ECX;
  iVar2 = in_ECX[1];
  uVar1 = 0;
  uVar4 = 0;
  do {
    if (iVar2 == 0) {
LAB_1000575b:
      return CONCAT44(uVar4,uVar1);
    }
    if ((uVar4 & 0xff000000) != 0) {
      uVar1 = 0xffffffff;
      uVar4 = 0xffffffff;
      goto LAB_1000575b;
    }
    uVar4 = uVar4 << 8 | uVar1 >> 0x18;
    uVar1 = uVar1 << 8 | (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5070U)
 */

int recovered_10005760(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_10005aac((int *)(param_1 + 4),uVar1);
  }
  return *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50a4U)
 */

void recovered_10005794(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  do {
    uVar1 = recovered_10004ee6(param_1);
  } while ((char)uVar1 != '\0');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50beU)
 */

undefined1 recovered_100057ae(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50caU)
 */

void recovered_100057ba(int param_1,uint param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_100057fc((int *)(param_1 + 0x10),param_2 + 1);
  }
  recovered_10005876((int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10)),param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x510cU)
 */

void recovered_100057fc(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    iVar2 = uVar3 << 4;
    for (; iVar2 = iVar2 + -0x10, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_1000647a((undefined4 *)(*param_1 + iVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10006646(param_1,param_2);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      iVar2 = *param_1;
      iVar1 = uVar3 * 0x10;
      *(undefined4 *)(iVar2 + 0xc + iVar1) = 0;
      *(undefined4 *)(iVar2 + 8 + iVar1) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0;
      *(undefined4 *)(iVar2 + iVar1) = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5186U)
 */

int * recovered_10005876(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  recovered_1000634a(param_1,param_2);
  recovered_1000639a(param_1 + 3,param_2 + 3);
  return param_1;
}


#undef DAT_10008f44
#define DAT_10008f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8854U)))
#undef LAB_10005946
#define LAB_10005946 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5256U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_54 (*(undefined4 *)(frame + 168))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_20 (*(int (*)[4])(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x51b8U)
 */

void recovered_100058a8(int param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  unsigned char frame[284] = {0};


  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  recovered_10005974(local_20,param_3);
  recovered_100059b8(local_20 + 3,param_4);
  local_2c = auStackY_ec + 0x80;
  local_3c = PTR_recovered_10002c10_1000a034;
  local_38 = &DAT_10008f44;
  local_30 = &LAB_10005946;
  local_50 = 1;
  local_34 = (undefined1 *)(local_20 + 7);
  recovered_10002fba(&local_54);
  recovered_100057ba(param_1,param_2,local_20);
  recovered_1000647a(local_20);
  recovered_10002fcf(&local_54);
  return;
}

#undef DAT_10008f44
#undef LAB_10005946
#undef PTR_recovered_10002c10_1000a034
#undef local_54
#undef auStackY_ec
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5284U)
 */

undefined4 * recovered_10005974(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002c84((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x52c8U)
 */

int * recovered_100059b8(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  if (param_1 != param_2) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define local_14 (*(undefined4 *)(frame + 20))
#define local_10 (*(undefined4 *)(frame + 24))
#define local_c (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52f8U)
 */

void recovered_100059e8(int param_1,uint param_2)

{
  unsigned char frame[72] = {0};


  if (param_2 < *(uint *)(param_1 + 0x14)) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    recovered_10005a2c(param_2 * 0x10 + *(int *)(param_1 + 0x10),(int)&local_18);
    recovered_1000647a(&local_18);
  }
  return;
}

#undef local_14
#undef local_10
#undef local_c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x533cU)
 */

int recovered_10005a2c(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  recovered_10005974((undefined4 *)param_1,(undefined4 *)param_2);
  recovered_100059b8((int *)(param_1 + 0xc),(int *)(param_2 + 0xc));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x536eU)
 */

void recovered_10005a5e(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 << 4;
  while( true ) {
    iVar1 = iVar1 + -0x10;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) break;
    recovered_1000647a((undefined4 *)(*param_1 + iVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53a4U)
 */

int recovered_10005a94(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53b0U)
 */

int recovered_10005aa0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53bcU)
 */

void recovered_10005aac(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    iVar3 = uVar2 * 0x18 + -0x14;
    for (; param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_10006332((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + -0x18;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_10007d5c(param_1,param_2);
    uVar2 = param_1[1];
    while (uVar2 < param_2) {
      iVar3 = *param_1;
      iVar1 = uVar2 * 0x18;
      *(undefined4 *)(iVar3 + 0x14 + iVar1) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar1) = 0;
      *(undefined4 *)(iVar3 + 0xc + iVar1) = 0;
      *(undefined4 *)(iVar3 + 8 + iVar1) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar1) = 0;
      *(undefined4 *)(iVar3 + iVar1) = 0;
      uVar2 = param_1[1] + 1;
      param_1[1] = uVar2;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5442U)
 */

int recovered_10005b32(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  uVar2 = param_2 + (uint)(param_2 == 0);
  iVar1 = 0;
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + -0x18 + uVar2 * 0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5464U)
 */

void recovered_10005b54(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10007e1e((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x548aU)
 */

void recovered_10005b7a(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10007e70((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_10008f4c
#define DAT_10008f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x885cU)))
#undef LAB_10005c3b
#define LAB_10005c3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x554bU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_28 (*(undefined1 (*)[4])(frame + 212))
#define local_24 (*(void * *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined4 *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
#define in_stack_00000004 (*(int *)(frame + 256))
#define in_stack_00000008 (*(int * *)(frame + 260))
#define local_5c (*(undefined4 *)(frame + 160))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define local_40 (*(undefined * *)(frame + 188))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x54b0U)
 */

undefined4 recovered_10005ba0(void)

{
  unsigned char frame[284] = {0};

  undefined4 extraout_EAX = 0;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  local_28[0] = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  local_44 = PTR_recovered_10002c10_1000a034;
  local_40 = &DAT_10008f4c;
  local_38 = &LAB_10005c3b;
  local_58 = 1;
  recovered_10002fba(&local_5c);
  recovered_1000389e(local_28,in_stack_00000008);
  local_58 = 2;
  recovered_10005b7a(in_stack_00000004,local_28);
  recovered_10002c84(local_24);
  recovered_10002fcf(&local_5c);
  return extraout_EAX;
}

#undef DAT_10008f4c
#undef LAB_10005c3b
#undef PTR_recovered_10002c10_1000a034
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_ec
#undef local_1c
#undef local_18
#undef local_14
#undef in_stack_00000004
#undef in_stack_00000008
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_10008f54
#define DAT_10008f54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8864U)))
#undef LAB_10005cfb
#define LAB_10005cfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x560bU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_5c (*(undefined4 *)(frame + 160))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define in_stack_00000004 (*(int *)(frame + 256))
#define local_40 (*(undefined * *)(frame + 188))
#define in_stack_00000008 (*(undefined4 * *)(frame + 260))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_28 (*(undefined1 (*)[4])(frame + 212))
#define local_24 (*(void * *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined4 *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x557aU)
 */

undefined4 recovered_10005c6a(void)

{
  unsigned char frame[284] = {0};

  undefined4 extraout_EAX = 0;

  local_28[0] = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  recovered_100038ca(local_28,in_stack_00000008);
  local_34 = auStackY_ec + 0x80;
  local_44 = PTR_recovered_10002c10_1000a034;
  local_40 = &DAT_10008f54;
  local_38 = &LAB_10005cfb;
  local_58 = 1;
  local_3c = local_28 + 0x24;
  recovered_10002fba(&local_5c);
  recovered_10005b7a(in_stack_00000004,local_28);
  recovered_10002c84(local_24);
  recovered_10002fcf(&local_5c);
  return extraout_EAX;
}

#undef DAT_10008f54
#undef LAB_10005cfb
#undef PTR_recovered_10002c10_1000a034
#undef auStackY_ec
#undef local_5c
#undef local_58
#undef local_44
#undef in_stack_00000004
#undef local_40
#undef in_stack_00000008
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10008f5c
#define DAT_10008f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x886cU)))
#undef LAB_10005db0
#define LAB_10005db0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56c0U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define local_40 (*(undefined * *)(frame + 188))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_28 (*(undefined1 (*)[4])(frame + 212))
#define local_24 (*(void * *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define in_stack_00000004 (*(int *)(frame + 256))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined1 (*)[8])(frame + 228))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_5c (*(undefined4 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x563aU)
 */

undefined4 recovered_10005d2a(void)

{
  unsigned char frame[284] = {0};

  undefined4 extraout_EAX = 0;

  local_3c = local_18 + 0x14;
  local_34 = auStackY_ec + 0x80;
  local_24 = (void *)0x0;
  local_1c = 0;
  local_28[0] = 2;
  local_20 = 0;
  local_44 = PTR_recovered_10002c10_1000a034;
  local_40 = &DAT_10008f5c;
  local_38 = &LAB_10005db0;
  local_58 = 1;
  recovered_10002fba(&local_5c);
  recovered_10005b7a(in_stack_00000004,local_28);
  recovered_10002c84(local_24);
  recovered_10002fcf(&local_5c);
  return extraout_EAX;
}

#undef DAT_10008f5c
#undef LAB_10005db0
#undef PTR_recovered_10002c10_1000a034
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef in_stack_00000004
#undef local_1c
#undef local_18
#undef auStackY_ec
#undef local_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x56eeU)
 */

void recovered_10005dde(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_10005760(param_1,param_2);
  recovered_10005b54(param_1,puVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5712U)
 */

void recovered_10005e02(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  recovered_10005e40(param_1,param_2);
  puVar1 = (undefined1 *)recovered_10005760(param_1,param_2);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 4) = 0;
  }
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5750U)
 */

void recovered_10005e40(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  *(uint *)(param_1 + 0x30) = uVar1;
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_10005aac((int *)(param_1 + 4),uVar1);
    return;
  }
  return;
}


#undef DAT_10008f64
#define DAT_10008f64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8874U)))
#undef LAB_10005f2b
#define LAB_10005f2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583bU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 228))
#define local_5c (*(undefined1 (*)[4])(frame + 160))
#define local_58 (*(void * *)(frame + 164))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_4c (*(undefined4 *)(frame + 176))
#define local_48 (*(undefined4 *)(frame + 180))
#define local_44 (*(undefined4 *)(frame + 184))
#define local_40 (*(undefined4 *)(frame + 188))
#define local_2c (*(undefined * *)(frame + 208))
#define local_28 (*(undefined * *)(frame + 212))
#define local_24 (*(undefined1 * *)(frame + 216))
#define local_20 (*(undefined1 * *)(frame + 220))
#define local_1c (*(undefined1 * *)(frame + 224))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5782U)
 */

int recovered_10005e72(int param_1)

{
  unsigned char frame[284] = {0};

  int iVar1;
  int extraout_EAX = 0;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_ec + 0x80;
  iVar1 = *(int *)(param_1 + 0x30);
  local_2c = PTR_recovered_10002c10_1000a034;
  local_28 = &DAT_10008f64;
  local_20 = &LAB_10005f2b;
  recovered_10002fba(&local_44);
  if (iVar1 == 0) {
    local_5c[0] = 0;
    local_58 = (void *)0x0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_4c = 0;
    local_40 = 1;
    recovered_10005b7a(param_1,local_5c);
    local_40 = 2;
    iVar1 = recovered_10005760(param_1,extraout_EAX);
    recovered_10002c84(local_58);
  }
  else {
    local_40 = 0xffffffff;
    iVar1 = recovered_10005760(param_1,iVar1);
  }
  recovered_10002fcf(&local_44);
  return iVar1;
}

#undef DAT_10008f64
#undef LAB_10005f2b
#undef PTR_recovered_10002c10_1000a034
#undef auStack_18
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x586aU)
 */

int recovered_10005f5a(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = 0;
  if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 8))) {
    iVar2 = *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x588aU)
 */

int recovered_10005f7a(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5896U)
 */

int recovered_10005f86(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58a2U)
 */

undefined4 recovered_10005f92(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58aeU)
 */

undefined4 recovered_10005f9e(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58baU)
 */

undefined4 recovered_10005faa(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58c6U)
 */

undefined1 recovered_10005fb6(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58d2U)
 */

void recovered_10005fc2(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58e6U)
 */

undefined4 recovered_10005fd6(int param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x58f2U)
 */

void recovered_10005fe2(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5906U)
 */

void recovered_10005ff6(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5910U)
 */

void recovered_10006000(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#define local_20 (*(void * *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x591aU)
 */

void recovered_1000600a(int *param_1,int param_2,uint param_3)

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
  uVar3 = recovered_100060d4(param_1,param_2,&local_14);
  if ((char)uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar4 == 0) {
      recovered_10006112(param_1);
    }
    else {
      recovered_10005684(param_1,uVar4);
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
    recovered_10006134(&local_20,local_14 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (int)local_20;
    iVar1 = param_1[1];
    param_1[1] = local_1c;
    iVar2 = param_1[2];
    param_1[2] = local_18;
    local_20 = data;
    local_1c = iVar1;
    local_18 = iVar2;
    recovered_10002c84(data);
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59e4U)
 */

uint recovered_100060d4(int *param_1,int param_2,int *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x5a22U)
 */

void recovered_10006112(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;

  if (*param_1 == 0) {
    recovered_10006164(0);
    *param_1 = extraout_EAX;
    param_1[2] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a44U)
 */

void recovered_10006134(undefined4 *param_1,int param_2,uint param_3)

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
  recovered_1000600a(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a74U)
 */

void recovered_10006164(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002c52(param_1 + 1);
  *puVar1 = 0;
  return;
}


#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5a8eU)
 */

void recovered_1000617e(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_10008c97;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_1000600a(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10008c97

#define local_18 (*(uint *)(frame + 82))
#define local_14 (*(uint *)(frame + 86))
#define abStack_5a (*(byte (*)[66])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ac5U)
 */

undefined8 recovered_100061b5(byte *param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[138] = {0};

  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;

  uVar4 = 1;
  if ((param_2 != (byte *)0x0 && param_1 != (byte *)0x0) &&
     (0xffffffdc < param_5 - 0x25 && param_1 <= param_2)) {
    uVar2 = (int)param_4 >> 0x1f;
    uVar6 = 0;
    uVar5 = ((param_4 ^ uVar2) - uVar2) - (uint)((param_3 ^ uVar2) < uVar2);
    uVar2 = (param_3 ^ uVar2) - uVar2;
    do {
      local_14 = uVar6;
      uVar8 = recovered_10000a6a(param_5,uVar2,uVar5,param_5,0);
      local_18 = (uint)((ulonglong)uVar8 >> 0x20);
      uVar6 = uVar2 - (uint)uVar8 * param_5;
      bVar3 = (byte)uVar6;
      if (uVar6 < 10) {
        bVar3 = bVar3 | 0x30;
      }
      else {
        bVar3 = bVar3 + 0x57;
      }
      abStack_5a[local_14 + 1] = bVar3;
      uVar6 = local_14 + 1;
      bVar1 = (uVar2 < param_5) <= uVar5;
      uVar5 = local_18;
      uVar2 = (uint)uVar8;
    } while (bVar1);
    if ((int)param_4 < 0) {
      abStack_5a[local_14 + 2] = 0x2d;
      uVar6 = local_14 + 2;
    }
    if ((uint)((int)param_2 - (int)param_1) < uVar6) {
      uVar4 = 2;
      param_1 = param_2;
    }
    else {
      uVar5 = uVar6;
      pbVar7 = param_1;
      while (uVar5 != 0) {
        *pbVar7 = abStack_5a[uVar5];
        pbVar7 = pbVar7 + 1;
        uVar5 = uVar5 - 1;
      }
      param_1 = param_1 + uVar6;
      uVar4 = 0;
    }
  }
  return CONCAT44(uVar4,param_1);
}

#undef local_18
#undef local_14
#undef abStack_5a

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ba0U)
 */

int recovered_10006290(int *param_1,undefined1 *param_2)

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
    recovered_100062d4(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar2) = *param_2;
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 + 1 + *param_1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5be4U)
 */

void recovered_100062d4(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_1000631e(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002c84((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c2eU)
 */

void * recovered_1000631e(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_10002c52(param_1);
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c42U)
 */

void recovered_10006332(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84((void *)*param_1);
  return;
}


#define local_18 (*(void * *)(frame + 16))
#define local_14 (*(int *)(frame + 20))
#define local_10 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5c5aU)
 */

int * recovered_1000634a(int *param_1,int *param_2)

{
  unsigned char frame[72] = {0};

  void *data;
  int iVar1;

  if (param_1 != param_2) {
    recovered_100063d4((int *)&local_18,param_2);
    data = (void *)*param_1;
    *param_1 = (int)local_18;
    param_1[1] = local_14;
    iVar1 = param_1[2];
    param_1[2] = local_10;
    local_14 = 0;
    local_18 = data;
    local_10 = iVar1;
    recovered_10002c84(data);
  }
  return param_1;
}

#undef local_18
#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5caaU)
 */

int * recovered_1000639a(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;

  if (param_1 != param_2) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    piVar1 = (int *)*param_1;
    *param_1 = iVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5ce4U)
 */

void recovered_100063d4(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_1000641e(param_1,param_2[1]);
  iVar1 = *param_2;
  iVar2 = param_2[1];
  for (iVar3 = 0; iVar2 != iVar3; iVar3 = iVar3 + 1) {
    *(undefined1 *)(*param_1 + iVar3) = *(undefined1 *)(iVar1 + iVar3);
  }
  param_1[1] = iVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d2eU)
 */

void recovered_1000641e(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_10006467(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined1 *)((int)pvVar2 + uVar3) = *(undefined1 *)(*param_1 + uVar3);
    }
    recovered_10002c84((void *)*param_1);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d77U)
 */

void * recovered_10006467(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_10002c52(param_1);
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5d8aU)
 */

void recovered_1000647a(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  recovered_10006720(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5dacU)
 */

void recovered_1000649c(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100064bc(param_1);
  recovered_10002c84((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5dccU)
 */

void recovered_100064bc(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 * 0x18 + -0x14;
  while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
    recovered_10006332((undefined4 *)(*param_1 + iVar1));
    iVar1 = iVar1 + -0x18;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e04U)
 */

void recovered_100064f4(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005a5e(param_1);
  recovered_10002c84((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e24U)
 */

void recovered_10006514(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006534(param_1);
  recovered_10002c84((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e44U)
 */

void recovered_10006534(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 * 0x20 + -0x1c;
  while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
    recovered_10006332((undefined4 *)(*param_1 + iVar1));
    iVar1 = iVar1 + -0x20;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e7dU)
 */

void * recovered_1000656d(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10002c52(param_1 << 5);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5e9eU)
 */

void recovered_1000658e(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_100065cc((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  param_1[0x1c] = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5edcU)
 */

void recovered_100065cc(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f02U)
 */

int recovered_100065f2(int *param_1,undefined1 *param_2)

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
    recovered_10005616(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_1000658e((undefined1 *)(iVar2 * 0x20 + *param_1),param_2);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + -0x20 + (iVar2 + 1) * 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5f56U)
 */

void recovered_10006646(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_100066b2(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_100066d4((undefined4 *)((int)pvVar1 + iVar3),(undefined4 *)(*param_1 + iVar3));
      recovered_1000647a((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + 0x10;
    }
    recovered_10002c84((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fc2U)
 */

void * recovered_100066b2(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10002c52(param_1 << 4);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fe4U)
 */

void recovered_100066d4(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_100066fa(param_1,param_2);
  param_1[3] = param_2[3];
  param_2[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x600aU)
 */

void recovered_100066fa(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6030U)
 */

void recovered_10006720(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002c84((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x604cU)
 */

void recovered_1000673c(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_1000641e(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_10006784(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6094U)
 */

int recovered_10006784(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar3 = param_1[1];
  if (iVar3 == param_1[2]) {
    if (iVar3 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = iVar3 * 2;
    }
    recovered_1000641e(param_1,uVar2);
    iVar3 = param_1[1];
  }
  iVar1 = *param_1 + 1 + iVar3;
  *(undefined1 *)(iVar1 + -1) = *param_2;
  param_1[1] = iVar3 + 1;
  return iVar1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60d6U)
 */

void recovered_100067c6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60dcU)
 */

void recovered_100067cc(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef DAT_10008f6c
#define DAT_10008f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x887cU)))
#undef LAB_10006893
#define LAB_10006893 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61a3U)))
#undef PTR_DAT_1000a028
#define PTR_DAT_1000a028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9938U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_54 (*(undefined4 *)(frame + 152))
#define local_50 (*(undefined4 *)(frame + 156))
#define local_3c (*(undefined * *)(frame + 176))
#define local_38 (*(undefined * *)(frame + 180))
#define local_34 (*(undefined1 * *)(frame + 184))
#define local_30 (*(undefined1 * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_1c (*(void * (*)[3])(frame + 208))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x60e6U)
 */

void recovered_100067d6(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[268] = {0};

  int iVar1;
  char *pcVar2;

  local_34 = (undefined1 *)(local_1c + 6);
  local_2c = auStackY_dc + 0x80;
  iVar1 = param_3[1];
  local_3c = PTR_recovered_10002c10_1000a034;
  local_38 = &DAT_10008f6c;
  local_30 = &LAB_10006893;
  recovered_10002fba(&local_54);
  if (iVar1 != 0) {
    if (*(char *)(*param_3 + 0x1c) == '\x01') {
      pcVar2 = (char *)recovered_10005f5a(param_2);
      if (pcVar2 != (char *)0x0) {
        local_50 = 0xffffffff;
        recovered_1000391c(local_1c,pcVar2);
        local_50 = 1;
        recovered_100068e0(PTR_DAT_1000a028,local_1c);
        recovered_10002c84(local_1c[0]);
      }
    }
    else {
      local_50 = 0xffffffff;
      recovered_100068e0(PTR_DAT_1000a028,(undefined4 *)(*param_3 + 4));
    }
  }
  recovered_10002fcf(&local_54);
  return;
}

#undef DAT_10008f6c
#undef LAB_10006893
#undef PTR_DAT_1000a028
#undef PTR_recovered_10002c10_1000a034
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef auStackY_dc

#undef PTR_recovered_100067c6_10009048
#define PTR_recovered_100067c6_10009048 (*(void * *)(((uintptr_t)pf_module_state + 0x8958U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61d2U)
 */

void recovered_100068c2(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_100067c6_10009048;
  return;
}

#undef PTR_recovered_100067c6_10009048

#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x61f0U)
 */

void recovered_100068e0(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10008c97;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_1000690c(param_1,param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10008c97

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x621cU)
 */

int recovered_1000690c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  if (((param_4 != 0) && (param_3 != 0)) && (*(uint **)(param_2 + 4) != (uint *)0x0)) {
    recovered_100025c4((void *)param_3,1,param_4,*(uint **)(param_2 + 4));
  }
  return param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x624eU)
 */

void recovered_1000693e(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6254U)
 */

void recovered_10006944(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef PTR_DAT_1000a028
#define PTR_DAT_1000a028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9938U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x625eU)
 */

void recovered_1000694e(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  if (param_3[1] != 0) {
    if (*(char *)(*param_3 + 0x1c) == '\x01') {
      pcVar1 = (char *)recovered_10005f5a(param_2);
      if (pcVar1 == (char *)0x0) {
        return;
      }
      recovered_100039c4(pcVar1);
    }
    recovered_100069bc();
  }
  return;
}

#undef PTR_DAT_1000a028

#undef PTR_recovered_1000693e_10009074
#define PTR_recovered_1000693e_10009074 (*(void * *)(((uintptr_t)pf_module_state + 0x8984U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x62aeU)
 */

void recovered_1000699e(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_1000693e_10009074;
  return;
}

#undef PTR_recovered_1000693e_10009074

#undef DAT_10008f74
#define DAT_10008f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8884U)))
#undef LAB_10006a40
#define LAB_10006a40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6350U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define in_stack_00000004 (*(undefined4 *)(frame + 256))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define in_stack_0000000c (*(uint *)(frame + 264))
#define local_34 (*(undefined1 * *)(frame + 200))
#define in_stack_00000008 (*(uint *)(frame + 260))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_1c (*(void * (*)[3])(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x62ccU)
 */

undefined4 recovered_100069bc(void)

{
  unsigned char frame[284] = {0};

  undefined4 extraout_EAX = 0;

  recovered_10003971(local_1c,in_stack_00000008,in_stack_0000000c);
  local_2c = auStackY_ec + 0x80;
  local_3c = PTR_recovered_10002c10_1000a034;
  local_38 = &DAT_10008f74;
  local_30 = &LAB_10006a40;
  local_50 = 1;
  local_34 = (undefined1 *)(local_1c + 6);
  recovered_10002fba(&local_54);
  recovered_100068e0(in_stack_00000004,local_1c);
  recovered_10002c84(local_1c[0]);
  recovered_10002fcf(&local_54);
  return extraout_EAX;
}

#undef DAT_10008f74
#undef LAB_10006a40
#undef PTR_recovered_10002c10_1000a034
#undef auStackY_ec
#undef local_54
#undef local_50
#undef in_stack_00000004
#undef local_3c
#undef local_38
#undef in_stack_0000000c
#undef local_34
#undef in_stack_00000008
#undef local_30
#undef local_2c
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6384U)
 */

void recovered_10006a74(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x638aU)
 */

void recovered_10006a7a(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#define local_18 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6394U)
 */

void recovered_10006a84(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[72] = {0};

  char *pcVar1;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  recovered_1000391c(local_18,pcVar1);
  recovered_100038ca(pcVar1,local_18);
  recovered_10002c84(local_18[0]);
  return;
}

#undef local_18

#undef PTR_recovered_10006a74_10009098
#define PTR_recovered_10006a74_10009098 (*(void * *)(((uintptr_t)pf_module_state + 0x89a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63f6U)
 */

void recovered_10006ae6(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006a74_10009098;
  return;
}

#undef PTR_recovered_10006a74_10009098

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6414U)
 */

void recovered_10006b04(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x641aU)
 */

void recovered_10006b0a(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6424U)
 */

void recovered_10006b14(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  uVar2 = recovered_100039c4(pcVar1);
  *pcVar1 = '\x02';
  *(undefined4 *)(pcVar1 + 0x14) = extraout_EDX;
  *(undefined4 *)(pcVar1 + 0x10) = uVar2;
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_10006b04_100090bc
#define PTR_recovered_10006b04_100090bc (*(void * *)(((uintptr_t)pf_module_state + 0x89ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x647cU)
 */

void recovered_10006b6c(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006b04_100090bc;
  return;
}

#undef PTR_recovered_10006b04_100090bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x649aU)
 */

void recovered_10006b8a(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64a0U)
 */

void recovered_10006b90(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64aaU)
 */

void recovered_10006b9a(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (*(int *)(param_2 + 0x30) == 0) {
    recovered_10005ba0();
  }
  else {
    puVar1 = (undefined1 *)recovered_10005e72(param_2);
    recovered_1000389e(puVar1,(int *)(*param_3 + 4));
  }
  return;
}


#undef PTR_recovered_10006b8a_100090e0
#define PTR_recovered_10006b8a_100090e0 (*(void * *)(((uintptr_t)pf_module_state + 0x89f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64f0U)
 */

void recovered_10006be0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006b8a_100090e0;
  return;
}

#undef PTR_recovered_10006b8a_100090e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x650eU)
 */

void recovered_10006bfe(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6514U)
 */

void recovered_10006c04(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x651eU)
 */

void recovered_10006c0e(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;

  if (*(int *)(param_2 + 0x30) == 0) {
    recovered_10005d2a();
  }
  else {
    puVar3 = (undefined1 *)recovered_10005e72(param_2);
    uVar1 = *(undefined4 *)(*param_3 + 0x10);
    uVar2 = *(undefined4 *)(*param_3 + 0x14);
    *puVar3 = 2;
    *(undefined4 *)(puVar3 + 0x10) = uVar1;
    *(undefined4 *)(puVar3 + 0x14) = uVar2;
    *(undefined4 *)(puVar3 + 8) = 0;
    if (*(undefined1 **)(puVar3 + 4) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar3 + 4) = 0;
    }
  }
  return;
}


#undef PTR_recovered_10006bfe_10009104
#define PTR_recovered_10006bfe_10009104 (*(void * *)(((uintptr_t)pf_module_state + 0x8a14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6576U)
 */

void recovered_10006c66(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006bfe_10009104;
  return;
}

#undef PTR_recovered_10006bfe_10009104

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6594U)
 */

void recovered_10006c84(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x659aU)
 */

void recovered_10006c8a(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef DAT_10008f7c
#define DAT_10008f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x888cU)))
#undef LAB_10006d49
#define LAB_10006d49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6659U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_5c (*(undefined4 *)(frame + 160))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define local_40 (*(undefined * *)(frame + 188))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_28 (*(undefined1 (*)[4])(frame + 212))
#define local_24 (*(void * *)(frame + 216))
#define auStack_20 (*(undefined1 (*)[16])(frame + 220))
#define in_stack_0000000c (*(int * *)(frame + 264))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65a4U)
 */

void recovered_10006c94(undefined4 param_1,int param_2)

{
  unsigned char frame[284] = {0};

  int iVar1;
  undefined1 *puVar2;

  puVar2 = (undefined1 *)recovered_10005760(param_2,*(int *)(*in_stack_0000000c + 0x18));
  recovered_10006dca(local_28,puVar2);
  local_34 = auStackY_ec + 0x80;
  iVar1 = *(int *)(param_2 + 0x30);
  local_44 = PTR_recovered_10002c10_1000a034;
  local_40 = &DAT_10008f7c;
  local_38 = &LAB_10006d49;
  local_3c = auStack_20 + 0x1c;
  recovered_10002fba(&local_5c);
  if (iVar1 == 0) {
    local_58 = 1;
    recovered_10005b54(param_2,local_28);
  }
  else {
    local_58 = 2;
    puVar2 = (undefined1 *)recovered_10005e72(param_2);
    local_58 = 3;
    recovered_10006d96(puVar2,local_28);
  }
  recovered_10002c84(local_24);
  recovered_10002fcf(&local_5c);
  return;
}

#undef DAT_10008f7c
#undef LAB_10006d49
#undef PTR_recovered_10002c10_1000a034
#undef auStackY_ec
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef auStack_20
#undef in_stack_0000000c

#undef PTR_recovered_10006c84_10009128
#define PTR_recovered_10006c84_10009128 (*(void * *)(((uintptr_t)pf_module_state + 0x8a38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6688U)
 */

void recovered_10006d78(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006c84_10009128;
  return;
}

#undef PTR_recovered_10006c84_10009128

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66a6U)
 */

undefined1 * recovered_10006d96(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_10003760((int *)(param_1 + 4),(int *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66daU)
 */

void recovered_10006dca(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_1000617e((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x670cU)
 */

void recovered_10006dfc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6712U)
 */

void recovered_10006e02(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x671cU)
 */

void recovered_10006e0c(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar1 = *param_3;
  uVar2 = *(uint *)(iVar1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar3) != SBORROW4(-1 - iVar3,(uint)(0x80000000 < uVar2))) ==
      (int)((-1 - iVar3) - (uint)(0x80000000 < uVar2)) < 0) {
    iVar3 = -1;
    uVar2 = 0x80000000;
  }
  if ((int)(uint)(uVar2 < 0x7fffffff) <= iVar3) {
    uVar2 = 0x7fffffff;
  }
  iVar3 = *(int *)(iVar1 + 0x34);
  uVar4 = *(uint *)(iVar1 + 0x30);
  if ((SBORROW4(-1,iVar3) != SBORROW4(-1 - iVar3,(uint)(0x80000000 < uVar4))) ==
      (int)((-1 - iVar3) - (uint)(0x80000000 < uVar4)) < 0) {
    iVar3 = -1;
    uVar4 = 0x80000000;
  }
  if ((int)(uint)(uVar4 < 0x7fffffff) <= iVar3) {
    uVar4 = 0x7fffffff;
  }
  recovered_10006ea7(iVar1,uVar2,(int *)*param_2,uVar4,*(uint *)(iVar1 + 0x50));
  return;
}


#undef PTR_recovered_10006dfc_1000914c
#define PTR_recovered_10006dfc_1000914c (*(void * *)(((uintptr_t)pf_module_state + 0x8a5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x679aU)
 */

void recovered_10006e8a(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006dfc_1000914c;
  return;
}

#undef PTR_recovered_10006dfc_1000914c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67b7U)
 */

void recovered_10006ea7(undefined4 param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;

  bVar2 = recovered_1000554d(param_1,param_2,param_3,param_4);
  if (bVar2) {
    iVar5 = param_2 + (param_4 + -1) * *param_3;
    iVar1 = iVar5 * 4 + -4;
    iVar5 = iVar5 * 4 + -3;
    uVar4 = (undefined1)(param_5 >> 8);
    uVar3 = (undefined1)(param_5 >> 0x10);
    if (param_5 < 0x1000000) {
      *(undefined1 *)(param_3[2] + iVar1) = uVar3;
      *(undefined1 *)(param_3[2] + iVar5) = uVar4;
      *(char *)(param_3[2] + 2 + iVar1) = (char)param_5;
      param_5 = 0xff;
    }
    else {
      *(char *)(param_3[2] + iVar1) = (char)(param_5 >> 0x18);
      *(undefined1 *)(param_3[2] + iVar5) = uVar3;
      *(undefined1 *)(param_3[2] + 2 + iVar1) = uVar4;
    }
    *(char *)(param_3[2] + 3 + iVar1) = (char)param_5;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6836U)
 */

void recovered_10006f26(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x683cU)
 */

void recovered_10006f2c(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
#undef DAT_10008f88
#define DAT_10008f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8898U)))
#undef LAB_10007138
#define LAB_10007138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a48U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_5c (*(undefined4 *)(frame + 160))
#define local_58 (*(undefined4 *)(frame + 164))
#define local_44 (*(undefined * *)(frame + 184))
#define local_40 (*(undefined * *)(frame + 188))
#define local_3c (*(undefined1 * *)(frame + 192))
#define local_38 (*(undefined1 * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_24 (*(int *)(frame + 216))
#define local_20 (*(char * *)(frame + 220))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_1c (*(uint *)(frame + 224))
#define local_18 (*(undefined4 *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6846U)
 */

void recovered_10006f36(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[284] = {0};

  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;

  local_3c = auStackY_ec + 0xe8;
  local_34 = auStackY_ec + 0x80;
  local_14 = (byte *)*param_3;
  local_20 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar7 = *(uint *)(local_14 + 0x48);
  local_44 = PTR_recovered_10002c10_1000a034;
  local_40 = &DAT_10008f88;
  local_38 = &LAB_10007138;
  local_58 = 1;
  recovered_10002fba(&local_5c);
  recovered_10005684((int *)&local_20,uVar7);
  pbVar4 = &DAT_10008c97;
  if (*(byte **)(local_14 + 0x44) != (byte *)0x0) {
    pbVar4 = *(byte **)(local_14 + 0x44);
  }
  for (iVar6 = *(int *)(local_14 + 0x48); iVar6 != 0; iVar6 = iVar6 + -1) {
    uVar7 = *pbVar4 - 9;
    if (uVar7 < 0x1b) {
      if ((0x4800013U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_10006fc3;
    }
    else {
LAB_10006fc3:
      local_58 = 2;
      local_24 = iVar6;
      local_14 = pbVar4;
      recovered_100056d4((int *)&local_20,*pbVar4);
      pbVar4 = local_14;
      iVar6 = local_24;
    }
    pbVar4 = pbVar4 + 1;
  }
  uVar7 = 0;
  bVar10 = false;
  if (1 < local_1c) {
    if ((*local_20 == '0') && ((byte)(local_20[1] | 0x20U) == 0x78)) {
      recovered_1000718e((int *)&local_20,0,2);
    }
    if ((local_1c == 8) || (uVar7 = 0, local_1c == 6)) {
      local_58 = 3;
      local_14 = (byte *)recovered_10007202(&local_20);
      local_58 = 4;
      pbVar2 = (byte *)recovered_100071e8(&local_20);
      uVar7 = 0;
      for (pbVar4 = local_14; bVar10 = pbVar4 == pbVar2, !bVar10; pbVar4 = pbVar4 + 1) {
        bVar1 = *pbVar4;
        bVar3 = bVar1 - 0x30;
        if (9 < bVar3) {
          if ((byte)(bVar1 + 0x9f) < 6) {
            bVar3 = bVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(bVar1 + 0xbf)) {
              uVar7 = 0;
              break;
            }
            bVar3 = bVar1 - 0x37;
          }
        }
        uVar7 = uVar7 << 4 | (uint)bVar3;
      }
    }
  }
  recovered_10002c84(local_20);
  if (bVar10) {
    iVar6 = *param_3;
    uVar5 = *(uint *)(iVar6 + 0x10);
    iVar8 = *(int *)(iVar6 + 0x14);
    if ((SBORROW4(-1,iVar8) != SBORROW4(-1 - iVar8,(uint)(0x80000000 < uVar5))) ==
        (int)((-1 - iVar8) - (uint)(0x80000000 < uVar5)) < 0) {
      iVar8 = -1;
      uVar5 = 0x80000000;
    }
    if ((int)(uint)(uVar5 < 0x7fffffff) <= iVar8) {
      uVar5 = 0x7fffffff;
    }
    iVar8 = *(int *)(iVar6 + 0x34);
    uVar9 = *(uint *)(iVar6 + 0x30);
    if ((SBORROW4(-1,iVar8) != SBORROW4(-1 - iVar8,(uint)(0x80000000 < uVar9))) ==
        (int)((-1 - iVar8) - (uint)(0x80000000 < uVar9)) < 0) {
      iVar8 = -1;
      uVar9 = 0x80000000;
    }
    bVar10 = uVar9 < 0x7fffffff;
    if ((int)(uint)bVar10 <= iVar8) {
      uVar9 = 0x7fffffff;
    }
    recovered_10006ea7(iVar8 - (uint)bVar10,uVar5,(int *)*param_2,uVar9,uVar7);
  }
  recovered_10002fcf(&local_5c);
  return;
}

#undef DAT_10008c97
#undef DAT_10008f88
#undef LAB_10007138
#undef PTR_recovered_10002c10_1000a034
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_24
#undef local_20
#undef auStackY_ec
#undef local_1c
#undef local_18
#undef local_14

#undef PTR_recovered_10006f26_10009170
#define PTR_recovered_10006f26_10009170 (*(void * *)(((uintptr_t)pf_module_state + 0x8a80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a80U)
 */

void recovered_10007170(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10006f26_10009170;
  return;
}

#undef PTR_recovered_10006f26_10009170

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a9eU)
 */

void recovered_1000718e(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar1 = param_1[1];
  uVar2 = uVar1;
  if (param_2 <= uVar1) {
    uVar2 = param_2;
  }
  uVar4 = uVar1 - uVar2;
  uVar3 = uVar4;
  if (param_3 <= uVar4) {
    uVar3 = param_3;
  }
  if (param_3 != 0xffffffff) {
    uVar4 = uVar3;
  }
  for (; uVar4 + uVar2 < uVar1; uVar2 = uVar2 + 1) {
    *(undefined1 *)(*param_1 + uVar2) = *(undefined1 *)(uVar4 + *param_1 + uVar2);
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 - uVar4;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + (uVar1 - uVar4)) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6af8U)
 */

int recovered_100071e8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10007202(param_1);
  return iVar1 + param_1[1];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b12U)
 */

undefined4 recovered_10007202(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006112(param_1);
  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b2aU)
 */

void recovered_1000721a(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b30U)
 */

void recovered_10007220(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b3aU)
 */

void recovered_1000722a(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar1 = *param_3;
  uVar2 = *(uint *)(iVar1 + 0x10);
  iVar4 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar2))) ==
      (int)((-1 - iVar4) - (uint)(0x80000000 < uVar2)) < 0) {
    iVar4 = -1;
    uVar2 = 0x80000000;
  }
  if ((int)(uint)(uVar2 < 0x7fffffff) <= iVar4) {
    uVar2 = 0x7fffffff;
  }
  iVar4 = *(int *)(iVar1 + 0x34);
  uVar3 = *(uint *)(iVar1 + 0x30);
  if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar3))) ==
      (int)((-1 - iVar4) - (uint)(0x80000000 < uVar3)) < 0) {
    iVar4 = -1;
    uVar3 = 0x80000000;
  }
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar4) {
    uVar3 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x1c) = uVar2;
  *(uint *)(param_2 + 0x20) = uVar3;
  return;
}


#undef PTR_recovered_1000721a_10009194
#define PTR_recovered_1000721a_10009194 (*(void * *)(((uintptr_t)pf_module_state + 0x8aa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6ba2U)
 */

void recovered_10007292(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_1000721a_10009194;
  return;
}

#undef PTR_recovered_1000721a_10009194

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bc0U)
 */

void recovered_100072b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bc6U)
 */

void recovered_100072b6(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bd0U)
 */

void recovered_100072c0(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;

  uVar3 = *(uint *)(*param_3 + 0x10);
  piVar1 = (int *)(*param_3 + 0x14);
  iVar2 = -*piVar1;
  if ((SBORROW4(0,*piVar1) != SBORROW4(iVar2,(uint)(1 < uVar3))) ==
      (int)(iVar2 - (uint)(1 < uVar3)) < 0) {
    uVar3 = 1;
  }
  recovered_10005e02(param_2,uVar3);
  return;
}


#undef PTR_recovered_100072b0_100091b8
#define PTR_recovered_100072b0_100091b8 (*(void * *)(((uintptr_t)pf_module_state + 0x8ac8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c00U)
 */

void recovered_100072f0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_100072b0_100091b8;
  return;
}

#undef PTR_recovered_100072b0_100091b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c1eU)
 */

void recovered_1000730e(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c24U)
 */

void recovered_10007314(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef DAT_10008f94
#define DAT_10008f94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88a4U)))
#undef LAB_10007420
#define LAB_10007420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d30U)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define in_stack_00000008 (*(int *)(frame + 276))
#define local_6c (*(undefined4 *)(frame + 160))
#define in_stack_0000000c (*(int * *)(frame + 280))
#define local_68 (*(undefined4 *)(frame + 164))
#define local_54 (*(undefined * *)(frame + 184))
#define local_50 (*(undefined * *)(frame + 188))
#define local_4c (*(undefined1 * *)(frame + 192))
#define local_48 (*(undefined1 * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_38 (*(void * (*)[3])(frame + 212))
#define local_2c (*(void * (*)[3])(frame + 224))
#define local_20 (*(void * (*)[3])(frame + 236))
#define local_14 (*(char * *)(frame + 248))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6c2eU)
 */

void recovered_1000731e(void)

{
  unsigned char frame[300] = {0};

  char *pcVar1;
  char *pcVar2;

  recovered_10005e40(in_stack_00000008,*(int *)(*in_stack_0000000c + 0x18));
  pcVar1 = (char *)recovered_10005760(in_stack_00000008,*(int *)(*in_stack_0000000c + 0x18));
  pcVar2 = (char *)recovered_10005760(in_stack_00000008,*(int *)(*in_stack_0000000c + 0x38));
  recovered_1000391c(local_2c,pcVar2);
  local_44 = auStackY_fc + 0x80;
  local_54 = PTR_recovered_10002c10_1000a034;
  local_50 = &DAT_10008f94;
  local_48 = &LAB_10007420;
  local_68 = 1;
  local_4c = (undefined1 *)(local_20 + 7);
  recovered_10002fba(&local_6c);
  local_14 = pcVar1;
  recovered_1000391c(local_20,pcVar1);
  local_68 = 2;
  recovered_10007481((int *)local_38,local_20,local_2c);
  recovered_100038ca(local_14,local_38);
  recovered_10002c84(local_38[0]);
  recovered_10002c84(local_20[0]);
  recovered_10002c84(local_2c[0]);
  recovered_10002fcf(&local_6c);
  return;
}

#undef DAT_10008f94
#undef LAB_10007420
#undef PTR_recovered_10002c10_1000a034
#undef in_stack_00000008
#undef local_6c
#undef in_stack_0000000c
#undef local_68
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_38
#undef local_2c
#undef local_20
#undef local_14
#undef auStackY_fc

#undef PTR_recovered_1000730e_100091dc
#define PTR_recovered_1000730e_100091dc (*(void * *)(((uintptr_t)pf_module_state + 0x8aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6d74U)
 */

void recovered_10007464(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_1000730e_100091dc;
  return;
}

#undef PTR_recovered_1000730e_100091dc

#undef DAT_10008f9c
#define DAT_10008f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88acU)))
#undef LAB_100074fa
#define LAB_100074fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e0aU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_24 (*(undefined1 * *)(frame + 200))
#define local_14 (*(undefined4 *)(frame + 216))
#define local_4c (*(undefined4 *)(frame + 160))
#define local_48 (*(undefined4 *)(frame + 164))
#define local_34 (*(undefined * *)(frame + 184))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 16))
#define local_30 (*(undefined * *)(frame + 188))
#define local_2c (*(undefined1 * *)(frame + 192))
#define local_28 (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6d91U)
 */

int * recovered_10007481(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[268] = {0};

  int *piVar1;

  local_14 = param_1;
  recovered_1000617e(param_1,param_2);
  piVar1 = local_14;
  local_24 = auStackY_dc + 0x80;
  local_34 = PTR_recovered_10002c10_1000a034;
  local_30 = &DAT_10008f9c;
  local_28 = &LAB_100074fa;
  local_48 = 1;
  local_2c = auStackY_dc + 0xd8;
  recovered_10002fba(&local_4c);
  recovered_1000752c(piVar1,param_3);
  recovered_10002fcf(&local_4c);
  return param_1;
}

#undef DAT_10008f9c
#undef LAB_100074fa
#undef PTR_recovered_10002c10_1000a034
#undef local_24
#undef local_14
#undef local_4c
#undef local_48
#undef local_34
#undef auStackY_dc
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6e3cU)
 */

void recovered_1000752c(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10008c97;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10007558(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10008c97

#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6e68U)
 */

int * recovered_10007558(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[68] = {0};

  int iVar1;
  uint uVar2;

  if (param_3 != 0 && param_2 != 0) {
    local_14 = 0;
    uVar2 = recovered_100060d4(param_1,param_2,&local_14);
    iVar1 = param_1[1];
    if ((char)uVar2 == '\0') {
      recovered_10005684(param_1,iVar1 + param_3);
      for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(uVar2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar2);
      }
    }
    else {
      uVar2 = iVar1 - local_14;
      if (param_3 <= (uint)(iVar1 - local_14)) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      recovered_10005684(param_1,param_3 + iVar1);
      for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined1 *)(uVar2 + *param_1 + iVar1) = *(undefined1 *)(uVar2 + local_14 + *param_1);
      }
    }
    iVar1 = param_1[1];
    param_1[1] = param_3 + iVar1;
    *(undefined1 *)(*param_1 + param_3 + iVar1) = 0;
  }
  return param_1;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6f20U)
 */

void recovered_10007610(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6f26U)
 */

void recovered_10007616(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


#undef DAT_10008fa4
#define DAT_10008fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x88b4U)))
#undef LAB_100076ea
#define LAB_100076ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ffaU)))
#undef PTR_recovered_10002c10_1000a034
#define PTR_recovered_10002c10_1000a034 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9944U)))
#define local_2c (*(void * (*)[3])(frame + 224))
#define local_20 (*(void * (*)[3])(frame + 236))
#define local_14 (*(char * *)(frame + 248))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
#define local_64 (*(undefined4 *)(frame + 168))
#define local_60 (*(undefined4 *)(frame + 172))
#define local_4c (*(undefined * *)(frame + 192))
#define local_48 (*(undefined * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_40 (*(undefined1 * *)(frame + 204))
#define local_3c (*(undefined1 * *)(frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6f30U)
 */

void recovered_10007620(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[300] = {0};

  int iVar1;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  local_14 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  recovered_1000391c(local_20,local_14);
  local_3c = auStackY_fc + 0x80;
  iVar1 = *param_3;
  local_4c = PTR_recovered_10002c10_1000a034;
  local_48 = &DAT_10008fa4;
  local_40 = &LAB_100076ea;
  local_60 = 1;
  local_44 = (undefined1 *)(local_20 + 7);
  recovered_10002fba(&local_64);
  recovered_10007481((int *)local_2c,local_20,(undefined4 *)(iVar1 + 0x24));
  recovered_100038ca(local_14,local_2c);
  recovered_10002c84(local_2c[0]);
  recovered_10002c84(local_20[0]);
  recovered_10002fcf(&local_64);
  return;
}

#undef DAT_10008fa4
#undef LAB_100076ea
#undef PTR_recovered_10002c10_1000a034
#undef local_2c
#undef local_20
#undef local_14
#undef auStackY_fc
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c

#undef PTR_recovered_10007610_10009200
#define PTR_recovered_10007610_10009200 (*(void * *)(((uintptr_t)pf_module_state + 0x8b10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7028U)
 */

void recovered_10007718(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007610_10009200;
  return;
}

#undef PTR_recovered_10007610_10009200

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7046U)
 */

void recovered_10007736(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x704cU)
 */

void recovered_1000773c(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7056U)
 */

void recovered_10007746(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  uint uVar3;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int extraout_EDX = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar5 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  uVar6 = recovered_100039c4(pcVar5);
  puVar1 = (uint *)(*param_3 + 0x30);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*param_3 + 0x34);
  *pcVar5 = '\x02';
  *(uint *)(pcVar5 + 0x10) = uVar6 + uVar3;
  *(uint *)(pcVar5 + 0x14) = extraout_EDX + iVar4 + (uint)CARRY4(uVar6,uVar2);
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  if (*(undefined1 **)(pcVar5 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar5 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_10007736_10009224
#define PTR_recovered_10007736_10009224 (*(void * *)(((uintptr_t)pf_module_state + 0x8b34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x70b6U)
 */

void recovered_100077a6(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007736_10009224;
  return;
}

#undef PTR_recovered_10007736_10009224

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x70d4U)
 */

void recovered_100077c4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x70daU)
 */

void recovered_100077ca(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x70e4U)
 */

void recovered_100077d4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX = 0;
  int extraout_EDX_00 = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x38));
  uVar3 = recovered_100039c4(pcVar2);
  uVar4 = recovered_100039c4(pcVar1);
  *pcVar1 = '\x02';
  *(uint *)(pcVar1 + 0x10) = uVar4 + uVar3;
  *(uint *)(pcVar1 + 0x14) = extraout_EDX_00 + extraout_EDX + (uint)CARRY4(uVar4,uVar3);
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_100077c4_10009248
#define PTR_recovered_100077c4_10009248 (*(void * *)(((uintptr_t)pf_module_state + 0x8b58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7160U)
 */

void recovered_10007850(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_100077c4_10009248;
  return;
}

#undef PTR_recovered_100077c4_10009248

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717eU)
 */

void recovered_1000786e(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7184U)
 */

void recovered_10007874(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x718eU)
 */

void recovered_1000787e(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  uint uVar3;
  uint uVar2;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int extraout_EDX = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar5 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  uVar6 = recovered_100039c4(pcVar5);
  puVar1 = (uint *)(*param_3 + 0x30);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*param_3 + 0x34);
  *pcVar5 = '\x02';
  *(uint *)(pcVar5 + 0x10) = uVar6 - uVar3;
  *(uint *)(pcVar5 + 0x14) = (extraout_EDX - iVar4) - (uint)(uVar6 < uVar2);
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  if (*(undefined1 **)(pcVar5 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar5 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_1000786e_1000926c
#define PTR_recovered_1000786e_1000926c (*(void * *)(((uintptr_t)pf_module_state + 0x8b7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x71eeU)
 */

void recovered_100078de(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_1000786e_1000926c;
  return;
}

#undef PTR_recovered_1000786e_1000926c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x720cU)
 */

void recovered_100078fc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7212U)
 */

void recovered_10007902(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x721cU)
 */

void recovered_1000790c(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX = 0;
  int extraout_EDX_00 = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x38));
  uVar3 = recovered_100039c4(pcVar2);
  uVar4 = recovered_100039c4(pcVar1);
  *pcVar1 = '\x02';
  *(uint *)(pcVar1 + 0x10) = uVar4 - uVar3;
  *(uint *)(pcVar1 + 0x14) = (extraout_EDX_00 - extraout_EDX) - (uint)(uVar4 < uVar3);
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_100078fc_10009290
#define PTR_recovered_100078fc_10009290 (*(void * *)(((uintptr_t)pf_module_state + 0x8ba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7298U)
 */

void recovered_10007988(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_100078fc_10009290;
  return;
}

#undef PTR_recovered_100078fc_10009290

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72b6U)
 */

void recovered_100079a6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72bcU)
 */

void recovered_100079ac(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72c6U)
 */

void recovered_100079b6(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  int extraout_EDX = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar4 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  uVar5 = recovered_100039c4(pcVar4);
  uVar1 = *(uint *)(*param_3 + 0x30);
  lVar3 = (ulonglong)uVar1 * (ulonglong)uVar5;
  iVar2 = *(int *)(*param_3 + 0x34);
  *pcVar4 = '\x02';
  *(int *)(pcVar4 + 0x10) = (int)lVar3;
  *(uint *)(pcVar4 + 0x14) = uVar5 * iVar2 + (int)((ulonglong)lVar3 >> 0x20) + extraout_EDX * uVar1;
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  if (*(undefined1 **)(pcVar4 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar4 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_100079a6_100092b4
#define PTR_recovered_100079a6_100092b4 (*(void * *)(((uintptr_t)pf_module_state + 0x8bc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7336U)
 */

void recovered_10007a26(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_100079a6_100092b4;
  return;
}

#undef PTR_recovered_100079a6_100092b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7354U)
 */

void recovered_10007a44(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x735aU)
 */

void recovered_10007a4a(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7364U)
 */

void recovered_10007a54(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX = 0;
  int extraout_EDX_00 = 0;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x38));
  uVar3 = recovered_100039c4(pcVar2);
  uVar4 = recovered_100039c4(pcVar1);
  *pcVar1 = '\x02';
  *(int *)(pcVar1 + 0x10) = (int)((ulonglong)uVar4 * (ulonglong)uVar3);
  *(uint *)(pcVar1 + 0x14) =
       extraout_EDX_00 * uVar3 +
       (int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20) + extraout_EDX * uVar4;
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_10007a44_100092d8
#define PTR_recovered_10007a44_100092d8 (*(void * *)(((uintptr_t)pf_module_state + 0x8be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x73eaU)
 */

void recovered_10007ada(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007a44_100092d8;
  return;
}

#undef PTR_recovered_10007a44_100092d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7408U)
 */

void recovered_10007af8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740eU)
 */

void recovered_10007afe(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7418U)
 */

void recovered_10007b08(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 uVar6;

  iVar5 = *param_3;
  uVar1 = *(uint *)(iVar5 + 0x34);
  uVar2 = *(uint *)(iVar5 + 0x30);
  recovered_10005e40(param_2,*(int *)(iVar5 + 0x18));
  pcVar3 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  if (uVar2 == 0 && uVar1 == 0) {
    iVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = recovered_100039c4(pcVar3);
    iVar5 = recovered_10000ba4(uVar4,extraout_EDX,uVar2,uVar1);
    uVar6 = extraout_EDX_00;
  }
  *pcVar3 = '\x02';
  *(int *)(pcVar3 + 0x10) = iVar5;
  *(undefined4 *)(pcVar3 + 0x14) = uVar6;
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  if (*(undefined1 **)(pcVar3 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar3 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_10007af8_100092fc
#define PTR_recovered_10007af8_100092fc (*(void * *)(((uintptr_t)pf_module_state + 0x8c0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7496U)
 */

void recovered_10007b86(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007af8_100092fc;
  return;
}

#undef PTR_recovered_10007af8_100092fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x74b4U)
 */

void recovered_10007ba4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x74baU)
 */

void recovered_10007baa(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x74c4U)
 */

void recovered_10007bb4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 uVar6;

  recovered_10005e40(param_2,*(int *)(*param_3 + 0x18));
  pcVar1 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  pcVar2 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x38));
  uVar3 = recovered_100039c4(pcVar2);
  if (uVar3 == 0 && extraout_EDX == 0) {
    iVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = recovered_100039c4(pcVar1);
    iVar5 = recovered_10000ba4(uVar4,extraout_EDX_00,uVar3,extraout_EDX);
    uVar6 = extraout_EDX_01;
  }
  *pcVar1 = '\x02';
  *(int *)(pcVar1 + 0x10) = iVar5;
  *(undefined4 *)(pcVar1 + 0x14) = uVar6;
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  if (*(undefined1 **)(pcVar1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(pcVar1 + 4) = 0;
  }
  return;
}


#undef PTR_recovered_10007ba4_10009320
#define PTR_recovered_10007ba4_10009320 (*(void * *)(((uintptr_t)pf_module_state + 0x8c30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7554U)
 */

void recovered_10007c44(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007ba4_10009320;
  return;
}

#undef PTR_recovered_10007ba4_10009320

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7572U)
 */

void recovered_10007c62(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7578U)
 */

void recovered_10007c68(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002c84(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7582U)
 */

void recovered_10007c72(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar2 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x18));
  pcVar3 = (char *)recovered_10005760(param_2,*(int *)(*param_3 + 0x38));
  cVar1 = *pcVar2;
  if (cVar1 != *pcVar3) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      cVar1 = recovered_10007d0f((undefined4 *)(pcVar2 + 4),(undefined4 *)(pcVar3 + 4));
      if (cVar1 == '\0') {
        return;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      if (*(int *)(pcVar2 + 0x10) != *(int *)(pcVar3 + 0x10) ||
          *(int *)(pcVar2 + 0x14) != *(int *)(pcVar3 + 0x14)) {
        return;
      }
    }
  }
  recovered_100055f8(param_2);
  return;
}


#undef PTR_recovered_10007c62_10009344
#define PTR_recovered_10007c62_10009344 (*(void * *)(((uintptr_t)pf_module_state + 0x8c54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7602U)
 */

void recovered_10007cf2(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10002c52(8);
  *puVar1 = &PTR_recovered_10007c62_10009344;
  return;
}

#undef PTR_recovered_10007c62_10009344

#undef DAT_10008c97
#define DAT_10008c97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x85a7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x761fU)
 */

undefined1 recovered_10007d0f(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;

  puVar4 = &DAT_10008c97;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_1;
  }
  puVar3 = &DAT_10008c97;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  iVar5 = 0;
  if (param_1[1] == param_2[1]) {
    do {
      if (param_1[1] == iVar5) {
        return 1;
      }
      pcVar1 = puVar4 + iVar5;
      pcVar2 = puVar3 + iVar5;
      iVar5 = iVar5 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  return 0;
}

#undef DAT_10008c97

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x766cU)
 */

void recovered_10007d5c(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_10007dca(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_10007dec((undefined1 *)((int)pvVar1 + iVar3),(undefined1 *)(*param_1 + iVar3));
      recovered_10006332((undefined4 *)(*param_1 + 4 + iVar3));
      iVar3 = iVar3 + 0x18;
    }
    recovered_10002c84((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x76daU)
 */

void * recovered_10007dca(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10002c52(param_1 * 0x18);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x76fcU)
 */

void recovered_10007dec(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  *param_1 = *param_2;
  recovered_100065cc((undefined4 *)(param_1 + 4),(undefined4 *)(param_2 + 4));
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x772eU)
 */

int recovered_10007e1e(int *param_1,undefined1 *param_2)

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
    recovered_10007d5c(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_10006dca((undefined1 *)(iVar2 * 0x18 + *param_1),param_2);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0x18 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7780U)
 */

int recovered_10007e70(int *param_1,undefined1 *param_2)

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
    recovered_10007d5c(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_10007dec((undefined1 *)(iVar2 * 0x18 + *param_1),param_2);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0x18 + *param_1;
}


#undef PTR_DAT_1000a004
#define PTR_DAT_1000a004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9914U)))
#undef PTR_DAT_1000a01c
#define PTR_DAT_1000a01c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x992cU)))
#undef PTR_DAT_1000a02c
#define PTR_DAT_1000a02c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x993cU)))
#undef PTR_DAT_1000a03c
#define PTR_DAT_1000a03c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x994cU)))
#undef PTR_recovered_10003694_1000a014
#define PTR_recovered_10003694_1000a014 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9924U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77d2U)
 */

void recovered_10007ec2(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_1000a004;
  if (*PTR_DAT_1000a004 == '\0') {
    uVar4 = recovered_10002e57((uint *)PTR_DAT_1000a004);
    puVar3 = PTR_DAT_1000a01c;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_1000a03c;
      *(undefined **)PTR_DAT_1000a01c = PTR_DAT_1000a02c + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10002e50();
      recovered_10002e66(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_1000a004
#undef PTR_DAT_1000a01c
#undef PTR_DAT_1000a02c
#undef PTR_DAT_1000a03c
#undef PTR_recovered_10003694_1000a014

#undef PTR_DAT_1000a010
#define PTR_DAT_1000a010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9920U)))
#undef PTR_DAT_1000a028
#define PTR_DAT_1000a028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9938U)))
#undef PTR_DAT_1000a030
#define PTR_DAT_1000a030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9940U)))
#undef PTR_DAT_1000a040
#define PTR_DAT_1000a040 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9950U)))
#undef PTR_recovered_1000369a_1000a018
#define PTR_recovered_1000369a_1000a018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9928U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7833U)
 */

void recovered_10007f23(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_1000a010;
  if (*PTR_DAT_1000a010 == '\0') {
    uVar4 = recovered_10002e57((uint *)PTR_DAT_1000a010);
    puVar3 = PTR_DAT_1000a028;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_1000a040;
      *(undefined **)PTR_DAT_1000a028 = PTR_DAT_1000a030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10002e50();
      recovered_10002e66(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_1000a010
#undef PTR_DAT_1000a028
#undef PTR_DAT_1000a030
#undef PTR_DAT_1000a040
#undef PTR_recovered_1000369a_1000a018

#undef PTR_DAT_1000a008
#define PTR_DAT_1000a008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9918U)))
#undef PTR_DAT_1000a020
#define PTR_DAT_1000a020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9930U)))
#undef PTR_DAT_1000a030
#define PTR_DAT_1000a030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9940U)))
#undef PTR_DAT_1000a038
#define PTR_DAT_1000a038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9948U)))
#undef PTR_recovered_1000369a_1000a018
#define PTR_recovered_1000369a_1000a018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9928U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x7894U)
 */

void recovered_10007f84(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_1000a008;
  if (*PTR_DAT_1000a008 == '\0') {
    uVar4 = recovered_10002e57((uint *)PTR_DAT_1000a008);
    puVar3 = PTR_DAT_1000a020;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_1000a038;
      *(undefined **)PTR_DAT_1000a020 = PTR_DAT_1000a030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10002e50();
      recovered_10002e66(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_1000a008
#undef PTR_DAT_1000a020
#undef PTR_DAT_1000a030
#undef PTR_DAT_1000a038
#undef PTR_recovered_1000369a_1000a018

#undef PTR_DAT_1000a00c
#define PTR_DAT_1000a00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x991cU)))
#undef PTR_DAT_1000a024
#define PTR_DAT_1000a024 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9934U)))
#undef PTR_DAT_1000a030
#define PTR_DAT_1000a030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9940U)))
#undef PTR_DAT_1000a038
#define PTR_DAT_1000a038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9948U)))
#undef PTR_recovered_1000369a_1000a018
#define PTR_recovered_1000369a_1000a018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x9928U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x78f5U)
 */

void recovered_10007fe5(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_1000a00c;
  if (*PTR_DAT_1000a00c == '\0') {
    uVar4 = recovered_10002e57((uint *)PTR_DAT_1000a00c);
    puVar3 = PTR_DAT_1000a024;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_1000a038;
      *(undefined **)PTR_DAT_1000a024 = PTR_DAT_1000a030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_10002e50();
      recovered_10002e66(puVar2);
    }
  }
  return;
}

#undef PTR_DAT_1000a00c
#undef PTR_DAT_1000a024
#undef PTR_DAT_1000a030
#undef PTR_DAT_1000a038
#undef PTR_recovered_1000369a_1000a018
