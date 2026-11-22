#include "scope_jump.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x1e24)))
void recovered_100005b0(void)

{
  unsigned char frame[64] = {0};

  DAT_02044ee0 = 0;
  recovered_100005c1();
  return;
}

#undef DAT_02044ee0

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_00006238
#define DAT_00006238 (*(uint8_t *)(0x6238U))
#undef DAT_0000623c
#define DAT_0000623c (*(uint8_t *)(0x623cU))
#undef DAT_00006240
#define DAT_00006240 (*(uint8_t *)(0x6240U))
#undef DAT_00006248
#define DAT_00006248 (*(uint8_t *)(0x6248U))
#undef DAT_1000d0f0
#define DAT_1000d0f0 (*(char *)(((uintptr_t)pf_module_state + 0x1e24U)))
#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e2cU)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#undef _DAT_00006238
#define _DAT_00006238 (*(int *)(0x6238U))
#undef _DAT_0000623c
#define _DAT_0000623c (*(uint *)(0x623cU))
#define local_438 (*(ulong (*)[130])(frame + 16))
#define local_28 (*(ulong *)(frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005c1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100005c1(void)

{
  unsigned char frame[1128] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulong uVar1;
  long lVar2;
  long extraout_RAX;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;

  local_28 = 0;
  if (DAT_1000d0f0 == '\0') {
    DAT_1000d0f8 = 0;
    local_438[1] = 0x10;
    uVar4 = 0x10;
    if (_DAT_0000608c < 0x10) {
      uVar4 = (ulong)_DAT_0000608c;
    }
    if ((_DAT_00006238 == 0x34364857) && (_DAT_0000623c != 0)) {
      local_438[1] = 0x40;
      uVar4 = 0x40;
      if (_DAT_0000623c < 0x40) {
        uVar4 = (ulong)_DAT_0000623c;
      }
      uVar1 = 0;
      for (uVar6 = 0; uVar6 != uVar4; uVar6 = uVar6 + 1) {
        if (*(long *)(&DAT_00006248 + uVar6 * 0x10) != 0) {
          uVar8 = *(ulong *)(&DAT_00006240 + uVar6 * 0x10);
          uVar7 = *(long *)(&DAT_00006248 + uVar6 * 0x10) + uVar8;
          if ((0x300000 < uVar7) && (uVar8 < uVar7)) {
            if (uVar8 < 0x300001) {
              uVar8 = 0x300000;
            }
            if (uVar1 < 0x40) {
              puVar3 = local_438 + uVar1 * 2 + 2;
              uVar9 = uVar1;
              while ((bVar11 = uVar9 != 0, uVar9 = uVar9 - 1, bVar11 && (uVar8 < puVar3[-2]))) {
                *puVar3 = puVar3[-2];
                puVar3[1] = puVar3[-1];
                puVar3 = puVar3 + -2;
              }
              *puVar3 = uVar8;
              puVar3[1] = uVar7 - uVar8;
              uVar1 = uVar1 + 1;
            }
          }
        }
      }
    }
    else {
      uVar1 = 0;
      for (uVar6 = 0; uVar6 != uVar4; uVar6 = uVar6 + 1) {
        uVar8 = (ulong)*(uint *)(&DAT_00006090 + uVar6 * 8);
        uVar7 = *(uint *)(&DAT_00006094 + uVar6 * 8) + uVar8;
        if (0x300000 < uVar7 && (ulong)*(uint *)(&DAT_00006094 + uVar6 * 8) != 0) {
          if (uVar8 < 0x300001) {
            uVar8 = 0x300000;
          }
          if (uVar1 < 0x40) {
            puVar3 = local_438 + uVar1 * 2 + 2;
            uVar9 = uVar1;
            while ((bVar11 = uVar9 != 0, uVar9 = uVar9 - 1, bVar11 && (uVar8 < puVar3[-2]))) {
              *puVar3 = puVar3[-2];
              puVar3[1] = puVar3[-1];
              puVar3 = puVar3 + -2;
            }
            *puVar3 = uVar8;
            puVar3[1] = uVar7 - uVar8;
            uVar1 = uVar1 + 1;
          }
        }
      }
    }
    if (uVar1 == 0) {
      lVar10 = 0;
      lVar2 = 0;
    }
    else {
      puVar3 = local_438 + 4;
      lVar2 = uVar1 - 1;
      local_438[1] = 1;
      lVar10 = 1;
      while (bVar11 = lVar2 != 0, lVar2 = lVar2 + -1, bVar11) {
        uVar4 = local_438[lVar10 * 2 + 1] + local_438[lVar10 * 2];
        if (uVar4 < *puVar3) {
          uVar4 = puVar3[1];
          local_438[lVar10 * 2 + 2] = *puVar3;
          local_438[lVar10 * 2 + 3] = uVar4;
          lVar10 = lVar10 + 1;
        }
        else {
          uVar1 = *puVar3 + puVar3[1];
          if (uVar4 < uVar1) {
            local_438[lVar10 * 2 + 1] = uVar1 - local_438[lVar10 * 2];
          }
        }
        puVar3 = puVar3 + 2;
      }
    }
    puVar3 = local_438 + 3;
    while( true ) {
      in_EAX = (uint)lVar2;
      bVar11 = lVar10 == 0;
      lVar10 = lVar10 + -1;
      if (bVar11) break;
      local_438[1] = 0x100007c3;
      recovered_10001dd6(puVar3[-1],*puVar3,&local_28);
      puVar3 = puVar3 + 2;
      lVar2 = extraout_RAX;
    }
    if (DAT_1000d0f8 == 0) {
      uVar5 = _DAT_00006088 & 0xfffffff0;
      if (_DAT_00006088 < 0x300001) {
        uVar5 = 0x4000000;
      }
      uVar4 = (ulong)uVar5;
      if (uVar5 < 0x300029) {
        uVar4 = 0x4000000;
      }
      local_438[1] = 0x1000080a;
      recovered_10001dd6(0x300000,uVar4 - 0x300000,&local_28);
      in_EAX = extraout_EAX;
    }
    DAT_1000d0f0 = '\x01';
  }
  return in_EAX;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_00006238
#undef DAT_0000623c
#undef DAT_00006240
#undef DAT_00006248
#undef DAT_1000d0f0
#undef DAT_1000d0f8
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef local_438
#undef local_28

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e2c)))
ulong recovered_1000081f(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100005c1();
  uVar3 = 0;
  for (plVar1 = &DAT_02044ee8; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
  {
    if ((char)plVar1[2] == '\x01') {
      uVar3 = uVar3 + *plVar1;
    }
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_02044ee8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e2c)))
long recovered_10000856(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c1();
  lVar1 = 0;
  for (plVar2 = &DAT_02044ee8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_02044ee8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e2c)))
ulong recovered_10000881(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100005c1();
  uVar3 = 0;
  for (plVar1 = &DAT_02044ee8; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
  {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_02044ee8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e2c)))
long recovered_100008b2(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100005c1();
  lVar1 = 0;
  for (plVar2 = &DAT_02044ee8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = lVar1 + *plVar2;
  }
  return lVar1;
}

#undef DAT_02044ee8

#undef DAT_1000d0f8
#define DAT_1000d0f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d7
 */

