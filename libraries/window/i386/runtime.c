/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100070a8
#define DAT_100070a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6318U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10000d90(void)

{
  unsigned char frame[64] = {0};

  DAT_100070a8 = 0;
  recovered_10000da0();
  return;
}

#undef DAT_100070a8

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_100070a8
#define DAT_100070a8 (*(char *)(((uintptr_t)pf_module_state + 0x6318U)))
#undef DAT_100070ac
#define DAT_100070ac (*(int *)(((uintptr_t)pf_module_state + 0x631cU)))
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

void recovered_10000da0(void)

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
  if (DAT_100070a8 == '\0') {
    DAT_100070ac = 0;
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
      recovered_10002473(uVar1,*puVar2,puVar2[-1],&local_20);
      puVar2 = puVar2 + 2;
      uVar1 = extraout_EAX;
    }
    if (DAT_100070ac == 0) {
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
      recovered_10002473(uVar1,uVar3,0x300000,&local_20);
    }
    DAT_100070a8 = '\x01';
  }
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_100070a8
#undef DAT_100070ac
#undef _DAT_00006088
#undef _DAT_0000608c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a8

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b0U)
 */

int recovered_10000f40(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000da0();
  iVar1 = 0;
  for (piVar2 = &DAT_100070ac; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1daU)
 */

void recovered_10000f6a(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000da0();
  for (piVar1 = &DAT_100070ac; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x209U)
 */

int recovered_10000f99(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000da0();
  iVar1 = 0;
  for (piVar2 = &DAT_100070ac; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22dU)
 */

void recovered_10000fbd(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000da0();
  for (piVar1 = &DAT_100070ac; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x256U)
 */

uint * recovered_10000fe6(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  if (param_1 != 0) {
    recovered_10000da0();
    uVar4 = param_1 + 0xfU & 0xfffffff0;
    for (puVar3 = &DAT_100070ac; puVar3 = (uint *)*puVar3, puVar3 != (uint *)0x0;
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

#undef DAT_100070ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bbU)
 */

longlong recovered_1000104b(uint param_1,int param_2,uint param_3)

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

ulonglong recovered_1000108a(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100010c9(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_1000110a(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_1000112b(param_1,param_3,param_2,param_4,param_5,(uint *)0x0);
  return uVar1;
}


#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39bU)
 */

undefined8 recovered_1000112b(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
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
      uVar9 = recovered_1000108a(param_3,param_2,uVar2 & 0xff);
      uVar6 = ((uint)uVar9 & 1) + uVar4 * 2;
      lVar10 = recovered_1000104b(1,0,uVar2 & 0xff);
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

undefined8 recovered_1000120c(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  unsigned char frame[68] = {0};


  local_10 = 0;
  local_14 = 0;
  recovered_1000112b(param_3,param_2,param_1,param_3,param_4,&local_14);
  return CONCAT44(local_10,local_14);
}

#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b4U)
 */

int recovered_10001244(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_1000112b(iVar2,((param_2 ^ uVar3) - uVar3) - (uint)((param_1 ^ uVar3) < uVar3)
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

undefined8 recovered_100012b6(uint param_1,int param_2,uint param_3,uint param_4)

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
    recovered_1000112b(iVar1,((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2),
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

void recovered_10001328(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59fU)
 */

int recovered_1000132f(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001340(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10001368(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_1000138e(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x626U)
 */

void * recovered_100013b6(void *out,void *data,ulong size)

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

void * recovered_100013d7(void *out,void *data,ulong size)

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

void * recovered_1000141d(void *out,int value,ulong size)

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

void recovered_10001439(undefined1 *param_1,int param_2)

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

void recovered_1000144f(undefined1 *param_1,int param_2)

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

int recovered_10001465(void *left,void *right,ulong size)

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

bool recovered_10001494(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717U)
 */

bool recovered_100014a7(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72aU)
 */

bool recovered_100014ba(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740U)
 */

bool recovered_100014d0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x764U)
 */

bool recovered_100014f4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77dU)
 */

bool recovered_1000150d(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x790U)
 */

int recovered_10001520(int param_1)

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

int recovered_10001533(int param_1)

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

ulong recovered_10001546(char *text)

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

int recovered_10001561(char *left,char *right)

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

void recovered_10001589(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10001561(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x802U)
 */

void recovered_10001592(int param_1,int param_2)

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

void * recovered_100015ac(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001546(param_1);
    out = recovered_10001340(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_100013b6(out,param_1,uVar1 + 1);
      pvVar2 = out;
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x866U)
 */

char * recovered_100015f6(char *param_1,char param_2)

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

int recovered_1000161a(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_100015f6(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c1U)
 */

char * recovered_10001651(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100015f6(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8efU)
 */

char * recovered_1000167f(char *param_1,char *param_2)

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


#undef DAT_10005d48
#define DAT_10005d48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91cU)
 */

undefined * recovered_100016ac(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10005d48;
}

#undef DAT_10005d48

#undef PTR_DAT_10007008
#define PTR_DAT_10007008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6278U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x926U)
 */

undefined ** recovered_100016b6(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10007008;
}

#undef PTR_DAT_10007008

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x930U)
 */

undefined4 recovered_100016c0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10005b00
#define DAT_10005b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef _DAT_10005b00
#define _DAT_10005b00 (*(float *)(((uintptr_t)pf_module_state + 0x4d70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x947U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100016d7(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    lVar2 = lVar2 + lVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    lVar2 = lVar2 * (longdouble)_DAT_10005b00;
  }
  return lVar2;
}

#undef DAT_10005b00
#undef _DAT_10005b00

#undef DAT_10005b00
#define DAT_10005b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef _DAT_10005b00
#define _DAT_10005b00 (*(float *)(((uintptr_t)pf_module_state + 0x4d70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x971U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001701(double param_1,int *param_2)

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
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_10005b00) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_10005b00)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10005b00
#undef _DAT_10005b00

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ffU)
 */

double recovered_1000178f(double left,double right)

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

double recovered_100017e1(double left,double right)

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

double recovered_1000186a(double value)

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

double recovered_100018b2(double value)

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


#undef DAT_10005b00
#define DAT_10005b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef _DAT_10005b00
#define _DAT_10005b00 (*(float *)(((uintptr_t)pf_module_state + 0x4d70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7dU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000190d(double value)

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
      dVar1 = (value / dVar1 + dVar1) * (double)_DAT_10005b00;
    }
  }
  return dVar1;
}

#undef DAT_10005b00
#undef _DAT_10005b00

#undef DAT_10005b00
#define DAT_10005b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef DAT_10005b04
#define DAT_10005b04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d74U)))
#undef DAT_10005b08
#define DAT_10005b08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d78U)))
#undef DAT_10005b0c
#define DAT_10005b0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d7cU)))
#undef DAT_10005b10
#define DAT_10005b10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d80U)))
#undef DAT_10005b30
#define DAT_10005b30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4da0U)))
#undef _DAT_10005b00
#define _DAT_10005b00 (*(float *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef _DAT_10005b04
#define _DAT_10005b04 (*(float *)(((uintptr_t)pf_module_state + 0x4d74U)))
#undef _DAT_10005b08
#define _DAT_10005b08 (*(float *)(((uintptr_t)pf_module_state + 0x4d78U)))
#undef _DAT_10005b0c
#define _DAT_10005b0c (*(float *)(((uintptr_t)pf_module_state + 0x4d7cU)))
#undef _DAT_10005b10
#define _DAT_10005b10 (*(float *)(((uintptr_t)pf_module_state + 0x4d80U)))
#undef _DAT_10005b30
#define _DAT_10005b30 (*(double *)(((uintptr_t)pf_module_state + 0x4da0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc7U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001957(double value)

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
    dVar3 = (double)_DAT_10005b04;
  }
  else {
    iVar6 = 0;
    for (; (double)_DAT_10005b08 < value; value = value * (double)_DAT_10005b00) {
      iVar6 = iVar6 + 1;
    }
    for (; value < (double)_DAT_10005b0c; value = value + value) {
      iVar6 = iVar6 + -1;
    }
    dVar4 = 1.0;
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    for (uVar5 = 1; uVar5 < 0x14; uVar5 = uVar5 + 2) {
      dVar3 = dVar1 / dVar4 + dVar3;
      dVar1 = dVar1 * dVar2;
      dVar4 = dVar4 + (double)_DAT_10005b10;
    }
    dVar3 = dVar3 + dVar3 + (double)iVar6 * _DAT_10005b30;
  }
  return dVar3;
}

#undef DAT_10005b00
#undef DAT_10005b04
#undef DAT_10005b08
#undef DAT_10005b0c
#undef DAT_10005b10
#undef DAT_10005b30
#undef _DAT_10005b00
#undef _DAT_10005b04
#undef _DAT_10005b08
#undef _DAT_10005b0c
#undef _DAT_10005b10
#undef _DAT_10005b30

#undef DAT_10005b60
#define DAT_10005b60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc6bU)
 */

longlong recovered_100019fb(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10005b60 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10005b60

#undef DAT_10005b14
#define DAT_10005b14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d84U)))
#undef DAT_10005b18
#define DAT_10005b18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d88U)))
#undef DAT_10005b1c
#define DAT_10005b1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8cU)))
#undef _DAT_10005b14
#define _DAT_10005b14 (*(float *)(((uintptr_t)pf_module_state + 0x4d84U)))
#undef _DAT_10005b18
#define _DAT_10005b18 (*(float *)(((uintptr_t)pf_module_state + 0x4d88U)))
#undef _DAT_10005b1c
#define _DAT_10005b1c (*(float *)(((uintptr_t)pf_module_state + 0x4d8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcafU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001a3f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001a81(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)(((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10005b1c +
                  (lVar1 * lVar1) / (longdouble)_DAT_10005b18 +
                  (longdouble)1 + lVar1 / (longdouble)_DAT_10005b14) * extraout_ST0);
}

#undef DAT_10005b14
#undef DAT_10005b18
#undef DAT_10005b1c
#undef _DAT_10005b14
#undef _DAT_10005b18
#undef _DAT_10005b1c

#undef DAT_10005b38
#define DAT_10005b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_10005b48
#define DAT_10005b48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef DAT_10005b50
#define DAT_10005b50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dc0U)))
#undef _DAT_10005b38
#define _DAT_10005b38 (*(double *)(((uintptr_t)pf_module_state + 0x4da8U)))
#undef _DAT_10005b40
#define _DAT_10005b40 (*(double *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b48
#define _DAT_10005b48 (*(double *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef _DAT_10005b50
#define _DAT_10005b50 (*(double *)(((uintptr_t)pf_module_state + 0x4dc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcf1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a81(double param_1)

{
  unsigned char frame[64] = {0};

  for (; _DAT_10005b38 < param_1; param_1 = param_1 + _DAT_10005b50) {
  }
  for (; param_1 < _DAT_10005b40; param_1 = param_1 + _DAT_10005b48) {
  }
  return;
}

#undef DAT_10005b38
#undef DAT_10005b40
#undef DAT_10005b48
#undef DAT_10005b50
#undef _DAT_10005b38
#undef _DAT_10005b40
#undef _DAT_10005b48
#undef _DAT_10005b50

#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d90U)))
#undef DAT_10005b24
#define DAT_10005b24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d94U)))
#undef DAT_10005b28
#define DAT_10005b28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d98U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4d90U)))
#undef _DAT_10005b24
#define _DAT_10005b24 (*(float *)(((uintptr_t)pf_module_state + 0x4d94U)))
#undef _DAT_10005b28
#define _DAT_10005b28 (*(float *)(((uintptr_t)pf_module_state + 0x4d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001abf(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001a81(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10005b28 +
                 (lVar1 * lVar1) / (longdouble)_DAT_10005b24 +
                 (longdouble)1 + lVar1 * (longdouble)_DAT_10005b20);
}

#undef DAT_10005b20
#undef DAT_10005b24
#undef DAT_10005b28
#undef _DAT_10005b20
#undef _DAT_10005b24
#undef _DAT_10005b28

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd6dU)
 */

double recovered_10001afd(double value)

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

float recovered_10001b18(float left,float right)

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

longdouble recovered_10001b70(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_10001701((double)param_1,param_2);
  return (longdouble)(float)extraout_ST0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe03U)
 */

longdouble recovered_10001b93(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_100016d7((double)param_1,param_2);
  return (longdouble)(float)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe26U)
 */

float recovered_10001bb6(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100017e1((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe49U)
 */

float recovered_10001bd9(float value)

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

float recovered_10001c27(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100018b2((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb3U)
 */

double recovered_10001c43(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_100018b2(value);
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

float recovered_10001c9f(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001c43((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf2bU)
 */

float recovered_10001cbb(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000190d((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf47U)
 */

float recovered_10001cd7(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001957((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf63U)
 */

void recovered_10001cf3(double param_1)

{
  unsigned char frame[64] = {0};

  recovered_100019fb(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf79U)
 */

float recovered_10001d09(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001a3f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf95U)
 */

float recovered_10001d25(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001abf((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfb1U)
 */

float recovered_10001d41(float value)

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

int recovered_10001d5c(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_10001e51();
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

int recovered_10001e51(void)

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

int recovered_10001e86(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_10001e51();
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

#undef DAT_10005b2c
#define DAT_10005b2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d9cU)))
#undef _DAT_10005b2c
#define _DAT_10005b2c (*(float *)(((uintptr_t)pf_module_state + 0x4d9cU)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11ebU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001f7b(char *text,char **end)

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
    lVar7 = lVar7 * (longdouble)_DAT_10005b2c + (longdouble)(int)(bVar3 - 0x30);
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
      lVar8 = lVar8 * (longdouble)_DAT_10005b2c + (longdouble)(int)(bVar3 - 0x30);
      lVar9 = lVar9 * (longdouble)_DAT_10005b2c;
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
        lVar7 = recovered_100016d7((double)lVar7,iVar5 * local_14);
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

#undef DAT_10005b2c
#undef _DAT_10005b2c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x133fU)
 */

float recovered_100020cf(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001f7b(text,end);
  return (float)dVar1;
}


#undef DAT_10005b2c
#define DAT_10005b2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d9cU)))
#undef DAT_10005d76
#define DAT_10005d76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe6U)))
#undef _DAT_10005b2c
#define _DAT_10005b2c (*(float *)(((uintptr_t)pf_module_state + 0x4d9cU)))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(ulong *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1361U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100020f1(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10002154:
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
LAB_10002182:
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
switchD_1000218d_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_10002154;
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
          recovered_100023e6(&local_1c,&local_18,(int *)&local_14,&local_1c,(int)ROUND(dVar3),10,
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
            dVar4 = (double)_DAT_10005b2c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_1000215f;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_1000218d_caseD_68;
        case 'p':
          uVar6 = *(uint *)arguments;
          recovered_100023a4(&local_1c,&DAT_10005d76);
          cVar5 = '\0';
          uVar9 = 0x10;
          goto LAB_1000235e;
        case 's':
          recovered_100023a4(&local_1c,*(char **)arguments);
          goto LAB_10002367;
        case 'u':
          cVar5 = '\0';
          uVar9 = 10;
          goto LAB_10002359;
        case 'x':
          cVar5 = '\0';
LAB_1000234b:
          uVar9 = 0x10;
LAB_10002359:
          uVar6 = *(uint *)arguments;
          goto LAB_1000235e;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              cVar5 = '\x01';
              goto LAB_1000234b;
            }
            goto switchD_1000218d_caseD_65;
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
LAB_1000235e:
          recovered_100023e6(&local_1c,&local_18,(int *)&local_14,&local_1c,uVar6,uVar9,cVar5);
LAB_10002367:
          arguments = (void *)((int)arguments + 4);
          goto LAB_1000215f;
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
LAB_1000215f:
    format = format + 1;
  } while( true );
switchD_1000218d_caseD_68:
  cVar5 = format[1];
  format = format + 1;
  goto LAB_10002182;
}

#undef DAT_10005b2c
#undef DAT_10005d76
#undef _DAT_10005b2c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f6U)
 */

void recovered_10002386(undefined4 param_1,uint *param_2,int *param_3,int *param_4,undefined1 param_5)

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


#undef str_10005d4d
#define str_10005d4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fbdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1614U)
 */

void recovered_100023a4(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *in_ECX;
  uint *in_EDX;
  char *pcVar2;

  pcVar2 = str_10005d4d;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  for (; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    recovered_10002386((int)cVar1,in_EDX,in_ECX,param_1,cVar1);
  }
  return;
}

#undef str_10005d4d

#undef str_10005d54
#define str_10005d54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fc4U)))
#undef str_10005d65
#define str_10005d65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fd5U)))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1656U)
 */

void recovered_100023e6(undefined4 param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
                  uint param_6,char param_7)

{
  unsigned char frame[105] = {0};

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  pcVar3 = str_10005d54;
  if (param_7 == '\0') {
    pcVar3 = str_10005d65;
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
    recovered_10002386((int)acStack_39[iVar2],puVar1,local_18,param_4,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}

#undef str_10005d54
#undef str_10005d65
#undef local_18
#undef local_14
#undef acStack_39

#define uStack00000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c0U)
 */

int recovered_10002450(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100020f1(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x631cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16e3U)
 */

void recovered_10002473(undefined4 param_1,uint param_2,int param_3,int *param_4)

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
    if (DAT_100070ac == 0) {
      puVar1 = &DAT_100070ac;
    }
    else {
      puVar1 = (undefined4 *)(*param_4 + 4);
    }
    *puVar1 = piVar3;
    *param_4 = (int)piVar3;
  }
  return;
}

#undef DAT_100070ac

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

undefined4 recovered_100024c5(void)

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

#undef DAT_100070b0
#define DAT_100070b0 (*(int *)(((uintptr_t)pf_module_state + 0x6320U)))
#undef DAT_100070b4
#define DAT_100070b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6324U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x176aU)
 */

void recovered_100024fa(char *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;

  if (param_1 != (char *)0x0) {
    while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_100070b0 != 0) {
          DAT_100070b0 = DAT_100070b0 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10002581();
        }
        else {
          if (DAT_100070b0 - 0x1ffU < 0xfffffe00) {
            recovered_10002581();
          }
          pcVar1 = &DAT_100070b4 + DAT_100070b0;
          DAT_100070b0 = DAT_100070b0 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_100070b0
#undef DAT_100070b4

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_100070b0
#define DAT_100070b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6320U)))
#undef DAT_100070b4
#define DAT_100070b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6324U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17f1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002581(void)

{
  unsigned char frame[568] = {0};

  ulong uVar1;
  undefined4 uVar2;
  byte in_CL;

  if ((DAT_100070b0 == 0 & (in_CL ^ 1)) == 0) {
    if (DAT_100070b0 == 0) {
      uVar1 = 0;
    }
    else {
      recovered_100013b6(local_208,&DAT_100070b4,DAT_100070b0);
      uVar1 = DAT_100070b0;
    }
    local_208[uVar1] = 0;
    uVar2 = recovered_100031b7();
    if (((char)uVar2 != '\0') && (_DAT_00006840 != (code *)0x0)) {
      (*_DAT_00006840)(local_208);
    }
    DAT_100070b0 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_100070b0
#undef DAT_100070b4
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1867U)
 */

void recovered_100025f7(void)

{
  unsigned char frame[64] = {0};

  recovered_10002581();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1873U)
 */

void recovered_10002603(void)

{
  unsigned char frame[64] = {0};

  recovered_10002581();
  return;
}


#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_10005d79
#define DAT_10005d79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe9U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187eU)
 */

void recovered_1000260e(char *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_10005d79;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10005d4c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10002450(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100024fa(local_148,iVar1);
  }
  return;
}

#undef DAT_10005d4c
#undef DAT_10005d79
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18d4U)
 */

void recovered_10002664(void)

{
  unsigned char frame[64] = {0};

  recovered_100026aa();
  recovered_100026aa();
  recovered_100026aa();
  recovered_100026aa();
  recovered_100026aa();
  recovered_100026aa();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191aU)
 */

void recovered_100026aa(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *in_ECX;

  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_10001546(in_ECX);
    recovered_100024fa(in_ECX,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1941U)
 */

void recovered_100026d1(void)

{
  unsigned char frame[64] = {0};

  recovered_100026aa();
  recovered_100026aa();
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

bool recovered_100026ef(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10002603();
    uVar1 = recovered_100031b7();
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

undefined4 recovered_1000273e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19b5U)
 */

void recovered_10002745(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19baU)
 */

undefined1 recovered_1000274a(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005d79
#define DAT_10005d79 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe9U)))
#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
#undef str_10005efa
#define str_10005efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x516aU)))
#undef str_10005f07
#define str_10005f07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5177U)))
#undef str_10005f15
#define str_10005f15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5185U)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19c1U)
 */

undefined4 * recovered_10002751(char *param_1,int param_2)

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
    *(undefined4 *)PTR_DAT_10007000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar1 = recovered_10001561(param_1,str_10005efa);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    iVar2 = recovered_10001561(param_1,str_10005f07);
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    else {
      iVar2 = recovered_10001561(param_1,str_10005f15);
      if (iVar2 != 0) {
        puVar3 = recovered_10001340(800);
        if (puVar3 != (undefined4 *)0x0) {
          recovered_1000141d(puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_100015f6((char *)param_2,'r');
          bVar8 = true;
          bVar7 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_100015f6((char *)param_2,'+');
            bVar7 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_100015f6((char *)param_2,'a');
              bVar7 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar7;
          pcVar4 = recovered_100015f6((char *)param_2,'w');
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_100015f6((char *)param_2,'a'), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_100015f6((char *)param_2,'+');
            bVar8 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar8;
          pcVar4 = recovered_100015f6((char *)param_2,'a');
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_10002450((char *)(puVar3 + 1),0xf1,&DAT_10005d79,param_1);
          pvVar5 = recovered_1000141d(&local_1c,0,0xc);
          iVar1 = recovered_10002a0c(pvVar5,&local_1c,param_1);
          if (iVar1 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_10007000 = 2;
LAB_100029d8:
              recovered_10001368(puVar3);
              return (undefined4 *)0x0;
            }
          }
          else {
            pcVar4 = recovered_100015f6((char *)param_2,'w');
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar6 = recovered_10002a3c(CONCAT31((int3)((uint)pcVar4 >> 8),pcVar4 != (char *)0x0)
                                           ,local_18,(int)puVar3);
                if ((char)uVar6 == '\0') goto LAB_100029d8;
                recovered_100013b6((void *)puVar3[0x3f],local_1c,local_18);
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
        goto LAB_100029ad;
      }
      uVar6 = 3;
    }
  }
  puVar3 = recovered_10001340(800);
  if (puVar3 != (undefined4 *)0x0) {
    recovered_1000141d(puVar3,0,800);
    *puVar3 = uVar6;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_10002450((char *)(puVar3 + 1),0xf1,&DAT_10005d79,param_1);
    return puVar3;
  }
LAB_100029ad:
  *(undefined4 *)PTR_DAT_10007000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_10005d79
#undef PTR_DAT_10007000
#undef str_10005efa
#undef str_10005f07
#undef str_10005f15
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

undefined4 recovered_10002a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100031b7();
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

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cacU)
 */

undefined4 recovered_10002a3c(undefined4 param_1,uint param_2,int param_3)

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
    pvVar3 = recovered_1000138e(*(void **)(param_3 + 0xfc),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_3 + 0xfc) = pvVar3;
      *(uint *)(param_3 + 0x104) = uVar2;
      *(void **)(param_3 + 0xf8) = pvVar3;
      return uVar4;
    }
    *(undefined4 *)PTR_DAT_10007000 = 0xc;
    *(undefined1 *)(param_3 + 0x115) = 1;
  }
  return 0;
}

#undef PTR_DAT_10007000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d22U)
 */

void recovered_10002ab2(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_10002ad0(param_3);
  }
  recovered_10002751(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d40U)
 */

undefined4 recovered_10002ad0(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002e07(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10001368((void *)param_1[0x3f]);
    }
    recovered_10001368(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d80U)
 */

int recovered_10002b10(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
        uVar2 = recovered_10002b83(param_4);
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


#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df3U)
 */

uint recovered_10002b83(int *param_1)

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
LAB_10002c1d:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      bVar1 = recovered_100026ef((int)param_1 + 0x116,0x1fe,&DAT_10005d4c,0);
      if (bVar1) {
        uVar2 = recovered_10001546((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10002c1d;
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

#undef DAT_10005d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ed4U)
 */

int recovered_10002c64(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_100024fa(param_1,size);
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
      uVar1 = recovered_10002a3c(*param_4 & 0xfffffffe,uVar3 + size,(int)param_4);
      if ((char)uVar1 != '\0') {
        uVar3 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
          recovered_1000141d((void *)(uVar3 + param_4[0x3f]),0,uVar2 - uVar3);
          uVar2 = param_4[0x42];
        }
        recovered_100013b6((void *)(uVar2 + param_4[0x3f]),param_1,size);
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


#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fdcU)
 */

undefined4 recovered_10002d6c(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10007000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10002d7b;
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
LAB_10002d7b:
  *(undefined4 *)PTR_DAT_10007000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10007000

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2055U)
 */

undefined4 recovered_10002de5(int param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10007000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_10007000

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2077U)
 */

undefined4 recovered_10002e07(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = recovered_10002fc6(param_1[0x40],param_1[0x3e],param_1 + 1,param_1[0x40]);
    if (iVar1 == 0) {
      *(undefined4 *)PTR_DAT_10007000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
  }
  return uVar2;
}

#undef PTR_DAT_10007000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20d8U)
 */

undefined1 recovered_10002e68(int param_1)

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

undefined1 recovered_10002e7f(int param_1)

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

void recovered_10002e96(int param_1)

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

uint recovered_10002eb1(uint param_1,int param_2)

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


#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2150U)
 */

undefined4 recovered_10002ee0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    iVar1 = recovered_10002f11();
    if (iVar1 != 0) {
      return 0;
    }
    uStack_10 = 5;
  }
  *(undefined4 *)PTR_DAT_10007000 = uStack_10;
  return 0xffffffff;
}

#undef PTR_DAT_10007000
#undef uStack_10

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2181U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002f11(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100031b7();
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

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6270U)))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_1c (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21acU)
 */

undefined4 recovered_10002f3c(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10007000 = 0x16;
  }
  else {
    pvVar1 = recovered_1000141d(&local_1c,0,0xc);
    iVar2 = recovered_10002a0c(pvVar1,&local_1c,param_1);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      iVar2 = recovered_10002fc6(iVar2,local_1c,param_2,local_18);
      uVar3 = 5;
      if ((iVar2 != 0) && (iVar2 = recovered_10002f11(), iVar2 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_10007000 = uVar3;
  }
  return 0xffffffff;
}

#undef PTR_DAT_10007000
#undef local_18
#undef local_1c

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2236U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002fc6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100031b7();
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

#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(ulong *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2269U)
 */

undefined4 recovered_10002ff9(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    pvVar1 = recovered_1000141d(&local_1c,0,0xc);
    iVar2 = recovered_10002a0c(pvVar1,&local_1c,param_1);
    if (iVar2 != 0) {
      pvVar1 = recovered_10001340(local_18 + (local_18 == 0));
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_100013b6(pvVar1,local_1c,local_18);
        uVar3 = local_18;
      }
      *param_2 = pvVar1;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22fbU)
 */

bool recovered_1000308b(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  iVar1 = recovered_10002fc6(param_3,param_2,param_1,param_3);
  return iVar1 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2332U)
 */

undefined4 recovered_100030c2(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2339U)
 */

void recovered_100030c9(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x233eU)
 */

undefined4 recovered_100030ce(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2345U)
 */

undefined4 recovered_100030d5(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x234cU)
 */

undefined4 recovered_100030dc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2353U)
 */

int recovered_100030e3(int param_1,char param_2,int param_3)

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

int recovered_10003107(char *left,char *right,ulong size)

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


#undef DAT_10005e89
#define DAT_10005e89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50f9U)))
#undef str_10005e8c
#define str_10005e8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50fcU)))
#undef str_10005e99
#define str_10005e99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5109U)))
#undef str_10005ea3
#define str_10005ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5113U)))
#undef str_10005eb7
#define str_10005eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5127U)))
#undef str_10005ec5
#define str_10005ec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5135U)))
#undef str_10005ed7
#define str_10005ed7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5147U)))
#undef str_10005ee3
#define str_10005ee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5153U)))
#undef str_10005ef4
#define str_10005ef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5164U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x23aaU)
 */

char * recovered_1000313a(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10005e89;
    break;
  case 2:
    pcVar1 = str_10005e8c;
    break;
  case 5:
    pcVar1 = str_10005e99;
    break;
  case 9:
    pcVar1 = str_10005ea3;
    break;
  case 0xc:
    pcVar1 = str_10005eb7;
    break;
  case 0xd:
    pcVar1 = str_10005ec5;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10005ed7;
    }
    if (param_1 == 0x16) {
      return str_10005ee3;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10005ef4;
  }
  return pcVar1;
}

#undef DAT_10005e89
#undef str_10005e8c
#undef str_10005e99
#undef str_10005ea3
#undef str_10005eb7
#undef str_10005ec5
#undef str_10005ed7
#undef str_10005ee3
#undef str_10005ef4

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2405U)
 */

undefined4 recovered_10003195(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x240cU)
 */

undefined4 recovered_1000319c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100072b4
#define DAT_100072b4 (*(int *)(((uintptr_t)pf_module_state + 0x6524U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2414U)
 */

void recovered_100031a4(void)

{
  unsigned char frame[64] = {0};

  DAT_100072b4 = DAT_100072b4 + 1;
  return;
}

#undef DAT_100072b4

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

undefined4 recovered_100031b7(void)

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

void recovered_100031f0(int param_1)

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

undefined4 recovered_100031ff(undefined4 *param_1)

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

void recovered_10003220(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x24b2U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_10003283
#define DAT_10003283 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f3U)))
#undef DAT_10005f38
#define DAT_10005f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51a8U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x24b6U)
 */

void recovered_10003246(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100032b0;
  local_28 = &DAT_10005f38;
  local_20 = &DAT_10003283;
  local_40 = 1;
  recovered_1000365a(&local_44);
  recovered_10001328();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10003283
#undef DAT_10005f38
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef auStackY_cc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2520U)
 */

undefined4 recovered_100032b0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2523U)
 */

void recovered_100032b3(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100032d0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003246();
}


#undef DAT_100072b8
#define DAT_100072b8 (*(int *)(((uintptr_t)pf_module_state + 0x6528U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2540U)
 */

int recovered_100032d0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_100072b8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_100072b8 = param_1;
  iVar1 = recovered_10003568();
  return iVar1;
}

#undef DAT_100072b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2562U)
 */

void * recovered_100032f2(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10001340(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001328();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x258bU)
 */

void * recovered_1000331b(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_100032f2(size);
  return pvVar1;
}


#undef DAT_10005f48
#define DAT_10005f48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51b8U)))
#undef LAB_10003378
#define LAB_10003378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25e8U)))
#define local_44 (*(undefined4 *)(frame + 152))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2594U)
 */

void recovered_10003324(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100032b0;
  local_28 = &DAT_10005f48;
  local_20 = &LAB_10003378;
  local_40 = 1;
  recovered_1000365a(&local_44);
  recovered_10001368(data);
  recovered_1000366f(&local_44);
  return;
}

#undef DAT_10005f48
#undef LAB_10003378
#undef local_44
#undef auStack_18
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10005f58
#define DAT_10005f58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51c8U)))
#undef LAB_100033eb
#define LAB_100033eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265bU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2607U)
 */

void recovered_10003397(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100032b0;
  local_28 = &DAT_10005f58;
  local_20 = &LAB_100033eb;
  local_40 = 1;
  recovered_1000365a(&local_44);
  recovered_10001368(data);
  recovered_1000366f(&local_44);
  return;
}

#undef DAT_10005f58
#undef LAB_100033eb
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef auStackY_cc
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10005f68
#define DAT_10005f68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51d8U)))
#undef LAB_1000345e
#define LAB_1000345e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26ceU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x267aU)
 */

void recovered_1000340a(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100032b0;
  local_28 = &DAT_10005f68;
  local_20 = &LAB_1000345e;
  local_40 = 1;
  recovered_1000365a(&local_44);
  recovered_10001368(param_1);
  recovered_1000366f(&local_44);
  return;
}

#undef DAT_10005f68
#undef LAB_1000345e
#undef auStack_18
#undef local_44
#undef auStackY_cc
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10005f78
#define DAT_10005f78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51e8U)))
#undef LAB_100034d1
#define LAB_100034d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2741U)))
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
 * Address: ((uintptr_t)pf_module_state+0x26edU)
 */

void recovered_1000347d(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100032b0;
  local_28 = &DAT_10005f78;
  local_20 = &LAB_100034d1;
  local_40 = 1;
  recovered_1000365a(&local_44);
  recovered_10001368(param_1);
  recovered_1000366f(&local_44);
  return;
}

#undef DAT_10005f78
#undef LAB_100034d1
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
 * Address: ((uintptr_t)pf_module_state+0x2760U)
 */

undefined4 recovered_100034f0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2767U)
 */

uint recovered_100034f7(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2776U)
 */

void recovered_10003506(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2781U)
 */

void recovered_10003511(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2786U)
 */

undefined1 * recovered_10003516(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  bool bVar3;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001340(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003246();
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

void recovered_1000354b(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10001368((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27d8U)
 */

int recovered_10003568(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  return in_ECX + 0x1c;
}


#undef DAT_100072b8
#define DAT_100072b8 (*(void * *)(((uintptr_t)pf_module_state + 0x6528U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27e0U)
 */

void recovered_10003570(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  void *buffer;

  buffer = DAT_100072b8;
  if (DAT_100072b8 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_100072b8 + 8);
    DAT_100072b8 = *(void **)((int)DAT_100072b8 + 8);
    *puVar1 = 0;
    if (*(char *)((int)buffer + 0x18) == '\0') {
      if (*(code **)((int)buffer + 4) != (code *)0x0) {
        (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
      }
      recovered_10001368(buffer);
    }
  }
  return;
}

#undef DAT_100072b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x281eU)
 */

void recovered_100035ae(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  recovered_100035da();
  return;
}


#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x652cU)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x284aU)
 */

void recovered_100035da(void)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;

  puVar2 = &DAT_100072bc;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_1000362b;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_10003a4d((undefined2 *)&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  recovered_100036cf();
LAB_1000362b:
                    /* WARNING: Subroutine does not return */
  recovered_10003246();
}

#undef DAT_100072bc
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_100072b8
#define DAT_100072b8 (*(int *)(((uintptr_t)pf_module_state + 0x6528U)))
#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x652cU)))
#define puStack_8 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28a0U)
 */

void recovered_10003630(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_100072b8;
  if (DAT_100072b8 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003246();
  }
  *(undefined1 *)(DAT_100072b8 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  recovered_100035da();
  *puStack_8 = DAT_100072bc;
  DAT_100072bc = puStack_8;
  return;
}

#undef DAT_100072b8
#undef DAT_100072bc
#undef puStack_8

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x652cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28caU)
 */

void recovered_1000365a(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_100072bc;
  DAT_100072bc = param_1;
  return;
}

#undef DAT_100072bc

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x652cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28dfU)
 */

void recovered_1000366f(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_100072bc;
  if (DAT_100072bc == param_1) {
    puVar2 = &DAT_100072bc;
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

#undef DAT_100072bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2908U)
 */

void recovered_10003698(void)

{
  unsigned char frame[64] = {0};

  recovered_100035da();
                    /* WARNING: Subroutine does not return */
  recovered_10003246();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2916U)
 */

void recovered_100036a6(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003246();
}


#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x652cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2921U)
 */

void recovered_100036b1(void)

{
  unsigned char frame[64] = {0};

  if (DAT_100072bc != (undefined4 *)0x0) {
    DAT_100072bc = (undefined4 *)*DAT_100072bc;
  }
  recovered_100036cf();
  return;
}

#undef DAT_100072bc

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x652cU)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x293fU)
 */

void recovered_100036cf(void)

{
  unsigned char frame[76] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;

  while( true ) {
    puVar1 = DAT_100072bc;
    if (DAT_100072bc == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003246();
    }
    if (DAT_100072bc == *(undefined4 **)(in_ECX + 0xc)) break;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_10003a4d((undefined2 *)&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = in_ECX;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_10003737;
    }
    DAT_100072bc = (undefined4 *)*puVar1;
  }
  DAT_100072bc[2] = in_ECX;
  puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
LAB_10003737:
  puVar1[1] = uVar2;
  recovered_100031f0((int)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_100036b1();
}

#undef DAT_100072bc
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29b2U)
 */

void recovered_10003742(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100036b1();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29c3U)
 */

undefined4 recovered_10003753(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29caU)
 */

void recovered_1000375a(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003246();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29d5U)
 */

int recovered_10003765(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int iVar3;

  iVar3 = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = (int)param_1 + *(int *)(iVar1 + -8);
    bVar2 = recovered_1000379b(iVar1,param_3,*(undefined4 **)(iVar1 + -4));
    if (!bVar2) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


#undef DAT_10007060
#define DAT_10007060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a0bU)
 */

bool recovered_1000379b(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
    if ((undefined *)*puVar5 == &DAT_10007060) {
      param_3 = (undefined4 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_10007060

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a72U)
 */

void recovered_10003802(void)

{
  unsigned char frame[64] = {0};

  recovered_10001328();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a7bU)
 */

undefined4 recovered_1000380b(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a82U)
 */

bool recovered_10003812(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a95U)
 */

bool recovered_10003825(int param_1)

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

bool recovered_1000384c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2adeU)
 */

bool recovered_1000386e(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af3U)
 */

bool recovered_10003883(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b08U)
 */

byte recovered_10003898(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b42U)
 */

bool recovered_100038d2(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10005b00
#define DAT_10005b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d90U)))
#undef _DAT_10005b00
#define _DAT_10005b00 (*(float *)(((uintptr_t)pf_module_state + 0x4d70U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4d90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b57U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100038e7(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_1000186a(value);
  if ((double)_DAT_10005b00 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10005b20 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_10005b00
#undef DAT_10005b20
#undef _DAT_10005b00
#undef _DAT_10005b20

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define uStack_1c (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b9fU)
 */

ulonglong recovered_1000392f(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_10003967;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_10003967:
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
#undef uStack_1c
#undef local_14

#define in_stack_00000004 (*(byte * *)(frame + 36))
#define in_stack_00000008 (*(undefined4 * *)(frame + 40))
#define in_stack_0000000c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cb4U)
 */

void recovered_10003a44(void)

{
  unsigned char frame[64] = {0};


  recovered_1000392f(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_10005c54
#define DAT_10005c54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ec4U)))
#define local_18 (*(byte * *)(frame + 16))
#define local_14 (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cbdU)
 */

undefined4 recovered_10003a4d(undefined2 *param_1)

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
      recovered_10003beb(CONCAT31((int3)((uint)pbVar5 >> 8),bVar4),&local_14,(uint)bVar4);
    }
    pbVar5 = local_14 + 1;
    uVar7 = (ushort)*local_14;
    if (uVar7 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar5;
      uVar1 = recovered_10003c9f();
      local_18 = local_14 + uVar1;
      pbVar5 = local_14;
    }
    local_14 = pbVar5 + 1;
    uVar1 = recovered_10003c9f();
    iVar8 = *(int *)(in_ECX + 4);
    if (0 < iVar8) {
      pbVar5 = local_14 + uVar1;
      while (local_14 < pbVar5) {
        uVar1 = recovered_10003c9f();
        uVar2 = recovered_10003c9f();
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
            uVar2 = recovered_10003ceb();
            pbVar5 = (byte *)recovered_10003ceb();
            if (uVar2 == 0) {
              *(undefined1 *)((int)param_1 + 1) = 1;
            }
            else if (0 < (int)uVar2) {
              pbVar3 = pbVar5;
              pbVar6 = (byte *)0x0;
              if (((~(byte)(0x1c1d >> bVar4) | ~(bVar4 < 0xd && local_18 != (byte *)0x0)) & 1) == 0)
              {
                local_14 = local_18 + *(int *)(&DAT_10005c54 + uVar1 * 4) * uVar2;
                pbVar3 = recovered_10003beb(local_14,&local_14,(uint)uVar7);
                pbVar6 = pbVar3;
              }
              bVar9 = recovered_1000379b(pbVar3,(undefined4 *)pbVar6,in_EDX);
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

#undef DAT_10005c54
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e5bU)
 */

byte * recovered_10003beb(undefined4 param_1,undefined4 *param_2,uint param_3)

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
    pbVar4 = (byte *)recovered_10003cca(uVar2,4,pbVar1);
    pbVar3 = pbVar1 + 4;
    break;
  case 1:
    pbVar4 = (byte *)recovered_10003c9f();
    goto LAB_10003c78;
  case 2:
    pbVar4 = (byte *)recovered_10003cca(uVar2,2,pbVar1);
    goto LAB_10003c70;
  case 4:
  case 0xc:
    pbVar4 = (byte *)recovered_10003cca(uVar2,8,pbVar1);
    pbVar3 = pbVar1 + 8;
    break;
  default:
    goto switchD_10003c19_caseD_5;
  case 9:
    pbVar4 = (byte *)recovered_10003ceb();
    goto LAB_10003c78;
  case 10:
    uVar2 = recovered_10003cca(uVar2,2,pbVar1);
    pbVar4 = (byte *)((int)(short)uVar2 & 0xffff0000U | uVar2);
LAB_10003c70:
    pbVar3 = pbVar1 + 2;
  }
  *param_2 = pbVar3;
LAB_10003c78:
  if ((param_3 & 0x70) != 0) {
    if ((param_3 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar4 = pbVar4 + (int)pbVar1;
  }
  if (((char)param_3 < '\0') && (pbVar4 != (byte *)0x0)) {
    pbVar4 = *(byte **)pbVar4;
  }
switchD_10003c19_caseD_5:
  return pbVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f0fU)
 */

uint recovered_10003c9f(void)

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

uint recovered_10003cca(undefined4 param_1,int param_2,byte *param_3)

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

uint recovered_10003ceb(void)

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


#undef DAT_000068a0
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_100072c0
#define DAT_100072c0 (*(int * *)(((uintptr_t)pf_module_state + 0x6530U)))
#undef _DAT_000068a0
#define _DAT_000068a0 (*(code * *)(0x68a0U))
#undef str_10005f23
#define str_10005f23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5193U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fa2U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10003d32(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int *data;
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  byte bVar6;

  bVar6 = 0;
  data = recovered_100032f2(0xb8);
  *data = 0;
  data[1] = 0;
  data[2] = 0;
  data[3] = 0;
  data[4] = 0;
  data[5] = 0;
  data[6] = 0;
  data[7] = 0;
  *(undefined1 *)(data + 8) = 0;
  *(undefined1 *)((int)data + 0x21) = 0;
  *(undefined1 *)((int)data + 0x22) = 0xf6;
  *(undefined1 *)((int)data + 0x23) = 0xf6;
  *(undefined1 *)(data + 9) = 0xf6;
  data[10] = 0;
  data[0xb] = 0;
  *(undefined1 *)(data + 0xc) = 0;
  *(undefined1 *)((int)data + 0x31) = 0;
  *(undefined1 *)((int)data + 0x32) = 0;
  data[0xd] = 0;
  data[0xe] = 0;
  data[0xf] = 0;
  data[0x10] = 0;
  data[0x11] = 0;
  data[0x12] = 0;
  data[0x13] = 0;
  data[0x14] = 0;
  data[0x15] = 0;
  data[0x16] = 0;
  data[0x17] = 0;
  data[0x18] = 0;
  data[0x19] = 0;
  data[0x1a] = 0;
  data[0x1b] = 0;
  data[0x1c] = 0;
  data[0x1d] = 0;
  piVar5 = data + 0x1e;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  pcVar1 = str_10005f23;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  recovered_10003e92(data,(int)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  data[4] = param_2;
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  data[5] = param_3;
  data[10] = param_2 >> 1;
  data[0xb] = param_3 >> 1;
  puVar4 = &DAT_10005d4c;
  if ((undefined1 *)*data != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*data;
  }
  uVar2 = recovered_100054d4();
  if (((char)uVar2 == '\0') || (_DAT_000068a0 == (code *)0x0)) {
    data[3] = 0;
  }
  else {
    iVar3 = (*_DAT_000068a0)(puVar4,param_2,param_3);
    data[3] = iVar3;
    if (iVar3 != 0) {
      DAT_100072c0 = data;
      recovered_10003eda();
      recovered_10004213();
      return data;
    }
  }
  recovered_10003eba();
  recovered_10003324(data);
  return (int *)0x0;
}

#undef DAT_000068a0
#undef DAT_10005d4c
#undef DAT_100072c0
#undef _DAT_000068a0
#undef str_10005f23

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3102U)
 */

int * recovered_10003e92(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_100053be(param_2);
  recovered_100052f4(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x312aU)
 */

void recovered_10003eba(void)

{
  unsigned char frame[64] = {0};

  undefined4 *in_ECX;

  recovered_1000550a(in_ECX + 0xd);
  recovered_100052dc(in_ECX);
  return;
}


#undef DAT_000068a4
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_10005f88
#define DAT_10005f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef LAB_100041dc
#define LAB_100041dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x344cU)))
#undef PTR_recovered_100032b0_10007004
#define PTR_recovered_100032b0_10007004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6274U)))
#undef _DAT_000068a4
#define _DAT_000068a4 (*(code * *)(0x68a4U))
#define auStackY_11c (*(undefined1 (*)[128])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 176))
#define local_78 (*(undefined4 *)(frame + 180))
#define local_64 (*(undefined * *)(frame + 200))
#define local_60 (*(undefined * *)(frame + 204))
#define local_5c (*(undefined1 * *)(frame + 208))
#define local_58 (*(undefined1 * *)(frame + 212))
#define local_54 (*(undefined1 * *)(frame + 216))
#define local_48 (*(int *)(frame + 228))
#define local_44 (*(int *)(frame + 232))
#define local_40 (*(int *)(frame + 236))
#define local_3c (*(int *)(frame + 240))
#define local_38 (*(int *)(frame + 244))
#define local_34 (*(int *)(frame + 248))
#define local_30 (*(int *)(frame + 252))
#define local_2c (*(undefined1 * *)(frame + 256))
#define local_28 (*(uint *)(frame + 260))
#define local_24 (*(undefined4 * *)(frame + 264))
#define local_20 (*(void * *)(frame + 268))
#define local_1c (*(undefined4 *)(frame + 272))
#define local_18 (*(undefined4 *)(frame + 276))
#define local_14 (*(undefined4 *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x314aU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003eda(void)

{
  unsigned char frame[332] = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  int iVar8;

  local_5c = (undefined1 *)((int)(uintptr_t)(frame + 300) + -4);
  local_54 = auStackY_11c + 0x80;
  local_64 = PTR_recovered_100032b0_10007004;
  local_60 = &DAT_10005f88;
  local_58 = &LAB_100041dc;
  recovered_1000365a(&local_7c);
  if ((in_ECX != (undefined4 *)0x0) && (in_ECX[3] != 0)) {
    iVar6 = in_ECX[4];
    iVar4 = in_ECX[5];
    local_34 = iVar6;
    if (iVar6 < 2) {
      local_34 = 1;
    }
    local_30 = iVar4;
    if (iVar4 < 2) {
      local_30 = 1;
    }
    local_20 = (void *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_24 = in_ECX;
    if (((in_ECX[0xe] != 0) && (0 < (int)in_ECX[0x10])) && (0 < (int)in_ECX[0x11])) {
      local_14 = (void *)(iVar6 * iVar4 * 4);
      local_78 = 1;
      recovered_10005526((int *)&local_20,(uint)local_14);
      for (uVar1 = 0; uVar1 < local_14; uVar1 = uVar1 + 4) {
        *(undefined1 *)((int)local_20 + uVar1) = *(undefined1 *)((int)local_24 + 0x22);
        *(undefined1 *)((int)local_20 + uVar1 + 1) = *(undefined1 *)((int)local_24 + 0x23);
        *(undefined1 *)((int)local_20 + uVar1 + 2) = *(undefined1 *)(local_24 + 9);
        *(undefined1 *)((int)local_20 + uVar1 + 3) = 0xff;
      }
      iVar6 = local_24[4];
      local_14 = (void *)local_24[0x11];
      uVar1 = local_24[0x10];
      iVar4 = local_24[5];
      local_38 = recovered_10001244((uint)((longlong)(int)local_14 * (longlong)iVar6),
                                    (uint)((ulonglong)((longlong)(int)local_14 * (longlong)iVar6) >>
                                          0x20),uVar1,(int)uVar1 >> 0x1f);
      if (local_38 < 2) {
        local_38 = 1;
      }
      local_48 = iVar6;
      if (iVar4 < local_38) {
        local_48 = recovered_10001244((uint)((longlong)iVar4 * (longlong)(int)uVar1),
                                      (uint)((ulonglong)((longlong)iVar4 * (longlong)(int)uVar1) >>
                                            0x20),(uint)local_14,(int)local_14 >> 0x1f);
        if (local_48 < 2) {
          local_48 = 1;
        }
        local_38 = iVar4;
      }
      local_44 = (iVar6 - local_48) / 2;
      local_28 = (iVar4 - local_38) / 2;
      local_2c = (undefined1 *)local_48;
      if (local_48 < 1) {
        local_2c = (undefined1 *)0x0;
      }
      iVar6 = 0;
      local_3c = local_38;
      if (local_38 < 1) {
        local_3c = 0;
      }
      while (iVar4 = iVar6, iVar4 != local_3c) {
        iVar2 = (local_24[0x11] * iVar4) / local_38;
        iVar6 = local_24[0x11] + -1;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
        iVar7 = 0;
        local_14 = (void *)0x0;
        if (-1 < iVar2) {
          local_14 = (void *)iVar6;
        }
        for (; local_2c != (undefined1 *)iVar7; iVar7 = iVar7 + 1) {
          iVar6 = local_24[0x10];
          iVar3 = (iVar6 * iVar7) / local_48;
          iVar2 = iVar6 + -1;
          if (iVar3 <= iVar6 + -1) {
            iVar2 = iVar3;
          }
          iVar8 = 0;
          if (-1 < iVar3) {
            iVar8 = iVar2;
          }
          iVar8 = iVar6 * (int)local_14 + iVar8;
          iVar6 = local_24[4] * local_28 + local_44 + iVar7;
          *(undefined1 *)((int)local_20 + iVar6 * 4) = *(undefined1 *)(local_24[0xd] + iVar8 * 4);
          *(undefined1 *)((int)local_20 + iVar6 * 4 + 1) =
               *(undefined1 *)(local_24[0xd] + 1 + iVar8 * 4);
          *(undefined1 *)((int)local_20 + iVar6 * 4 + 2) =
               *(undefined1 *)(local_24[0xd] + 2 + iVar8 * 4);
          *(undefined1 *)((int)local_20 + iVar6 * 4 + 3) =
               *(undefined1 *)(local_24[0xd] + 3 + iVar8 * 4);
        }
        local_28 = local_28 + 1;
        local_40 = iVar4;
        iVar6 = iVar4 + 1;
      }
    }
    local_2c = &DAT_10005d4c;
    if ((undefined1 *)*local_24 != (undefined1 *)0x0) {
      local_2c = (undefined1 *)*local_24;
    }
    local_28 = (uint)*(byte *)(local_24 + 9);
    local_14 = local_20;
    uVar5 = recovered_100054d4();
    iVar6 = 0;
    if (((char)uVar5 != '\0') && (_DAT_000068a4 != (code *)0x0)) {
      local_78 = 2;
      iVar6 = (*_DAT_000068a4)();
    }
    *(bool *)((int)local_24 + 0x21) = iVar6 != 0;
    local_1c = 0;
    recovered_10003324(local_20);
  }
  recovered_1000366f(&local_7c);
  return;
}

#undef DAT_000068a4
#undef DAT_10005d4c
#undef DAT_10005f88
#undef LAB_100041dc
#undef PTR_recovered_100032b0_10007004
#undef _DAT_000068a4
#undef auStackY_11c
#undef local_7c
#undef local_78
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(code * *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3483U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004213(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;
  int in_ECX;

  if (in_ECX == 0) {
    return 0;
  }
  iVar2 = *(int *)(in_ECX + 0xc);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100054d4();
    if ((((char)uVar1 == '\0') || (_DAT_000068b4 == (code *)0x0)) ||
       (iVar2 = (*_DAT_000068b4)(iVar2,in_ECX + 0x48), iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x70);
      *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x74);
      uVar1 = CONCAT31((int3)((uint)*(undefined4 *)(in_ECX + 0x70) >> 8),1);
      if ((*(byte *)(in_ECX + 0x6c) & 1) == 0) {
        return uVar1;
      }
    }
    *(undefined1 *)(in_ECX + 0x20) = 1;
  }
  return uVar1;
}

#undef DAT_000068b4
#undef _DAT_000068b4

#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(code * *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x34e4U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004274(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = recovered_100054d4();
      if (((char)uVar4 != '\0') && (_DAT_000068b0 != (code *)0x0)) {
        (*_DAT_000068b0)(iVar1,uVar2,uVar3,1,1);
      }
    }
  }
  return;
}

#undef DAT_000068b0
#undef _DAT_000068b0

#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef DAT_100072c0
#define DAT_100072c0 (*(void * *)(((uintptr_t)pf_module_state + 0x6530U)))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(code * *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3536U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100042c6(void *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == (void *)0x0) {
    return;
  }
  if (DAT_100072c0 == param_1) {
    DAT_100072c0 = (void *)0x0;
  }
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (iVar1 != 0) {
    uVar2 = recovered_100054d4();
    if (((char)uVar2 != '\0') && (_DAT_000068a8 != (code *)0x0)) {
      (*_DAT_000068a8)(iVar1);
    }
  }
  recovered_10003eba();
  recovered_10003324(param_1);
  return;
}

#undef DAT_000068a8
#undef DAT_100072c0
#undef _DAT_000068a8

#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_10005f90
#define DAT_10005f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5200U)))
#undef LAB_100043df
#define LAB_100043df (*(uint8_t *)(((uintptr_t)pf_module_state + 0x364fU)))
#undef PTR_recovered_100032b0_10007004
#define PTR_recovered_100032b0_10007004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6274U)))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_20 (*(void * *)(frame + 220))
#define local_1c (*(undefined1 * *)(frame + 224))
#define local_18 (*(int *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3590U)
 */

void * recovered_10004320(undefined4 *param_1)

{
  unsigned char frame[284] = {0};

  void *pvVar1;
  undefined1 *data;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_3c = PTR_recovered_100032b0_10007004;
  local_38 = &DAT_10005f90;
  local_30 = &LAB_100043df;
  recovered_1000365a(&local_54);
  if (param_1 == (undefined4 *)0x0) {
    local_1c = (undefined1 *)0x0;
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_50 = 0xffffffff;
    recovered_100055c2(&local_1c,param_1);
  }
  local_50 = 1;
  local_20 = recovered_1000331b(local_18 + 1);
  data = &DAT_10005d4c;
  if (local_1c != (undefined1 *)0x0) {
    data = local_1c;
  }
  local_50 = 2;
  recovered_100013b6(local_20,data,local_18 + 1);
  pvVar1 = local_20;
  recovered_10003324(local_1c);
  recovered_1000366f(&local_54);
  return pvVar1;
}

#undef DAT_10005d4c
#undef DAT_10005f90
#undef LAB_100043df
#undef PTR_recovered_100032b0_10007004
#undef local_54
#undef local_50
#undef local_3c
#undef auStackY_ec
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x367dU)
 */

void recovered_1000440d(int param_1,undefined4 *param_2,undefined4 *param_3)

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
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36afU)
 */

void recovered_1000443f(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0x10) = param_2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x14) = param_3;
  recovered_10004481();
  recovered_10003eda();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x36f1U)
 */

void recovered_10004481(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(in_ECX + 0x10);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar1 = *(int *)(in_ECX + 0x28);
  iVar3 = iVar4 + -1;
  if (iVar1 <= iVar4 + -1) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(in_ECX + 0x14);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar3;
  }
  *(int *)(in_ECX + 0x28) = iVar2;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  iVar3 = iVar4 + -1;
  if (iVar1 <= iVar4 + -1) {
    iVar3 = iVar1;
  }
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar3;
  }
  *(int *)(in_ECX + 0x2c) = iVar4;
  return;
}


#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3740U)
 */

void recovered_100044d0(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 == 0) {
    return;
  }
  puVar1 = &DAT_10005d4c;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  recovered_10003e92((int *)param_1,(int)puVar1);
  recovered_10003eda();
  return;
}

#undef DAT_10005d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3779U)
 */

void recovered_10004509(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar1 = (undefined1 *)param_2[2], puVar1 == (undefined1 *)0x0)) || (*param_2 < 1)) ||
     (param_2[1] < 1)) {
    return;
  }
  recovered_10004566((int *)(param_1 + 0x34),puVar1,puVar1 + *param_2 * param_2[1] * 4);
  *(int *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x44) = param_2[1];
  recovered_10003eda();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37d6U)
 */

void recovered_10004566(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005a52(param_1,*param_1,param_2,param_3);
  return;
}


#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_0000687c
#define _DAT_0000687c (*(code * *)(0x687cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(code * *)(0x6880U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
#define local_74 (*(int *)(frame + 16))
#define local_70 (*(int *)(frame + 20))
#define local_6c (*(int *)(frame + 24))
#define local_68 (*(uint *)(frame + 28))
#define local_64 (*(uint *)(frame + 32))
#define local_60 (*(int *)(frame + 36))
#define local_5c (*(int *)(frame + 40))
#define local_58 (*(int *)(frame + 44))
#define local_50 (*(int *)(frame + 52))
#define local_48 (*(int *)(frame + 60))
#define local_40 (*(uint *)(frame + 68))
#define local_3c (*(uint *)(frame + 72))
#define local_38 (*(uint *)(frame + 76))
#define local_34 (*(uint *)(frame + 80))
#define local_30 (*(uint *)(frame + 84))
#define local_2c (*(int *)(frame + 88))
#define local_28 (*(int *)(frame + 92))
#define local_24 (*(uint *)(frame + 96))
#define local_20 (*(uint *)(frame + 100))
#define local_1c (*(int *)(frame + 104))
#define local_18 (*(int *)(frame + 108))
#define local_14 (*(int *)(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37f8U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004588(int param_1)

{
  unsigned char frame[164] = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;

  bVar8 = 0;
  if (param_1 == 0) {
    return;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  recovered_10004213();
  uVar1 = recovered_100054d4();
  if ((((char)uVar1 == '\0') || (_DAT_00006880 == (code *)0x0)) ||
     (iVar2 = (*_DAT_00006880)(&local_3c), iVar2 == 0)) goto LAB_10004762;
  local_1c = 0;
  piVar5 = &local_74;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
  }
  uVar1 = recovered_100054d4();
  bVar7 = true;
  if (((char)uVar1 == '\0') || (_DAT_0000687c == (code *)0x0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = (*_DAT_0000687c)(&local_74);
    if (iVar2 == 0) {
      uVar3 = 0;
      bVar7 = true;
    }
    else {
      bVar7 = true;
      uVar3 = 0;
      if (local_70 == 0 &&
          ((local_64 <= local_68 >> 2 &&
           (local_48 != 0 && (local_50 != 0 && (local_58 != 0 && local_5c == 0x20)))) &&
          ((local_60 != 0 && (local_64 != 0 && (local_68 != 0 && local_6c != 0))) &&
          (local_74 != 0 || local_70 != 0)))) {
        bVar7 = false;
        local_1c = local_60;
        uVar3 = local_64;
      }
    }
  }
  local_14 = *(int *)(param_1 + 0x18);
  local_18 = *(int *)(param_1 + 0x1c);
  iVar2 = local_18;
  if (((local_3c & 2) == 0) || (iVar2 = local_28, local_40 = uVar3, local_2c == 0 && local_28 == 0))
  {
    bVar6 = (local_3c & 1) == 0;
    if (!bVar7 && !bVar6) {
      uVar3 = recovered_100055f9(CONCAT31((int3)((uint)iVar2 >> 8),bVar6),local_24,local_34,uVar3);
      uVar4 = recovered_100055f9(local_1c,local_20,local_30,local_1c);
      *(uint *)(param_1 + 0x28) = (uVar3 - local_14) + -0xe;
      iVar2 = (uVar4 - local_18) + -0x26;
      goto LAB_1000472b;
    }
  }
  else {
    *(int *)(param_1 + 0x28) = local_2c + *(int *)(param_1 + 0x28);
    iVar2 = local_28 + *(int *)(param_1 + 0x2c);
LAB_1000472b:
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  bVar7 = (*(uint *)(param_1 + 0x6c) & 6) == 2;
  *(byte *)(param_1 + 0x30) = (byte)local_38 & bVar7;
  *(byte *)(param_1 + 0x31) = (byte)((local_38 & 2) >> 1) & bVar7;
  *(byte *)(param_1 + 0x32) = (byte)((local_38 & 4) >> 2) & bVar7;
  recovered_10004481();
LAB_10004762:
  recovered_1000479e();
  if (*(char *)(param_1 + 0x21) == '\0') {
    recovered_10003eda();
  }
  uVar1 = recovered_100054d4();
  if (((char)uVar1 != '\0') && (_DAT_0000689c != (code *)0x0)) {
    (*_DAT_0000689c)();
  }
  return;
}

#undef DAT_0000687c
#undef DAT_00006880
#undef DAT_0000689c
#undef _DAT_0000687c
#undef _DAT_00006880
#undef _DAT_0000689c
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef DAT_10007078
#define DAT_10007078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e8U)))
#undef DAT_10007079
#define DAT_10007079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e9U)))
#undef DAT_1000707a
#define DAT_1000707a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62eaU)))
#undef DAT_1000707b
#define DAT_1000707b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ebU)))
#undef DAT_1000707c
#define DAT_1000707c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ecU)))
#undef DAT_100070a1
#define DAT_100070a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6311U)))
#undef DAT_100070a2
#define DAT_100070a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6312U)))
#undef DAT_100070a3
#define DAT_100070a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6313U)))
#undef DAT_100070a4
#define DAT_100070a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6314U)))
#undef DAT_100070a5
#define DAT_100070a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6315U)))
#undef DAT_100070a6
#define DAT_100070a6 (*(char *)(((uintptr_t)pf_module_state + 0x6316U)))
#undef DAT_100072c0
#define DAT_100072c0 (*(int *)(((uintptr_t)pf_module_state + 0x6530U)))
#undef DAT_100072c4
#define DAT_100072c4 (*(int *)(((uintptr_t)pf_module_state + 0x6534U)))
#undef PTR_DAT_10006000
#define PTR_DAT_10006000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5270U)))
#undef _DAT_0000682c
#define _DAT_0000682c (*(code * *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a0eU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000479e(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  recovered_10004b45();
  iVar1 = DAT_100072c0;
  if (((DAT_100072c0 == 0) || (uVar3 = recovered_10004213(), (char)uVar3 == '\0')) ||
     ((*(uint *)(iVar1 + 0x6c) & 6) != 2)) {
    return;
  }
switchD_1000496b_caseD_49:
  do {
    do {
      uVar3 = recovered_100054d4();
      if ((char)uVar3 == '\0') {
        return;
      }
      if (_DAT_0000682c == (code *)0x0) {
        return;
      }
      uVar4 = (*_DAT_0000682c)();
      if (uVar4 == 0) {
        return;
      }
      cVar2 = (char)uVar4;
      uVar6 = uVar4 >> 8 & 0xff;
      if (cVar2 == '\0') goto LAB_10004839;
    } while (DAT_100072c0 == 0);
    uVar5 = uVar4 & 0xff;
    if (DAT_100072c4 == 2) {
      DAT_100072c4 = 0;
      switch((uintptr_t)(uVar5)) {
      case 0x41:
        DAT_10007079 = 1;
        break;
      case 0x42:
        DAT_1000707a = 1;
        break;
      case 0x43:
        DAT_1000707c = 1;
        break;
      case 0x44:
        DAT_1000707b = 1;
      }
    }
    else if (DAT_100072c4 == 1) {
      DAT_100072c4 = (uint)(cVar2 == '[') * 2;
    }
    else if (cVar2 == '\x1b') {
      DAT_100072c4 = 1;
    }
    else if ((byte)(cVar2 - 0x20U) < 0x5f) {
      DAT_100070a6 = cVar2;
      if (((byte)(cVar2 + 0x9fU) < 0x1a) || ((byte)(cVar2 + 0xbfU) < 0x1a)) {
        recovered_10005643();
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) goto LAB_10004901;
        *(&PTR_DAT_10006000)[uVar4 + 0xd0 & 0xff] = 1;
      }
    }
    else {
LAB_10004901:
      switch((uintptr_t)(uVar5)) {
      case 3:
      case 4:
        *(undefined1 *)(DAT_100072c0 + 0x20) = 1;
        break;
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xb:
      case 0xc:
        break;
      case 8:
switchD_10004909_caseD_8:
        DAT_100070a3 = 1;
        break;
      case 10:
      case 0xd:
        DAT_10007078 = 1;
        break;
      default:
        if (uVar5 == 0x20) {
          DAT_100070a5 = 1;
        }
        else if (uVar5 == 0x2d) {
          DAT_100070a1 = 1;
        }
        else if (uVar5 == 0x2e) {
          DAT_100070a2 = 1;
        }
        else if (uVar5 == 0x7f) goto switchD_10004909_caseD_8;
      }
    }
  } while (DAT_100072c0 == 0);
  goto LAB_10004963;
LAB_10004839:
  if (DAT_100072c0 == 0) goto switchD_1000496b_caseD_49;
  switch((uintptr_t)(uVar6)) {
  case 1:
switchD_1000496b_caseD_48:
    DAT_10007079 = 1;
    goto switchD_1000496b_caseD_49;
  case 2:
switchD_1000496b_caseD_50:
    DAT_1000707a = 1;
    goto switchD_1000496b_caseD_49;
  case 3:
switchD_1000496b_caseD_4d:
    DAT_1000707c = 1;
    goto switchD_1000496b_caseD_49;
  case 4:
switchD_1000496b_caseD_4b:
    DAT_1000707b = 1;
    goto switchD_1000496b_caseD_49;
  }
  if (uVar6 != 0x17) {
LAB_10004963:
    switch((uintptr_t)(uVar6)) {
    case 0x48:
      goto switchD_1000496b_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_1000496b_caseD_49;
    case 0x4b:
      goto switchD_1000496b_caseD_4b;
    case 0x4d:
      goto switchD_1000496b_caseD_4d;
    case 0x50:
      goto switchD_1000496b_caseD_50;
    case 0x53:
      DAT_100070a4 = 1;
      goto switchD_1000496b_caseD_49;
    default:
      if (uVar6 != 1) {
        if (uVar6 == 0xe) {
          DAT_100070a3 = 1;
        }
        else if (uVar6 == 0x1c) {
          DAT_10007078 = 1;
        }
        goto switchD_1000496b_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_100072c0 + 0x20) = 1;
  goto switchD_1000496b_caseD_49;
}

#undef DAT_0000682c
#undef DAT_10007078
#undef DAT_10007079
#undef DAT_1000707a
#undef DAT_1000707b
#undef DAT_1000707c
#undef DAT_100070a1
#undef DAT_100070a2
#undef DAT_100070a3
#undef DAT_100070a4
#undef DAT_100070a5
#undef DAT_100070a6
#undef DAT_100072c0
#undef DAT_100072c4
#undef PTR_DAT_10006000
#undef _DAT_0000682c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c5aU)
 */

undefined1 recovered_100049ea(undefined4 param_1,int param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    recovered_10004213();
    uVar1 = *(undefined1 *)(param_2 + 0x20);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c7aU)
 */

void recovered_10004a0a(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x22) = param_2;
  *(undefined1 *)(param_1 + 0x23) = param_3;
  *(undefined1 *)(param_1 + 0x24) = param_4;
  recovered_10003eda();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3c9eU)
 */

int * recovered_10004a2e(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  void *out;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint size;

  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_100032f2(0x18);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 < 1) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *piVar1 = iVar2;
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    piVar1[1] = iVar4;
    size = iVar2 * iVar4 * 4;
    out = recovered_1000331b(size);
    piVar1[2] = (int)out;
    if (((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x40) != iVar2)) ||
       (*(int *)(param_1 + 0x44) != iVar4)) {
      for (uVar3 = 0; uVar3 < size; uVar3 = uVar3 + 4) {
        *(undefined1 *)((int)out + uVar3) = *(undefined1 *)(param_1 + 0x22);
        *(undefined1 *)((int)out + uVar3 + 1) = *(undefined1 *)(param_1 + 0x23);
        *(undefined1 *)((int)out + uVar3 + 2) = *(undefined1 *)(param_1 + 0x24);
        *(undefined1 *)((int)out + uVar3 + 3) = 0xff;
      }
    }
    else {
      recovered_100013b6(out,*(void **)(param_1 + 0x34),size);
    }
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3d5dU)
 */

void recovered_10004aed(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x28);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3d93U)
 */

undefined1 recovered_10004b23(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_2 < 3 && param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x30 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_10007078
#define DAT_10007078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e8U)))
#undef DAT_10007079
#define DAT_10007079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62e9U)))
#undef DAT_1000707a
#define DAT_1000707a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62eaU)))
#undef DAT_1000707b
#define DAT_1000707b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ebU)))
#undef DAT_1000707c
#define DAT_1000707c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ecU)))
#undef DAT_1000707d
#define DAT_1000707d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62edU)))
#undef DAT_1000707e
#define DAT_1000707e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62eeU)))
#undef DAT_1000707f
#define DAT_1000707f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62efU)))
#undef DAT_10007080
#define DAT_10007080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f0U)))
#undef DAT_10007081
#define DAT_10007081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f1U)))
#undef DAT_10007082
#define DAT_10007082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f2U)))
#undef DAT_10007083
#define DAT_10007083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f3U)))
#undef DAT_10007084
#define DAT_10007084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f4U)))
#undef DAT_10007085
#define DAT_10007085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f5U)))
#undef DAT_10007086
#define DAT_10007086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f6U)))
#undef DAT_10007087
#define DAT_10007087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f7U)))
#undef DAT_10007088
#define DAT_10007088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f8U)))
#undef DAT_10007089
#define DAT_10007089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f9U)))
#undef DAT_1000708a
#define DAT_1000708a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62faU)))
#undef DAT_1000708b
#define DAT_1000708b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62fbU)))
#undef DAT_1000708c
#define DAT_1000708c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62fcU)))
#undef DAT_1000708d
#define DAT_1000708d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62fdU)))
#undef DAT_1000708e
#define DAT_1000708e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62feU)))
#undef DAT_1000708f
#define DAT_1000708f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62ffU)))
#undef DAT_10007090
#define DAT_10007090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6300U)))
#undef DAT_10007091
#define DAT_10007091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6301U)))
#undef DAT_10007092
#define DAT_10007092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6302U)))
#undef DAT_10007093
#define DAT_10007093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6303U)))
#undef DAT_10007094
#define DAT_10007094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6304U)))
#undef DAT_10007095
#define DAT_10007095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6305U)))
#undef DAT_10007096
#define DAT_10007096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6306U)))
#undef DAT_10007097
#define DAT_10007097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6307U)))
#undef DAT_10007098
#define DAT_10007098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6308U)))
#undef DAT_10007099
#define DAT_10007099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6309U)))
#undef DAT_1000709a
#define DAT_1000709a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630aU)))
#undef DAT_1000709b
#define DAT_1000709b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630bU)))
#undef DAT_1000709c
#define DAT_1000709c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630cU)))
#undef DAT_1000709d
#define DAT_1000709d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630dU)))
#undef DAT_1000709e
#define DAT_1000709e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630eU)))
#undef DAT_1000709f
#define DAT_1000709f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630fU)))
#undef DAT_100070a0
#define DAT_100070a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6310U)))
#undef DAT_100070a1
#define DAT_100070a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6311U)))
#undef DAT_100070a2
#define DAT_100070a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6312U)))
#undef DAT_100070a3
#define DAT_100070a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6313U)))
#undef DAT_100070a4
#define DAT_100070a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6314U)))
#undef DAT_100070a5
#define DAT_100070a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6315U)))
#undef DAT_100070a6
#define DAT_100070a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6316U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3db5U)
 */

void recovered_10004b45(void)

{
  unsigned char frame[64] = {0};

  DAT_10007078 = 0;
  DAT_10007079 = 0;
  DAT_1000707a = 0;
  DAT_1000707b = 0;
  DAT_1000707c = 0;
  DAT_1000707d = 0;
  DAT_1000707e = 0;
  DAT_1000707f = 0;
  DAT_10007080 = 0;
  DAT_10007081 = 0;
  DAT_10007082 = 0;
  DAT_10007083 = 0;
  DAT_10007084 = 0;
  DAT_10007085 = 0;
  DAT_10007086 = 0;
  DAT_10007087 = 0;
  DAT_10007088 = 0;
  DAT_10007089 = 0;
  DAT_1000708a = 0;
  DAT_1000708b = 0;
  DAT_1000708c = 0;
  DAT_1000708d = 0;
  DAT_1000708e = 0;
  DAT_1000708f = 0;
  DAT_10007090 = 0;
  DAT_10007091 = 0;
  DAT_10007092 = 0;
  DAT_10007093 = 0;
  DAT_10007094 = 0;
  DAT_10007095 = 0;
  DAT_10007096 = 0;
  DAT_10007097 = 0;
  DAT_10007098 = 0;
  DAT_10007099 = 0;
  DAT_1000709a = 0;
  DAT_1000709b = 0;
  DAT_1000709c = 0;
  DAT_1000709d = 0;
  DAT_1000709e = 0;
  DAT_1000709f = 0;
  DAT_100070a0 = 0;
  DAT_100070a1 = 0;
  DAT_100070a2 = 0;
  DAT_100070a3 = 0;
  DAT_100070a4 = 0;
  DAT_100070a5 = 0;
  DAT_100070a6 = 0;
  return;
}

#undef DAT_10007078
#undef DAT_10007079
#undef DAT_1000707a
#undef DAT_1000707b
#undef DAT_1000707c
#undef DAT_1000707d
#undef DAT_1000707e
#undef DAT_1000707f
#undef DAT_10007080
#undef DAT_10007081
#undef DAT_10007082
#undef DAT_10007083
#undef DAT_10007084
#undef DAT_10007085
#undef DAT_10007086
#undef DAT_10007087
#undef DAT_10007088
#undef DAT_10007089
#undef DAT_1000708a
#undef DAT_1000708b
#undef DAT_1000708c
#undef DAT_1000708d
#undef DAT_1000708e
#undef DAT_1000708f
#undef DAT_10007090
#undef DAT_10007091
#undef DAT_10007092
#undef DAT_10007093
#undef DAT_10007094
#undef DAT_10007095
#undef DAT_10007096
#undef DAT_10007097
#undef DAT_10007098
#undef DAT_10007099
#undef DAT_1000709a
#undef DAT_1000709b
#undef DAT_1000709c
#undef DAT_1000709d
#undef DAT_1000709e
#undef DAT_1000709f
#undef DAT_100070a0
#undef DAT_100070a1
#undef DAT_100070a2
#undef DAT_100070a3
#undef DAT_100070a4
#undef DAT_100070a5
#undef DAT_100070a6

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ea7U)
 */

void recovered_10004c37(void)

{
  unsigned char frame[64] = {0};

  recovered_10004b45();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eb0U)
 */

void recovered_10004c40(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eb5U)
 */

void recovered_10004c45(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ebaU)
 */

undefined4 recovered_10004c4a(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ec1U)
 */

void recovered_10004c51(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ec6U)
 */

undefined4 recovered_10004c56(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10005d4a
#define DAT_10005d4a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbaU)))
#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#undef DAT_10005f33
#define DAT_10005f33 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51a3U)))
#undef DAT_10005f98
#define DAT_10005f98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5208U)))
#undef LAB_10005025
#define LAB_10005025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4295U)))
#undef PTR_recovered_100032b0_10007004
#define PTR_recovered_100032b0_10007004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6274U)))
#define local_2c (*(undefined4 *)(frame + 272))
#define local_28 (*(void * *)(frame + 276))
#define local_24 (*(int *)(frame + 280))
#define local_1c (*(void * *)(frame + 288))
#define local_18 (*(uint *)(frame + 292))
#define local_14 (*(undefined4 *)(frame + 296))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 16))
#define local_9c (*(undefined1 * (*)[3])(frame + 160))
#define local_90 (*(char * *)(frame + 172))
#define local_8c (*(void * *)(frame + 176))
#define local_84 (*(undefined4 *)(frame + 184))
#define local_80 (*(undefined4 *)(frame + 188))
#define local_6c (*(undefined * *)(frame + 208))
#define local_68 (*(undefined * *)(frame + 212))
#define local_64 (*(undefined1 * *)(frame + 216))
#define local_60 (*(undefined1 * *)(frame + 220))
#define local_5c (*(undefined1 * *)(frame + 224))
#define local_4c (*(void * *)(frame + 240))
#define local_48 (*(int *)(frame + 244))
#define local_44 (*(ulong *)(frame + 248))
#define local_40 (*(int *)(frame + 252))
#define local_3c (*(int *)(frame + 256))
#define local_38 (*(undefined4 *)(frame + 260))
#define local_34 (*(int *)(frame + 264))
#define local_30 (*(void * *)(frame + 268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ecdU)
 */

void * recovered_10004c5d(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[348] = {0};

  byte bVar1;
  char cVar2;
  void *extraout_EAX;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined3 extraout_var = 0;
  char *pcVar6;
  void *pvVar7;
  void *pvVar8;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 316) + -4);
  local_5c = auStackY_12c + 0x80;
  local_6c = PTR_recovered_100032b0_10007004;
  local_68 = &DAT_10005f98;
  local_60 = &LAB_10005025;
  recovered_1000365a(&local_84);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    pvVar8 = (void *)0x0;
    goto LAB_10005010;
  }
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = (void *)0x0;
  local_80 = 0xffffffff;
  recovered_10005a20(&local_90,param_1);
  local_34 = 0;
  local_30 = (void *)0x0;
  local_2c = 0;
  pvVar8 = (void *)0x0;
  if (local_8c == (void *)0x0) {
    local_18 = 0;
  }
  else {
    pcVar6 = &DAT_10005d4c;
    if (local_90 != (char *)0x0) {
      pcVar6 = local_90;
    }
    local_18 = CONCAT31((int3)((uint)local_90 >> 8),*pcVar6 == '/');
  }
  do {
    if (local_8c <= pvVar8) break;
    recovered_1000565e(&local_90,'/',(uint)pvVar8);
    pvVar7 = extraout_EAX;
    if (extraout_EAX == (void *)0xffffffff) {
      pvVar7 = local_8c;
    }
    local_80 = 1;
    local_14 = extraout_EAX;
    recovered_1000569a(&local_28,&local_90,(uint)pvVar8,(int)pvVar7 - (int)pvVar8);
    if (local_24 != 0) {
      bVar1 = recovered_100050bd(&local_28,((uintptr_t)pf_module_state+0x4fbaU));
      if (bVar1 != 0) {
        cVar2 = recovered_100056f4(&local_28,((uintptr_t)pf_module_state+0x51a0U));
        if (cVar2 != '\0') {
          if (local_30 != (void *)0x0) {
            bVar1 = recovered_100050bd((undefined4 *)(local_34 + -0xc + (int)local_30 * 0xc),
                                       ((uintptr_t)pf_module_state+0x51a0U));
            if (bVar1 != 0) {
              recovered_10005740(&local_34);
              goto LAB_10004def;
            }
          }
          if ((char)local_18 != '\0') goto LAB_10004def;
        }
        local_80 = 2;
        recovered_1000580e(&local_34,&local_28);
      }
    }
LAB_10004def:
    recovered_10003324(local_28);
    pvVar8 = (void *)((int)local_14 + 1);
  } while (pvVar8 != (void *)0x0);
  puVar3 = &DAT_10005f33;
  if ((char)local_18 == '\0') {
    puVar3 = &DAT_10005d4c;
  }
  local_80 = 3;
  recovered_10005a20(&local_28,(int)puVar3);
  pvVar7 = (void *)0x0;
  pvVar8 = (void *)0x0;
  while (pvVar8 < local_30) {
    local_1c = pvVar8;
    local_14 = pvVar7;
    if (pvVar8 != (void *)0x0 || (local_18 & 1) != 0) {
      local_80 = 4;
      recovered_10005764((int *)&local_28,0x2f);
    }
    local_80 = 5;
    recovered_100057b8((int *)&local_28,(undefined4 *)(local_34 + (int)local_14));
    pvVar7 = (void *)((int)local_14 + 0xc);
    pvVar8 = (void *)((int)local_1c + 1);
  }
  if (local_24 == 0) {
    puVar4 = &DAT_10005f33;
    if ((char)local_18 == '\0') {
      puVar4 = &DAT_10005d4a;
    }
    local_80 = 6;
    recovered_10005a20(local_9c,(int)puVar4);
  }
  else {
    local_80 = 7;
    recovered_100055c2(local_9c,&local_28);
  }
  recovered_10003324(local_28);
  recovered_100059cc(&local_34);
  recovered_10003324(local_90);
  puVar3 = &DAT_10005d4c;
  if (local_9c[0] != (undefined1 *)0x0) {
    puVar3 = local_9c[0];
  }
  local_80 = 8;
  iVar5 = recovered_1000508d(local_9c[0],&local_4c,puVar3);
  if (iVar5 == 0) {
    pvVar8 = (void *)0x0;
    bVar1 = recovered_100050bd(local_9c,param_1);
    if (bVar1 != 0) {
      local_80 = 9;
      iVar5 = recovered_1000508d(CONCAT31(extraout_var,bVar1),&local_4c,param_1);
      pvVar8 = (void *)0x0;
      if (iVar5 != 0) goto LAB_10004f2b;
    }
  }
  else {
LAB_10004f2b:
    pvVar8 = (void *)0x0;
    if ((((local_48 == 0) && (local_4c != (void *)0x0)) && (local_44 != 0)) &&
       ((local_40 != 0 && (local_3c != 0)))) {
      local_80 = 10;
      local_14 = local_4c;
      local_1c = recovered_1000331b(local_44);
      local_80 = 0xb;
      recovered_100013b6(local_1c,local_14,local_44);
      local_80 = 0xc;
      recovered_100050db();
      if (param_2 != (int *)0x0) {
        *param_2 = local_40;
      }
      pvVar8 = local_1c;
      if (param_3 != (int *)0x0) {
        *param_3 = local_3c;
      }
    }
  }
  recovered_10003324(local_9c[0]);
LAB_10005010:
  recovered_1000366f(&local_84);
  return pvVar8;
}

#undef DAT_10005d4a
#undef DAT_10005d4c
#undef DAT_10005f33
#undef DAT_10005f98
#undef LAB_10005025
#undef PTR_recovered_100032b0_10007004
#undef local_2c
#undef local_28
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_12c
#undef local_9c
#undef local_90
#undef local_8c
#undef local_84
#undef local_80
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30

#undef DAT_00006858
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#undef _DAT_00006858
#define _DAT_00006858 (*(code * *)(0x6858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x42fdU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000508d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100054d4();
  if (((char)uVar1 == '\0') || (_DAT_00006858 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006858)(param_3,param_2);
  }
  return uVar1;
}

#undef DAT_00006858
#undef _DAT_00006858

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x432dU)
 */

byte recovered_100050bd(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = recovered_100056f4(param_1,param_2);
  return bVar1 ^ 1;
}


#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x434bU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050db(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100054d4();
  if (((char)uVar1 != '\0') && (_DAT_00006850 != (code *)0x0)) {
    (*_DAT_00006850)();
  }
  return;
}

#undef DAT_00006850
#undef _DAT_00006850

#undef DAT_00006868
#define DAT_00006868 (*(uint8_t *)(0x6868U))
#undef _DAT_00006868
#define _DAT_00006868 (*(code * *)(0x6868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4372U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005102(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100054d4();
  if (((char)uVar1 == '\0') || (_DAT_00006868 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006868)(param_1,param_2);
  }
  return uVar1;
}

#undef DAT_00006868
#undef _DAT_00006868

#undef DAT_00006870
#define DAT_00006870 (*(uint8_t *)(0x6870U))
#undef _DAT_00006870
#define _DAT_00006870 (*(code * *)(0x6870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x43abU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000513b(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100054d4();
  if (((char)uVar1 != '\0') && (_DAT_00006870 != (code *)0x0)) {
    (*_DAT_00006870)(param_1,param_2);
  }
  return;
}

#undef DAT_00006870
#undef _DAT_00006870

#undef DAT_00006874
#define DAT_00006874 (*(uint8_t *)(0x6874U))
#undef DAT_10005d44
#define DAT_10005d44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fb4U)))
#undef _DAT_00006874
#define _DAT_00006874 (*(code * *)(0x6874U))
#undef _DAT_10005d44
#define _DAT_10005d44 (*(float *)(((uintptr_t)pf_module_state + 0x4fb4U)))
#define local_34 (*(undefined4 *)(frame + 16))
#define local_2c (*(void * *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 28))
#define local_24 (*(ulong *)(frame + 32))
#define local_20 (*(int *)(frame + 36))
#define local_1c (*(int *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define local_14 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x43e0U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10005170(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,double param_6)

{
  unsigned char frame[100] = {0};

  double dVar1;
  double dVar2;
  void *data;
  undefined4 uVar3;
  int iVar4;
  ulong size;
  void *out;
  int *piVar5;
  ushort in_FPUControlWord = pf_fpu_control();

  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (void *)0x0;
  piVar5 = (int *)0x0;
  if (param_2 != 0 && param_1 != 0) {
    dVar1 = 1.0;
    if (param_6 <= 1.0) {
      dVar1 = param_6;
    }
    dVar2 = 0.0;
    if (0.0 <= param_6) {
      dVar2 = dVar1 * (double)_DAT_10005d44;
    }
    local_14 = in_FPUControlWord | 0xc00;
    local_34 = (undefined4)(longlong)ROUND(dVar2);
    uVar3 = recovered_100054d4();
    if ((((char)uVar3 != '\0') && (_DAT_00006874 != (code *)0x0)) &&
       (iVar4 = (*_DAT_00006874)(param_1,param_2,param_3,param_4,param_5,local_34,&local_2c),
       data = local_2c, iVar4 != 0)) {
      if (local_1c == 0 || (local_20 == 0 || local_2c == (void *)0x0)) {
        if (local_2c == (void *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        size = local_24;
        if (local_24 == 0) {
          size = local_20 * local_1c * 4;
        }
        piVar5 = recovered_100032f2(0x18);
        *piVar5 = local_20;
        piVar5[1] = local_1c;
        out = recovered_1000331b(size);
        piVar5[2] = (int)out;
        recovered_100013b6(out,data,size);
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
      }
      recovered_100050db();
    }
  }
  return piVar5;
}

#undef DAT_00006874
#undef DAT_10005d44
#undef _DAT_00006874
#undef _DAT_10005d44
#undef local_34
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006878
#define DAT_00006878 (*(uint8_t *)(0x6878U))
#undef _DAT_00006878
#define _DAT_00006878 (*(code * *)(0x6878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4526U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100052b6(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_100054d4();
  if (((char)uVar1 == '\0') || (_DAT_00006878 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x4545U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00006878)();
  return;
}

#undef DAT_00006878
#undef _DAT_00006878

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x454cU)
 */

void recovered_100052dc(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003324((void *)*param_1);
  return;
}


#define local_20 (*(void * *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4564U)
 */

void recovered_100052f4(int *param_1,int param_2,uint param_3)

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
  uVar3 = recovered_100053da(param_1,param_2,&local_14);
  if ((char)uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar4 == 0) {
      recovered_10005418(param_1);
    }
    else {
      recovered_1000543a(param_1,uVar4);
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
    recovered_1000548a(&local_20,local_14 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (int)local_20;
    iVar1 = param_1[1];
    param_1[1] = local_1c;
    iVar2 = param_1[2];
    param_1[2] = local_18;
    local_20 = data;
    local_1c = iVar1;
    local_18 = iVar2;
    recovered_10003324(data);
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x462eU)
 */

int recovered_100053be(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x464aU)
 */

uint recovered_100053da(int *param_1,int param_2,int *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x4688U)
 */

void recovered_10005418(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;

  if (*param_1 == 0) {
    recovered_100054ba(0);
    *param_1 = extraout_EAX;
    param_1[2] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x46aaU)
 */

void recovered_1000543a(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_100054ba(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_EAX + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_EAX + param_1[1]) = 0;
    recovered_10003324((void *)*param_1);
    *param_1 = extraout_EAX;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x46faU)
 */

void recovered_1000548a(undefined4 *param_1,int param_2,uint param_3)

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
  recovered_100052f4(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x472aU)
 */

void recovered_100054ba(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_100032f2(param_1 + 1);
  *puVar1 = 0;
  return;
}


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
 * Address: ((uintptr_t)pf_module_state+0x4744U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100054d4(void)

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
 * Address: ((uintptr_t)pf_module_state+0x477aU)
 */

void recovered_1000550a(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10003324((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4796U)
 */

void recovered_10005526(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_10005564(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x47d4U)
 */

void recovered_10005564(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_100055ae(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003324((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x481eU)
 */

void * recovered_100055ae(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_100032f2(param_1);
  return pvVar1;
}


#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4832U)
 */

void recovered_100055c2(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_10005d4c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100052f4(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10005d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4869U)
 */

uint recovered_100055f9(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;

  uVar3 = 0;
  if (1 < param_4) {
    if (param_2 == 0) {
      uVar3 = param_4 - 1U;
      if (param_3 <= param_4 - 1U) {
        uVar3 = param_3;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
    }
    else {
      if ((int)param_3 < 1) {
        param_3 = 0;
      }
      if (param_2 <= param_3) {
        param_3 = param_2;
      }
      lVar1 = (ulonglong)(param_4 - 1) * (ulonglong)param_3;
      uVar2 = (undefined4)lVar1;
      uVar4 = recovered_1000110a(uVar2,uVar2,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
      uVar3 = (uint)uVar4;
    }
  }
  return uVar3;
}


#undef PTR_DAT_10006028
#define PTR_DAT_10006028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48b3U)
 */

void recovered_10005643(void)

{
  unsigned char frame[64] = {0};

  char in_CL;

  if ((byte)(in_CL + 0x9fU) < 0x1a) {
    *(&PTR_DAT_10006028)[(byte)(in_CL + 0x9fU)] = 1;
  }
  return;
}

#undef PTR_DAT_10006028

#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
#define local_14 (*(undefined1 * *)(frame + 16))
#define local_10 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48ceU)
 */

void recovered_1000565e(undefined4 *param_1,char param_2,uint param_3)

{
  unsigned char frame[68] = {0};


  local_14 = &DAT_10005d4c;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_14 = (undefined1 *)*param_1;
  }
  local_10 = param_1[1];
  recovered_100057e4((int *)&local_14,param_2,param_3);
  return;
}

#undef DAT_10005d4c
#undef local_14
#undef local_10

#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x490aU)
 */

undefined4 * recovered_1000569a(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;

  uVar1 = param_2[1];
  uVar2 = uVar1;
  if (param_3 <= uVar1) {
    uVar2 = param_3;
  }
  uVar1 = uVar1 - uVar2;
  uVar4 = uVar1;
  if (param_4 <= uVar1) {
    uVar4 = param_4;
  }
  if (param_4 != 0xffffffff) {
    uVar1 = uVar4;
  }
  puVar3 = &DAT_10005d4c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_1000548a(param_1,(int)(puVar3 + uVar2),uVar1);
  return param_1;
}

#undef DAT_10005d4c

#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4964U)
 */

undefined1 recovered_100056f4(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;

  iVar3 = param_1[1];
  puVar6 = &DAT_10005d4c;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*param_1;
  }
  iVar4 = recovered_100053be(param_2);
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

#undef DAT_10005d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x49b0U)
 */

void recovered_10005740(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100052dc((undefined4 *)(*param_1 + -0xc + param_1[1] * 0xc));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x49d4U)
 */

void recovered_10005764(int *param_1,undefined1 param_2)

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
    recovered_1000543a(param_1,uVar2);
  }
  recovered_10005418(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005d4c
#define DAT_10005d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a28U)
 */

void recovered_100057b8(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10005d4c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10005914(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10005d4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a54U)
 */

uint recovered_100057e4(int *param_1,char param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x4a7eU)
 */

int recovered_1000580e(int *param_1,undefined4 *param_2)

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
    recovered_10005860(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_100055c2((undefined4 *)(iVar2 * 0xc + *param_1),param_2);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0xc + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4ad0U)
 */

void recovered_10005860(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_100058cc(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_100058ee((undefined4 *)((int)pvVar1 + iVar3),(undefined4 *)(*param_1 + iVar3));
      recovered_100052dc((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + 0xc;
    }
    recovered_10003324((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b3cU)
 */

void * recovered_100058cc(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_100032f2(param_1 * 0xc);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b5eU)
 */

void recovered_100058ee(undefined4 *param_1,undefined4 *param_2)

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


#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b84U)
 */

int * recovered_10005914(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[68] = {0};

  int iVar1;
  uint uVar2;

  if (param_3 != 0 && param_2 != 0) {
    local_14 = 0;
    uVar2 = recovered_100053da(param_1,param_2,&local_14);
    iVar1 = param_1[1];
    if ((char)uVar2 == '\0') {
      recovered_1000543a(param_1,iVar1 + param_3);
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
      recovered_1000543a(param_1,param_3 + iVar1);
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
 * Address: ((uintptr_t)pf_module_state+0x4c3cU)
 */

void recovered_100059cc(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100059ec(param_1);
  recovered_10003324((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c5cU)
 */

void recovered_100059ec(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = param_1[1];
  iVar1 = iVar2 * 0xc;
  while( true ) {
    iVar1 = iVar1 + -0xc;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) break;
    recovered_100052dc((undefined4 *)(*param_1 + iVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c90U)
 */

void recovered_10005a20(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = recovered_100053be(param_2);
  recovered_100052f4(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4cc2U)
 */

int recovered_10005a52(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005564(param_1,uVar4);
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

