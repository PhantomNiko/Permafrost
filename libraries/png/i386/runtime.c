/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008078
#define DAT_10008078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x0U)
 */

void recovered_10000bd0(void)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;

  DAT_10008078 = 0;
  recovered_10000be0(in_EAX);
  return;
}

#undef DAT_10008078

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_10008078
#define DAT_10008078 (*(char *)(((uintptr_t)pf_module_state + 0x74a8U)))
#undef DAT_1000807c
#define DAT_1000807c (*(int *)(((uintptr_t)pf_module_state + 0x74acU)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#define local_20 (*(undefined4 *)(frame + 152))
#define local_1c (*(uint *)(frame + 156))
#define local_18 (*(uint *)(frame + 160))
#define local_14 (*(uint *)(frame + 164))
#define auStack_a8 (*(uint (*)[34])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000be0(uint in_EAX)

{
  unsigned char frame[216] = {0};

  uint uVar1;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;

  local_20 = 0;
  if (DAT_10008078 == '\0') {
    DAT_1000807c = 0;
    local_1c = _DAT_0000608c;
    if (0xf < _DAT_0000608c) {
      local_1c = 0x10;
    }
    uVar3 = 0;
    in_EAX = 0;
    while (in_EAX != local_1c) {
      local_18 = uVar3;
      uVar6 = *(uint *)(&DAT_00006090 + in_EAX * 8);
      local_14 = in_EAX;
      uVar1 = *(uint *)(&DAT_00006094 + in_EAX * 8);
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
      in_EAX = local_14 + 1;
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
          in_EAX = *puVar2;
          auStack_a8[iVar5 * 2 + 3] = puVar2[1];
          auStack_a8[iVar5 * 2 + 2] = in_EAX;
          iVar5 = iVar5 + 1;
        }
        else {
          in_EAX = *puVar2 + puVar2[1];
          if (uVar6 < in_EAX) {
            in_EAX = in_EAX - auStack_a8[iVar5 * 2];
            auStack_a8[iVar5 * 2 + 1] = in_EAX;
          }
        }
        puVar2 = puVar2 + 2;
      }
    }
    puVar2 = auStack_a8 + 3;
    while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
      recovered_100022b3(puVar2[-1],*puVar2,(uint)&local_20);
      puVar2 = puVar2 + 2;
      in_EAX = extraout_EAX;
    }
    if (DAT_1000807c == 0) {
      if (_DAT_00006088 < 0x300001) {
        uVar3 = 0x4000000;
      }
      else {
        uVar3 = _DAT_00006088 & 0xfffffff0;
      }
      uVar6 = 0x3d00000;
      if (0x30001c < uVar3) {
        uVar6 = uVar3 - 0x300000;
      }
      recovered_100022b3(0x300000,uVar6,(uint)&local_20);
      in_EAX = extraout_EAX_00;
    }
    DAT_10008078 = '\x01';
  }
  return in_EAX;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_10008078
#undef DAT_1000807c
#undef _DAT_00006088
#undef _DAT_0000608c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a8

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1b0U)
 */

int recovered_10000d80(uint in_EAX)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000be0(in_EAX);
  iVar1 = 0;
  for (piVar2 = &DAT_1000807c; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000807c

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1daU)
 */

void recovered_10000daa(uint in_EAX)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000be0(in_EAX);
  for (piVar1 = &DAT_1000807c; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_1000807c

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x209U)
 */

int recovered_10000dd9(uint in_EAX)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_10000be0(in_EAX);
  iVar1 = 0;
  for (piVar2 = &DAT_1000807c; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_1000807c

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22dU)
 */

void recovered_10000dfd(uint in_EAX)

{
  unsigned char frame[64] = {0};

  int *piVar1;

  recovered_10000be0(in_EAX);
  for (piVar1 = &DAT_1000807c; *piVar1 != 0; piVar1 = (int *)(*piVar1 + 4)) {
  }
  return;
}

#undef DAT_1000807c

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x256U)
 */

uint * recovered_10000e26(uint in_EAX,int param_2)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  if (param_2 != 0) {
    recovered_10000be0(in_EAX);
    uVar4 = param_2 + 0xfU & 0xfffffff0;
    for (puVar3 = &DAT_1000807c; puVar3 = (uint *)*puVar3, puVar3 != (uint *)0x0;
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

#undef DAT_1000807c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2bbU)
 */

ulonglong recovered_10000e8b(ulonglong value,uint shift)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)shift) {
    if (shift < 0x40) {
      bVar1 = (byte)shift;
      if (shift < 0x20) {
        return CONCAT44(PF_PART4(value, 4) << (bVar1 & 0x1f) | (uint)value >> (0x20 - bVar1 & 0x1f),
                        (uint)value << (bVar1 & 0x1f));
      }
      return (ulonglong)((uint)value << (bVar1 - 0x20 & 0x1f)) << 0x20;
    }
    value = 0;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2faU)
 */

ulonglong recovered_10000eca(ulonglong value,uint shift)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (0 < (int)shift) {
    if (shift < 0x40) {
      bVar1 = (byte)shift;
      if (shift < 0x20) {
        return CONCAT44(PF_PART4(value, 4) >> (bVar1 & 0x1f),
                        (uint)value >> (bVar1 & 0x1f) | PF_PART4(value, 4) << (0x20 - bVar1 & 0x1f));
      }
      return (ulonglong)(PF_PART4(value, 4) >> (bVar1 - 0x20 & 0x1f));
    }
    value = 0;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x339U)
 */

ulonglong recovered_10000f09(uint param_1,uint param_2,uint param_3)

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

ulonglong recovered_10000f4a(ulonglong numerator,ulonglong denominator)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10000f6b((undefined4)numerator,PF_PART4(numerator, 4),(uint)denominator,
                             PF_PART4(denominator, 4),0);
  return uVar1;
}


#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x39bU)
 */

ulonglong recovered_10000f6b(undefined4 in_ECX,undefined4 in_EDX,uint param_3,uint param_4,
                            uint param_5)

{
  unsigned char frame[68] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar4 = 0;
    iVar6 = 0;
    local_14 = 0;
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    uVar3 = 0;
    uVar4 = 0;
    iVar6 = 0;
    for (uVar2 = 0x3f; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
      uVar7 = iVar6 << 1 | uVar4 >> 0x1f;
      uVar9 = recovered_10000eca(CONCAT44(in_EDX,in_ECX),uVar2 & 0xff);
      uVar1 = ((uint)uVar9 & 1) + uVar4 * 2;
      uVar10 = recovered_10000e8b(1,uVar2 & 0xff);
      uVar5 = 0;
      uVar8 = 0;
      uVar9 = 0;
      if (param_4 <= uVar7 && (uint)(uVar1 < param_3) <= uVar7 - param_4) {
        uVar5 = param_3;
        uVar8 = param_4;
        uVar9 = uVar10;
      }
      uVar3 = uVar3 | (uint)(uVar9 >> 0x20);
      local_14 = local_14 | (uint)uVar9;
      uVar4 = uVar1 - uVar5;
      iVar6 = (uVar7 - uVar8) - (uint)(uVar1 < uVar5);
    }
  }
  if (param_5 != 0) {
    *(uint *)param_5 = uVar4;
    *(int *)(param_5 + 4) = iVar6;
  }
  return CONCAT44(uVar3,local_14);
}

#undef local_14

#define local_14 (*(undefined4 *)(frame + 16))
#define local_10 (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x47cU)
 */

ulonglong recovered_1000104c(ulonglong a,ulonglong b)

{
  unsigned char frame[68] = {0};


  local_10 = 0;
  local_14 = 0;
  recovered_10000f6b((undefined4)a,PF_PART4(a, 4),(uint)b,PF_PART4(b, 4),(uint)&local_14);
  return CONCAT44(local_10,local_14);
}

#undef local_14
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4b4U)
 */

longlong recovered_10001084(longlong a,longlong b)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulonglong uVar3;

  if (b == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (int)PF_PART4(b, 4) >> 0x1f;
    uVar2 = (int)PF_PART4(a, 4) >> 0x1f;
    uVar3 = recovered_10000f6b(((uint)a ^ uVar2) - uVar2,
                               ((PF_PART4(a, 4) ^ uVar2) - uVar2) - (uint)(((uint)a ^ uVar2) < uVar2),
                               ((uint)b ^ uVar1) - uVar1,
                               ((PF_PART4(b, 4) ^ uVar1) - uVar1) - (uint)(((uint)b ^ uVar1) < uVar1),0);
    if (PF_PART4(a, 4) >> 0x1f != -uVar1) {
      uVar3 = CONCAT44(-(uint)((int)uVar3 != 0) - (int)(uVar3 >> 0x20),-(int)uVar3);
    }
  }
  return uVar3;
}


#define local_1c (*(int *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x526U)
 */

longlong recovered_100010f6(longlong a,longlong b)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (b == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    uVar3 = (int)PF_PART4(a, 4) >> 0x1f;
    uVar4 = (int)PF_PART4(b, 4) >> 0x1f;
    local_18 = 0;
    local_1c = 0;
    recovered_10000f6b(((uint)a ^ uVar3) - uVar3,
                       ((PF_PART4(a, 4) ^ uVar3) - uVar3) - (uint)(((uint)a ^ uVar3) < uVar3),
                       ((uint)b ^ uVar4) - uVar4,
                       ((PF_PART4(b, 4) ^ uVar4) - uVar4) - (uint)(((uint)b ^ uVar4) < uVar4),
                       (uint)&local_1c);
    iVar1 = -local_1c;
    iVar2 = -(uint)(local_1c != 0) - local_18;
    if (-1 < a) {
      iVar1 = local_1c;
      iVar2 = local_18;
    }
  }
  return CONCAT44(iVar2,iVar1);
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x598U)
 */

void recovered_10001168(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x59fU)
 */

int recovered_1000116f(int value)

{
  unsigned char frame[64] = {0};

  return (value ^ value >> 0x1f) - (value >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001180(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_100011a8(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_100011ce(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x626U)
 */

void * recovered_100011f6(void *out,void *data,ulong size)

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

void * recovered_10001217(void *out,void *data,ulong size)

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

void * recovered_1000125d(void *out,int value,ulong size)

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

void recovered_10001279(void *out,uint size)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  while (bVar1 = size != 0, size = size - 1, bVar1) {
    *(undefined1 *)out = 0;
    out = (void *)((int)out + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6bfU)
 */

void recovered_1000128f(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6d5U)
 */

int recovered_100012a5(void *left,void *right,ulong size)

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

uchar recovered_100012d4(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x717U)
 */

uchar recovered_100012e7(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x72aU)
 */

uchar recovered_100012fa(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x740U)
 */

uchar recovered_10001310(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x764U)
 */

uchar recovered_10001334(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x77dU)
 */

uchar recovered_1000134d(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x790U)
 */

int recovered_10001360(int param_1)

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

int recovered_10001373(int param_1)

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

ulong recovered_10001386(char *text)

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

int recovered_100013a1(char *left,char *right)

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

int recovered_100013c9(char *a,char *b)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_100013a1(a,b);
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x802U)
 */

char * recovered_100013d2(char *a,char *b)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = b[iVar2];
    a[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x81cU)
 */

int recovered_100013ec(int param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_10001386((char *)param_1);
    out = recovered_10001180(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_100011f6(out,(void *)param_1,uVar1 + 1);
      pvVar2 = out;
    }
  }
  return (int)pvVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x866U)
 */

char * recovered_10001436(char *s,int ch)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if (*s == '\0') {
      if ((char)ch != '\0') {
        s = (char *)0x0;
      }
      return s;
    }
    if ((char)ch == *s) break;
    s = s + 1;
  }
  return s;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x88aU)
 */

uint recovered_1000145a(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  uint uVar2;

  uVar2 = 0;
  while( true ) {
    if (s[uVar2] == 0) {
      return uVar2;
    }
    pcVar1 = recovered_10001436(set,(int)s[uVar2]);
    if (pcVar1 == (char *)0x0) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8c1U)
 */

char * recovered_10001491(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*s == 0) {
      return (char *)0x0;
    }
    pcVar1 = recovered_10001436(set,(int)*s);
    if (pcVar1 != (char *)0x0) break;
    s = s + 1;
  }
  return s;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x8efU)
 */

char * recovered_100014bf(char *s,char *part)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;

  if (*part != '\0') {
    for (; *s != '\0'; s = s + 1) {
      iVar3 = 0;
      do {
        pcVar1 = part + iVar3;
        if (*pcVar1 == '\0') {
          return s;
        }
        pcVar2 = s + iVar3;
        iVar3 = iVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    s = (char *)0x0;
  }
  return s;
}


#undef DAT_10007cd4
#define DAT_10007cd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7104U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x91cU)
 */

uchar * recovered_100014ec(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10007cd4;
}

#undef DAT_10007cd4

#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7438U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x926U)
 */

uchar ** recovered_100014f6(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10008008;
}

#undef PTR_DAT_10008008

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x930U)
 */

uint recovered_10001500(uint *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10007740
#define DAT_10007740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef _DAT_10007740
#define _DAT_10007740 (*(float *)(((uintptr_t)pf_module_state + 0x6b70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x947U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001517(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    lVar2 = lVar2 + lVar2;
  }
  for (uVar1 = (int)param_2 >> 0x1f & param_2; uVar1 != 0; uVar1 = uVar1 + 1) {
    lVar2 = lVar2 * (longdouble)_DAT_10007740;
  }
  return lVar2;
}

#undef DAT_10007740
#undef _DAT_10007740

#undef DAT_10007740
#define DAT_10007740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef _DAT_10007740
#define _DAT_10007740 (*(float *)(((uintptr_t)pf_module_state + 0x6b70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x971U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001541(double value,int *exponent)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  int iVar3;

  if (exponent != (int *)0x0) {
    *exponent = 0;
  }
  if ((value != 0.0) || (dVar2 = 0.0, NAN(value))) {
    dVar1 = -value;
    if (-value <= value) {
      dVar1 = value;
    }
    iVar3 = 0;
    for (; 1.0 <= dVar1; dVar1 = dVar1 * (double)_DAT_10007740) {
      iVar3 = iVar3 + 1;
    }
    for (; (0.0 < dVar1 && (dVar1 < (double)_DAT_10007740)); dVar1 = dVar1 + dVar1) {
      iVar3 = iVar3 + -1;
    }
    if (exponent != (int *)0x0) {
      *exponent = iVar3;
    }
    dVar2 = -dVar1;
    if (0.0 <= value) {
      dVar2 = dVar1;
    }
  }
  return dVar2;
}

#undef DAT_10007740
#undef _DAT_10007740

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x9ffU)
 */

double recovered_100015cf(double left,double right)

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

double recovered_10001621(double left,double right)

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

double recovered_100016aa(double value)

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

double recovered_100016f2(double value)

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


#undef DAT_10007740
#define DAT_10007740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef _DAT_10007740
#define _DAT_10007740 (*(float *)(((uintptr_t)pf_module_state + 0x6b70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xb7dU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000174d(double value)

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
      dVar1 = (value / dVar1 + dVar1) * (double)_DAT_10007740;
    }
  }
  return dVar1;
}

#undef DAT_10007740
#undef _DAT_10007740

#undef DAT_10007740
#define DAT_10007740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef DAT_10007744
#define DAT_10007744 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b74U)))
#undef DAT_10007748
#define DAT_10007748 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b78U)))
#undef DAT_1000774c
#define DAT_1000774c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b7cU)))
#undef DAT_10007750
#define DAT_10007750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b80U)))
#undef DAT_10007770
#define DAT_10007770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ba0U)))
#undef _DAT_10007740
#define _DAT_10007740 (*(float *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef _DAT_10007744
#define _DAT_10007744 (*(float *)(((uintptr_t)pf_module_state + 0x6b74U)))
#undef _DAT_10007748
#define _DAT_10007748 (*(float *)(((uintptr_t)pf_module_state + 0x6b78U)))
#undef _DAT_1000774c
#define _DAT_1000774c (*(float *)(((uintptr_t)pf_module_state + 0x6b7cU)))
#undef _DAT_10007750
#define _DAT_10007750 (*(float *)(((uintptr_t)pf_module_state + 0x6b80U)))
#undef _DAT_10007770
#define _DAT_10007770 (*(double *)(((uintptr_t)pf_module_state + 0x6ba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xbc7U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001797(double value)

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
    dVar3 = (double)_DAT_10007744;
  }
  else {
    iVar6 = 0;
    for (; (double)_DAT_10007748 < value; value = value * (double)_DAT_10007740) {
      iVar6 = iVar6 + 1;
    }
    for (; value < (double)_DAT_1000774c; value = value + value) {
      iVar6 = iVar6 + -1;
    }
    dVar4 = 1.0;
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    for (uVar5 = 1; uVar5 < 0x14; uVar5 = uVar5 + 2) {
      dVar3 = dVar1 / dVar4 + dVar3;
      dVar1 = dVar1 * dVar2;
      dVar4 = dVar4 + (double)_DAT_10007750;
    }
    dVar3 = dVar3 + dVar3 + (double)iVar6 * _DAT_10007770;
  }
  return dVar3;
}

#undef DAT_10007740
#undef DAT_10007744
#undef DAT_10007748
#undef DAT_1000774c
#undef DAT_10007750
#undef DAT_10007770
#undef _DAT_10007740
#undef _DAT_10007744
#undef _DAT_10007748
#undef _DAT_1000774c
#undef _DAT_10007750
#undef _DAT_10007770

#undef DAT_100077a0
#define DAT_100077a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xc6bU)
 */

longlong recovered_1000183b(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_100077a0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_100077a0

#undef DAT_10007754
#define DAT_10007754 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b84U)))
#undef DAT_10007758
#define DAT_10007758 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b88U)))
#undef DAT_1000775c
#define DAT_1000775c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b8cU)))
#undef _DAT_10007754
#define _DAT_10007754 (*(float *)(((uintptr_t)pf_module_state + 0x6b84U)))
#undef _DAT_10007758
#define _DAT_10007758 (*(float *)(((uintptr_t)pf_module_state + 0x6b88U)))
#undef _DAT_1000775c
#define _DAT_1000775c (*(float *)(((uintptr_t)pf_module_state + 0x6b8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcafU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000187f(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100018c1(value);
  dVar1 = dVar2 * dVar2;
  return ((dVar1 * dVar1 * dVar1) / (double)_DAT_1000775c +
         (dVar1 * dVar1) / (double)_DAT_10007758 + dVar1 / (double)_DAT_10007754 + 1.0) * dVar2;
}

#undef DAT_10007754
#undef DAT_10007758
#undef DAT_1000775c
#undef _DAT_10007754
#undef _DAT_10007758
#undef _DAT_1000775c

#undef DAT_10007778
#define DAT_10007778 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ba8U)))
#undef DAT_10007780
#define DAT_10007780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bb0U)))
#undef DAT_10007788
#define DAT_10007788 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bb8U)))
#undef DAT_10007790
#define DAT_10007790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bc0U)))
#undef _DAT_10007778
#define _DAT_10007778 (*(double *)(((uintptr_t)pf_module_state + 0x6ba8U)))
#undef _DAT_10007780
#define _DAT_10007780 (*(double *)(((uintptr_t)pf_module_state + 0x6bb0U)))
#undef _DAT_10007788
#define _DAT_10007788 (*(double *)(((uintptr_t)pf_module_state + 0x6bb8U)))
#undef _DAT_10007790
#define _DAT_10007790 (*(double *)(((uintptr_t)pf_module_state + 0x6bc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xcf1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100018c1(double value)

{
  unsigned char frame[64] = {0};

  for (; _DAT_10007778 < value; value = value + _DAT_10007790) {
  }
  for (; value < _DAT_10007780; value = value + _DAT_10007788) {
  }
  return value;
}

#undef DAT_10007778
#undef DAT_10007780
#undef DAT_10007788
#undef DAT_10007790
#undef _DAT_10007778
#undef _DAT_10007780
#undef _DAT_10007788
#undef _DAT_10007790

#undef DAT_10007760
#define DAT_10007760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b90U)))
#undef DAT_10007764
#define DAT_10007764 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b94U)))
#undef DAT_10007768
#define DAT_10007768 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b98U)))
#undef _DAT_10007760
#define _DAT_10007760 (*(float *)(((uintptr_t)pf_module_state + 0x6b90U)))
#undef _DAT_10007764
#define _DAT_10007764 (*(float *)(((uintptr_t)pf_module_state + 0x6b94U)))
#undef _DAT_10007768
#define _DAT_10007768 (*(float *)(((uintptr_t)pf_module_state + 0x6b98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd2fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100018ff(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100018c1(value);
  dVar1 = dVar1 * dVar1;
  return (dVar1 * dVar1 * dVar1) / (double)_DAT_10007768 +
         (dVar1 * dVar1) / (double)_DAT_10007764 + dVar1 * (double)_DAT_10007760 + 1.0;
}

#undef DAT_10007760
#undef DAT_10007764
#undef DAT_10007768
#undef _DAT_10007760
#undef _DAT_10007764
#undef _DAT_10007768

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xd6dU)
 */

double recovered_1000193d(double value)

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

float recovered_10001958(float left,float right)

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