ulonglong recovered_100008d7(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return 0;
  }
  recovered_100005c1();
  uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
  puVar2 = &DAT_1000d0f8;
  do {
    puVar2 = (ulong *)*puVar2;
    if (puVar2 == (ulong *)0x0) {
      return 0;
    }
    if ((char)puVar2[2] == '\x01') {
      uVar1 = *puVar2;
      if (uVar4 <= uVar1) {
        if (uVar4 + 0x30 <= uVar1) {
          plVar3 = (long *)((long)puVar2 + uVar4 + 0x20);
          *plVar3 = (uVar1 - uVar4) + -0x20;
          *(ulong *)((long)puVar2 + uVar4 + 0x28) = puVar2[1];
          *(undefined1 *)((long)puVar2 + uVar4 + 0x30) = 1;
          *puVar2 = uVar4;
          puVar2[1] = (ulong)plVar3;
        }
        *(undefined1 *)(puVar2 + 2) = 0;
        return (ulonglong)(puVar2 + 4);
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

#undef DAT_1000d0f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000959
 */

ulonglong recovered_10000959(ulonglong value,int shift)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;

  if (0 < shift) {
    if ((uint)shift < 0x40) {
      uVar1 = (uint)value;
      bVar2 = (byte)shift;
      if ((uint)shift < 0x20) {
        uVar3 = (ulong)(uVar1 << (bVar2 & 0x1f));
        uVar1 = (int)(value >> 0x20) << (bVar2 & 0x1f) | uVar1 >> 0x20 - (bVar2 & 0x1f);
      }
      else {
        uVar1 = uVar1 << (bVar2 & 0x1f);
        uVar3 = 0;
      }
      value = (ulong)uVar1 << 0x20 | uVar3;
    }
    else {
      value = 0;
    }
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000995
 */

ulonglong recovered_10000995(ulonglong value,int shift)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  if (0 < shift) {
    if ((uint)shift < 0x40) {
      bVar1 = (byte)shift;
      uVar2 = (uint)(value >> 0x20);
      if ((uint)shift < 0x20) {
        uVar3 = (uint)value >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
        uVar4 = (ulong)(uVar2 >> (bVar1 & 0x1f)) << 0x20;
      }
      else {
        uVar3 = uVar2 >> (bVar1 & 0x1f);
        uVar4 = 0;
      }
      value = uVar3 | uVar4;
    }
    else {
      value = 0;
    }
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009d4
 */

long recovered_100009d4(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;

  lVar1 = param_1;
  if ((0 < (int)param_2) && (lVar1 = param_1 >> 0x3f, param_2 < 0x40)) {
    bVar2 = (byte)param_2;
    iVar4 = (int)((ulong)param_1 >> 0x20);
    if (param_2 < 0x20) {
      uVar3 = (uint)param_1 >> (bVar2 & 0x1f) | iVar4 << 0x20 - (bVar2 & 0x1f);
      iVar4 = iVar4 >> (bVar2 & 0x1f);
    }
    else {
      uVar3 = iVar4 >> (bVar2 & 0x1f);
      iVar4 = iVar4 >> 0x1f;
    }
    lVar1 = CONCAT44(iVar4,uVar3);
  }
  return lVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10000a18(ulonglong a,ulonglong b)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10000a24(a,b,(long *)0x0);
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10000a24(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_2 == 0) {
    lVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = 0;
    for (uVar3 = 0x3f; -1 < (int)uVar3; uVar3 = (ulong)((int)uVar3 - 1)) {
      uVar1 = (ulong)((param_1 >> (uVar3 & 0x3f) & 1) != 0) + lVar4 * 2;
      uVar5 = 1L << ((byte)uVar3 & 0x3f);
      if (uVar1 < param_2) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = param_2;
      }
      uVar2 = uVar2 | uVar5;
      lVar4 = uVar1 - uVar6;
    }
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar4;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_18 (*(ulonglong *)(frame + 16))
ulonglong recovered_10000a7e(ulonglong a,ulonglong b)

{
  unsigned char frame[72] = {0};


  local_18 = 0;
  recovered_10000a24(a,b,(long *)&local_18);
  return local_18;
}

#undef local_18

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

longlong recovered_10000a9e(longlong a,longlong b)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (b == 0) {
    return 0;
  }
  uVar4 = -a;
  if (-a < 0) {
    uVar4 = a;
  }
  uVar3 = -b;
  if (-b < 0) {
    uVar3 = b;
  }
  uVar1 = recovered_10000a24(uVar4,uVar3,(long *)0x0);
  uVar2 = -uVar1;
  if (-1 < (b ^ a)) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_20 (*(long *)(frame + 16))
longlong recovered_10000ada(longlong a,longlong b)

{
  unsigned char frame[80] = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (b == 0) {
    return 0;
  }
  uVar3 = -a;
  if (-a < 0) {
    uVar3 = a;
  }
  uVar1 = -b;
  if (-b < 0) {
    uVar1 = b;
  }
  local_20 = 0;
  recovered_10000a24(uVar3,uVar1,&local_20);
  lVar2 = -local_20;
  if (-1 < a) {
    lVar2 = local_20;
  }
  return lVar2;
}

#undef local_20

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000b2d(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000b35(int value)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -value;
  if (-value < 0) {
    iVar1 = value;
  }
  return iVar1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000b42(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000b77(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000baa(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10000be2(void *out,void *pf_input,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)pf_input + uVar1);
  }
  return out;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10000bff(void *out,void *pf_input,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (size != 0 && out != pf_input) {
    if (out < pf_input) {
      for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
        *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)pf_input + uVar1);
      }
    }
    else {
      while (size != 0) {
        *(undefined1 *)((long)out + (size - 1)) = *(undefined1 *)((long)pf_input + (size - 1));
        size = size - 1;
      }
    }
  }
  return out;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10000c4b(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000c64(void *out,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = 0;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000c7a(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000c90(void *a,void *b,ulong size)

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
    pbVar1 = (byte *)((long)a + uVar3);
    pbVar2 = (byte *)((long)b + uVar3);
    uVar3 = uVar3 + 1;
  } while (*pbVar1 == *pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000cb7(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x61U < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000cc8(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x41U < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000cd9(int value)

{
  unsigned char frame[64] = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000ced(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d0f(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value == 9 || value == 0x20);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d26(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x20U < 0x5f);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d37(int value)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = value + 0x20;
  if (value - 0x5bU < 0xffffffe6) {
    iVar1 = value;
  }
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d49(int value)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = value + -0x20;
  if (value - 0x7bU < 0xffffffe6) {
    iVar1 = value;
  }
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulong recovered_10000d5b(char *s)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = 0;
  while( true ) {
    if (s == (char *)0x0) {
      return 0;
    }
    if (s[uVar1] == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d75(char *a,char *b)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  long lVar2;

  lVar2 = 0;
  while( true ) {
    bVar1 = a[lVar2];
    if ((bVar1 == 0) || (bVar1 != b[lVar2])) break;
    lVar2 = lVar2 + 1;
  }
  return (uint)bVar1 - (uint)(byte)b[lVar2];
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000d96(char *a,char *b)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10000d75(a,b);
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000da0(char *a,char *b)

{
  unsigned char frame[64] = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = b[lVar2];
    a[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return a;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000db8(char *s)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *out;

  if (s != (char *)0x0) {
    uVar1 = recovered_10000d5b(s);
    out = (char *)recovered_100008d7(uVar1 + 1);
    if (out != (char *)0x0) {
      recovered_10000be2(out,s,uVar1 + 1);
      return out;
    }
  }
  return (char *)0x0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000e06(char *s,int c)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if (*s == '\0') {
      if ((char)c != '\0') {
        s = (char *)0x0;
      }
      return s;
    }
    if ((char)c == *s) break;
    s = s + 1;
  }
  return s;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulong recovered_10000e2c(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (s[uVar2] == 0) {
      return uVar2;
    }
    pcVar1 = recovered_10000e06(set,(int)s[uVar2]);
    if (pcVar1 == (char *)0x0) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000e68(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*s == 0) {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000e06(set,(int)*s);
    if (pcVar1 != (char *)0x0) break;
    s = s + 1;
  }
  return s;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000e98(char *s,char *part)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (*part != '\0') {
    for (; *s != '\0'; s = s + 1) {
      lVar3 = 0;
      do {
        pcVar1 = part + lVar3;
        if (*pcVar1 == '\0') {
          return s;
        }
        pcVar2 = s + lVar3;
        lVar3 = lVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    s = (char *)0x0;
  }
  return s;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db58 (*(uint8_t *)((uintptr_t)(pf_module_state+0x234)))
undefined * recovered_10000ec7(void)

{
  unsigned char frame[64] = {0};

  return &DAT_0203db58;
}

#undef DAT_0203db58

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define PTR_DAT_02044d78 (*(uint8_t * *)((uintptr_t)(pf_module_state+0x1d34)))
undefined ** recovered_10000ed4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_02044d78;
}

#undef PTR_DAT_02044d78

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10000ee1(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x4)))
double recovered_10000ef8(double value,int exponent)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;

  for (iVar1 = exponent; 0 < iVar1; iVar1 = iVar1 + -1) {
    value = value + value;
  }
  for (uVar2 = exponent >> 0x1f & exponent; uVar2 != 0; uVar2 = uVar2 + 1) {
    value = value * DAT_0203d1c0;
  }
  return value;
}

#undef DAT_0203d1c0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x4)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x84)))
double recovered_10000f27(double value,int *exponent)

{
  unsigned char frame[64] = {0};

  int iVar1;
  double dVar2;

  if (exponent != (int *)0x0) {
    *exponent = 0;
  }
  dVar2 = 0.0;
  if ((value != 0.0) || (NAN(value))) {
    dVar2 = (double)(_DAT_0203d240 ^ (ulong)value);
    if ((double)(_DAT_0203d240 ^ (ulong)value) <= value) {
      dVar2 = value;
    }
    iVar1 = 0;
    for (; DAT_0203d1c8 <= dVar2; dVar2 = dVar2 * DAT_0203d1c0) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar2 && (dVar2 < DAT_0203d1c0)); dVar2 = dVar2 + dVar2) {
      iVar1 = iVar1 + -1;
    }
    if (exponent != (int *)0x0) {
      *exponent = iVar1;
    }
    dVar2 = (double)(~-(ulong)(value < 0.0) & (ulong)dVar2 |
                    (_DAT_0203d240 ^ (ulong)dVar2) & -(ulong)(value < 0.0));
  }
  return dVar2;
}

#undef DAT_0203d1c0
#undef DAT_0203d1c8
#undef _DAT_0203d240

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_10000fb9(double a,double b)

{
  unsigned char frame[64] = {0};

  if ((b == 0.0) && (!NAN(b))) {
    return 0.0;
  }
  return a - (double)(int)(a / b) * b;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
double recovered_10000fe8(double a,double b)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;

  dVar3 = 0.0;
  if (((double)(int)b == b) && (!NAN((double)(int)b) && !NAN(b))) {
    uVar1 = (uint)b;
    if (uVar1 == 0) {
      return DAT_0203d1c8;
    }
    uVar2 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar2 = uVar1;
    }
    dVar3 = DAT_0203d1c8;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        dVar3 = dVar3 * a;
      }
      a = a * a;
    }
    if ((int)uVar1 < 0) {
      return DAT_0203d1c8 / dVar3;
    }
  }
  return dVar3;
}

#undef DAT_0203d1c8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_10001050(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
double recovered_10001079(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_0203d1c8 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_0203d1c8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x4)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
double recovered_100010cb(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  double dVar3;

  dVar3 = 0.0;
  if (0.0 < value) {
    dVar3 = value;
    if (value <= DAT_0203d1c8) {
      dVar3 = DAT_0203d1c8;
    }
    iVar1 = 0x18;
    while (bVar2 = iVar1 != 0, iVar1 = iVar1 + -1, bVar2) {
      dVar3 = (value / dVar3 + dVar3) * DAT_0203d1c0;
    }
  }
  return dVar3;
}

#undef DAT_0203d1c0
#undef DAT_0203d1c8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x4)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define DAT_0203d1d0 (*(double *)((uintptr_t)(pf_module_state+0x14)))
#define DAT_0203d1d8 (*(double *)((uintptr_t)(pf_module_state+0x1c)))
#define DAT_0203d1e0 (*(double *)((uintptr_t)(pf_module_state+0x24)))
#define DAT_0203d1e8 (*(double *)((uintptr_t)(pf_module_state+0x2c)))
#define DAT_0203d1f8 (*(double *)((uintptr_t)(pf_module_state+0x3c)))
#define _DAT_0203d1f0 (*(double *)((uintptr_t)(pf_module_state+0x34)))
double recovered_10001111(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (value <= 0.0) {
    return DAT_0203d1d0;
  }
  iVar1 = 0;
  for (; DAT_0203d1d8 < value; value = value * DAT_0203d1c0) {
    iVar1 = iVar1 + 1;
  }
  for (; value < DAT_0203d1e0; value = value + value) {
    iVar1 = iVar1 + -1;
  }
  dVar5 = (DAT_0203d1e8 + value) / (value + DAT_0203d1c8);
  dVar3 = 0.0;
  dVar4 = DAT_0203d1c8;
  dVar6 = dVar5;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar3 = dVar3 + dVar6 / dVar4;
    dVar4 = dVar4 + DAT_0203d1f8;
    dVar6 = dVar5 * dVar5 * dVar6;
  }
  return dVar3 + dVar3 + (double)iVar1 * _DAT_0203d1f0;
}

#undef DAT_0203d1c0
#undef DAT_0203d1c8
#undef DAT_0203d1d0
#undef DAT_0203d1d8
#undef DAT_0203d1e0
#undef DAT_0203d1e8
#undef DAT_0203d1f8
#undef _DAT_0203d1f0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d250 (*(uint8_t *)((uintptr_t)(pf_module_state+0x94)))
long recovered_100011cd(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_0203d250 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_0203d250

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define _DAT_0203d200 (*(double *)((uintptr_t)(pf_module_state+0x44)))
#define _DAT_0203d260 (*(uint128 *)((uintptr_t)(pf_module_state+0xa4)))
double recovered_100011f1(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  dVar1 = recovered_10001240(value);
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_0203d260);
  return dVar1 * ((dVar2 / _DAT_0203d200 + DAT_0203d1c8 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8));
}

#undef DAT_0203d1c8
#undef _DAT_0203d200
#undef _DAT_0203d260

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d208 (*(double *)((uintptr_t)(pf_module_state+0x4c)))
#define DAT_0203d210 (*(double *)((uintptr_t)(pf_module_state+0x54)))
#define DAT_0203d218 (*(double *)((uintptr_t)(pf_module_state+0x5c)))
#define DAT_0203d220 (*(double *)((uintptr_t)(pf_module_state+0x64)))
double recovered_10001240(double param_1)

{
  unsigned char frame[64] = {0};

  for (; DAT_0203d208 < param_1; param_1 = param_1 + DAT_0203d220) {
  }
  for (; param_1 < DAT_0203d210; param_1 = param_1 + DAT_0203d218) {
  }
  return param_1;
}

#undef DAT_0203d208
#undef DAT_0203d210
#undef DAT_0203d218
#undef DAT_0203d220

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define DAT_0203d228 (*(double *)((uintptr_t)(pf_module_state+0x6c)))
#define _DAT_0203d270 (*(uint128 *)((uintptr_t)(pf_module_state+0xb4)))
double recovered_1000127e(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  dVar1 = recovered_10001240(value);
  dVar1 = dVar1 * dVar1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_0203d270);
  return (DAT_0203d228 * dVar1 + DAT_0203d1c8 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8);
}

#undef DAT_0203d1c8
#undef DAT_0203d228
#undef _DAT_0203d270

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x84)))
double recovered_100012c9(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_0203d240 ^ (ulong)value);
  if ((double)(_DAT_0203d240 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}

#undef _DAT_0203d240

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100012e3(float a,float b)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((b != 0.0) || (NAN(b))) {
    fVar1 = a - (float)(int)(a / b) * b;
  }
  return fVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001319(int *in_RDI,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000f27((double)param_2,in_RDI);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_1000132c(float param_1)

{
  unsigned char frame[64] = {0};

  int in_EDI;
  double dVar1;

  dVar1 = recovered_10000ef8((double)param_1,in_EDI);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_1000133f(float a,float b)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000fe8((double)a,(double)b);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001356(float value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  return (float)(double)(~uVar1 & (ulong)(double)(int)value |
                        (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001387(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001079((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_1000139a(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10001079(value);
    return dVar2;
  }
  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100013d3(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000139a((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100013e6(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010cb((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100013f9(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001111((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d250 (*(uint8_t *)((uintptr_t)(pf_module_state+0x94)))
ulonglong recovered_1000140c(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_0203d250 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_0203d250

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001430(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011f1((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001443(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000127e((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define _DAT_0203d280 (*(uint *)((uintptr_t)(pf_module_state+0xc4)))
float recovered_10001456(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = pf_bits_float(_DAT_0203d280 ^ pf_float_bits(value));
  if (pf_bits_float(_DAT_0203d280 ^ pf_float_bits(value)) <= value) {
    fVar1 = value;
  }
  return fVar1;
}

#undef _DAT_0203d280

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_1000146d(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  pbVar5 = (byte *)s;
  while( true ) {
    bVar1 = *pbVar5;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar6 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar5 + uVar6;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar5 + uVar6 + 2;
    }
  }
  else if (base == 0) {
    if (*pbVar3 == 0x30) {
      if ((pbVar5[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar5 + uVar6 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
    else {
      base = 10;
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (end != (char **)0x0) {
      *end = s;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    uVar2 = recovered_1000156d((int)(char)*pbVar3);
    if ((uint)base <= uVar2) break;
    lVar7 = lVar7 * (ulong)(uint)base + (ulong)uVar2;
    s = (char *)(pbVar3 + 1);
    pbVar3 = pbVar3 + 1;
  }
  if (end != (char **)0x0) {
    *end = s;
  }
  lVar4 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar4 = lVar7;
  }
  return lVar4;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_1000156d(int param_1)

{
  unsigned char frame[64] = {0};

  char cVar1;
  uint uVar2;

  cVar1 = (char)param_1;
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar2 = param_1 - 0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    uVar2 = param_1 - 0x57;
  }
  else {
    uVar2 = 0xffffffff;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      uVar2 = param_1 - 0x37;
    }
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulong recovered_100015a0(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;

  pbVar5 = (byte *)s;
  while( true ) {
    bVar1 = *pbVar5;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar6 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar5 + uVar6;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar5 + uVar6 + 2;
    }
  }
  else if (base == 0) {
    if (*pbVar3 == 0x30) {
      if ((pbVar5[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar5 + uVar6 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
    else {
      base = 10;
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (end != (char **)0x0) {
      *end = s;
    }
    return 0;
  }
  uVar6 = 0;
  while( true ) {
    uVar2 = recovered_1000156d((int)(char)*pbVar3);
    if ((uint)base <= uVar2) break;
    uVar6 = uVar6 * (uint)base + (ulong)uVar2;
    s = (char *)(pbVar3 + 1);
    pbVar3 = pbVar3 + 1;
  }
  if (end != (char **)0x0) {
    *end = s;
  }
  uVar4 = -uVar6;
  if (bVar1 != 0x2d) {
    uVar4 = uVar6;
  }
  return uVar4;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define DAT_0203d230 (*(double *)((uintptr_t)(pf_module_state+0x74)))
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x84)))
double recovered_100016a0(char *s,char **end)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  double dVar8;
  double dVar9;
  double dVar10;

  pbVar2 = (byte *)s;
  while( true ) {
    bVar1 = *pbVar2;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar2 = pbVar2 + 1;
  }
  dVar8 = 0.0;
  bVar5 = false;
  for (pbVar2 = pbVar2 + ((bVar1 - 0x2b & 0xfd) == 0); bVar4 = *pbVar2, (byte)(bVar4 - 0x30) < 10;
      pbVar2 = pbVar2 + 1) {
    dVar8 = dVar8 * DAT_0203d230 + (double)(int)(bVar4 - 0x30);
    bVar5 = true;
  }
  dVar10 = DAT_0203d1c8;
  if (bVar4 == 0x2e) {
    dVar9 = 0.0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar4 = *pbVar2;
      if (9 < (byte)(bVar4 - 0x30)) break;
      dVar9 = dVar9 * DAT_0203d230 + (double)(int)(bVar4 - 0x30);
      dVar10 = dVar10 * DAT_0203d230;
      bVar5 = true;
    }
  }
  else {
    dVar9 = 0.0;
  }
  if (bVar5) {
    dVar8 = dVar8 + dVar9 / dVar10;
    if ((bVar4 | 0x20) == 0x65) {
      iVar3 = 1;
      if (pbVar2[1] == 0x2b) {
        pbVar7 = pbVar2 + 2;
      }
      else if (pbVar2[1] == 0x2d) {
        pbVar7 = pbVar2 + 2;
        iVar3 = -1;
      }
      else {
        pbVar7 = pbVar2 + 1;
      }
      iVar6 = 0;
      bVar5 = false;
      for (; (byte)(*pbVar7 - 0x30) < 10; pbVar7 = pbVar7 + 1) {
        iVar6 = iVar6 * 10 + (uint)*pbVar7 + -0x30;
        bVar5 = true;
      }
      if (bVar5) {
        dVar8 = recovered_10000ef8(dVar8,iVar6 * iVar3);
        pbVar2 = pbVar7;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar2;
    }
    if (bVar1 == 0x2d) {
      dVar8 = (double)((ulong)dVar8 ^ _DAT_0203d240);
    }
    return dVar8;
  }
  if (end == (char **)0x0) {
    return 0.0;
  }
  *end = s;
  return 0.0;
}

#undef DAT_0203d1c8
#undef DAT_0203d230
#undef _DAT_0203d240

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100017f6(char *s,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100016a0(s,end);
  return (float)dVar1;
}


#undef DAT_1000b340
#define DAT_1000b340 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000b350
#define DAT_1000b350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000b52e
#define DAT_1000b52e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x262U)))
#undef UNK_1000b358
#define UNK_1000b358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_1000b350
#define _DAT_1000b350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_48 (*(ulong *)(frame + 16))
#define local_40 (*(char * *)(frame + 24))
#define local_34 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001805
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001805(char *out,ulong capacity,char *format,void *arguments)

{
  unsigned char frame[120] = {0};

  double dVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  double dVar12;

  local_34 = 0;
  if (capacity != 0) {
    *out = '\0';
  }
  local_48 = capacity;
  local_40 = out;
LAB_10001847:
  cVar2 = *format;
  if (cVar2 != '%') {
    if (cVar2 == '\0') {
      if (capacity != 0) {
        *local_40 = '\0';
      }
      return local_34;
    }
    if (local_48 < 2) goto LAB_100018a2;
    *local_40 = cVar2;
    goto LAB_10001868;
  }
  cVar2 = format[1];
  format = format + 1;
  if (cVar2 != '%') {
    while ((byte)(cVar2 - 0x30U) < 10) {
      pcVar5 = format + 1;
      format = format + 1;
      cVar2 = *pcVar5;
    }
    if (cVar2 == '.') {
      do {
        cVar2 = format[1];
        format = format + 1;
      } while ((byte)(cVar2 - 0x30U) < 10);
    }
LAB_100018cc:
    switch((uintptr_t)(cVar2)) {
    case 'c':
      goto switchD_100018df_caseD_63;
    case 'd':
    case 'i':
switchD_100018df_caseD_64:
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar3 = (uint *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar3 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar3 + 2;
      }
      uVar7 = *puVar3;
      if ((int)uVar7 < 0) {
        if (1 < local_48) {
          *local_40 = '-';
          local_40 = local_40 + 1;
          local_48 = local_48 - 1;
        }
        local_34 = local_34 + 1;
        uVar7 = -uVar7;
      }
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
switchD_100018df_caseD_65:
      if (local_48 < 2) goto LAB_100018a2;
      *local_40 = '?';
      goto LAB_10001894;
    case 'f':
      uVar7 = *(uint *)((long)arguments + 4);
      if ((ulong)uVar7 < 0xa1) {
        pdVar6 = (double *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)((long)arguments + 4) = uVar7 + 0x10;
      }
      else {
        pdVar6 = *(double **)((long)arguments + 8);
        *(double **)((long)arguments + 8) = pdVar6 + 1;
      }
      dVar12 = *pdVar6;
      if (dVar12 < 0.0) {
        if (1 < local_48) {
          *local_40 = '-';
          local_40 = local_40 + 1;
          local_48 = local_48 - 1;
        }
        local_34 = local_34 + 1;
        dVar12 = (double)((ulong)dVar12 ^ _DAT_1000b350);
      }
      recovered_10001cee((long *)&local_40,&local_48,&local_34,(int)dVar12,10,0);
      if (1 < local_48) {
        *local_40 = '.';
        local_40 = local_40 + 1;
        local_48 = local_48 - 1;
      }
      dVar1 = DAT_1000b340;
      dVar12 = dVar12 - (double)(int)dVar12;
      iVar8 = 6;
      while (bVar11 = iVar8 != 0, iVar8 = iVar8 + -1, bVar11) {
        iVar9 = (int)(dVar12 * dVar1);
        if (1 < local_48) {
          *local_40 = (char)iVar9 + '0';
          local_40 = local_40 + 1;
          local_48 = local_48 - 1;
        }
        dVar12 = dVar12 * dVar1 - (double)iVar9;
      }
      local_34 = local_34 + 7;
      goto LAB_100018a5;
    case 'h':
    case 'l':
    case 't':
    case 'z':
      goto switchD_100018df_caseD_68;
    case 'p':
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar3 = (uint *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar3 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar3 + 2;
      }
      uVar7 = *puVar3;
      recovered_10001ca5((int *)&local_40,(uint *)&local_48,&local_34,&DAT_1000b52e);
      recovered_10001cee((long *)&local_40,&local_48,&local_34,uVar7,0x10,0);
      goto LAB_100018a5;
    case 's':
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar4 = (undefined8 *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar4 = *(undefined8 **)((long)arguments + 8);
        *(undefined8 **)((long)arguments + 8) = puVar4 + 1;
      }
      recovered_10001ca5((int *)&local_40,(uint *)&local_48,&local_34,(char *)*puVar4);
      goto LAB_100018a5;
    case 'u':
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar3 = (uint *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar3 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar3 + 2;
      }
      uVar7 = *puVar3;
      break;
    case 'x':
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar3 = (uint *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar3 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar3 + 2;
      }
      uVar7 = *puVar3;
      uVar10 = 0x10;
      goto LAB_10001bd8;
    default:
      if (cVar2 == 'I') goto switchD_100018df_caseD_64;
      if (cVar2 != 'X') goto switchD_100018df_caseD_65;
      uVar7 = *(uint *)arguments;
      if ((ulong)uVar7 < 0x29) {
        puVar3 = (uint *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
        *(uint *)arguments = uVar7 + 8;
      }
      else {
        puVar3 = *(uint **)((long)arguments + 8);
        *(uint **)((long)arguments + 8) = puVar3 + 2;
      }
      uVar7 = *puVar3;
      uVar10 = 0x10;
      iVar8 = 1;
      goto LAB_10001bdd;
    }
    uVar10 = 10;
LAB_10001bd8:
    iVar8 = 0;
LAB_10001bdd:
    recovered_10001cee((long *)&local_40,&local_48,&local_34,uVar7,uVar10,iVar8);
    goto LAB_100018a5;
  }
  if (1 < local_48) {
    *local_40 = '%';
LAB_10001894:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
  goto LAB_100018a2;
switchD_100018df_caseD_68:
  cVar2 = format[1];
  format = format + 1;
  goto LAB_100018cc;
switchD_100018df_caseD_63:
  uVar7 = *(uint *)arguments;
  if ((ulong)uVar7 < 0x29) {
    pcVar5 = (char *)((ulong)uVar7 + *(long *)((long)arguments + 0x10));
    *(uint *)arguments = uVar7 + 8;
  }
  else {
    pcVar5 = *(char **)((long)arguments + 8);
    *(char **)((long)arguments + 8) = pcVar5 + 8;
  }
  if (1 < local_48) {
    *local_40 = *pcVar5;
LAB_10001868:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
LAB_100018a2:
  local_34 = local_34 + 1;
LAB_100018a5:
  format = format + 1;
  goto LAB_10001847;
}

#undef DAT_1000b340
#undef DAT_1000b350
#undef DAT_1000b52e
#undef UNK_1000b358
#undef _DAT_1000b350
#undef local_48
#undef local_40
#undef local_34

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001c8c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5d (*(uint8_t *)((uintptr_t)(pf_module_state+0x239)))
void recovered_10001ca5(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = &DAT_0203db5d;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001c8c((long *)out,(ulong *)remaining,total,*pcVar1);
  }
  return;
}

#undef DAT_0203db5d

#undef str_1000b50c
#define str_1000b50c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x240U)))
#undef str_1000b51d
#define str_1000b51d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x251U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(char (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cee
 */

void recovered_10001cee(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[128] = {0};

  long lVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = str_1000b51d;
  if (param_6 != 0) {
    pcVar2 = str_1000b50c;
  }
  lVar1 = 0;
  do {
    local_48[lVar1] = pcVar2[(ulong)param_4 % (ulong)param_5];
    lVar1 = lVar1 + 1;
    bVar3 = param_5 <= param_4;
    param_4 = param_4 / param_5;
  } while (bVar3);
  while (lVar1 != 0) {
    uStack_50 = 0x10001d51;
    recovered_10001c8c(param_1,param_2,param_3,local_48[lVar1 + -1]);
    lVar1 = lVar1 + -1;
  }
  return;
}

#undef str_1000b50c
#undef str_1000b51d
#undef uStack_50
#undef local_48

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10001d63(char *out,unsigned long capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001805(out,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e2c)))
void recovered_10001dd6(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong *puVar2;
  ulong uVar3;

  plVar1 = (long *)(param_1 + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_2 - ((long)plVar1 - param_1);
  if ((((ulong)((long)plVar1 - param_1) <= param_2 && uVar3 != 0) && param_3 != (ulong *)0x0) &&
     (uVar3 = uVar3 & 0xfffffffffffffff0, 0x28 < uVar3)) {
    *plVar1 = uVar3 - 0x20;
    plVar1[1] = 0;
    *(undefined1 *)(plVar1 + 2) = 1;
    if (DAT_02044ee8 == 0) {
      puVar2 = (ulong *)&DAT_02044ee8;
    }
    else {
      puVar2 = (ulong *)(*param_3 + 8);
    }
    *puVar2 = (ulong)plVar1;
    *param_3 = (ulong)plVar1;
  }
  return;
}

#undef DAT_02044ee8

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
 * Address: 0x10001e36
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10001e36(int in_EDI)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
    bVar1 = in_EDI + 4U <= _DAT_00006808;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02046590 (*(uint64_t *)((uintptr_t)(pf_module_state+0x1e34)))
#define DAT_020465a0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x1e44)))
void recovered_10001e74(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 != 0) {
    for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
      cVar2 = *(char *)(param_1 + lVar3);
      if (cVar2 == '\b') {
        if (DAT_02046590 != 0) {
          DAT_02046590 = DAT_02046590 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f21(1);
        }
        else {
          if (DAT_02046590 - 0x1ffU < 0xfffffffffffffe00) {
            recovered_10001f21(0);
          }
          pcVar1 = &DAT_020465a0 + DAT_02046590;
          DAT_02046590 = DAT_02046590 + 1;
          *pcVar1 = cVar2;
        }
      }
    }
  }
  return;
}

#undef DAT_02046590
#undef DAT_020465a0

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000d100
#define DAT_1000d100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1e34U)))
#undef DAT_1000d110
#define DAT_1000d110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e44U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f21
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f21(uchar param_1)

{
  unsigned char frame[568] = {0};

  uchar uVar1;
  ulong uVar2;

  if ((DAT_1000d100 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_1000d100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000be2(local_208,&DAT_1000d110,DAT_1000d100);
      uVar2 = DAT_1000d100;
    }
    local_208[uVar2] = 0;
    uVar1 = recovered_10002c3d(0x40);
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006840 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000d100 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_1000d100
#undef DAT_1000d110
#undef _DAT_00006840
#undef local_208

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001f9f(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f21(1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001fac(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f21(0);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x238)))
#define DAT_0203db8e (*(uint8_t *)((uintptr_t)(pf_module_state+0x265)))
#define local_148 (*(char (*)[320])(frame + 16))
void recovered_10001fb8(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_0203db8e;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_0203db5c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10001d63(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10001e74((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_0203db5c
#undef DAT_0203db8e
#undef local_148

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000200d(void)

{
  unsigned char frame[64] = {0};

  recovered_1000205a((uintptr_t)(pf_module_state+0x268));
  recovered_1000205a((uintptr_t)(pf_module_state+0x28b));
  recovered_1000205a((uintptr_t)(pf_module_state+0x2c4));
  recovered_1000205a((uintptr_t)(pf_module_state+0x2f9));
  recovered_1000205a((uintptr_t)(pf_module_state+0x31f));
  recovered_1000205a((uintptr_t)(pf_module_state+0x34f));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000205a(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == 0) {
    return;
  }
  uVar1 = recovered_10000d5b((char *)param_1);
  recovered_10001e74(param_1,uVar1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000207f(void)

{
  unsigned char frame[64] = {0};

  recovered_1000205a((uintptr_t)(pf_module_state+0x352));
  recovered_1000205a((uintptr_t)(pf_module_state+0x34f));
  return;
}


#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000209c(long param_1,ulong param_2,ulonglong param_3,uchar param_4)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10001fac();
    uVar1 = recovered_10002c3d(0x44);
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006844 != (code *)0x0)) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)(param_1,param_2 & 0xffffffff,param_3,param_4);
      return iVar2 != 0;
    }
  }
  return '\0';
}

#undef DAT_00006844
#undef _DAT_00006844

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002101(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002109(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined1 recovered_1000210f(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db8e (*(uint8_t *)((uintptr_t)(pf_module_state+0x265)))
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
#define str_0203dd0f (*(char (*)[1])((uintptr_t)(pf_module_state+0x3e6)))
#define str_0203dd1c (*(char (*)[1])((uintptr_t)(pf_module_state+0x3f3)))
#define str_0203dd2a (*(char (*)[1])((uintptr_t)(pf_module_state+0x401)))
void * recovered_10002117(char *path,char *mode)

{
  unsigned char frame[100] = {0};

  undefined4 uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;

  if (path == (char *)0x0 || mode == (char *)0x0) {
    DAT_02044e50 = 0x16;
    return (void *)0x0;
  }
  iVar3 = recovered_10000d75(path,str_0203dd0f);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = recovered_10000d75(path,str_0203dd1c);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      iVar4 = recovered_10000d75(path,str_0203dd2a);
      if (iVar4 != 0) {
        puVar6 = recovered_10000b42(0x340);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_02044e50 = 0xc;
          return (void *)0x0;
        }
        recovered_10000c4b(puVar6,0,0x340);
        *puVar6 = 0;
        pcVar7 = recovered_10000e06(mode,0x72);
        bVar9 = true;
        bVar8 = true;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = recovered_10000e06(mode,0x2b);
          bVar8 = true;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10000e06(mode,0x61);
            bVar8 = pcVar7 != (char *)0x0;
          }
        }
        *(bool *)(puVar6 + 0x49) = bVar8;
        pcVar7 = recovered_10000e06(mode,0x77);
        if ((pcVar7 == (char *)0x0) &&
           (pcVar7 = recovered_10000e06(mode,0x61), pcVar7 == (char *)0x0)) {
          pcVar7 = recovered_10000e06(mode,0x2b);
          bVar9 = pcVar7 != (char *)0x0;
        }
        *(bool *)((long)puVar6 + 0x125) = bVar9;
        pcVar7 = recovered_10000e06(mode,0x61);
        *(bool *)((long)puVar6 + 0x126) = pcVar7 != (char *)0x0;
        puVar6[0x48] = 0xffffffff;
        recovered_10001d63((char *)(puVar6 + 1),0xf1,&DAT_0203db8e,path);
        recovered_10000c4b(&local_34,0,0xc);
        uVar5 = recovered_100023bc(path,&local_34);
        if (uVar5 == 0) {
          if (*(char *)((long)puVar6 + 0x125) == '\0') {
            DAT_02044e50 = 2;
LAB_020039e2:
            recovered_10000b77(puVar6);
            return (void *)0x0;
          }
        }
        else {
          pcVar7 = recovered_10000e06(mode,0x77);
          if (local_30 != 0 && pcVar7 == (char *)0x0) {
            if (*(char *)((long)puVar6 + 0x125) == '\x01') {
              uVar2 = recovered_100023f4((long)puVar6,(ulong)local_30);
              if (uVar2 == '\0') goto LAB_020039e2;
              recovered_10000be2(*(void **)(puVar6 + 0x40),(void *)(ulong)local_34,(ulong)local_30);
            }
            else {
              *(ulong *)(puVar6 + 0x3e) = (ulong)local_34;
            }
            *(ulong *)(puVar6 + 0x42) = (ulong)local_30;
          }
        }
        if (*(char *)((long)puVar6 + 0x126) == '\x01') {
          *(undefined8 *)(puVar6 + 0x46) = *(undefined8 *)(puVar6 + 0x42);
          return puVar6;
        }
        return puVar6;
      }
      uVar1 = 3;
    }
  }
  puVar6 = recovered_10000b42(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_02044e50 = 0xc;
    return (void *)0x0;
  }
  recovered_10000c4b(puVar6,0,0x340);
  *puVar6 = uVar1;
  *(bool *)(puVar6 + 0x49) = iVar3 == 0;
  *(bool *)((long)puVar6 + 0x125) = iVar3 != 0;
  puVar6[0x48] = 0xffffffff;
  recovered_10001d63((char *)(puVar6 + 1),0xf1,&DAT_0203db8e,path);
  return puVar6;
}

#undef DAT_0203db8e
#undef DAT_02044e50
#undef local_30
#undef local_34
#undef str_0203dd0f
#undef str_0203dd1c
#undef str_0203dd2a

#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100023bc(ulonglong param_1,ulonglong param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c3d(0x34);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006834 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100023eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006834)(param_1,param_2);
  return uVar2;
}

#undef DAT_00006834
#undef _DAT_00006834

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
uchar recovered_100023f4(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;

  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x110);
    if (param_2 <= uVar2) {
      return '\x01';
    }
    uVar1 = 0x100;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while (uVar2 < param_2);
    pvVar3 = recovered_10000baa(*(void **)(param_1 + 0x100),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x100) = pvVar3;
      *(ulong *)(param_1 + 0x110) = uVar2;
      *(void **)(param_1 + 0xf8) = pvVar3;
      return '\x01';
    }
    DAT_02044e50 = 0xc;
    *(undefined1 *)(param_1 + 0x129) = 1;
  }
  return '\0';
}

#undef DAT_02044e50

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000247a(long param_1,long param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_100024a3(param_3);
  }
  recovered_10002117((char *)param_1,(char *)param_2);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100024a3(void *stream)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (stream == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = recovered_1000280a(stream);
    if (*(void **)((long)stream + 0x100) != (void *)0x0) {
      recovered_10000b77(*(void **)((long)stream + 0x100));
    }
    recovered_10000b77(stream);
  }
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_100024dd(void *out,uint size,uint count,void *stream)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_register_00000014 = 0;
  long lVar2;
  long lVar3;
  undefined4 in_register_00000034 = 0;
  long lVar4;

  lVar2 = CONCAT44(in_register_00000014,count);
  lVar3 = 0;
  if ((((lVar2 != 0) && (CONCAT44(in_register_00000034,size) != 0)) && (out != (void *)0x0)) &&
     (stream != (void *)0x0)) {
    if (*(char *)((long)stream + 0x124) == '\x01') {
      for (lVar3 = 0; lVar3 != lVar2; lVar3 = lVar3 + 1) {
        for (lVar4 = 0; CONCAT44(in_register_00000034,size) != lVar4; lVar4 = lVar4 + 1) {
          iVar1 = recovered_10002563(stream);
          if (iVar1 == -1) goto LAB_02003ba8;
          *(char *)((long)out + lVar4) = (char)iVar1;
        }
        out = (void *)((long)out + CONCAT44(in_register_00000034,size));
      }
      lVar3 = lVar2;
    }
    else {
      lVar3 = 0;
    }
  }
LAB_02003ba8:
  return (uint)lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x238)))
int recovered_10002563(void *stream)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uchar uVar2;
  ulong uVar3;

  if ((stream != (void *)0x0) && (*(char *)((long)stream + 0x124) == '\x01')) {
    iVar1 = *(int *)((long)stream + 0x120);
    if (iVar1 != -1) {
      *(undefined4 *)((long)stream + 0x120) = 0xffffffff;
      return iVar1;
    }
    if (*(int *)stream == 1) {
      uVar3 = *(ulong *)((long)stream + 0x338);
      if (uVar3 < *(ulong *)((long)stream + 0x330)) {
LAB_02003c5f:
        *(ulong *)((long)stream + 0x338) = uVar3 + 1;
        return (uint)*(byte *)((long)stream + uVar3 + 0x12a);
      }
      uVar2 = recovered_1000209c((long)stream + 0x12a,0x1fe,&DAT_0203db5c,0);
      if (uVar2 != '\0') {
        uVar3 = recovered_10000d5b((char *)((long)stream + 0x12a));
        *(ulong *)((long)stream + 0x330) = uVar3 + 1;
        *(undefined1 *)((long)stream + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)stream + *(long *)((long)stream + 0x330) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_02003c5f;
      }
    }
    else {
      uVar3 = *(ulong *)((long)stream + 0x118);
      if (uVar3 < *(ulong *)((long)stream + 0x108)) {
        *(ulong *)((long)stream + 0x118) = uVar3 + 1;
        return (uint)*(byte *)(*(long *)((long)stream + 0xf8) + uVar3);
      }
    }
    *(undefined1 *)((long)stream + 0x128) = 1;
  }
  return -1;
}

#undef DAT_0203db5c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10002655(void *data,uint size,uint count,void *stream)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uchar uVar2;
  long lVar3;
  undefined4 in_register_00000014 = 0;
  long lVar4;
  undefined4 in_register_00000034 = 0;
  ulong uVar5;
  ulong uVar6;

  lVar4 = CONCAT44(in_register_00000014,count);
  lVar3 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  if (((CONCAT44(in_register_00000034,size) == 0) || (data == (void *)0x0)) ||
     (stream == (void *)0x0)) goto LAB_02003dc1;
  if (*(char *)((long)stream + 0x125) == '\x01') {
    uVar6 = CONCAT44(in_register_00000034,size) * lVar4;
    if ((*(uint *)stream & 0xfffffffe) == 2) {
      recovered_10001e74((long)data,uVar6);
      *(long *)((long)stream + 0x118) = *(long *)((long)stream + 0x118) + uVar6;
    }
    else {
      if (*(char *)((long)stream + 0x126) == '\0') {
        lVar3 = *(long *)((long)stream + 0x118);
      }
      else {
        lVar3 = *(long *)((long)stream + 0x108);
        *(long *)((long)stream + 0x118) = lVar3;
      }
      uVar2 = recovered_100023f4((long)stream,lVar3 + uVar6);
      if (uVar2 == '\0') goto LAB_02003dbf;
      uVar1 = *(ulong *)((long)stream + 0x108);
      uVar5 = *(ulong *)((long)stream + 0x118);
      if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
        recovered_10000c4b((void *)(uVar1 + *(long *)((long)stream + 0x100)),0,uVar5 - uVar1);
        uVar5 = *(ulong *)((long)stream + 0x118);
      }
      recovered_10000be2((void *)(uVar5 + *(long *)((long)stream + 0x100)),data,uVar6);
      uVar6 = uVar6 + *(long *)((long)stream + 0x118);
      *(ulong *)((long)stream + 0x118) = uVar6;
      if (*(ulong *)((long)stream + 0x108) < uVar6) {
        *(ulong *)((long)stream + 0x108) = uVar6;
      }
      *(undefined2 *)((long)stream + 0x127) = 1;
    }
    lVar3 = lVar4;
  }
  else {
LAB_02003dbf:
    lVar3 = 0;
  }
LAB_02003dc1:
  return (uint)lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
int recovered_1000276e(void *stream,int offset,int origin)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined4 in_register_00000034 = 0;
  ulong uVar2;

  uVar2 = CONCAT44(in_register_00000034,offset);
  if (stream == (void *)0x0) {
    DAT_02044e50 = 0x16;
    return -1;
  }
  if (*(int *)stream == 0) {
    if (origin != 0) {
      if (origin == 1) {
        lVar1 = 0x118;
      }
      else {
        if (origin != 2) goto LAB_02003dd8;
        lVar1 = 0x108;
      }
      uVar2 = uVar2 + *(long *)((long)stream + lVar1);
    }
    if (-1 < (long)uVar2) {
      *(ulong *)((long)stream + 0x118) = uVar2;
      *(bool *)((long)stream + 0x128) = *(ulong *)((long)stream + 0x108) <= uVar2;
      *(undefined4 *)((long)stream + 0x120) = 0xffffffff;
      return 0;
    }
  }
LAB_02003dd8:
  DAT_02044e50 = 0x16;
  *(undefined1 *)((long)stream + 0x129) = 1;
  return -1;
}

#undef DAT_02044e50

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
int recovered_100027e7(void *stream)

{
  unsigned char frame[64] = {0};

  if (stream == (void *)0x0) {
    DAT_02044e50 = 0x16;
    return -1;
  }
  return (int)*(undefined8 *)((long)stream + 0x118);
}

#undef DAT_02044e50

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
int recovered_1000280a(void *stream)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  if (((stream != (void *)0x0) && (*(int *)stream == 0)) &&
     (*(char *)((long)stream + 0x127) == '\x01')) {
    uVar1 = recovered_100029d8((long)stream + 4,*(undefined8 *)((long)stream + 0xf8),
                              *(undefined4 *)((long)stream + 0x108));
    if (uVar1 == 0) {
      DAT_02044e50 = 5;
      *(undefined1 *)((long)stream + 0x129) = 1;
      iVar2 = -1;
    }
    else {
      *(undefined1 *)((long)stream + 0x127) = 0;
    }
  }
  return iVar2;
}

#undef DAT_02044e50

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_1000286e(void *stream)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (stream == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)((long)stream + 0x128);
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10002884(void *stream)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (stream == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)((long)stream + 0x129);
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000289a(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100028b4(int ch,void *stream)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (ch == -1 || stream == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ch & 0xff;
    *(uint *)((long)stream + 0x120) = uVar1;
    *(undefined1 *)((long)stream + 0x128) = 0;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
int recovered_100028e0(char *path)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (path == (char *)0x0) {
    DAT_02044e50 = 0x16;
  }
  else {
    uVar1 = recovered_1000290b(path);
    if (uVar1 != 0) {
      return 0;
    }
    DAT_02044e50 = 5;
  }
  return -1;
}

#undef DAT_02044e50

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000290b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000290b(ulonglong param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c3d(0x3c);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000683c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_0000683c)(param_1);
  return uVar2;
}

#undef DAT_0000683c
#undef _DAT_0000683c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1d94)))
#define local_28 (*(undefined4 *)(frame + 20))
#define local_2c (*(uint *)(frame + 16))
int recovered_10002940(char *from,char *to)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  undefined4 uVar2;

  if (from == (char *)0x0 || to == (char *)0x0) {
    DAT_02044e50 = 0x16;
    return -1;
  }
  recovered_10000c4b(&local_2c,0,0xc);
  uVar1 = recovered_100023bc(from,&local_2c);
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = recovered_100029d8(to,(ulong)local_2c,local_28);
    uVar2 = 5;
    if ((uVar1 != 0) && (uVar1 = recovered_1000290b(from), uVar1 != 0)) {
      return 0;
    }
  }
  DAT_02044e50 = uVar2;
  return -1;
}

#undef DAT_02044e50
#undef local_28
#undef local_2c

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100029d8(ulonglong param_1,ulonglong param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c3d(0x38);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006838 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006838)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_00006838
#undef _DAT_00006838

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_38 (*(uint *)(frame + 20))
#define local_3c (*(uint *)(frame + 16))
ulong recovered_10002a23(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10000c4b(&local_3c,0,0xc);
    uVar1 = recovered_100023bc(param_1,&local_3c);
    if (uVar1 == 0) goto LAB_02004112;
    out = recovered_10000b42((ulong)(local_38 + (local_38 == 0)));
    if (out != (void *)0x0) {
      if ((ulong)local_38 == 0) {
        uVar2 = 0;
      }
      else {
        recovered_10000be2(out,(void *)(ulong)local_3c,(ulong)local_38);
        uVar2 = (ulong)local_38;
      }
      *param_2 = (long)out;
      *param_3 = uVar2;
      uVar2 = CONCAT71((int7)((ulong)out >> 8),1);
      goto LAB_02004112;
    }
  }
  uVar2 = 0;
LAB_02004112:
  return uVar2 & 0xffffffff;
}

#undef local_38
#undef local_3c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

bool recovered_10002ac8(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  uVar1 = recovered_100029d8(param_1,param_2,(int)param_3);
  return uVar1 != 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002af0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002af8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002afe(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002b06(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002b0e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002b16(void *s,int c,ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  char *pcVar2;
  void *pvVar3;
  bool bVar4;

  pvVar3 = (void *)((long)s + -1);
  do {
    bVar4 = size == 0;
    size = size - 1;
    if (bVar4) {
      return (void *)0x0;
    }
    pvVar1 = (void *)((long)pvVar3 + 1);
    pcVar2 = (char *)((long)pvVar3 + 1);
    pvVar3 = pvVar1;
  } while (*pcVar2 != (char)c);
  return pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10002b36(char *a,char *b,ulong size)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (size == uVar2) {
      return 0;
    }
    bVar1 = a[uVar2];
    if (bVar1 != b[uVar2]) break;
    uVar2 = uVar2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)bVar1 - (uint)(byte)b[uVar2];
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203dc9e (*(uint8_t *)((uintptr_t)(pf_module_state+0x375)))
#define str_0203dca1 (*(char (*)[1])((uintptr_t)(pf_module_state+0x378)))
#define str_0203dcae (*(char (*)[1])((uintptr_t)(pf_module_state+0x385)))
#define str_0203dcb8 (*(char (*)[1])((uintptr_t)(pf_module_state+0x38f)))
#define str_0203dccc (*(char (*)[1])((uintptr_t)(pf_module_state+0x3a3)))
#define str_0203dcda (*(char (*)[1])((uintptr_t)(pf_module_state+0x3b1)))
#define str_0203dcec (*(char (*)[1])((uintptr_t)(pf_module_state+0x3c3)))
#define str_0203dcf8 (*(char (*)[1])((uintptr_t)(pf_module_state+0x3cf)))
#define str_0203dd09 (*(char (*)[1])((uintptr_t)(pf_module_state+0x3e0)))
char * recovered_10002b64(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_0203dc9e;
    break;
  case 2:
    pcVar1 = str_0203dca1;
    break;
  case 5:
    pcVar1 = str_0203dcae;
    break;
  case 9:
    pcVar1 = str_0203dcb8;
    break;
  case 0xc:
    pcVar1 = str_0203dccc;
    break;
  case 0xd:
    pcVar1 = str_0203dcda;
    break;
  default:
    if (param_1 == 0x11) {
      return str_0203dcec;
    }
    if (param_1 == 0x16) {
      return str_0203dcf8;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_0203dd09;
  }
  return pcVar1;
}

#undef DAT_0203dc9e
#undef str_0203dca1
#undef str_0203dcae
#undef str_0203dcb8
#undef str_0203dccc
#undef str_0203dcda
#undef str_0203dcec
#undef str_0203dcf8
#undef str_0203dd09

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002c14(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002c1c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x2044)))
void recovered_10002c25(void)

{
  unsigned char frame[64] = {0};

  DAT_020467a0 = DAT_020467a0 + 1;
  return;
}

#undef DAT_020467a0

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
 * Address: 0x10002c3d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10002c3d(int in_EDI)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
    bVar1 = in_EDI + 4U <= _DAT_00006808;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10002c80(unsigned long *context){__asm__ volatile(PF_SCOPE_JUMP_ASM);}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c8e
 */
__attribute__((naked,returns_twice)) undefined8 recovered_10002c8e(undefined8 *param_1){__asm__ volatile("movq %rbx,0(%rdi)\nmovq %rbp,8(%rdi)\nmovq %r12,16(%rdi)\nmovq %r13,24(%rdi)\nmovq %r14,32(%rdi)\nmovq %r15,40(%rdi)\nleaq 8(%rsp),%rax\nmovq %rax,48(%rdi)\nmovq (%rsp),%rax\nmovq %rax,56(%rdi)\nxorl %eax,%eax\nretq");}

#undef uStack0000000000000008
#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cbb
 */
__attribute__((naked,noreturn)) void recovered_10002cbb(long param_1,undefined4 param_2){__asm__ volatile("movl %esi,%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovq 0(%rdi),%rbx\nmovq 8(%rdi),%rbp\nmovq 16(%rdi),%r12\nmovq 24(%rdi),%r13\nmovq 32(%rdi),%r14\nmovq 40(%rdi),%r15\nmovq 48(%rdi),%rsp\nmovq 56(%rdi),%rdx\njmpq *%rdx");}


#undef DAT_10002d3a
#define DAT_10002d3a (*(uint8_t *)(0x10002d3aU))
#undef DAT_1000b730
#define DAT_1000b730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x464U)))
#define local_50 (*(undefined * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce9
 */

ulonglong recovered_10002ce9(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d70;
  local_60 = &DAT_1000b730;
  local_50 = &DAT_10002d3a;
  local_80 = 1;
  recovered_100031ba(&local_88);
  recovered_10000b2d();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002d3a
#undef DAT_1000b730
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef auStack_40
#undef local_60
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d70
 */

ulonglong recovered_10002d70(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10002d73(void *in_RDI)

{
  unsigned char frame[64] = {0};

  recovered_10002d90(in_RDI);
                    /* WARNING: Subroutine does not return */
  recovered_10002ce9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(void * *)((uintptr_t)(pf_module_state+0x204c)))
void * recovered_10002d90(void *exception)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (exception == (void *)0x0) {
    return (void *)0x0;
  }
  *(void **)((long)exception + 0x10) = DAT_020467a8;
  *(undefined1 *)((long)exception + 0x28) = 0;
  DAT_020467a8 = exception;
  pvVar1 = (void *)recovered_100030bf((long)exception);
  return pvVar1;
}

#undef DAT_020467a8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002db3(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000b42(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10000b2d();
  }
  return pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002ddd(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002db3(size);
  return pvVar1;
}


#undef DAT_1000b740
#define DAT_1000b740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x474U)))
#undef LAB_10002e54
#define LAB_10002e54 (*(uint8_t *)(0x10002e54U))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de7
 */

void recovered_10002de7(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d70;
  local_60 = &DAT_1000b740;
  local_50 = &LAB_10002e54;
  local_80 = 1;
  recovered_100031ba(&local_88);
  recovered_10000b77(data);
  recovered_100031d1(&local_88);
  return;
}

#undef DAT_1000b740
#undef LAB_10002e54
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

#undef DAT_1000b750
#define DAT_1000b750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x484U)))
#undef LAB_10002eed
#define LAB_10002eed (*(uint8_t *)(0x10002eedU))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e80
 */

void recovered_10002e80(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d70;
  local_60 = &DAT_1000b750;
  local_50 = &LAB_10002eed;
  local_80 = 1;
  recovered_100031ba(&local_88);
  recovered_10000b77(data);
  recovered_100031d1(&local_88);
  return;
}

#undef DAT_1000b750
#undef LAB_10002eed
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000b760
#define DAT_1000b760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x494U)))
#undef LAB_10002f85
#define LAB_10002f85 (*(uint8_t *)(0x10002f85U))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f18
 */

void recovered_10002f18(void *pointer,uint size)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d70;
  local_60 = &DAT_1000b760;
  local_50 = &LAB_10002f85;
  local_80 = 1;
  recovered_100031ba(&local_88);
  recovered_10000b77(pointer);
  recovered_100031d1(&local_88);
  return;
}

#undef DAT_1000b760
#undef LAB_10002f85
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_1000b770
#define DAT_1000b770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef LAB_1000301d
#define LAB_1000301d (*(uint8_t *)(0x1000301dU))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fb0
 */

void recovered_10002fb0(void *pointer,uint size)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d70;
  local_60 = &DAT_1000b770;
  local_50 = &LAB_1000301d;
  local_80 = 1;
  recovered_100031ba(&local_88);
  recovered_10000b77(pointer);
  recovered_100031d1(&local_88);
  return;
}

#undef DAT_1000b770
#undef LAB_1000301d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10003048(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10003050(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000305d(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10003066(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_1000306c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong uVar2;
  ulong size_00;

  size_00 = size + 0x30 + (ulong)(size == 0);
  pvVar1 = recovered_10000b42(size_00);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002ce9();
  }
  for (uVar2 = 0; size_00 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar2) = 0;
  }
  return (void *)((long)pvVar1 + 0x30);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100030aa(void *exception)

{
  unsigned char frame[64] = {0};

  if (exception == (void *)0x0) {
    return;
  }
  recovered_10000b77((void *)((long)exception + -0x30));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100030bf(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(void * *)((uintptr_t)(pf_module_state+0x204c)))
void recovered_100030c9(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *pointer;

  pointer = DAT_020467a8;
  if (DAT_020467a8 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_020467a8 + 0x10);
    DAT_020467a8 = *(void **)((long)DAT_020467a8 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)pointer + 0x28) == '\0') {
      if (*(code **)((long)pointer + 8) != (code *)0x0) {
        (**(code **)((long)pointer + 8))((long)pointer + 0x30);
      }
      recovered_10000b77(pointer);
      return;
    }
  }
  return;
}

#undef DAT_020467a8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10003115(void *exception,void *type,void *destructor)

{
  unsigned char frame[64] = {0};

  *(void **)((long)exception + -0x30) = type;
  *(void **)((long)exception + -0x28) = destructor;
  *(undefined8 *)((long)exception + -0x18) = 0;
  *(undefined8 *)((long)exception + -0x10) = 0;
  *(undefined1 *)((long)exception + -8) = 0;
  recovered_10003138((undefined8 *)((long)exception + -0x30));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x2054)))
#define cStack_2e (*(char *)(frame + 18))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2c (*(undefined4 *)(frame + 20))
#define uStack_2d (*(undefined1 *)(frame + 19))
void recovered_10003138(undefined8 *param_1)

{
  unsigned char frame[96] = {0};

  uchar uVar1;
  ulong *context;

  context = &DAT_020467b0;
  do {
    context = (ulong *)*context;
    if (context == (ulong *)0x0) goto LAB_02004780;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100035f9(context,(void *)*param_1,&local_30);
  } while ((uVar1 == '\0') || (cStack_2e != '\x01'));
  param_1[3] = context;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003233(param_1);
LAB_02004780:
                    /* WARNING: Subroutine does not return */
  recovered_10002ce9();
}

#undef DAT_020467b0
#undef cStack_2e
#undef local_28
#undef local_30
#undef uStack_2c
#undef uStack_2d

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x204c)))
#define DAT_020467b0 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x2054)))
void recovered_10003195(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_020467a8;
  if (DAT_020467a8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002ce9();
  }
  *(undefined1 *)(DAT_020467a8 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  recovered_10003138(puVar1);
  *puVar1 = DAT_020467b0;
  DAT_020467b0 = puVar1;
  return;
}

#undef DAT_020467a8
#undef DAT_020467b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

unsigned int recovered_100031ba(unsigned long *context) {
  context[0]=*(uintptr_t *)(uintptr_t)(pf_module_state+0x2054);
  *(uintptr_t *)(uintptr_t)(pf_module_state+0x2054)=(uintptr_t)context;
  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x2054)))
void recovered_100031d1(ulong *context)

{
  unsigned char frame[64] = {0};

  ulong *puVar1;
  ulong *puVar2;

  puVar1 = DAT_020467b0;
  if (DAT_020467b0 == context) {
    puVar2 = (ulong *)&DAT_020467b0;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (ulong *)0x0) {
        return;
      }
      puVar1 = (ulong *)*puVar2;
    } while ((ulong *)*puVar2 != context);
  }
  *puVar2 = *context;
  return;
}

#undef DAT_020467b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10003202(void *exception)

{
  unsigned char frame[64] = {0};

  recovered_10003138(exception);
                    /* WARNING: Subroutine does not return */
  recovered_10002ce9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_1000320b(void *exception,void *stop,void *argument)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002ce9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x2054)))
void recovered_10003214(void *exception)

{
  unsigned char frame[64] = {0};

  if (DAT_020467b0 != (undefined8 *)0x0) {
    DAT_020467b0 = (undefined8 *)*DAT_020467b0;
  }
  recovered_10003233(exception);
  return;
}

#undef DAT_020467b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10003233(undefined8 *exception) {
  struct handler {uint8_t present,cleanup,pad[2];uint32_t landing,selector;} handler;
  uintptr_t *context;
  for (;;) {
    context=*(uintptr_t **)(uintptr_t)(pf_module_state+0x2054);
    if (!context) __builtin_trap();
    if ((uintptr_t)context==exception[3]) {
      handler.landing=*(uint32_t *)((uint8_t *)exception+32);
      handler.selector=*(uint32_t *)((uint8_t *)exception+36);
      break;
    }
    handler=(struct handler){0};
    recovered_100035f9(context,(const void *)(uintptr_t)exception[0],&handler);
    if (handler.present && handler.cleanup) {handler.selector=0;break;}
    *(uintptr_t *)(uintptr_t)(pf_module_state+0x2054)=context[0];
  }
  *(uint32_t *)((uint8_t *)context+8)=handler.landing;
  *(uint32_t *)((uint8_t *)context+12)=(uint32_t)(uintptr_t)exception;
  *(uint32_t *)((uint8_t *)context+16)=handler.selector;
  recovered_10002c80(context);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100032b4(void *exception)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003214(exception);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_100032bd(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100032c5(void *exception)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002ce9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100032ce(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;

  if (param_3 == (undefined8 *)0x0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + -0x10);
  uVar2 = recovered_1000330e(*(undefined8 **)(*param_1 + -8),param_3);
  lVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar3 = (long)param_1 + lVar1;
  }
  return lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044eb0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x1df4)))
uint recovered_1000330e(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  long in_RAX;
  undefined8 *puVar5;
  long lVar6;

  if (param_2 == (undefined8 *)0x0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  do {
    puVar5 = param_1;
    uVar4 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),puVar5 != (undefined8 *)0x0);
    if (puVar5 == param_2) {
      return uVar4;
    }
    if (puVar5 == (undefined8 *)0x0) {
      return uVar4;
    }
    in_RAX = puVar5[1];
    lVar3 = param_2[1];
    if (lVar3 == 0 || in_RAX == 0) {
      if (in_RAX == lVar3) {
LAB_0200497a:
        return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
    }
    else {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(in_RAX + lVar6);
        cVar2 = *(char *)(lVar3 + lVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) goto LAB_0200497a;
          break;
        }
        lVar6 = lVar6 + 1;
      } while (cVar1 == cVar2);
    }
    param_1 = (undefined8 *)0x0;
    if ((undefined *)*puVar5 == &DAT_02044eb0) {
      param_1 = (undefined8 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_02044eb0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000338e(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10000b2d();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10003398(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100033a0(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x30U < 10);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100033b1(int value)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (((uint)value < 0x21) && ((0x100003600U >> ((ulong)(uint)value & 0x3f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(value == 0xb);
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100033db(int value)

{
  unsigned char frame[64] = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 6 || value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033fb
 */

bool recovered_100033fb(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000341d
 */

bool recovered_1000341d(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003438
 */

byte recovered_10003438(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_1000346b(int value,uint a8)

{
  unsigned char frame[64] = {0};

  ulong in_XMM0_Qa;

  return (int)((in_XMM0_Qa & 0x7fffffffffffffff) < 0x7ff0000000000000);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x4)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xc)))
#define DAT_0203d1e8 (*(double *)((uintptr_t)(pf_module_state+0x2c)))
#define DAT_0203d228 (*(double *)((uintptr_t)(pf_module_state+0x6c)))
double recovered_1000348d(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001050(value);
  if (DAT_0203d1c0 <= value - dVar1) {
    dVar1 = dVar1 + DAT_0203d1c8;
  }
  else if (value - dVar1 <= DAT_0203d228) {
    dVar1 = dVar1 + DAT_0203d1e8;
  }
  return dVar1;
}

#undef DAT_0203d1c0
#undef DAT_0203d1c8
#undef DAT_0203d1e8
#undef DAT_0203d228

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034d8
 */

ulonglong recovered_100034d8(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulonglong uVar6;
  bool bVar7;

  for (pbVar1 = (byte *)s; pbVar1 != (byte *)0x0; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    if ((0x20 < (ulong)bVar3) || ((0x100003e00U >> ((ulong)bVar3 & 0x3f) & 1) == 0))
    goto LAB_1000350e;
  }
  pbVar1 = (byte *)0x0;
  bVar3 = DAT_00000000;
LAB_1000350e:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar7 = bVar3 == 0x2d;
    pbVar1 = pbVar1 + 1;
  }
  else {
    bVar7 = false;
  }
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar1 == 0x30) && ((pbVar1[1] | 0x20) == 0x78)) {
      pbVar1 = pbVar1 + 2;
    }
  }
  else if (base == 0) {
    if (*pbVar1 == 0x30) {
      if ((pbVar1[1] | 0x20) == 0x78) {
        pbVar1 = pbVar1 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
    else {
      base = 10;
    }
  }
  pbVar1 = pbVar1 + -1;
  lVar5 = 1;
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    bVar3 = pbVar1[1];
    uVar4 = bVar3 - 0x30;
    if (9 < uVar4) {
      if (bVar3 - 0x61 < 0x1a) {
        uVar4 = bVar3 - 0x57;
      }
      else {
        uVar4 = bVar3 - 0x37;
        if (0x19 < bVar3 - 0x41) {
          uVar4 = 0xffffffff;
        }
      }
    }
    pbVar1 = pbVar1 + 1;
    lVar5 = lVar5 + -1;
  } while ((-1 < (int)uVar4) && (uVar2 = (ulong)uVar4 + uVar6 * (uint)base, (int)uVar4 < base));
  if (end != (char **)0x0) {
    if (lVar5 == 0) {
      pbVar1 = (byte *)s;
    }
    *end = (char *)pbVar1;
  }
  uVar2 = -uVar6;
  if (!bVar7) {
    uVar2 = uVar6;
  }
  return uVar2;
}

#undef DAT_00000000

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

longlong recovered_100035ef(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_100034d8(s,end,base);
  return uVar1;
}


#undef DAT_1000b3a8
#define DAT_1000b3a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#define local_58 (*(byte * *)(frame + 16))
#define local_50 (*(ulong *)(frame + 24))
#define local_44 (*(uint *)(frame + 36))
#define local_40 (*(undefined2 * *)(frame + 40))
#define local_38 (*(byte * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035f9
 */

uchar recovered_100035f9(ulong *context,void *type,void *handler)

{
  unsigned char frame[136] = {0};

  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;

  pbVar10 = (byte *)context[7];
  local_40 = handler;
  if (pbVar10 != (byte *)0x0) {
    local_38 = pbVar10 + 1;
    pbVar9 = local_38;
    if (*pbVar10 != 0xff) {
      recovered_100037fd((uint)*pbVar10,(long *)&local_38);
      pbVar9 = local_38;
    }
    local_38 = pbVar9 + 1;
    bVar6 = *pbVar9;
    if (bVar6 == 0xff) {
      pbVar10 = (byte *)0x0;
    }
    else {
      uVar3 = recovered_10003924((ulonglong *)&local_38);
      pbVar10 = local_38 + uVar3;
    }
    local_38 = local_38 + 1;
    uVar3 = recovered_10003924((ulonglong *)&local_38);
    iVar8 = (int)context[1];
    if (0 < iVar8) {
      local_50 = (ulong)(ushort)bVar6;
      pbVar9 = local_38 + uVar3;
      while (local_38 < pbVar9) {
        uVar3 = recovered_10003924((ulonglong *)&local_38);
        uVar4 = recovered_10003924((ulonglong *)&local_38);
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          *local_40 = 1;
          *(undefined1 *)(local_40 + 1) = 0;
          *(int *)(local_40 + 2) = (int)uVar3;
          *(undefined4 *)(local_40 + 4) = 0;
          if ((uVar4 & 0xffffffff) == 0) {
            *(undefined1 *)((long)local_40 + 1) = 1;
            return '\0';
          }
          local_58 = pbVar9 + ((uVar4 & 0xffffffff) - 1);
          uVar7 = (uint)local_50 & 0xf;
          bVar6 = (byte)uVar7;
          uVar1 = 0x1c1d >> bVar6;
          iVar8 = 0x40;
          local_44 = CONCAT31((int3)(uVar1 >> 8),~(byte)uVar1);
          do {
            bVar11 = iVar8 == 0;
            iVar8 = iVar8 + -1;
            if (bVar11) {
              return '\0';
            }
            uVar3 = recovered_10003978((ulonglong *)&local_58);
            pbVar9 = local_58;
            uVar4 = recovered_10003978((ulonglong *)&local_58);
            if (uVar3 == 0) {
              *(undefined1 *)((long)local_40 + 1) = 1;
            }
            else if (0 < (long)uVar3) {
              uVar1 = (uint)uVar3;
              if (((pbVar10 == (byte *)0x0 || 0xc < bVar6) || (local_44 & 1) != 0) || (int)uVar1 < 1
                 ) {
                puVar5 = (ulonglong *)0x0;
              }
              else {
                local_38 = pbVar10 + (ulong)(uVar1 & 0x7fffffff) *
                                     *(long *)(&DAT_1000b3a8 + (ulong)uVar7 * 8);
                puVar5 = (ulonglong *)recovered_100037fd((uint)local_50,(long *)&local_38);
              }
              uVar2 = recovered_1000330e(type,puVar5);
              if ((char)uVar2 != '\0') {
                *(undefined1 *)(local_40 + 1) = 1;
                *(uint *)(local_40 + 4) = uVar1;
                return '\x01';
              }
            }
            if (uVar4 == 0) {
              return '\0';
            }
            local_58 = pbVar9 + uVar4;
          } while( true );
        }
      }
    }
  }
  *local_40 = 0;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined8 *)(local_40 + 2) = 0;
  return '\0';
}

#undef DAT_1000b3a8
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_100037fd(uint param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  long lVar4;

  if (param_1 == 0xff) {
    return 0;
  }
  puVar2 = (undefined8 *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return 0;
  }
  lVar1 = *param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    puVar2 = (undefined8 *)recovered_10003953(lVar1,8);
    lVar4 = lVar1 + 8;
    goto LAB_02004e40;
  case 1:
    puVar2 = (undefined8 *)recovered_10003924(param_2);
    break;
  case 2:
    puVar2 = (undefined8 *)recovered_10003953(lVar1,2);
    goto LAB_02004e3c;
  case 3:
    puVar2 = (undefined8 *)recovered_10003953(lVar1,4);
    goto LAB_02004dfa;
  default:
    goto switchD_02004db9_caseD_5;
  case 9:
    puVar2 = (undefined8 *)recovered_10003978(param_2);
    break;
  case 10:
    uVar3 = recovered_10003953(lVar1,2);
    puVar2 = (undefined8 *)((long)(short)uVar3 & 0xffffffffffff0000U | uVar3);
LAB_02004e3c:
    lVar4 = lVar1 + 2;
LAB_02004e40:
    *param_2 = lVar4;
    break;
  case 0xb:
    uVar3 = recovered_10003953(lVar1,4);
    puVar2 = (undefined8 *)((long)(int)uVar3 & 0xffffffff00000000U | uVar3);
LAB_02004dfa:
    lVar4 = lVar1 + 4;
    goto LAB_02004e40;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return 0;
    }
    puVar2 = (undefined8 *)((long)puVar2 + lVar1);
  }
  if (((char)param_1 < '\0') && (puVar2 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*puVar2;
  }
switchD_02004db9_caseD_5:
  return (ulonglong)puVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10003924(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;

  bVar4 = 0;
  uVar3 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (ulong)(bVar1 & 0x7f) << (bVar4 & 0x3f);
    bVar4 = bVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  return uVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10003953(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  byte bVar2;
  long lVar3;

  bVar2 = 0;
  uVar1 = 0;
  for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
    uVar1 = uVar1 | (ulong)*(byte *)(param_1 + lVar3) << (bVar2 & 0x3f);
    bVar2 = bVar2 + 8;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10003978(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;

  uVar3 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (ulong)(bVar1 & 0x7f) << ((byte)uVar4 & 0x3f);
    uVar4 = uVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  uVar5 = -1L << ((byte)uVar4 & 0x3f);
  if (bVar1 < 0x40) {
    uVar5 = 0;
  }
  if (0x3f < uVar4) {
    uVar5 = 0;
  }
  return uVar3 | uVar5;
}


#undef DAT_1000b410
#define DAT_1000b410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef DAT_1000b440
#define DAT_1000b440 (*(float *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_1000b780
#define DAT_1000b780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef LAB_10003d91
#define LAB_10003d91 (*(uint8_t *)(0x10003d91U))
#undef PTR_recovered_1000526a_1000c020
#define PTR_recovered_1000526a_1000c020 (*(void * *)(((uintptr_t)pf_module_state + 0xd54U)))
#undef PTR_recovered_10008416_1000c0a0
#define PTR_recovered_10008416_1000c0a0 (*(void * *)(((uintptr_t)pf_module_state + 0xdd4U)))
#undef UNK_1000b418
#define UNK_1000b418 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_1000b410
#define _DAT_1000b410 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x144U)))
#undef lRam000000001000b418
#define lRam000000001000b418 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#define local_d8 (*(ulong *)(frame + 16))
#define local_d0 (*(undefined4 *)(frame + 24))
#define local_b8 (*(code * *)(frame + 48))
#define local_b0 (*(undefined * *)(frame + 56))
#define local_a8 (*(undefined1 * *)(frame + 64))
#define local_a0 (*(undefined1 * *)(frame + 72))
#define local_98 (*(undefined1 * *)(frame + 80))
#define local_80 (*(long * *)(frame + 104))
#define local_78 (*(long * *)(frame + 112))
#define local_70 (*(long * *)(frame + 120))
#define local_68 (*(char * *)(frame + 128))
#define local_60 (*(ulong *)(frame + 136))
#define local_4c (*(float *)(frame + 156))
#define local_48 (*(long * *)(frame + 160))
#define local_40 (*(long * *)(frame + 168))
#define local_38 (*(uintptr_t * *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_100039c4(void *data,ulong size,float pixels)

{
  unsigned char frame[264] = {0};

  char cVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;

  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 232) + -8);
  local_98 = (undefined1 *)&local_d8;
  local_b8 = recovered_10002d70;
  local_b0 = &DAT_1000b780;
  local_a0 = &LAB_10003d91;
  local_4c = pixels;
  recovered_100031ba(&local_d8);
  if (size == 0 || data == (void *)0x0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB_10003d70;
  }
  local_d0 = 0xffffffff;
  recovered_1000b184(&local_68,data,(void *)(size + (long)data));
  if (local_60 < 4) {
LAB_10003bea:
    if (local_60 != 0) {
LAB_10003bf3:
      if ((*local_68 == -0x80) || (*local_68 == '%')) {
        local_d0 = 4;
        plVar3 = recovered_10002db3(0x1890);
        local_40 = plVar3;
        recovered_10000c7a((long)(plVar3 + 4),0x1870);
        *local_40 = (long)&PTR_recovered_10008416_1000c0a0;
        lVar4 = lRam000000001000b418;
        local_40[1] = _DAT_1000b410;
        local_40[2] = lVar4;
        local_40[3] = 0x4069000000000000;
        *(undefined4 *)(plVar3 + 4) = 4;
        lVar4 = 0x38;
        do {
          *(undefined8 *)((long)local_40 + lVar4 + -0x10) = 0;
          *(undefined8 *)((long)local_40 + lVar4 + -8) = 0;
          *(undefined8 *)((long)local_40 + lVar4) = 0;
          lVar4 = lVar4 + 0x18;
        } while (lVar4 != 0x1838);
        local_80 = local_40 + 0x305;
        *local_80 = 0;
        local_40[0x306] = 0;
        local_40[0x307] = 0;
        local_d0 = 5;
        recovered_100098a8(local_40 + 0x308);
        local_d0 = 6;
        cVar1 = (**(code **)(*local_40 + 0x10))(local_40,&local_68);
        plVar3 = local_40;
        if (cVar1 != '\0') goto LAB_10003d02;
        (**(code **)(*local_40 + 8))(local_40);
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar2 = recovered_1000521c((long *)&local_68,0);
    if ((uVar2 != 0x74727565) && (uVar2 != 0x10000)) goto LAB_10003bf3;
    local_d0 = 1;
    local_38 = recovered_10002db3(0x150);
    recovered_10000c7a((long)(local_38 + 0xc),0xf0);
    *local_38 = (long)&PTR_recovered_1000526a_1000c020;
    local_70 = local_38 + 1;
    *local_70 = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_78 = local_38 + 4;
    *local_78 = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    local_38[8] = 0;
    local_38[9] = 0;
    local_38[10] = 0;
    local_38[0xb] = 0;
    *(undefined4 *)(local_38 + 0xf) = 0;
    *(undefined4 *)(local_38 + 0x11) = 0;
    *(undefined4 *)(local_38 + 0x13) = 0;
    *(undefined2 *)(local_38 + 0x15) = 0;
    *(undefined2 *)(local_38 + 0x16) = 0;
    local_38[0x18] = 0;
    *(undefined2 *)((long)local_38 + 0xd6) = 0;
    *(undefined2 *)((long)local_38 + 0xde) = 0;
    local_38[0x1e] = 0;
    local_d0 = 2;
    recovered_100060fe(local_38 + 0x20);
    local_d0 = 3;
    cVar1 = (**(code **)(*local_38 + 0x10))(local_38,&local_68);
    plVar3 = local_38;
    if (cVar1 == '\0') {
      (**(code **)(*local_38 + 8))(local_38);
      goto LAB_10003bea;
    }
LAB_10003d02:
    local_d0 = 7;
    local_48 = plVar3;
    puVar5 = recovered_10002db3(0x60);
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[0xb] = 0;
    *puVar5 = local_48;
    fVar6 = local_4c;
    if (local_4c <= DAT_1000b440) {
      fVar6 = DAT_1000b440;
    }
    *(float *)(puVar5 + 1) = fVar6;
  }
  local_60 = 0;
  recovered_10002de7(local_68);
LAB_10003d70:
  recovered_100031d1(&local_d8);
  return puVar5;
}

#undef DAT_1000b410
#undef DAT_1000b440
#undef DAT_1000b780
#undef LAB_10003d91
#undef PTR_recovered_1000526a_1000c020
#undef PTR_recovered_10008416_1000c0a0
#undef UNK_1000b418
#undef _DAT_1000b410
#undef lRam000000001000b418
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1000b72a
#define DAT_1000b72a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45eU)))
#undef DAT_1000b794
#define DAT_1000b794 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c8U)))
#undef LAB_10004055
#define LAB_10004055 (*(uint8_t *)(0x10004055U))
#define local_98 (*(code * *)(frame + 48))
#define local_90 (*(undefined * *)(frame + 56))
#define local_88 (*(undefined1 * *)(frame + 64))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_60 (*(ulong *)(frame + 104))
#define local_54 (*(float *)(frame + 116))
#define local_50 (*(void * *)(frame + 120))
#define local_40 (*(undefined8 *)(frame + 136))
#define local_38 (*(undefined8 *)(frame + 144))
#define uStack_48 (*(ulong *)(frame + 128))
#define local_b8 (*(ulong *)(frame + 16))
#define local_b0 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ebc
 */

void * recovered_10003ebc(char *path,float pixels)

{
  unsigned char frame[232] = {0};

  int iVar1;
  uint uVar2;
  void *pvVar3;
  int extraout_var = 0;
  undefined4 extraout_var_00 = 0;

  local_88 = (undefined1 *)((long)(uintptr_t)(frame + 200) + -8);
  local_78 = (undefined1 *)&local_b8;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_98 = recovered_10002d70;
  local_90 = &DAT_1000b794;
  local_80 = &LAB_10004055;
  local_54 = pixels;
  recovered_100031ba(&local_b8);
  if (path != (char *)0x0) {
    local_b0 = 1;
    pvVar3 = recovered_10002117(path,&DAT_1000b72a);
    if (pvVar3 != (void *)0x0) {
      local_b0 = 2;
      local_38 = pvVar3;
      iVar1 = recovered_1000276e(pvVar3,0,2);
      if (iVar1 == 0) {
        local_b0 = 3;
        iVar1 = recovered_100027e7(local_38);
        if (-1 < extraout_var) {
          local_b0 = 4;
          local_60 = CONCAT44(extraout_var,iVar1);
          iVar1 = recovered_1000276e(local_38,0,0);
          if (iVar1 == 0) {
            local_b0 = 5;
            recovered_100083ce((long *)&local_50,local_60);
            if (uStack_48 != 0) {
              local_b0 = 6;
              uVar2 = recovered_100024dd(local_50,1,(uint)uStack_48,local_38);
              if (CONCAT44(extraout_var_00,uVar2) != uStack_48) goto LAB_10003f5f;
            }
            local_b0 = 8;
            recovered_100024a3(local_38);
            local_b0 = 9;
            pvVar3 = recovered_100039c4(local_50,uStack_48,local_54);
            goto LAB_10003f70;
          }
        }
      }
LAB_10003f5f:
      local_b0 = 7;
      recovered_100024a3(local_38);
    }
  }
  pvVar3 = (void *)0x0;
LAB_10003f70:
  uStack_48 = 0;
  recovered_10002de7(local_50);
  recovered_100031d1(&local_b8);
  return pvVar3;
}

#undef DAT_1000b72a
#undef DAT_1000b794
#undef LAB_10004055
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_60
#undef local_54
#undef local_50
#undef local_40
#undef local_38
#undef uStack_48
#undef local_b8
#undef local_b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d8c0 (*(float *)((uintptr_t)(pf_module_state+0x174)))
void recovered_100040c0(float param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    if (param_1 <= DAT_0203d8c0) {
      param_1 = DAT_0203d8c0;
    }
    *(float *)(param_2 + 1) = param_1;
    recovered_1000ae56(param_2 + 2);
    param_2[9] = 0;
    param_2[6] = 0;
  }
  return;
}

#undef DAT_0203d8c0

#undef DAT_1000b4f8
#define DAT_1000b4f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
#undef DAT_1000b7ac
#define DAT_1000b7ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef LAB_10004eb3
#define LAB_10004eb3 (*(uint8_t *)(0x10004eb3U))
#define uStack_1e0 (*(ulong *)(frame + 16))
#define lStack_168 (*(long *)(frame + 136))
#define puStack_158 (*(uchar * *)(frame + 152))
#define uStack_138 (*(ulong *)(frame + 184))
#define lStack_f0 (*(long *)(frame + 256))
#define local_1d8 (*(uint * *)(frame + 24))
#define local_1d0 (*(undefined8 * *)(frame + 32))
#define local_1c8 (*(double *)(frame + 40))
#define local_1c0 (*(void * *)(frame + 48))
#define local_1b8 (*(undefined8 ** *)(frame + 56))
#define local_1b0 (*(undefined8 * *)(frame + 64))
#define local_1a8 (*(uint *)(frame + 72))
#define local_1a4 (*(uint *)(frame + 76))
#define local_1a0 (*(uint *)(frame + 80))
#define local_19c (*(uint *)(frame + 84))
#define local_198 (*(uint *)(frame + 88))
#define local_194 (*(uint *)(frame + 92))
#define local_190 (*(ulonglong * *)(frame + 96))
#define local_188 (*(void * *)(frame + 104))
#define local_180 (*(ulong *)(frame + 112))
#define local_178 (*(void * *)(frame + 120))
#define local_170 (*(undefined1 (*)[8])(frame + 128))
#define local_160 (*(double *)(frame + 144))
#define local_150 (*(ulong *)(frame + 160))
#define local_140 (*(undefined8 * *)(frame + 176))
#define local_130 (*(undefined8 *)(frame + 192))
#define local_128 (*(undefined8 * *)(frame + 200))
#define local_120 (*(uint * *)(frame + 208))
#define local_118 (*(long * *)(frame + 216))
#define local_110 (*(undefined8 * *)(frame + 224))
#define local_108 (*(long *)(frame + 232))
#define local_f8 (*(undefined8 *)(frame + 248))
#define local_e8 (*(long *)(frame + 264))
#define local_e0 (*(long *)(frame + 272))
#define local_d8 (*(ulong *)(frame + 280))
#define local_d0 (*(undefined4 *)(frame + 288))
#define local_b8 (*(code * *)(frame + 312))
#define local_b0 (*(undefined * *)(frame + 320))
#define local_a8 (*(undefined1 * *)(frame + 328))
#define local_a0 (*(undefined1 * *)(frame + 336))
#define local_98 (*(undefined1 * *)(frame + 344))
#define local_7c (*(float *)(frame + 372))
#define local_78 (*(ulong *)(frame + 376))
#define local_70 (*(void * *)(frame + 384))
#define local_68 (*(uint *)(frame + 392))
#define local_64 (*(int *)(frame + 396))
#define local_60 (*(void * *)(frame + 400))
#define local_58 (*(undefined8 * *)(frame + 408))
#define local_50 (*(float *)(frame + 416))
#define local_4c (*(int *)(frame + 420))
#define local_48 (*(void * *)(frame + 424))
#define local_40 (*(byte * *)(frame + 432))
#define local_38 (*(undefined8 *)(frame + 440))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040fb
 */

void * recovered_100040fb(void *font,char *text,int a,int b,int c,double spacing)

{
  unsigned char frame[528] = {0};

  byte bVar1;
  double dVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  long lVar28;
  bool bVar29;

  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 496) + -8);
  local_98 = (undefined1 *)&local_1d8;
  local_b8 = recovered_10002d70;
  local_b0 = &DAT_1000b7ac;
  local_a0 = &LAB_10004eb3;
  local_1c8 = spacing;
  local_19c = c;
  local_198 = b;
  local_194 = a;
  recovered_100031ba(&local_d8);
  puVar11 = (ulonglong *)0x0;
  if ((font != (void *)0x0) && (text != (char *)0x0)) {
    local_128 = font;
    if (*(long *)font != 0) {
      if (*text == '\0') {
        local_d0 = 0xffffffff;
        local_190 = recovered_10002db3(0x20);
        local_d0 = 1;
        local_38 = local_190;
        recovered_1000507c(local_190);
        puVar11 = local_38;
      }
      else {
        local_140 = (undefined8 *)0x0;
        uStack_138 = 0;
        local_130 = 0;
        local_d0 = 2;
        local_38 = (ulonglong *)text;
        recovered_100050aa((long *)&local_140);
        (*(uint64_t *)(void *)local_170) = (uint64_t)0x0;
        lStack_168 = 0;
        local_160 = 0.0;
        pbVar13 = (byte *)local_38;
LAB_100041d4:
        bVar1 = *pbVar13;
        if (bVar1 != 0) {
          local_38 = (ulonglong *)(pbVar13 + 1);
          uVar15 = (uint)bVar1;
          if (-1 < (char)bVar1) {
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15);
            local_d0 = 3;
            recovered_1000ae96((long *)local_170,(uint *)&local_f8);
            pbVar13 = (byte *)local_38;
            goto LAB_100041d4;
          }
          local_f8 = CONCAT44(PF_PART4(local_f8, 4),0xfffd);
          if ((uVar15 & 0xffffffe0) == 0xc0) {
            uVar5 = uVar15 & 0x1f;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff0000001f;
            uStack_1e0 = 1;
          }
          else if ((uVar15 & 0xfffffff0) == 0xe0) {
            uVar5 = uVar15 & 0xf;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff0000000f;
            uStack_1e0 = 2;
          }
          else {
            if ((uVar15 & 0xfffffff8) != 0xf0) {
              local_110 = (undefined8 *)CONCAT44(PF_PART4(local_110, 4),0xfffd);
              local_d0 = 4;
              recovered_1000ae96((long *)local_170,(uint *)&local_110);
              pbVar13 = (byte *)local_38;
              goto LAB_100041d4;
            }
            uVar5 = uVar15 & 7;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar15) & 0xffffffff00000007;
            uStack_1e0 = 3;
          }
          for (uVar12 = 0; uStack_1e0 != uVar12; uVar12 = uVar12 + 1) {
            if ((*(byte *)((long)local_38 + uVar12) & 0xffffffc0) != 0x80) {
              local_110 = (undefined8 *)CONCAT44(PF_PART4(local_110, 4),0xfffd);
              local_d0 = 5;
              recovered_1000ae96((long *)local_170,(uint *)&local_110);
              pbVar13 = (byte *)local_38;
              goto LAB_100041d4;
            }
            uVar5 = uVar5 << 6 | *(byte *)((long)local_38 + uVar12) & 0x3f;
            local_f8 = CONCAT44(PF_PART4(local_f8, 4),uVar5);
          }
          local_40 = (byte *)uStack_1e0;
          local_d0 = 6;
          recovered_1000b13a((long *)local_170,(uint *)&local_f8);
          pbVar13 = (byte *)((long)local_38 + (long)local_40);
          goto LAB_100041d4;
        }
        local_48 = *(void **)local_170;
        local_40 = (byte *)(lStack_168 << 2);
        for (pbVar13 = (byte *)0x0; local_40 != pbVar13; pbVar13 = pbVar13 + 4) {
          iVar25 = *(int *)((long)local_48 + (long)pbVar13);
          local_f8 = CONCAT44(PF_PART4(local_f8, 4),iVar25);
          if (iVar25 != 0xd) {
            local_38 = (ulonglong *)pbVar13;
            if (iVar25 == 10) {
              local_d0 = 7;
              recovered_100050aa((long *)&local_140);
              pbVar13 = (byte *)local_38;
            }
            else {
              local_d0 = 8;
              recovered_1000b13a(local_140 + uStack_138 * 3 + -3,(uint *)&local_f8);
              pbVar13 = (byte *)local_38;
            }
          }
        }
        PF_PART4(lStack_168, 0) = 0;
        PF_PART4(lStack_168, 4) = 0;
        recovered_10002de7(*(void **)local_170);
        if (uStack_138 == 0) {
          local_d0 = 9;
          recovered_100050aa((long *)&local_140);
        }
        local_38 = (ulonglong *)local_128[3];
        puVar6 = local_140;
        for (lVar14 = uStack_138 * 0x18; lVar14 != 0; lVar14 = lVar14 + -0x18) {
          local_38 = (ulonglong *)((long)local_38 + puVar6[1]);
          puVar6 = puVar6 + 3;
        }
        local_40 = (byte *)(local_128 + 2);
        local_d0 = 10;
        recovered_1000b07a((long *)local_40,(ulong)local_38);
        local_d0 = 0xb;
        recovered_10006448(local_128 + 8,(ulong)local_38);
        puVar11 = local_38;
        puVar7 = (ulonglong *)recovered_1000b066(local_128[6]);
        if (puVar7 < puVar11) {
          local_d0 = 0xc;
          recovered_1000afd8((long *)local_40);
        }
        local_f8 = 0;
        lStack_f0 = 0;
        local_e8 = 0;
        local_d0 = 0xd;
        recovered_100050fc(&local_f8,uStack_138);
        local_1d0 = local_140 + uStack_138 * 3;
        uVar15 = 1;
        uVar5 = 0;
        puVar6 = local_140;
        while( true ) {
          local_38 = (ulonglong *)CONCAT44(PF_PART4(local_38, 4),uVar15);
          if (puVar6 == local_1d0) break;
          local_110 = local_128;
          plVar22 = (long *)*local_128;
          local_1b0 = puVar6;
          local_1a4 = uVar5;
          if (plVar22 == (long *)0x0) {
            local_78 = 0x100000001;
            local_1c0 = (void *)0x0;
            local_70 = (void *)0x0;
            local_178 = (void *)0x0;
          }
          else {
            local_40 = (byte *)CONCAT44(PF_PART4(local_40, 4),*(undefined4 *)(local_128 + 1));
            local_d0 = 0xf;
            local_48 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*plVar22 + 0x20))(plVar22));
            local_1b8 = &local_110;
            local_d0 = 0x10;
            dVar2 = (*(double (**)(void *))(*(long *)*local_110 + 0x28))((long *)*local_110);
            local_40 = (byte *)(uintptr_t)pf_double_bits(((double)pf_bits_float((uint32_t)PF_PART4(local_40, 0)) / pf_bits_double((uintptr_t)local_48)));
            local_d0 = 0x11;
            local_1a8 = recovered_1000aee0(dVar2 * pf_bits_double((uintptr_t)local_40),(ulonglong *)&local_1b8);
            if ((int)local_1a8 < 2) {
              local_1a8 = 1;
            }
            local_d0 = 0x12;
            local_48 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*(long *)*local_110 + 0x28))((long *)*local_110));
            local_d0 = 0x13;
            local_70 = (void *)(uintptr_t)pf_double_bits((*(double (**)(void *))(*(long *)*local_110 + 0x30))((long *)*local_110));
            local_d0 = 0x14;
            dVar2 = (*(double (**)(void *))(*(long *)*local_110 + 0x38))((long *)*local_110);
            local_d0 = 0x15;
            local_1a0 = recovered_1000aee0(pf_bits_double((uintptr_t)local_40) *
                                           (pf_bits_double((uintptr_t)local_48) + pf_bits_double((uintptr_t)local_70) + dVar2),
                                           (ulonglong *)&local_1b8);
            if ((int)local_1a0 < 2) {
              local_1a0 = 1;
            }
            puVar21 = (uint *)*local_1b0;
            local_1d8 = puVar21 + local_1b0[1];
            local_40 = (byte *)0x0;
            local_e0 = 0;
            local_60 = (void *)0x0;
            local_70 = (void *)0x0;
            local_178 = (void *)0x0;
            pvVar10 = (void *)0x0;
            pvVar9 = (void *)0x0;
            local_78 = (ulong)local_1a0;
            local_64 = 0;
            local_4c = 0;
            local_50 = 0.0;
            local_180 = 0;
            while (puVar6 = local_110, puVar21 != local_1d8) {
              local_68 = *puVar21;
              plVar22 = local_110 + 2;
              puVar18 = &local_68;
              local_188 = pvVar9;
              local_120 = puVar21;
              local_48 = pvVar10;
              uVar8 = recovered_1000af22(plVar22,(int *)puVar18);
              if (uVar8 == puVar6[3] * 0x38 + puVar6[2]) {
                local_7c = *(float *)(puVar6 + 1);
                local_d0 = 0x17;
                local_58 = puVar6;
                local_118 = plVar22;
                dVar2 = (*(double (**)(void *))(*(long *)*puVar6 + 0x20))((long *)*puVar6);
                local_d0 = 0x18;
                (*(pf_glyph *(**)(pf_glyph *,void *,uint,double))(*(long *)*local_58 + 0x18))
                          ((pf_glyph *)local_170,(long *)*local_58,local_68,(double)local_7c / dVar2
                          );
                plVar22 = local_118;
                puVar18 = &local_68;
                uVar8 = recovered_1000af22(local_118,(int *)puVar18);
                lVar14 = local_58[3];
                if (uVar8 == lVar14 * 0x38 + local_58[2]) {
                  if ((local_58[6] == 0) || ((ulong)(local_58[6] * 3) < lVar14 * 4 + 4U)) {
                    local_d0 = 0x19;
                    recovered_1000afd8(plVar22);
                    lVar14 = local_58[3];
                    plVar22 = local_118;
                  }
                  if (lVar14 == local_58[4]) {
                    uVar12 = lVar14 * 2;
                    if (lVar14 == 0) {
                      uVar12 = 4;
                    }
                    local_d0 = 0x1a;
                    recovered_1000b07a(plVar22,uVar12);
                    lVar14 = local_58[3];
                  }
                  puVar6 = local_58;
                  puVar21 = (uint *)(local_58[2] + lVar14 * 0x38);
                  *puVar21 = local_68;
                  recovered_1000662c(puVar21 + 2,local_170);
                  plVar22 = puVar6 + 3;
                  *plVar22 = *plVar22 + 1;
                  local_d0 = 0x1b;
                  recovered_100064b2(puVar6 + 8,(ulonglong *)&DAT_1000b4f8);
                  puVar6 = local_58;
                  puVar18 = (uint *)(local_58[3] + -1);
                  recovered_1000afa6(local_118,(long)puVar18);
                  uVar8 = (puVar6[2] + puVar6[3] * 0x38) - 0x38;
                }
                local_150 = 0;
                recovered_10002de7(puStack_158);
              }
              local_d0 = 0x1c;
              local_58 = (undefined8 *)uVar8;
              dVar2 = recovered_10001050(pf_bits_double((uintptr_t)local_40));
              fVar27 = (float)((int)dVar2 + *(int *)((long)local_58 + 8));
              iVar25 = local_1a8 - *(int *)((long)local_58 + 0xc);
              pvVar10 = local_48;
              if (local_70 == local_48) {
                pvVar10 = (void *)((long)local_70 * 2);
                if (local_70 == (void *)0x0) {
                  pvVar10 = (void *)0x4;
                }
                if (pvVar10 <= local_70) {
                  pvVar10 = local_70;
                  goto LAB_1000491b;
                }
                local_118 = (long *)CONCAT44(PF_PART4(local_118, 4),iVar25);
                local_d0 = 0x1d;
                local_7c = fVar27;
                local_48 = pvVar10;
                pvVar9 = recovered_10002db3((long)pvVar10 << 4);
                pvVar4 = local_70;
                fVar27 = local_7c;
                lVar14 = 0;
                iVar25 = (int)local_118;
                pvVar10 = local_70;
                while (bVar29 = pvVar10 != (void *)0x0, pvVar10 = (void *)((long)pvVar10 + -1),
                      bVar29) {
                  uVar3 = ((undefined8 *)((long)local_188 + lVar14))[1];
                  *(undefined8 *)((long)pvVar9 + lVar14) = *(undefined8 *)((long)local_188 + lVar14)
                  ;
                  ((undefined8 *)((long)pvVar9 + lVar14))[1] = uVar3;
                  lVar14 = lVar14 + 0x10;
                }
                recovered_10002de7(local_188);
                local_178 = local_48;
                local_60 = pvVar9;
                pvVar10 = local_48;
                local_70 = pvVar4;
              }
              else {
LAB_1000491b:
                pvVar9 = local_188;
              }
              lVar14 = (long)local_70 * 0x10;
              *(ulonglong *)((long)pvVar9 + lVar14) = (long)local_58 + 8;
              *(int *)((long)pvVar9 + lVar14 + 8) = (int)fVar27;
              *(int *)((long)pvVar9 + lVar14 + 0xc) = iVar25;
              iVar19 = *(int *)((long)local_58 + 0x10);
              if ((0 < iVar19) && (iVar20 = *(int *)((long)local_58 + 0x14), 0 < iVar20)) {
                if ((local_180 & 1) == 0) {
                  local_64 = iVar19 + (int)fVar27;
                  local_78 = (ulong)(uint)(iVar20 + iVar25);
                  local_180 = CONCAT71((int7)((ulong)puVar18 >> 8),1);
                  local_50 = fVar27;
                  local_4c = iVar25;
                }
                else {
                  if ((int)fVar27 < (int)local_50) {
                    local_50 = fVar27;
                  }
                  if (iVar25 < local_4c) {
                    local_4c = iVar25;
                  }
                  if (local_64 <= iVar19 + (int)fVar27) {
                    local_64 = iVar19 + (int)fVar27;
                  }
                  iVar19 = (int)local_78;
                  local_78 = local_78 & 0xffffffff;
                  if (iVar19 <= iVar20 + iVar25) {
                    local_78 = (ulong)(uint)(iVar20 + iVar25);
                  }
                  local_180 = CONCAT71((int7)(local_78 >> 8),1);
                }
              }
              local_70 = (void *)((long)local_70 + 1);
              local_40 = (byte *)(uintptr_t)pf_double_bits((pf_bits_double((uintptr_t)local_40) + *(double *)((long)local_58 + 0x18)));
              puVar21 = local_120 + 1;
              local_e0 = local_e0 + 0x10;
            }
            local_d0 = 0x16;
            dVar2 = recovered_10001079(pf_bits_double((uintptr_t)local_40));
            iVar25 = (int)dVar2;
            if ((int)dVar2 < 2) {
              iVar25 = 1;
            }
            iVar19 = -(int)local_50;
            if (iVar19 < 1) {
              iVar19 = 0;
            }
            iVar20 = -local_4c;
            if (iVar20 < 1) {
              iVar20 = 0;
            }
            iVar17 = local_64 + iVar19;
            if (local_64 + iVar19 < iVar25 + iVar19) {
              iVar17 = iVar25 + iVar19;
            }
            iVar25 = (int)local_78 + iVar20;
            if (iVar25 < (int)(local_1a0 + iVar20)) {
              iVar25 = local_1a0 + iVar20;
            }
            pvVar10 = local_60;
            for (lVar14 = local_e0; lVar14 != 0; lVar14 = lVar14 + -0x10) {
              *(int *)((long)pvVar10 + 8) = *(int *)((long)pvVar10 + 8) + iVar19;
              *(int *)((long)pvVar10 + 0xc) = *(int *)((long)pvVar10 + 0xc) + iVar20;
              pvVar10 = (void *)((long)pvVar10 + 0x10);
            }
            local_78 = CONCAT44(iVar25 + (uint)(iVar25 == 0),iVar17);
            local_1c0 = local_60;
            uVar15 = (uint)local_38;
          }
          if (lStack_f0 == local_e8) {
            uVar12 = lStack_f0 * 2;
            if (lStack_f0 == 0) {
              uVar12 = 4;
            }
            local_d0 = 0x1e;
            recovered_100050fc(&local_f8,uVar12);
            uVar15 = (uint)local_38;
          }
          uVar12 = local_f8;
          lVar14 = lStack_f0 * 0x20;
          *(ulong *)(local_f8 + lVar14) = local_78;
          *(void **)(local_f8 + 8 + lVar14) = local_1c0;
          *(void **)(local_f8 + 0x10 + lVar14) = local_70;
          *(void **)(local_f8 + 0x18 + lVar14) = local_178;
          lVar14 = lStack_f0 + 1;
          lStack_f0 = lVar14;
          recovered_10002de7((void *)0x0);
          lVar14 = lVar14 * 0x20;
          uVar5 = *(uint *)((uVar12 - 0x20) + lVar14);
          if ((int)uVar15 <= (int)uVar5) {
            uVar15 = uVar5;
          }
          uVar5 = local_1a4 + *(int *)((uVar12 - 0x1c) + lVar14);
          puVar6 = local_1b0 + 3;
        }
        local_40 = (byte *)0x1;
        if (1 < (int)uVar5) {
          local_40 = (byte *)(ulong)uVar5;
        }
        local_48 = (void *)(ulong)uVar15;
        local_70 = (void *)((long)local_40 * (long)local_48);
        (*(uint64_t *)(void *)local_170) = (uint64_t)((*(uint64_t *)(void *)local_170) & 0xffffffffffffff00);
        local_d0 = 0xe;
        recovered_1000b112(&local_110,(ulong)local_70,local_170);
        iVar25 = 0;
        for (uVar12 = local_f8; uVar12 != lStack_f0 * 0x20 + local_f8; uVar12 = uVar12 + 0x20) {
          plVar22 = *(long **)(uVar12 + 8);
          plVar23 = plVar22 + *(long *)(uVar12 + 0x10) * 2;
          for (; plVar22 != plVar23; plVar22 = plVar22 + 2) {
            lVar14 = *plVar22;
            if (((lVar14 != 0) && (0 < *(int *)(lVar14 + 8))) &&
               (iVar19 = *(int *)(lVar14 + 0xc), 0 < iVar19)) {
              for (lVar24 = 0; lVar24 < iVar19; lVar24 = lVar24 + 1) {
                uVar15 = iVar25 + (int)lVar24 + *(int *)((long)plVar22 + 0xc);
                if (uVar15 < (uint)PF_PART4(local_40, 0)) {
                  lVar16 = (ulong)uVar15 * (long)local_48;
                  for (lVar28 = 0; lVar28 < *(int *)(lVar14 + 8); lVar28 = lVar28 + 1) {
                    iVar19 = (int)((ulong)*(uint *)(plVar22 + 1) + lVar28);
                    if (((-1 < iVar19) && (iVar19 < (int)(uint)local_38)) &&
                       (bVar1 = *(byte *)(lVar28 + *(int *)(lVar14 + 8) * lVar24 +
                                                   *(long *)(lVar14 + 0x18)), bVar1 != 0)) {
                      uVar26 = (ulong)*(uint *)(plVar22 + 1) + lVar28 & 0xffffffff;
                      *(byte *)((long)local_110 + uVar26 + lVar16) =
                           (char)(((uint)(byte)~bVar1 *
                                  (uint)*(byte *)((long)local_110 + uVar26 + lVar16)) / 0xff) +
                           bVar1;
                      lVar14 = *plVar22;
                    }
                  }
                  iVar19 = *(int *)(lVar14 + 0xc);
                }
              }
            }
          }
          iVar25 = iVar25 + *(int *)(uVar12 + 4);
        }
        uVar15 = 0xff;
        if (local_194 < 0xff) {
          uVar15 = local_194;
        }
        if ((int)local_194 < 0) {
          uVar15 = 0;
        }
        local_58 = (undefined8 *)CONCAT44(PF_PART4(local_58, 4),uVar15);
        uVar15 = 0xff;
        if (local_198 < 0xff) {
          uVar15 = local_198;
        }
        if ((int)local_198 < 0) {
          uVar15 = 0;
        }
        local_e0 = CONCAT44(PF_PART4(local_e0, 4),uVar15);
        uVar15 = 0xff;
        if (local_19c < 0xff) {
          uVar15 = local_19c;
        }
        if ((int)local_19c < 0) {
          uVar15 = 0;
        }
        local_48 = (void *)CONCAT44(PF_PART4(local_48, 4),uVar15);
        local_d0 = 0x1f;
        local_120 = (uint *)recovered_1000140c(local_1c8);
        local_d0 = 0x20;
        pvVar10 = recovered_10002ddd((long)local_70 << 2);
        iVar25 = 0xff;
        if ((int)local_120 < 0xff) {
          iVar25 = (int)local_120;
        }
        if (iVar25 < 1) {
          iVar25 = 0;
        }
        for (lVar14 = 0; local_108 != lVar14; lVar14 = lVar14 + 1) {
          bVar1 = *(byte *)((long)local_110 + lVar14);
          *(char *)((long)pvVar10 + lVar14 * 4) = (char)local_58;
          *(char *)((long)pvVar10 + lVar14 * 4 + 1) = (char)local_e0;
          *(char *)((long)pvVar10 + lVar14 * 4 + 2) = (char)local_48;
          *(char *)((long)pvVar10 + lVar14 * 4 + 3) = (char)(((uint)bVar1 * iVar25 & 0xffff) / 0xff)
          ;
        }
        local_d0 = 0x21;
        local_48 = pvVar10;
        recovered_1000507c((ulonglong *)local_170);
        (*(uint64_t *)(void *)local_170) = (uint64_t)CONCAT44((int)local_40,(int)local_38);
        lStack_168 = (long)local_48;
        local_d0 = 0x22;
        puVar11 = recovered_10002db3(0x20);
        puVar11[2] = pf_double_bits(local_160);
        puVar11[3] = (ulonglong)puStack_158;
        *puVar11 = (*(uint64_t *)(void *)local_170);
        puVar11[1] = lStack_168;
        local_108 = 0;
        recovered_10002de7(local_110);
        recovered_10005186(&local_f8);
        recovered_1000b1a2(&local_140);
      }
    }
  }
  recovered_100031d1(&local_d8);
  return puVar11;
}

