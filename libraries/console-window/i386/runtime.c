/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100070a8
#define DAT_100070a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6338U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10000d70(void)

{
  unsigned char frame[64] = {0};

  DAT_100070a8 = 0;
  recovered_10000d80();
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
#define DAT_100070a8 (*(char *)(((uintptr_t)pf_module_state + 0x6338U)))
#undef DAT_100070ac
#define DAT_100070ac (*(int *)(((uintptr_t)pf_module_state + 0x633cU)))
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

void recovered_10000d80(void)

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
      recovered_10002453(uVar1,*puVar2,puVar2[-1],&local_20);
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
      recovered_10002453(uVar1,uVar3,0x300000,&local_20);
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
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b0U)
 */

int recovered_10000f20(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000d80();
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
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1daU)
 */

void recovered_10000f4a(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000d80();
  for (piVar1 = &DAT_100070ac; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x209U)
 */

int recovered_10000f79(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000d80();
  iVar1 = 0;
  for (piVar2 = &DAT_100070ac; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22dU)
 */

void recovered_10000f9d(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000d80();
  for (piVar1 = &DAT_100070ac; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_100070ac

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x256U)
 */

uint * recovered_10000fc6(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  if (param_1 != 0) {
    recovered_10000d80();
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

longlong recovered_1000102b(uint param_1,int param_2,uint param_3)

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

ulonglong recovered_1000106a(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100010a9(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_100010ea(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  uVar1 = recovered_1000110b(param_1,param_3,param_2,param_4,param_5,(uint *)0x0);
  return uVar1;
}


#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39bU)
 */

undefined8 recovered_1000110b(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
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
      uVar9 = recovered_1000106a(param_3,param_2,uVar2 & 0xff);
      uVar6 = ((uint)uVar9 & 1) + uVar4 * 2;
      lVar10 = recovered_1000102b(1,0,uVar2 & 0xff);
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

undefined8 recovered_100011ec(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  unsigned char frame[68] = {0};


  local_10 = 0;
  local_14 = 0;
  recovered_1000110b(param_3,param_2,param_1,param_3,param_4,&local_14);
  return CONCAT44(local_10,local_14);
}

#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b4U)
 */

int recovered_10001224(uint param_1,uint param_2,uint param_3,uint param_4)

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
    uVar4 = recovered_1000110b(iVar2,((param_2 ^ uVar3) - uVar3) - (uint)((param_1 ^ uVar3) < uVar3)
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

undefined8 recovered_10001296(uint param_1,int param_2,uint param_3,uint param_4)

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
    recovered_1000110b(iVar1,((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2),
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

void recovered_10001308(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59fU)
 */

int recovered_1000130f(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001320(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10001348(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_1000136e(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x626U)
 */

void * recovered_10001396(void *out,void *data,ulong size)

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

void * recovered_100013b7(void *out,void *data,ulong size)

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

void * recovered_100013fd(void *out,int value,ulong size)

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

void recovered_10001419(undefined1 *param_1,int param_2)

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

void recovered_1000142f(undefined1 *param_1,int param_2)

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

int recovered_10001445(void *left,void *right,ulong size)

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

bool recovered_10001474(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717U)
 */

bool recovered_10001487(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72aU)
 */

bool recovered_1000149a(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740U)
 */

bool recovered_100014b0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x764U)
 */

bool recovered_100014d4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77dU)
 */

bool recovered_100014ed(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x790U)
 */

int recovered_10001500(int param_1)

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

int recovered_10001513(int param_1)

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

ulong recovered_10001526(char *text)

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

int recovered_10001541(char *left,char *right)

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

void recovered_10001569(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10001541(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x802U)
 */

void recovered_10001572(int param_1,int param_2)

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

void * recovered_1000158c(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10001526(param_1);
    out = recovered_10001320(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10001396(out,param_1,uVar1 + 1);
      pvVar2 = out;
    }
  }
  return pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x866U)
 */

char * recovered_100015d6(char *param_1,char param_2)

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

int recovered_100015fa(int param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + iVar2) == '\0') {
      return iVar2;
    }
    pcVar1 = recovered_100015d6(param_2,*(char *)(param_1 + iVar2));
    if (pcVar1 == (char *)0x0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c1U)
 */

char * recovered_10001631(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100015d6(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8efU)
 */

char * recovered_1000165f(char *param_1,char *param_2)

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


#undef DAT_10005d58
#define DAT_10005d58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fe8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91cU)
 */

undefined * recovered_1000168c(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10005d58;
}

#undef DAT_10005d58

#undef PTR_DAT_10007008
#define PTR_DAT_10007008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6298U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x926U)
 */

undefined ** recovered_10001696(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10007008;
}

#undef PTR_DAT_10007008

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x930U)
 */

undefined4 recovered_100016a0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x947U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100016b7(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    lVar2 = lVar2 + lVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    lVar2 = lVar2 * (longdouble)_DAT_10005b20;
  }
  return lVar2;
}

#undef DAT_10005b20
#undef _DAT_10005b20

#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x971U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100016e1(double param_1,int *param_2)

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
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_10005b20) {
      iVar2 = iVar2 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_10005b20)); dVar1 = dVar1 + dVar1) {
      iVar2 = iVar2 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10005b20
#undef _DAT_10005b20

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ffU)
 */

double recovered_1000176f(double left,double right)

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

double recovered_100017c1(double left,double right)

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

double recovered_1000184a(double value)

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

double recovered_10001892(double value)

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


#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7dU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100018ed(double value)

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
      dVar1 = (value / dVar1 + dVar1) * (double)_DAT_10005b20;
    }
  }
  return dVar1;
}

#undef DAT_10005b20
#undef _DAT_10005b20

#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_10005b24
#define DAT_10005b24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db4U)))
#undef DAT_10005b28
#define DAT_10005b28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef DAT_10005b2c
#define DAT_10005b2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dbcU)))
#undef DAT_10005b30
#define DAT_10005b30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dc0U)))
#undef DAT_10005b50
#define DAT_10005b50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de0U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b24
#define _DAT_10005b24 (*(float *)(((uintptr_t)pf_module_state + 0x4db4U)))
#undef _DAT_10005b28
#define _DAT_10005b28 (*(float *)(((uintptr_t)pf_module_state + 0x4db8U)))
#undef _DAT_10005b2c
#define _DAT_10005b2c (*(float *)(((uintptr_t)pf_module_state + 0x4dbcU)))
#undef _DAT_10005b30
#define _DAT_10005b30 (*(float *)(((uintptr_t)pf_module_state + 0x4dc0U)))
#undef _DAT_10005b50
#define _DAT_10005b50 (*(double *)(((uintptr_t)pf_module_state + 0x4de0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc7U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001937(double value)

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
    dVar3 = (double)_DAT_10005b24;
  }
  else {
    iVar6 = 0;
    for (; (double)_DAT_10005b28 < value; value = value * (double)_DAT_10005b20) {
      iVar6 = iVar6 + 1;
    }
    for (; value < (double)_DAT_10005b2c; value = value + value) {
      iVar6 = iVar6 + -1;
    }
    dVar4 = 1.0;
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    for (uVar5 = 1; uVar5 < 0x14; uVar5 = uVar5 + 2) {
      dVar3 = dVar1 / dVar4 + dVar3;
      dVar1 = dVar1 * dVar2;
      dVar4 = dVar4 + (double)_DAT_10005b30;
    }
    dVar3 = dVar3 + dVar3 + (double)iVar6 * _DAT_10005b50;
  }
  return dVar3;
}

#undef DAT_10005b20
#undef DAT_10005b24
#undef DAT_10005b28
#undef DAT_10005b2c
#undef DAT_10005b30
#undef DAT_10005b50
#undef _DAT_10005b20
#undef _DAT_10005b24
#undef _DAT_10005b28
#undef _DAT_10005b2c
#undef _DAT_10005b30
#undef _DAT_10005b50

#undef DAT_10005b80
#define DAT_10005b80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc6bU)
 */

longlong recovered_100019db(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10005b80 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10005b80

#undef DAT_10005b34
#define DAT_10005b34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dc4U)))
#undef DAT_10005b38
#define DAT_10005b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef DAT_10005b3c
#define DAT_10005b3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dccU)))
#undef _DAT_10005b34
#define _DAT_10005b34 (*(float *)(((uintptr_t)pf_module_state + 0x4dc4U)))
#undef _DAT_10005b38
#define _DAT_10005b38 (*(float *)(((uintptr_t)pf_module_state + 0x4dc8U)))
#undef _DAT_10005b3c
#define _DAT_10005b3c (*(float *)(((uintptr_t)pf_module_state + 0x4dccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcafU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001a1f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001a61(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)(((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10005b3c +
                  (lVar1 * lVar1) / (longdouble)_DAT_10005b38 +
                  (longdouble)1 + lVar1 / (longdouble)_DAT_10005b34) * extraout_ST0);
}

#undef DAT_10005b34
#undef DAT_10005b38
#undef DAT_10005b3c
#undef _DAT_10005b34
#undef _DAT_10005b38
#undef _DAT_10005b3c

#undef DAT_10005b58
#define DAT_10005b58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de8U)))
#undef DAT_10005b60
#define DAT_10005b60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df0U)))
#undef DAT_10005b68
#define DAT_10005b68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df8U)))
#undef DAT_10005b70
#define DAT_10005b70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e00U)))
#undef _DAT_10005b58
#define _DAT_10005b58 (*(double *)(((uintptr_t)pf_module_state + 0x4de8U)))
#undef _DAT_10005b60
#define _DAT_10005b60 (*(double *)(((uintptr_t)pf_module_state + 0x4df0U)))
#undef _DAT_10005b68
#define _DAT_10005b68 (*(double *)(((uintptr_t)pf_module_state + 0x4df8U)))
#undef _DAT_10005b70
#define _DAT_10005b70 (*(double *)(((uintptr_t)pf_module_state + 0x4e00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcf1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a61(double param_1)

{
  unsigned char frame[64] = {0};

  for (; _DAT_10005b58 < param_1; param_1 = param_1 + _DAT_10005b70) {
  }
  for (; param_1 < _DAT_10005b60; param_1 = param_1 + _DAT_10005b68) {
  }
  return;
}

#undef DAT_10005b58
#undef DAT_10005b60
#undef DAT_10005b68
#undef DAT_10005b70
#undef _DAT_10005b58
#undef _DAT_10005b60
#undef _DAT_10005b68
#undef _DAT_10005b70

#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef DAT_10005b44
#define DAT_10005b44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd4U)))
#undef DAT_10005b48
#define DAT_10005b48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd8U)))
#undef _DAT_10005b40
#define _DAT_10005b40 (*(float *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef _DAT_10005b44
#define _DAT_10005b44 (*(float *)(((uintptr_t)pf_module_state + 0x4dd4U)))
#undef _DAT_10005b48
#define _DAT_10005b48 (*(float *)(((uintptr_t)pf_module_state + 0x4dd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001a9f(double value)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;
  longdouble lVar1;

  recovered_10001a61(value);
  lVar1 = extraout_ST0 * extraout_ST0;
  return (double)((lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10005b48 +
                 (lVar1 * lVar1) / (longdouble)_DAT_10005b44 +
                 (longdouble)1 + lVar1 * (longdouble)_DAT_10005b40);
}