longdouble recovered_100019b0(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001541((double)param_1,param_2);
  return (longdouble)(float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe03U)
 */

longdouble recovered_100019d3(float param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10001517((double)param_1,param_2);
  return (longdouble)(float)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe26U)
 */

float recovered_100019f6(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001621((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xe49U)
 */

float recovered_10001a19(float value)

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

float recovered_10001a67(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100016f2((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xeb3U)
 */

double recovered_10001a83(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_100016f2(value);
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

float recovered_10001adf(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001a83((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf2bU)
 */

float recovered_10001afb(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000174d((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf47U)
 */

float recovered_10001b17(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001797((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf63U)
 */

uint recovered_10001b33(double param_1)

{
  unsigned char frame[64] = {0};

  longlong lVar1;

  lVar1 = recovered_1000183b(param_1);
  return (uint)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf79U)
 */

float recovered_10001b49(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000187f((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xf95U)
 */

float recovered_10001b65(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100018ff((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0xfb1U)
 */

float recovered_10001b81(float value)

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

int recovered_10001b9c(char *s,char **end,int base)

{
  unsigned char frame[80] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;

  local_14 = base;
  pbVar4 = (byte *)s;
  while( true ) {
    bVar1 = *pbVar4;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar3 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar2 = pbVar4 + uVar3;
  local_1c = (byte *)s;
  if (base == 0x10) {
    local_14 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar4[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar2 = pbVar4 + uVar3 + 2;
    }
  }
  else if (base == 0) {
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
  else if (base - 0x25U < 0xffffffdd) {
    if (end == (char **)0x0) {
      return 0;
    }
    *end = s;
    return 0;
  }
  local_18 = 0;
  while( true ) {
    pbVar4 = pbVar2 + 1;
    uVar3 = recovered_10001c91((int)(char)*pbVar2);
    if (local_14 <= uVar3) break;
    local_18 = local_18 * local_14 + uVar3;
    pbVar2 = pbVar4;
    local_1c = pbVar4;
  }
  if (end != (char **)0x0) {
    *end = (char *)local_1c;
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

int recovered_10001c91(int in_ECX)

{
  unsigned char frame[64] = {0};

  int iVar1;
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
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
#define uStack_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x10f6U)
 */

uint recovered_10001cc6(char *s,char **end,int base)

{
  unsigned char frame[80] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;

  local_14 = base;
  pbVar4 = (byte *)s;
  while( true ) {
    bVar1 = *pbVar4;
    if ((0x17 < bVar1 - 9) || ((0x80001fU >> (bVar1 - 9 & 0x1f) & 1) == 0)) break;
    pbVar4 = pbVar4 + 1;
  }
  uVar3 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar2 = pbVar4 + uVar3;
  local_1c = (byte *)s;
  if (base == 0x10) {
    local_14 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar4[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar2 = pbVar4 + uVar3 + 2;
    }
  }
  else if (base == 0) {
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
  else if (base - 0x25U < 0xffffffdd) {
    if (end == (char **)0x0) {
      return 0;
    }
    *end = s;
    return 0;
  }
  local_18 = 0;
  while( true ) {
    pbVar4 = pbVar2 + 1;
    uVar3 = recovered_10001c91((int)(char)*pbVar2);
    if (local_14 <= uVar3) break;
    local_18 = local_18 * local_14 + uVar3;
    pbVar2 = pbVar4;
    local_1c = pbVar4;
  }
  if (end != (char **)0x0) {
    *end = (char *)local_1c;
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

#undef DAT_1000776c
#define DAT_1000776c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b9cU)))
#undef _DAT_1000776c
#define _DAT_1000776c (*(float *)(((uintptr_t)pf_module_state + 0x6b9cU)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x11ebU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001dbb(char *text,char **end)

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
    lVar7 = lVar7 * (longdouble)_DAT_1000776c + (longdouble)(int)(bVar3 - 0x30);
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
      lVar8 = lVar8 * (longdouble)_DAT_1000776c + (longdouble)(int)(bVar3 - 0x30);
      lVar9 = lVar9 * (longdouble)_DAT_1000776c;
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
        lVar7 = recovered_10001517((double)lVar7,iVar5 * local_14);
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

#undef DAT_1000776c
#undef _DAT_1000776c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x133fU)
 */

float recovered_10001f0f(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001dbb(text,end);
  return (float)dVar1;
}


#undef DAT_1000776c
#define DAT_1000776c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b9cU)))
#undef DAT_10007d02
#define DAT_10007d02 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7132U)))
#undef _DAT_1000776c
#define _DAT_1000776c (*(float *)(((uintptr_t)pf_module_state + 0x6b9cU)))
#define local_1c (*(int *)(frame + 72))
#define local_18 (*(ulong *)(frame + 76))
#define local_14 (*(char * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1361U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001f31(char *out,ulong capacity,char *format,void *arguments)

{
  unsigned char frame[132] = {0};

  char *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  int *piVar9;
  uint uVar10;

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
LAB_10001f94:
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
LAB_10001fc2:
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
switchD_10001fcd_caseD_65:
          if (local_18 < 2) break;
          *local_14 = '?';
          goto LAB_10001f94;
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
          recovered_10002226((int *)&local_14,&local_18,&local_1c,(uint *)(int)ROUND(dVar3),
                             (int *)0xa,0);
          if (1 < local_18) {
            *local_14 = '.';
            local_14 = local_14 + 1;
            local_18 = local_18 - 1;
          }
          arguments = (void *)((int)arguments + 8);
          dVar3 = dVar3 - (double)(int)ROUND(dVar3);
          iVar7 = 6;
          while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
            dVar4 = (double)_DAT_1000776c;
            iVar2 = (int)ROUND(dVar3 * dVar4);
            if (1 < local_18) {
              *local_14 = (char)iVar2 + '0';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            dVar3 = dVar3 * dVar4 - (double)iVar2;
          }
          local_1c = local_1c + 7;
          goto LAB_10001f9f;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_10001fcd_caseD_68;
        case 'p':
          puVar6 = *(uint **)arguments;
          recovered_100021e4((int *)&local_14,&local_18,&local_1c,(uint *)&DAT_10007d02);
          uVar10 = 0;
          piVar9 = (int *)0x10;
          goto LAB_1000219e;
        case 's':
          recovered_100021e4((int *)&local_14,&local_18,&local_1c,*(uint **)arguments);
          goto LAB_100021a7;
        case 'u':
          uVar10 = 0;
          piVar9 = (int *)0xa;
          goto LAB_10002199;
        case 'x':
          uVar10 = 0;
LAB_1000218b:
          piVar9 = (int *)0x10;
LAB_10002199:
          puVar6 = *(uint **)arguments;
          goto LAB_1000219e;
        default:
          if (cVar5 != 'I') {
            if (cVar5 == 'X') {
              uVar10 = 1;
              goto LAB_1000218b;
            }
            goto switchD_10001fcd_caseD_65;
          }
        case 'd':
        case 'i':
          puVar6 = *(uint **)arguments;
          if ((int)puVar6 < 0) {
            if (1 < local_18) {
              *local_14 = '-';
              local_14 = local_14 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = local_1c + 1;
            puVar6 = (uint *)-(int)puVar6;
          }
          uVar10 = 0;
          piVar9 = (int *)0xa;
LAB_1000219e:
          recovered_10002226((int *)&local_14,&local_18,&local_1c,puVar6,piVar9,uVar10);
LAB_100021a7:
          arguments = (void *)((int)arguments + 4);
          goto LAB_10001f9f;
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
LAB_10001f9f:
    format = format + 1;
  } while( true );
switchD_10001fcd_caseD_68:
  cVar5 = format[1];
  format = format + 1;
  goto LAB_10001fc2;
}

#undef DAT_1000776c
#undef DAT_10007d02
#undef _DAT_1000776c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x15f6U)
 */

void recovered_100021c6(int *in_ECX,uint *in_EDX,int *param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  if (1 < *in_EDX) {
    *(undefined1 *)*in_ECX = PF_PART1(param_4, 0);
    *in_ECX = *in_ECX + 1;
    *in_EDX = *in_EDX - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_10007cd9
#define str_10007cd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7109U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1614U)
 */

void recovered_100021e4(int *in_ECX,uint *in_EDX,int *out,uint *remaining)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10007cd9;
  if (remaining != (uint *)0x0) {
    pcVar1 = (char *)remaining;
  }
  for (; (char)*(uint *)pcVar1 != '\0'; pcVar1 = (char *)((int)pcVar1 + 1)) {
    recovered_100021c6(in_ECX,in_EDX,out,(uint *)(int)(char)*(uint *)pcVar1);
  }
  return;
}

#undef str_10007cd9

#undef str_10007ce0
#define str_10007ce0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7110U)))
#undef str_10007cf1
#define str_10007cf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7121U)))
#define local_18 (*(int * *)(frame + 49))
#define local_14 (*(uint * *)(frame + 53))
#define acStack_39 (*(char (*)[33])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1656U)
 */

void recovered_10002226(int *in_ECX,uint *in_EDX,int *param_3,uint *param_4,int *param_5,
                       uint param_6)

{
  unsigned char frame[105] = {0};

  uint *in_EDX_00;
  int iVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = str_10007ce0;
  if ((char)param_6 == '\0') {
    pcVar2 = str_10007cf1;
  }
  iVar1 = 0;
  local_18 = in_ECX;
  local_14 = in_EDX;
  do {
    acStack_39[iVar1 + 1] = pcVar2[(uint)param_4 % (uint)param_5];
    in_EDX_00 = local_14;
    iVar1 = iVar1 + 1;
    bVar3 = param_5 <= param_4;
    param_4 = (uint *)((uint)param_4 / (uint)param_5);
  } while (bVar3);
  while (iVar1 != 0) {
    recovered_100021c6(local_18,in_EDX_00,param_3,(uint *)(int)acStack_39[iVar1]);
    iVar1 = iVar1 + -1;
  }
  return;
}

#undef str_10007ce0
#undef str_10007cf1
#undef local_18
#undef local_14
#undef acStack_39

#define uStack00000010 (*(undefined1 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16c0U)
 */

int recovered_10002290(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10001f31(out,capacity,format,&uStack00000010);
  return iVar1;
}

#undef uStack00000010

#undef DAT_1000807c
#define DAT_1000807c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x16e3U)
 */

void recovered_100022b3(int in_ECX,uint in_EDX,uint param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;

  piVar3 = (int *)(in_ECX + 0xfU & 0xfffffff0);
  uVar2 = in_EDX - ((int)piVar3 - in_ECX);
  if ((((uint)((int)piVar3 - in_ECX) <= in_EDX && uVar2 != 0) && param_3 != 0) &&
     (uVar2 = uVar2 & 0xfffffff0, 0x1c < uVar2)) {
    *piVar3 = uVar2 - 0x10;
    piVar3[1] = 0;
    *(undefined1 *)(piVar3 + 2) = 1;
    if (DAT_1000807c == 0) {
      puVar1 = &DAT_1000807c;
    }
    else {
      puVar1 = (undefined4 *)(*(int *)param_3 + 4);
    }
    *puVar1 = piVar3;
    *(int **)param_3 = piVar3;
  }
  return;
}

#undef DAT_1000807c

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

undefined4 recovered_10002305(void)

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

#undef DAT_10008080
#define DAT_10008080 (*(int *)(((uintptr_t)pf_module_state + 0x74b0U)))
#undef DAT_10008084
#define DAT_10008084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x176aU)
 */

void recovered_1000233a(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  bool bVar3;

  if (param_1 != 0) {
    while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_10008080 != 0) {
          DAT_10008080 = DAT_10008080 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100023c1();
        }
        else {
          if (DAT_10008080 - 0x1ffU < 0xfffffe00) {
            recovered_100023c1();
          }
          pcVar1 = &DAT_10008084 + DAT_10008080;
          DAT_10008080 = DAT_10008080 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10008080
#undef DAT_10008084

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_10008080
#define DAT_10008080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x74b0U)))
#undef DAT_10008084
#define DAT_10008084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74b4U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x17f1U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100023c1(void)

{
  unsigned char frame[568] = {0};

  ulong uVar1;
  uint uVar2;
  byte in_CL;

  if ((DAT_10008080 == 0 & (in_CL ^ 1)) == 0) {
    if (DAT_10008080 == 0) {
      uVar1 = 0;
    }
    else {
      recovered_100011f6(local_208,&DAT_10008084,DAT_10008080);
      uVar1 = DAT_10008080;
    }
    local_208[uVar1] = 0;
    uVar2 = recovered_10002ff7();
    if (((char)uVar2 != '\0') && (_DAT_00006840 != (code *)0x0)) {
      (*_DAT_00006840)(local_208);
    }
    DAT_10008080 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_10008080
#undef DAT_10008084
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1867U)
 */

void recovered_10002437(void)

{
  unsigned char frame[64] = {0};

  recovered_100023c1();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1873U)
 */

void recovered_10002443(void)

{
  unsigned char frame[64] = {0};

  recovered_100023c1();
  return;
}


#undef DAT_10007cd8
#define DAT_10007cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7108U)))
#undef DAT_10007d05
#define DAT_10007d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7135U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x187eU)
 */

void recovered_1000244e(char *param_1,uchar *param_2)

{
  unsigned char frame[376] = {0};

  char *format;
  int iVar1;
  uchar *puVar2;

  format = &DAT_10007d05;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10007cd8;
  if (param_2 != (uchar *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10002290(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_1000233a((int)local_148,iVar1);
  }
  return;
}

#undef DAT_10007cd8
#undef DAT_10007d05
#undef local_148

#undef DAT_10007def
#define DAT_10007def (*(uint8_t *)(((uintptr_t)pf_module_state + 0x721fU)))
#undef str_10007d08
#define str_10007d08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7138U)))
#undef str_10007d2b
#define str_10007d2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x715bU)))
#undef str_10007d64
#define str_10007d64 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7194U)))
#undef str_10007d99
#define str_10007d99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71c9U)))
#undef str_10007dbf
#define str_10007dbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x18d4U)
 */

void recovered_100024a4(void)

{
  unsigned char frame[64] = {0};

  recovered_100024ea(str_10007d08);
  recovered_100024ea(str_10007d2b);
  recovered_100024ea(str_10007d64);
  recovered_100024ea(str_10007d99);
  recovered_100024ea(str_10007dbf);
  recovered_100024ea(&DAT_10007def);
  return;
}

#undef DAT_10007def
#undef str_10007d08
#undef str_10007d2b
#undef str_10007d64
#undef str_10007d99
#undef str_10007dbf

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x191aU)
 */

void recovered_100024ea(char *in_ECX)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (in_ECX != (char *)0x0) {
    uVar1 = recovered_10001386(in_ECX);
    recovered_1000233a((int)in_ECX,uVar1);
  }
  return;
}


#undef DAT_10007def
#define DAT_10007def (*(uint8_t *)(((uintptr_t)pf_module_state + 0x721fU)))
#undef str_10007df2
#define str_10007df2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7222U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1941U)
 */

void recovered_10002511(void)

{
  unsigned char frame[64] = {0};

  recovered_100024ea(str_10007df2);
  recovered_100024ea(&DAT_10007def);
  return;
}

#undef DAT_10007def
#undef str_10007df2

#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(code * *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x195fU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000252f(int param_1,int param_2,uint param_3,uchar param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10002443();
    uVar1 = recovered_10002ff7();
    if (((char)uVar1 != '\0') && (_DAT_00006844 != (code *)0x0)) {
      iVar2 = (*_DAT_00006844)(param_1,param_2,param_3,param_4);
      return iVar2 != 0;
    }
  }
  return '\0';
}

#undef DAT_00006844
#undef _DAT_00006844

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19aeU)
 */

uint recovered_1000257e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19b5U)
 */

void recovered_10002585(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19baU)
 */

uchar recovered_1000258a(void)

{
  unsigned char frame[64] = {0};

  return '\x01';
}


#undef DAT_10007d05
#define DAT_10007d05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7135U)))
#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
#undef str_10007e86
#define str_10007e86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72b6U)))
#undef str_10007e93
#define str_10007e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72c3U)))
#undef str_10007ea1
#define str_10007ea1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72d1U)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x19c1U)
 */

uint * recovered_10002591(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
    return (uint *)0x0;
  }
  iVar1 = recovered_100013a1((char *)param_1,str_10007e86);
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    iVar2 = recovered_100013a1((char *)param_1,str_10007e93);
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    else {
      iVar2 = recovered_100013a1((char *)param_1,str_10007ea1);
      if (iVar2 != 0) {
        puVar3 = recovered_10001180(800);
        if (puVar3 != (uint *)0x0) {
          recovered_1000125d(puVar3,0,800);
          *puVar3 = 0;
          pcVar4 = recovered_10001436((char *)param_2,0x72);
          bVar7 = true;
          bVar6 = true;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = recovered_10001436((char *)param_2,0x2b);
            bVar6 = true;
            if (pcVar4 == (char *)0x0) {
              pcVar4 = recovered_10001436((char *)param_2,0x61);
              bVar6 = pcVar4 != (char *)0x0;
            }
          }
          *(bool *)(puVar3 + 0x44) = bVar6;
          pcVar4 = recovered_10001436((char *)param_2,0x77);
          if ((pcVar4 == (char *)0x0) &&
             (pcVar4 = recovered_10001436((char *)param_2,0x61), pcVar4 == (char *)0x0)) {
            pcVar4 = recovered_10001436((char *)param_2,0x2b);
            bVar7 = pcVar4 != (char *)0x0;
          }
          *(bool *)((int)puVar3 + 0x111) = bVar7;
          pcVar4 = recovered_10001436((char *)param_2,0x61);
          *(bool *)((int)puVar3 + 0x112) = pcVar4 != (char *)0x0;
          puVar3[0x43] = 0xffffffff;
          recovered_10002290((char *)(puVar3 + 1),0xf1,&DAT_10007d05,param_1);
          recovered_1000125d(&local_1c,0,0xc);
          uVar5 = recovered_1000284c();
          if (uVar5 == 0) {
            if (*(char *)((int)puVar3 + 0x111) == '\0') {
              *(undefined4 *)PTR_DAT_10008000 = 2;
LAB_10002818:
              recovered_100011a8(puVar3);
              return (uint *)0x0;
            }
          }
          else {
            pcVar4 = recovered_10001436((char *)param_2,0x77);
            if (local_18 != 0 && pcVar4 == (char *)0x0) {
              if (*(char *)((int)puVar3 + 0x111) == '\x01') {
                uVar5 = recovered_1000287c((int)puVar3,local_18);
                if ((char)uVar5 == '\0') goto LAB_10002818;
                recovered_100011f6((void *)puVar3[0x3f],local_1c,local_18);
              }
              else {
                puVar3[0x3e] = (uint)local_1c;
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
        goto LAB_100027ed;
      }
      uVar5 = 3;
    }
  }
  puVar3 = recovered_10001180(800);
  if (puVar3 != (uint *)0x0) {
    recovered_1000125d(puVar3,0,800);
    *puVar3 = uVar5;
    *(bool *)(puVar3 + 0x44) = iVar1 == 0;
    *(bool *)((int)puVar3 + 0x111) = iVar1 != 0;
    puVar3[0x43] = 0xffffffff;
    recovered_10002290((char *)(puVar3 + 1),0xf1,&DAT_10007d05,param_1);
    return puVar3;
  }
LAB_100027ed:
  *(undefined4 *)PTR_DAT_10008000 = 0xc;
  return (uint *)0x0;
}

#undef DAT_10007d05
#undef PTR_DAT_10008000
#undef str_10007e86
#undef str_10007e93
#undef str_10007ea1
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

uint recovered_1000284c(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_10002ff7();
  if (((char)uVar1 == '\0') || (_DAT_00006834 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006834)();
  }
  return uVar1;
}

#undef DAT_00006834
#undef _DAT_00006834

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1cacU)
 */

uint recovered_1000287c(int in_ECX,uint in_EDX)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 unaff_EBX = 0;
  uint uVar4;

  if (in_ECX != 0) {
    uVar2 = *(uint *)(in_ECX + 0x104);
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (in_EDX <= uVar2) {
      return uVar4;
    }
    uVar1 = 0x100;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while (uVar2 < in_EDX);
    pvVar3 = recovered_100011ce(*(void **)(in_ECX + 0xfc),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(in_ECX + 0xfc) = pvVar3;
      *(uint *)(in_ECX + 0x104) = uVar2;
      *(void **)(in_ECX + 0xf8) = pvVar3;
      return uVar4;
    }
    *(undefined4 *)PTR_DAT_10008000 = 0xc;
    *(undefined1 *)(in_ECX + 0x115) = 1;
  }
  return 0;
}

#undef PTR_DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d22U)
 */

void recovered_100028f2(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_10002910(param_3);
  }
  recovered_10002591(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d40U)
 */

uint recovered_10002910(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002c47(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      recovered_100011a8((void *)param_1[0x3f]);
    }
    recovered_100011a8(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1d80U)
 */

int recovered_10002950(int param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    for (iVar1 = 0; puVar3 = (undefined1 *)param_1, iVar4 = param_2, iVar1 != param_3;
        iVar1 = iVar1 + 1) {
      while (iVar4 != 0) {
        uVar2 = recovered_100029c3(param_4);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1df3U)
 */

uint recovered_100029c3(int *param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
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
LAB_10002a5d:
        param_1[199] = uVar3 + 1;
        return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
      }
      uVar1 = recovered_1000252f((int)param_1 + 0x116,0x1fe,((uintptr_t)pf_module_state+0x7108U),'\0');
      if (uVar1 != '\0') {
        uVar2 = recovered_10001386((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10002a5d;
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1ed4U)
 */

int recovered_10002aa4(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulong size;
  int iVar3;

  iVar3 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     ((param_4 != (uint *)0x0 && (*(char *)((int)param_4 + 0x111) == '\x01')))) {
    size = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_1000233a(param_1,size);
      param_4[0x42] = param_4[0x42] + size;
      iVar3 = param_3;
    }
    else {
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar1 = param_4[0x42];
      }
      else {
        uVar1 = param_4[0x40];
        param_4[0x42] = uVar1;
      }
      uVar1 = recovered_1000287c((int)param_4,uVar1 + size);
      if ((char)uVar1 != '\0') {
        uVar1 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
          recovered_1000125d((void *)(uVar1 + param_4[0x3f]),0,uVar2 - uVar1);
          uVar2 = param_4[0x42];
        }
        recovered_100011f6((void *)(uVar2 + param_4[0x3f]),(void *)param_1,size);
        uVar1 = size + param_4[0x42];
        param_4[0x42] = uVar1;
        if (param_4[0x40] < uVar1) {
          param_4[0x40] = uVar1;
        }
        *(undefined2 *)((int)param_4 + 0x113) = 1;
        iVar3 = param_3;
      }
    }
  }
  return iVar3;
}


#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x1fdcU)
 */

uint recovered_10002bac(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10002bbb;
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
LAB_10002bbb:
  *(undefined4 *)PTR_DAT_10008000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10008000

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2055U)
 */

uint recovered_10002c25(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_10008000

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2077U)
 */

uint recovered_10002c47(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    uVar1 = recovered_10002e06();
    if (uVar1 == 0) {
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

uchar recovered_10002ca8(int param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  if (param_1 == 0) {
    uVar1 = '\0';
  }
  else {
    uVar1 = *(uchar *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x20efU)
 */

uchar recovered_10002cbf(int param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  if (param_1 == 0) {
    uVar1 = '\0';
  }
  else {
    uVar1 = *(uchar *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2106U)
 */

void recovered_10002cd6(int param_1)

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

uint recovered_10002cf1(uint param_1,int param_2)

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
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
#define uStack_10 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2150U)
 */

uint recovered_10002d20(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    uStack_10 = 0x16;
  }
  else {
    uVar1 = recovered_10002d51();
    if (uVar1 != 0) {
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

uint recovered_10002d51(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_10002ff7();
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
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7430U)))
#define local_1c (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x21acU)
 */

uint recovered_10002d7c(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10008000 = 0x16;
  }
  else {
    recovered_1000125d(local_1c,0,0xc);
    uVar1 = recovered_1000284c();
    if (uVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar1 = recovered_10002e06();
      uVar2 = 5;
      if ((uVar1 != 0) && (uVar1 = recovered_10002d51(), uVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)PTR_DAT_10008000 = uVar2;
  }
  return 0xffffffff;
}

#undef PTR_DAT_10008000
#undef local_1c

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2236U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10002e06(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_10002ff7();
  if (((char)uVar1 == '\0') || (_DAT_00006838 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*_DAT_00006838)();
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

uint recovered_10002e39(int param_1,uint *param_2,int *param_3)

{
  unsigned char frame[76] = {0};

  uint uVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (int *)0x0 && (param_2 != (uint *)0x0 && param_1 != 0)) {
    recovered_1000125d(&local_1c,0,0xc);
    uVar1 = recovered_1000284c();
    if (uVar1 != 0) {
      out = recovered_10001180(local_18 + (local_18 == 0));
      if (out == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_100011f6(out,local_1c,local_18);
        uVar2 = local_18;
      }
      *param_2 = (uint)out;
      *param_3 = uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return 0;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x22fbU)
 */

uchar recovered_10002ecb(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10002e06();
    bVar2 = uVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2332U)
 */

uint recovered_10002f02(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2339U)
 */

void recovered_10002f09(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x233eU)
 */

uint recovered_10002f0e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2345U)
 */

uint recovered_10002f15(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x234cU)
 */

uint recovered_10002f1c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2353U)
 */

int recovered_10002f23(int param_1,char param_2,int param_3)

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

int recovered_10002f47(char *left,char *right,ulong size)

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


#undef DAT_10007e15
#define DAT_10007e15 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7245U)))
#undef str_10007e18
#define str_10007e18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7248U)))
#undef str_10007e25
#define str_10007e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7255U)))
#undef str_10007e2f
#define str_10007e2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x725fU)))
#undef str_10007e43
#define str_10007e43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7273U)))
#undef str_10007e51
#define str_10007e51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7281U)))
#undef str_10007e63
#define str_10007e63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7293U)))
#undef str_10007e6f
#define str_10007e6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x729fU)))
#undef str_10007e80
#define str_10007e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x23aaU)
 */

char * recovered_10002f7a(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10007e15;
    break;
  case 2:
    pcVar1 = str_10007e18;
    break;
  case 5:
    pcVar1 = str_10007e25;
    break;
  case 9:
    pcVar1 = str_10007e2f;
    break;
  case 0xc:
    pcVar1 = str_10007e43;
    break;
  case 0xd:
    pcVar1 = str_10007e51;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10007e63;
    }
    if (param_1 == 0x16) {
      return str_10007e6f;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10007e80;
  }
  return pcVar1;
}

#undef DAT_10007e15
#undef str_10007e18
#undef str_10007e25
#undef str_10007e2f
#undef str_10007e43
#undef str_10007e51
#undef str_10007e63
#undef str_10007e6f
#undef str_10007e80

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2405U)
 */

uint recovered_10002fd5(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x240cU)
 */

uint recovered_10002fdc(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10008284
#define DAT_10008284 (*(int *)(((uintptr_t)pf_module_state + 0x76b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2414U)
 */

void recovered_10002fe4(void)

{
  unsigned char frame[64] = {0};

  DAT_10008284 = DAT_10008284 + 1;
  return;
}

#undef DAT_10008284

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

uint recovered_10002ff7(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
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

void recovered_10003030(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x246dU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


#define unaff_retaddr (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x246fU)
 */

uint recovered_1000303f(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint unaff_EBX = 0;
  uint unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;

  *param_1 = unaff_EBX;
  param_1[1] = unaff_ESI;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_EBP;
  param_1[4] = (uint)&param_1;
  param_1[5] = unaff_retaddr;
  return 0;
}

#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2490U)
 */

void recovered_10003060(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x24b2U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_100030c3
#define DAT_100030c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24f3U)))
#undef DAT_10007ed0
#define DAT_10007ed0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7300U)))
#define local_44 (*(uint (*)[6])(frame + 152))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x24b6U)
 */

uint recovered_10003086(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100030f0;
  local_28 = &DAT_10007ed0;
  local_20 = &DAT_100030c3;
  local_44[1] = 1;
  recovered_1000349a(local_44);
  recovered_10001168();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_100030c3
#undef DAT_10007ed0
#undef local_44
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_cc
#undef local_1c
#undef auStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2520U)
 */

uint recovered_100030f0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2523U)
 */

uint recovered_100030f3(uint *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10003110(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003086();
}


#undef DAT_10008288
#define DAT_10008288 (*(void * *)(((uintptr_t)pf_module_state + 0x76b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2540U)
 */

void * recovered_10003110(void *object)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (object == (void *)0x0) {
    return (void *)0x0;
  }
  *(void **)((int)object + 8) = DAT_10008288;
  *(undefined1 *)((int)object + 0x18) = 0;
  DAT_10008288 = object;
  pvVar1 = (void *)recovered_100033a8((int)object);
  return pvVar1;
}

#undef DAT_10008288

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2562U)
 */

void * recovered_10003132(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10001180(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001168();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x258bU)
 */

void * recovered_1000315b(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10003132(size);
  return pvVar1;
}


#undef DAT_10007ee0
#define DAT_10007ee0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7310U)))
#undef LAB_100031b8
#define LAB_100031b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25e8U)))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(uint (*)[6])(frame + 152))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2594U)
 */

void recovered_10003164(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100030f0;
  local_28 = &DAT_10007ee0;
  local_20 = &LAB_100031b8;
  local_44[1] = 1;
  recovered_1000349a(local_44);
  recovered_100011a8(data);
  recovered_100034af(local_44);
  return;
}

#undef DAT_10007ee0
#undef LAB_100031b8
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_2c
#undef local_28
#undef auStack_18
#undef local_24
#undef local_20

#undef DAT_10007ef0
#define DAT_10007ef0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7320U)))
#undef LAB_1000322b
#define LAB_1000322b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x265bU)))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_44 (*(uint (*)[6])(frame + 152))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2607U)
 */

void recovered_100031d7(void *data)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100030f0;
  local_28 = &DAT_10007ef0;
  local_20 = &LAB_1000322b;
  local_44[1] = 1;
  recovered_1000349a(local_44);
  recovered_100011a8(data);
  recovered_100034af(local_44);
  return;
}

#undef DAT_10007ef0
#undef LAB_1000322b
#undef auStackY_cc
#undef local_44
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_18
#undef local_1c

#undef DAT_10007f00
#define DAT_10007f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7330U)))
#undef LAB_1000329e
#define LAB_1000329e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26ceU)))
#define local_44 (*(uint (*)[6])(frame + 152))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x267aU)
 */

void recovered_1000324a(void *pointer,uint size)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100030f0;
  local_28 = &DAT_10007f00;
  local_20 = &LAB_1000329e;
  local_44[1] = 1;
  recovered_1000349a(local_44);
  recovered_100011a8(pointer);
  recovered_100034af(local_44);
  return;
}

#undef DAT_10007f00
#undef LAB_1000329e
#undef local_44
#undef auStackY_cc
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStack_18

#undef DAT_10007f10
#define DAT_10007f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7340U)))
#undef LAB_10003311
#define LAB_10003311 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2741U)))
#define local_44 (*(uint (*)[6])(frame + 152))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x26edU)
 */

void recovered_100032bd(void *pointer,uint size)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100030f0;
  local_28 = &DAT_10007f10;
  local_20 = &LAB_10003311;
  local_44[1] = 1;
  recovered_1000349a(local_44);
  recovered_100011a8(pointer);
  recovered_100034af(local_44);
  return;
}

#undef DAT_10007f10
#undef LAB_10003311
#undef local_44
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef auStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2760U)
 */

uint recovered_10003330(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2767U)
 */

uint recovered_10003337(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2776U)
 */

void recovered_10003346(uchar *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2781U)
 */

void recovered_10003351(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2786U)
 */

void * recovered_10003356(uint size)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size_00;
  bool bVar3;

  size_00 = size + 0x1c + (uint)(size == 0);
  puVar1 = recovered_10001180(size_00);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003086();
  }
  puVar2 = puVar1;
  while (bVar3 = size_00 != 0, size_00 = size_00 - 1, bVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27bbU)
 */

void recovered_1000338b(void *object)

{
  unsigned char frame[64] = {0};

  if (object != (void *)0x0) {
    recovered_100011a8((void *)((int)object + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27d8U)
 */

int recovered_100033a8(int in_ECX)

{
  unsigned char frame[64] = {0};

  return in_ECX + 0x1c;
}


#undef DAT_10008288
#define DAT_10008288 (*(void * *)(((uintptr_t)pf_module_state + 0x76b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x27e0U)
 */

void recovered_100033b0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  void *buffer;

  buffer = DAT_10008288;
  if (DAT_10008288 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_10008288 + 8);
    DAT_10008288 = *(void **)((int)DAT_10008288 + 8);
    *puVar1 = 0;
    if (*(char *)((int)buffer + 0x18) == '\0') {
      if (*(code **)((int)buffer + 4) != (code *)0x0) {
        (**(code **)((int)buffer + 4))((int)buffer + 0x1c);
      }
      recovered_100011a8(buffer);
    }
  }
  return;
}

#undef DAT_10008288

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x281eU)
 */

void recovered_100033ee(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  *(uint *)(param_1 + -0x1c) = param_2;
  *(uint *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  recovered_1000341a(param_1 + -0x1c);
  return;
}


#undef DAT_1000828c
#define DAT_1000828c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76bcU)))
#define local_1c (*(undefined4 *)(frame + 16))
#define local_18 (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x284aU)
 */

void recovered_1000341a(int in_ECX)

{
  unsigned char frame[76] = {0};

  uint uVar1;
  undefined4 *in_ECX_00;

  in_ECX_00 = &DAT_1000828c;
  do {
    in_ECX_00 = (undefined4 *)*in_ECX_00;
    if (in_ECX_00 == (undefined4 *)0x0) goto LAB_1000346b;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    uVar1 = recovered_1000388d((int)in_ECX_00,&local_1c);
  } while (((char)uVar1 == '\0') || (PF_PART1(local_1c, 2) != '\x01'));
  *(undefined4 **)(in_ECX + 0xc) = in_ECX_00;
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  recovered_1000350f(in_ECX);
LAB_1000346b:
                    /* WARNING: Subroutine does not return */
  recovered_10003086();
}

#undef DAT_1000828c
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10008288
#define DAT_10008288 (*(int *)(((uintptr_t)pf_module_state + 0x76b8U)))
#undef DAT_1000828c
#define DAT_1000828c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x76bcU)))
#define puStack_8 (*(undefined4 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28a0U)
 */

void recovered_10003470(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  in_ECX = DAT_10008288;
  if (DAT_10008288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003086();
  }
  *(undefined1 *)(DAT_10008288 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  recovered_1000341a(in_ECX);
  *puStack_8 = DAT_1000828c;
  DAT_1000828c = puStack_8;
  return;
}

#undef DAT_10008288
#undef DAT_1000828c
#undef puStack_8

#undef DAT_1000828c
#define DAT_1000828c (*(uint * *)(((uintptr_t)pf_module_state + 0x76bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28caU)
 */

uint recovered_1000349a(uint *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = (uint)DAT_1000828c;
  DAT_1000828c = param_1;
  return (uint)param_1;
}

#undef DAT_1000828c

#undef DAT_1000828c
#define DAT_1000828c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x28dfU)
 */

void recovered_100034af(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  uint *puVar2;

  puVar1 = DAT_1000828c;
  if (DAT_1000828c == param_1) {
    puVar2 = (uint *)&DAT_1000828c;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (uint *)0x0) {
        return;
      }
      puVar1 = (uint *)*puVar2;
    } while ((uint *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1000828c

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2908U)
 */

void recovered_100034d8(int a4)

{
  unsigned char frame[64] = {0};

  recovered_1000341a(a4);
                    /* WARNING: Subroutine does not return */
  recovered_10003086();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2916U)
 */

void recovered_100034e6(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003086();
}


#undef DAT_1000828c
#define DAT_1000828c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x76bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2921U)
 */

uint recovered_100034f1(int param_1)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  if (DAT_1000828c != (undefined4 *)0x0) {
    DAT_1000828c = (undefined4 *)*DAT_1000828c;
  }
  recovered_1000350f(param_1);
  return extraout_EAX;
}

#undef DAT_1000828c

#undef DAT_1000828c
#define DAT_1000828c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x76bcU)))
#define local_1c (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 32))
#define iStack_28 (*(int *)(frame + 16))
#define local_14 (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x293fU)
 */

void recovered_1000350f(int in_ECX)

{
  unsigned char frame[88] = {0};

  undefined4 *puVar1;
  undefined4 uVar2;

  while( true ) {
    puVar1 = DAT_1000828c;
    if (DAT_1000828c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003086();
    }
    if (DAT_1000828c == *(undefined4 **)(in_ECX + 0xc)) break;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    recovered_1000388d((int)DAT_1000828c,&local_1c);
    if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
      puVar1[2] = in_ECX;
      puVar1[3] = 0;
      uVar2 = local_18;
      goto LAB_10003577;
    }
    DAT_1000828c = (undefined4 *)*puVar1;
  }
  DAT_1000828c[2] = in_ECX;
  puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
LAB_10003577:
  puVar1[1] = uVar2;
  recovered_10003030((int)puVar1);
                    /* WARNING: Subroutine does not return */
  recovered_100034f1(iStack_28);
}

#undef DAT_1000828c
#undef local_1c
#undef local_18
#undef iStack_28
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29b2U)
 */

void recovered_10003582(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100034f1(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29c3U)
 */

uint recovered_10003593(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29caU)
 */

void recovered_1000359a(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003086();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x29d5U)
 */

int recovered_100035a5(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;

  iVar2 = 0;
  if (param_3 != (uint *)0x0 && param_1 != (int *)0x0) {
    iVar2 = (int)param_1 + *(int *)(*param_1 + -8);
    uVar1 = recovered_100035db(*(undefined4 **)(*param_1 + -4),param_3);
    if (uVar1 == '\0') {
      iVar2 = 0;
    }
  }
  return iVar2;
}


#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a0bU)
 */

uchar recovered_100035db(undefined4 *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;

  if (in_EDX == (undefined4 *)0x0) {
    return '\x01';
  }
  do {
    puVar5 = in_ECX;
    if (puVar5 == in_EDX) {
      return puVar5 != (undefined4 *)0x0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      return '\0';
    }
    iVar3 = puVar5[1];
    iVar4 = in_EDX[1];
    if (iVar4 == 0 || iVar3 == 0) {
      if (iVar3 == iVar4) {
        return '\x01';
      }
    }
    else {
      iVar6 = 0;
      do {
        cVar1 = *(char *)(iVar3 + iVar6);
        cVar2 = *(char *)(iVar4 + iVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) {
            return '\x01';
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (cVar1 == cVar2);
    }
    in_ECX = (undefined4 *)0x0;
    if ((undefined *)*puVar5 == &DAT_10008060) {
      in_ECX = (undefined4 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_10008060

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a72U)
 */

void recovered_10003642(void)

{
  unsigned char frame[64] = {0};

  recovered_10001168();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a7bU)
 */

uint recovered_1000364b(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a82U)
 */

uchar recovered_10003652(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2a95U)
 */

int recovered_10003665(int value)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((value - 9U < 0x18) && ((0x80001bU >> (value - 9U & 0x1f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(value == 0xb);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2abcU)
 */

int recovered_1000368c(int value)

{
  unsigned char frame[64] = {0};

  return (uint)((value & 0xffffffdfU) - 0x41 < 6 || value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2adeU)
 */

uchar recovered_100036ae(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2af3U)
 */

uchar recovered_100036c3(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b08U)
 */

uchar recovered_100036d8(uint param_1,uint param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)(param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b42U)
 */

uchar recovered_10003712(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10007740
#define DAT_10007740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef DAT_10007760
#define DAT_10007760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b90U)))
#undef _DAT_10007740
#define _DAT_10007740 (*(float *)(((uintptr_t)pf_module_state + 0x6b70U)))
#undef _DAT_10007760
#define _DAT_10007760 (*(float *)(((uintptr_t)pf_module_state + 0x6b90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b57U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10003727(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100016aa(value);
  if ((double)_DAT_10007740 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10007760 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef DAT_10007740
#undef DAT_10007760
#undef _DAT_10007740
#undef _DAT_10007760

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
#define local_14 (*(uint *)(frame + 24))
#define uStack_1c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2b9fU)
 */

ulonglong recovered_1000376f(uchar *param_1,uint *param_2,uint param_3)

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
    if ((0x17 < uVar3 - 9) || ((0x80001fU >> (uVar3 - 9 & 0x1f) & 1) == 0)) goto LAB_100037a7;
  }
  uVar3 = (uint)DAT_00000000;
  pbVar7 = (byte *)0x0;
LAB_100037a7:
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
  if (param_2 != (uint *)0x0) {
    if (iVar4 != 0) {
      param_1 = pbVar7 + iVar4;
    }
    *param_2 = (uint)param_1;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cb4U)
 */

longlong recovered_10003884(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_1000376f((uchar *)s,(uint *)end,base);
  return uVar1;
}


#undef DAT_10007894
#define DAT_10007894 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cc4U)))
#define local_24 (*(byte * *)(frame + 16))
#define local_20 (*(uint *)(frame + 20))
#define local_1c (*(uint *)(frame + 24))
#define local_18 (*(byte * *)(frame + 28))
#define local_14 (*(byte * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2cbdU)
 */

uint recovered_1000388d(int in_ECX,uint *context)

{
  unsigned char frame[84] = {0};

  uchar uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *in_EDX_00;
  byte *pbVar6;
  uint *in_EDX;
  int iVar7;
  bool bVar8;
  bool bVar9;

  pbVar6 = *(byte **)(in_ECX + 0x1c);
  if (pbVar6 != (byte *)0x0) {
    local_14 = pbVar6 + 1;
    if (*pbVar6 != 0xff) {
      recovered_10003a2b((uint)*pbVar6,(int *)&local_14);
    }
    pbVar6 = local_14 + 1;
    bVar5 = *local_14;
    if (bVar5 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar6;
      uVar2 = recovered_10003adf(&local_14);
      local_18 = local_14 + uVar2;
      pbVar6 = local_14;
    }
    local_14 = pbVar6 + 1;
    uVar2 = recovered_10003adf(&local_14);
    iVar7 = *(int *)(in_ECX + 4);
    if (0 < iVar7) {
      local_1c = (uint)(ushort)bVar5;
      pbVar6 = local_14 + uVar2;
      while (local_14 < pbVar6) {
        uVar2 = recovered_10003adf(&local_14);
        uVar3 = recovered_10003adf(&local_14);
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          *(undefined2 *)context = 1;
          *(undefined1 *)((int)context + 2) = 0;
          context[1] = uVar2;
          context[2] = 0;
          if (uVar3 == 0) {
            *(undefined1 *)((int)context + 1) = 1;
            return 0;
          }
          local_24 = pbVar6 + (uVar3 - 1);
          bVar9 = local_18 != (byte *)0x0;
          uVar2 = local_1c & 0xf;
          bVar5 = (byte)uVar2;
          iVar7 = 0x40;
          do {
            bVar8 = iVar7 == 0;
            iVar7 = iVar7 + -1;
            if (bVar8) {
              return 0;
            }
            uVar3 = recovered_10003b2b(&local_24);
            pbVar6 = local_24;
            uVar4 = recovered_10003b2b(&local_24);
            local_20 = uVar3;
            if (uVar3 == 0) {
              *(undefined1 *)((int)context + 1) = 1;
            }
            else if (0 < (int)uVar3) {
              in_EDX = (uint *)0x0;
              if (((~(byte)(0x1c1d >> bVar5) | ~(bVar5 < 0xd && bVar9)) & 1) == 0) {
                local_14 = local_18 + *(int *)(&DAT_10007894 + uVar2 * 4) * uVar3;
                in_EDX = recovered_10003a2b(local_1c,(int *)&local_14);
              }
              uVar1 = recovered_100035db(in_EDX_00,in_EDX);
              if (uVar1 != '\0') {
                *(undefined1 *)((int)context + 2) = 1;
                context[2] = local_20;
                return CONCAT31((int3)((uint)context >> 8),1);
              }
            }
            if (uVar4 == 0) {
              return 0;
            }
            local_24 = pbVar6 + uVar4;
          } while( true );
        }
      }
    }
  }
  *(undefined2 *)context = 0;
  *(undefined1 *)((int)context + 2) = 0;
  context[1] = 0;
  context[2] = 0;
  return 0;
}

#undef DAT_10007894
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2e5bU)
 */

uint * recovered_10003a2b(uint in_ECX,int *in_EDX)

{
  unsigned char frame[64] = {0};

  byte *in_ECX_00;
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;

  puVar3 = (uint *)0x0;
  if (in_ECX == 0xff) {
    return (uint *)0x0;
  }
  if (0xc < (in_ECX & 0xf)) {
    return (uint *)0x0;
  }
  in_ECX_00 = (byte *)*in_EDX;
  switch((uintptr_t)(in_ECX & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    puVar3 = (uint *)recovered_10003b0a(in_ECX_00,4);
    pbVar2 = in_ECX_00 + 4;
    break;
  case 1:
    puVar3 = (uint *)recovered_10003adf(in_EDX);
    goto LAB_10003ab8;
  case 2:
    puVar3 = (uint *)recovered_10003b0a(in_ECX_00,2);
    goto LAB_10003ab0;
  case 4:
  case 0xc:
    puVar3 = (uint *)recovered_10003b0a(in_ECX_00,8);
    pbVar2 = in_ECX_00 + 8;
    break;
  default:
    goto switchD_10003a59_caseD_5;
  case 9:
    puVar3 = (uint *)recovered_10003b2b(in_EDX);
    goto LAB_10003ab8;
  case 10:
    uVar1 = recovered_10003b0a(in_ECX_00,2);
    puVar3 = (uint *)((int)(short)uVar1 & 0xffff0000U | uVar1);
LAB_10003ab0:
    pbVar2 = in_ECX_00 + 2;
  }
  *in_EDX = (int)pbVar2;
LAB_10003ab8:
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)((int)puVar3 + (int)in_ECX_00);
  }
  if (((char)in_ECX < '\0') && (puVar3 != (uint *)0x0)) {
    puVar3 = (uint *)*puVar3;
  }
switchD_10003a59_caseD_5:
  return puVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f0fU)
 */

uint recovered_10003adf(undefined4 *in_ECX)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;

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

uint recovered_10003b0a(byte *in_ECX,int in_EDX)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  bool bVar3;

  bVar2 = 0;
  uVar1 = 0;
  while (bVar3 = in_EDX != 0, in_EDX = in_EDX + -1, bVar3) {
    uVar1 = uVar1 | (uint)*in_ECX << (bVar2 & 0x1f);
    bVar2 = bVar2 + 8;
    in_ECX = in_ECX + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2f5bU)
 */

uint recovered_10003b2b(undefined4 *in_ECX)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
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


#undef DAT_10007a1c
#define DAT_10007a1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e4cU)))
#undef DAT_10007c48
#define DAT_10007c48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7078U)))
#undef DAT_10007c64
#define DAT_10007c64 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7094U)))
#undef DAT_10007c80
#define DAT_10007c80 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x70b0U)))
#undef DAT_10007c9c
#define DAT_10007c9c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x70ccU)))
#undef DAT_10007eb2
#define DAT_10007eb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72e2U)))
#undef DAT_10007eb7
#define DAT_10007eb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72e7U)))
#undef DAT_10007ebc
#define DAT_10007ebc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72ecU)))
#undef DAT_10007ec1
#define DAT_10007ec1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f1U)))
#undef DAT_10007ec6
#define DAT_10007ec6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72f6U)))
#undef DAT_10007f20
#define DAT_10007f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7350U)))
#undef LAB_100052af
#define LAB_100052af (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46dfU)))
#undef PTR_recovered_100030f0_10008004
#define PTR_recovered_100030f0_10008004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7434U)))
#define local_104 (*(uint *)(frame + 264))
#define local_100 (*(uint *)(frame + 268))
#define local_fc (*(uint *)(frame + 272))
#define local_f8 (*(uint *)(frame + 276))
#define local_f4 (*(byte * *)(frame + 280))
#define local_f0 (*(char *)(frame + 284))
#define local_ef (*(char *)(frame + 285))
#define local_ec (*(byte * *)(frame + 288))
#define local_e8 (*(uint *)(frame + 292))
#define local_e4 (*(uint *)(frame + 296))
#define local_e0 (*(undefined4 *)(frame + 300))
#define local_dc (*(ushort * *)(frame + 304))
#define local_d8 (*(uint *)(frame + 308))
#define local_d4 (*(undefined4 *)(frame + 312))
#define local_d0 (*(void * *)(frame + 316))
#define local_cc (*(byte * *)(frame + 320))
#define local_c8 (*(byte * *)(frame + 324))
#define local_c4 (*(uint * *)(frame + 328))
#define local_c0 (*(undefined4 *)(frame + 332))
#define local_bc (*(undefined4 *)(frame + 336))
#define local_b8 (*(uint *)(frame + 340))
#define local_b4 (*(uint (*)[6])(frame + 344))
#define local_9c (*(undefined * *)(frame + 368))
#define local_98 (*(undefined * *)(frame + 372))
#define local_94 (*(undefined1 * *)(frame + 376))
#define local_90 (*(undefined1 * *)(frame + 380))
#define local_8c (*(undefined1 * *)(frame + 384))
#define local_7c (*(void * *)(frame + 400))
#define local_78 (*(uint *)(frame + 404))
#define local_74 (*(undefined4 *)(frame + 408))
#define local_70 (*(uint *)(frame + 412))
#define local_6c (*(uint *)(frame + 416))
#define local_68 (*(byte * *)(frame + 420))
#define local_64 (*(uint * *)(frame + 424))
#define local_60 (*(undefined2 *)(frame + 428))
#define local_5c (*(uint *)(frame + 432))
#define local_58 (*(byte * *)(frame + 436))
#define local_54 (*(int *)(frame + 440))
#define local_4c (*(byte * *)(frame + 448))
#define local_48 (*(undefined4 *)(frame + 452))
#define local_44 (*(undefined4 *)(frame + 456))
#define local_40 (*(uint * *)(frame + 460))
#define local_3c (*(byte * *)(frame + 464))
#define local_38 (*(undefined4 *)(frame + 468))
#define local_34 (*(undefined4 *)(frame + 472))
#define local_30 (*(uint *)(frame + 476))
#define local_2c (*(byte * *)(frame + 480))
#define local_28 (*(byte * *)(frame + 484))
#define local_24 (*(uint * *)(frame + 488))
#define local_20 (*(byte * *)(frame + 492))
#define local_1c (*(uint * *)(frame + 496))
#define local_18 (*(byte * *)(frame + 500))
#define local_14 (*(byte * *)(frame + 504))
#define auStackY_1fc (*(undefined1 (*)[128])(frame + 16))
#define local_16c (*(void * *)(frame + 160))
#define local_168 (*(undefined4 *)(frame + 164))
#define local_164 (*(void * *)(frame + 168))
#define local_160 (*(byte (*)[4])(frame + 172))
#define local_15c (*(int *)(frame + 176))
#define local_158 (*(undefined4 *)(frame + 180))
#define local_154 (*(int *)(frame + 184))
#define local_150 (*(undefined2 *)(frame + 188))
#define local_14c (*(undefined4 *)(frame + 192))
#define local_148 (*(uint (*)[6])(frame + 196))
#define local_130 (*(void * *)(frame + 220))
#define local_12c (*(byte * *)(frame + 224))
#define local_128 (*(byte * *)(frame + 228))
#define local_124 (*(int *)(frame + 232))
#define local_120 (*(void * *)(frame + 236))
#define local_11c (*(byte * *)(frame + 240))
#define local_114 (*(uint *)(frame + 248))
#define local_110 (*(uint *)(frame + 252))
#define local_10c (*(byte * *)(frame + 256))
#define local_108 (*(byte * *)(frame + 260))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x2fa2U)
 */

/* WARNING: Type propagation algorithm not settling */

uchar recovered_10003b72(void *data,ulong length,void *image)

{
  unsigned char frame[556] = {0};

  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uchar uVar7;
  byte *pbVar8;
  uint *puVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  ushort uVar14;
  undefined2 uVar15;
  byte bVar16;
  byte *pbVar17;
  void **ppvVar18;
  uint *in_EDX;
  byte **ppbVar19;
  byte *pbVar20;
  bool bVar21;

  bVar16 = 0;
  local_16c = (void *)0x0;
  local_168 = 0;
  local_164 = (void *)0x0;
  local_160[0] = 0;
  local_160[1] = 0;
  local_160[2] = 0;
  local_160[3] = 0;
  local_15c = 0;
  recovered_100053d0(image,(uint *)&local_16c);
  local_160[0] = 0;
  local_160[1] = 0;
  local_160[2] = 0;
  local_160[3] = 0;
  recovered_10003164(local_164);
  local_8c = auStackY_1fc + 0x80;
  local_9c = PTR_recovered_100030f0_10008004;
  local_98 = &DAT_10007f20;
  local_90 = &LAB_100052af;
  local_94 = (undefined1 *)((int)(uintptr_t)(frame + 524) + -4);
  recovered_1000349a(local_b4);
  if (length == 0 || data == (void *)0x0) {
    uVar7 = '\0';
  }
  else {
    local_b4[1] = 0xffffffff;
    recovered_1000770c((uint *)&local_120,data,(uchar *)(length + (int)data));
    local_10c = (byte *)0x0;
    local_108 = (byte *)0x0;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = (ushort *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = (void *)0x0;
    local_cc = (byte *)0x0;
    local_c8 = (byte *)0x0;
    local_16c = (void *)0x0;
    local_168 = 0;
    local_164 = (void *)0x0;
    local_160[0] = 0;
    local_160[1] = 0;
    local_160[2] = 0;
    local_160[3] = 0;
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_14 = (byte *)0x0;
    local_150 = 0;
    local_14c = 0;
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_148[4] = 0;
    local_148[5] = 0;
    local_130 = (void *)0x0;
    local_12c = (byte *)0x0;
    local_128 = (byte *)0x0;
    ppvVar18 = &local_16c;
    ppbVar19 = &local_10c;
    for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
      *ppbVar19 = *ppvVar18;
      ppvVar18 = ppvVar18 + (uint)bVar16 * -2 + 1;
      ppbVar19 = ppbVar19 + (uint)bVar16 * -2 + 1;
    }
    recovered_10005400(&local_e8,local_148);
    recovered_10005400((uint *)&local_dc,local_148 + 3);
    local_cc = (byte *)0x0;
    recovered_10003164(local_d0);
    local_d0 = local_130;
    local_cc = local_12c;
    local_c8 = local_128;
    local_130 = (void *)0x0;
    local_12c = (byte *)0x0;
    local_128 = (byte *)0x0;
    recovered_10005444((int)&local_16c);
    if ((byte *)0x7 < local_11c) {
      local_b4[1] = 1;
      iVar12 = recovered_100012a5(local_120,&DAT_10007a1c,8);
      if (iVar12 == 0) {
        local_18 = (byte *)0x8;
        while (pbVar17 = local_11c, pvVar10 = local_120, local_18 + 0xc <= local_11c) {
          pbVar8 = (byte *)recovered_10005d36((uint *)((int)local_120 + (int)local_18));
          pbVar13 = local_18 + 8;
          if (pbVar17 + -(int)pbVar13 < pbVar8 + 4) goto LAB_10003d66;
          pbVar17 = local_18 + (int)pvVar10 + 4;
          in_EDX = (uint *)((int)pvVar10 + (int)pbVar13);
          local_18 = pbVar13;
          local_1c = (uint *)recovered_10005d36((uint *)(pbVar8 + (int)pbVar13 + (int)pvVar10));
          local_14 = pbVar17;
          puVar9 = (uint *)recovered_10005d3f(0,pbVar17,4);
          local_20 = pbVar8;
          if (pbVar8 != (byte *)0x0) {
            puVar9 = (uint *)recovered_10005d3f((uint)puVar9,(byte *)in_EDX,(uint)pbVar8);
          }
          if (puVar9 != local_1c) goto LAB_10003d66;
          local_18 = local_20 + 4 + (int)local_18;
          local_1c = in_EDX;
          if (local_f0 == '\0') {
            local_b4[1] = 2;
            iVar12 = recovered_100012a5(local_14,&DAT_10007eb2,4);
            puVar9 = local_1c;
            local_14 = (byte *)0x0;
            if ((local_20 != (byte *)0xd) || (iVar12 != 0)) goto LAB_10003d6d;
            pbVar17 = (byte *)recovered_10005d36(local_1c);
            local_10c = pbVar17;
            local_108 = (byte *)recovered_10005d36(puVar9 + 1);
            bVar2 = (byte)puVar9[2];
            local_104 = (uint)bVar2;
            local_14 = (byte *)0x0;
            local_100 = (uint)*(byte *)((int)puVar9 + 9);
            local_fc = (uint)*(byte *)((int)puVar9 + 10);
            local_f8 = (uint)*(byte *)((int)puVar9 + 0xb);
            local_f4 = (byte *)(uint)(byte)puVar9[3];
            local_f0 = '\x01';
            local_20 = local_f4;
            if ((pbVar17 == (byte *)0x0) || (local_108 == (byte *)0x0)) goto LAB_10003d6d;
            bVar21 = false;
            if (local_100 < 7) {
              if ((0x55U >> (local_100 & 0x1f) & 1) == 0) {
                if (local_100 != 3) goto LAB_10003fe8;
                bVar2 = bVar2 - 8;
              }
              else {
                bVar2 = bVar2 - 8 & 0xf7;
              }
              bVar21 = bVar2 == 0;
            }
LAB_10003fe8:
            local_14 = (byte *)0x0;
            if ((((!bVar21) || (*(byte *)((int)puVar9 + 10) != 0)) ||
                (*(byte *)((int)puVar9 + 0xb) != 0)) || (1 < (byte)puVar9[3])) goto LAB_10003d6d;
          }
          else {
            local_b4[1] = 3;
            iVar12 = recovered_100012a5(local_14,&DAT_10007ebc,4);
            if (iVar12 == 0) {
              if (local_20 == (byte *)0x0) goto LAB_10003d66;
              local_14 = (byte *)0x0;
              if (((byte *)0x300 < local_20) || ((uint)local_20 % 3 != 0)) goto LAB_10003d6d;
              local_b4[1] = 4;
              recovered_10005dae((int *)&local_e8,(uchar *)local_1c,local_20 + (int)local_1c);
            }
            else {
              local_b4[1] = 5;
              iVar12 = recovered_100012a5(local_14,&DAT_10007ec1,4);
              if (iVar12 == 0) {
                if ((local_20 != (byte *)0x2 && local_100 == 0) ||
                   (local_20 != (byte *)0x6 && local_100 == 2)) goto LAB_10003d66;
                if (local_100 == 3) {
                  local_14 = (byte *)0x0;
                  if ((byte *)(local_e4 / 3) < local_20) goto LAB_10003d6d;
                }
                else {
                  local_14 = (byte *)0x0;
                  if ((local_100 == 4) || (local_100 == 6)) goto LAB_10003d6d;
                }
                local_14 = (byte *)0x0;
                local_b4[1] = 6;
                recovered_10005dae((int *)&local_dc,(uchar *)local_1c,local_20 + (int)local_1c);
              }
              else {
                local_b4[1] = 7;
                iVar12 = recovered_100012a5(local_14,&DAT_10007ec6,4);
                if (iVar12 == 0) {
                  if (local_20 != (byte *)0x0) {
                    puVar9 = local_1c;
                    if (local_cc == local_c8) {
                      pbVar17 = (byte *)0x4;
                      if (local_cc != (byte *)0x0) {
                        pbVar17 = (byte *)((int)local_cc * 2);
                      }
                      if (local_cc < pbVar17) {
                        local_b4[1] = 8;
                        local_14 = pbVar17;
                        pvVar10 = recovered_10003132((int)pbVar17 * 8);
                        puVar9 = local_1c;
                        for (pbVar17 = (byte *)0x0; local_cc != pbVar17; pbVar17 = pbVar17 + 1) {
                          uVar1 = *(undefined4 *)((int)local_d0 + (int)pbVar17 * 8);
                          *(undefined4 *)((int)pvVar10 + (int)pbVar17 * 8 + 4) =
                               *(undefined4 *)((int)local_d0 + (int)pbVar17 * 8 + 4);
                          *(undefined4 *)((int)pvVar10 + (int)pbVar17 * 8) = uVar1;
                        }
                        recovered_10003164(local_d0);
                        local_c8 = local_14;
                        local_d0 = pvVar10;
                      }
                    }
                    *(uint **)((int)local_d0 + (int)local_cc * 8) = puVar9;
                    *(byte **)((int)local_d0 + (int)local_cc * 8 + 4) = local_20;
                    local_cc = local_cc + 1;
                    local_ec = local_ec + (int)local_20;
                  }
                }
                else {
                  local_b4[1] = 9;
                  iVar12 = recovered_100012a5(local_14,&DAT_10007eb7,4);
                  if (iVar12 == 0) {
                    if (local_20 == (byte *)0x0) {
                      local_ef = '\x01';
                      break;
                    }
                    goto LAB_10003d66;
                  }
                  if ((*local_14 & 0x20) == 0) goto LAB_10003d66;
                }
              }
            }
          }
        }
        if (local_f0 != '\x01') goto LAB_10003d66;
        local_14 = (byte *)0x0;
        if ((local_ef == '\x01') && (local_ec != (byte *)0x0)) {
          if ((local_100 == 3) && (local_e4 == 0)) goto LAB_10003d66;
          local_7c = (void *)0x0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = (byte *)0x0;
          local_64 = (uint *)0x0;
          local_60 = 0;
          pbVar17 = local_160;
          local_16c = (void *)0x0;
          local_168 = 0;
          local_164 = (void *)0x0;
          local_160[0] = 0;
          local_160[1] = 0;
          local_160[2] = 0;
          local_160[3] = 0;
          local_15c = 0;
          local_158 = 0;
          local_154 = 0;
          local_150 = 0;
          recovered_10005400((uint *)&local_7c,(uint *)&local_16c);
          pbVar13 = pbVar17;
          puVar9 = &local_70;
          for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(byte *)puVar9 = *pbVar13;
            pbVar13 = pbVar13 + (uint)bVar16 * -2 + 1;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar16 * -2 + 1);
          }
          local_168 = 0;
          recovered_10003164(local_16c);
          if (local_100 == 0) {
            if (local_d8 != 0) {
              if (local_d8 != 2) goto LAB_100043ce;
              local_70 = (uint)(ushort)(*local_dc << 8 | *local_dc >> 8);
              local_60 = CONCAT11(PF_PART1(local_60, 1),1);
            }
LAB_100043f2:
            pbVar13 = local_10c;
            local_c4 = (uint *)0x0;
            local_c0 = 0;
            local_bc = 0;
            if (local_f4 == (byte *)0x0) {
              pbVar8 = (byte *)recovered_10005f70((int)&local_10c);
              if (((pbVar13 == (byte *)0x0) ||
                  ((int)(ZEXT48(pbVar13) * ZEXT48(pbVar8) >> 0x20) == 0)) &&
                 ((pbVar13 == (byte *)0x0 ||
                  ((int)(ZEXT48(pbVar13) * ZEXT48(local_108) >> 0x20) == 0)))) {
                local_18 = pbVar13;
                local_20 = pbVar8;
                if ((uint)((int)local_108 * (int)pbVar13) < 0x40000000) {
                  local_b4[1] = 0xb;
                  recovered_10005f32((int *)&local_c4,(int)local_108 * (int)pbVar13 * 4);
                  local_16c = (void *)0x0;
                  local_168 = 0;
                  local_164 = (void *)0x0;
                  local_160[0] = 0;
                  local_160[1] = 0;
                  local_160[2] = 0;
                  local_160[3] = 0;
                  local_15c = 0;
                  local_158 = 0;
                  local_154 = 0;
                  local_b4[1] = 0xc;
                  uVar7 = recovered_10005f94((int *)&local_16c,(int *)&local_d0);
                  if (uVar7 == '\0') {
LAB_10004ce9:
                    recovered_10006dd6((uint *)&local_16c);
                  }
                  else {
                    local_20 = (byte *)((int)local_20 * (int)local_18 + 7U >> 3);
                    uVar11 = recovered_10005f70((int)&local_10c);
                    if (uVar11 < 8) {
                      local_5c = 1;
                    }
                    else {
                      local_5c = uVar11 + 7 >> 3;
                    }
                    local_b4[1] = 0xd;
                    recovered_100076d8((uint *)&local_58,(uint)(local_20 + 1));
                    if ((local_100 == 6) && (local_104 == 8)) {
                      local_1c = (uint *)-(int)local_20;
                      local_14 = (byte *)0x0;
                      pbVar13 = (byte *)0x0;
                      do {
                        local_18 = pbVar13;
                        if (local_108 <= pbVar13) {
                          pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),
                                                     local_154 == local_15c);
                          goto LAB_1000525d;
                        }
                        local_b4[1] = 0xe;
                        uVar11 = recovered_10006b9a((int)&local_16c,local_58,local_54);
                        if ((char)uVar11 == '\0') break;
                        pbVar13 = (byte *)0x0;
                        if (local_18 != (byte *)0x0) {
                          pbVar13 = (byte *)((int)local_1c + (int)local_c4 + (int)local_14);
                        }
                        local_b4[1] = 0xf;
                        uVar11 = recovered_10006bd0((uint)*local_58,
                                                    (byte *)((int)local_c4 + (int)local_14),
                                                    (uint)(local_58 + 1),(int)pbVar13,(uint)local_20
                                                    ,4);
                        pbVar13 = local_18 + 1;
                        local_14 = local_14 + (int)local_20;
                      } while ((char)uVar11 != '\0');
                      local_54 = 0;
                      recovered_10003164(local_58);
                      goto LAB_10004ce9;
                    }
                    local_b4[1] = 0x10;
                    recovered_100076d8((uint *)&local_4c,(uint)local_20);
                    local_b4[1] = 0x11;
                    recovered_100076d8((uint *)&local_3c,(uint)local_20);
                    local_30 = 0;
                    local_18 = (byte *)0x0;
                    for (local_2c = (byte *)0x0; local_2c < local_108; local_2c = local_2c + 1) {
                      local_b4[1] = 0x12;
                      uVar11 = recovered_10006b9a((int)&local_16c,local_58,local_54);
                      pbVar17 = (byte *)0x0;
                      if ((char)uVar11 == '\0') goto switchD_10004e09_caseD_1;
                      if (((uint)local_18 & 1) != 0) {
                        pbVar17 = local_4c;
                      }
                      local_b4[1] = 0x13;
                      uVar11 = recovered_10006bd0((uint)*local_58,local_3c,(uint)(local_58 + 1),
                                                  (int)pbVar17,(uint)local_20,local_5c);
                      if ((char)uVar11 == '\0') {
LAB_1000521b:
                        pbVar17 = (byte *)0x0;
                        goto switchD_10004e09_caseD_1;
                      }
                      pbVar17 = (byte *)0x0;
                      local_18 = local_3c;
                      local_14 = local_10c;
                      local_1c = local_c4;
                      switch((uintptr_t)(local_100)) {
                      case 0:
                        if (local_104 == 8) {
                          iVar12 = (int)local_10c * local_30;
                          for (pbVar13 = (byte *)0x0; pbVar17 = (byte *)0x0, local_10c != pbVar13;
                              pbVar13 = pbVar13 + 1) {
                            uVar14 = CONCAT11(~(byte)local_60 |
                                              local_70 !=
                                              (CONCAT11((byte)local_60,local_3c[(int)pbVar13]) &
                                              0xff),local_3c[(int)pbVar13]) & 0x1ff;
                            bVar16 = (byte)uVar14;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 1) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 2) = bVar16;
                            *(char *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 3) =
                                 -(char)(uVar14 >> 8);
                          }
                        }
                        else {
                          iVar12 = (int)local_10c * local_30;
                          for (pbVar13 = (byte *)0x0; local_10c != pbVar13; pbVar13 = pbVar13 + 1) {
                            uVar11 = (uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 2) << 8 |
                                                   *(ushort *)(local_3c + (int)pbVar13 * 2) >> 8);
                            bVar16 = (byte)((uVar11 * 0xff + 0x7fff) / 0xffff);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 1) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 2) = bVar16;
                            uVar11 = CONCAT11(uVar11 != local_70,
                                              ~(byte)local_60 | uVar11 != local_70) & 0xffffff01;
                            bVar16 = -(char)uVar11;
                            pbVar17 = (byte *)CONCAT31((int3)(uVar11 >> 8),bVar16);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 3) = bVar16;
                          }
                        }
                        break;
                      default:
                        goto switchD_10004e09_caseD_1;
                      case 2:
                        if (local_104 == 8) {
                          pbVar13 = (byte *)((int)local_c4 + (int)local_10c * local_30 + 3);
                          local_18 = local_3c + 2;
                          while (bVar21 = local_14 != (byte *)0x0, local_14 = local_14 + -1, bVar21)
                          {
                            bVar16 = 0xff;
                            if (((PF_PART1(local_60, 1) == 1) && (local_6c == local_18[-2])) &&
                               (local_68 == (byte *)(uint)local_18[-1])) {
                              bVar16 = -(local_64 != (uint *)(uint)*local_18);
                            }
                            pbVar13[-3] = local_18[-2];
                            pbVar13[-2] = local_18[-1];
                            pbVar13[-1] = *local_18;
                            *pbVar13 = bVar16;
                            pbVar13 = pbVar13 + 4;
                            local_18 = local_18 + 3;
                          }
                        }
                        else {
                          local_1c = (uint *)((int)local_c4 + (int)local_10c * local_30 + 3);
                          local_18 = local_3c + 5;
                          while (bVar21 = local_14 != (byte *)0x0, local_14 = local_14 + -1, bVar21)
                          {
                            uVar11 = (uint)(ushort)(*(ushort *)(local_18 + -5) << 8 |
                                                   *(ushort *)(local_18 + -5) >> 8);
                            local_28 = (byte *)(uint)(ushort)(*(ushort *)(local_18 + -3) << 8 |
                                                             *(ushort *)(local_18 + -3) >> 8);
                            local_24 = (uint *)(uint)(ushort)(*(ushort *)(local_18 + -1) << 8 |
                                                             *(ushort *)(local_18 + -1) >> 8);
                            local_40 = (uint *)CONCAT31(PF_PART3(local_40, 1),local_28 != local_68);
                            *(byte *)((int)local_1c - 3) = (byte)((uVar11 * 0xff + 0x7fff) / 0xffff)
                            ;
                            *(byte *)((int)local_1c - 2) =
                                 (byte)(((int)local_28 * 0xff + 0x7fffU) / 0xffff);
                            *(byte *)((int)local_1c - 1) =
                                 (byte)(((int)local_24 * 0xff + 0x7fffU) / 0xffff);
                            bVar16 = -((local_24 != local_64 || local_28 != local_68) |
                                      ~PF_PART1(local_60, 1) & 1 | uVar11 != local_6c);
                            pbVar17 = (byte *)((uint)bVar16 << 8);
                            *(byte *)local_1c = bVar16;
                            local_1c = local_1c + 1;
                            local_18 = local_18 + 6;
                          }
                        }
                        break;
                      case 3:
                        local_40 = (uint *)(local_78 >> 2);
                        local_1c = (uint *)((int)local_c4 + (int)local_10c * local_30);
                        while (bVar21 = local_14 != (byte *)0x0, local_14 = local_14 + -1, bVar21) {
                          if (local_40 <= (uint *)(uint)*local_18) goto LAB_1000521b;
                          local_b4[1] = 0x14;
                          recovered_100011f6(local_1c,(void *)((int)(uint)*local_18 * 4 +
                                                              (int)local_7c),4);
                          local_1c = local_1c + 1;
                          local_18 = local_18 + 1;
                        }
                        break;
                      case 4:
                        if (local_104 == 8) {
                          iVar12 = (int)local_10c * local_30;
                          for (pbVar13 = (byte *)0x0; local_10c != pbVar13; pbVar13 = pbVar13 + 1) {
                            bVar16 = local_3c[(int)pbVar13 * 2];
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 1) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 2) =
                                 local_3c[(int)pbVar13 * 2];
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 3) =
                                 local_3c[(int)pbVar13 * 2 + 1];
                          }
                        }
                        else {
                          iVar12 = (int)local_10c * local_30;
                          for (pbVar13 = (byte *)0x0; local_10c != pbVar13; pbVar13 = pbVar13 + 1) {
                            uVar14 = *(ushort *)(local_3c + (int)pbVar13 * 4 + 2);
                            pbVar17 = (byte *)0xffff;
                            bVar16 = (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 4)
                                                            << 8 | *(ushort *)
                                                                    (local_3c + (int)pbVar13 * 4) >>
                                                                   8) * 0xff + 0x7fff) / 0xffff);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 1) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 2) = bVar16;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 3) =
                                 (byte)(((uint)(ushort)(uVar14 << 8 | uVar14 >> 8) * 0xff + 0x7fff)
                                       / 0xffff);
                          }
                        }
                        break;
                      case 6:
                        if (local_104 == 8) {
                          local_b4[1] = 0x15;
                          recovered_100011f6(local_c4 + (int)local_2c * (int)local_10c,local_3c,
                                             (int)local_10c << 2);
                        }
                        else {
                          iVar12 = (int)local_10c * local_30;
                          for (pbVar13 = (byte *)0x0; local_10c != pbVar13; pbVar13 = pbVar13 + 1) {
                            pbVar17 = (byte *)0xffff;
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12) =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 8) <<
                                                        8 | *(ushort *)(local_3c + (int)pbVar13 * 8)
                                                            >> 8) * 0xff + 0x7fff) / 0xffff);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 1) =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 8 + 2)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar13 * 8 + 2) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 2) =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 8 + 4)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar13 * 8 + 4) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                            *(byte *)((int)local_c4 + (int)pbVar13 * 4 + iVar12 + 3) =
                                 (byte)(((uint)(ushort)(*(ushort *)(local_3c + (int)pbVar13 * 8 + 6)
                                                        << 8 | *(ushort *)
                                                                (local_3c + (int)pbVar13 * 8 + 6) >>
                                                               8) * 0xff + 0x7fff) / 0xffff);
                          }
                        }
                      }
                      uVar6 = local_34;
                      uVar5 = local_44;
                      uVar1 = local_48;
                      pbVar13 = local_4c;
                      local_4c = local_3c;
                      local_3c = pbVar13;
                      local_48 = local_38;
                      local_38 = uVar1;
                      local_44 = local_34;
                      local_34 = uVar5;
                      local_30 = local_30 + 4;
                      local_18 = (byte *)CONCAT31((int3)((uint)uVar6 >> 8),1);
                    }
                    pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),local_154 == local_15c);
switchD_10004e09_caseD_1:
                    local_38 = 0;
                    recovered_10003164(local_3c);
                    local_48 = 0;
                    recovered_10003164(local_4c);
LAB_1000525d:
                    local_54 = 0;
                    recovered_10003164(local_58);
                    recovered_10006dd6((uint *)&local_16c);
                    if ((char)pbVar17 != '\0') goto LAB_1000527f;
                  }
                }
              }
LAB_10004cf4:
              pbVar17 = (byte *)0x0;
            }
            else {
              if (((local_10c != (byte *)0x0) &&
                  ((int)(ZEXT48(local_10c) * ZEXT48(local_108) >> 0x20) != 0)) ||
                 (0x3fffffff < (uint)((int)local_108 * (int)local_10c))) goto LAB_10004cf4;
              local_16c = (void *)((uint)local_16c & 0xffffff00);
              local_b4[1] = 0x16;
              recovered_10005ed2((int *)&local_c4,(int)local_108 * (int)local_10c * 4,
                                 (uchar *)&local_16c);
              local_16c = (void *)0x0;
              local_168 = 0;
              local_164 = (void *)0x0;
              local_160[0] = 0;
              local_160[1] = 0;
              local_160[2] = 0;
              local_160[3] = 0;
              local_15c = 0;
              local_158 = 0;
              local_154 = 0;
              local_b4[1] = 0x17;
              uVar7 = recovered_10005f94((int *)&local_16c,(int *)&local_d0);
              if (uVar7 == '\0') goto LAB_10004ce9;
              uVar11 = recovered_10005f70((int)&local_10c);
              if (uVar11 < 8) {
                local_110 = 1;
              }
              else {
                local_110 = uVar11 + 7 >> 3;
              }
              for (iVar12 = 0; iVar4 = local_154, iVar3 = local_15c, iVar12 != 7;
                  iVar12 = iVar12 + 1) {
                local_2c = (byte *)(&DAT_10007c48)[iVar12];
                local_28 = (byte *)(&DAT_10007c64)[iVar12];
                local_18 = (byte *)(&DAT_10007c80)[iVar12];
                local_24 = (uint *)0x0;
                local_30 = (&DAT_10007c9c)[iVar12];
                if (local_2c < local_10c) {
                  local_24 = (uint *)((uint)(local_10c + ~(uint)local_2c) / (uint)local_18 + 1);
                }
                if (local_28 < local_108) {
                  local_114 = (uint)(local_108 + ~(uint)local_28) / local_30 + 1;
                  if ((local_24 != (uint *)0x0) && (local_114 != 0)) {
                    uVar11 = recovered_10005f70((int)&local_10c);
                    if ((int)(ZEXT48(local_24) * (ulonglong)uVar11 >> 0x20) == 0) {
                      local_b8 = uVar11 * (int)local_24 + 7 >> 3;
                      local_b4[1] = 0x18;
                      local_124 = iVar12;
                      recovered_100076d8((uint *)&local_58,local_b8 + 1);
                      local_b4[1] = 0x19;
                      recovered_100076d8((uint *)&local_4c,local_b8);
                      local_b4[1] = 0x1a;
                      recovered_100076d8((uint *)&local_3c,local_b8);
                      local_2c = (byte *)((int)local_2c << 2);
                      local_28 = (byte *)((int)local_28 << 2);
                      local_30 = local_30 << 2;
                      local_18 = (byte *)((int)local_18 << 2);
                      local_14 = (byte *)0x0;
                      for (local_5c = 0; local_5c < local_114; local_5c = local_5c + 1) {
                        local_b4[1] = 0x1b;
                        uVar11 = recovered_10006b9a((int)&local_16c,local_58,local_54);
                        if ((char)uVar11 == '\0') break;
                        if (((uint)local_14 & 1) == 0) {
                          pbVar13 = (byte *)0x0;
                        }
                        else {
                          pbVar13 = local_4c;
                        }
                        local_b4[1] = 0x1c;
                        uVar11 = recovered_10006bd0((uint)*local_58,local_3c,(uint)(local_58 + 1),
                                                    (int)pbVar13,local_b8,local_110);
                        if ((char)uVar11 == '\0') break;
                        switch((uintptr_t)(local_100)) {
                        case 0:
                          if (local_104 == 8) {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            puVar9 = local_24;
                            pbVar8 = local_3c;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              bVar21 = local_70 != (CONCAT11((byte)local_60,*pbVar8) & 0xff);
                              pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),bVar21);
                              uVar14 = CONCAT11(~(byte)local_60 | bVar21,*pbVar8) & 0x1ff;
                              bVar16 = (byte)uVar14;
                              pbVar13[-3] = bVar16;
                              pbVar13[-2] = bVar16;
                              pbVar13[-1] = bVar16;
                              *pbVar13 = -(char)(uVar14 >> 8);
                              pbVar13 = pbVar13 + (int)local_18;
                              pbVar8 = pbVar8 + 1;
                            }
                          }
                          else {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            pbVar8 = local_3c + 1;
                            puVar9 = local_24;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              uVar11 = (uint)(ushort)(*(ushort *)(pbVar8 + -1) << 8 |
                                                     *(ushort *)(pbVar8 + -1) >> 8);
                              bVar16 = (byte)((uVar11 * 0xff + 0x7fff) / 0xffff);
                              pbVar13[-3] = bVar16;
                              pbVar13[-2] = bVar16;
                              pbVar13[-1] = bVar16;
                              uVar11 = CONCAT31((int3)(CONCAT22((short)((uint)pbVar17 >> 0x10),
                                                                CONCAT11(uVar11 != local_70,
                                                                         (byte)local_60)) >> 8),
                                                ~(byte)local_60 | uVar11 != local_70) & 0xffffff01;
                              bVar16 = -(char)uVar11;
                              pbVar17 = (byte *)CONCAT31((int3)(uVar11 >> 8),bVar16);
                              *pbVar13 = bVar16;
                              pbVar13 = pbVar13 + (int)local_18;
                              pbVar8 = pbVar8 + 2;
                            }
                          }
                          break;
                        default:
                          goto switchD_10004771_caseD_1;
                        case 2:
                          if (local_104 == 8) {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            pbVar8 = local_3c + 2;
                            puVar9 = local_24;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              bVar16 = pbVar8[-2];
                              uVar15 = (undefined2)CONCAT31((uint3)bVar16,0xff);
                              if (((PF_PART1(local_60, 1) == 1) && (local_6c == (uint3)bVar16)) &&
                                 (local_68 == (byte *)(uint)pbVar8[-1])) {
                                uVar15 = CONCAT11(bVar16,-(local_64 != (uint *)(uint)*pbVar8));
                              }
                              pbVar13[-3] = (byte)((ushort)uVar15 >> 8);
                              pbVar13[-2] = pbVar8[-1];
                              pbVar13[-1] = *pbVar8;
                              *pbVar13 = (byte)uVar15;
                              pbVar13 = pbVar13 + (int)local_18;
                              pbVar8 = pbVar8 + 3;
                            }
                          }
                          else {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            pbVar8 = local_3c + 5;
                            puVar9 = local_24;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              uVar11 = (uint)(ushort)(*(ushort *)(pbVar8 + -5) << 8 |
                                                     *(ushort *)(pbVar8 + -5) >> 8);
                              pbVar20 = (byte *)(uint)(ushort)(*(ushort *)(pbVar8 + -3) << 8 |
                                                              *(ushort *)(pbVar8 + -3) >> 8);
                              local_40 = (uint *)(uint)(ushort)(*(ushort *)(pbVar8 + -1) << 8 |
                                                               *(ushort *)(pbVar8 + -1) >> 8);
                              bVar16 = ~PF_PART1(local_60, 1) | uVar11 != local_6c;
                              local_20 = (byte *)CONCAT31(PF_PART3(local_20, 1),pbVar20 != local_68);
                              pbVar13[-3] = (byte)((uVar11 * 0xff + 0x7fff) / 0xffff);
                              pbVar13[-2] = (byte)(((int)pbVar20 * 0xff + 0x7fffU) / 0xffff);
                              pbVar13[-1] = (byte)(((int)local_40 * 0xff + 0x7fffU) / 0xffff);
                              uVar11 = CONCAT22((short)((uint)pbVar17 >> 0x10),
                                                CONCAT11((local_40 != local_64 ||
                                                         pbVar20 != local_68) | bVar16,bVar16)) &
                                       0xffff01ff;
                              bVar16 = -(char)(uVar11 >> 8);
                              pbVar17 = (byte *)((uint)CONCAT21((short)(uVar11 >> 0x10),bVar16) << 8
                                                );
                              *pbVar13 = bVar16;
                              pbVar13 = pbVar13 + (int)local_18;
                              pbVar8 = pbVar8 + 6;
                              local_1c = puVar9;
                            }
                          }
                          break;
                        case 3:
                          local_40 = (uint *)(local_78 >> 2);
                          pbVar8 = (byte *)((int)local_c4 + (int)local_2c) +
                                   (int)local_10c * (int)local_28;
                          puVar9 = local_24;
                          pbVar13 = local_3c;
                          while (puVar9 != (uint *)0x0) {
                            if (local_40 <= (uint *)(uint)*pbVar13) goto switchD_10004771_caseD_1;
                            local_b4[1] = 0x1d;
                            local_20 = pbVar8;
                            local_1c = (uint *)((int)puVar9 - 1);
                            local_14 = pbVar13;
                            recovered_100011f6(pbVar8,(void *)((int)(uint)*pbVar13 * 4 +
                                                              (int)local_7c),4);
                            pbVar13 = local_14 + 1;
                            pbVar8 = local_20 + (int)local_18;
                            puVar9 = local_1c;
                          }
                          break;
                        case 4:
                          if (local_104 == 8) {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            puVar9 = local_24;
                            pbVar8 = local_3c;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              bVar16 = *pbVar8;
                              pbVar13[-3] = bVar16;
                              pbVar13[-2] = bVar16;
                              pbVar13[-1] = *pbVar8;
                              *pbVar13 = pbVar8[1];
                              pbVar8 = pbVar8 + 2;
                              pbVar13 = pbVar13 + (int)local_18;
                            }
                          }
                          else {
                            pbVar8 = local_3c + 3;
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            puVar9 = local_24;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              uVar14 = *(ushort *)(pbVar8 + -1);
                              pbVar17 = (byte *)0xffff;
                              bVar16 = (byte)(((uint)(ushort)(*(ushort *)(pbVar8 + -3) << 8 |
                                                             *(ushort *)(pbVar8 + -3) >> 8) * 0xff +
                                              0x7fff) / 0xffff);
                              pbVar13[-3] = bVar16;
                              pbVar13[-2] = bVar16;
                              pbVar13[-1] = bVar16;
                              *pbVar13 = (byte)(((uint)(ushort)(uVar14 << 8 | uVar14 >> 8) * 0xff +
                                                0x7fff) / 0xffff);
                              pbVar8 = pbVar8 + 4;
                              pbVar13 = pbVar13 + (int)local_18;
                            }
                          }
                          break;
                        case 6:
                          if (local_104 == 8) {
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28;
                            puVar9 = local_24;
                            local_14 = local_3c;
                            while (puVar9 != (uint *)0x0) {
                              local_b4[1] = 0x1e;
                              local_20 = pbVar13;
                              local_1c = (uint *)((int)puVar9 - 1);
                              recovered_100011f6(pbVar13,local_14,4);
                              local_14 = local_14 + 4;
                              pbVar13 = local_20 + (int)local_18;
                              puVar9 = local_1c;
                            }
                          }
                          else {
                            pbVar8 = local_3c + 7;
                            pbVar13 = (byte *)((int)local_c4 + (int)local_2c) +
                                      (int)local_10c * (int)local_28 + 3;
                            puVar9 = local_24;
                            while (bVar21 = puVar9 != (uint *)0x0,
                                  puVar9 = (uint *)((int)puVar9 - 1), bVar21) {
                              pbVar17 = (byte *)0xffff;
                              pbVar13[-3] = (byte)(((uint)(ushort)(*(ushort *)(pbVar8 + -7) << 8 |
                                                                  *(ushort *)(pbVar8 + -7) >> 8) *
                                                    0xff + 0x7fff) / 0xffff);
                              pbVar13[-2] = (byte)(((uint)(ushort)(*(ushort *)(pbVar8 + -5) << 8 |
                                                                  *(ushort *)(pbVar8 + -5) >> 8) *
                                                    0xff + 0x7fff) / 0xffff);
                              pbVar13[-1] = (byte)(((uint)(ushort)(*(ushort *)(pbVar8 + -3) << 8 |
                                                                  *(ushort *)(pbVar8 + -3) >> 8) *
                                                    0xff + 0x7fff) / 0xffff);
                              *pbVar13 = (byte)(((uint)(ushort)(*(ushort *)(pbVar8 + -1) << 8 |
                                                               *(ushort *)(pbVar8 + -1) >> 8) * 0xff
                                                + 0x7fff) / 0xffff);
                              pbVar8 = pbVar8 + 8;
                              pbVar13 = pbVar13 + (int)local_18;
                            }
                          }
                        }
                        uVar5 = local_44;
                        uVar1 = local_48;
                        pbVar13 = local_4c;
                        local_4c = local_3c;
                        local_3c = pbVar13;
                        local_48 = local_38;
                        local_38 = uVar1;
                        local_44 = local_34;
                        local_34 = uVar5;
                        local_28 = local_28 + local_30;
                        local_14 = (byte *)CONCAT31((int3)(local_30 >> 8),1);
                      }
switchD_10004771_caseD_1:
                      local_38 = 0;
                      recovered_10003164(local_3c);
                      local_48 = 0;
                      recovered_10003164(local_4c);
                      local_54 = 0;
                      recovered_10003164(local_58);
                      iVar12 = local_124;
                      if (local_114 <= local_5c) goto LAB_10004be1;
                    }
                    goto LAB_10004ce9;
                  }
                }
LAB_10004be1:
              }
              recovered_10006dd6((uint *)&local_16c);
              if (iVar4 != iVar3) goto LAB_10004cf4;
LAB_1000527f:
              *(byte **)image = local_10c;
              *(byte **)((int)image + 4) = local_108;
              recovered_10005400((uint *)((int)image + 8),(uint *)&local_c4);
              pbVar17 = (byte *)CONCAT31((int3)((uint)pbVar17 >> 8),1);
            }
            local_c0 = 0;
            recovered_10003164(local_c4);
          }
          else {
            if (local_100 == 2) {
              if (local_d8 != 0) {
                if (local_d8 != 6) goto LAB_100043ce;
                local_6c = (uint)(ushort)(*local_dc << 8 | *local_dc >> 8);
                local_68 = (byte *)(uint)(ushort)(local_dc[1] << 8 | local_dc[1] >> 8);
                local_64 = (uint *)(uint)(ushort)(local_dc[2] << 8 | local_dc[2] >> 8);
                local_60 = CONCAT11(1,(byte)local_60);
              }
              goto LAB_100043f2;
            }
            if (local_100 == 3) {
              pbVar17 = (byte *)0x0;
              if ((local_e4 != 0) && (local_e4 % 3 == 0)) {
                local_16c = (void *)CONCAT31(PF_PART3(local_16c, 1),0xff);
                local_b4[1] = 10;
                local_18 = (byte *)(local_e4 / 3);
                recovered_10005ed2((int *)&local_7c,(int)(local_e4 / 3) * 4,(uchar *)&local_16c);
                iVar12 = 0;
                for (pbVar13 = (byte *)0x0; local_18 != pbVar13; pbVar13 = pbVar13 + 1) {
                  *(undefined1 *)((int)local_7c + (int)pbVar13 * 4) =
                       *(undefined1 *)(local_e8 + iVar12);
                  *(undefined1 *)((int)local_7c + (int)pbVar13 * 4 + 1) =
                       *(undefined1 *)(local_e8 + 1 + iVar12);
                  *(undefined1 *)((int)local_7c + (int)pbVar13 * 4 + 2) =
                       *(undefined1 *)(local_e8 + 2 + iVar12);
                  iVar12 = iVar12 + 3;
                }
                for (uVar11 = 0; uVar11 < local_d8; uVar11 = uVar11 + 1) {
                  *(undefined1 *)((int)local_7c + uVar11 * 4 + 3) =
                       *(undefined1 *)((int)local_dc + uVar11);
                }
                goto LAB_100043f2;
              }
            }
            else {
              if (local_d8 == 0) goto LAB_100043f2;
LAB_100043ce:
              pbVar17 = (byte *)0x0;
            }
          }
          local_78 = 0;
          local_14 = pbVar17;
          recovered_10003164(local_7c);
        }
      }
      else {
LAB_10003d66:
        local_14 = (byte *)0x0;
      }
    }