#undef DAT_1000b4f8
#undef DAT_1000b7ac
#undef LAB_10004eb3
#undef uStack_1e0
#undef lStack_168
#undef puStack_158
#undef uStack_138
#undef lStack_f0
#undef local_1d8
#undef local_1d0
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190
#undef local_188
#undef local_180
#undef local_178
#undef local_170
#undef local_160
#undef local_150
#undef local_140
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_f8
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_7c
#undef local_78
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_1000507c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;

  *param_1 = 0;
  puVar1 = recovered_10002ddd(4);
  *puVar1 = 0;
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_100050aa(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar4 = 4;
    if (lVar2 != 0) {
      uVar4 = lVar2 * 2;
    }
    recovered_1000b1fa(param_1,uVar4);
    lVar2 = param_1[1];
  }
  lVar1 = *param_1;
  lVar3 = lVar2 * 0x18;
  *(undefined8 *)(lVar1 + lVar3) = 0;
  ((undefined8 *)(lVar1 + lVar3))[1] = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  param_1[1] = lVar2 + 1;
  return lVar1 + lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100050fc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10002db3(param_2 << 5);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000b2a4((void *)((long)pvVar1 + lVar2),(void *)(*param_1 + lVar2));
      recovered_10005172((void *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10005172(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10002de7(*(void **)((long)object + 8));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10005186(void *object)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = *(long *)((long)object + 8);
  lVar2 = lVar1 << 5;
  while( true ) {
    lVar2 = lVar2 + -0x20;
    bVar3 = lVar1 == 0;
    lVar1 = lVar1 + -1;
    if (bVar3) break;
    recovered_10005172((void *)(*(long *)object + lVar2));
  }
  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100051cc(long *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (long *)0x0) {
    recovered_100060ec(param_1 + 8);
    recovered_100060ec(param_1 + 5);
    recovered_1000ae56(param_1 + 2);
    recovered_10002de7((void *)param_1[2]);
    if ((long *)*param_1 != (long *)0x0) {
      ((uintptr_t (*)(void *))(*(uintptr_t *)(*(uintptr_t *)(uintptr_t)*param_1 + 8)))((void *)(uintptr_t)*param_1);
    }
  }
  recovered_10002de7(param_1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_1000521c(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *(uint *)(*param_1 + param_2);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000522a(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000523c(void *object)

{
  unsigned char frame[64] = {0};

  recovered_100060ec((void *)((long)object + 0x30));
  recovered_100060ec((void *)((long)object + 0x18));
  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define PTR_recovered_200a92e_02044140 (*(void * *)((uintptr_t)(pf_module_state+0xd54)))
void recovered_1000526a(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined ***)object = &PTR_recovered_200a92e_02044140;
  recovered_1000612e((void *)((long)object + 0x100));
  recovered_1000522a((void *)((long)object + 0xe8));
  recovered_1000b128((void *)((long)object + 0xb8));
  recovered_1000523c((void *)((long)object + 0x20));
  recovered_1000b100((void *)((long)object + 8));
  return;
}

#undef PTR_recovered_200a92e_02044140

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100052bc(void *object)

{
  unsigned char frame[64] = {0};

  recovered_1000526a(object);
  recovered_10002de7(object);
  return;
}


#undef DAT_1000b4c0
#define DAT_1000b4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f4U)))
#define local_64 (*(uint *)(frame + 16))
#define local_60 (*(ulong *)(frame + 20))
#define local_58 (*(ulong *)(frame + 28))
#define local_50 (*(long * *)(frame + 36))
#define local_48 (*(long * *)(frame + 44))
#define local_3c (*(uint *)(frame + 56))
#define local_38 (*(long *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d8
 */

ulong recovered_100052d8(long param_1,long *param_2)

{
  unsigned char frame[148] = {0};

  long *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  uchar uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  long *plVar18;
  ushort uVar19;
  long lVar20;
  ulong uVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  undefined7 uVar28;
  bool bVar29;

  plVar18 = (long *)(param_1 + 8);
  recovered_10006158(plVar18,param_2);
  uVar16 = *(ulong *)(param_1 + 0x10);
  if (0xb < uVar16) {
    uVar27 = 0;
    local_38 = param_1;
    uVar12 = recovered_1000521c(plVar18,0);
    if ((uVar12 != 0x74727565) && (uVar12 != 0x10000)) goto LAB_10005be8;
    uVar11 = *(ushort *)(*plVar18 + 4) << 8 | *(ushort *)(*plVar18 + 4) >> 8;
    if ((ulong)uVar11 << 4 <= uVar16 - 0xc) {
      plVar25 = (long *)(local_38 + 0x20);
      plVar1 = (long *)(local_38 + 0x38);
      local_50 = (long *)(local_38 + 0x50);
      uVar16 = 0;
      local_48 = plVar18;
      while (lVar26 = local_38, uVar16 != uVar11) {
        lVar26 = uVar16 * 0x10;
        local_60 = uVar16;
        local_64 = recovered_1000521c(plVar18,lVar26 + 0xc);
        uVar13 = recovered_1000521c(plVar18,lVar26 + 0x14);
        uVar12 = recovered_1000521c(plVar18,lVar26 + 0x18);
        lVar26 = local_38;
        if ((*(ulong *)(local_38 + 0x10) < (ulong)uVar13) ||
           (*(ulong *)(local_38 + 0x10) - (ulong)uVar13 < (ulong)uVar12)) goto LAB_10005be5;
        local_3c = uVar13;
        uVar14 = recovered_100062d6(plVar25,(int *)&local_64);
        uVar16 = *(ulong *)(lVar26 + 0x28);
        if ((uVar14 == 0xffffffffffffffff) || (uVar14 == uVar16)) {
          local_58 = CONCAT44(PF_PART4(local_58, 4),uVar12);
          if ((*(long *)(lVar26 + 0x40) == 0) ||
             ((ulong)(*(long *)(lVar26 + 0x40) * 3) < uVar16 * 4 + 4)) {
            uVar27 = uVar16 * 2 + 2;
            uVar21 = 8;
            uVar15 = uVar16 * 2;
            if (uVar16 < 4) {
              uVar15 = uVar21;
            }
            if (uVar15 <= uVar27) {
              uVar15 = uVar27;
            }
            do {
              uVar16 = uVar21;
              uVar21 = uVar16 * 2;
            } while (uVar16 < uVar15);
            recovered_1000638a(plVar1,uVar16,(ulonglong *)&DAT_1000b4c0);
            recovered_1000638a(local_50,*(ulong *)(lVar26 + 0x28),(ulonglong *)&DAT_1000b4c0);
            for (uVar16 = 0; uVar16 < *(ulong *)(lVar26 + 0x40); uVar16 = uVar16 + 1) {
              *(undefined8 *)(*plVar1 + uVar16 * 8) = 0xffffffffffffffff;
            }
            for (uVar27 = 0; uVar16 = *(ulong *)(lVar26 + 0x28), uVar27 < uVar16;
                uVar27 = uVar27 + 1) {
              recovered_100062a4(plVar25,uVar27);
            }
          }
          if (uVar16 == *(ulong *)(lVar26 + 0x30)) {
            uVar27 = uVar16 * 2;
            if (uVar16 == 0) {
              uVar27 = 4;
            }
            uVar12 = (uint)local_58;
            if (uVar16 < uVar27) {
              pvVar17 = recovered_10002db3(uVar27 * 0xc);
              lVar24 = local_38;
              lVar26 = *(long *)(local_38 + 0x28);
              lVar20 = 0;
              while (bVar29 = lVar26 != 0, lVar26 = lVar26 + -1, bVar29) {
                lVar8 = *plVar25;
                *(undefined4 *)((long)pvVar17 + lVar20 + 8) = *(undefined4 *)(lVar8 + 8 + lVar20);
                *(undefined8 *)((long)pvVar17 + lVar20) = *(undefined8 *)(lVar8 + lVar20);
                lVar20 = lVar20 + 0xc;
              }
              recovered_10002de7(*(void **)(local_38 + 0x20));
              *(void **)(lVar24 + 0x20) = pvVar17;
              *(ulong *)(lVar24 + 0x30) = uVar27;
              uVar16 = *(ulong *)(lVar24 + 0x28);
              goto LAB_10005502;
            }
          }
          else {
LAB_10005502:
            uVar12 = (uint)local_58;
          }
          lVar24 = local_38;
          lVar26 = *(long *)(local_38 + 0x20);
          *(uint *)(lVar26 + uVar16 * 0xc) = local_64;
          *(undefined8 *)(lVar26 + 4 + uVar16 * 0xc) = 0;
          *(long *)(local_38 + 0x28) = *(long *)(local_38 + 0x28) + 1;
          recovered_100064b2(local_50,(ulonglong *)&DAT_1000b4c0);
          recovered_100062a4(plVar25,*(long *)(lVar24 + 0x28) + -1);
          lVar26 = *(long *)(lVar24 + 0x20) + *(long *)(lVar24 + 0x28) * 0xc + -0xc;
          plVar18 = local_48;
        }
        else {
          lVar26 = uVar14 * 0xc + *plVar25;
        }
        *(uint *)(lVar26 + 4) = local_3c;
        *(uint *)(lVar26 + 8) = uVar12;
        uVar16 = local_60 + 1;
      }
      uVar10 = recovered_100061aa(local_38,0x636d6170,(ulonglong *)(local_38 + 0x70));
      if ((uVar10 != '\0') &&
         (uVar10 = recovered_100061aa(lVar26,0x676c7966,(ulonglong *)(lVar26 + 0x78)),
         uVar10 != '\0')) {
        puVar2 = (ulonglong *)(lVar26 + 0x80);
        uVar10 = recovered_100061aa(lVar26,0x6c6f6361,puVar2);
        if ((uVar10 != '\0') &&
           (uVar10 = recovered_100061aa(lVar26,0x68656164,(ulonglong *)(lVar26 + 0x88)),
           uVar10 != '\0')) {
          uVar10 = recovered_100061aa(lVar26,0x68686561,(ulonglong *)(lVar26 + 0x90));
          if ((uVar10 != '\0') &&
             (uVar10 = recovered_100061aa(lVar26,0x686d7478,(ulonglong *)(lVar26 + 0x98)),
             uVar10 != '\0')) {
            uVar10 = recovered_100061aa(lVar26,0x6d617870,(ulonglong *)(lVar26 + 0xa0));
            lVar24 = local_38;
            plVar18 = local_48;
            if (uVar10 != '\0') {
              uVar12 = *(uint *)(lVar26 + 0x88);
              uVar16 = *(ulong *)(lVar26 + 0x10);
              if (((0x35 < uVar16 - uVar12 && uVar12 <= uVar16) &&
                  (uVar13 = *(uint *)(lVar26 + 0x90), 0x23 < uVar16 - uVar13 && uVar13 <= uVar16))
                 && (uVar6 = *(uint *)(lVar26 + 0xa0), 5 < uVar16 - uVar6 && uVar6 <= uVar16)) {
                lVar20 = *(long *)(lVar26 + 8);
                uVar11 = *(ushort *)(lVar20 + (ulong)(uVar12 + 0x12));
                uVar11 = uVar11 << 8 | uVar11 >> 8;
                *(ushort *)(lVar26 + 0xa8) = uVar11;
                if (uVar11 != 0) {
                  uVar11 = *(ushort *)(lVar20 + (ulong)(uVar12 + 0x32));
                  uVar22 = uVar11 << 8 | uVar11 >> 8;
                  *(ushort *)(lVar26 + 0xb0) = uVar22;
                  uVar11 = *(ushort *)(lVar20 + (ulong)(uVar13 + 4));
                  *(ushort *)(lVar26 + 0xaa) = uVar11 << 8 | uVar11 >> 8;
                  *(ushort *)(lVar26 + 0xac) =
                       (ushort)(byte)-*(char *)(lVar20 + (ulong)(uVar13 + 6)) * 0x100 -
                       (ushort)*(byte *)(lVar20 + 1 + (ulong)(uVar13 + 6));
                  uVar11 = *(ushort *)(lVar20 + (ulong)(uVar13 + 8));
                  *(ushort *)(lVar26 + 0xae) = uVar11 << 8 | uVar11 >> 8;
                  uVar11 = *(ushort *)(lVar20 + (ulong)(uVar13 + 0x22));
                  uVar19 = uVar11 << 8 | uVar11 >> 8;
                  uVar27 = 0;
                  *(ushort *)(lVar26 + 0xb4) = uVar19;
                  uVar11 = *(ushort *)(lVar20 + (ulong)(uVar6 + 4));
                  uVar11 = uVar11 << 8 | uVar11 >> 8;
                  *(ushort *)(lVar26 + 0xb2) = uVar11;
                  if ((uVar11 != 0) && (uVar19 != 0)) {
                    uVar15 = (ulong)uVar11;
                    uVar21 = (ulong)*(uint *)puVar2;
                    uVar27 = 0;
                    if (uVar22 == 0) {
                      if ((uVar16 < uVar21) || (uVar16 - uVar21 < uVar15 * 2 + 2))
                      goto LAB_10005be8;
                      plVar25 = (long *)(local_38 + 0xb8);
                      recovered_10006502(plVar25,uVar15 + 1);
                      lVar26 = *(long *)(lVar24 + 0xc0);
                      for (lVar24 = 0; lVar26 != lVar24; lVar24 = lVar24 + 1) {
                        *(uint *)(*plVar25 + lVar24 * 4) =
                             (uint)*(byte *)((ulong)*(uint *)puVar2 + *plVar18 + lVar24 * 2) * 0x200
                             + (uint)*(byte *)((ulong)*(uint *)puVar2 + *plVar18 + 1 + lVar24 * 2) *
                               2;
                      }
                    }
                    else {
                      if ((uVar16 < uVar21) || (uVar16 - uVar21 < uVar15 * 4 + 4))
                      goto LAB_10005be8;
                      plVar18 = (long *)(local_38 + 0xb8);
                      recovered_10006502(plVar18,uVar15 + 1);
                      lVar26 = *(long *)(lVar24 + 0xc0);
                      lVar20 = 0;
                      lVar24 = lVar26;
                      while (bVar29 = lVar24 != 0, lVar24 = lVar24 + -1, bVar29) {
                        uVar12 = recovered_1000521c(local_48,(ulong)*(uint *)puVar2 + lVar20);
                        *(uint *)(*plVar18 + lVar20) = uVar12;
                        lVar20 = lVar20 + 4;
                      }
                    }
                    lVar24 = 0;
                    do {
                      if (lVar26 * 4 == lVar24) {
                        uVar12 = *(uint *)(local_38 + 0x70);
                        uVar16 = *(ulong *)(local_38 + 0x10);
                        if (uVar16 - uVar12 < 4 || uVar16 < uVar12) goto LAB_10005be5;
                        uVar27 = 0;
                        if ((uVar12 + 4 <= uVar16) &&
                           (uVar11 = *(ushort *)(*local_48 + (ulong)(uVar12 + 2)),
                           uVar11 = uVar11 << 8 | uVar11 >> 8, local_58 = (ulong)uVar11,
                           (ulong)((uint)uVar11 * 8) <= uVar16 - (uVar12 + 4))) {
                          plVar18 = (long *)(local_38 + 0xe8);
                          for (local_60 = 0; lVar26 = local_38, local_60 != local_58;
                              local_60 = local_60 + 1) {
                            iVar7 = *(int *)(local_38 + 0x70);
                            uVar16 = (ulong)(iVar7 + 4);
                            lVar24 = uVar16 + local_60 * 8;
                            uVar27 = *(ulong *)(local_38 + 8);
                            uVar11 = *(ushort *)(uVar27 + lVar24);
                            local_3c = CONCAT22(PF_PART2(local_3c, 2),*(undefined2 *)(uVar27 + 2 + lVar24))
                            ;
                            uVar12 = recovered_1000521c(local_48,uVar16 + local_60 * 8 + 4);
                            if (uVar12 < *(uint *)(lVar26 + 0x74)) {
                              uVar12 = uVar12 + iVar7;
                              plVar25 = (long *)(ulong)uVar12;
                              local_50 = *(long **)(local_38 + 0x10);
                              uVar16 = (long)local_50 - (long)plVar25;
                              if (1 < uVar16 && plVar25 <= local_50) {
                                uVar22 = uVar11 << 8 | uVar11 >> 8;
                                uVar11 = (ushort)local_3c << 8 | (ushort)local_3c >> 8;
                                local_3c = CONCAT22(PF_PART2(local_3c, 2),uVar11);
                                uVar19 = *(ushort *)(uVar27 + (long)plVar25) << 8 |
                                         *(ushort *)(uVar27 + (long)plVar25) >> 8;
                                if (uVar19 == 0xc) {
                                  if ((((uVar22 == 3) || (uVar22 == 0)) && (0xf < uVar16)) &&
                                     (uVar13 = recovered_1000521c(local_48,(ulong)(uVar12 + 4)),
                                     uVar13 <= uVar16 && 0xf < uVar13)) {
                                    uVar13 = recovered_1000521c(local_48,(ulong)(uVar12 + 0xc));
                                    plVar25 = (long *)(ulong)(uVar12 + 0x10);
                                    bVar29 = plVar25 <= local_50;
                                    local_50 = (long *)((long)local_50 - (long)plVar25);
                                    if (((bVar29) &&
                                        (uVar27 = (ulong)uVar13, (long *)(uVar27 * 0xc) <= local_50)
                                        ) && ((*(long *)(local_38 + 0xf0) == 0 ||
                                              (((local_3c & 0xffff) == 10 ||
                                               ((local_3c & 0xffff) == 4)))))) {
                                      *(undefined8 *)(local_38 + 0xf0) = 0;
                                      recovered_100065b2(plVar18,uVar27);
                                      while (plVar1 = local_48, bVar29 = uVar27 != 0,
                                            uVar27 = uVar27 - 1, bVar29) {
                                        uVar12 = recovered_1000521c(local_48,(long)plVar25);
                                        local_3c = recovered_1000521c(plVar1,(long)plVar25 + 4);
                                        uVar13 = recovered_1000521c(plVar1,(long)(plVar25 + 1));
                                        lVar26 = *(long *)(local_38 + 0xf0);
                                        if (lVar26 == *(long *)(local_38 + 0xf8)) {
                                          uVar16 = lVar26 * 2;
                                          if (lVar26 == 0) {
                                            uVar16 = 4;
                                          }
                                          recovered_100065b2(plVar18,uVar16);
                                          lVar26 = *(long *)(local_38 + 0xf0);
                                        }
                                        lVar24 = *(long *)(local_38 + 0xe8);
                                        lVar20 = lVar26 * 0xc;
                                        *(uint *)(lVar24 + lVar20) = uVar12;
                                        *(uint *)(lVar24 + 4 + lVar20) = local_3c;
                                        *(uint *)(lVar24 + 8 + lVar20) = uVar13;
                                        *(long *)(local_38 + 0xf0) = lVar26 + 1;
                                        plVar25 = (long *)((long)plVar25 + 0xc);
                                      }
                                    }
                                  }
                                }
                                else if (((uVar19 == 4) &&
                                         (((uVar22 == 3 || (uVar22 == 0)) && (7 < uVar16)))) &&
                                        ((uVar19 = *(ushort *)(uVar27 + (uVar12 + 2)),
                                         uVar19 = uVar19 << 8 | uVar19 >> 8, 0xf < uVar19 &&
                                         (uVar19 <= uVar16)))) {
                                  uVar4 = *(undefined1 *)(uVar27 + (uVar12 + 6));
                                  bVar5 = *(byte *)(uVar27 + 1 + (ulong)(uVar12 + 6));
                                  uVar22 = CONCAT11(uVar4,bVar5);
                                  uVar13 = (uint)uVar22;
                                  if ((uVar13 != 0) && ((bVar5 & 1) == 0)) {
                                    iVar23 = uVar12 + uVar13 * 2 + 0x10;
                                    iVar7 = iVar23 + uVar13;
                                    uVar13 = iVar7 + uVar13;
                                    if ((uVar13 <= uVar19 + uVar12 &&
                                         (long *)(ulong)uVar13 <= local_50) &&
                                       (((uVar11 == 1 || (*(char *)(local_38 + 0xe2) == '\0')) ||
                                        ((uVar11 == 3 && (*(short *)(local_38 + 0xe0) == 0)))))) {
                                      sVar9 = (short)uVar12;
                                      *(uint *)(local_38 + 0xd0) = uVar12;
                                      *(ushort *)(local_38 + 0xd4) = CONCAT11(uVar4,bVar5) >> 1;
                                      *(undefined2 *)(local_38 + 0xd6) = 0xe;
                                      *(ushort *)(local_38 + 0xd8) = uVar22 + 0x10;
                                      *(short *)(local_38 + 0xda) = (short)iVar23 - sVar9;
                                      *(short *)(local_38 + 0xdc) = (short)iVar7 - sVar9;
                                      *(short *)(local_38 + 0xde) = (short)uVar13 - sVar9;
                                      *(ushort *)(local_38 + 0xe0) = uVar19;
                                      *(undefined1 *)(local_38 + 0xe2) = 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          uVar28 = (undefined7)(uVar27 >> 8);
                          uVar27 = CONCAT71(uVar28,1);
                          if (*(char *)(local_38 + 0xe2) == '\0') {
                            uVar27 = CONCAT71(uVar28,*(long *)(local_38 + 0xf0) != 0);
                          }
                        }
                        break;
                      }
                      puVar3 = (uint *)(*(long *)(local_38 + 0xb8) + lVar24);
                      lVar24 = lVar24 + 4;
                      uVar27 = 0;
                    } while (*puVar3 <= *(uint *)(local_38 + 0x7c));
                  }
                  goto LAB_10005be8;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10005be5:
  uVar27 = 0;
LAB_10005be8:
  return uVar27 & 0xffffffff;
}

#undef DAT_1000b4c0
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_1000b7f4
#define DAT_1000b7f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef LAB_10006009
#define LAB_10006009 (*(uint8_t *)(0x10006009U))
#define local_b8 (*(undefined1 * *)(frame + 208))
#define local_b0 (*(undefined1 * *)(frame + 216))
#define local_a8 (*(undefined1 * *)(frame + 224))
#define local_90 (*(long * *)(frame + 248))
#define local_88 (*(undefined8 *)(frame + 256))
#define local_78 (*(double *)(frame + 272))
#define local_68 (*(undefined8 *)(frame + 288))
#define local_50 (*(void * *)(frame + 312))
#define local_48 (*(double *)(frame + 320))
#define local_3c (*(uint *)(frame + 332))
#define local_38 (*(pf_glyph * *)(frame + 336))
#define uStack_150 (*(undefined8 *)(frame + 56))
#define uStack_140 (*(undefined8 *)(frame + 72))
#define uStack_120 (*(undefined8 *)(frame + 104))
#define uStack_110 (*(undefined8 *)(frame + 120))
#define uStack_100 (*(undefined8 *)(frame + 136))
#define uStack_f0 (*(undefined8 *)(frame + 152))
#define uStack_80 (*(undefined8 *)(frame + 264))
#define pvStack_70 (*(void * *)(frame + 280))
#define uStack_60 (*(undefined8 *)(frame + 296))
#define local_178 (*(double (*)[4])(frame + 16))
#define local_158 (*(undefined8 *)(frame + 48))
#define local_148 (*(void * *)(frame + 64))
#define local_138 (*(undefined8 *)(frame + 80))
#define local_130 (*(undefined2 *)(frame + 88))
#define local_128 (*(undefined8 *)(frame + 96))
#define local_118 (*(undefined8 *)(frame + 112))
#define local_108 (*(undefined8 *)(frame + 128))
#define local_f8 (*(undefined8 *)(frame + 144))
#define local_e8 (*(ulong *)(frame + 160))
#define local_e0 (*(undefined4 *)(frame + 168))
#define local_c8 (*(code * *)(frame + 192))
#define local_c0 (*(undefined * *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c1c
 */

pf_glyph *
recovered_10005c1c(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale)

{
  unsigned char frame[424] = {0};

  uint *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uchar uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  uint uVar10;
  pf_glyph *ppVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ushort uVar15;
  int iVar16;
  ushort uVar17;
  uint uVar18;

  local_b8 = (undefined1 *)((long)(uintptr_t)(frame + 392) + -8);
  local_a8 = (undefined1 *)local_178;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0.0;
  pvStack_70 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_148 = (void *)CONCAT44(PF_PART4(local_148, 4),glyph);
  local_c8 = recovered_10002d70;
  local_c0 = &DAT_1000b7f4;
  local_b0 = &LAB_10006009;
  local_e0 = 1;
  local_50 = backend;
  local_48 = scale;
  local_38 = __return_storage_ptr__;
  recovered_100031ba(&local_e8);
  local_90 = (long *)((long)backend + 0x100);
  uVar7 = recovered_10007844((long *)((long)backend + 0x100),(int *)&local_148);
  if (uVar7 == *(long *)((long)local_50 + 0x108) * 8 + *(long *)((long)local_50 + 0x100)) {
    if (((uint)local_148 < 0x10000) && (*(char *)((long)local_50 + 0xe2) == '\x01')) {
      iVar3 = *(int *)((long)local_50 + 0xd0);
      iVar16 = 0;
      do {
        iVar12 = iVar16 + 2;
        if ((uint)*(ushort *)((long)local_50 + 0xd4) * 2 + 2 == iVar12) goto LAB_10005dec;
        lVar4 = *(long *)((long)local_50 + 8);
        uVar15 = *(ushort *)
                  (lVar4 + (ulong)(iVar16 + iVar3 + (uint)*(ushort *)((long)local_50 + 0xd6)));
        iVar16 = iVar12;
      } while ((ushort)(uVar15 << 8 | uVar15 >> 8) < (ushort)local_148);
      uVar15 = *(ushort *)
                (lVar4 + (ulong)(((uint)*(ushort *)((long)local_50 + 0xd8) + iVar3 + iVar12) - 2));
      uVar15 = uVar15 << 8 | uVar15 >> 8;
      if ((ushort)local_148 < uVar15) goto LAB_10005dec;
      uVar2 = *(ushort *)
               (lVar4 + (ulong)((uint)*(ushort *)((long)local_50 + 0xda) + iVar3 + -2 + iVar12));
      uVar17 = *(ushort *)
                (lVar4 + (ulong)((uint)*(ushort *)((long)local_50 + 0xdc) + iVar3 + -2 + iVar12));
      uVar17 = uVar17 << 8 | uVar17 >> 8;
      local_3c = (uint)local_148;
      if (uVar17 != 0) {
        uVar9 = (ulong)((iVar3 + (uint)local_148 * 2 +
                         (uint)*(ushort *)((long)local_50 + 0xdc) + (uint)uVar17 + (uint)uVar15 * -2
                        + iVar12) - 2);
        if ((*(ulong *)((long)local_50 + 0x10) - uVar9 < 2 ||
             *(ulong *)((long)local_50 + 0x10) < uVar9) ||
           (uVar15 = *(ushort *)(lVar4 + uVar9) << 8 | *(ushort *)(lVar4 + uVar9) >> 8, uVar15 == 0)
           ) goto LAB_10005dec;
        local_3c = (uint)uVar15;
      }
      local_3c = (ushort)(uVar2 << 8 | uVar2 >> 8) + local_3c;
      if ((short)local_3c == 0) goto LAB_10005dec;
    }
    else {
LAB_10005dec:
      if (*(ulong *)((long)local_50 + 0xf0) != 0) {
        uVar14 = 0;
        uVar9 = *(ulong *)((long)local_50 + 0xf0);
        while (uVar14 <= uVar9 && uVar9 - uVar14 != 0) {
          uVar13 = (uVar9 - uVar14 >> 1) + uVar14;
          lVar4 = *(long *)((long)local_50 + 0xe8) + uVar13 * 0xc;
          puVar1 = (uint *)(*(long *)((long)local_50 + 0xe8) + uVar13 * 0xc);
          if ((uint)local_148 < *puVar1) {
            uVar9 = uVar13;
          }
          else {
            if ((uint)local_148 <= *(uint *)(lVar4 + 4)) {
              local_3c = ((uint)local_148 - *puVar1) + *(int *)(lVar4 + 8);
              goto LAB_10005e3b;
            }
            uVar14 = uVar13 + 1;
          }
        }
      }
      local_3c = 0;
    }
LAB_10005e3b:
    local_e0 = 2;
    puVar8 = (undefined2 *)recovered_1000786a(local_90,(uint *)&local_148);
    *puVar8 = (short)local_3c;
    uVar18 = local_3c;
  }
  else {
    uVar18 = (uint)*(ushort *)(uVar7 + 4);
  }
  ppVar11 = local_38;
  uVar6 = uVar18;
  if (*(ushort *)((long)local_50 + 0xb2) <= (ushort)uVar18) {
    uVar6 = 0;
  }
  uVar15 = *(ushort *)((long)local_50 + 0xb4);
  uVar10 = uVar15 - 1;
  if ((ushort)uVar6 < uVar15) {
    uVar10 = uVar6;
  }
  uVar9 = (ulong)*(uint *)((long)local_50 + 0x98) + (ulong)(uVar10 & 0xffff) * 4;
  uVar14 = *(ulong *)((long)local_50 + 0x10);
  if (3 < uVar14 - uVar9 && uVar9 <= uVar14) {
    uVar2 = *(ushort *)(*(long *)((long)local_50 + 8) + uVar9);
    if (((ushort)uVar6 < uVar15) ||
       (uVar9 = (ulong)*(uint *)((long)local_50 + 0x98) + (ulong)uVar15 * 2 +
                (ulong)(uVar6 & 0xffff) * 2, uVar9 <= uVar14 && 1 < uVar14 - uVar9)) {
      local_148 = (void *)0x0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_78 = (double)(ushort)(uVar2 << 8 | uVar2 >> 8) * local_48;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_178[1] = 0.0;
      local_178[2] = 0.0;
      local_158 = 0;
      uStack_150 = 0;
      local_178[0] = local_48;
      local_178[3] = local_48;
      local_e0 = 3;
      uVar5 = recovered_1000664c((long)local_50,(ulong)(uVar18 & 0xffff),local_178,
                                 (long *)&local_148,0);
      ppVar11 = local_38;
      if (uVar5 == '\0') {
        recovered_1000662c(local_38,&local_88);
      }
      else {
        local_e0 = 4;
        recovered_10007490(local_78,&local_38->left,(long *)&local_148);
        local_38->advance = local_78;
        ppVar11 = local_38;
      }
      uStack_140 = 0;
      recovered_10002de7(local_148);
      goto LAB_10005fda;
    }
  }
  local_78 = (double)*(ushort *)((long)local_50 + 0xa8) * local_48;
  recovered_1000662c(local_38,&local_88);
LAB_10005fda:
  local_68 = 0;
  recovered_10002de7(pvStack_70);
  recovered_100031d1(&local_e8);
  return ppVar11;
}

#undef DAT_1000b7f4
#undef LAB_10006009
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_78
#undef local_68
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef uStack_150
#undef uStack_140
#undef uStack_120
#undef uStack_110
#undef uStack_100
#undef uStack_f0
#undef uStack_80
#undef pvStack_70
#undef uStack_60
#undef local_178
#undef local_158
#undef local_148
#undef local_138
#undef local_130
#undef local_128
#undef local_118
#undef local_108
#undef local_f8
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_10006088(long param_1)

{
  unsigned char frame[64] = {0};

  return (double)*(ushort *)(param_1 + 0xa8);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_1000609a(long param_1)

{
  unsigned char frame[64] = {0};

  return (double)(int)*(short *)(param_1 + 0xaa);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_100060ac(long param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;
  short sVar2;

  sVar1 = (short)*(undefined4 *)(param_1 + 0xac);
  sVar2 = 0;
  if (0 < sVar1) {
    sVar2 = sVar1;
  }
  return (double)(int)sVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_100060c8(long param_1)

{
  unsigned char frame[64] = {0};

  short sVar1;

  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0xae)) {
    sVar1 = *(short *)(param_1 + 0xae);
  }
  return (double)(int)sVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_100060e4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100060ec(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100060fe(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  *(undefined8 *)((long)object + 0x18) = 0;
  *(undefined8 *)((long)object + 0x20) = 0;
  *(undefined8 *)((long)object + 0x28) = 0;
  *(undefined8 *)((long)object + 0x30) = 0;
  *(undefined8 *)((long)object + 0x38) = 0;
  *(undefined8 *)((long)object + 0x40) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000611c(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000612e(void *object)

{
  unsigned char frame[64] = {0};

  recovered_100060ec((void *)((long)object + 0x30));
  recovered_100060ec((void *)((long)object + 0x18));
  recovered_1000611c(object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define lStack_20 (*(long *)(frame + 32))
#define local_28 (*(long *)(frame + 24))
#define local_30 (*(void * *)(frame + 16))
long * recovered_10006158(long *param_1,long *param_2)

{
  unsigned char frame[96] = {0};

  void *pointer;
  long lVar1;

  if (param_1 != param_2) {
    recovered_100061f8(&local_30,param_2);
    pointer = (void *)*param_1;
    *param_1 = (long)local_30;
    lVar1 = param_1[2];
    param_1[1] = local_28;
    param_1[2] = lStack_20;
    local_28 = 0;
    local_30 = pointer;
    lStack_20 = lVar1;
    recovered_10002de7(pointer);
  }
  return param_1;
}

#undef lStack_20
#undef local_28
#undef local_30

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_1c (*(int *)(frame + 16))
uchar recovered_100061aa(long param_1,int param_2,undefined8 *param_3)

{
  unsigned char frame[76] = {0};

  uchar uVar1;
  ulonglong uVar2;

  local_1c = param_2;
  uVar2 = recovered_100062d6((long *)(param_1 + 0x20),&local_1c);
  if ((uVar2 == 0xffffffffffffffff) || (uVar2 == *(ulonglong *)(param_1 + 0x28))) {
    uVar1 = '\0';
  }
  else {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 4 + uVar2 * 0xc);
    uVar1 = '\x01';
  }
  return uVar1;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f8
 */

void recovered_100061f8(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_1000623e(object,*(ulong *)((long)p0 + 8));
  for (uVar1 = 0; uVar1 < *(ulong *)((long)p0 + 8); uVar1 = uVar1 + 1) {
    *(undefined1 *)(*(long *)object + uVar1) = *(undefined1 *)(*(long *)p0 + uVar1);
  }
  *(ulong *)((long)object + 8) = *(ulong *)((long)p0 + 8);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_1000623e(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10006290(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10006290(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100062a4(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;

  uVar2 = recovered_10006330((long)param_1,param_2 * 0xc + *param_1);
  lVar1 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar1 + uVar2 * 8);
  *(long *)(lVar1 + uVar2 * 8) = param_2;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_100062d6(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong *puVar2;

  if (param_1[4] != 0) {
    uVar1 = recovered_10006330((long)param_1,(long)param_2);
    puVar2 = (ulonglong *)(uVar1 * 8 + param_1[3]);
    while (uVar1 = *puVar2, uVar1 != 0xffffffffffffffff) {
      if (*(int *)(*param_1 + uVar1 * 0xc) == *param_2) {
        return uVar1;
      }
      puVar2 = (ulonglong *)(uVar1 * 8 + param_1[6]);
    }
  }
  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10006330(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006358(param_2,4);
  return uVar1 & *(long *)(param_1 + 0x20) - 1U;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10006358(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;

  uVar1 = 0x14650fb0739d0383;
  for (lVar2 = 0; param_2 != lVar2; lVar2 = lVar2 + 1) {
    uVar1 = (uVar1 ^ *(byte *)(param_1 + lVar2)) * 0x100000001b3;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_1000638a(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  param_1[1] = 0;
  recovered_1000639a(param_1,param_2,param_3);
  return extraout_EAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000639a(long *param_1,ulong param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_100063fe(param_1,param_2);
    return;
  }
  recovered_10006448(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined8 *)(*param_1 + uVar1 * 8) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100063fe(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006448(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10006448(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000649b(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000649b(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 << 3);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100064b2(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar3 = 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 * 2;
    }
    recovered_10006448(param_1,uVar3);
    lVar2 = param_1[1];
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar2 * 8) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return lVar1 + lVar2 * 8;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10006502(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong in_RAX;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006546(param_1,param_2);
    in_RAX = param_1[1];
    while (in_RAX < param_2) {
      *(undefined4 *)(*param_1 + in_RAX * 4) = 0;
      in_RAX = in_RAX + 1;
      param_1[1] = in_RAX;
    }
  }
  return (uint)in_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10006546(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_1000659b(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined4 *)(uVar2 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000659b(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 << 2);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100065b2(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar3 = recovered_10002db3(param_2 * 0xc);
    uVar1 = param_1[1];
    lVar4 = 0;
    for (uVar5 = 0; uVar5 < uVar1; uVar5 = uVar5 + 1) {
      lVar2 = *param_1;
      *(undefined4 *)((long)pvVar3 + lVar4 + 8) = *(undefined4 *)(lVar2 + 8 + lVar4);
      *(undefined8 *)((long)pvVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
      lVar4 = lVar4 + 0xc;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = (long)pvVar3;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10006618(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  *(undefined8 *)((long)object + 0x18) = 0;
  *(undefined8 *)((long)object + 0x20) = 0;
  *(undefined8 *)((long)object + 0x28) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000662c(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)((long)object + 0x10) = *(undefined8 *)((long)p0 + 0x10);
  uVar1 = *(undefined8 *)((long)p0 + 8);
  *(undefined8 *)object = *(undefined8 *)p0;
  *(undefined8 *)((long)object + 8) = uVar1;
  recovered_10007b4e((void *)((long)object + 0x18),(void *)((long)p0 + 0x18));
  return;
}


#undef DAT_1000b2d8
#define DAT_1000b2d8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000b430
#define DAT_1000b430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x164U)))
#undef DAT_1000b448
#define DAT_1000b448 (*(double *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef DAT_1000b800
#define DAT_1000b800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534U)))
#undef LAB_1000736b
#define LAB_1000736b (*(uint8_t *)(0x1000736bU))
#undef UNK_1000b438
#define UNK_1000b438 (*(double *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef _DAT_1000b430
#define _DAT_1000b430 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef dRam000000001000b438
#define dRam000000001000b438 (*(double *)(((uintptr_t)pf_module_state + 0x16cU)))
#define dStack_40 (*(double *)(frame + 408))
#define auStack_38 (*(undefined1 (*)[8])(frame + 416))
#define local_1c8 (*(double *)(frame + 16))
#define local_1c0 (*(void * *)(frame + 24))
#define local_1b8 (*(double *)(frame + 32))
#define local_1b0 (*(double *)(frame + 40))
#define local_1a8 (*(double *)(frame + 48))
#define local_1a0 (*(double *)(frame + 56))
#define local_190 (*(pf_point *)(frame + 72))
#define local_180 (*(void * *)(frame + 88))
#define local_178 (*(undefined8 *)(frame + 96))
#define local_168 (*(pf_point *)(frame + 112))
#define local_154 (*(uint *)(frame + 132))
#define local_150 (*(undefined1 (*)[16])(frame + 136))
#define local_140 (*(undefined8 *)(frame + 152))
#define local_138 (*(byte *)(frame + 160))
#define local_130 (*(undefined8 *)(frame + 168))
#define local_120 (*(long * *)(frame + 184))
#define local_118 (*(undefined1 (*)[16])(frame + 192))
#define local_108 (*(undefined8 *)(frame + 208))
#define local_100 (*(ulong *)(frame + 216))
#define local_f8 (*(undefined4 *)(frame + 224))
#define local_e0 (*(code * *)(frame + 248))
#define local_d8 (*(undefined * *)(frame + 256))
#define local_d0 (*(undefined1 * *)(frame + 264))
#define local_c8 (*(undefined1 * *)(frame + 272))
#define local_c0 (*(undefined1 * *)(frame + 280))
#define local_a8 (*(pf_affine * *)(frame + 304))
#define local_a0 (*(undefined1 (*)[16])(frame + 312))
#define local_90 (*(ulong *)(frame + 328))
#define local_88 (*(pf_point *)(frame + 336))
#define local_70 (*(double *)(frame + 360))
#define local_68 (*(pf_point *)(frame + 368))
#define local_50 (*(double *)(frame + 392))
#define local_48 (*(pf_point * *)(frame + 400))
#define dStack_198 (*(double *)(frame + 64))
#define uStack_137 (*(undefined7 *)(frame + 161))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000664c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000664c(long param_1,ulong param_2,double *param_3,long *param_4,ulonglong param_5)

{
  unsigned char frame[504] = {0};

  ushort *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long *outline;
  pf_affine *transform;
  uchar uVar9;
  char cVar10;
  pf_point *ppVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  double dVar17;
  short sVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  ulong uVar23;
  bool bVar24;
  pf_point *ppVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  pf_point pVar31;

  local_d0 = auStack_38 + 0x30;
  local_c0 = (undefined1 *)&local_1c8;
  uVar13 = param_2 & 0xffffffff;
  uVar21 = *(ushort *)(param_1 + 0xb2);
  local_e0 = recovered_10002d70;
  local_d8 = &DAT_1000b800;
  local_c8 = &LAB_1000736b;
  local_a8 = (pf_affine *)param_3;
  recovered_100031ba(&local_100);
  bVar24 = true;
  if ((uVar21 <= (ushort)uVar13) || (*(ulong *)(param_1 + 0xc0) <= (ulong)uVar21)) {
LAB_100066e8:
    bVar24 = true;
    goto LAB_100066eb;
  }
  uVar16 = *(uint *)(*(long *)(param_1 + 0xb8) + uVar13 * 4);
  uVar22 = *(uint *)(*(long *)(param_1 + 0xb8) + 4 + uVar13 * 4);
  if ((uVar22 < uVar16) ||
     ((*(uint *)(param_1 + 0x7c) < uVar22 || (uVar22 = uVar22 - uVar16, uVar22 == 0))))
  goto LAB_100066e8;
  uVar15 = (ulong)(uVar16 + *(int *)(param_1 + 0x78));
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 - uVar15 < 10 || uVar13 < uVar15) {
LAB_100067d0:
    bVar24 = false;
    goto LAB_100066eb;
  }
  bVar6 = *(byte *)(*(long *)(param_1 + 8) + uVar15);
  local_68.x = (double)param_1;
  local_120 = param_4;
  if ((short)((ushort)bVar6 << 8) < 0) {
    if ((int)param_5 < 0xc) {
      uVar23 = uVar15 + 10;
      while( true ) {
        bVar24 = false;
        if (((uVar22 + uVar15 < uVar23) || (uVar13 < uVar23)) || (uVar13 - uVar23 < 4)) break;
        lVar8 = *(long *)(param_1 + 8);
        bVar6 = *(byte *)(lVar8 + uVar23);
        bVar7 = *(byte *)(lVar8 + 1 + uVar23);
        uVar21 = *(ushort *)(lVar8 + 2 + uVar23);
        uVar14 = uVar23 + 4;
        bVar24 = false;
        if ((bVar7 & 1) == 0) {
          if ((uVar13 < uVar14) || (uVar13 - uVar14 < 2)) break;
          if ((bVar7 & 2) == 0) goto LAB_100067d0;
          uVar16 = (uint)*(char *)(lVar8 + 4 + uVar23);
          uVar19 = (uint)*(char *)(lVar8 + 5 + uVar23);
          uVar23 = uVar23 + 6;
        }
        else {
          if ((uVar13 < uVar14) || (uVar13 - uVar14 < 4)) break;
          if ((bVar7 & 2) == 0) goto LAB_100067d0;
          uVar16 = (int)(short)((ushort)*(byte *)(lVar8 + 4 + uVar23) << 8) |
                   (uint)*(byte *)(lVar8 + 5 + uVar23);
          uVar19 = (int)(short)((ushort)*(byte *)(lVar8 + 6 + uVar23) << 8) |
                   (uint)*(byte *)(lVar8 + 7 + uVar23);
          uVar23 = uVar23 + 8;
        }
        if ((bVar7 & 8) == 0) {
          if ((bVar7 & 0x40) == 0) {
            if ((char)bVar7 < '\0') {
              bVar24 = false;
              if ((uVar23 <= uVar13) && (7 < uVar13 - uVar23)) {
                puVar1 = (ushort *)(lVar8 + uVar23);
                uVar20 = *(ushort *)(lVar8 + 2 + uVar23);
                dVar26 = (double)(int)(short)(uVar20 << 8 | uVar20 >> 8) * DAT_1000b448;
                uVar20 = *(ushort *)(lVar8 + 4 + uVar23);
                dVar27 = (double)(int)(short)(uVar20 << 8 | uVar20 >> 8) * DAT_1000b448;
                uVar20 = *(ushort *)(lVar8 + 6 + uVar23);
                dVar12 = (double)(int)(short)(uVar20 << 8 | uVar20 >> 8) * DAT_1000b448;
                uVar23 = uVar23 + 8;
                dVar17 = (double)(int)(short)(*puVar1 << 8 | *puVar1 >> 8) * DAT_1000b448;
                goto LAB_10006967;
              }
              break;
            }
            dVar12 = DAT_1000b2d8;
            dVar17 = DAT_1000b2d8;
          }
          else {
            bVar24 = false;
            if ((uVar13 < uVar23) || (uVar13 - uVar23 < 4)) break;
            uVar20 = *(ushort *)(lVar8 + 2 + uVar23);
            dVar17 = (double)(int)(short)(*(ushort *)(lVar8 + uVar23) << 8 |
                                         *(ushort *)(lVar8 + uVar23) >> 8) * DAT_1000b448;
            dVar12 = (double)(int)(short)(uVar20 << 8 | uVar20 >> 8) * DAT_1000b448;
            uVar23 = uVar23 + 4;
          }
          dVar26 = 0.0;
          dVar27 = 0.0;
        }
        else {
          bVar24 = false;
          if ((uVar13 < uVar23) || (uVar13 - uVar23 < 2)) break;
          dVar12 = (double)(int)(short)(*(ushort *)(lVar8 + uVar23) << 8 |
                                       *(ushort *)(lVar8 + uVar23) >> 8) * DAT_1000b448;
          uVar23 = uVar23 + 2;
          dVar26 = 0.0;
          dVar27 = 0.0;
          dVar17 = dVar12;
        }
LAB_10006967:
        dVar28 = (double)(int)uVar16;
        dVar29 = (double)(int)uVar19;
        dVar30 = dVar28;
        if ((bVar6 & 8) != 0) {
          dVar30 = dVar17 * dVar28 + dVar26 * dVar29;
          dVar29 = dVar29 * dVar12 + dVar28 * dVar27;
        }
        dVar28 = local_a8->a;
        dVar3 = local_a8->b;
        local_1c0 = (void *)(uintptr_t)pf_double_bits((dVar28 * dVar17 + dVar27 * dVar3));
        local_1b8 = dVar28 * dVar26 + dVar12 * dVar3;
        dVar4 = local_a8->c;
        dVar5 = local_a8->d;
        local_1b0 = dVar17 * dVar4 + dVar27 * dVar5;
        local_1a8 = dVar26 * dVar4 + dVar12 * dVar5;
        local_1a0 = local_a8->e + dVar30 * dVar28 + dVar3 * dVar29;
        dStack_198 = local_a8->f + dVar30 * dVar4 + dVar5 * dVar29;
        local_f8 = 0xffffffff;
        uVar9 = recovered_1000664c(param_1,(ulong)(ushort)(uVar21 << 8 | uVar21 >> 8),
                                   (double *)&local_1c0,local_120,(ulong)((int)param_5 + 1));
        if (uVar9 == '\0') goto LAB_100067d0;
        if ((bVar6 & 1) != 0) {
          uVar13 = *(ulong *)((long)local_68.x + 0x10);
          if ((((uVar13 < uVar23) || (uVar13 - uVar23 < 2)) || (uVar13 < uVar23 + 2)) ||
             (uVar21 = *(ushort *)(*(long *)((long)local_68.x + 8) + uVar23),
             uVar14 = (ulong)(ushort)(uVar21 << 8 | uVar21 >> 8), uVar13 - (uVar23 + 2) < uVar14))
          goto LAB_100067d0;
          uVar23 = uVar23 + uVar14 + 2;
        }
        if ((bVar7 & 0x20) == 0) goto LAB_100066e8;
        uVar13 = *(ulong *)((long)local_68.x + 0x10);
        param_1 = (long)local_68.x;
      }
      goto LAB_100066eb;
    }
    goto LAB_100067d0;
  }
  uVar21 = CONCAT11(bVar6,*(undefined1 *)(*(long *)(param_1 + 8) + 1 + uVar15));
  if ((uVar21 == 0) || (bVar24 = true, uVar13 - uVar15 < (ulong)uVar22)) goto LAB_100066eb;
  uVar23 = uVar15 + 10;
  bVar24 = false;
  if ((uVar13 < uVar23) || (uVar13 - uVar23 < (ulong)((uint)uVar21 * 2))) goto LAB_100066eb;
  local_f8 = 0xffffffff;
  recovered_10007d70(&local_1c0,(ulong)uVar21);
  for (dVar12 = 0.0; (double)pf_double_bits(local_1b8) != dVar12; dVar12 = (double)((long)dVar12 + 1)) {
    uVar21 = *(ushort *)(*(long *)((long)local_68.x + 8) + uVar15 + 10 + (long)dVar12 * 2);
    *(ushort *)((long)local_1c0 + (long)dVar12 * 2) = uVar21 << 8 | uVar21 >> 8;
  }
  dVar12 = (double)(uVar23 + (long)pf_double_bits(local_1b8) * 2);
  dVar17 = (double)*(ulong *)((long)local_68.x + 0x10);
  if ((ulong)dVar12 <= (ulong)dVar17 && 1 < (ulong)((long)dVar17 - (long)dVar12)) {
    dVar26 = (double)((long)dVar12 + 2);
    if (((ulong)dVar26 <= (ulong)dVar17) &&
       (uVar21 = *(ushort *)(*(long *)((long)local_68.x + 8) + (long)dVar12),
       uVar13 = (ulong)(ushort)(uVar21 << 8 | uVar21 >> 8),
       uVar13 <= (ulong)((long)dVar17 - (long)dVar26))) {
      (*(uint128 *)(void *)local_150) = (uint128)0x0;
      local_140 = 0;
      local_154 = *(ushort *)((long)local_1c0 + (long)pf_double_bits(local_1b8) * 2 + -2) + 1;
      local_50 = (double)(ulong)(local_154 & 0xffff);
      local_f8 = 1;
      local_70 = dVar26;
      local_48 = (pf_point *)uVar13;
      recovered_1000623e((long *)local_150,(ulong)local_50);
      local_48 = (pf_point *)((long)local_48 + (long)local_70);
LAB_10006bf2:
      dVar12 = local_68.x;
      do {
        if ((ulong)local_50 <= (ulong)PF_PART8(local_150, 8)) {
          local_f8 = 4;
          recovered_10007e8a(&local_138,(ulong)local_50);
          local_f8 = 5;
          recovered_10007e8a(&local_180,(ulong)local_50);
          dVar12 = 0.0;
          sVar18 = 0;
          bVar24 = false;
          goto LAB_10006cfd;
        }
        if (*(pf_point **)((long)dVar12 + 0x10) <= local_48) {
LAB_10006caa:
          bVar24 = false;
          goto LAB_10006e40;
        }
        local_138 = *(byte *)((long)&local_48->x + *(long *)((long)dVar12 + 8));
        local_f8 = 2;
        recovered_10007e3a((long *)local_150,&local_138);
        ppVar25 = (pf_point *)((long)&local_48->x + 1);
        if ((local_138 & 8) == 0) goto LAB_10006c9a;
        if (*(pf_point **)((long)local_68.x + 0x10) <= ppVar25) goto LAB_10006caa;
        pdVar2 = &local_48->x;
        local_48 = (pf_point *)((long)&local_48->x + 2);
        cVar10 = *(char *)((long)pdVar2 + *(long *)((long)local_68.x + 8) + 1);
        while (dVar12 = local_68.x, cVar10 != '\0') {
          local_70 = pf_bits_double(CONCAT71(PF_PART7(local_70, 1),cVar10 + -1));
          local_f8 = 3;
          recovered_10007e3a((long *)local_150,&local_138);
          cVar10 = PF_PART1(local_70, 0);
        }
      } while( true );
    }
  }
  bVar24 = false;
  goto LAB_10006e5b;
LAB_10006cfd:
  if (local_50 == dVar12) goto LAB_10006d87;
  bVar6 = *(byte *)(PF_PART8(local_150, 0) + (long)dVar12);
  if ((bVar6 & 2) == 0) {
    if ((bVar6 & 0x10) == 0) {
      if ((*(pf_point **)((long)local_68.x + 0x10) < local_48) ||
         ((ulong)((long)*(pf_point **)((long)local_68.x + 0x10) - (long)local_48) < 2))
      goto LAB_10006e18;
      uVar21 = *(ushort *)((long)&local_48->x + *(long *)((long)local_68.x + 8));
      sVar18 = sVar18 + (uVar21 << 8 | uVar21 >> 8);
      local_48 = (pf_point *)((long)&local_48->x + 2);
    }
  }
  else {
    if (*(pf_point **)((long)local_68.x + 0x10) <= local_48) goto LAB_10006e16;
    pdVar2 = &local_48->x;
    local_48 = (pf_point *)((long)&local_48->x + 1);
    uVar20 = (ushort)*(byte *)((long)pdVar2 + *(long *)((long)local_68.x + 8));
    uVar21 = -uVar20;
    if ((bVar6 & 0x10) != 0) {
      uVar21 = uVar20;
    }
    sVar18 = sVar18 + uVar21;
  }
  *(short *)(CONCAT71(uStack_137,local_138) + (long)dVar12 * 2) = sVar18;
  dVar12 = (double)((long)dVar12 + 1);
  goto LAB_10006cfd;
LAB_10006e16:
  bVar24 = false;
  goto LAB_10006e18;
LAB_10006c9a:
  local_48 = ppVar25;
  goto LAB_10006bf2;
LAB_10006d87:
  sVar18 = 0;
  bVar24 = false;
  for (dVar12 = 0.0; local_50 != dVar12; dVar12 = (double)((long)dVar12 + 1)) {
    bVar6 = *(byte *)(PF_PART8(local_150, 0) + (long)dVar12);
    if ((bVar6 & 4) == 0) {
      if ((bVar6 & 0x20) == 0) {
        if ((*(pf_point **)((long)local_68.x + 0x10) < local_48) ||
           ((ulong)((long)*(pf_point **)((long)local_68.x + 0x10) - (long)local_48) < 2))
        goto LAB_10006e18;
        uVar21 = *(ushort *)((long)&local_48->x + *(long *)((long)local_68.x + 8));
        sVar18 = sVar18 + (uVar21 << 8 | uVar21 >> 8);
        local_48 = (pf_point *)((long)&local_48->x + 2);
      }
    }
    else {
      if (*(pf_point **)((long)local_68.x + 0x10) <= local_48) goto LAB_10006e16;
      pdVar2 = &local_48->x;
      local_48 = (pf_point *)((long)&local_48->x + 1);
      uVar20 = (ushort)*(byte *)((long)pdVar2 + *(long *)((long)local_68.x + 8));
      uVar21 = -uVar20;
      if ((bVar6 & 0x20) != 0) {
        uVar21 = uVar20;
      }
      sVar18 = sVar18 + uVar21;
    }
    *(short *)((long)local_180 + (long)dVar12 * 2) = sVar18;
  }
  local_50 = 0.0;
  dVar12 = 0.0;
  while (bVar24 = (ulong)pf_double_bits(local_1b8) <= (ulong)dVar12, !bVar24) {
    uVar21 = *(ushort *)((long)local_1c0 + (long)dVar12 * 2);
    local_70 = (double)(ulong)uVar21;
    if (((ulong)local_70 < (ulong)local_50) || (local_1c8 = dVar12, (ushort)local_154 <= uVar21))
    break;
    (*(uint128 *)(void *)local_a0) = (uint128)0x0;
    local_90 = 0;
    (*(uint128 *)(void *)local_118) = (uint128)0x0;
    local_108 = 0;
    dVar12 = local_50;
    while ((ulong)dVar12 <= (ulong)local_70) {
      local_48 = (pf_point *)(uintptr_t)pf_double_bits((double)(int)*(short *)(CONCAT71(uStack_137,local_138) + (long)dVar12 * 2));
      dStack_40 = (double)(int)((long)((ulong)*(ushort *)((long)local_180 + (long)dVar12 * 2) <<
                                      0x30) >> 0x30);
      local_88.y = dStack_40;
      local_88.x = pf_bits_double((uintptr_t)local_48);
      local_68.x = dVar12;
      PF_PART1(local_168.x, 0) = *(byte *)(PF_PART8(local_150, 0) + (long)dVar12) & 1;
      local_f8 = 6;
      recovered_10007b6e((long *)local_a0,(ulonglong *)&local_88);
      local_f8 = 7;
      recovered_10007fb6(local_118,(uchar *)&local_168);
      dVar12 = (double)((long)local_68.x + 1);
      dVar17 = dVar12;
      if (local_70 == local_68.x) {
        dVar17 = local_50;
      }
      if ((PF_PART1(local_168.x, 0) == '\0') && ((*(byte *)(PF_PART8(local_150, 0) + (long)dVar17) & 1) == 0)) {
        local_68.x = dVar12;
        ppVar25 = (pf_point *)(uintptr_t)pf_double_bits(((pf_bits_double((uintptr_t)local_48) +
                   (double)(int)*(short *)(CONCAT71(uStack_137,local_138) + (long)dVar17 * 2)) *
                  _DAT_1000b430));
        dVar12 = (dStack_40 +
                 (double)(int)((long)((ulong)*(ushort *)((long)local_180 + (long)dVar17 * 2) << 0x30
                                     ) >> 0x30)) * dRam000000001000b438;
        if (PF_PART8(local_a0, 8) == local_90) {
          uVar13 = PF_PART8(local_a0, 8) * 2;
          if (PF_PART8(local_a0, 8) == 0) {
            uVar13 = 4;
          }
          local_f8 = 8;
          local_48 = ppVar25;
          dStack_40 = dVar12;
          recovered_10007f54((long *)local_a0,uVar13);
          ppVar25 = local_48;
          dVar12 = dStack_40;
        }
        pdVar2 = (double *)(PF_PART8(local_a0, 0) + PF_PART8(local_a0, 8) * 0x10);
        *pdVar2 = pf_bits_double((uintptr_t)ppVar25);
        pdVar2[1] = dVar12;
        PF_PART8(local_a0, 8) = PF_PART8(local_a0, 8) + 1;
        PF_PART1(local_190.x, 0) = 1;
        local_f8 = 9;
        recovered_1000806e((long *)local_118,(uchar *)&local_190);
        dVar12 = local_68.x;
      }
    }
    uVar13 = PF_PART8(local_a0, 8);
    ppVar25 = (pf_point *)PF_PART8(local_a0, 0);
    if (PF_PART8(local_a0, 8) == 0) {
      local_48 = (pf_point *)PF_PART8(local_a0, 0);
    }
    else {
      if (*(char *)PF_PART8(local_118, 0) == '\x01') {
        local_48 = (pf_point *)PF_PART8(local_a0, 0);
      }
      else {
        if (*(char *)(PF_PART8(local_118, 0) + PF_PART8(local_118, 8) + -1) == '\x01') {
          pVar31 = *(pf_point *)(PF_PART8(local_a0, 0) + (PF_PART8(local_a0, 8) - 1) * 0x10);
        }
        else {
          pVar31 = recovered_10007bb7((pf_point *)(PF_PART8(local_a0, 0) + (PF_PART8(local_a0, 8) - 1) * 0x10),
                                      (pf_point *)PF_PART8(local_a0, 0));
        }
        local_48 = (pf_point *)0;
        if (ppVar25 == (pf_point *)0x0) {
          local_48 = (pf_point *)uVar13;
        }
        if (uVar13 == local_90) {
          local_f8 = 10;
          local_68 = pVar31;
          recovered_10007f54((long *)local_a0,uVar13 * 2);
          ppVar25 = (pf_point *)PF_PART8(local_a0, 0);
          uVar13 = PF_PART8(local_a0, 8);
          pVar31 = local_68;
        }
        ppVar11 = ppVar25 + uVar13;
        for (uVar15 = uVar13; local_48 < uVar15; uVar15 = uVar15 - 1) {
          dVar12 = ppVar11[-1].y;
          ppVar11->x = ppVar11[-1].x;
          ppVar11->y = dVar12;
          ppVar11 = ppVar11 + -1;
        }
        ppVar25[(long)local_48] = pVar31;
        local_68.x = (double)(uVar13 + 1);
        PF_PART8(local_a0, 8) = uVar13 + 1;
        PF_PART1(local_88.x, 0) = 1;
        local_f8 = 0xb;
        local_48 = ppVar25;
        recovered_100080be((long *)local_118,PF_PART8(local_118, 0),(undefined1 *)&local_88);
        if (local_68.x == 0.0) goto LAB_10007334;
      }
      local_f8 = 0xc;
      recovered_10007b6e((long *)local_a0,(ulonglong *)local_48);
      PF_PART1(local_88.x, 0) = 1;
      local_f8 = 0xd;
      recovered_1000806e((long *)local_118,(uchar *)&local_88);
      local_48 = (pf_point *)PF_PART8(local_a0, 0);
      local_88 = recovered_10007c3d(local_a8,(pf_point *)PF_PART8(local_a0, 0));
      local_f8 = 0xe;
      recovered_10007bda(local_120,&local_88.x);
      local_68.x = (double)PF_PART8(local_a0, 8);
      dVar12 = 0.0;
      while( true ) {
        ppVar25 = local_48;
        transform = local_a8;
        outline = local_120;
        dVar17 = (double)((long)dVar12 + 1);
        if ((ulong)local_68.x <= (ulong)dVar17) break;
        if (*(char *)(PF_PART8(local_118, 0) + (long)dVar17) == '\x01') {
          local_88 = recovered_10007c3d(local_a8,local_48 + (long)dVar17);
          local_f8 = 0xf;
          local_50 = dVar17;
          recovered_10007c84(outline,&local_88.x);
        }
        else {
          dVar26 = (double)((long)dVar12 + 2);
          if ((ulong)local_68.x <= (ulong)dVar26) break;
          local_88 = recovered_10007c3d(local_a8,local_48 + (long)dVar12);
          local_168 = recovered_10007c3d(transform,ppVar25 + (long)dVar17);
          local_50 = dVar26;
          local_190 = recovered_10007c3d(transform,ppVar25 + (long)dVar26);
          local_f8 = 0x10;
          recovered_10008240(outline,&local_88,&local_168,&local_190,0);
        }
        dVar12 = local_50;
      }
      local_f8 = 0x11;
      recovered_10007d0c(local_120);
    }
LAB_10007334:
    dVar17 = (double)((long)local_70 + 1);
    PF_PART8(local_118, 8) = 0;
    recovered_10002de7((void *)PF_PART8(local_118, 0));
    recovered_10002de7(local_48);
    local_50 = dVar17;
    dVar12 = (double)((long)local_1c8 + 1);
  }
LAB_10006e18:
  local_178 = 0;
  recovered_10002de7(local_180);
  local_130 = 0;
  recovered_10002de7((void *)CONCAT71(uStack_137,local_138));
LAB_10006e40:
  PF_PART8(local_150, 8) = 0;
  recovered_10002de7((void *)PF_PART8(local_150, 0));
LAB_10006e5b:
  local_1b8 = 0.0;
  recovered_10002de7(local_1c0);
LAB_100066eb:
  recovered_100031d1(&local_100);
  return bVar24;
}

#undef DAT_1000b2d8
#undef DAT_1000b430
#undef DAT_1000b448
#undef DAT_1000b800
#undef LAB_1000736b
#undef UNK_1000b438
#undef _DAT_1000b430
#undef dRam000000001000b438
#undef dStack_40
#undef auStack_38
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_1a0
#undef local_190
#undef local_180
#undef local_178
#undef local_168
#undef local_154
#undef local_150
#undef local_140
#undef local_138
#undef local_130
#undef local_120
#undef local_118
#undef local_108
#undef local_100
#undef local_f8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef dStack_198
#undef uStack_137

#undef DAT_1000b2d8
#define DAT_1000b2d8 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000b450
#define DAT_1000b450 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_1000b458
#define DAT_1000b458 (*(double *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_1000b460
#define DAT_1000b460 (*(double *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_1000b468
#define DAT_1000b468 (*(double *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_1000b828
#define DAT_1000b828 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55cU)))
#undef LAB_100077de
#define LAB_100077de (*(uint8_t *)(0x100077deU))
#undef _DAT_1000b450
#define _DAT_1000b450 (*(double *)(((uintptr_t)pf_module_state + 0x184U)))
#define local_d8 (*(ulong *)(frame + 16))
#define local_d0 (*(undefined4 *)(frame + 24))
#define local_b8 (*(code * *)(frame + 48))
#define local_b0 (*(undefined * *)(frame + 56))
#define local_a8 (*(undefined1 * *)(frame + 64))
#define local_a0 (*(undefined1 * *)(frame + 72))
#define local_98 (*(undefined1 * *)(frame + 80))
#define local_80 (*(double *)(frame + 104))
#define local_78 (*(double *)(frame + 112))
#define local_70 (*(int * *)(frame + 120))
#define local_64 (*(int *)(frame + 132))
#define local_60 (*(long * *)(frame + 136))
#define local_58 (*(long * *)(frame + 144))
#define local_50 (*(double *)(frame + 152))
#define local_48 (*(double *)(frame + 160))
#define local_39 (*(uchar *)(frame + 175))
#define local_38 (*(int * *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10007490(double param_1,int *param_2,long *param_3)

{
  unsigned char frame[264] = {0};

  double dVar1;
  double dVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;

  local_70 = param_2;
  local_48 = param_1;
  local_38 = param_2;
  recovered_10006618(param_2);
  local_98 = (undefined1 *)&local_d8;
  *(double *)(local_38 + 4) = local_48;
  lVar3 = param_3[1];
  local_b8 = recovered_10002d70;
  local_b0 = &DAT_1000b828;
  local_a0 = &LAB_100077de;
  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 232) + -8);
  recovered_100031ba(&local_d8);
  if ((lVar3 != 0) && (*(char *)((long)param_3 + 0x19) == '\x01')) {
    local_d0 = 1;
    local_58 = param_3;
    local_48 = recovered_10001050(pf_bits_double((uint64_t)param_3[8]));
    local_d0 = 2;
    local_60 = (long *)(uintptr_t)pf_double_bits((double)recovered_10001079(pf_bits_double((uintptr_t)local_58[9])));
    local_d0 = 3;
    local_50 = recovered_10001050(pf_bits_double((uintptr_t)local_58[10]));
    local_d0 = 4;
    dVar18 = recovered_10001079(pf_bits_double((uintptr_t)local_58[0xb]));
    uVar7 = ((int)pf_bits_double((uintptr_t)local_60) - (int)local_48) + 2;
    if (0 < (int)uVar7) {
      uVar8 = ((int)dVar18 - (int)local_50) + 2;
      if (0 < (int)uVar8) {
        local_64 = (int)local_48 + -1;
        uVar10 = (int)dVar18 + 1;
        local_50 = (double)(ulong)uVar10;
        *local_38 = local_64;
        local_38[1] = uVar10;
        local_38[2] = uVar7;
        local_38[3] = uVar8;
        local_60 = (long *)(local_38 + 6);
        local_48 = (double)(ulong)uVar7;
        local_80 = (double)(ulong)uVar8;
        local_39 = '\0';
        local_d0 = 5;
        recovered_1000835a(local_60,(long)local_80 * (long)local_48,&local_39);
        dVar6 = DAT_1000b468;
        dVar5 = DAT_1000b460;
        dVar4 = DAT_1000b458;
        dVar18 = DAT_1000b2d8;
        local_78 = local_50;
        dVar13 = 0.0;
        while (dVar12 = dVar13, dVar12 != local_80) {
          dVar19 = (local_78 - (double)(int)dVar12) + _DAT_1000b450;
          for (dVar13 = 0.0; dVar13 != local_48; dVar13 = (double)((long)dVar13 + 1)) {
            lVar3 = *local_58;
            dVar20 = 0.0;
            iVar9 = 0;
            for (iVar16 = 0; iVar16 != 4; iVar16 = iVar16 + 1) {
              dVar21 = dVar20 * dVar5 + dVar19;
              dVar22 = 0.0;
              for (iVar17 = 0; iVar17 != 4; iVar17 = iVar17 + 1) {
                iVar15 = 0;
                for (lVar14 = 0; local_58[1] * 0x20 != lVar14; lVar14 = lVar14 + 0x20) {
                  dVar1 = *(double *)(lVar3 + 8 + lVar14);
                  dVar2 = *(double *)(lVar3 + 0x18 + lVar14);
                  if (((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) &&
                     (((dVar1 <= dVar21 && (iVar11 = 1, dVar21 < dVar2)) ||
                      ((dVar21 < dVar1 && (iVar11 = -1, dVar2 <= dVar21)))))) {
                    if (((*(double *)(lVar3 + 0x10 + lVar14) - *(double *)(lVar3 + lVar14)) *
                        (dVar21 - dVar1)) / (dVar2 - dVar1) + *(double *)(lVar3 + lVar14) <=
                        dVar22 * dVar6 + (double)(int)dVar13 + (double)local_64 + dVar4) {
                      iVar11 = 0;
                    }
                    iVar15 = iVar15 + iVar11;
                  }
                }
                iVar9 = (iVar9 + 1) - (uint)(iVar15 == 0);
                dVar22 = dVar22 + dVar18;
              }
              dVar20 = dVar20 + dVar18;
            }
            *(char *)((long)dVar13 + *local_60 + (long)dVar12 * (long)local_48) =
                 (char)((iVar9 * 0xff) / 0x10);
          }
          local_50 = dVar12;
          dVar13 = (double)((long)dVar12 + 1);
        }
      }
    }
  }
  recovered_100031d1(&local_d8);
  return local_70;
}

#undef DAT_1000b2d8
#undef DAT_1000b450
#undef DAT_1000b458
#undef DAT_1000b460
#undef DAT_1000b468
#undef DAT_1000b828
#undef LAB_100077de
#undef _DAT_1000b450
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_39
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007844(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_100078e6(param_1,param_2);
  if (uVar1 == 0xffffffffffffffff) {
    uVar1 = param_1[1];
  }
  return *param_1 + uVar1 * 8;
}


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd3cU)))
#define local_1a (*(ushort *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000786a
 */

ulonglong recovered_1000786a(long *param_1,uint *param_2)

{
  unsigned char frame[74] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10007844(param_1,(int *)param_2);
  if (uVar1 == param_1[1] * 8 + *param_1) {
    recovered_10007964((long)param_1);
    local_1a = 0;
    recovered_10007996(param_1,param_2,&local_1a);
    recovered_100064b2(param_1 + 6,(ulonglong *)PTR_DAT_1000c008);
    recovered_100079f4(param_1,param_1[1] + -1);
    uVar1 = (*param_1 + param_1[1] * 8) - 8;
  }
  return uVar1 + 4;
}

#undef PTR_DAT_1000c008
#undef local_1a

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_100078e6(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong *puVar2;

  if (param_1[4] != 0) {
    uVar1 = recovered_1000793c((long)param_1,(long)param_2);
    puVar2 = (ulonglong *)(uVar1 * 8 + param_1[3]);
    while (uVar1 = *puVar2, uVar1 != 0xffffffffffffffff) {
      if (*(int *)(*param_1 + uVar1 * 8) == *param_2) {
        return uVar1;
      }
      puVar2 = (ulonglong *)(uVar1 * 8 + param_1[6]);
    }
  }
  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000793c(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006358(param_2,4);
  return uVar1 & *(long *)(param_1 + 0x20) - 1U;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007964
 */

void recovered_10007964(long param_1)

{
  unsigned char frame[64] = {0};

  if ((*(long *)(param_1 + 0x20) == 0) ||
     ((ulong)(*(long *)(param_1 + 0x20) * 3) < *(long *)(param_1 + 8) * 4 + 4U)) {
    recovered_10007a2a(param_1,*(long *)(param_1 + 8) * 2 + 2);
    return;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007996(long *param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar3 = 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 * 2;
    }
    recovered_10007ae4(param_1,uVar3);
    lVar2 = param_1[1];
  }
  puVar1 = (undefined4 *)(*param_1 + lVar2 * 8);
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *param_3;
  param_1[1] = lVar2 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f4
 */

void recovered_100079f4(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;

  uVar2 = recovered_1000793c((long)param_1,param_2 * 8 + *param_1);
  lVar1 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar1 + uVar2 * 8);
  *(long *)(lVar1 + uVar2 * 8) = param_2;
  return;
}


#undef PTR_DAT_1000c008
#define PTR_DAT_1000c008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a2a
 */

void recovered_10007a2a(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  ulonglong uVar2;
  ulong uVar3;

  uVar3 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar3 = *(ulong *)(param_1 + 8) * 2;
  }
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  uVar2 = recovered_10007a92(uVar3);
  puVar1 = PTR_DAT_1000c008;
  recovered_1000638a((long *)(param_1 + 0x18),uVar2,(ulonglong *)PTR_DAT_1000c008);
  recovered_1000638a((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(ulonglong *)puVar1);
  recovered_10007aa6(param_1);
  return;
}

#undef PTR_DAT_1000c008

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007a92(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  bool bVar3;

  uVar2 = 8;
  do {
    uVar1 = uVar2;
    bVar3 = uVar2 < param_1;
    uVar2 = uVar2 * 2;
  } while (bVar3);
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007aa6(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_100079f4((long *)param_1,uVar1);
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007ae4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10007b37(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007b37(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 << 3);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007b4e(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)object = *(undefined8 *)p0;
  uVar1 = *(undefined8 *)((long)p0 + 0x10);
  *(undefined8 *)((long)object + 8) = *(undefined8 *)((long)p0 + 8);
  *(undefined8 *)((long)object + 0x10) = uVar1;
  *(undefined8 *)p0 = 0;
  *(undefined8 *)((long)p0 + 8) = 0;
  *(undefined8 *)((long)p0 + 0x10) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007b6e(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar4 = 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 * 2;
    }
    recovered_10007f54(param_1,uVar4);
    lVar3 = param_1[1];
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + lVar3 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define _DAT_0203d8b0 (*(double *)((uintptr_t)(pf_module_state+0x164)))
#define dRam000000000203d8b8 (*(double *)((uintptr_t)(pf_module_state+0x16c)))
pf_point recovered_10007bb7(pf_point *left,pf_point *right)

{
  unsigned char frame[64] = {0};

  pf_point pVar1;

  pVar1.x = (right->x + left->x) * _DAT_0203d8b0;
  pVar1.y = (right->y + left->y) * dRam000000000203d8b8;
  return pVar1;
}

#undef _DAT_0203d8b0
#undef dRam000000000203d8b8

/* Restore double bit views in the outline state. Pooka's Free Software License. */
void recovered_10007bda(long *outline,double *point){
 if(*(byte *)(outline+3)&&
    (pf_bits_double(outline[6])!=pf_bits_double(outline[4])||pf_bits_double(outline[7])!=pf_bits_double(outline[5])))
  recovered_10007c84(outline,(double *)(outline+4));
 outline[4]=pf_double_bits(point[0]);outline[5]=pf_double_bits(point[1]);
 outline[6]=outline[4];outline[7]=outline[5];*(byte *)(outline+3)=1;
 recovered_10008140((long)outline,point);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

pf_point recovered_10007c3d(pf_affine *transform,pf_point *point)

{
  unsigned char frame[64] = {0};

  pf_point pVar1;

  pVar1.x = point->x * transform->a + transform->b * point->y + transform->e;
  pVar1.y = point->x * transform->c + transform->d * point->y + transform->f;
  return pVar1;
}


/* Restore double bit views in the outline state. Pooka's Free Software License. */
void recovered_10007c84(long *outline,double *point){
 if(!*(byte *)(outline+3)){recovered_10007bda(outline,point);return;}
 if(pf_bits_double(outline[6])!=point[0]||pf_bits_double(outline[7])!=point[1]){
  uint64_t edge[4]={(uint64_t)outline[6],(uint64_t)outline[7],pf_double_bits(point[0]),pf_double_bits(point[1])};
  recovered_100081a0(outline,edge);
  outline[6]=edge[2];outline[7]=edge[3];
 }
 recovered_10008140((long)outline,point);
}


/* Restore double bit views in the outline state. Pooka's Free Software License. */
void recovered_10007d0c(long *outline){
 if(*(byte *)(outline+3)&&
    (pf_bits_double(outline[6])!=pf_bits_double(outline[4])||pf_bits_double(outline[7])!=pf_bits_double(outline[5]))){
  uint64_t edge[4]={(uint64_t)outline[6],(uint64_t)outline[7],(uint64_t)outline[4],(uint64_t)outline[5]};
  recovered_100081a0(outline,edge);
 }
 *(byte *)(outline+3)=0;outline[6]=outline[4];outline[7]=outline[5];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

void recovered_10007d70(void *object,ulong p0)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10007d86(object,p0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d86
 */

void recovered_10007d86(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007dcc(param_1,param_2);
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
 * Address: 0x10007dcc
 */

void recovered_10007dcc(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_10007e23(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007e23(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 * 2);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10007e3a(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_1000623e(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = *param_2;
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 + 1 + *param_1 + -1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007e8a(void *object,ulong p0)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10007ea0(object,p0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ea0
 */

void recovered_10007ea0(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007ee6(param_1,param_2);
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
 * Address: 0x10007ee6
 */

void recovered_10007ee6(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_10007f3d(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007f3d(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 * 2);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007f54(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;

  if ((ulong)param_1[2] < param_2) {
    pvVar3 = recovered_10002db3(param_2 << 4);
    uVar1 = param_1[1];
    lVar4 = 0;
    for (uVar5 = 0; uVar5 < uVar1; uVar5 = uVar5 + 1) {
      uVar2 = ((undefined8 *)(*param_1 + lVar4))[1];
      *(undefined8 *)((long)pvVar3 + lVar4) = *(undefined8 *)(*param_1 + lVar4);
      ((undefined8 *)((long)pvVar3 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = (long)pvVar3;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar * recovered_10007fb6(void *vector,uchar *value)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = *(long *)((long)vector + 8);
  if (lVar2 == *(long *)((long)vector + 0x10)) {
    uVar3 = 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 * 2;
    }
    recovered_10008006(vector,uVar3);
    lVar2 = *(long *)((long)vector + 8);
  }
  lVar1 = *(long *)vector;
  *(uchar *)(lVar1 + lVar2) = *value;
  *(long *)((long)vector + 8) = lVar2 + 1;
  return (uchar *)(lVar1 + lVar2);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10008006(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_1000805b(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined1 *)(uVar2 + uVar3) = *(undefined1 *)(*param_1 + uVar3);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000805b(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined1 * recovered_1000806e(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar3 = 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 * 2;
    }
    recovered_10008006(param_1,uVar3);
    lVar2 = param_1[1];
  }
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return (undefined1 *)(lVar1 + lVar2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080be
 */

long recovered_100080be(long *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (*param_1 == 0) {
    uVar2 = param_1[1];
    uVar4 = uVar2;
  }
  else {
    uVar2 = param_1[1];
    uVar4 = param_2 - *param_1;
  }
  if (uVar2 == param_1[2]) {
    uVar3 = 4;
    if (uVar2 != 0) {
      uVar3 = uVar2 * 2;
    }
    recovered_10008006(param_1,uVar3);
  }
  lVar1 = *param_1;
  uVar2 = param_1[1];
  for (uVar3 = uVar2; uVar4 < uVar3; uVar3 = uVar3 - 1) {
    *(undefined1 *)(lVar1 + uVar3) = *(undefined1 *)(lVar1 + -1 + uVar3);
  }
  *(undefined1 *)(lVar1 + uVar4) = *param_3;
  param_1[1] = uVar2 + 1;
  return lVar1 + uVar4;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10008140(long param_1,double *param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;

  if (*(char *)(param_1 + 0x19) == '\0') {
    dVar2 = *param_2;
    dVar1 = param_2[1];
    *(double *)(param_1 + 0x40) = dVar2;
    *(double *)(param_1 + 0x58) = dVar1;
    *(double *)(param_1 + 0x48) = dVar2;
    *(double *)(param_1 + 0x50) = dVar1;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  else {
    dVar2 = *param_2;
    if (*(double *)(param_1 + 0x40) <= *param_2) {
      dVar2 = *(double *)(param_1 + 0x40);
    }
    *(double *)(param_1 + 0x40) = dVar2;
    dVar2 = *param_2;
    if (*param_2 <= *(double *)(param_1 + 0x48)) {
      dVar2 = *(double *)(param_1 + 0x48);
    }
    *(double *)(param_1 + 0x48) = dVar2;
    dVar2 = param_2[1];
    if (*(double *)(param_1 + 0x50) <= param_2[1]) {
      dVar2 = *(double *)(param_1 + 0x50);
    }
    *(double *)(param_1 + 0x50) = dVar2;
    dVar2 = param_2[1];
    if (param_2[1] <= *(double *)(param_1 + 0x58)) {
      dVar2 = *(double *)(param_1 + 0x58);
    }
    *(double *)(param_1 + 0x58) = dVar2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100081a0(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;

  uVar8 = param_1[1];
  if (uVar8 == param_1[2]) {
    uVar10 = 4;
    if (uVar8 != 0) {
      uVar10 = uVar8 * 2;
    }
    if (uVar8 < uVar10) {
      pvVar6 = recovered_10002db3(uVar10 << 5);
      lVar7 = param_1[1];
      lVar9 = 0;
      while (bVar11 = lVar7 != 0, lVar7 = lVar7 + -1, bVar11) {
        puVar1 = (undefined8 *)(*param_1 + lVar9);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        puVar1 = (undefined8 *)(*param_1 + 0x10 + lVar9);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar6 + lVar9 + 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        *(undefined8 *)((long)pvVar6 + lVar9) = uVar3;
        ((undefined8 *)((long)pvVar6 + lVar9))[1] = uVar4;
        lVar9 = lVar9 + 0x20;
      }
      recovered_10002de7((void *)*param_1);
      *param_1 = (long)pvVar6;
      param_1[2] = uVar10;
      uVar8 = param_1[1];
    }
  }
  lVar7 = *param_1;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar8 * 0x20);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar7 + uVar8 * 0x20);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recover the native De Casteljau subdivision and its five real arguments.
 * Pooka's Free Software License. */
void recovered_10008240(void *outline,pf_point *start,pf_point *control,pf_point *end,int depth){
 pf_point center={(start->x+end->x)*0.5,(start->y+end->y)*0.5};
 double dx=control->x-center.x,dy=control->y-center.y;
 double tolerance=*(double *)(pf_module_state+0x1a4);
 if(depth<10&&dx*dx+dy*dy>tolerance){
  pf_point a={(start->x+control->x)*0.5,(start->y+control->y)*0.5};
  pf_point b={(control->x+end->x)*0.5,(control->y+end->y)*0.5};
  pf_point middle={(a.x+b.x)*0.5,(a.y+b.y)*0.5};
  recovered_10008240(outline,start,&a,&middle,depth+1);
  recovered_10008240(outline,&middle,&b,end,depth+1);
 }else recovered_10007c84(outline,(double *)end);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000835a(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulonglong extraout_RAX = 0;

  param_1[1] = 0;
  recovered_1000836a(param_1,param_2,param_3);
  return extraout_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000836a(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_100083ce(param_1,param_2);
    return;
  }
  recovered_1000623e(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_100083ce(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong in_RAX;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000623e(param_1,param_2);
    in_RAX = param_1[1];
    while (in_RAX < param_2) {
      *(undefined1 *)(*param_1 + in_RAX) = 0;
      in_RAX = param_1[1] + 1;
      param_1[1] = in_RAX;
    }
  }
  return in_RAX;
}


#undef PTR_recovered_10008416_1000c0a0
#define PTR_recovered_10008416_1000c0a0 (*(void * *)(((uintptr_t)pf_module_state + 0xdd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008416
 */

void recovered_10008416(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined ***)object = &PTR_recovered_10008416_1000c0a0;
  recovered_100099d6((void *)((long)object + 0x1840));
  recovered_10009956((void *)((long)object + 0x1828));
  recovered_100099ae((void *)((long)object + 0x28));
  return;
}

#undef PTR_recovered_10008416_1000c0a0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10008454(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10008416(object);
  recovered_10002de7(object);
  return;
}


#undef DAT_1000b350
#define DAT_1000b350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_1000b838
#define DAT_1000b838 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef LAB_10009121
#define LAB_10009121 (*(uint8_t *)(0x10009121U))
#undef _DAT_1000b350
#define _DAT_1000b350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_178 (*(long ******* *)(frame + 16))
#define local_170 (*(ulong *)(frame + 24))
#define local_168 (*(long ******* *)(frame + 32))
#define local_158 (*(undefined8 *)(frame + 48))
#define local_150 (*(ulong *)(frame + 56))
#define local_148 (*(undefined4 *)(frame + 64))
#define local_130 (*(code * *)(frame + 88))
#define local_128 (*(undefined * *)(frame + 96))
#define local_120 (*(undefined1 * *)(frame + 104))
#define local_118 (*(undefined1 * *)(frame + 112))
#define local_110 (*(undefined1 * *)(frame + 120))
#define local_f8 (*(long ******* *)(frame + 144))
#define local_e0 (*(long ****** *)(frame + 168))
#define local_d8 (*(undefined8 *)(frame + 176))
#define local_c8 (*(long ******* *)(frame + 192))
#define local_c0 (*(undefined8 *)(frame + 200))
#define local_b8 (*(undefined8 *)(frame + 208))
#define local_a8 (*(long ******* *)(frame + 224))
#define local_98 (*(undefined8 *)(frame + 240))
#define local_90 (*(long ****** *)(frame + 248))
#define pppppplStack_160 (*(long ****** *)(frame + 40))
#define local_88 (*(long ****** *)(frame + 256))
#define local_80 (*(long *)(frame + 264))
#define local_78 (*(long ****** *)(frame + 272))
#define local_5c (*(uint *)(frame + 300))
#define local_58 (*(long ******* *)(frame + 304))
#define local_48 (*(undefined8 *)(frame + 320))
#define local_40 (*(long ****** *)(frame + 328))
#define local_38 (*(long ******* *)(frame + 336))
#define uStack_e8 (*(undefined8 *)(frame + 160))
#define pppppplStack_f0 (*(long ****** *)(frame + 152))
#define ppppppplStack_a0 (*(long ******* *)(frame + 232))
#define uStack_70 (*(undefined8 *)(frame + 280))
#define pppppplStack_50 (*(long ****** *)(frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10008470(long param_1,long ****param_2)

{
  unsigned char frame[424] = {0};

  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uchar uVar4;
  byte bVar5;
  long ******pppppplVar6;
  ulonglong uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long ******pppppplVar10;
  ulonglong *puVar11;
  uint uVar12;
  long *******ppppppplVar13;
  long ******pppppplVar14;
  ulong uVar15;
  long ******pppppplVar16;
  long *******ppppppplVar17;
  long ******pppppplVar18;
  uint128 auVar19;

  local_120 = (undefined1 *)((long)(uintptr_t)(frame + 392) + -8);
  local_110 = (undefined1 *)&local_178;
  local_a8 = (long *******)0x0;
  ppppppplStack_a0 = (long *******)0x0;
  local_98 = 0;
  local_168 = (long *******)0x0;
  pppppplStack_160 = (long ******)0x0;
  local_158 = 0;
  pppppplVar14 = (long ******)param_2[1];
  local_130 = recovered_10002d70;
  local_128 = &DAT_1000b838;
  local_118 = &LAB_10009121;
  local_80 = param_1;
  recovered_100031ba(&local_150);
  local_38 = (long *******)param_2;
  if (((long ******)0x1 < pppppplVar14) && (SBORROW1('\0',*(char *)*param_2))) {
    pppppplVar10 = (long ******)0x0;
    pppppplVar16 = (long ******)0x0;
    do {
      ppppppplVar8 = (long *******)&local_168;
      ppppppplVar13 = (long *******)*local_38;
      do {
        pppppplVar6 = (long ******)((long)pppppplVar10 + 6);
        if ((pppppplVar14 < pppppplVar6) ||
           (!SBORROW1('\0',*(char *)((long)ppppppplVar13 + (long)pppppplVar10)))) {
LAB_10008607:
          uVar15 = 0;
          if (((ppppppplStack_a0 != (long *******)0x0 & (byte)pppppplVar16) != 1) ||
             (pppppplStack_160 == (long ******)0x0)) goto LAB_100090d9;
          goto LAB_10008814;
        }
        pppppplVar18 = (long ******)
                       ((ulong)*(uint *)((long)ppppppplVar13 + 2 + (long)pppppplVar10) +
                       (long)pppppplVar6);
        if (pppppplVar14 < pppppplVar18) goto LAB_10008a86;
        cVar2 = *(char *)((long)ppppppplVar13 + 1 + (long)pppppplVar10);
        if (cVar2 == '\x03') goto LAB_10008607;
        if (cVar2 == '\x02') {
          local_78 = (long ******)CONCAT71((int7)((ulong)pppppplVar10 >> 8),1);
          goto LAB_10008570;
        }
        pppppplVar10 = pppppplVar18;
      } while (cVar2 != '\x01');
      ppppppplVar8 = (long *******)&local_a8;
      local_78 = pppppplVar16;
LAB_10008570:
      local_148 = 1;
      local_40 = pppppplVar18;
      recovered_10009a00((long *)ppppppplVar8,(long)*ppppppplVar8 + (long)ppppppplVar8[1],
                         (uchar *)((long)pppppplVar6 + (long)ppppppplVar13),
                         (uchar *)((long)ppppppplVar13 + (long)pppppplVar18));
      pppppplVar14 = local_38[1];
      pppppplVar10 = local_40;
      pppppplVar16 = local_78;
    } while( true );
  }
  local_148 = 2;
  pppppplVar14 = (long ******)recovered_10009ac6((long *)param_2,((uintptr_t)pf_module_state+0x40fU),0);
  if (pppppplVar14 != (long ******)0xffffffffffffffff) {
    pppppplVar10 = *local_38;
    pppppplVar16 = local_38[1];
    pppppplVar6 = pppppplVar14;
    if (pppppplVar14 <= pppppplVar16) {
      pppppplVar6 = pppppplVar16;
    }
    for (; pppppplVar14 < pppppplVar16; pppppplVar14 = (long ******)((long)pppppplVar14 + 1)) {
      if ((*(uchar *)((long)pppppplVar10 + (long)pppppplVar14) == '\n') ||
         (*(uchar *)((long)pppppplVar10 + (long)pppppplVar14) == '\r')) goto LAB_10008635;
    }
    pppppplVar14 = pppppplVar6;
LAB_10008635:
    pppppplVar6 = pppppplVar16;
    if (pppppplVar16 < pppppplVar14) {
      pppppplVar6 = pppppplVar14;
    }
    for (; pppppplVar14 < pppppplVar16; pppppplVar14 = (long ******)((long)pppppplVar14 + 1)) {
      if ((*(uchar *)((long)pppppplVar10 + (long)pppppplVar14) != '\r') &&
         (local_78 = pppppplVar14, *(uchar *)((long)pppppplVar10 + (long)pppppplVar14) != '\n'))
      goto LAB_1000865a;
    }
    local_78 = pppppplVar6;
LAB_1000865a:
    local_148 = 3;
    recovered_10009b4a((long *)&local_a8,(uchar *)pppppplVar10,
                       (uchar *)((long)pppppplVar10 + (long)local_78));
    local_148 = 4;
    local_40 = (long ******)recovered_10009ac6((long *)local_38,((uintptr_t)pf_module_state+0x421U),(ulong)local_78);
    if (local_40 == (long ******)0xffffffffffffffff) {
      local_40 = local_38[1];
    }
    local_58 = (long *******)0x0;
    pppppplStack_50 = (long ******)0x0;
    local_48 = 0;
    local_148 = 5;
    ppppppplVar13 = local_38;
    recovered_10009b62((long *)&local_58,(long)local_40 - (long)local_78);
    ppppppplVar8 = local_38;
    pppppplVar14 = local_40;
    for (pppppplVar10 = local_78; pppppplVar10 < pppppplVar14;
        pppppplVar10 = (long ******)((long)pppppplVar10 + 1)) {
      bVar5 = *(byte *)((long)*ppppppplVar8 + (long)pppppplVar10);
      uVar12 = (int)CONCAT71((int7)((ulong)*ppppppplVar8 >> 8),bVar5) - 0x30;
      ppppppplVar13 = (long *******)(ulong)uVar12;
      if ((byte)uVar12 < 10) {
LAB_1000870e:
        local_148 = 6;
        local_78 = pppppplVar10;
        recovered_10009bbc((long *)&local_58,bVar5);
        ppppppplVar8 = local_38;
        pppppplVar14 = local_40;
        pppppplVar10 = local_78;
      }
      else {
        ppppppplVar13 = (long *******)(ulong)(bVar5 - 0x41);
        if (bVar5 - 0x41 < 0x26) {
          if ((0x3f0000003fU >> ((ulong)ppppppplVar13 & 0x3f) & 1) != 0) goto LAB_1000870e;
        }
      }
    }
    if (((ulong)pppppplStack_50 & 1) != 0) {
      *(undefined1 *)((long)local_58 + -1 + (long)pppppplStack_50) = 0;
      pppppplStack_50 = (long ******)((long)pppppplStack_50 + -1);
    }
    if (pppppplStack_50 != (long ******)0x0) {
      local_148 = 7;
      recovered_1000623e((long *)&local_168,(ulong)pppppplStack_50 >> 1);
      pppppplVar14 = (long ******)0x1;
      while( true ) {
        ppppppplVar8 = local_c0;
        pppppplVar10 = pppppplStack_160;
        if (pppppplStack_50 <= pppppplVar14) break;
        uVar3 = *(undefined1 *)((long)local_58 + -1 + (long)pppppplVar14);
        ppppppplVar13 = (long *******)CONCAT71((int7)((ulong)ppppppplVar13 >> 8),uVar3);
        PF_PART5(local_c0, 3) = SUB85(ppppppplVar8,3);
        PF_PART3(local_c0, 0) = (uint3)CONCAT11(*(undefined1 *)((long)local_58 + (long)pppppplVar14),uVar3)
        ;
        local_148 = 8;
        local_78 = pppppplVar14;
        uVar15 = recovered_100015a0((char *)&local_c0,(char **)0x0,0x10);
        local_e0 = (long ******)CONCAT71(PF_PART7(local_e0, 1),(char)uVar15);
        local_148 = 9;
        recovered_10009c4c((long *)&local_168,(uchar *)&local_e0);
        pppppplVar14 = (long ******)((long)local_78 + 2);
      }
      if (ppppppplStack_a0 != (long *******)0x0) {
        recovered_10002de7(local_58);
        if (pppppplVar10 != (long ******)0x0) {
LAB_10008814:
          local_148 = 10;
          uVar7 = recovered_10009ac6((long *)&local_a8,((uintptr_t)pf_module_state+0x42dU),0);
          if (uVar7 != 0xffffffffffffffff) {
            ppppppplVar8 = (long *******)(uVar7 + 9);
            do {
              ppppppplVar13 = local_a8;
              if (ppppppplStack_a0 <= ppppppplVar8) goto LAB_10008936;
              pbVar1 = (byte *)((long)local_a8 + (long)ppppppplVar8);
              ppppppplVar8 = (long *******)((long)ppppppplVar8 + 1);
            } while ((*pbVar1 | 0x20) != 0x7b);
            local_e0 = (long ******)0x0;
            local_88 = (long ******)0x0;
            local_148 = 0xb;
            local_58 = ppppppplVar8;
            uVar4 = recovered_10009c9c((long *)&local_a8,(ulong *)&local_58,&local_c0);
            if (uVar4 != '\0') {
              local_148 = 0xc;
              uVar4 = recovered_10009c9c((long *)&local_a8,(ulong *)&local_58,(ulonglong *)&local_e0
                                        );
              if (uVar4 != '\0') {
                local_148 = 0xd;
                uVar4 = recovered_10009c9c((long *)&local_a8,(ulong *)&local_58,
                                           (ulonglong *)&local_f8);
                if (uVar4 != '\0') {
                  local_148 = 0xe;
                  uVar4 = recovered_10009c9c((long *)&local_a8,(ulong *)&local_58,
                                             (ulonglong *)&local_88);
                  if (uVar4 != '\0') {
                    PF_PART8(auVar19, 8) = (ulong)local_e0 ^ _DAT_1000b350;
                    PF_PART8(auVar19, 0) = local_88;
                    auVar19 = maxpd(auVar19,ZEXT816(0));
                    *(uint128 *)(local_80 + 0x10) = auVar19;
                  }
                }
              }
            }
          }
LAB_10008936:
          local_78 = (long ******)(local_80 + 0x28);
          ppppppplVar8 = (long *******)0x0;
LAB_10008944:
LAB_1000894b:
          if (ppppppplVar8 < ppppppplStack_a0) {
            local_148 = 0xf;
            ppppppplVar8 = (long *******)
                           recovered_10009ac6((long *)&local_a8,((uintptr_t)pf_module_state+0x437U),(ulong)ppppppplVar8);
            if (ppppppplVar8 == (long *******)0xffffffffffffffff) goto LAB_10008a8d;
            ppppppplVar8 = (long *******)((long)ppppppplVar8 + 3);
            local_e0 = (long ******)((ulong)local_e0 & 0xffffffff00000000);
            local_c0 = ppppppplVar8;
            bVar5 = recovered_10009d01((long *)&local_a8,&local_c0,(int *)&local_e0);
            pppppplVar14 = local_e0;
            bVar5 = (uint)local_e0 < 0x100 & bVar5;
            ppppppplVar13 = (long *******)CONCAT71((int7)((ulong)ppppppplVar13 >> 8),bVar5);
            if (bVar5 != 1) goto LAB_1000894b;
            recovered_10009d99((long *)&local_a8,&local_c0);
            ppppppplVar13 = ppppppplStack_a0;
            if ((ppppppplStack_a0 <= local_c0) ||
               (*(char *)((long)local_a8 + (long)local_c0) != '/')) goto LAB_1000894b;
            ppppppplVar9 = (long *******)((long)local_c0 + 1);
            for (ppppppplVar17 = ppppppplVar9; ppppppplVar17 < ppppppplStack_a0;
                ppppppplVar17 = (long *******)((long)ppppppplVar17 + 1)) {
              if (((ulong)*(byte *)((long)local_a8 + (long)ppppppplVar17) < 0x21) &&
                 ((0x100003e00U >> ((ulong)*(byte *)((long)local_a8 + (long)ppppppplVar17) & 0x3f) &
                  1) != 0)) goto LAB_10008a2f;
            }
            ppppppplVar17 = ppppppplStack_a0;
LAB_10008a2f:
            if ((long)ppppppplVar17 - (long)ppppppplVar9 == 0) goto LAB_1000894b;
            local_148 = 0x10;
            local_40 = (long ******)((ulong)pppppplVar14 & 0xffffffff);
            local_38 = ppppppplVar17;
            recovered_10009e0c(&local_58,(void *)((long)local_a8 + (long)ppppppplVar9),
                               (long)ppppppplVar17 - (long)ppppppplVar9);
            recovered_10009dce((ulonglong *)(local_78 + (long)local_40 * 3),(ulonglong *)&local_58);
            recovered_10002de7(local_58);
            ppppppplVar8 = local_38;
            goto LAB_10008944;
          }
LAB_10008a8d:
          if (pppppplStack_160 == (long ******)0x0) {
            local_f8 = (long *******)0x0;
            uStack_e8 = 0;
            ppppppplVar13 = (long *******)0x0;
            goto LAB_100090c7;
          }
          local_58 = (long *******)0x0;
          pppppplStack_50 = (long ******)0x0;
          local_48 = 0;
          local_148 = 0x11;
          recovered_1000623e((long *)&local_58,(ulong)pppppplStack_160);
          local_c8 = local_168;
          local_90 = pppppplStack_160;
          uVar15 = CONCAT62((int6)((ulong)ppppppplVar13 >> 0x10),0xd971);
          pppppplVar14 = (long ******)0x0;
          while (local_90 != pppppplVar14) {
            local_38 = (long *******)
                       CONCAT44(PF_PART4(local_38, 4),(uint)*(byte *)((long)local_c8 + (long)pppppplVar14))
            ;
            local_c0 = (long *******)
                       CONCAT71(PF_PART7(local_c0, 1),
                                (byte)(uVar15 >> 8) ^ *(byte *)((long)local_c8 + (long)pppppplVar14)
                               );
            local_148 = 0x12;
            local_40 = (long ******)CONCAT44(PF_PART4(local_40, 4),(int)uVar15);
            local_78 = pppppplVar14;
            recovered_10007e3a((long *)&local_58,(uchar *)&local_c0);
            uVar15 = (ulong)(((uint)(ushort)local_38 + (int)local_40) * -0x3193 + 0x58bf);
            pppppplVar14 = (long ******)((long)local_78 + 1);
          }
          if (pppppplStack_50 < (long ******)0x5) {
            ppppppplVar13 = (long *******)0x0;
            uStack_e8 = 0;
            pppppplStack_f0 = (long ******)0x0;
          }
          else {
            ppppppplVar8 = (long *******)&local_58;
            recovered_10009f32((long *)ppppppplVar8,(long)local_58,(long)local_58 + 4);
            uStack_e8 = local_48;
            ppppppplVar13 = local_58;
            local_58 = (long *******)0x0;
            local_48 = 0;
            pppppplStack_f0 = pppppplStack_50;
          }
          pppppplStack_50 = (long ******)0x0;
          local_f8 = ppppppplVar13;
          local_78 = pppppplStack_f0;
          uStack_70 = uStack_e8;
          recovered_10002de7(local_58);
          local_40 = local_78;
          if (local_78 == (long ******)0x0) {
LAB_100090c7:
            uVar15 = 0;
          }
          else {
            local_148 = 0x13;
            local_38 = ppppppplVar13;
            uVar7 = recovered_10009ac6((long *)&local_f8,((uintptr_t)pf_module_state+0x43bU),0);
            if (uVar7 != 0xffffffffffffffff) {
              local_58 = (long *******)(uVar7 + 6);
              local_c0 = (long *******)((ulong)local_c0 & 0xffffffff00000000);
              uVar4 = recovered_10009d01((long *)&local_f8,(ulong *)&local_58,(int *)&local_c0);
              if (uVar4 != '\0') {
                *(int *)(local_80 + 0x20) = (int)local_c0;
              }
            }
            local_148 = 0x14;
            local_90 = (long ******)recovered_10009ac6((long *)&local_f8,((uintptr_t)pf_module_state+0x442U),0);
            local_148 = 0x15;
            pppppplVar14 = (long ******)recovered_10009ac6((long *)&local_f8,((uintptr_t)pf_module_state+0x449U),0);
            if (local_90 < pppppplVar14 &&
                (pppppplVar14 != (long ******)0xffffffffffffffff &&
                local_90 != (long ******)0xffffffffffffffff)) {
              local_c8 = (long *******)(local_80 + 0x1828);
              pppppplVar10 = local_90;
              local_78 = pppppplVar14;
              while( true ) {
                local_148 = 0x16;
                pppppplVar10 = (long ******)
                               recovered_10009ac6((long *)&local_f8,((uintptr_t)pf_module_state+0x437U),(ulong)pppppplVar10);
                if ((pppppplVar10 == (long ******)0xffffffffffffffff) || (local_78 <= pppppplVar10))
                break;
                pppppplVar10 = (long ******)((long)pppppplVar10 + 3);
                local_88 = (long ******)((ulong)local_88 & 0xffffffff00000000);
                local_5c = 0;
                local_e0 = pppppplVar10;
                uVar4 = recovered_10009d01((long *)&local_f8,(ulong *)&local_e0,(int *)&local_88);
                if (uVar4 != '\0') {
                  bVar5 = recovered_10009d01((long *)&local_f8,(ulong *)&local_e0,(int *)&local_5c);
                  ppppppplVar8 = (long *******)(ulong)local_5c;
                  if ((-1 < (int)local_5c & bVar5) == 1) {
                    recovered_10009d99((long *)&local_f8,(ulong *)&local_e0);
                    pppppplVar14 = (long ******)((long)local_e0 + 2);
                    if (((pppppplVar14 <= local_40) &&
                        (*(char *)((long)local_38 + (long)local_e0) == 'R')) &&
                       (*(char *)((long)local_38 + 1 + (long)local_e0) == 'D')) {
                      if ((pppppplVar14 < local_40) &&
                         (*(char *)((long)local_38 + (long)pppppplVar14) == ' ')) {
                        pppppplVar14 = (long ******)((long)local_e0 + 3);
                      }
                      local_e0 = pppppplVar14;
                      if ((local_40 < local_e0) ||
                         ((long *******)((long)local_40 - (long)local_e0) < ppppppplVar8)) {
                        ppppppplVar13 = local_f8;
                        goto LAB_100090c7;
                      }
                      uVar15 = (ulong)(int)local_88;
                      ppppppplVar13 = ppppppplVar8;
                      pppppplVar10 = local_e0;
                      if (-1 < (long)uVar15) {
                        local_178 = ppppppplVar8;
                        local_170 = uVar15;
                        local_90 = local_e0;
                        if (*(ulong *)(local_80 + 0x1830) <= uVar15) {
                          local_148 = 0x17;
                          recovered_10009f92((long *)local_c8,uVar15 + 1);
                        }
                        local_148 = 0x18;
                        recovered_1000b184(&local_58,(void *)((long)local_38 + (long)local_90),
                                           (void *)((long)local_38 + (long)local_90 +
                                                   (long)local_178));
                        local_148 = 0x19;
                        recovered_1000a014(&local_c0,(long *)&local_58,
                                           (ulong)*(uint *)(local_80 + 0x20));
                        recovered_1000a1c8((ulonglong *)(*local_c8 + local_170 * 3),&local_c0);
                        local_b8 = 0;
                        recovered_10002de7(local_c0);
                        pppppplStack_50 = (long ******)0x0;
                        recovered_10002de7(local_58);
                        ppppppplVar13 = local_178;
                        pppppplVar10 = local_90;
                      }
                      pppppplVar10 = (long ******)((long)pppppplVar10 + (long)ppppppplVar13);
                    }
                  }
                }
              }
              local_90 = (long ******)(local_80 + 0x1840);
              local_38 = local_f8;
              local_40 = pppppplStack_f0;
              pppppplVar14 = pppppplStack_f0;
              ppppppplVar13 = local_f8;
              pppppplVar10 = local_78;
              while (pppppplVar10 < pppppplVar14) {
                if (*(char *)((long)ppppppplVar13 + (long)pppppplVar10) == '/') {
                  pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
                  for (local_88 = pppppplVar10; local_88 < pppppplVar14;
                      local_88 = (long ******)((long)local_88 + 1)) {
                    if (((ulong)*(byte *)((long)ppppppplVar13 + (long)local_88) < 0x30) &&
                       ((0x800100003e00U >>
                         ((ulong)*(byte *)((long)ppppppplVar13 + (long)local_88) & 0x3f) & 1) != 0))
                    goto LAB_10008f21;
                  }
                  local_88 = pppppplVar14;
LAB_10008f21:
                  if ((long)local_88 - (long)pppppplVar10 != 0) {
                    local_148 = 0x1a;
                    recovered_10009e0c(&local_58,(void *)((long)pppppplVar10 + (long)ppppppplVar13),
                                       (long)local_88 - (long)pppppplVar10);
                    local_5c = 0;
                    bVar5 = recovered_10009d01((long *)&local_f8,(ulong *)&local_88,(int *)&local_5c
                                              );
                    ppppppplVar8 = (long *******)(ulong)local_5c;
                    if ((bVar5 & -1 < (int)local_5c) == 0) {
                      pppppplVar10 = local_88;
                    }
                    else {
                      recovered_10009d99((long *)&local_f8,(ulong *)&local_88);
                      ppppppplVar13 = local_38;
                      pppppplVar14 = (long ******)((long)local_88 + 2);
                      pppppplVar10 = local_88;
                      if (((pppppplVar14 <= local_40) &&
                          (*(char *)((long)local_38 + (long)local_88) == 'R')) &&
                         (*(char *)((long)local_38 + 1 + (long)local_88) == 'D')) {
                        if (pppppplVar14 < local_40) {
                          if (*(char *)((long)local_38 + 2 + (long)local_88) == ' ') {
                            pppppplVar14 = (long ******)((long)local_88 + 3);
                          }
                        }
                        if ((local_40 < pppppplVar14) ||
                           ((long *******)((long)local_40 - (long)pppppplVar14) < ppppppplVar8)) {
                          recovered_10002de7(local_58);
                          goto LAB_100090c7;
                        }
                        local_148 = 0x1b;
                        local_c8 = ppppppplVar8;
                        local_78 = pppppplVar14;
                        recovered_1000b184(&local_c0,(void *)((long)local_38 + (long)pppppplVar14),
                                           (void *)((long)ppppppplVar8 +
                                                   (long)local_38 + (long)pppppplVar14));
                        local_148 = 0x1c;
                        recovered_1000a014((long *)&local_e0,&local_c0,
                                           (ulong)*(uint *)(local_80 + 0x20));
                        local_148 = 0x1d;
                        puVar11 = (ulonglong *)
                                  recovered_1000a20a((long *)local_90,(ulonglong *)&local_58);
                        recovered_1000a1c8(puVar11,(ulonglong *)&local_e0);
                        local_d8 = 0;
                        recovered_10002de7(local_e0);
                        pppppplVar10 = (long ******)((long)local_78 + (long)local_c8);
                        local_b8 = 0;
                        recovered_10002de7(local_c0);
                      }
                    }
                    ppppppplVar13 = local_38;
                    pppppplVar14 = local_40;
                    recovered_10002de7(local_58);
                  }
                }
                else {
                  pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
                }
              }
              uVar15 = CONCAT71((int7)((ulong)ppppppplVar8 >> 8),*(long *)(local_80 + 0x1848) != 0);
            }
            else {
              uVar15 = 0;
              ppppppplVar13 = local_38;
            }
          }
          pppppplStack_f0 = (long ******)0x0;
          recovered_10002de7(ppppppplVar13);
          goto LAB_100090d9;
        }
        goto LAB_10008a86;
      }
    }
    recovered_10002de7(local_58);
  }
LAB_10008a86:
  uVar15 = 0;
LAB_100090d9:
  pppppplStack_160 = (long ******)0x0;
  recovered_10002de7(local_168);
  ppppppplStack_a0 = (long *******)0x0;
  recovered_10002de7(local_a8);
  recovered_100031d1(&local_150);
  return uVar15 & 0xffffffff;
}

#undef DAT_1000b350
#undef DAT_1000b838
#undef LAB_10009121
#undef _DAT_1000b350
#undef local_178
#undef local_170
#undef local_168
#undef local_158
#undef local_150
#undef local_148
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_f8
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_98
#undef local_90
#undef pppppplStack_160
#undef local_88
#undef local_80
#undef local_78
#undef local_5c
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_e8
#undef pppppplStack_f0
#undef ppppppplStack_a0
#undef uStack_70
#undef pppppplStack_50

#undef DAT_1000b878
#define DAT_1000b878 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5acU)))
#undef DAT_1000d328
#define DAT_1000d328 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x205cU)))
#undef DAT_1000d340
#define DAT_1000d340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2074U)))
#undef LAB_100097a2
#define LAB_100097a2 (*(uint8_t *)(0x100097a2U))
#undef str_1000b722
#define str_1000b722 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x456U)))
#define local_1b8 (*(void * *)(frame + 16))
#define local_1b0 (*(void * *)(frame + 24))
#define local_1a8 (*(undefined8 *)(frame + 32))
#define local_198 (*(undefined8 *)(frame + 48))
#define uStack_1a0 (*(undefined8 *)(frame + 40))
#define alStack_190 (*(long (*)[3])(frame + 56))
#define local_178 (*(undefined2 *)(frame + 80))
#define local_170 (*(undefined8 *)(frame + 88))
#define uStack_168 (*(undefined8 *)(frame + 96))
#define local_160 (*(undefined8 *)(frame + 104))
#define local_150 (*(undefined8 *)(frame + 120))
#define uStack_158 (*(undefined8 *)(frame + 112))
#define local_140 (*(undefined8 *)(frame + 136))
#define local_130 (*(undefined8 *)(frame + 152))
#define uStack_148 (*(undefined8 *)(frame + 128))
#define local_120 (*(undefined8 *)(frame + 168))
#define local_110 (*(double *)(frame + 184))
#define uStack_138 (*(undefined8 *)(frame + 144))
#define local_108 (*(undefined2 *)(frame + 192))
#define local_106 (*(undefined1 *)(frame + 194))
#define uStack_128 (*(undefined8 *)(frame + 160))
#define local_100 (*(void * *)(frame + 200))
#define local_f8 (*(undefined8 *)(frame + 208))
#define uStack_118 (*(undefined8 *)(frame + 176))
#define local_e8 (*(ulong *)(frame + 224))
#define local_e0 (*(undefined4 *)(frame + 232))
#define local_c8 (*(code * *)(frame + 256))
#define local_c0 (*(undefined * *)(frame + 264))
#define local_b8 (*(undefined1 * *)(frame + 272))
#define local_b0 (*(undefined1 * *)(frame + 280))
#define local_a8 (*(undefined1 * *)(frame + 288))
#define local_90 (*(ulong *)(frame + 312))
#define local_88 (*(ulong *)(frame + 320))
#define local_80 (*(ulong *)(frame + 328))
#define local_78 (*(ulong *)(frame + 336))
#define local_70 (*(ulong *)(frame + 344))
#define local_68 (*(ulong *)(frame + 352))
#define local_60 (*(uchar ** *)(frame + 360))
#define local_58 (*(ulonglong *)(frame + 368))
#define local_50 (*(pf_glyph * *)(frame + 376))
#define local_48 (*(void * *)(frame + 384))
#define local_39 (*(undefined1 *)(frame + 399))
#define local_38 (*(undefined8 *)(frame + 400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092bc
 */

pf_glyph *
recovered_100092bc(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale)

{
  unsigned char frame[488] = {0};

  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uchar *puVar6;
  long lVar7;
  uint uVar8;
  uchar *puVar9;
  int iVar10;
  ulong uVar11;
  uchar *puVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  pf_glyph *ppVar21;
  uint uVar22;
  ulonglong *puVar23;
  void *pvVar24;

  local_b8 = (undefined1 *)((long)(uintptr_t)(frame + 456) + -8);
  local_a8 = (undefined1 *)&local_1b8;
  local_c8 = recovered_10002d70;
  local_c0 = &DAT_1000b878;
  local_b0 = &LAB_100097a2;
  local_50 = __return_storage_ptr__;
  local_38 = (void *)(uintptr_t)pf_double_bits(scale);
  recovered_100031ba(&local_e8);
  local_48 = backend;
  if ((glyph < 0x100) && (*(long *)((long)backend + (ulong)glyph * 0x18 + 0x30) != 0)) {
    puVar23 = (ulonglong *)((long)backend + (ulong)glyph * 0x18 + 0x28);
  }
  else {
    puVar23 = (ulonglong *)&DAT_1000d328;
    if ((DAT_1000d340 == '\0') && (uVar17 = recovered_10003050((uint *)&DAT_1000d340), uVar17 != 0))
    {
      local_e0 = 1;
      recovered_1000ac56(&DAT_1000d328,str_1000b722);
      puVar23 = (ulonglong *)&DAT_1000d328;
      recovered_10003048();
      recovered_1000305d((uchar *)&DAT_1000d340);
      backend = local_48;
    }
  }
  local_e0 = 0xffffffff;
  local_58 = recovered_1000a3ee((long *)((long)backend + 0x1840U),puVar23);
  local_e0 = 0xffffffff;
  recovered_1000ac56(&local_1b8,str_1000b722);
  local_e0 = 2;
  uVar4 = recovered_1000a3ee((long *)((long)backend + 0x1840U),(ulonglong *)&local_1b8);
  recovered_10002de7(local_1b8);
  ppVar21 = local_50;
  uVar5 = *(long *)((long)local_48 + 0x1848) * 0x30 + *(long *)((long)local_48 + 0x1840);
  if (uVar4 == uVar5 && local_58 == uVar5) {
    local_50->count = 0;
    local_50->capacity = 0;
    local_50->advance = 0.0;
    local_50->pixels = (uchar *)0x0;
    local_50->width = 0;
    local_50->height = 0;
    local_50->left = 0;
    local_50->top = 0;
    recovered_10006618(local_50);
    goto LAB_10009538;
  }
  if (local_58 != uVar5) {
    uVar4 = local_58;
  }
  local_1b8 = local_48;
  local_1b0 = local_38;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  alStack_190[0] = 0;
  alStack_190[1] = 0;
  alStack_190[2] = 0;
  local_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0.0;
  local_108 = 0;
  local_106 = 0;
  local_e0 = 3;
  uVar3 = recovered_1000a7ca((long *)&local_1b8,(long *)(uVar4 + 0x18),0);
  ppVar21 = local_50;
  if (uVar3 == '\0') {
    recovered_10006618(local_50);
  }
  else {
    local_e0 = 4;
    recovered_10007490(local_110,&local_50->width,alStack_190);
    uVar17 = local_50->left;
    uVar18 = (ulong)uVar17;
    ppVar21 = local_50;
    if (0 < (int)uVar17) {
      uVar2 = local_50->top;
      uVar19 = (ulong)(int)uVar2;
      if ((0 < (long)uVar19) && (local_60 = &local_50->pixels, local_50->count != 0)) {
        puVar12 = *local_60;
        puVar6 = puVar12 + (uVar18 - 1);
        lVar7 = 1;
        puVar9 = puVar12;
        uVar22 = uVar2;
        for (uVar11 = 0; local_38 = (void *)(ulong)uVar22, uVar11 != uVar19; uVar11 = uVar11 + 1) {
          uVar20 = 0;
          while (uVar18 != uVar20) {
            puVar1 = puVar9 + uVar20;
            uVar20 = uVar20 + 1;
            if (*puVar1 != '\0') {
              iVar10 = (int)uVar11;
              uVar22 = uVar2 - iVar10;
              if (uVar22 == 0) goto LAB_10009561;
              pvVar14 = (void *)0x0;
              pvVar24 = (void *)(ulong)uVar22;
              if ((int)uVar22 < 1) {
                pvVar24 = (void *)0x0;
              }
              puVar12 = puVar12 + (uVar19 - 1) * uVar18;
              goto LAB_1000958b;
            }
          }
          uVar22 = uVar22 - 1;
          lVar7 = lVar7 + -1;
          puVar6 = puVar6 + uVar18;
          puVar9 = puVar9 + uVar18;
        }
        goto LAB_10009561;
      }
    }
  }
  goto LAB_1000951e;
LAB_1000958b:
  if (pvVar14 == pvVar24) goto LAB_100095b0;
  uVar19 = 0;
  while (uVar18 != uVar19) {
    puVar1 = puVar12 + uVar19;
    uVar19 = uVar19 + 1;
    if (*puVar1 != '\0') {
      pvVar24 = (void *)((ulong)pvVar14 & 0xffffffff);
      goto LAB_100095b0;
    }
  }
  pvVar14 = (void *)((long)pvVar14 + 1);
  puVar12 = puVar12 + -uVar18;
  goto LAB_1000958b;
LAB_100095b0:
  uVar22 = uVar2 - (int)pvVar24;
  uVar19 = (ulong)uVar22;
  if ((int)uVar22 < iVar10) {
    uVar19 = uVar11 & 0xffffffff;
  }
  for (uVar20 = 0; uVar20 != uVar18; uVar20 = uVar20 + 1) {
    puVar12 = puVar9;
    lVar16 = uVar19 + lVar7;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      uVar3 = *puVar12;
      puVar12 = puVar12 + uVar18;
      if (uVar3 != '\0') goto LAB_100095ea;
    }
    puVar9 = puVar9 + 1;
  }
  uVar20 = (ulong)uVar17;
LAB_100095ea:
  uVar8 = uVar17 - (int)uVar20;
  uVar15 = 0;
  uVar19 = (ulong)uVar8;
  if ((int)uVar8 < 1) {
    uVar19 = 0;
  }
  uVar13 = (ulong)uVar22;
  if ((int)uVar22 < iVar10) {
    uVar13 = uVar11 & 0xffffffff;
  }
  for (; uVar15 != uVar19; uVar15 = uVar15 + 1) {
    puVar12 = puVar6;
    lVar16 = lVar7 + uVar13;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      uVar3 = *puVar12;
      puVar12 = puVar12 + uVar18;
      if (uVar3 != '\0') {
        uVar19 = uVar15 & 0xffffffff;
        goto LAB_10009624;
      }
    }
    puVar6 = puVar6 + -1;
  }
LAB_10009624:
  uVar17 = uVar17 - ((int)uVar19 + (int)uVar20);
  uVar18 = (ulong)uVar17;
  if (((int)uVar17 < 1) || (uVar17 = (uVar2 - (int)pvVar24) - iVar10, (int)uVar17 < 1)) {
LAB_10009561:
    local_50->width = 0;
    local_50->height = 0;
    local_50->left = 0;
    local_50->top = 0;
    local_50->count = 0;
  }
  else {
    local_39 = 0;
    local_e0 = 5;
    local_90 = uVar11;
    local_80 = uVar18;
    local_78 = (ulong)uVar17;
    local_70 = uVar20;
    local_68 = uVar18;
    local_48 = pvVar24;
    recovered_1000b112(&local_100,uVar17 * uVar18,&local_39);
    local_88 = local_70 & 0xffffffff;
    local_38 = (void *)(ulong)(uint)((int)local_38 - (int)local_48);
    uVar4 = 0;
    pvVar14 = (void *)0x0;
    while (ppVar21 = local_50, local_38 != pvVar14) {
      local_e0 = 6;
      local_58 = uVar4;
      local_48 = pvVar14;
      recovered_10000be2((void *)((long)local_100 + uVar4),
                         local_50->pixels +
                         local_88 + (long)local_50->left * (local_90 + (long)pvVar14),local_68);
      uVar4 = local_58 + local_68;
      pvVar14 = (void *)((long)local_48 + 1);
    }
    local_50->width = local_50->width + (int)local_70;
    local_50->height = local_50->height - (int)local_90;
    local_50->left = (int)local_80;
    local_50->top = (int)local_78;
    recovered_1000a1c8((ulonglong *)local_60,(ulonglong *)&local_100);
    local_f8 = 0;
    recovered_10002de7(local_100);
  }
LAB_1000951e:
  ppVar21->advance = local_110;
  recovered_1000ac2c(&local_1b8);
LAB_10009538:
  recovered_100031d1(&local_e8);
  return ppVar21;
}

#undef DAT_1000b878
#undef DAT_1000d328
#undef DAT_1000d340
#undef LAB_100097a2
#undef str_1000b722
#undef local_1b8
#undef local_1b0
#undef local_1a8
#undef local_198
#undef uStack_1a0
#undef alStack_190
#undef local_178
#undef local_170
#undef uStack_168
#undef local_160
#undef local_150
#undef uStack_158
#undef local_140
#undef local_130
#undef uStack_148
#undef local_120
#undef local_110
#undef uStack_138
#undef local_108
#undef local_106
#undef uStack_128
#undef local_100
#undef local_f8
#undef uStack_118
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_39
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10009870(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 8);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_1000987c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0x10);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10009888(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0x18);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10009894(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_1000989e(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100098a8(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  *(undefined8 *)((long)object + 0x18) = 0;
  *(undefined8 *)((long)object + 0x20) = 0;
  *(undefined8 *)((long)object + 0x28) = 0;
  *(undefined8 *)((long)object + 0x30) = 0;
  *(undefined8 *)((long)object + 0x38) = 0;
  *(undefined8 *)((long)object + 0x40) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100098c6(void *object)

{
  unsigned char frame[64] = {0};

  recovered_100098e2(object);
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100098e2(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x30;
  while( true ) {
    lVar2 = lVar2 + -0x30;
    bVar3 = lVar1 == 0;
    lVar1 = lVar1 + -1;
    if (bVar3) break;
    recovered_1000991e((void *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000991e(void *object)

{
  unsigned char frame[64] = {0};

  recovered_1000b100((void *)((long)object + 0x18));
  recovered_10009948(object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000993e(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10009948(object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009948(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009956(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10009972(object);
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009972(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  while( true ) {
    lVar2 = lVar2 + -0x18;
    bVar3 = lVar1 == 0;
    lVar1 = lVar1 + -1;
    if (bVar3) break;
    recovered_1000b100((void *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099ae
 */

void recovered_100099ae(void *object)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = 0x17e8;
  do {
    recovered_10009948((void *)((long)object + lVar1));
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099d6
 */

void recovered_100099d6(void *object)

{
  unsigned char frame[64] = {0};

  recovered_100060ec((void *)((long)object + 0x30));
  recovered_100060ec((void *)((long)object + 0x18));
  recovered_100098c6(object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10009a00(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;

  lVar4 = *param_1;
  bVar7 = lVar4 == 0;
  if (bVar7) {
    uVar5 = param_1[1];
  }
  else {
    uVar5 = param_2 - lVar4;
  }
  lVar6 = (long)param_4 - (long)param_3;
  if (lVar6 != 0) {
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    if (uVar2 < uVar3 + lVar6) {
      uVar1 = 4;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar3 + lVar6);
      recovered_1000623e(param_1,uVar2);
      uVar3 = param_1[1];
    }
    for (; uVar5 < uVar3; uVar3 = uVar3 - 1) {
      *(undefined1 *)(lVar6 + uVar3 + *param_1 + -1) = *(undefined1 *)((uVar3 - 1) + *param_1);
    }
    uVar3 = uVar5;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar3) = *param_3;
      uVar3 = uVar3 + 1;
    }
    param_1[1] = param_1[1] + lVar6;
    lVar4 = *param_1;
    bVar7 = lVar4 == 0;
  }
  lVar6 = 0;
  if (!bVar7) {
    lVar6 = lVar4 + uVar5;
  }
  return lVar6;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10009ac6(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  ulong size;
  ulong uVar2;

  if ((((param_2 != 0) && (param_3 < (ulong)param_1[1])) &&
      (size = recovered_10000d5b((char *)param_2), size != 0)) &&
     (uVar2 = param_1[1], size <= uVar2 - param_3)) {
    for (; param_3 + size <= uVar2; param_3 = param_3 + 1) {
      iVar1 = recovered_10000c90((void *)(*param_1 + param_3),(void *)param_2,size);
      if (iVar1 == 0) {
        return param_3;
      }
      uVar2 = param_1[1];
    }
  }
  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009b4a(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10009a00(param_1,*param_1,param_2,param_3);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10009b62(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10009c14(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)(uVar1 + param_1[1]) = 0;
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009bbc(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 0x10;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_10009b62(param_1,uVar2);
  }
  recovered_10009c26(param_1);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  *(undefined1 *)(*param_1 + lVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10009c14(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10002db3(param_1 + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009c26(long *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_10009c14(0);
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10009c4c(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_1000623e(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = *param_2;
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 + 1 + *param_1 + -1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_38 (*(char * *)(frame + 16))
uchar recovered_10009c9c(long *param_1,ulong *param_2,undefined8 *param_3)

{
  unsigned char frame[104] = {0};

  long lVar1;
  char *s;
  bool bVar2;
  double dVar3;

  recovered_10009d99(param_1,param_2);
  if (*param_2 < (ulong)param_1[1]) {
    local_38 = (char *)0x0;
    s = (char *)(*param_2 + *param_1);
    dVar3 = recovered_100016a0(s,&local_38);
    *param_3 = dVar3;
    lVar1 = (long)local_38 - (long)s;
    bVar2 = lVar1 != 0;
    if (bVar2) {
      *param_2 = *param_2 + lVar1;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_10009d01(long *param_1,ulong *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;

  recovered_10009d99(param_1,param_2);
  uVar5 = *param_2;
  uVar6 = param_1[1];
  if (uVar5 < uVar6) {
    lVar2 = *param_1;
    cVar1 = *(char *)(lVar2 + uVar5);
    if ((cVar1 == '-') || (cVar1 == '+')) {
      uVar5 = uVar5 + 1;
      *param_2 = uVar5;
      uVar6 = param_1[1];
    }
    if (uVar5 < uVar6) {
      iVar3 = 0;
      if (0xf5 < (byte)(*(char *)(lVar2 + uVar5) - 0x3aU)) {
        while ((uVar5 < uVar6 && ((byte)(*(byte *)(lVar2 + uVar5) - 0x30) < 10))) {
          iVar3 = iVar3 * 10 + (uint)*(byte *)(lVar2 + uVar5) + -0x30;
          uVar5 = uVar5 + 1;
          *param_2 = uVar5;
          uVar6 = param_1[1];
        }
        iVar4 = -iVar3;
        if (cVar1 != '-') {
          iVar4 = iVar3;
        }
        *param_3 = iVar4;
        iVar3 = 1;
      }
      goto LAB_0200f04a;
    }
  }
  iVar3 = 0;
LAB_0200f04a:
  return (uchar)iVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009d99(long *param_1,ulong *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = *param_1;
  uVar2 = *param_2;
  while (((uVar2 < (ulong)param_1[1] && ((ulong)*(byte *)(lVar1 + uVar2) < 0x21)) &&
         ((0x100003e00U >> ((ulong)*(byte *)(lVar1 + uVar2) & 0x3f) & 1) != 0))) {
    uVar2 = uVar2 + 1;
    *param_2 = uVar2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_10009dce(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10002de7((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009e0c(void *object,void *p0,ulong p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  if (p0 == (void *)0x0) {
    p1 = 0;
  }
  recovered_10009e28(object,(long)p0,p1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define lStack_30 (*(long *)(frame + 32))
#define local_28 (*(long *)(frame + 40))
#define local_38 (*(long *)(frame + 24))
#define local_40 (*(void * *)(frame + 16))
void recovered_10009e28(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[112] = {0};

  void *pointer;
  long lVar1;
  long lVar2;
  uchar uVar3;
  ulong uVar4;

  if (param_2 == 0) {
    param_3 = 0;
  }
  local_28 = 0;
  uVar3 = recovered_10009ef4(param_1,param_2,&local_28);
  if (uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10009c26(param_1);
    }
    else {
      recovered_10009b62(param_1,param_3);
      for (uVar4 = 0; param_3 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = param_3;
      *(undefined1 *)(*param_1 + param_3) = 0;
    }
  }
  else {
    uVar4 = param_1[1] - local_28;
    if (param_3 < (ulong)(param_1[1] - local_28)) {
      uVar4 = param_3;
    }
    recovered_10009e0c(&local_40,(void *)(local_28 + *param_1),uVar4);
    pointer = (void *)*param_1;
    *param_1 = (long)local_40;
    lVar1 = param_1[1];
    lVar2 = param_1[2];
    param_1[1] = local_38;
    param_1[2] = lStack_30;
    local_40 = pointer;
    local_38 = lVar1;
    lStack_30 = lVar2;
    recovered_10002de7(pointer);
  }
  return;
}

#undef lStack_30
#undef local_28
#undef local_38
#undef local_40

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_10009ef4(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  long lVar2;
  ulong uVar3;

  if (param_2 == 0 || *param_1 == 0) {
LAB_0200f1fa:
    uVar1 = '\0';
  }
  else {
    lVar2 = param_2 - *param_1;
    uVar3 = 0;
    do {
      if ((ulong)param_1[1] < uVar3) goto LAB_0200f1fa;
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *param_3 = lVar2;
    uVar1 = '\x01';
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10009f32(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;

  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 - lVar2;
    uVar4 = param_3 - lVar2;
    lVar3 = uVar4 - uVar1;
    if (uVar1 <= uVar4 && lVar3 != 0) {
      uVar5 = uVar1;
      for (; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar5) = *(undefined1 *)(*param_1 + uVar4);
        uVar5 = uVar5 + 1;
      }
      param_1[1] = param_1[1] - lVar3;
      lVar2 = uVar1 + *param_1;
      if (*param_1 == 0) {
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  lVar3 = uVar1 + lVar2;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10009f92(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  uVar4 = param_1[1];
  if (param_2 < uVar4) {
    lVar3 = uVar4 * 0x18;
    for (; lVar3 = lVar3 + -0x18, param_2 < uVar4; uVar4 = uVar4 - 1) {
      recovered_1000b100((void *)(*param_1 + lVar3));
    }
    param_1[1] = param_2;
  }
  else if (uVar4 < param_2) {
    recovered_1000a364(param_1,param_2);
    uVar4 = param_1[1];
    lVar3 = uVar4 * 0x18 + 0x10;
    while (uVar4 < param_2) {
      lVar2 = *param_1;
      puVar1 = (undefined8 *)(lVar2 + -0x10 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      uVar4 = uVar4 + 1;
      param_1[1] = uVar4;
      lVar3 = lVar3 + 0x18;
    }
  }
  return;
}


#undef DAT_1000b888
#define DAT_1000b888 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bcU)))
#undef LAB_1000a171
#define LAB_1000a171 (*(uint8_t *)(0x1000a171U))
#define local_d8 (*(ulong *)(frame + 16))
#define local_d0 (*(undefined4 *)(frame + 24))
#define local_b8 (*(code * *)(frame + 48))
#define local_b0 (*(undefined * *)(frame + 56))
#define local_a8 (*(undefined1 * *)(frame + 64))
#define local_a0 (*(undefined1 * *)(frame + 72))
#define local_98 (*(undefined1 * *)(frame + 80))
#define local_80 (*(long * *)(frame + 104))
#define local_78 (*(long *)(frame + 112))
#define local_70 (*(ulong *)(frame + 120))
#define local_68 (*(void * *)(frame + 128))
#define local_58 (*(undefined8 *)(frame + 144))
#define local_50 (*(long * *)(frame + 152))
#define local_48 (*(uint *)(frame + 160))
#define local_44 (*(int *)(frame + 164))
#define local_40 (*(long * *)(frame + 168))
#define local_31 (*(byte *)(frame + 183))
#define uStack_60 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a014
 */

long * recovered_1000a014(long *param_1,long *param_2,ulong param_3)

{
  unsigned char frame[264] = {0};

  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  local_a8 = (undefined1 *)((long)(uintptr_t)(frame + 232) + -8);
  local_98 = (undefined1 *)&local_d8;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uVar3 = param_2[1];
  local_b8 = recovered_10002d70;
  local_b0 = &DAT_1000b888;
  local_a0 = &LAB_1000a171;
  local_d0 = 1;
  local_70 = param_3;
  local_50 = param_1;
  local_40 = param_2;
  recovered_100031ba(&local_d8);
  recovered_1000623e((long *)&local_68,uVar3);
  local_78 = *local_40;
  local_80 = (long *)local_40[1];
  uVar3 = CONCAT62((int6)((ulong)local_40 >> 0x10),0x10ea);
  plVar2 = (long *)0x0;
  while (local_80 != plVar2) {
    local_48 = (uint)*(byte *)(local_78 + (long)plVar2);
    local_31 = (byte)(uVar3 >> 8) ^ *(byte *)(local_78 + (long)plVar2);
    local_d0 = 2;
    local_44 = (int)uVar3;
    local_40 = plVar2;
    recovered_10007e3a((long *)&local_68,&local_31);
    uVar3 = (ulong)(((local_48 & 0xffff) + local_44) * -0x3193 + 0x58bf);
    plVar2 = (long *)((long)local_40 + 1);
  }
  pvVar1 = (void *)0x0;
  uVar3 = local_70 & 0xffffffff;
  if ((int)local_70 < 1) {
    uVar3 = 0;
  }
  if (uVar3 < uStack_60) {
    recovered_10009f32((long *)&local_68,(long)local_68,uVar3 + (long)local_68);
    pvVar1 = local_68;
    uVar4 = (undefined4)local_58;
    uVar5 = PF_PART4(local_58, 4);
    local_68 = (void *)0x0;
    local_58 = 0;
  }
  else {
    PF_PART4(uStack_60, 0) = 0;
    PF_PART4(uStack_60, 4) = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  plVar2 = local_50;
  *local_50 = (long)pvVar1;
  *(undefined4 *)(local_50 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((long)local_50 + 0xc) = PF_PART4(uStack_60, 4);
  *(undefined4 *)(local_50 + 2) = uVar4;
  *(undefined4 *)((long)local_50 + 0x14) = uVar5;
  uStack_60 = 0;
  recovered_10002de7(local_68);
  recovered_100031d1(&local_d8);
  return plVar2;
}

#undef DAT_1000b888
#undef LAB_1000a171
#undef local_d8
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_31
#undef uStack_60

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_1000a1c8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002de7((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}


#undef DAT_1000b890
#define DAT_1000b890 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c4U)))
#undef LAB_1000a31b
#define LAB_1000a31b (*(uint8_t *)(0x1000a31bU))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd34U)))
#define uStack_48 (*(undefined8 *)(frame + 112))
#define local_a8 (*(ulong *)(frame + 16))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_88 (*(code * *)(frame + 48))
#define local_80 (*(undefined * *)(frame + 56))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_50 (*(void * *)(frame + 104))
#define local_40 (*(undefined8 *)(frame + 120))
#define local_38 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a20a
 */

ulonglong recovered_1000a20a(long *param_1,ulonglong *param_2)

{
  unsigned char frame[216] = {0};

  long lVar1;
  long lVar2;
  long *plVar3;
  ulonglong uVar4;

  uVar4 = recovered_1000a3ee(param_1,param_2);
  local_68 = (undefined1 *)&local_a8;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_88 = recovered_10002d70;
  local_80 = &DAT_1000b890;
  local_70 = &LAB_1000a31b;
  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 184) + -8);
  recovered_100031ba(&local_a8);
  if (uVar4 == lVar1 * 0x30 + lVar2) {
    local_a0 = 0xffffffff;
    recovered_1000a41a((long)param_1);
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_a0 = 1;
    local_38 = param_1;
    recovered_1000a44c(param_1,param_2,(ulonglong *)&local_50);
    uStack_48 = 0;
    recovered_10002de7(local_50);
    plVar3 = local_38;
    local_a0 = 0xffffffff;
    recovered_100064b2(local_38 + 6,(ulonglong *)PTR_DAT_1000c000);
    recovered_1000a4b4(plVar3,plVar3[1] + -1);
    uVar4 = (*plVar3 + plVar3[1] * 0x30) - 0x30;
  }
  recovered_100031d1(&local_a8);
  return uVar4 + 0x18;
}

#undef DAT_1000b890
#undef LAB_1000a31b
#undef PTR_DAT_1000c000
#undef uStack_48
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_40
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a364(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX = 0;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000a3d6(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10007b4e((void *)(uVar1 + lVar2),(void *)(*param_1 + lVar2));
      recovered_1000b100((void *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
    in_RAX = extraout_RAX;
  }
  return in_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a3d6(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 * 0x18);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a3ee(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_1000a4e6(param_1,param_2);
  if (uVar1 == 0xffffffffffffffff) {
    uVar1 = param_1[1];
  }
  return *param_1 + uVar1 * 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a41a
 */

ulonglong recovered_1000a41a(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong extraout_RAX = 0;

  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((*(long *)(param_1 + 0x20) == 0) || ((ulong)(*(long *)(param_1 + 0x20) * 3) < uVar1 * 4 + 4))
  {
    recovered_1000a5e8(param_1,uVar1 * 2 + 2);
    return extraout_RAX;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_1000a44c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_1000a6a2(param_1,uVar2);
    lVar1 = param_1[1];
  }
  recovered_1000a776((void *)(lVar1 * 0x30 + *param_1),param_2,param_3);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 * 0x30 + *param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a4b4(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;

  uVar2 = recovered_1000a548((long)param_1,(undefined8 *)(param_2 * 0x30 + *param_1));
  lVar1 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar1 + uVar2 * 8);
  *(long *)(lVar1 + uVar2 * 8) = param_2;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a4e6(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;

  if (param_1[4] != 0) {
    uVar2 = recovered_1000a548((long)param_1,param_2);
    puVar3 = (ulonglong *)(uVar2 * 8 + param_1[3]);
    while (uVar2 = *puVar3, uVar2 != 0xffffffffffffffff) {
      uVar1 = recovered_1000a58b((undefined8 *)(uVar2 * 0x30 + *param_1),param_2);
      if (uVar1 != '\0') {
        return uVar2;
      }
      puVar3 = (ulonglong *)(uVar2 * 8 + param_1[6]);
    }
  }
  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a548(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_1000a56c(param_1 + 0x48,param_2);
  return uVar1 & *(long *)(param_1 + 0x20) - 1U;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x238)))
ulonglong recovered_1000a56c(undefined8 param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  undefined1 *puVar2;

  puVar2 = &DAT_0203db5c;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_2;
  }
  uVar1 = recovered_10006358((long)puVar2,param_2[1]);
  return uVar1;
}

#undef DAT_0203db5c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x238)))
uchar recovered_1000a58b(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;

  puVar2 = (undefined1 *)*param_1;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0203db5c;
  }
  puVar3 = (undefined1 *)*param_2;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0203db5c;
  }
  uVar1 = recovered_1000a5be((long)puVar2,param_1[1],(long)puVar3,param_2[1]);
  return uVar1;
}

#undef DAT_0203db5c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined1 recovered_1000a5be(long param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (param_2 == param_4) {
    lVar3 = 0;
    do {
      if (param_2 == lVar3) {
        return 1;
      }
      pcVar1 = (char *)(param_1 + lVar3);
      pcVar2 = (char *)(param_3 + lVar3);
      lVar3 = lVar3 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  return 0;
}


#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5e8
 */

void recovered_1000a5e8(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  ulonglong uVar2;
  ulong uVar3;

  uVar3 = 8;
  if (3 < *(ulong *)(param_1 + 8)) {
    uVar3 = *(ulong *)(param_1 + 8) * 2;
  }
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  uVar2 = recovered_1000a650(uVar3);
  puVar1 = PTR_DAT_1000c000;
  recovered_1000638a((long *)(param_1 + 0x18),uVar2,(ulonglong *)PTR_DAT_1000c000);
  recovered_1000638a((long *)(param_1 + 0x30),*(ulong *)(param_1 + 8),(ulonglong *)puVar1);
  recovered_1000a664(param_1);
  return;
}

#undef PTR_DAT_1000c000

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a650(ulong param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  bool bVar3;

  uVar2 = 8;
  do {
    uVar1 = uVar2;
    bVar3 = uVar2 < param_1;
    uVar2 = uVar2 * 2;
  } while (bVar3);
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a664(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_1000a4b4((long *)param_1,uVar1);
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a6a2(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000a714(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000a72c((void *)(uVar1 + lVar2),(void *)(*param_1 + lVar2));
      recovered_1000991e((void *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x30;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000a714(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 * 0x30);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a72c(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  recovered_1000a756(object,p0);
  recovered_10007b4e((void *)((long)object + 0x18),(void *)((long)p0 + 0x18));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a756(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)object = *(undefined8 *)p0;
  uVar1 = *(undefined8 *)((long)p0 + 0x10);
  *(undefined8 *)((long)object + 8) = *(undefined8 *)((long)p0 + 8);
  *(undefined8 *)((long)object + 0x10) = uVar1;
  *(undefined8 *)p0 = 0;
  *(undefined8 *)((long)p0 + 8) = 0;
  *(undefined8 *)((long)p0 + 0x10) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000a776(void *object,void *p0,void *p1)

{
  unsigned char frame[64] = {0};

  recovered_1000a79c(object,p0);
  recovered_10007b4e((void *)((long)object + 0x18),p1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x238)))
void recovered_1000a79c(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  puVar1 = &DAT_0203db5c;
  if (*(undefined1 **)p0 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)p0;
  }
  recovered_10009e28(object,(long)puVar1,*(ulong *)((long)p0 + 8));
  return;
}

#undef DAT_0203db5c

#undef DAT_1000b478
#define DAT_1000b478 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acU)))
#undef _DAT_1000b478
#define _DAT_1000b478 (*(double *)(((uintptr_t)pf_module_state + 0x1acU)))
#define local_40 (*(long * *)(frame + 24))
#define local_34 (*(int *)(frame + 36))
#define local_48 (*(double *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000a7ca(long *param_1,long *param_2,int param_3)

{
  unsigned char frame[120] = {0};

  ulong uVar1;
  double *pdVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  double dVar14;

  if (param_3 < 0x11) {
    local_40 = param_1 + 2;
    local_34 = param_3 + 1;
    uVar11 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar12 = param_2[1];
          if (uVar12 <= uVar11) {
            return '\x01';
          }
          uVar1 = uVar11 + 1;
          lVar10 = *param_2;
          bVar4 = *(byte *)(lVar10 + uVar11);
          if (bVar4 != 0xc) break;
          if (uVar12 <= uVar1) goto LAB_1000a7e0;
          bVar4 = *(byte *)(lVar10 + 1 + uVar11);
          if ((1 < bVar4 - 0x10) && (bVar4 != 0x21)) {
            if ((bVar4 != 7) || (uVar12 = param_1[3], uVar12 < 4)) goto LAB_1000a7e0;
            lVar5 = param_1[2];
            lVar10 = *(long *)(lVar5 + -0x20 + uVar12 * 8);
            param_1[0x11] = lVar10;
            lVar3 = *(long *)(lVar5 + -0x18 + uVar12 * 8);
            param_1[0x12] = lVar3;
            param_1[0x13] = lVar10;
            param_1[0x14] = lVar3;
            *(undefined1 *)(param_1 + 0x16) = 0;
            param_1[0x15] = (long)(*(double *)(lVar5 + -0x10 + uVar12 * 8) * (double)param_1[1]);
          }
          param_1[3] = 0;
          uVar11 = uVar11 + 2;
        }
        if (bVar4 < 0x20) break;
        if ((byte)(bVar4 - 0x20) < 0xd7) {
          dVar14 = (double)(int)(bVar4 - 0x8b);
          uVar12 = uVar1;
        }
        else if ((byte)(bVar4 + 9) < 4) {
          dVar14 = 0.0;
          bVar13 = uVar1 < uVar12;
          uVar12 = uVar1;
          if (bVar13) {
            iVar7 = CONCAT11(bVar4,*(undefined1 *)(lVar10 + 1 + uVar11)) - 0xf694;
LAB_1000a94c:
            uVar11 = uVar11 + 2;
            dVar14 = (double)iVar7;
LAB_1000a976:
            uVar12 = uVar11;
          }
        }
        else if ((byte)(bVar4 + 5) < 4) {
          dVar14 = 0.0;
          bVar13 = uVar1 < uVar12;
          uVar12 = uVar1;
          if (bVar13) {
            iVar7 = 0xfa94 - (uint)CONCAT11(bVar4,*(undefined1 *)(lVar10 + 1 + uVar11));
            goto LAB_1000a94c;
          }
        }
        else {
          uVar11 = uVar11 + 5;
          dVar14 = 0.0;
          if (uVar11 <= uVar12) {
            uVar8 = recovered_1000521c(param_2,uVar1);
            dVar14 = (double)(int)uVar8 * _DAT_1000b478;
            goto LAB_1000a976;
          }
        }
        local_48 = dVar14;
        recovered_1000ad98(local_40,(ulonglong *)&local_48);
        uVar11 = uVar12;
      }
      uVar6 = '\0';
      switch((uintptr_t)((uint)bVar4)) {
      case 1:
      case 3:
        break;
      default:
        goto switchD_1000a8c6_caseD_2;
      case 4:
        uVar11 = param_1[3];
        if (uVar11 != 0) {
          lVar10 = param_1[2];
          goto LAB_1000aa2b;
        }
        goto LAB_1000a7e0;
      case 5:
        if (1 < (ulong)param_1[3]) {
          pdVar2 = (double *)(param_1[2] + -0x10 + param_1[3] * 8);
          dVar14 = pdVar2[1];
          param_1[0x11] = (long)((double)param_1[0x11] + *pdVar2);
          param_1[0x12] = (long)((double)param_1[0x12] + dVar14);
          goto LAB_1000aa7e;
        }
        goto LAB_1000a7e0;
      case 6:
        if (param_1[3] != 0) {
          param_1[0x11] =
               (long)(*(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x11]);
          goto LAB_1000aa7e;
        }
        goto LAB_1000a7e0;
      case 7:
        if (param_1[3] == 0) goto LAB_1000a7e0;
        param_1[0x12] =
             (long)(*(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x12]);
LAB_1000aa7e:
        recovered_1000ad28((long)param_1);
        break;
      case 9:
        recovered_1000acb4((long)param_1);
        break;
      case 10:
        if (param_1[3] != 0) {
          uVar9 = recovered_1000140c(*(double *)(param_1[2] + -8 + param_1[3] * 8));
          param_1[3] = 0;
          if (-1 < (int)(uint)uVar9) {
            uVar11 = (ulong)((uint)uVar9 & 0x7fffffff);
            if ((uVar11 < *(ulong *)(*param_1 + 0x1830)) &&
               (uVar6 = recovered_1000a7ca(param_1,(long *)(uVar11 * 0x18 +
                                                           *(long *)(*param_1 + 0x1828)),local_34),
               uVar6 != '\0')) {
              if (*(char *)((long)param_1 + 0xb1) == '\x01') {
                *(undefined1 *)((long)param_1 + 0xb1) = 0;
              }
              goto LAB_1000aba2;
            }
          }
        }
        goto LAB_1000a7e0;
      case 0xb:
        *(undefined1 *)((long)param_1 + 0xb1) = 1;
        break;
      case 0xd:
        uVar11 = param_1[3];
        if (uVar11 < 2) goto LAB_1000a7e0;
        lVar10 = *(long *)(param_1[2] + -0x10 + uVar11 * 8);
        dVar14 = *(double *)(param_1[2] + -8 + uVar11 * 8);
        param_1[0x11] = lVar10;
        param_1[0x12] = 0;
        param_1[0x13] = lVar10;
        param_1[0x14] = 0;
        *(undefined1 *)(param_1 + 0x16) = 0;
        param_1[0x15] = (long)(dVar14 * (double)param_1[1]);
        break;
      case 0xe:
        recovered_1000acb4((long)param_1);
        *(undefined1 *)((long)param_1 + 0xb2) = 1;
        break;
      case 0x15:
        uVar11 = param_1[3];
        if (uVar11 < 2) goto LAB_1000a7e0;
        lVar10 = param_1[2];
        param_1[0x11] = (long)(*(double *)(lVar10 + -0x10 + uVar11 * 8) + (double)param_1[0x11]);
LAB_1000aa2b:
        param_1[0x12] = (long)(*(double *)(lVar10 + -8 + uVar11 * 8) + (double)param_1[0x12]);
LAB_1000ab10:
        recovered_1000acd4((long)param_1);
        break;
      case 0x16:
        if (param_1[3] != 0) {
          param_1[0x11] =
               (long)(*(double *)(param_1[2] + -8 + param_1[3] * 8) + (double)param_1[0x11]);
          goto LAB_1000ab10;
        }
        goto LAB_1000a7e0;
      }
      param_1[3] = 0;
LAB_1000aba2:
      if (*(char *)((long)param_1 + 0xb2) != '\0') {
        return '\x01';
      }
      uVar6 = '\x01';
      uVar11 = uVar1;
    } while (*(char *)((long)param_1 + 0xb1) == '\0');
  }
  else {
LAB_1000a7e0:
    uVar6 = '\0';
  }
switchD_1000a8c6_caseD_2:
  return uVar6;
}

#undef DAT_1000b478
#undef _DAT_1000b478
#undef local_40
#undef local_34
#undef local_48

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000ac2c(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 0x30) = 0;
  recovered_10002de7(*(void **)((long)object + 0x28));
  recovered_1000aca2((void *)((long)object + 0x10));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000ac56(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  uVar1 = recovered_1000ac88((long)p0);
  recovered_10009e28(object,(long)p0,uVar1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000ac88(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + uVar1) == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000aca2(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000acb4(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10007d0c((long *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define dStack_20 (*(double *)(frame + 24))
#define local_28 (*(double *)(frame + 16))
void recovered_1000acd4(long param_1)

{
  unsigned char frame[88] = {0};


  recovered_1000acb4(param_1);
  local_28 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x88);
  dStack_20 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x90);
  recovered_10007bda((long *)(param_1 + 0x28),&local_28);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}

#undef dStack_20
#undef local_28

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define dStack_20 (*(double *)(frame + 24))
#define local_28 (*(double *)(frame + 16))
void recovered_1000ad28(long param_1)

{
  unsigned char frame[88] = {0};


  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_28 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x98);
    dStack_20 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0xa0);
    recovered_10007bda((long *)(param_1 + 0x28),&local_28);
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  local_28 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x88);
  dStack_20 = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x90);
  recovered_10007c84((long *)(param_1 + 0x28),&local_28);
  return;
}

#undef dStack_20
#undef local_28

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000ad98(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_1000ade6(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined8 *)(*param_1 + lVar1 * 8) = *param_2;
  param_1[1] = lVar1 + 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000ade6(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_1000ae3f(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined8 *)(uVar2 + uVar3 * 8) = *(undefined8 *)(*param_1 + uVar3 * 8);
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000ae3f(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 << 3);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae56
 */

void recovered_1000ae56(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x18;
  while (bVar3 = lVar1 != 0, lVar1 = lVar1 + -1, bVar3) {
    recovered_1000b100((void *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000ae96(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_10006546(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
  param_1[1] = lVar1 + 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_1000aee0(double param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;

  iVar1 = ((uintptr_t (*)(void *))(*(uintptr_t *)(*(long *)**(undefined8 **)*param_2 + 0x40)))((void *)(uintptr_t)((long *)**(undefined8 **)*param_2));
  if (iVar1 == 1) {
    uVar3 = recovered_1000140c(param_1);
    uVar2 = (uint)uVar3;
  }
  else {
    dVar4 = recovered_10001079(param_1);
    uVar2 = (uint)dVar4;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000af22(long *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;
  long *plVar3;

  if (param_1[4] != 0) {
    uVar2 = recovered_1000af7e((long)param_1,(long)param_2);
    plVar3 = (long *)(uVar2 * 8 + param_1[3]);
    while (lVar1 = *plVar3, lVar1 != -1) {
      if (*(int *)(*param_1 + lVar1 * 0x38) == *param_2) {
        return *param_1 + lVar1 * 0x38;
      }
      plVar3 = (long *)(lVar1 * 8 + param_1[6]);
    }
  }
  return param_1[1] * 0x38 + *param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000af7e(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006358(param_2,4);
  return uVar1 & *(long *)(param_1 + 0x20) - 1U;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000afa6(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;

  uVar2 = recovered_1000af7e((long)param_1,param_2 * 0x38 + *param_1);
  lVar1 = param_1[3];
  *(undefined8 *)(param_1[6] + param_2 * 8) = *(undefined8 *)(lVar1 + uVar2 * 8);
  *(long *)(lVar1 + uVar2 * 8) = param_2;
  return;
}


#undef DAT_1000b4f8
#define DAT_1000b4f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afd8
 */

double recovered_1000afd8(long *in_RDI)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  ulong in_RSI;
  double extraout_XMM0_Qa = 0;
  double dVar3;
  double extraout_XMM0_Qa_00 = 0;

  uVar2 = 8;
  if (3 < (ulong)in_RDI[1]) {
    uVar2 = in_RDI[1] * 2;
  }
  if (uVar2 <= in_RSI) {
    uVar2 = in_RSI;
  }
  uVar1 = recovered_1000b066(uVar2);
  recovered_1000638a(in_RDI + 3,uVar1,(ulonglong *)&DAT_1000b4f8);
  recovered_1000638a(in_RDI + 6,in_RDI[1],(ulonglong *)&DAT_1000b4f8);
  for (uVar2 = 0; uVar2 < (ulong)in_RDI[4]; uVar2 = uVar2 + 1) {
    *(undefined8 *)(in_RDI[3] + uVar2 * 8) = 0xffffffffffffffff;
  }
  dVar3 = extraout_XMM0_Qa;
  for (uVar2 = 0; uVar2 < (ulong)in_RDI[1]; uVar2 = uVar2 + 1) {
    recovered_1000afa6(in_RDI,uVar2);
    dVar3 = extraout_XMM0_Qa_00;
  }
  return dVar3;
}

#undef DAT_1000b4f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b066
 */

ulonglong recovered_1000b066(ulong in_RDI)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;
  bool bVar3;

  uVar2 = 8;
  do {
    uVar1 = uVar2;
    bVar3 = uVar2 < in_RDI;
    uVar2 = uVar2 * 2;
  } while (bVar3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b07a
 */

void recovered_1000b07a(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;

  if ((ulong)param_1[2] < param_2) {
    pvVar2 = recovered_10002db3(param_2 * 0x38);
    lVar3 = 0x20;
    for (uVar4 = 0; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
      lVar1 = *param_1;
      *(undefined4 *)((long)pvVar2 + lVar3 + -0x20) = *(undefined4 *)(lVar1 + lVar3 + -0x20);
      recovered_1000662c((void *)((long)pvVar2 + lVar3 + -0x18),(void *)(lVar1 + lVar3 + -0x18));
      recovered_1000b100((void *)(*param_1 + lVar3));
      lVar3 = lVar3 + 0x38;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = (long)pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b100(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b112(void *object,ulong p0,void *p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_1000836a(object,p0,p1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b128(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b13a(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    uVar2 = 4;
    if (lVar1 != 0) {
      uVar2 = lVar1 * 2;
    }
    recovered_10006546(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
  param_1[1] = lVar1 + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b184
 */

void recovered_1000b184(void *object,void *p0,void *p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10009a00(object,0,p0,p1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b1a2(void *object)

{
  unsigned char frame[64] = {0};

  recovered_1000b1be(object);
  recovered_10002de7(*(void **)object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b1be(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  while( true ) {
    lVar2 = lVar2 + -0x18;
    bVar3 = lVar1 == 0;
    lVar1 = lVar1 + -1;
    if (bVar3) break;
    recovered_1000b128((void *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000b1fa(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX = 0;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_1000b26c(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000b284((void *)(uVar1 + lVar2),(void *)(*param_1 + lVar2));
      recovered_1000b128((void *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002de7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
    in_RAX = extraout_RAX;
  }
  return in_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000b26c(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002db3(param_1 * 0x18);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b284(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)object = *(undefined8 *)p0;
  uVar1 = *(undefined8 *)((long)p0 + 0x10);
  *(undefined8 *)((long)object + 8) = *(undefined8 *)((long)p0 + 8);
  *(undefined8 *)((long)object + 0x10) = uVar1;
  *(undefined8 *)p0 = 0;
  *(undefined8 *)((long)p0 + 8) = 0;
  *(undefined8 *)((long)p0 + 0x10) = 0;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000b2a4(void *object,void *p0)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *(undefined8 *)object = *(undefined8 *)p0;
  *(undefined8 *)((long)object + 8) = *(undefined8 *)((long)p0 + 8);
  uVar1 = *(undefined8 *)((long)p0 + 0x18);
  *(undefined8 *)((long)object + 0x10) = *(undefined8 *)((long)p0 + 0x10);
  *(undefined8 *)((long)object + 0x18) = uVar1;
  *(undefined8 *)((long)p0 + 8) = 0;
  *(undefined8 *)((long)p0 + 0x10) = 0;
  *(undefined8 *)((long)p0 + 0x18) = 0;
  return;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double pf_release_exp(double value) {
 if(value!=value)return value;
 if(value>709.782712893384)return pf_bits_double(0x7ff0000000000000ULL);
 if(value< -745.1332191019411)return 0.0;
 unsigned halves=0;
 while(value>0.5){value*=0.5;++halves;}
 while(value< -0.5){value*=0.5;++halves;}
 double sum=1.0,term=1.0;
 for(int n=1;n<=32;++n){term=(value/(double)n)*term;sum=sum+term;}
 while(halves--){sum=sum*sum;}
 return sum;
}
float pf_release_expf(float value){return (float)pf_release_exp((double)value);}
long double pf_release_expl(long double value){return (long double)pf_release_exp((double)value);}
double pf_release_difftime(long end,long start){return (double)end-(double)start;}