#undef DAT_10005b40
#undef DAT_10005b44
#undef DAT_10005b48
#undef _DAT_10005b40
#undef _DAT_10005b44
#undef _DAT_10005b48

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd6dU)
 */

double recovered_10001add(double value)

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

float recovered_10001af8(float left,float right)

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

longdouble recovered_10001b50(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_100016e1((double)param_1,param_2);
  return (longdouble)(float)extraout_ST0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe03U)
 */

longdouble recovered_10001b73(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_100016b7((double)param_1,param_2);
  return (longdouble)(float)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe26U)
 */

float recovered_10001b96(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100017c1((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe49U)
 */

float recovered_10001bb9(float value)

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

float recovered_10001c07(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001892((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb3U)
 */

double recovered_10001c23(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10001892(value);
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

float recovered_10001c7f(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001c23((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf2bU)
 */

float recovered_10001c9b(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100018ed((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf47U)
 */

float recovered_10001cb7(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001937((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf63U)
 */

void recovered_10001cd3(double param_1)

{
  unsigned char frame[64] = {0};

  recovered_100019db(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf79U)
 */

float recovered_10001ce9(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001a1f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf95U)
 */

float recovered_10001d05(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001a9f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfb1U)
 */

float recovered_10001d21(float value)

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
#define uStack_20 (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfccU)
 */

int recovered_10001d3c(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_10001e31();
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
#undef uStack_20
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10c1U)
 */

int recovered_10001e31(void)

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


#define local_18 (*(int *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
#define local_1c (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10f6U)
 */

int recovered_10001e66(byte *param_1,undefined4 *param_2,uint param_3)

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
    uVar3 = recovered_10001e31();
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

#undef DAT_10005b4c
#define DAT_10005b4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#undef _DAT_10005b4c
#define _DAT_10005b4c (*(float *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11ebU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001f5b(char *text,char **end)

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
    lVar7 = lVar7 * (longdouble)_DAT_10005b4c + (longdouble)(int)(bVar3 - 0x30);
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
      lVar8 = lVar8 * (longdouble)_DAT_10005b4c + (longdouble)(int)(bVar3 - 0x30);
      lVar9 = lVar9 * (longdouble)_DAT_10005b4c;
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
        lVar7 = recovered_100016b7((double)lVar7,iVar5 * local_14);
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

#undef DAT_10005b4c
#undef _DAT_10005b4c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x133fU)
 */

float recovered_100020af(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001f5b(text,end);
  return (float)dVar1;
}


#undef DAT_10005b4c
#define DAT_10005b4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#undef DAT_10005d86
#define DAT_10005d86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5016U)))
#undef _DAT_10005b4c
#define _DAT_10005b4c (*(float *)(((uintptr_t)pf_module_state + 0x4ddcU)))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(ulong *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1361U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100020d1(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10002134:
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
LAB_10002162:
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
switchD_1000216d_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_10002134;
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
          recovered_100023c6(&local_1c,&local_18,(int *)&local_14,&local_1c,(int)ROUND(dVar3),10,
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
            dVar4 = (double)_DAT_10005b4c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_1000213f;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_1000216d_caseD_68;
        case 'p':
          uVar6 = *(uint *)arguments;
          recovered_10002384(&local_1c,&DAT_10005d86);
          cVar5 = '\0';
          uVar9 = 0x10;
          goto LAB_1000233e;
        case 's':
          recovered_10002384(&local_1c,*(char **)arguments);
          goto LAB_10002347;
        case 'u':
          cVar5 = '\0';
          uVar9 = 10;
          goto LAB_10002339;
        case 'x':
          cVar5 = '\0';
LAB_1000232b:
          uVar9 = 0x10;
LAB_10002339:
          uVar6 = *(uint *)arguments;
          goto LAB_1000233e;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              cVar5 = '\x01';
              goto LAB_1000232b;
            }
            goto switchD_1000216d_caseD_65;
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
LAB_1000233e:
          recovered_100023c6(&local_1c,&local_18,(int *)&local_14,&local_1c,uVar6,uVar9,cVar5);
LAB_10002347:
          arguments = (void *)((int)arguments + 4);
          goto LAB_1000213f;
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
LAB_1000213f:
    format = format + 1;
  } while( true );
switchD_1000216d_caseD_68:
  cVar5 = format[1];
  format = format + 1;
  goto LAB_10002162;
}

#undef DAT_10005b4c
#undef DAT_10005d86
#undef _DAT_10005b4c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f6U)
 */

void recovered_10002366(undefined4 param_1,uint *param_2,int *param_3,int *param_4,undefined1 param_5)

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


#undef str_10005d5d
#define str_10005d5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fedU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1614U)
 */

void recovered_10002384(int *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int *in_ECX;
  uint *in_EDX;
  char *pcVar2;

  pcVar2 = str_10005d5d;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  for (; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    recovered_10002366((int)cVar1,in_EDX,in_ECX,param_1,cVar1);
  }
  return;
}

#undef str_10005d5d

#undef str_10005d64
#define str_10005d64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ff4U)))
#undef str_10005d75
#define str_10005d75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5005U)))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1656U)
 */

void recovered_100023c6(undefined4 param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
                  uint param_6,char param_7)

{
  unsigned char frame[105] = {0};

  uint *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;

  pcVar3 = str_10005d64;
  if (param_7 == '\0') {
    pcVar3 = str_10005d75;
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
    recovered_10002366((int)acStack_39[iVar2],puVar1,local_18,param_4,acStack_39[iVar2]);
    iVar2 = iVar2 + -1;
  }
  return;
}

#undef str_10005d64
#undef str_10005d75
#undef local_18
#undef local_14
#undef acStack_39

#define uStack00000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c0U)
 */

int recovered_10002430(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100020d1(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

#undef DAT_100070ac
#define DAT_100070ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x633cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16e3U)
 */

void recovered_10002453(undefined4 param_1,uint param_2,int param_3,int *param_4)

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

undefined4 recovered_100024a5(void)

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
#define DAT_100070b0 (*(int *)(((uintptr_t)pf_module_state + 0x6340U)))
#undef DAT_100070b4
#define DAT_100070b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6344U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x176aU)
 */

void recovered_100024da(char *param_1,int param_2)

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
          recovered_10002561();
        }
        else {
          if (DAT_100070b0 - 0x1ffU < 0xfffffe00) {
            recovered_10002561();
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
#define DAT_100070b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6340U)))
#undef DAT_100070b4
#define DAT_100070b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6344U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17f1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002561(void)

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
      recovered_10001396(local_208,&DAT_100070b4,DAT_100070b0);
      uVar1 = DAT_100070b0;
    }
    local_208[uVar1] = 0;
    uVar2 = recovered_10003197();
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

void recovered_100025d7(void)

{
  unsigned char frame[64] = {0};

  recovered_10002561();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1873U)
 */

void recovered_100025e3(void)

{
  unsigned char frame[64] = {0};

  recovered_10002561();
  return;
}


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
#undef DAT_10005d89
#define DAT_10005d89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5019U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187eU)
 */

void recovered_100025ee(char *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_10005d89;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10005d5c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10002430(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100024da(local_148,iVar1);
  }
  return;
}

#undef DAT_10005d5c
#undef DAT_10005d89
#undef local_148

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18d4U)
 */

void recovered_10002644(void)

{
  unsigned char frame[64] = {0};

  recovered_1000268a();
  recovered_1000268a();
  recovered_1000268a();
  recovered_1000268a();
  recovered_1000268a();
  recovered_1000268a();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191aU)
 */

void recovered_1000268a(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *in_ECX;

  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_10001526(in_ECX);
    recovered_100024da(in_ECX,uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1941U)
 */

void recovered_100026b1(void)

{
  unsigned char frame[64] = {0};

  recovered_1000268a();
  recovered_1000268a();
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

bool recovered_100026cf(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_100025e3();
    uVar1 = recovered_10003197();
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

undefined4 recovered_1000271e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19b5U)
 */

void recovered_10002725(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19baU)
 */

undefined1 recovered_1000272a(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005d89
#define DAT_10005d89 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5019U)))
#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
#undef str_10005f0a
#define str_10005f0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x519aU)))
#undef str_10005f17
#define str_10005f17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51a7U)))
#undef str_10005f25
#define str_10005f25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51b5U)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19c1U)
 */

undefined4 * recovered_10002731(char *param_1,int param_2)

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
  iVar1 = recovered_10001541(param_1,str_10005f0a);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    iVar2 = recovered_10001541(param_1,str_10005f17);
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    else {
      iVar2 = recovered_10001541(param_1,str_10005f25);
      if (iVar2 != 0) {
        puVar3 = recovered_10001320(800);
        if (puVar3 != (undefined4 *)0x0) {
          recovered_100013fd(puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_100015d6((char *)param_2,'r');
          bVar8 = true;
          bVar7 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_100015d6((char *)param_2,'+');
            bVar7 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_100015d6((char *)param_2,'a');
              bVar7 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar7;
          pcVar4 = recovered_100015d6((char *)param_2,'w');
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_100015d6((char *)param_2,'a'), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_100015d6((char *)param_2,'+');
            bVar8 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar8;
          pcVar4 = recovered_100015d6((char *)param_2,'a');
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_10002430((char *)(puVar3 + 1),0xf1,&DAT_10005d89,param_1);
          pvVar5 = recovered_100013fd(&local_1c,0,0xc);
          iVar1 = recovered_100029ec(pvVar5,&local_1c,param_1);
          if (iVar1 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_10007000 = 2;
LAB_100029b8:
              recovered_10001348(puVar3);
              return (undefined4 *)0x0;
            }
          }
          else {
            pcVar4 = recovered_100015d6((char *)param_2,'w');
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar6 = recovered_10002a1c(CONCAT31((int3)((uint)pcVar4 >> 8),pcVar4 != (char *)0x0)
                                           ,local_18,(int)puVar3);
                if ((char)uVar6 == '\0') goto LAB_100029b8;
                recovered_10001396((void *)puVar3[0x3f],local_1c,local_18);
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
        goto LAB_1000298d;
      }
      uVar6 = 3;
    }
  }
  puVar3 = recovered_10001320(800);
  if (puVar3 != (undefined4 *)0x0) {
    recovered_100013fd(puVar3,0,800);
    *puVar3 = uVar6;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_10002430((char *)(puVar3 + 1),0xf1,&DAT_10005d89,param_1);
    return puVar3;
  }
LAB_1000298d:
  *(undefined4 *)PTR_DAT_10007000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_10005d89
#undef PTR_DAT_10007000
#undef str_10005f0a
#undef str_10005f17
#undef str_10005f25
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

undefined4 recovered_100029ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003197();
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
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cacU)
 */

undefined4 recovered_10002a1c(undefined4 param_1,uint param_2,int param_3)

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
    pvVar3 = recovered_1000136e(*(void **)(param_3 + 0xfc),uVar2);
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

void recovered_10002a92(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_10002ab0(param_3);
  }
  recovered_10002731(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d40U)
 */

undefined4 recovered_10002ab0(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002de7(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_10001348((void *)param_1[0x3f]);
    }
    recovered_10001348(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d80U)
 */

int recovered_10002af0(undefined1 *param_1,int param_2,int param_3,int *param_4)

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
        uVar2 = recovered_10002b63(param_4);
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


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df3U)
 */

uint recovered_10002b63(int *param_1)

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
LAB_10002bfd:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      bVar1 = recovered_100026cf((int)param_1 + 0x116,0x1fe,&DAT_10005d5c,0);
      if (bVar1) {
        uVar2 = recovered_10001526((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10002bfd;
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

#undef DAT_10005d5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ed4U)
 */

int recovered_10002c44(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_100024da(param_1,size);
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
      uVar1 = recovered_10002a1c(*param_4 & 0xfffffffe,uVar3 + size,(int)param_4);
      if ((char)uVar1 != '\0') {
        uVar3 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
          recovered_100013fd((void *)(uVar3 + param_4[0x3f]),0,uVar2 - uVar3);
          uVar2 = param_4[0x42];
        }
        recovered_10001396((void *)(uVar2 + param_4[0x3f]),param_1,size);
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
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fdcU)
 */

undefined4 recovered_10002d4c(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10002d5b;
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
LAB_10002d5b:
  *(undefined4 *)PTR_DAT_10007000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10007000

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2055U)
 */

undefined4 recovered_10002dc5(int param_1)

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
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2077U)
 */

undefined4 recovered_10002de7(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar1 = recovered_10002fa6(param_1[0x40],param_1[0x3e],param_1 + 1,param_1[0x40]);
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

undefined1 recovered_10002e48(int param_1)

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

undefined1 recovered_10002e5f(int param_1)

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

void recovered_10002e76(int param_1)

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

uint recovered_10002e91(uint param_1,int param_2)

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
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2150U)
 */

undefined4 recovered_10002ec0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    iVar1 = recovered_10002ef1();
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

undefined4 recovered_10002ef1(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003197();
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
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6290U)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21acU)
 */

undefined4 recovered_10002f1c(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10007000 = 0x16;
  }
  else {
    pvVar1 = recovered_100013fd(&local_1c,0,0xc);
    iVar2 = recovered_100029ec(pvVar1,&local_1c,param_1);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      iVar2 = recovered_10002fa6(iVar2,local_1c,param_2,local_18);
      uVar3 = 5;
      if ((iVar2 != 0) && (iVar2 = recovered_10002ef1(), iVar2 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_10007000 = uVar3;
  }
  return 0xffffffff;
}

#undef PTR_DAT_10007000
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

undefined4 recovered_10002fa6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_10003197();
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

undefined4 recovered_10002fd9(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[76] = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    pvVar1 = recovered_100013fd(&local_1c,0,0xc);
    iVar2 = recovered_100029ec(pvVar1,&local_1c,param_1);
    if (iVar2 != 0) {
      pvVar1 = recovered_10001320(local_18 + (local_18 == 0));
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_10001396(pvVar1,local_1c,local_18);
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

bool recovered_1000306b(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  iVar1 = recovered_10002fa6(param_3,param_2,param_1,param_3);
  return iVar1 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2332U)
 */

undefined4 recovered_100030a2(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2339U)
 */

void recovered_100030a9(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x233eU)
 */

undefined4 recovered_100030ae(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2345U)
 */

undefined4 recovered_100030b5(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x234cU)
 */

undefined4 recovered_100030bc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2353U)
 */

int recovered_100030c3(int param_1,char param_2,int param_3)

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

int recovered_100030e7(char *left,char *right,ulong size)

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


#undef DAT_10005e99
#define DAT_10005e99 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5129U)))
#undef str_10005e9c
#define str_10005e9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512cU)))
#undef str_10005ea9
#define str_10005ea9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5139U)))
#undef str_10005eb3
#define str_10005eb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5143U)))
#undef str_10005ec7
#define str_10005ec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5157U)))
#undef str_10005ed5
#define str_10005ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5165U)))
#undef str_10005ee7
#define str_10005ee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5177U)))
#undef str_10005ef3
#define str_10005ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5183U)))
#undef str_10005f04
#define str_10005f04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5194U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x23aaU)
 */

char * recovered_1000311a(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10005e99;
    break;
  case 2:
    pcVar1 = str_10005e9c;
    break;
  case 5:
    pcVar1 = str_10005ea9;
    break;
  case 9:
    pcVar1 = str_10005eb3;
    break;
  case 0xc:
    pcVar1 = str_10005ec7;
    break;
  case 0xd:
    pcVar1 = str_10005ed5;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10005ee7;
    }
    if (param_1 == 0x16) {
      return str_10005ef3;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10005f04;
  }
  return pcVar1;
}

#undef DAT_10005e99
#undef str_10005e9c
#undef str_10005ea9
#undef str_10005eb3
#undef str_10005ec7
#undef str_10005ed5
#undef str_10005ee7
#undef str_10005ef3
#undef str_10005f04

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2405U)
 */

undefined4 recovered_10003175(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x240cU)
 */

undefined4 recovered_1000317c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100072b4
#define DAT_100072b4 (*(int *)(((uintptr_t)pf_module_state + 0x6544U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2414U)
 */

void recovered_10003184(void)

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

undefined4 recovered_10003197(void)

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

void recovered_100031d0(int param_1)

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

undefined4 recovered_100031df(undefined4 *param_1)

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

void recovered_10003200(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x24b2U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_10003263
#define DAT_10003263 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f3U)))
#undef DAT_10005f44
#define DAT_10005f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51d4U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_20 (*(undefined * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x24b6U)
 */

void recovered_10003226(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003290;
  local_28 = &DAT_10005f44;
  local_20 = &DAT_10003263;
  local_40 = 1;
  recovered_1000363a(&local_44);
  recovered_10001308();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10003263
#undef DAT_10005f44
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
 * Address: ((uintptr_t)pf_module_state+0x2520U)
 */

undefined4 recovered_10003290(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2523U)
 */

void recovered_10003293(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100032b0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003226();
}


#undef DAT_100072b8
#define DAT_100072b8 (*(int *)(((uintptr_t)pf_module_state + 0x6548U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2540U)
 */

int recovered_100032b0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_100072b8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_100072b8 = param_1;
  iVar1 = recovered_10003548();
  return iVar1;
}

#undef DAT_100072b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2562U)
 */

void * recovered_100032d2(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10001320(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001308();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x258bU)
 */

void * recovered_100032fb(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_100032d2(size);
  return pvVar1;
}


#undef DAT_10005f54
#define DAT_10005f54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51e4U)))
#undef LAB_10003358
#define LAB_10003358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25e8U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
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

void recovered_10003304(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003290;
  local_28 = &DAT_10005f54;
  local_20 = &LAB_10003358;
  local_40 = 1;
  recovered_1000363a(&local_44);
  recovered_10001348(data);
  recovered_1000364f(&local_44);
  return;
}

#undef DAT_10005f54
#undef LAB_10003358
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10005f64
#define DAT_10005f64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51f4U)))
#undef LAB_100033cb
#define LAB_100033cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265bU)))
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
 * Address: ((uintptr_t)pf_module_state+0x2607U)
 */

void recovered_10003377(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003290;
  local_28 = &DAT_10005f64;
  local_20 = &LAB_100033cb;
  local_40 = 1;
  recovered_1000363a(&local_44);
  recovered_10001348(data);
  recovered_1000364f(&local_44);
  return;
}

#undef DAT_10005f64
#undef LAB_100033cb
#undef local_44
#undef auStack_18
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10005f74
#define DAT_10005f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5204U)))
#undef LAB_1000343e
#define LAB_1000343e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26ceU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x267aU)
 */

void recovered_100033ea(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003290;
  local_28 = &DAT_10005f74;
  local_20 = &LAB_1000343e;
  local_40 = 1;
  recovered_1000363a(&local_44);
  recovered_10001348(param_1);
  recovered_1000364f(&local_44);
  return;
}

#undef DAT_10005f74
#undef LAB_1000343e
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10005f84
#define DAT_10005f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5214U)))
#undef LAB_100034b1
#define LAB_100034b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2741U)))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26edU)
 */

void recovered_1000345d(void *param_1)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10003290;
  local_28 = &DAT_10005f84;
  local_20 = &LAB_100034b1;
  local_40 = 1;
  recovered_1000363a(&local_44);
  recovered_10001348(param_1);
  recovered_1000364f(&local_44);
  return;
}

#undef DAT_10005f84
#undef LAB_100034b1
#undef local_24
#undef local_20
#undef auStack_18
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2760U)
 */

undefined4 recovered_100034d0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2767U)
 */

uint recovered_100034d7(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2776U)
 */

void recovered_100034e6(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2781U)
 */

void recovered_100034f1(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2786U)
 */

undefined1 * recovered_100034f6(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  bool bVar3;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001320(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003226();
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

void recovered_1000352b(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10001348((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27d8U)
 */

int recovered_10003548(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  return in_ECX + 0x1c;
}


#undef DAT_100072b8
#define DAT_100072b8 (*(void * *)(((uintptr_t)pf_module_state + 0x6548U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27e0U)
 */

void recovered_10003550(void)

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
      recovered_10001348(buffer);
    }
  }
  return;
}

#undef DAT_100072b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x281eU)
 */

void recovered_1000358e(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  recovered_100035ba();
  return;
}


#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x654cU)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x284aU)
 */

void recovered_100035ba(void)

{
  unsigned char frame[76] = {0};

  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;

  puVar2 = &DAT_100072bc;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_1000360b;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_10003a2d((undefined2 *)&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(in_ECX + 0xc) = puVar2;
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  recovered_100036af();
LAB_1000360b:
                    /* WARNING: Subroutine does not return */
  recovered_10003226();
}

#undef DAT_100072bc
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_100072b8
#define DAT_100072b8 (*(int *)(((uintptr_t)pf_module_state + 0x6548U)))
#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x654cU)))
#define puStack_8 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28a0U)
 */

void recovered_10003610(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = DAT_100072b8;
  if (DAT_100072b8 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003226();
  }
  *(undefined1 *)(DAT_100072b8 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  recovered_100035ba();
  *puStack_8 = DAT_100072bc;
  DAT_100072bc = puStack_8;
  return;
}

#undef DAT_100072b8
#undef DAT_100072bc
#undef puStack_8

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x654cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28caU)
 */

void recovered_1000363a(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_100072bc;
  DAT_100072bc = param_1;
  return;
}

#undef DAT_100072bc

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x654cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28dfU)
 */

void recovered_1000364f(undefined4 *param_1)

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

void recovered_10003678(void)

{
  unsigned char frame[64] = {0};

  recovered_100035ba();
                    /* WARNING: Subroutine does not return */
  recovered_10003226();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2916U)
 */

void recovered_10003686(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003226();
}


#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x654cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2921U)
 */

void recovered_10003691(void)

{
  unsigned char frame[64] = {0};

  if (DAT_100072bc != (undefined4 *)0x0) {
    DAT_100072bc = (undefined4 *)*DAT_100072bc;
  }
  recovered_100036af();
  return;
}

#undef DAT_100072bc

#undef DAT_100072bc
#define DAT_100072bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x654cU)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x293fU)
 */

void recovered_100036af(void)

{
  unsigned char frame[76] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;

  while( true ) {
    puVar1 = DAT_100072bc;
    if (DAT_100072bc == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003226();
    }
    if (DAT_100072bc == *(undefined4 **)(in_ECX + 0xc)) break;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_10003a2d((undefined2 *)&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = in_ECX;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_10003717;
    }
    DAT_100072bc = (undefined4 *)*puVar1;
  }
  DAT_100072bc[2] = in_ECX;
  puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
LAB_10003717:
  puVar1[1] = uVar2;
  recovered_100031d0((int)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_10003691();
}

#undef DAT_100072bc
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29b2U)
 */

void recovered_10003722(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003691();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29c3U)
 */

undefined4 recovered_10003733(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29caU)
 */

void recovered_1000373a(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003226();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29d5U)
 */

int recovered_10003745(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  int iVar3;

  iVar3 = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = (int)param_1 + *(int *)(iVar1 + -8);
    bVar2 = recovered_1000377b(iVar1,param_3,*(undefined4 **)(iVar1 + -4));
    if (!bVar2) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


#undef DAT_10007060
#define DAT_10007060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a0bU)
 */

bool recovered_1000377b(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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

void recovered_100037e2(void)

{
  unsigned char frame[64] = {0};

  recovered_10001308();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a7bU)
 */

undefined4 recovered_100037eb(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a82U)
 */

bool recovered_100037f2(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a95U)
 */

bool recovered_10003805(int param_1)

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

bool recovered_1000382c(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2adeU)
 */

bool recovered_1000384e(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af3U)
 */

bool recovered_10003863(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b08U)
 */

byte recovered_10003878(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b42U)
 */

bool recovered_100038b2(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10005b20
#define DAT_10005b20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_10005b40
#define DAT_10005b40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd0U)))
#undef _DAT_10005b20
#define _DAT_10005b20 (*(float *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef _DAT_10005b40
#define _DAT_10005b40 (*(float *)(((uintptr_t)pf_module_state + 0x4dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b57U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100038c7(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_1000184a(value);
  if ((double)_DAT_10005b20 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10005b40 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_10005b20
#undef DAT_10005b40
#undef _DAT_10005b20
#undef _DAT_10005b40

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define uStack_1c (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b9fU)
 */

ulonglong recovered_1000390f(byte *param_1,undefined4 *param_2,uint param_3)

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
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_10003947;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_10003947:
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

void recovered_10003a24(void)

{
  unsigned char frame[64] = {0};


  recovered_1000390f(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_10005c74
#define DAT_10005c74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f04U)))
#define local_18 (*(byte * *)(frame + 16))
#define local_14 (*(byte * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cbdU)
 */

undefined4 recovered_10003a2d(undefined2 *param_1)

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
      recovered_10003bcb(CONCAT31((int3)((uint)pbVar5 >> 8),bVar4),&local_14,(uint)bVar4);
    }
    pbVar5 = local_14 + 1;
    uVar7 = (ushort)*local_14;
    if (uVar7 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar5;
      uVar1 = recovered_10003c7f();
      local_18 = local_14 + uVar1;
      pbVar5 = local_14;
    }
    local_14 = pbVar5 + 1;
    uVar1 = recovered_10003c7f();
    iVar8 = *(int *)(in_ECX + 4);
    if (0 < iVar8) {
      pbVar5 = local_14 + uVar1;
      while (local_14 < pbVar5) {
        uVar1 = recovered_10003c7f();
        uVar2 = recovered_10003c7f();
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
            uVar2 = recovered_10003ccb();
            pbVar5 = (byte *)recovered_10003ccb();
            if (uVar2 == 0) {
              *(undefined1 *)((int)param_1 + 1) = 1;
            }
            else if (0 < (int)uVar2) {
              pbVar3 = pbVar5;
              pbVar6 = (byte *)0x0;
              if (((~(byte)(0x1c1d >> bVar4) | ~(bVar4 < 0xd && local_18 != (byte *)0x0)) & 1) == 0)
              {
                local_14 = local_18 + *(int *)(&DAT_10005c74 + uVar1 * 4) * uVar2;
                pbVar3 = recovered_10003bcb(local_14,&local_14,(uint)uVar7);
                pbVar6 = pbVar3;
              }
              bVar9 = recovered_1000377b(pbVar3,(undefined4 *)pbVar6,in_EDX);
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

#undef DAT_10005c74
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e5bU)
 */

byte * recovered_10003bcb(undefined4 param_1,undefined4 *param_2,uint param_3)

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
    pbVar4 = (byte *)recovered_10003caa(uVar2,4,pbVar1);
    pbVar3 = pbVar1 + 4;
    break;
  case 1:
    pbVar4 = (byte *)recovered_10003c7f();
    goto LAB_10003c58;
  case 2:
    pbVar4 = (byte *)recovered_10003caa(uVar2,2,pbVar1);
    goto LAB_10003c50;
  case 4:
  case 0xc:
    pbVar4 = (byte *)recovered_10003caa(uVar2,8,pbVar1);
    pbVar3 = pbVar1 + 8;
    break;
  default:
    goto switchD_10003bf9_caseD_5;
  case 9:
    pbVar4 = (byte *)recovered_10003ccb();
    goto LAB_10003c58;
  case 10:
    uVar2 = recovered_10003caa(uVar2,2,pbVar1);
    pbVar4 = (byte *)((int)(short)uVar2 & 0xffff0000U | uVar2);
LAB_10003c50:
    pbVar3 = pbVar1 + 2;
  }
  *param_2 = pbVar3;
LAB_10003c58:
  if ((param_3 & 0x70) != 0) {
    if ((param_3 & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar4 = pbVar4 + (int)pbVar1;
  }
  if (((char)param_3 < '\0') && (pbVar4 != (byte *)0x0)) {
    pbVar4 = *(byte **)pbVar4;
  }
switchD_10003bf9_caseD_5:
  return pbVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f0fU)
 */

uint recovered_10003c7f(void)

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

uint recovered_10003caa(undefined4 param_1,int param_2,byte *param_3)

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

uint recovered_10003ccb(void)

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


#undef DAT_00006814
#define DAT_00006814 (*(uint8_t *)(0x6814U))
#undef DAT_100072c0
#define DAT_100072c0 (*(int * *)(((uintptr_t)pf_module_state + 0x6550U)))
#undef _DAT_00006814
#define _DAT_00006814 (*(code * *)(0x6814U))
#undef str_10005f33
#define str_10005f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51c3U)))
#define local_11 (*(undefined1 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fa2U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10003d12(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[65] = {0};

  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;

  uVar1 = recovered_1000521e();
  if (((char)uVar1 != '\0') && (_DAT_00006814 != (code *)0x0)) {
    (*_DAT_00006814)();
  }
  piVar2 = recovered_100032d2(0x4c);
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  *(undefined1 *)(piVar2 + 7) = 0;
  *(undefined1 *)((int)piVar2 + 0x1d) = 0;
  *(undefined1 *)((int)piVar2 + 0x1e) = 0;
  *(undefined1 *)((int)piVar2 + 0x1f) = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  *(undefined1 *)(piVar2 + 10) = 0;
  *(undefined1 *)((int)piVar2 + 0x29) = 0;
  *(undefined1 *)((int)piVar2 + 0x2a) = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  pcVar3 = str_10005f33;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  recovered_10003e22(piVar2,(int)pcVar3);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  piVar2[3] = param_2;
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  piVar2[4] = param_3;
  piVar2[5] = param_2;
  piVar2[6] = param_3;
  piVar2[8] = param_2 >> 1;
  piVar2[9] = param_3 >> 1;
  local_11 = 0;
  recovered_10003e4a(piVar2 + 0x10,param_2 * param_3 * 4,&local_11);
  DAT_100072c0 = piVar2;
  recovered_10003e5a();
  recovered_100040b8();
  return piVar2;
}

#undef DAT_00006814
#undef DAT_100072c0
#undef _DAT_00006814
#undef str_10005f33
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30b2U)
 */

int * recovered_10003e22(int *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_10005336(param_2);
  recovered_1000526c(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30daU)
 */

void recovered_10003e4a(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005974(param_1,param_2,param_3);
  return;
}


#define local_18 (*(int *)(frame + 16))
#define local_14 (*(undefined1 *)(frame + 20))
#define local_13 (*(undefined1 *)(frame + 21))
#define local_12 (*(undefined1 *)(frame + 22))
#define local_11 (*(undefined1 *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x30eaU)
 */

void recovered_10003e5a(void)

{
  unsigned char frame[72] = {0};

  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble lVar16;

  if (((in_ECX != 0) && (0 < *(int *)(in_ECX + 0xc))) && (0 < *(int *)(in_ECX + 0x10))) {
    local_14 = 0;
    recovered_10003e4a((int *)(in_ECX + 0x40),*(int *)(in_ECX + 0xc) * *(int *)(in_ECX + 0x10) * 4,
                       &local_14);
    if (((*(int *)(in_ECX + 0x30) == 0) || (*(int *)(in_ECX + 0x38) < 1)) ||
       (*(int *)(in_ECX + 0x3c) < 1)) {
      bVar3 = 0;
      iVar6 = 0;
      iVar5 = 0;
      local_18 = 0;
      iVar4 = 0;
    }
    else {
      lVar13 = (longdouble)*(int *)(in_ECX + 0x38);
      lVar14 = (longdouble)*(int *)(in_ECX + 0xc) / lVar13;
      lVar15 = (longdouble)*(int *)(in_ECX + 0x3c);
      lVar16 = (longdouble)*(int *)(in_ECX + 0x10) / lVar15;
      if (lVar14 <= lVar16) {
        lVar16 = lVar14;
      }
      iVar4 = (int)ROUND(lVar13 * lVar16);
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      local_18 = (int)ROUND(lVar16 * lVar15);
      if (local_18 < 2) {
        local_18 = 1;
      }
      iVar5 = (*(int *)(in_ECX + 0xc) - iVar4) / 2;
      iVar6 = (*(int *)(in_ECX + 0x10) - local_18) / 2;
      bVar3 = 1;
    }
    for (iVar8 = 0; iVar8 < *(int *)(in_ECX + 0x10); iVar8 = iVar8 + 1) {
      for (iVar12 = 0; iVar12 < *(int *)(in_ECX + 0xc); iVar12 = iVar12 + 1) {
        local_14 = *(undefined1 *)(in_ECX + 0x1d);
        local_13 = *(undefined1 *)(in_ECX + 0x1e);
        local_12 = *(undefined1 *)(in_ECX + 0x1f);
        if ((((bool)(iVar5 <= iVar12 & bVar3)) && (iVar12 < iVar5 + iVar4)) &&
           ((iVar6 <= iVar8 && (iVar8 < local_18 + iVar6)))) {
          iVar1 = *(int *)(in_ECX + 0x38);
          iVar7 = ((iVar12 - iVar5) * iVar1) / iVar4;
          iVar11 = iVar1 + -1;
          if (iVar7 <= iVar1 + -1) {
            iVar11 = iVar7;
          }
          iVar2 = *(int *)(in_ECX + 0x2c);
          iVar10 = 0;
          if (-1 < iVar7) {
            iVar10 = iVar11;
          }
          iVar7 = (*(int *)(in_ECX + 0x3c) * (iVar8 - iVar6)) / local_18;
          iVar11 = *(int *)(in_ECX + 0x3c) + -1;
          if (iVar7 <= iVar11) {
            iVar11 = iVar7;
          }
          iVar9 = 0;
          if (-1 < iVar7) {
            iVar9 = iVar11;
          }
          iVar10 = iVar9 * iVar1 + iVar10;
          local_14 = *(undefined1 *)(iVar2 + iVar10 * 4);
          local_13 = *(undefined1 *)(iVar2 + 1 + iVar10 * 4);
          local_12 = *(undefined1 *)(iVar2 + 2 + iVar10 * 4);
        }
        local_11 = 0xff;
        recovered_10001396((void *)((*(int *)(in_ECX + 0xc) * iVar8 + iVar12) * 4 +
                                   *(int *)(in_ECX + 0x40)),&local_14,4);
      }
    }
  }
  return;
}

#undef local_18
#undef local_14
#undef local_13
#undef local_12
#undef local_11

#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_100072c4
#define DAT_100072c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6554U)))
#undef DAT_100072c8
#define DAT_100072c8 (*(int *)(((uintptr_t)pf_module_state + 0x6558U)))
#undef DAT_100072cc
#define DAT_100072cc (*(int *)(((uintptr_t)pf_module_state + 0x655cU)))
#undef DAT_100072d0
#define DAT_100072d0 (*(uint *)(((uintptr_t)pf_module_state + 0x6560U)))
#undef DAT_100072d4
#define DAT_100072d4 (*(uint *)(((uintptr_t)pf_module_state + 0x6564U)))
#undef DAT_100072d8
#define DAT_100072d8 (*(uint *)(((uintptr_t)pf_module_state + 0x6568U)))
#undef DAT_100072dc
#define DAT_100072dc (*(int *)(((uintptr_t)pf_module_state + 0x656cU)))
#undef DAT_100072e0
#define DAT_100072e0 (*(int *)(((uintptr_t)pf_module_state + 0x6570U)))
#undef DAT_100072e4
#define DAT_100072e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6574U)))
#undef DAT_100072e8
#define DAT_100072e8 (*(int *)(((uintptr_t)pf_module_state + 0x6578U)))
#undef DAT_100072ec
#define DAT_100072ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x657cU)))
#undef DAT_100072f0
#define DAT_100072f0 (*(int *)(((uintptr_t)pf_module_state + 0x6580U)))
#undef DAT_100072f4
#define DAT_100072f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6584U)))
#undef _DAT_0000687c
#define _DAT_0000687c (*(code * *)(0x687cU))
#define local_64 (*(int *)(frame + 72))
#define local_60 (*(undefined4 *)(frame + 76))
#define local_5c (*(undefined4 *)(frame + 80))
#define local_58 (*(undefined4 *)(frame + 84))
#define local_50 (*(int *)(frame + 92))
#define local_4c (*(uint *)(frame + 96))
#define local_48 (*(int *)(frame + 100))
#define local_44 (*(uint *)(frame + 104))
#define local_40 (*(uint *)(frame + 108))
#define local_3c (*(uint *)(frame + 112))
#define local_38 (*(uint *)(frame + 116))
#define local_34 (*(uint *)(frame + 120))
#define local_30 (*(uint *)(frame + 124))
#define local_2c (*(int *)(frame + 128))
#define local_28 (*(uint *)(frame + 132))
#define local_24 (*(uint *)(frame + 136))
#define local_20 (*(uint *)(frame + 140))
#define local_1c (*(uint *)(frame + 144))
#define local_18 (*(uint *)(frame + 148))
#define local_14 (*(uint *)(frame + 152))
#define local_84 (*(int *)(frame + 40))
#define local_80 (*(int *)(frame + 44))
#define local_7c (*(int *)(frame + 48))
#define local_78 (*(uint *)(frame + 52))
#define local_74 (*(uint *)(frame + 56))
#define local_70 (*(uint *)(frame + 60))
#define local_6c (*(int *)(frame + 64))
#define local_68 (*(int *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3348U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100040b8(void)

{
  unsigned char frame[204] = {0};

  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  if (in_ECX == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0xc) < 1) {
    return;
  }
  if (*(int *)(in_ECX + 0x10) < 1) {
    return;
  }
  local_18 = in_ECX;
  recovered_100013fd(&DAT_100072c4,0,0x34);
  uVar3 = recovered_1000521e();
  if ((char)uVar3 == '\0') {
    return;
  }
  if (_DAT_0000687c == (code *)0x0) {
    return;
  }
  iVar4 = (*_DAT_0000687c)(&DAT_100072c4);
  uVar10 = local_18;
  if (iVar4 == 0) {
    return;
  }
  local_2c = DAT_100072c4;
  local_1c = DAT_100072cc;
  local_20 = DAT_100072d8;
  local_24 = DAT_100072e0;
  local_14 = DAT_100072e8;
  local_28 = DAT_100072d0;
  local_30 = DAT_100072d4;
  if ((DAT_100072c8 != 0 ||
      (DAT_100072d0 >> 2 < DAT_100072d4 || (DAT_100072f0 == 0 || DAT_100072e8 == 0))) ||
      ((DAT_100072e0 == 0 || (DAT_100072dc != 0x20 || DAT_100072d8 == 0)) ||
      ((DAT_100072d4 == 0 || DAT_100072d0 == 0) ||
      (DAT_100072cc == 0 || DAT_100072c4 == 0 && DAT_100072c8 == 0)))) {
    return;
  }
  local_80 = DAT_100072c8;
  local_84 = DAT_100072c4;
  local_7c = DAT_100072cc;
  local_78 = DAT_100072d0;
  local_74 = DAT_100072d4;
  local_70 = DAT_100072d8;
  local_6c = DAT_100072e0;
  local_68 = DAT_100072e8;
  local_64 = DAT_100072f0;
  local_60 = DAT_100072e4;
  local_5c = DAT_100072ec;
  local_58 = DAT_100072f4;
  uVar5 = recovered_1000544c((uint)*(byte *)(local_18 + 0x1e),(uint)*(byte *)(local_18 + 0x1d),
                             (int)&local_84,*(byte *)(local_18 + 0x1e),*(byte *)(local_18 + 0x1f));
  uVar11 = local_30;
  for (uVar7 = 0; uVar7 != local_20; uVar7 = uVar7 + 1) {
    puVar8 = (uint *)(local_28 * uVar7 + local_2c);
    uVar9 = local_30;
    while (bVar12 = uVar9 != 0, uVar9 = uVar9 - 1, bVar12) {
      *puVar8 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  uVar5 = *(uint *)(uVar10 + 0xc);
  uVar10 = *(uint *)(uVar10 + 0x10);
  lVar2 = (ulonglong)uVar10 * (ulonglong)local_30;
  uVar3 = (undefined4)lVar2;
  uVar13 = recovered_100010ea(uVar3,uVar3,(uint)((ulonglong)lVar2 >> 0x20),uVar5,0);
  local_40 = (int)uVar13 + (uint)((int)uVar13 == 0);
  if (local_20 < local_40) {
    local_34 = 0;
    lVar2 = (ulonglong)uVar5 * (ulonglong)local_20;
    uVar3 = (undefined4)lVar2;
    uVar13 = recovered_100010ea(uVar3,uVar3,(uint)((ulonglong)lVar2 >> 0x20),uVar10,0);
    local_3c = (int)uVar13 + (uint)((int)uVar13 == 0);
    local_40 = local_20;
  }
  else {
    local_34 = 0;
    local_3c = uVar11;
  }
  local_14 = 0;
  local_44 = uVar11 - local_3c >> 1;
  local_38 = local_20 - local_40 >> 1;
  local_48 = local_2c + local_44 * 4;
  local_50 = *(int *)(local_18 + 0x40);
  uVar10 = 0;
  while (uVar10 < local_40) {
    lVar2 = (ulonglong)uVar10 * (ulonglong)*(uint *)(local_18 + 0x10);
    uVar3 = (undefined4)lVar2;
    uVar13 = recovered_100010ea(uVar3,uVar3,(uint)((ulonglong)lVar2 >> 0x20),local_40,local_34);
    uVar11 = local_3c;
    local_1c = (uint)uVar13;
    local_24 = (local_38 + uVar10) * local_28 + local_48;
    local_4c = uVar10;
    for (uVar5 = 0; uVar11 != uVar5; uVar5 = uVar5 + 1) {
      uVar10 = *(uint *)(local_18 + 0xc);
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar5;
      uVar3 = (undefined4)lVar2;
      uVar13 = recovered_100010ea(uVar3,uVar3,(uint)((ulonglong)lVar2 >> 0x20),uVar11,local_14);
      iVar4 = uVar10 * local_1c + (int)uVar13;
      bVar1 = *(byte *)(local_50 + 1 + iVar4 * 4);
      uVar10 = recovered_1000544c((uint)bVar1,(uint)*(byte *)(local_50 + iVar4 * 4),(int)&local_84,
                                  bVar1,*(byte *)(local_50 + 2 + iVar4 * 4));
      *(uint *)(local_24 + uVar5 * 4) = uVar10;
    }
    uVar10 = local_4c + 1;
  }
  uVar10 = *(uint *)(local_18 + 0x14);
  if ((int)uVar10 < 1) {
    return;
  }
  local_1c = *(uint *)(local_18 + 0x18);
  if ((int)local_1c < 1) {
    return;
  }
  uVar11 = *(uint *)(local_18 + 0x20);
  uVar5 = uVar10 - 1;
  if ((int)uVar11 <= (int)(uVar10 - 1)) {
    uVar5 = uVar11;
  }
  uVar7 = *(uint *)(local_18 + 0x24);
  uVar9 = 0;
  if (-1 < (int)uVar11) {
    uVar9 = uVar5;
  }
  uVar3 = (undefined4)((ulonglong)local_3c * (ulonglong)uVar9);
  uVar13 = recovered_100010ea(uVar3,uVar3,
                              local_14 * uVar9 +
                              (int)((ulonglong)local_3c * (ulonglong)uVar9 >> 0x20) +
                              ((int)uVar9 >> 0x1f) * local_3c,uVar10,0);
  uVar10 = local_1c - 1;
  if ((int)uVar7 <= (int)(local_1c - 1)) {
    uVar10 = uVar7;
  }
  uVar11 = 0;
  if (-1 < (int)uVar7) {
    uVar11 = uVar10;
  }
  uVar3 = (undefined4)((ulonglong)local_40 * (ulonglong)uVar11);
  uVar14 = recovered_100010ea(uVar3,uVar3,
                              local_34 * uVar11 +
                              (int)((ulonglong)local_40 * (ulonglong)uVar11 >> 0x20) +
                              ((int)uVar11 >> 0x1f) * local_40,local_1c,0);
  local_24 = recovered_1000544c((int)uVar14,0,(int)&local_84,0,0);
  if (*(char *)(local_18 + 0x28) == '\x01') {
    local_18 = 0x3c;
  }
  else {
    if (*(char *)(local_18 + 0x29) == '\x01') {
      uVar3 = 0x3c;
      uVar15 = 0x3c000000ff;
      goto LAB_10004480;
    }
    if (*(char *)(local_18 + 0x2a) == '\x01') {
      uVar3 = 0x50;
      uVar15 = 0xff00000082;
      goto LAB_10004480;
    }
    local_18 = 0xff;
  }
  uVar3 = 0xff;
  uVar15 = CONCAT44(local_18,local_18);
LAB_10004480:
  local_14 = recovered_1000544c(local_18,uVar3,(int)&local_84,(byte)uVar15,
                                (byte)((ulonglong)uVar15 >> 0x20));
  local_44 = local_44 + (int)uVar13;
  local_38 = local_38 + (int)uVar14;
  for (uVar10 = 0xfffffff9; uVar10 != 8; uVar10 = uVar10 + 1) {
    local_18 = local_38 + uVar10;
    local_1c = local_28 * local_18;
    for (uVar11 = 0xfffffff9; uVar11 != 8; uVar11 = uVar11 + 1) {
      iVar4 = recovered_1000130f(uVar11);
      iVar6 = recovered_1000130f(uVar10);
      if ((((iVar6 + iVar4 < 8) && (uVar5 = local_44 + uVar11, -1 < (int)uVar5)) &&
          (-1 < (int)local_18)) && ((uVar5 < local_30 && (local_18 < local_20)))) {
        uVar7 = local_24;
        if (iVar6 + iVar4 < 6) {
          uVar7 = local_14;
        }
        *(uint *)(local_1c + local_2c + uVar5 * 4) = uVar7;
      }
    }
  }
  return;
}

#undef DAT_0000687c
#undef DAT_100072c4
#undef DAT_100072c8
#undef DAT_100072cc
#undef DAT_100072d0
#undef DAT_100072d4
#undef DAT_100072d8
#undef DAT_100072dc
#undef DAT_100072e0
#undef DAT_100072e4
#undef DAT_100072e8
#undef DAT_100072ec
#undef DAT_100072f0
#undef DAT_100072f4
#undef _DAT_0000687c
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_50
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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37afU)
 */

void recovered_1000451f(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_00006818
#define DAT_00006818 (*(uint8_t *)(0x6818U))
#undef DAT_100072c0
#define DAT_100072c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6550U)))
#undef _DAT_00006818
#define _DAT_00006818 (*(code * *)(0x6818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x37bfU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000452f(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 != (undefined4 *)0x0) {
    if (DAT_100072c0 == param_1) {
      DAT_100072c0 = (undefined4 *)0x0;
    }
    recovered_10005a60(param_1 + 0x10);
    recovered_10005a60(param_1 + 0xb);
    recovered_10005254(param_1);
    recovered_10003304(param_1);
    uVar1 = recovered_1000521e();
    if (((char)uVar1 != '\0') && (_DAT_00006818 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x381aU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_00006818)();
      return;
    }
  }
  return;
}

#undef DAT_00006818
#undef DAT_100072c0
#undef _DAT_00006818

#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
#undef DAT_10005f94
#define DAT_10005f94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5224U)))
#undef LAB_10004651
#define LAB_10004651 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38e1U)))
#undef PTR_recovered_10003290_10007004
#define PTR_recovered_10003290_10007004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6294U)))
#define local_14 (*(undefined4 *)(frame + 232))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_20 (*(void * *)(frame + 220))
#define local_1c (*(undefined1 * *)(frame + 224))
#define local_18 (*(int *)(frame + 228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3822U)
 */

void * recovered_10004592(undefined4 *param_1)

{
  unsigned char frame[284] = {0};

  void *pvVar1;
  undefined1 *data;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_3c = PTR_recovered_10003290_10007004;
  local_38 = &DAT_10005f94;
  local_30 = &LAB_10004651;
  recovered_1000363a(&local_54);
  if (param_1 == (undefined4 *)0x0) {
    local_1c = (undefined1 *)0x0;
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_50 = 0xffffffff;
    recovered_100054e4(&local_1c,param_1);
  }
  local_50 = 1;
  local_20 = recovered_100032fb(local_18 + 1);
  data = &DAT_10005d5c;
  if (local_1c != (undefined1 *)0x0) {
    data = local_1c;
  }
  local_50 = 2;
  recovered_10001396(local_20,data,local_18 + 1);
  pvVar1 = local_20;
  recovered_10003304(local_1c);
  recovered_1000364f(&local_54);
  return pvVar1;
}

#undef DAT_10005d5c
#undef DAT_10005f94
#undef LAB_10004651
#undef PTR_recovered_10003290_10007004
#undef local_14
#undef auStackY_ec
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x390fU)
 */

void recovered_1000467f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3941U)
 */

void recovered_100046b1(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0xc) = param_2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  recovered_100046f9();
  recovered_10003e5a();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3989U)
 */

void recovered_100046f9(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;

  if (in_ECX != 0) {
    iVar4 = *(int *)(in_ECX + 0x14);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    iVar1 = *(int *)(in_ECX + 0x20);
    iVar3 = iVar4 + -1;
    if (iVar1 <= iVar4 + -1) {
      iVar3 = iVar1;
    }
    iVar4 = *(int *)(in_ECX + 0x18);
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar2 = iVar3;
    }
    *(int *)(in_ECX + 0x20) = iVar2;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    iVar1 = *(int *)(in_ECX + 0x24);
    iVar3 = iVar4 + -1;
    if (iVar1 <= iVar4 + -1) {
      iVar3 = iVar1;
    }
    iVar4 = 0;
    if (-1 < iVar1) {
      iVar4 = iVar3;
    }
    *(int *)(in_ECX + 0x24) = iVar4;
  }
  return;
}


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39dcU)
 */

void recovered_1000474c(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 != 0) {
    puVar1 = &DAT_10005d5c;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    recovered_10003e22((int *)param_1,(int)puVar1);
  }
  return;
}

#undef DAT_10005d5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a0bU)
 */

void recovered_1000477b(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar1 = (undefined1 *)param_2[2], puVar1 == (undefined1 *)0x0)) || (*param_2 < 1)) ||
     (param_2[1] < 1)) {
    return;
  }
  recovered_100047d8((int *)(param_1 + 0x2c),puVar1,puVar1 + *param_2 * param_2[1] * 4);
  *(int *)(param_1 + 0x38) = *param_2;
  *(int *)(param_1 + 0x3c) = param_2[1];
  recovered_10003e5a();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a68U)
 */

void recovered_100047d8(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005a7c(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3a8aU)
 */

void recovered_100047fa(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004824();
  recovered_10003e5a();
  recovered_100040b8();
  return;
}


#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_10007078
#define DAT_10007078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6308U)))
#undef DAT_10007079
#define DAT_10007079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6309U)))
#undef DAT_1000707a
#define DAT_1000707a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630aU)))
#undef DAT_1000707b
#define DAT_1000707b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630bU)))
#undef DAT_1000707c
#define DAT_1000707c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630cU)))
#undef DAT_100070a1
#define DAT_100070a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6331U)))
#undef DAT_100070a2
#define DAT_100070a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6332U)))
#undef DAT_100070a3
#define DAT_100070a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6333U)))
#undef DAT_100070a4
#define DAT_100070a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6334U)))
#undef DAT_100070a5
#define DAT_100070a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6335U)))
#undef DAT_100070a6
#define DAT_100070a6 (*(char *)(((uintptr_t)pf_module_state + 0x6336U)))
#undef DAT_100072c0
#define DAT_100072c0 (*(int *)(((uintptr_t)pf_module_state + 0x6550U)))
#undef DAT_100072f8
#define DAT_100072f8 (*(int *)(((uintptr_t)pf_module_state + 0x6588U)))
#undef PTR_DAT_10006000
#define PTR_DAT_10006000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5290U)))
#undef _DAT_0000682c
#define _DAT_0000682c (*(code * *)(0x682cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(code * *)(0x6880U))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ab4U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004824(void)

{
  unsigned char frame[96] = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;

  if (DAT_100072c0 == 0) {
    recovered_10004c49();
    return;
  }
switchD_100049ec_caseD_49:
  do {
    uVar2 = recovered_1000521e();
    if ((((char)uVar2 == '\0') || (_DAT_0000682c == (code *)0x0)) ||
       (uVar3 = (*_DAT_0000682c)(), uVar3 == 0)) {
      iVar1 = DAT_100072c0;
      recovered_100046f9();
      if (iVar1 != 0) {
        local_14 = 0;
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        local_30 = 0;
        uVar2 = recovered_1000521e();
        if ((((char)uVar2 != '\0') && (_DAT_00006880 != (code *)0x0)) &&
           (iVar4 = (*_DAT_00006880)(&local_30), iVar4 != 0)) {
          if (((local_30 & 2) == 0) || (local_20 == 0 && local_1c == 0)) {
            if ((local_30 & 1) != 0) {
              uVar3 = recovered_10005535(*(undefined4 *)(iVar1 + 0x14),local_18,local_28,
                                         *(undefined4 *)(iVar1 + 0x14));
              *(uint *)(iVar1 + 0x20) = uVar3;
              uVar3 = recovered_10005535(*(undefined4 *)(iVar1 + 0x18),local_14,local_24,
                                         *(undefined4 *)(iVar1 + 0x18));
              *(uint *)(iVar1 + 0x24) = uVar3;
            }
          }
          else {
            *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + local_20;
            *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + local_1c;
          }
          *(byte *)(iVar1 + 0x28) = (byte)local_2c & 1;
          *(byte *)(iVar1 + 0x29) = (byte)local_2c >> 1 & 1;
          *(byte *)(iVar1 + 0x2a) = (byte)local_2c >> 2 & 1;
          recovered_100046f9();
        }
      }
      return;
    }
    cVar6 = (char)uVar3;
    uVar7 = uVar3 >> 8 & 0xff;
    if (cVar6 == '\0') goto LAB_100048a0;
    if (DAT_100072c0 != 0) {
      uVar5 = uVar3 & 0xff;
      if (DAT_100072f8 == 2) {
        DAT_100072f8 = 0;
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
      else if (DAT_100072f8 == 1) {
        DAT_100072f8 = (uint)(cVar6 == '[') * 2;
      }
      else if (cVar6 == '\x1b') {
        DAT_100072f8 = 1;
      }
      else if ((byte)(cVar6 - 0x20U) < 0x5f) {
        DAT_100070a6 = cVar6;
        if (((byte)(cVar6 + 0x9fU) < 0x1a) || ((byte)(cVar6 + 0xbfU) < 0x1a)) {
          recovered_1000551b();
        }
        else {
          if (9 < (byte)(cVar6 - 0x30U)) goto LAB_10004976;
          *(&PTR_DAT_10006000)[uVar3 + 0xd0 & 0xff] = 1;
        }
      }
      else {
LAB_10004976:
        switch((uintptr_t)(uVar5)) {
        case 3:
        case 4:
          *(undefined1 *)(DAT_100072c0 + 0x1c) = 1;
          break;
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
        case 0xc:
          break;
        case 8:
switchD_1000497e_caseD_8:
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
          else if (uVar5 == 0x7f) goto switchD_1000497e_caseD_8;
        }
      }
    }
  } while (DAT_100072c0 == 0 || (short)uVar3 == 0x11b);
  goto LAB_100049e4;
LAB_100048a0:
  if (DAT_100072c0 == 0) goto switchD_100049ec_caseD_49;
  switch((uintptr_t)(uVar7)) {
  case 1:
switchD_100049ec_caseD_48:
    DAT_10007079 = 1;
    goto switchD_100049ec_caseD_49;
  case 2:
switchD_100049ec_caseD_50:
    DAT_1000707a = 1;
    goto switchD_100049ec_caseD_49;
  case 3:
switchD_100049ec_caseD_4d:
    DAT_1000707c = 1;
    goto switchD_100049ec_caseD_49;
  case 4:
switchD_100049ec_caseD_4b:
    DAT_1000707b = 1;
    goto switchD_100049ec_caseD_49;
  }
  if (uVar7 != 0x17) {
LAB_100049e4:
    switch((uintptr_t)(uVar7)) {
    case 0x48:
      goto switchD_100049ec_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_100049ec_caseD_49;
    case 0x4b:
      goto switchD_100049ec_caseD_4b;
    case 0x4d:
      goto switchD_100049ec_caseD_4d;
    case 0x50:
      goto switchD_100049ec_caseD_50;
    case 0x53:
      DAT_100070a4 = 1;
      goto switchD_100049ec_caseD_49;
    default:
      if (uVar7 != 1) {
        if (uVar7 == 0xe) {
          DAT_100070a3 = 1;
        }
        else if (uVar7 == 0x1c) {
          DAT_10007078 = 1;
        }
        goto switchD_100049ec_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_100072c0 + 0x1c) = 1;
  goto switchD_100049ec_caseD_49;
}

#undef DAT_0000682c
#undef DAT_00006880
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
#undef DAT_100072f8
#undef PTR_DAT_10006000
#undef _DAT_0000682c
#undef _DAT_00006880
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3dd2U)
 */

undefined1 recovered_10004b42(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x1c);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3de5U)
 */

void recovered_10004b55(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1d) = param_2;
    *(undefined1 *)(param_1 + 0x1e) = param_3;
    *(undefined1 *)(param_1 + 0x1f) = param_4;
    if (*(int *)(param_1 + 0x30) == 0) {
      recovered_10003e5a();
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e0fU)
 */

int * recovered_10004b7f(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  void *out;
  ulong size;
  int *piVar3;

  piVar3 = (int *)0x0;
  if (param_1 != 0) {
    recovered_10003e5a();
    if (*(int *)(param_1 + 0x44) != 0) {
      piVar3 = recovered_100032d2(0x18);
      iVar1 = *(int *)(param_1 + 0xc);
      *piVar3 = iVar1;
      iVar2 = *(int *)(param_1 + 0x10);
      piVar3[1] = iVar2;
      size = iVar1 * iVar2 * 4;
      out = recovered_100032fb(size);
      piVar3[2] = (int)out;
      recovered_10001396(out,*(void **)(param_1 + 0x40),size);
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3e81U)
 */

void recovered_10004bf1(int param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3eb7U)
 */

undefined1 recovered_10004c27(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_2 < 3 && param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x28 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_10007078
#define DAT_10007078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6308U)))
#undef DAT_10007079
#define DAT_10007079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6309U)))
#undef DAT_1000707a
#define DAT_1000707a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630aU)))
#undef DAT_1000707b
#define DAT_1000707b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630bU)))
#undef DAT_1000707c
#define DAT_1000707c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630cU)))
#undef DAT_1000707d
#define DAT_1000707d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630dU)))
#undef DAT_1000707e
#define DAT_1000707e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630eU)))
#undef DAT_1000707f
#define DAT_1000707f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x630fU)))
#undef DAT_10007080
#define DAT_10007080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6310U)))
#undef DAT_10007081
#define DAT_10007081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6311U)))
#undef DAT_10007082
#define DAT_10007082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6312U)))
#undef DAT_10007083
#define DAT_10007083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6313U)))
#undef DAT_10007084
#define DAT_10007084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6314U)))
#undef DAT_10007085
#define DAT_10007085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6315U)))
#undef DAT_10007086
#define DAT_10007086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6316U)))
#undef DAT_10007087
#define DAT_10007087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6317U)))
#undef DAT_10007088
#define DAT_10007088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6318U)))
#undef DAT_10007089
#define DAT_10007089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6319U)))
#undef DAT_1000708a
#define DAT_1000708a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631aU)))
#undef DAT_1000708b
#define DAT_1000708b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631bU)))
#undef DAT_1000708c
#define DAT_1000708c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631cU)))
#undef DAT_1000708d
#define DAT_1000708d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631dU)))
#undef DAT_1000708e
#define DAT_1000708e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631eU)))
#undef DAT_1000708f
#define DAT_1000708f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x631fU)))
#undef DAT_10007090
#define DAT_10007090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6320U)))
#undef DAT_10007091
#define DAT_10007091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6321U)))
#undef DAT_10007092
#define DAT_10007092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6322U)))
#undef DAT_10007093
#define DAT_10007093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6323U)))
#undef DAT_10007094
#define DAT_10007094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6324U)))
#undef DAT_10007095
#define DAT_10007095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6325U)))
#undef DAT_10007096
#define DAT_10007096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6326U)))
#undef DAT_10007097
#define DAT_10007097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6327U)))
#undef DAT_10007098
#define DAT_10007098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6328U)))
#undef DAT_10007099
#define DAT_10007099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6329U)))
#undef DAT_1000709a
#define DAT_1000709a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632aU)))
#undef DAT_1000709b
#define DAT_1000709b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632bU)))
#undef DAT_1000709c
#define DAT_1000709c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632cU)))
#undef DAT_1000709d
#define DAT_1000709d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632dU)))
#undef DAT_1000709e
#define DAT_1000709e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632eU)))
#undef DAT_1000709f
#define DAT_1000709f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x632fU)))
#undef DAT_100070a0
#define DAT_100070a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6330U)))
#undef DAT_100070a1
#define DAT_100070a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6331U)))
#undef DAT_100070a2
#define DAT_100070a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6332U)))
#undef DAT_100070a3
#define DAT_100070a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6333U)))
#undef DAT_100070a4
#define DAT_100070a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6334U)))
#undef DAT_100070a5
#define DAT_100070a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6335U)))
#undef DAT_100070a6
#define DAT_100070a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6336U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ed9U)
 */

void recovered_10004c49(void)

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
 * Address: ((uintptr_t)pf_module_state+0x3fcbU)
 */

void recovered_10004d3b(void)

{
  unsigned char frame[64] = {0};

  recovered_10004c49();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fd4U)
 */

void recovered_10004d44(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fd9U)
 */

void recovered_10004d49(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fdeU)
 */

undefined4 recovered_10004d4e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3fe5U)
 */

void recovered_10004d55(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3feaU)
 */

undefined4 recovered_10004d5a(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_10005d5a
#define DAT_10005d5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4feaU)))
#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
#undef DAT_10005f41
#define DAT_10005f41 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51d1U)))
#undef DAT_10005f9c
#define DAT_10005f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x522cU)))
#undef LAB_10005165
#define LAB_10005165 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43f5U)))
#undef PTR_recovered_10003290_10007004
#define PTR_recovered_10003290_10007004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6294U)))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#define local_98 (*(char * *)(frame + 164))
#define local_94 (*(void * *)(frame + 168))
#define local_8c (*(undefined4 *)(frame + 176))
#define local_88 (*(undefined4 *)(frame + 180))
#define local_74 (*(undefined * *)(frame + 200))
#define local_70 (*(undefined * *)(frame + 204))
#define local_6c (*(undefined1 * *)(frame + 208))
#define local_68 (*(undefined1 * *)(frame + 212))
#define local_64 (*(undefined1 * *)(frame + 216))
#define local_58 (*(void * *)(frame + 228))
#define local_54 (*(int *)(frame + 232))
#define local_50 (*(ulong *)(frame + 236))
#define local_4c (*(int *)(frame + 240))
#define local_48 (*(int *)(frame + 244))
#define local_44 (*(undefined4 *)(frame + 248))
#define local_40 (*(undefined1 * *)(frame + 252))
#define local_3c (*(int *)(frame + 256))
#define local_38 (*(undefined4 *)(frame + 260))
#define local_34 (*(int *)(frame + 264))
#define local_30 (*(void * *)(frame + 268))
#define local_2c (*(undefined4 *)(frame + 272))
#define local_28 (*(void * *)(frame + 276))
#define local_24 (*(undefined1 * *)(frame + 280))
#define local_20 (*(int *)(frame + 284))
#define local_1c (*(undefined4 *)(frame + 288))
#define local_18 (*(uint *)(frame + 292))
#define local_14 (*(undefined4 *)(frame + 296))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x3ff1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10004d61(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[348] = {0};

  byte bVar1;
  char cVar2;
  void *extraout_EAX;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined3 extraout_var = 0;
  char *pcVar7;
  void *pvVar8;
  void *pvVar9;

  local_6c = (undefined1 *)((int)(uintptr_t)(frame + 316) + -4);
  local_64 = auStackY_12c + 0x80;
  local_74 = PTR_recovered_10003290_10007004;
  local_70 = &DAT_10005f9c;
  local_68 = &LAB_10005165;
  recovered_1000363a(&local_8c);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    pvVar9 = (void *)0x0;
    goto LAB_10005150;
  }
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = (void *)0x0;
  local_88 = 0xffffffff;
  recovered_10005942(&local_98,param_1);
  local_34 = 0;
  local_30 = (void *)0x0;
  local_2c = 0;
  pvVar9 = (void *)0x0;
  if (local_94 == (void *)0x0) {
    local_18 = 0;
  }
  else {
    pcVar7 = &DAT_10005d5c;
    if (local_98 != (char *)0x0) {
      pcVar7 = local_98;
    }
    local_18 = CONCAT31((int3)((uint)local_98 >> 8),*pcVar7 == '/');
  }
  do {
    if (local_94 <= pvVar9) break;
    recovered_10005580(&local_98,'/',(uint)pvVar9);
    pvVar8 = extraout_EAX;
    if (extraout_EAX == (void *)0xffffffff) {
      pvVar8 = local_94;
    }
    local_88 = 1;
    local_14 = extraout_EAX;
    recovered_100055bc(&local_24,&local_98,(uint)pvVar9,(int)pvVar8 - (int)pvVar9);
    if (local_20 != 0) {
      bVar1 = recovered_10005200(&local_24,((uintptr_t)pf_module_state+0x4feaU));
      if (bVar1 != 0) {
        cVar2 = recovered_10005616(&local_24,((uintptr_t)pf_module_state+0x51ceU));
        if (cVar2 != '\0') {
          if (local_30 != (void *)0x0) {
            bVar1 = recovered_10005200((undefined4 *)(local_34 + -0xc + (int)local_30 * 0xc),
                                       ((uintptr_t)pf_module_state+0x51ceU));
            if (bVar1 != 0) {
              recovered_10005662(&local_34);
              goto LAB_10004f03;
            }
          }
          if ((char)local_18 != '\0') goto LAB_10004f03;
        }
        local_88 = 2;
        recovered_10005730(&local_34,&local_24);
      }
    }
LAB_10004f03:
    recovered_10003304(local_24);
    pvVar9 = (void *)((int)local_14 + 1);
  } while (pvVar9 != (void *)0x0);
  puVar3 = &DAT_10005f41;
  if ((char)local_18 == '\0') {
    puVar3 = &DAT_10005d5c;
  }
  local_88 = 3;
  recovered_10005942(&local_24,(int)puVar3);
  pvVar8 = (void *)0x0;
  pvVar9 = (void *)0x0;
  while (pvVar9 < local_30) {
    local_28 = pvVar9;
    local_14 = pvVar8;
    if (pvVar9 != (void *)0x0 || (local_18 & 1) != 0) {
      local_88 = 4;
      recovered_10005686((int *)&local_24,0x2f);
    }
    local_88 = 5;
    recovered_100056da((int *)&local_24,(undefined4 *)(local_34 + (int)local_14));
    pvVar8 = (void *)((int)local_14 + 0xc);
    pvVar9 = (void *)((int)local_28 + 1);
  }
  if (local_20 == 0) {
    puVar4 = &DAT_10005f41;
    if ((char)local_18 == '\0') {
      puVar4 = &DAT_10005d5a;
    }
    local_88 = 6;
    recovered_10005942(&local_40,(int)puVar4);
  }
  else {
    local_40 = local_24;
    local_3c = local_20;
    local_38 = local_1c;
    local_24 = (undefined1 *)0x0;
    local_20 = 0;
    local_1c = 0;
  }
  recovered_10003304(local_24);
  recovered_100058ee(&local_34);
  recovered_10003304(local_98);
  puVar3 = &DAT_10005d5c;
  if (local_40 != (undefined1 *)0x0) {
    puVar3 = local_40;
  }
  local_88 = 7;
  iVar5 = recovered_100051d0(local_40,&local_58,puVar3);
  if (iVar5 == 0) {
    pvVar9 = (void *)0x0;
    bVar1 = recovered_10005200(&local_40,param_1);
    if (bVar1 != 0) {
      local_88 = 8;
      iVar5 = recovered_100051d0(CONCAT31(extraout_var,bVar1),&local_58,param_1);
      pvVar9 = (void *)0x0;
      if (iVar5 != 0) goto LAB_1000504d;
    }
  }
  else {
LAB_1000504d:
    pvVar9 = (void *)0x0;
    if ((((local_54 == 0) && (local_14 = local_58, local_58 != (void *)0x0)) && (local_50 != 0)) &&
       ((local_4c != 0 && (local_48 != 0)))) {
      local_88 = 9;
      local_28 = recovered_100032fb(local_50);
      local_88 = 10;
      recovered_10001396(local_28,local_14,local_50);
      pvVar9 = local_28;
      uVar6 = recovered_1000521e();
      if (((char)uVar6 != '\0') && (_DAT_00006850 != (code *)0x0)) {
        local_88 = 0xb;
        (*_DAT_00006850)();
        pvVar9 = local_28;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_4c;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = local_48;
      }
    }
  }
  recovered_10003304(local_40);
LAB_10005150:
  recovered_1000364f(&local_8c);
  return pvVar9;
}

#undef DAT_00006850
#undef DAT_10005d5a
#undef DAT_10005d5c
#undef DAT_10005f41
#undef DAT_10005f9c
#undef LAB_10005165
#undef PTR_recovered_10003290_10007004
#undef _DAT_00006850
#undef local_98
#undef local_94
#undef local_8c
#undef local_88
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_58
#undef local_54
#undef local_50
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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_12c

#undef DAT_00006858
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#undef _DAT_00006858
#define _DAT_00006858 (*(code * *)(0x6858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4460U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100051d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = recovered_1000521e();
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
 * Address: ((uintptr_t)pf_module_state+0x4490U)
 */

byte recovered_10005200(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = recovered_10005616(param_1,param_2);
  return bVar1 ^ 1;
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
 * Address: ((uintptr_t)pf_module_state+0x44aeU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000521e(void)

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
 * Address: ((uintptr_t)pf_module_state+0x44e4U)
 */

void recovered_10005254(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003304((void *)*param_1);
  return;
}


#define local_20 (*(void * *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x44fcU)
 */

void recovered_1000526c(int *param_1,int param_2,uint param_3)

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
  uVar3 = recovered_10005352(param_1,param_2,&local_14);
  if ((char)uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar4 == 0) {
      recovered_10005390(param_1);
    }
    else {
      recovered_100053b2(param_1,uVar4);
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
    recovered_10005402(&local_20,local_14 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (int)local_20;
    iVar1 = param_1[1];
    param_1[1] = local_1c;
    iVar2 = param_1[2];
    param_1[2] = local_18;
    local_20 = data;
    local_1c = iVar1;
    local_18 = iVar2;
    recovered_10003304(data);
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x45c6U)
 */

int recovered_10005336(int param_1)

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
 * Address: ((uintptr_t)pf_module_state+0x45e2U)
 */

uint recovered_10005352(int *param_1,int param_2,int *param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x4620U)
 */

void recovered_10005390(int *param_1)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;

  if (*param_1 == 0) {
    recovered_10005432(0);
    *param_1 = extraout_EAX;
    param_1[2] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4642U)
 */

void recovered_100053b2(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int extraout_EAX = 0;
  uint uVar1;

  if ((uint)param_1[2] < param_2) {
    recovered_10005432(param_2);
    for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_EAX + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    *(undefined1 *)(extraout_EAX + param_1[1]) = 0;
    recovered_10003304((void *)*param_1);
    *param_1 = extraout_EAX;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4692U)
 */

void recovered_10005402(undefined4 *param_1,int param_2,uint param_3)

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
  recovered_1000526c(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x46c2U)
 */

void recovered_10005432(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_100032d2(param_1 + 1);
  *puVar1 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x46dcU)
 */

uint recovered_1000544c(undefined4 param_1,undefined4 param_2,int param_3,byte param_4,byte param_5)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_100054a5(param_2,*(uint *)(param_3 + 0x18),param_2,
                             (byte)*(undefined4 *)(param_3 + 0x24));
  uVar2 = recovered_100054a5(*(undefined4 *)(param_3 + 0x28),*(uint *)(param_3 + 0x1c),(uint)param_4
                             ,(byte)*(undefined4 *)(param_3 + 0x28));
  uVar3 = recovered_100054a5(*(undefined4 *)(param_3 + 0x2c),*(uint *)(param_3 + 0x20),(uint)param_5
                             ,(byte)*(undefined4 *)(param_3 + 0x2c));
  return uVar3 | uVar2 | uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4735U)
 */

int recovered_100054a5(undefined4 param_1,uint param_2,uint param_3,byte param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = ~(-1 << ((byte)param_2 & 0x1f));
  }
  return ((param_3 & 0xff) * uVar1 + 0x7f) / 0xff << (param_4 & 0x1f);
}


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4774U)
 */

void recovered_100054e4(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_10005d5c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_1000526c(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10005d5c

#undef PTR_DAT_10006028
#define PTR_DAT_10006028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47abU)
 */

void recovered_1000551b(void)

{
  unsigned char frame[64] = {0};

  char in_CL;

  if ((byte)(in_CL + 0x9fU) < 0x1a) {
    *(&PTR_DAT_10006028)[(byte)(in_CL + 0x9fU)] = 1;
  }
  return;
}

#undef PTR_DAT_10006028

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47c5U)
 */

uint recovered_10005535(undefined4 param_1,uint param_2,uint param_3,int param_4)

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
      uVar4 = recovered_100010ea(uVar2,uVar2,(uint)((ulonglong)lVar1 >> 0x20),param_2,0);
      uVar3 = (uint)uVar4;
    }
  }
  return uVar3;
}


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
#define local_14 (*(undefined1 * *)(frame + 16))
#define local_10 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4810U)
 */

void recovered_10005580(undefined4 *param_1,char param_2,uint param_3)

{
  unsigned char frame[68] = {0};


  local_14 = &DAT_10005d5c;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_14 = (undefined1 *)*param_1;
  }
  local_10 = param_1[1];
  recovered_10005706((int *)&local_14,param_2,param_3);
  return;
}

#undef DAT_10005d5c
#undef local_14
#undef local_10

#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x484cU)
 */

undefined4 * recovered_100055bc(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

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
  puVar3 = &DAT_10005d5c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_10005402(param_1,(int)(puVar3 + uVar2),uVar1);
  return param_1;
}

#undef DAT_10005d5c

#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48a6U)
 */

undefined1 recovered_10005616(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;

  iVar3 = param_1[1];
  puVar6 = &DAT_10005d5c;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*param_1;
  }
  iVar4 = recovered_10005336(param_2);
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

#undef DAT_10005d5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48f2U)
 */

void recovered_10005662(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005254((undefined4 *)(*param_1 + -0xc + param_1[1] * 0xc));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4916U)
 */

void recovered_10005686(int *param_1,undefined1 param_2)

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
    recovered_100053b2(param_1,uVar2);
  }
  recovered_10005390(param_1);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005d5c
#define DAT_10005d5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x496aU)
 */

void recovered_100056da(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10005d5c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10005810(param_1,(int)puVar1,param_2[1]);
  return;
}

#undef DAT_10005d5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4996U)
 */

uint recovered_10005706(int *param_1,char param_2,uint param_3)

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
 * Address: ((uintptr_t)pf_module_state+0x49c0U)
 */

int recovered_10005730(int *param_1,undefined4 *param_2)

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
    recovered_10005782(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_100054e4((undefined4 *)(iVar2 * 0xc + *param_1),param_2);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0xc + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a12U)
 */

void recovered_10005782(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    iVar3 = 0;
    pvVar1 = recovered_100057ee(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_100058c8((undefined4 *)((int)pvVar1 + iVar3),(undefined4 *)(*param_1 + iVar3));
      recovered_10005254((undefined4 *)(*param_1 + iVar3));
      iVar3 = iVar3 + 0xc;
    }
    recovered_10003304((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a7eU)
 */

void * recovered_100057ee(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_100032d2(param_1 * 0xc);
  }
  return pvVar1;
}


#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4aa0U)
 */

int * recovered_10005810(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[68] = {0};

  int iVar1;
  uint uVar2;

  if (param_3 != 0 && param_2 != 0) {
    local_14 = 0;
    uVar2 = recovered_10005352(param_1,param_2,&local_14);
    iVar1 = param_1[1];
    if ((char)uVar2 == '\0') {
      recovered_100053b2(param_1,iVar1 + param_3);
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
      recovered_100053b2(param_1,param_3 + iVar1);
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
 * Address: ((uintptr_t)pf_module_state+0x4b58U)
 */

void recovered_100058c8(undefined4 *param_1,undefined4 *param_2)

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
 * Address: ((uintptr_t)pf_module_state+0x4b7eU)
 */

void recovered_100058ee(int *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000590e(param_1);
  recovered_10003304((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b9eU)
 */

void recovered_1000590e(int *param_1)

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
    recovered_10005254((undefined4 *)(*param_1 + iVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4bd2U)
 */

void recovered_10005942(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = recovered_10005336(param_2);
  recovered_1000526c(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c04U)
 */

void recovered_10005974(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_100059c4(param_1,param_2);
    return;
  }
  recovered_10005a02(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4c54U)
 */

void recovered_100059c4(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_10005a02(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x4c92U)
 */

void recovered_10005a02(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10005a4c(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003304((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4cdcU)
 */

void * recovered_10005a4c(ulong param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_100032d2(param_1);
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4cf0U)
 */

void recovered_10005a60(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10003304((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4d0cU)
 */

int recovered_10005a7c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005a02(param_1,uVar4);
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