LAB_10003d6d:
    recovered_10005444((int)&local_10c);
    local_11c = (byte *)0x0;
    recovered_10003164(local_120);
    uVar7 = (uchar)local_14;
  }
  recovered_100034af(local_b4);
  return uVar7;
}

#undef DAT_10007a1c
#undef DAT_10007c48
#undef DAT_10007c64
#undef DAT_10007c80
#undef DAT_10007c9c
#undef DAT_10007eb2
#undef DAT_10007eb7
#undef DAT_10007ebc
#undef DAT_10007ec1
#undef DAT_10007ec6
#undef DAT_10007f20
#undef LAB_100052af
#undef PTR_recovered_100030f0_10008004
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ef
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
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
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
#undef auStackY_1fc
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_114
#undef local_110
#undef local_10c
#undef local_108

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4800U)
 */

uint * recovered_100053d0(uint *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  recovered_10005400(param_1 + 2,param_2 + 2);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4830U)
 */

uint * recovered_10005400(uint *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003164((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x4874U)
 */

void recovered_10005444(int in_ECX)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(in_ECX + 0x40) = 0;
  recovered_10003164(*(void **)(in_ECX + 0x3c));
  recovered_100076f0((uint *)(in_ECX + 0x30));
  recovered_100076f0((uint *)(in_ECX + 0x24));
  return;
}


#undef DAT_10007f60
#define DAT_10007f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7390U)))
#undef LAB_10005635
#define LAB_10005635 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a65U)))
#undef PTR_recovered_100030f0_10008004
#define PTR_recovered_100030f0_10008004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7434U)))
#define local_64 (*(uint (*)[6])(frame + 168))
#define local_4c (*(undefined * *)(frame + 192))
#define local_48 (*(undefined * *)(frame + 196))
#define local_44 (*(undefined1 * *)(frame + 200))
#define local_40 (*(undefined1 * *)(frame + 204))
#define local_3c (*(undefined1 * *)(frame + 208))
#define local_2c (*(void * *)(frame + 224))
#define local_28 (*(ulong *)(frame + 228))
#define local_24 (*(void * *)(frame + 232))
#define local_20 (*(undefined4 *)(frame + 236))
#define local_1c (*(undefined4 *)(frame + 240))
#define local_18 (*(uint * *)(frame + 244))
#define local_14 (*(uint *)(frame + 248))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x48a6U)
 */

void recovered_10005476(char *param_1,uint *param_2)

{
  unsigned char frame[300] = {0};

  uint *puVar1;
  uint uVar2;
  ulong uVar3;

  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  recovered_100053d0(param_2,(uint *)&local_2c);
  local_20 = 0;
  recovered_10003164(local_24);
  local_3c = auStackY_fc + 0x80;
  local_2c = (void *)0x0;
  local_24 = (void *)0x0;
  local_28 = 0;
  local_4c = PTR_recovered_100030f0_10008004;
  local_48 = &DAT_10007f60;
  local_40 = &LAB_10005635;
  local_44 = (undefined1 *)(local_64 + 0x18);
  recovered_1000349a(local_64);
  if (param_1 == (char *)0x0) goto LAB_10005579;
  local_64[1] = 1;
  puVar1 = recovered_10002591((int)param_1,((uintptr_t)pf_module_state+0x72fbU));
  if (puVar1 == (uint *)0x0) goto LAB_10005579;
  local_64[1] = 2;
  local_18 = puVar1;
  uVar2 = recovered_10002bac((int *)puVar1,0,2);
  if (uVar2 == 0) {
    local_64[1] = 3;
    local_14 = recovered_10002c25((int)local_18);
    if ((int)local_14 < 0) goto LAB_1000552c;
    local_64[1] = 4;
    uVar2 = recovered_10002bac((int *)local_18,0,0);
    if (uVar2 != 0) goto LAB_1000552c;
    local_64[1] = 5;
    recovered_10005f32((int *)&local_2c,local_14);
    if (local_28 == 0) {
      local_14 = 1;
    }
    else {
      local_64[1] = 6;
      uVar3 = recovered_10002950((int)local_2c,1,local_28,(int *)local_18);
      local_14 = CONCAT31((int3)(uVar3 >> 8),uVar3 == local_28);
    }
  }
  else {
LAB_1000552c:
    local_14 = 0;
  }
  local_64[1] = 7;
  uVar2 = recovered_10002910((int *)local_18);
  if (((byte)local_14 & uVar2 == 0) != 0) {
    local_64[1] = 8;
    recovered_10003b72(local_2c,local_28,param_2);
  }
LAB_10005579:
  local_28 = 0;
  recovered_10003164(local_2c);
  recovered_100034af(local_64);
  return;
}

#undef DAT_10007f60
#undef LAB_10005635
#undef PTR_recovered_100030f0_10008004
#undef local_64
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
#undef auStackY_fc

#undef DAT_10007f74
#define DAT_10007f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73a4U)))
#undef LAB_10005c14
#define LAB_10005c14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5044U)))
#undef PTR_recovered_100030f0_10008004
#define PTR_recovered_100030f0_10008004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7434U)))
#define in_stack_00000004 (*(int *)(frame + 320))
#define in_stack_00000008 (*(uint *)(frame + 324))
#define in_stack_0000000c (*(uint *)(frame + 328))
#define in_stack_00000010 (*(uint *)(frame + 332))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 16))
#define local_8c (*(uint (*)[6])(frame + 176))
#define local_74 (*(undefined * *)(frame + 200))
#define local_70 (*(undefined * *)(frame + 204))
#define local_6c (*(undefined1 * *)(frame + 208))
#define local_68 (*(undefined1 * *)(frame + 212))
#define local_64 (*(undefined1 * *)(frame + 216))
#define local_58 (*(uint *)(frame + 228))
#define local_54 (*(uint *)(frame + 232))
#define local_50 (*(uint *)(frame + 236))
#define local_4c (*(uint *)(frame + 240))
#define local_48 (*(uint *)(frame + 244))
#define local_44 (*(uint * *)(frame + 248))
#define local_40 (*(undefined4 *)(frame + 252))
#define local_3c (*(undefined4 *)(frame + 256))
#define local_38 (*(undefined4 *)(frame + 260))
#define local_34 (*(undefined1 *)(frame + 264))
#define local_30 (*(int *)(frame + 268))
#define local_2c (*(void * *)(frame + 272))
#define uStack_14 (*(undefined4 *)(frame + 296))
#define local_28 (*(uint *)(frame + 276))
#define local_24 (*(undefined4 *)(frame + 280))
#define local_20 (*(void * *)(frame + 284))
#define local_1c (*(void * *)(frame + 288))
#define local_18 (*(uint *)(frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x4a97U)
 */

void recovered_10005667(void)

{
  unsigned char frame[348] = {0};

  int iVar1;
  uchar uVar2;
  byte bVar3;
  uint *in_ECX;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  void *data;
  uint uVar7;
  void *size;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;

  local_6c = (undefined1 *)(local_8c + 0x22);
  local_64 = auStackY_12c + 0x80;
  local_74 = PTR_recovered_100030f0_10008004;
  local_70 = &DAT_10007f74;
  local_68 = &LAB_10005c14;
  recovered_1000349a(local_8c);
  if (((int)in_stack_00000010 < 1 || (int)in_stack_0000000c < 1) ||
      (in_stack_00000008 == 0 || in_stack_00000004 == 0)) goto LAB_100057c5;
  local_8c[1] = 0xffffffff;
  in_ECX = recovered_10002591(in_stack_00000004,((uintptr_t)pf_module_state+0x72dfU));
  if (in_ECX == (uint *)0x0) goto LAB_100057c5;
  local_8c[1] = 0xffffffff;
  uVar2 = recovered_10005c6c(in_ECX,((uintptr_t)pf_module_state+0x6e4cU),(uint *)0x8);
  if (uVar2 == '\0') {
LAB_100057a0:
    local_18 = 0;
  }
  else {
    local_40 = (void *)CONCAT13((char)in_stack_0000000c,
                                CONCAT12((char)(in_stack_0000000c >> 8),
                                         CONCAT11((char)(in_stack_0000000c >> 0x10),
                                                  (char)(in_stack_0000000c >> 0x18))));
    local_3c = (void *)CONCAT13((char)in_stack_00000010,
                                CONCAT12((char)(in_stack_00000010 >> 8),
                                         CONCAT11((char)(in_stack_00000010 >> 0x10),
                                                  (char)(in_stack_00000010 >> 0x18))));
    local_38 = 0x608;
    local_34 = 0;
    local_8c[1] = 0xffffffff;
    uVar4 = recovered_10005c94(in_ECX,((uintptr_t)pf_module_state+0x72e2U),&local_40,0xd);
    if ((char)uVar4 == '\0') goto LAB_100057a0;
    local_40 = (void *)0x0;
    local_3c = (void *)0x0;
    local_38 = 0;
    if ((0x3fffffff < in_stack_0000000c) ||
       (uVar4 = in_stack_0000000c * 4 + 1,
       (int)((ulonglong)uVar4 * (ulonglong)in_stack_00000010 >> 0x20) != 0)) {
      recovered_10003164((void *)0x0);
      goto LAB_100057a0;
    }
    local_8c[1] = 1;
    local_44 = in_ECX;
    recovered_10005f32(&local_40,uVar4 * in_stack_00000010);
    size = (void *)(in_stack_0000000c * 4);
    iVar1 = (int)size + 1;
    local_30 = 1;
    uVar9 = 0;
    uVar12 = in_stack_00000008;
    local_1c = size;
    while (uVar9 != in_stack_00000010) {
      data = (void *)(uVar9 * (int)size + in_stack_00000008);
      local_20 = (void *)0x0;
      if (uVar9 != 0) {
        local_20 = (void *)((int)data + in_stack_0000000c * -4);
      }
      local_58 = 0;
      local_50 = -(uint)(local_20 == (void *)0x0);
      local_54 = 0;
      uVar11 = 0;
      uVar10 = 0;
      local_4c = local_50;
      for (uVar7 = 0; size != (void *)uVar7; uVar7 = uVar7 + 1) {
        bVar3 = *(byte *)(uVar12 + uVar7);
        uVar8 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          uVar8 = 0x100 - uVar8;
        }
        bVar13 = CARRY4(uVar11,uVar8);
        uVar11 = uVar11 + uVar8;
        uVar10 = uVar10 + bVar13;
        if (uVar7 < 4) {
          cVar14 = '\0';
        }
        else {
          cVar14 = *(char *)((uVar12 - 4) + uVar7);
        }
        uVar8 = (uint)(byte)(bVar3 - cVar14);
        if ((char)(bVar3 - cVar14) < '\0') {
          uVar8 = 0x100 - uVar8;
        }
        bVar13 = CARRY4(local_58,uVar8);
        local_58 = local_58 + uVar8;
        local_54 = local_54 + bVar13;
        if (local_20 != (void *)0x0) {
          bVar3 = bVar3 - *(char *)((int)local_20 + uVar7);
          uVar8 = (uint)bVar3;
          if ((char)bVar3 < '\0') {
            uVar8 = 0x100 - uVar8;
          }
          bVar13 = CARRY4(local_50,uVar8);
          local_50 = local_50 + uVar8;
          local_4c = local_4c + bVar13;
        }
        size = local_1c;
      }
      bVar13 = local_54 - uVar10 < (uint)(local_58 < uVar11);
      cVar14 = local_54 < uVar10 || bVar13;
      uVar8 = local_58;
      uVar7 = local_54;
      if (local_54 >= uVar10 && !bVar13) {
        uVar8 = uVar11;
        uVar7 = uVar10;
      }
      bVar13 = local_4c < uVar7;
      uVar7 = local_4c - uVar7;
      local_4c = uVar7 - (local_50 < uVar8);
      cVar6 = cVar14;
      if (bVar13 || uVar7 < (local_50 < uVar8)) {
        cVar6 = '\x02';
      }
      if (local_20 != (void *)0x0) {
        cVar14 = cVar6;
      }
      *(char *)((int)local_40 + uVar9 * uVar4) = cVar14;
      local_48 = uVar9;
      local_18 = uVar12;
      if (cVar14 == '\x02') {
        if (local_20 == (void *)0x0) goto LAB_10005976;
        for (uVar5 = 0; size != (void *)uVar5; uVar5 = uVar5 + 1) {
          *(char *)((int)local_40 + uVar5 + local_30) =
               *(char *)(uVar12 + uVar5) - *(char *)((int)local_20 + uVar5);
        }
      }
      else if (cVar14 == '\x01') {
        for (uVar9 = 0; size != (void *)uVar9; uVar9 = uVar9 + 1) {
          if (uVar9 < 4) {
            cVar14 = '\0';
          }
          else {
            cVar14 = *(char *)((uVar12 - 4) + uVar9);
          }
          *(char *)((int)local_40 + uVar9 + local_30) = *(char *)(uVar12 + uVar9) - cVar14;
          size = local_1c;
        }
      }
      else {
LAB_10005976:
        local_8c[1] = 2;
        recovered_100011f6((void *)((int)local_40 + uVar9 * uVar4 + 1),data,(ulong)size);
        size = local_1c;
      }
      uVar12 = local_18 + (int)size;
      local_30 = local_30 + iVar1;
      uVar9 = local_48 + 1;
    }
    local_2c = (void *)0x0;
    local_24 = 0;
    local_28 = 0;
    PF_PART1(uStack_14, 3) = 0x78;
    local_8c[1] = 3;
    recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
    PF_PART1(uStack_14, 3) = 1;
    local_8c[1] = 4;
    recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
    local_1c = (void *)0x0;
    while( true ) {
      uVar4 = (int)local_3c - (int)local_1c;
      if (local_3c < local_1c || uVar4 == 0) break;
      if (0xfffe < uVar4) {
        uVar4 = 0xffff;
      }
      local_20 = (void *)((int)local_1c + uVar4);
      PF_PART1(uStack_14, 3) = local_20 == local_3c;
      local_8c[1] = 5;
      local_18 = uVar4;
      recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
      PF_PART1(uStack_14, 3) = (undefined1)local_18;
      local_8c[1] = 6;
      recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
      PF_PART1(uStack_14, 3) = (undefined1)(local_18 >> 8);
      local_8c[1] = 7;
      recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
      local_18 = local_18 ^ 0xffff;
      PF_PART1(uStack_14, 3) = (undefined1)local_18;
      local_8c[1] = 8;
      recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
      PF_PART1(uStack_14, 3) = (undefined1)(local_18 >> 8);
      local_8c[1] = 9;
      recovered_1000703c((int *)&local_2c,(uchar *)((int)&uStack_14 + 3));
      local_8c[1] = 10;
      recovered_10005dd0((int *)&local_2c,(int)local_2c + local_28,
                         (uchar *)((int)local_1c + (int)local_40),
                         (uchar *)((int)local_40 + (int)local_20));
      local_1c = local_20;
    }
    local_18 = recovered_10006fc7((int)local_40,(uint)local_3c);
    local_1c = (void *)local_28;
    local_8c[1] = 0xb;
    recovered_10005f32((int *)&local_2c,local_28 + 4);
    *(uint *)((int)local_2c + (int)local_1c) =
         local_18 >> 0x18 | (local_18 & 0xff0000) >> 8 | (local_18 & 0xff00) << 8 | local_18 << 0x18
    ;
    uVar4 = 0;
    do {
      in_ECX = local_44;
      uVar12 = local_28 - uVar4;
      if (local_28 < uVar4 || uVar12 == 0) {
        local_28 = 0;
        recovered_10003164(local_2c);
        local_3c = (void *)0x0;
        recovered_10003164(local_40);
        local_8c[1] = 0xffffffff;
        local_18 = recovered_10005c94(in_ECX,((uintptr_t)pf_module_state+0x72e7U),(uint *)0x0,0);
        goto LAB_100057a7;
      }
      if (0x3ffff < uVar12) {
        uVar12 = 0x40000;
      }
      local_8c[1] = 0xc;
      local_1c = (void *)uVar4;
      local_18 = uVar12;
      uVar12 = recovered_10005c94(local_44,((uintptr_t)pf_module_state+0x72f6U),(uint *)((int)local_2c + uVar4),uVar12);
      uVar4 = (int)local_1c + local_18;
    } while ((char)uVar12 != '\0');
    local_28 = 0;
    recovered_10003164(local_2c);
    local_3c = (void *)0x0;
    recovered_10003164(local_40);
    local_18 = 0;
    in_ECX = local_44;
  }
LAB_100057a7:
  local_8c[1] = 0xffffffff;
  recovered_10002910((int *)in_ECX);
LAB_100057c5:
  recovered_100034af(local_8c);
  return;
}

#undef DAT_10007f74
#undef LAB_10005c14
#undef PTR_recovered_100030f0_10008004
#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c
#undef in_stack_00000010
#undef auStackY_12c
#undef local_8c
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
#undef uStack_14
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x509cU)
 */

uchar recovered_10005c6c(uint *in_ECX,int in_EDX,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint *puVar1;
  bool bVar2;

  if (param_3 == (uint *)0x0) {
    bVar2 = true;
  }
  else {
    puVar1 = (uint *)recovered_10002aa4(in_EDX,1,(int)param_3,in_ECX);
    bVar2 = puVar1 == param_3;
  }
  return bVar2;
}


#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x50c4U)
 */

uint recovered_10005c94(uint *in_ECX,int in_EDX,uint *param_3,int param_4)

{
  unsigned char frame[72] = {0};

  uchar uVar1;
  uint in_ECX_00;
  undefined3 extraout_var = 0;

  if (param_3 != (uint *)0x0 || param_4 == 0) {
    local_18 = (uint)param_4 >> 0x18 | (param_4 & 0xff0000U) >> 8 | (param_4 & 0xff00U) << 8 |
               param_4 << 0x18;
    in_ECX_00 = recovered_10005d3f(0,(byte *)in_EDX,4);
    if (param_4 != 0) {
      in_ECX_00 = recovered_10005d3f(in_ECX_00,(byte *)param_3,param_4);
    }
    local_14 = in_ECX_00 >> 0x18 | (in_ECX_00 & 0xff0000) >> 8 | (in_ECX_00 & 0xff00) << 8 |
               in_ECX_00 << 0x18;
    uVar1 = recovered_10005c6c(in_ECX,(int)&local_18,(uint *)0x4);
    if (((uVar1 != '\0') && (uVar1 = recovered_10005c6c(in_ECX,in_EDX,(uint *)0x4), uVar1 != '\0'))
       && (uVar1 = recovered_10005c6c(in_ECX,(int)param_3,(uint *)param_4), uVar1 != '\0')) {
      uVar1 = recovered_10005c6c(in_ECX,(int)&local_14,(uint *)0x4);
      return CONCAT31(extraout_var,uVar1);
    }
  }
  return 0;
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5166U)
 */

uint recovered_10005d36(uint *in_ECX)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *in_ECX;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


#undef DAT_10008290
#define DAT_10008290 (*(char *)(((uintptr_t)pf_module_state + 0x76c0U)))
#undef DAT_10008294
#define DAT_10008294 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x76c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x516fU)
 */

uint recovered_10005d3f(uint in_ECX,byte *in_EDX,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  if (DAT_10008290 == '\0') {
    for (uVar3 = 0; uVar3 != 0x100; uVar3 = uVar3 + 1) {
      iVar2 = 8;
      uVar1 = uVar3;
      while (bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4) {
        uVar1 = uVar1 >> 1 ^ -(uVar1 & 1) & 0xedb88320;
      }
      (&DAT_10008294)[uVar3] = uVar1;
    }
    DAT_10008290 = '\x01';
  }
  uVar3 = ~in_ECX;
  while (bVar4 = param_3 != 0, param_3 = param_3 - 1, bVar4) {
    uVar3 = uVar3 >> 8 ^ (&DAT_10008294)[(byte)(*in_EDX ^ (byte)uVar3)];
    in_EDX = in_EDX + 1;
  }
  return ~uVar3;
}

#undef DAT_10008290
#undef DAT_10008294

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x51deU)
 */

void recovered_10005dae(int *param_1,uchar *param_2,uchar *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005dd0(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5200U)
 */

int recovered_10005dd0(int *param_1,int param_2,uchar *param_3,uchar *param_4)

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
      recovered_10005e74(param_1,uVar4);
      uVar2 = param_1[1];
    }
    for (; uVar5 < uVar2; uVar2 = uVar2 - 1) {
      *(undefined1 *)(iVar6 + (uVar2 - 1) + *param_1) = *(undefined1 *)((uVar2 - 1) + *param_1);
    }
    uVar2 = uVar5;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(uchar *)(*param_1 + uVar2) = *param_3;
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
 * Address: ((uintptr_t)pf_module_state+0x52a4U)
 */

/* WARNING: Variable defined which should be unmapped: param_2 */

uint recovered_10005e74(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10005ebe(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10003164((void *)*param_1);
    *param_1 = (int)pvVar1;
    param_1[2] = param_2;
  }
  return param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x52eeU)
 */

void * recovered_10005ebe(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  pvVar1 = recovered_10003132(param_1);
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5302U)
 */

uint recovered_10005ed2(int *param_1,uint param_2,uchar *param_3)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  param_1[1] = 0;
  recovered_10005ee2(param_1,param_2,param_3);
  return extraout_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5312U)
 */

void recovered_10005ee2(int *param_1,uint param_2,uchar *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_10005f32(param_1,param_2);
    return;
  }
  recovered_10005e74(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(uchar *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5362U)
 */

void recovered_10005f32(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_10005e74(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_10007cb8
#define DAT_10007cb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53a0U)
 */

int recovered_10005f70(int in_ECX)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(in_ECX + 0xc);
  iVar2 = 0;
  if (uVar1 < 7) {
    if ((0x5dU >> (uVar1 & 0x1f) & 1) != 0) {
      iVar2 = *(int *)(in_ECX + 8) * *(int *)(&DAT_10007cb8 + uVar1 * 4);
    }
  }
  return iVar2;
}

#undef DAT_10007cb8

#undef DAT_10007f90
#define DAT_10007f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73c0U)))
#undef DAT_10008694
#define DAT_10008694 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7ac4U)))
#undef DAT_100086e4
#define DAT_100086e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b14U)))
#undef DAT_100086e8
#define DAT_100086e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b18U)))
#undef DAT_100086f0
#define DAT_100086f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7b20U)))
#undef DAT_10008740
#define DAT_10008740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b70U)))
#undef DAT_10008744
#define DAT_10008744 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b74U)))
#undef LAB_10006a4c
#define LAB_10006a4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e7cU)))
#undef PTR_recovered_100030f0_10008004
#define PTR_recovered_100030f0_10008004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7434U)))
#define local_20c (*(uint (*)[16])(frame + 160))
#define local_1cc (*(void * *)(frame + 224))
#define local_1c8 (*(undefined4 *)(frame + 228))
#define local_1bc (*(undefined1 *)(frame + 240))
#define local_1b8 (*(uint (*)[16])(frame + 244))
#define local_178 (*(void * *)(frame + 308))
#define local_174 (*(undefined4 *)(frame + 312))
#define local_168 (*(undefined1 *)(frame + 324))
#define local_164 (*(uint (*)[16])(frame + 328))
#define local_124 (*(void * *)(frame + 392))
#define local_120 (*(undefined4 *)(frame + 396))
#define local_114 (*(undefined1 *)(frame + 408))
#define local_110 (*(void * *)(frame + 412))
#define local_10c (*(undefined4 *)(frame + 416))
#define local_d0 (*(void * *)(frame + 476))
#define local_cc (*(undefined4 *)(frame + 480))
#define local_c0 (*(undefined1 *)(frame + 492))
#define local_bc (*(int *)(frame + 496))
#define local_b8 (*(int *)(frame + 500))
#define local_b4 (*(int *)(frame + 504))
#define local_b0 (*(byte * *)(frame + 508))
#define local_ac (*(int *)(frame + 512))
#define local_a8 (*(int *)(frame + 516))
#define local_a4 (*(uint *)(frame + 520))
#define local_a0 (*(uint *)(frame + 524))
#define local_9c (*(uint *)(frame + 528))
#define local_98 (*(int *)(frame + 532))
#define local_94 (*(int * *)(frame + 536))
#define local_90 (*(void * *)(frame + 540))
#define local_8c (*(undefined4 *)(frame + 544))
#define local_84 (*(uint * *)(frame + 552))
#define local_80 (*(int *)(frame + 556))
#define local_7c (*(uint (*)[6])(frame + 560))
#define local_64 (*(undefined * *)(frame + 584))
#define local_60 (*(undefined * *)(frame + 588))
#define local_5c (*(undefined1 * *)(frame + 592))
#define local_58 (*(undefined1 * *)(frame + 596))
#define local_54 (*(undefined1 * *)(frame + 600))
#define local_48 (*(int * *)(frame + 612))
#define local_44 (*(int *)(frame + 616))
#define local_3c (*(void * *)(frame + 624))
#define local_38 (*(undefined4 *)(frame + 628))
#define local_30 (*(uint *)(frame + 636))
#define local_2c (*(uint *)(frame + 640))
#define local_28 (*(uint * *)(frame + 644))
#define local_24 (*(uint *)(frame + 648))
#define local_20 (*(undefined4 *)(frame + 652))
#define local_1c (*(uint *)(frame + 656))
#define local_18 (*(uint *)(frame + 660))
#define auStackY_29c (*(undefined1 (*)[128])(frame + 16))
#define local_14 (*(uint *)(frame + 664))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x53c4U)
 */

uchar recovered_10005f94(int *in_ECX,int *in_EDX)

{
  unsigned char frame[716] = {0};

  byte *pbVar1;
  void *data;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void **ppvVar9;
  uint *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  byte bVar13;

  bVar13 = 0;
  local_5c = (undefined1 *)(local_7c + 0x1e);
  local_54 = auStackY_29c + 0x80;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  iVar8 = *in_EDX;
  iVar7 = in_EDX[1];
  local_64 = PTR_recovered_100030f0_10008004;
  local_60 = &DAT_10007f90;
  local_58 = &LAB_10006a4c;
  local_84 = (uint *)(in_ECX + 3);
  local_94 = in_ECX;
  recovered_1000349a(local_7c);
  piVar4 = local_94;
  uVar2 = 0;
  for (iVar7 = iVar7 << 3; iVar7 != 0; iVar7 = iVar7 + -8) {
    bVar12 = CARRY4(uVar2,*(uint *)(iVar8 + 4));
    uVar2 = uVar2 + *(uint *)(iVar8 + 4);
    if (bVar12) goto LAB_100069f1;
    iVar8 = iVar8 + 8;
  }
  local_7c[1] = 0xffffffff;
  recovered_10005e74(local_94,uVar2);
  puVar11 = (undefined4 *)*in_EDX;
  for (iVar8 = in_EDX[1] << 3; iVar8 != 0; iVar8 = iVar8 + -8) {
    local_7c[1] = 0xffffffff;
    recovered_10005dd0(piVar4,*piVar4 + piVar4[1],(uchar *)*puVar11,(uchar *)*puVar11 + puVar11[1]);
    puVar11 = puVar11 + 2;
  }
  piVar4[4] = 0;
  if (5 < (uint)piVar4[1]) {
    pbVar1 = (byte *)*piVar4;
    if ((*pbVar1 & 0xf) == 8) {
      bVar5 = pbVar1[1];
      local_18 = (uint)bVar5;
      bVar12 = false;
      if (((bVar5 & 0x20) == 0) && ((ushort)(CONCAT11(*pbVar1,bVar5) % 0x1f) == 0)) {
        local_ac = piVar4[1] - 6;
        local_b0 = pbVar1 + 2;
        local_a8 = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_9c = 0;
        do {
          local_14 = 0;
          local_98 = 0;
          uVar2 = recovered_10006df6((int *)&local_b0,1,(int *)&local_14);
          if (((char)uVar2 == '\0') ||
             (uVar3 = recovered_10006df6((int *)&local_b0,2,&local_98), uVar2 = local_14,
             (char)uVar3 == '\0')) goto LAB_100069f1;
          if (local_98 == 2) {
            local_18 = local_14;
            iVar8 = 0x14;
            puVar10 = local_20c;
            for (iVar7 = iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            }
            local_1bc = 0;
            puVar10 = local_1b8;
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
            }
            local_168 = 0;
            local_bc = 0;
            local_b8 = 0;
            local_b4 = 0;
            uVar2 = recovered_10006df6((int *)&local_b0,5,&local_bc);
            if ((((char)uVar2 == '\0') ||
                (uVar2 = recovered_10006df6((int *)&local_b0,5,&local_b8), (char)uVar2 == '\0')) ||
               (uVar2 = recovered_10006df6((int *)&local_b0,4,&local_b4), (char)uVar2 == '\0')) {
LAB_1000662a:
              iVar8 = 1;
            }
            else {
              local_80 = local_bc + 0x101;
              local_1c = local_b8;
              local_110 = (void *)0x0;
              local_7c[1] = 5;
              recovered_1000729e((int *)&local_90,0x13,(uint *)&local_110);
              data = local_90;
              iVar7 = local_b4;
              local_1c = local_1c + 1;
              for (iVar8 = -4; iVar7 != iVar8; iVar8 = iVar8 + 1) {
                local_110 = (void *)0x0;
                uVar2 = recovered_10006df6((int *)&local_b0,3,(int *)&local_110);
                if ((char)uVar2 == '\0') {
                  local_8c = 0;
                  recovered_10003164(data);
                  goto LAB_1000662a;
                }
                *(void **)((int)data + *(int *)(iVar8 * 4 + ((uintptr_t)pf_module_state+0x703cU)) * 4) = local_110;
              }
              ppvVar9 = &local_110;
              for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
                *ppvVar9 = (void *)0x0;
                ppvVar9 = ppvVar9 + (uint)bVar13 * -2 + 1;
              }
              local_c0 = 0;
              local_7c[1] = 6;
              uVar2 = recovered_10007184((int *)&local_90,(int *)&local_110,(int *)0x0);
              if ((char)uVar2 == '\0') {
                cVar6 = '\0';
              }
              else {
                local_28 = (uint *)0x0;
                local_24 = 0;
                local_20 = 0;
                local_1c = local_1c + local_80;
                local_7c[1] = 7;
                recovered_1000733e((int *)&local_28,local_1c);
                do {
                  uVar2 = local_24;
                  if (local_1c <= local_24) {
                    local_7c[1] = 0xc;
                    recovered_100075b2((int *)&local_3c,local_28,local_28 + local_80);
                    local_7c[1] = 0xd;
                    recovered_100075b2((int *)&local_48,local_28 + local_80,local_28 + local_24);
                    local_7c[1] = 0xe;
                    uVar2 = recovered_10007184((int *)&local_3c,(int *)local_20c,(int *)0x0);
                    if ((char)uVar2 == '\0') {
                      cVar6 = '\0';
                    }
                    else {
                      bVar12 = false;
                      piVar4 = local_48;
                      for (iVar8 = local_44 << 2; iVar8 != 0; iVar8 = iVar8 + -4) {
                        bVar12 = (bool)(bVar12 | *piVar4 != 0);
                        piVar4 = piVar4 + 1;
                      }
                      if (bVar12) {
                        local_7c[1] = 0xf;
                        uVar2 = recovered_10007184((int *)&local_48,(int *)local_1b8,(int *)0x1);
                        cVar6 = (char)uVar2;
                      }
                      else {
                        puVar10 = local_164;
                        for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
                          *puVar10 = 0;
                          puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
                        }
                        local_114 = 0;
                        recovered_100073a8(local_1b8,local_164);
                        local_120 = 0;
                        recovered_10003164(local_124);
                        local_168 = 1;
                        cVar6 = '\x01';
                      }
                    }
                    local_44 = 0;
                    recovered_10003164(local_48);
                    local_38 = 0;
                    recovered_10003164(local_3c);
                    goto LAB_100067a3;
                  }
                  local_164[0] = 0;
                  uVar3 = recovered_10007080((int *)&local_b0,(int)&local_110,(uint)local_164);
                  if ((char)uVar3 == '\0') break;
                  if (local_164[0] < 0x10) {
                    local_7c[1] = 8;
                    recovered_10007532((int *)&local_28,local_164);
                    iVar8 = 5;
                  }
                  else if (local_164[0] == 0x12) {
                    local_3c = (void *)0x0;
                    uVar3 = recovered_10006df6((int *)&local_b0,7,(int *)&local_3c);
                    iVar8 = 1;
                    if ((char)uVar3 != '\0') {
                      local_2c = (int)local_3c + 0xb;
                      uVar3 = 0;
                      while ((uVar3 < local_2c && (uVar2 < local_1c))) {
                        local_48 = (int *)0x0;
                        local_7c[1] = 0xb;
                        local_30 = uVar3;
                        recovered_10007572((int *)&local_28,(uint *)&local_48);
                        uVar3 = local_30 + 1;
                        uVar2 = local_24;
                      }
                      goto LAB_10006608;
                    }
                  }
                  else {
                    if (local_164[0] != 0x11) {
                      if ((local_164[0] == 0x10) && (uVar2 != 0)) {
                        local_3c = (void *)0x0;
                        uVar3 = recovered_10006df6((int *)&local_b0,2,(int *)&local_3c);
                        iVar8 = 1;
                        if ((char)uVar3 != '\0') {
                          local_2c = (int)local_3c + 3;
                          local_48 = (int *)local_28[uVar2 - 1];
                          uVar3 = 0;
                          while ((uVar3 < local_2c && (uVar2 < local_1c))) {
                            local_7c[1] = 9;
                            local_30 = uVar3;
                            recovered_10007532((int *)&local_28,(uint *)&local_48);
                            uVar3 = local_30 + 1;
                            uVar2 = local_24;
                          }
LAB_10006608:
                          iVar8 = 5;
                        }
                        goto LAB_1000660b;
                      }
                      break;
                    }
                    local_3c = (void *)0x0;
                    uVar3 = recovered_10006df6((int *)&local_b0,3,(int *)&local_3c);
                    iVar8 = 1;
                    if ((char)uVar3 != '\0') {
                      local_2c = (int)local_3c + 3;
                      uVar3 = 0;
                      while ((uVar3 < local_2c && (uVar2 < local_1c))) {
                        local_48 = (int *)0x0;
                        local_7c[1] = 10;
                        local_30 = uVar3;
                        recovered_10007572((int *)&local_28,(uint *)&local_48);
                        uVar3 = local_30 + 1;
                        uVar2 = local_24;
                      }
                      goto LAB_10006608;
                    }
                  }
LAB_1000660b:
                } while (iVar8 == 5);
                cVar6 = '\0';
LAB_100067a3:
                local_24 = 0;
                recovered_10003164(local_28);
              }
              local_cc = 0;
              recovered_10003164(local_d0);
              local_8c = 0;
              recovered_10003164(local_90);
              iVar8 = 1;
              if (cVar6 != '\0') {
                local_7c[1] = 0x10;
                uVar2 = recovered_10006e98((uint *)&local_b0,(uint)local_20c,(uint)local_1b8,
                                           local_84);
                iVar8 = (uVar2 & 0xff) * 2 + 1;
              }
            }
            local_174 = 0;
            recovered_10003164(local_178);
            local_1c8 = 0;
            recovered_10003164(local_1cc);
LAB_10006676:
            uVar2 = local_18;
            if (iVar8 != 3) goto LAB_100069f1;
          }
          else {
            if (local_98 != 1) {
              if (local_98 == 0) {
                local_18 = local_14;
                bVar5 = (byte)local_9c & 7;
                local_a4 = local_a4 >> bVar5 | local_a0 << 0x20 - bVar5;
                local_9c = local_9c & 0xfffffff8;
                local_110 = (void *)0x0;
                local_164[0] = 0;
                local_20c[0] = 0;
                local_1b8[0] = 0;
                local_a0 = local_a0 >> bVar5;
                uVar2 = recovered_10006df6((int *)&local_b0,8,(int *)&local_110);
                iVar8 = 1;
                if ((char)uVar2 != '\0') {
                  uVar2 = recovered_10006df6((int *)&local_b0,8,(int *)local_164);
                  iVar8 = 1;
                  if ((char)uVar2 != '\0') {
                    uVar2 = recovered_10006df6((int *)&local_b0,8,(int *)local_20c);
                    iVar8 = 1;
                    if ((char)uVar2 != '\0') {
                      uVar2 = recovered_10006df6((int *)&local_b0,8,(int *)local_1b8);
                      iVar8 = 1;
                      if ((char)uVar2 != '\0') {
                        uVar2 = local_164[0] << 8 | (uint)local_110;
                        iVar8 = 1;
                        if (((local_1b8[0] << 8 | local_20c[0]) ^ uVar2) == 0xffff) {
                          while (bVar12 = uVar2 != 0, uVar2 = uVar2 - 1, bVar12) {
                            local_90 = (void *)0x0;
                            uVar3 = recovered_10006df6((int *)&local_b0,8,(int *)&local_90);
                            if ((char)uVar3 == '\0') {
                              iVar8 = 1;
                              goto LAB_10006676;
                            }
                            local_28 = (uint *)CONCAT31(PF_PART3(local_28, 1),PF_PART1(local_90, 0));
                            local_7c[1] = 0xffffffff;
                            recovered_1000703c((int *)local_84,(uchar *)&local_28);
                          }
                          iVar8 = 3;
                        }
                      }
                    }
                  }
                }
                goto LAB_10006676;
              }
              goto LAB_100069f1;
            }
            if ((DAT_100086e8 == '\0') &&
               (uVar3 = recovered_10003337((uint *)&DAT_100086e8), uVar3 != 0)) {
              local_18 = uVar2;
              local_164[0] = 8;
              local_7c[1] = 1;
              recovered_1000729e((int *)&local_110,0x120,local_164);
              for (iVar8 = -0x70; iVar8 != 0; iVar8 = iVar8 + 1) {
                *(undefined4 *)((int)local_110 + iVar8 * 4 + 0x400) = 9;
              }
              for (iVar8 = -0x18; iVar8 != 0; iVar8 = iVar8 + 1) {
                *(undefined4 *)((int)local_110 + iVar8 * 4 + 0x460) = 7;
              }
              for (iVar8 = -8; iVar8 != 0; iVar8 = iVar8 + 1) {
                *(undefined4 *)((int)local_110 + iVar8 * 4 + 0x480) = 8;
              }
              puVar11 = &DAT_10008694;
              for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
              }
              DAT_100086e4 = 0;
              local_7c[1] = 2;
              recovered_10007184((int *)&local_110,&DAT_10008694,(int *)0x0);
              local_10c = 0;
              recovered_10003164(local_110);
              recovered_10003330();
              recovered_10003346((uchar *)&DAT_100086e8);
              uVar2 = local_18;
            }
            if ((DAT_10008744 == '\0') &&
               (uVar3 = recovered_10003337((uint *)&DAT_10008744), uVar3 != 0)) {
              local_164[0] = 5;
              local_7c[1] = 3;
              local_18 = uVar2;
              recovered_1000729e((int *)&local_110,0x20,local_164);
              puVar11 = &DAT_100086f0;
              for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
              }
              DAT_10008740 = 0;
              local_7c[1] = 4;
              recovered_10007184((int *)&local_110,&DAT_100086f0,(int *)0x0);
              local_10c = 0;
              recovered_10003164(local_110);
              recovered_10003330();
              recovered_10003346((uchar *)&DAT_10008744);
              uVar2 = local_18;
            }
            local_7c[1] = 0xffffffff;
            uVar3 = recovered_10006e98((uint *)&local_b0,((uintptr_t)pf_module_state+0x7ac4U),((uintptr_t)pf_module_state+0x7b20U),local_84);
            if ((char)uVar3 == '\0') goto LAB_100069f1;
          }
          piVar4 = local_94;
        } while (uVar2 == 0);
        bVar12 = false;
        if ((local_a8 == local_ac) && (local_9c < 8)) {
          uVar2 = recovered_10005d36((uint *)(*local_94 + -4 + local_94[1]));
          uVar3 = recovered_10006fc7(piVar4[3],piVar4[4]);
          bVar12 = uVar3 == uVar2;
        }
      }
      goto LAB_100069f3;
    }
  }
LAB_100069f1:
  bVar12 = false;
LAB_100069f3:
  recovered_100034af(local_7c);
  return bVar12;
}

#undef DAT_10007f90
#undef DAT_10008694
#undef DAT_100086e4
#undef DAT_100086e8
#undef DAT_100086f0
#undef DAT_10008740
#undef DAT_10008744
#undef LAB_10006a4c
#undef PTR_recovered_100030f0_10008004
#undef local_20c
#undef local_1cc
#undef local_1c8
#undef local_1bc
#undef local_1b8
#undef local_178
#undef local_174
#undef local_168
#undef local_164
#undef local_124
#undef local_120
#undef local_114
#undef local_110
#undef local_10c
#undef local_d0
#undef local_cc
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
#undef local_94
#undef local_90
#undef local_8c
#undef local_84
#undef local_80
#undef local_7c
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef auStackY_29c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x5fcaU)
 */

uint recovered_10006b9a(int in_ECX,void *in_EDX,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;

  uVar1 = *(uint *)(in_ECX + 0x18);
  if ((CARRY4(param_3,uVar1)) || (*(uint *)(in_ECX + 0x10) < param_3 + uVar1)) {
    uVar1 = 0;
  }
  else {
    pvVar2 = recovered_100011f6(in_EDX,(void *)(uVar1 + *(int *)(in_ECX + 0xc)),param_3);
    *(uint *)(in_ECX + 0x18) = param_3 + uVar1;
    uVar1 = CONCAT31((int3)((uint)pvVar2 >> 8),1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6000U)
 */

uint recovered_10006bd0(undefined4 in_ECX,void *in_EDX,uint param_3,int param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined3 uVar3;
  void *pvVar2;
  char cVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  switch((uintptr_t)(in_ECX)) {
  case 0:
switchD_10006bf0_caseD_0:
    pvVar2 = recovered_100011f6(in_EDX,(void *)param_3,param_5);
    break;
  case 1:
    uVar5 = param_6;
    if (param_5 <= (uint)param_6) {
      uVar5 = param_5;
    }
    for (uVar9 = 0; uVar5 != uVar9; uVar9 = uVar9 + 1) {
      *(undefined1 *)((int)in_EDX + uVar9) = *(undefined1 *)(param_3 + uVar9);
    }
    for (pvVar2 = (void *)0x0; (void *)(param_5 + uVar5 * -2 + uVar9) != pvVar2;
        pvVar2 = (void *)((int)pvVar2 + 1)) {
      *(char *)((int)in_EDX + uVar5 + (int)pvVar2) =
           *(char *)((uVar5 - param_6) + (int)in_EDX + (int)pvVar2) +
           *(char *)(param_3 + uVar5 + (int)pvVar2);
    }
    break;
  case 2:
    if (param_4 == 0) goto switchD_10006bf0_caseD_0;
    for (pvVar2 = (void *)0x0; (void *)param_5 != pvVar2; pvVar2 = (void *)((int)pvVar2 + 1)) {
      *(char *)((int)in_EDX + (int)pvVar2) =
           *(char *)(param_4 + (int)pvVar2) + *(char *)(param_3 + (int)pvVar2);
    }
    break;
  case 3:
    if (param_4 == 0) {
      uVar3 = 0;
      if (param_5 == 0) goto LAB_10006cdb;
      uVar5 = param_6;
      if (param_5 <= (uint)param_6) {
        uVar5 = param_5;
      }
      for (uVar9 = 0; uVar5 != uVar9; uVar9 = uVar9 + 1) {
        *(undefined1 *)((int)in_EDX + uVar9) = *(undefined1 *)(param_3 + uVar9);
      }
      pvVar2 = (void *)(param_3 + uVar5);
      for (iVar6 = 0; param_5 + uVar5 * -2 + uVar9 != iVar6; iVar6 = iVar6 + 1) {
        *(byte *)((int)in_EDX + iVar6 + uVar5) =
             (*(byte *)((int)in_EDX + iVar6 + (uVar5 - param_6)) >> 1) +
             *(char *)((int)pvVar2 + iVar6);
      }
    }
    else {
      pvVar2 = (void *)((int)in_EDX - param_6);
      for (uVar5 = 0; param_5 != uVar5; uVar5 = uVar5 + 1) {
        if (uVar5 < (uint)param_6) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)*(byte *)((int)pvVar2 + uVar5);
        }
        *(char *)((int)in_EDX + uVar5) =
             (char)(uVar9 + *(byte *)(param_4 + uVar5) >> 1) + *(char *)(param_3 + uVar5);
      }
    }
    break;
  case 4:
    if (param_4 == 0) {
      uVar5 = param_6;
      if (param_5 <= (uint)param_6) {
        uVar5 = param_5;
      }
      for (uVar9 = 0; uVar5 != uVar9; uVar9 = uVar9 + 1) {
        *(undefined1 *)((int)in_EDX + uVar9) = *(undefined1 *)(param_3 + uVar9);
      }
      for (pvVar2 = (void *)0x0; (void *)(param_5 + uVar5 * -2 + uVar9) != pvVar2;
          pvVar2 = (void *)((int)pvVar2 + 1)) {
        *(char *)((int)in_EDX + uVar5 + (int)pvVar2) =
             *(char *)((uVar5 - param_6) + (int)in_EDX + (int)pvVar2) +
             *(char *)(param_3 + uVar5 + (int)pvVar2);
      }
    }
    else {
      pvVar2 = (void *)((int)in_EDX - param_6);
      for (uVar5 = 0; param_5 != uVar5; uVar5 = uVar5 + 1) {
        uVar9 = 0;
        uVar12 = 0;
        if ((uint)param_6 <= uVar5) {
          uVar9 = (uint)*(byte *)(((int)in_EDX - param_6) + uVar5);
          uVar12 = (uint)*(byte *)((param_4 - param_6) + uVar5);
        }
        uVar1 = (uint)*(byte *)(param_4 + uVar5);
        uVar10 = uVar9 - uVar12;
        uVar11 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        uVar10 = (uVar10 + uVar1) - uVar12;
        uVar8 = (int)uVar10 >> 0x1f;
        uVar8 = (uVar10 ^ uVar8) - uVar8;
        uVar10 = uVar12;
        if (uVar11 <= uVar8) {
          uVar10 = uVar1;
        }
        uVar13 = (int)(uVar1 - uVar12) >> 0x1f;
        uVar13 = (uVar1 - uVar12 ^ uVar13) - uVar13;
        cVar4 = (char)uVar10;
        if (uVar13 <= uVar8) {
          cVar4 = (char)uVar9;
        }
        cVar7 = (char)uVar10;
        if (uVar13 <= uVar11) {
          cVar7 = cVar4;
        }
        *(char *)((int)in_EDX + uVar5) = cVar7 + *(char *)(param_3 + uVar5);
        pvVar2 = (void *)param_3;
      }
    }
    break;
  default:
    return 0;
  }
  uVar3 = (undefined3)((uint)pvVar2 >> 8);
LAB_10006cdb:
  return CONCAT31(uVar3,1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6206U)
 */

void recovered_10006dd6(uint *in_ECX)

{
  unsigned char frame[64] = {0};

  recovered_100076f0(in_ECX + 3);
  recovered_100076f0(in_ECX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6226U)
 */

uint recovered_10006df6(int *in_ECX,uint in_EDX,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  if (0x18 < in_EDX) {
    return 0;
  }
  uVar2 = in_ECX[5];
  while( true ) {
    if (in_EDX <= uVar2) {
      uVar4 = recovered_10000e8b(0xffffffffffffffff,in_EDX & 0xff);
      uVar3 = *(ulonglong *)(in_ECX + 3);
      *param_3 = ((uint)uVar4 ^ 0xffffffff) & (uint)*(ulonglong *)(in_ECX + 3);
      uVar3 = recovered_10000eca(uVar3,in_EDX & 0xff);
      *(ulonglong *)(in_ECX + 3) = uVar3;
      in_ECX[5] = in_ECX[5] - in_EDX;
      return CONCAT31((int3)(in_EDX >> 8),1);
    }
    uVar1 = in_ECX[2];
    if ((uint)in_ECX[1] <= uVar1) break;
    in_ECX[2] = uVar1 + 1;
    uVar3 = recovered_10000e8b((ulonglong)*(byte *)(*in_ECX + uVar1),uVar2 & 0xff);
    in_ECX[3] = in_ECX[3] | (uint)uVar3;
    in_ECX[4] = in_ECX[4] | (uint)(uVar3 >> 0x20);
    uVar2 = uVar2 + 8;
    in_ECX[5] = uVar2;
  }
  return 0;
}


#undef DAT_10007b0c
#define DAT_10007b0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f3cU)))
#undef DAT_10007b84
#define DAT_10007b84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fb4U)))
#define local_20 (*(uint *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(uint * *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x62c8U)
 */

uint recovered_10006e98(uint *reader,uint literal_table,uint distance_table,uint *output)

{
  unsigned char frame[80] = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  local_18 = reader;
  while( true ) {
    while( true ) {
      local_20 = 0;
      uVar1 = recovered_10007080((int *)reader,literal_table,(uint)&local_20);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      if (0xff < local_20) break;
      local_14 = CONCAT31(PF_PART3(local_14, 1),(char)local_20);
      recovered_1000703c((int *)output,(uchar *)&local_14);
    }
    if (local_20 == 0x100) {
      return 0x101;
    }
    if (0x11d < local_20) {
      return 0;
    }
    iVar2 = *(int *)(local_20 * 4 + ((uintptr_t)pf_module_state+0x6a50U));
    uVar1 = *(uint *)(local_20 * 4 + ((uintptr_t)pf_module_state+0x6ac4U));
    if (uVar1 != 0) {
      local_14 = 0;
      uVar1 = recovered_10006df6((int *)reader,uVar1,(int *)&local_14);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + local_14;
    }
    local_14 = 0;
    uVar1 = recovered_10007080((int *)reader,distance_table,(uint)&local_14);
    if ((char)uVar1 == '\0') break;
    if (0x1d < local_14) {
      return 0;
    }
    iVar3 = *(int *)(&DAT_10007b0c + local_14 * 4);
    if (*(uint *)(&DAT_10007b84 + local_14 * 4) != 0) {
      local_1c = 0;
      uVar1 = recovered_10006df6((int *)local_18,*(uint *)(&DAT_10007b84 + local_14 * 4),&local_1c);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + local_1c;
    }
    if (output[1] <= iVar3 - 1U) {
      return 0;
    }
    while (bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4) {
      recovered_10007140((int *)output,(uchar *)((output[1] - iVar3) + *output));
    }
    reader = local_18;
  }
  return 0;
}

#undef DAT_10007b0c
#undef DAT_10007b84
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63deU)
 */

void recovered_10006fae(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100076bc((uint *)(param_1 + 0x40));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x63f7U)
 */

uint recovered_10006fc7(int in_ECX,uint in_EDX)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  uVar4 = 1;
  uVar6 = 0;
  for (uVar2 = 0; uVar5 = in_EDX - uVar2, uVar2 <= in_EDX && uVar5 != 0; uVar2 = uVar2 + uVar5) {
    if (0x15af < uVar5) {
      uVar5 = 0x15b0;
    }
    pbVar1 = (byte *)(in_ECX + uVar2);
    uVar3 = uVar5;
    while (bVar7 = uVar3 != 0, uVar3 = uVar3 - 1, bVar7) {
      uVar4 = uVar4 + *pbVar1;
      uVar6 = uVar6 + uVar4;
      pbVar1 = pbVar1 + 1;
    }
    uVar4 = uVar4 % 0xfff1;
    uVar6 = uVar6 % 0xfff1;
  }
  return uVar4 | uVar6 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x646cU)
 */

int recovered_1000703c(int *param_1,uchar *param_2)

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
    recovered_10005e74(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(uchar *)(*param_1 + iVar2) = *param_2;
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 + 1 + *param_1 + -1;
}


#define local_24 (*(uint *)(frame + 16))
#define local_20 (*(uint *)(frame + 20))
#define local_1c (*(int *)(frame + 24))
#define local_18 (*(uint *)(frame + 28))
#define local_14 (*(int * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x64b0U)
 */

uint recovered_10007080(int *in_ECX,int in_EDX,uint param_3)

{
  unsigned char frame[84] = {0};

  ushort uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;

  if (*(char *)(in_EDX + 0x50) == '\x01') {
    local_18 = *(uint *)(in_EDX + 0x4c);
    piVar2 = (int *)0x0;
    if (local_18 != 0) {
      local_1c = 0;
      uVar4 = 0;
      local_14 = in_ECX;
      for (local_20 = 1; piVar3 = piVar2, local_20 <= local_18; local_20 = local_20 + 1) {
        local_24 = 0;
        piVar3 = (int *)recovered_10006df6(in_ECX,1,(int *)&local_24);
        if ((char)piVar3 == '\0') {
          local_14 = (int *)0x0;
          break;
        }
        piVar5 = (int *)(uVar4 | local_24);
        local_14 = *(int **)(in_EDX + local_20 * 4);
        piVar3 = (int *)((int)local_14 + (int)piVar2);
        if (piVar5 < piVar3) {
          uVar4 = (int)piVar5 + (local_1c - (int)piVar2);
          if (uVar4 < *(uint *)(in_EDX + 0x44)) {
            uVar1 = *(ushort *)(*(int *)(in_EDX + 0x40) + uVar4 * 2);
            *(uint *)param_3 = (uint)uVar1;
            piVar3 = (int *)CONCAT31((uint3)(byte)(uVar1 >> 8),1);
            local_14 = piVar3;
          }
          else {
            local_14 = (int *)0x0;
          }
          break;
        }
        local_1c = local_1c + (int)local_14;
        piVar2 = (int *)((int)piVar3 * 2);
        uVar4 = (int)piVar5 * 2;
        local_18 = *(uint *)(in_EDX + 0x4c);
      }
      piVar2 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),local_20 <= local_18 & (byte)local_14);
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return (uint)piVar2;
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6570U)
 */

int recovered_10007140(int *param_1,uchar *param_2)

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
    recovered_10005e74(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(uchar *)(*param_1 + iVar2) = *param_2;
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 + 1 + *param_1 + -1;
}


#define local_ac (*(uint (*)[16])(frame + 16))
#define local_6c (*(void * *)(frame + 80))
#define local_68 (*(undefined4 *)(frame + 84))
#define local_5c (*(undefined1 *)(frame + 96))
#define local_58 (*(int (*)[17])(frame + 100))
#define local_14 (*(int * *)(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x65b4U)
 */

uint recovered_10007184(int *in_ECX,int *in_EDX,int *param_3)

{
  unsigned char frame[220] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;

  bVar9 = 0;
  puVar7 = local_ac;
  local_14 = in_ECX;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_5c = 0;
  recovered_100073a8((uint *)in_EDX,local_ac);
  local_68 = 0;
  recovered_10003164(local_6c);
  puVar7 = (uint *)*local_14;
  iVar3 = local_14[1];
  for (iVar6 = iVar3 * 4; iVar6 != 0; iVar6 = iVar6 + -4) {
    uVar4 = *puVar7;
    if (0xf < uVar4) goto LAB_10007214;
    in_EDX[uVar4] = in_EDX[uVar4] + 1;
    uVar8 = in_EDX[0x13];
    if ((uint)in_EDX[0x13] <= uVar4) {
      uVar8 = uVar4;
    }
    in_EDX[0x13] = uVar8;
    puVar7 = puVar7 + 1;
  }
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),PF_PART1(param_3, 0));
  if (*in_EDX == iVar3) {
LAB_1000728f:
    *(char *)(in_EDX + 0x14) = (char)uVar4;
  }
  else {
    iVar3 = 1;
    iVar6 = -0x3c;
    do {
      if (iVar6 == 0) {
        uVar4 = 0;
        piVar5 = local_58;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
        }
        for (iVar6 = -0x3c; iVar6 != 0; iVar6 = iVar6 + 4) {
          *(uint *)((int)local_58 + iVar6 + 0x40) = uVar4;
          uVar4 = uVar4 + *(int *)((int)in_EDX + iVar6 + 0x40);
        }
        PF_PART2(local_ac[0], 0) = 0;
        recovered_100073e8(in_EDX + 0x10,uVar4,(ushort *)local_ac);
        local_58[0x10] = *local_14;
        iVar6 = local_14[1];
        piVar5 = (int *)in_EDX[0x10];
        local_14 = piVar5;
        for (iVar3 = 0; iVar6 != iVar3; iVar3 = iVar3 + 1) {
          iVar1 = *(int *)(local_58[0x10] + iVar3 * 4);
          piVar5 = (int *)local_58[0x10];
          if (iVar1 != 0) {
            iVar2 = local_58[iVar1];
            local_58[iVar1] = iVar2 + 1;
            *(short *)((int)local_14 + iVar2 * 2) = (short)iVar3;
            piVar5 = local_14;
          }
        }
        uVar4 = CONCAT31((int3)((uint)piVar5 >> 8),1);
        goto LAB_1000728f;
      }
      iVar3 = iVar3 * 2 - *(int *)((int)in_EDX + iVar6 + 0x40);
      iVar6 = iVar6 + 4;
    } while (-1 < iVar3);
LAB_10007214:
    uVar4 = 0;
  }
  return uVar4;
}

#undef local_ac
#undef local_6c
#undef local_68
#undef local_5c
#undef local_58
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66ceU)
 */

uint recovered_1000729e(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_100072b6(param_1,param_2,param_3);
  return extraout_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x66e6U)
 */

void recovered_100072b6(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_10007302(param_1,param_2);
    return;
  }
  recovered_1000733e(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(uint *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6732U)
 */

void recovered_10007302(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_1000733e(param_1,param_2);
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
 * Address: ((uintptr_t)pf_module_state+0x676eU)
 */

void recovered_1000733e(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_10007387(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined4 *)((int)pvVar2 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_10003164((void *)*param_1);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67b7U)
 */

void * recovered_10007387(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10003132(param_1 << 2);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x67d8U)
 */

uint * recovered_100073a8(uint *in_ECX,uint *in_EDX)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint *puVar2;
  uint *puVar3;

  puVar2 = in_EDX;
  puVar3 = in_ECX;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  recovered_100073f8(in_ECX + 0x10,in_EDX + 0x10);
  in_ECX[0x13] = in_EDX[0x13];
  *(char *)(in_ECX + 0x14) = (char)in_EDX[0x14];
  return in_ECX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6818U)
 */

void recovered_100073e8(int *param_1,uint param_2,ushort *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_1000743c(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6828U)
 */

uint * recovered_100073f8(uint *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10003164((void *)*param_1);
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
 * Address: ((uintptr_t)pf_module_state+0x686cU)
 */

void recovered_1000743c(int *param_1,uint param_2,ushort *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_1000748a(param_1,param_2);
    return;
  }
  recovered_100074c6(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(ushort *)(*param_1 + uVar1 * 2) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68baU)
 */

void recovered_1000748a(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_100074c6(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x68f6U)
 */

void recovered_100074c6(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  void *pvVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_10007511(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)((int)pvVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_10003164((void *)*param_1);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6941U)
 */

void * recovered_10007511(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = recovered_10003132(param_1 * 2);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6962U)
 */

void recovered_10007532(int *param_1,uint *param_2)

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
    recovered_1000733e(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(uint *)(*param_1 + iVar2 * 4) = *param_2;
  param_1[1] = iVar2 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x69a2U)
 */

void recovered_10007572(int *param_1,uint *param_2)

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
    recovered_1000733e(param_1,uVar1);
    iVar2 = param_1[1];
  }
  *(uint *)(*param_1 + iVar2 * 4) = *param_2;
  param_1[1] = iVar2 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x69e2U)
 */

void recovered_100075b2(int *param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_100075dc(param_1,0,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6a0cU)
 */

int recovered_100075dc(int *param_1,int param_2,uint *param_3,uint *param_4)

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
    uVar1 = param_2 - iVar4 >> 2;
  }
  if (3 < (uint)((int)param_4 - (int)param_3)) {
    uVar2 = (uint)((int)param_4 - (int)param_3) >> 2;
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
      recovered_1000733e(param_1,uVar5);
      uVar7 = param_1[1];
    }
    for (uVar6 = uVar7; uVar1 < uVar6; uVar6 = uVar6 - 1) {
      *(undefined4 *)(uVar2 * 4 + -4 + *param_1 + uVar6 * 4) =
           *(undefined4 *)(*param_1 + -4 + uVar6 * 4);
    }
    iVar4 = uVar1 * 4;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(uint *)(*param_1 + iVar4) = *param_3;
      iVar4 = iVar4 + 4;
    }
    param_1[1] = uVar7 + uVar2;
    iVar4 = *param_1;
    bVar8 = iVar4 == 0;
  }
  iVar3 = 0;
  if (!bVar8) {
    iVar3 = iVar4 + uVar1 * 4;
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6aecU)
 */

void recovered_100076bc(uint *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10003164((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b08U)
 */

uint recovered_100076d8(uint *param_1,uint pf_stack_arg_8)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_10005f32((int *)param_1,pf_stack_arg_8);
  return extraout_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b20U)
 */

void recovered_100076f0(uint *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10003164((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_module_state+0x6b3cU)
 */

void recovered_1000770c(uint *param_1,uchar *param_2,uchar *param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_10005dd0((int *)param_1,0,param_2,param_3);
  return;
}

