/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x1693)))
void recovered_100004c0(void)

{
  unsigned char frame[64] = {0};

  DAT_02044ee0 = 0;
  recovered_100004d1();
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
#undef DAT_100090f0
#define DAT_100090f0 (*(char *)(((uintptr_t)pf_module_state + 0x1693U)))
#undef DAT_100090f8
#define DAT_100090f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x169bU)))
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
 * Address: 0x100004d1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100004d1(void)

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
  if (DAT_100090f0 == '\0') {
    DAT_100090f8 = 0;
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
      local_438[1] = 0x100006d3;
      recovered_10001ce6(puVar3[-1],*puVar3,&local_28);
      puVar3 = puVar3 + 2;
      lVar2 = extraout_RAX;
    }
    if (DAT_100090f8 == 0) {
      uVar5 = _DAT_00006088 & 0xfffffff0;
      if (_DAT_00006088 < 0x300001) {
        uVar5 = 0x4000000;
      }
      uVar4 = (ulong)uVar5;
      if (uVar5 < 0x300029) {
        uVar4 = 0x4000000;
      }
      local_438[1] = 0x1000071a;
      recovered_10001ce6(0x300000,uVar4 - 0x300000,&local_28);
      in_EAX = extraout_EAX;
    }
    DAT_100090f0 = '\x01';
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
#undef DAT_100090f0
#undef DAT_100090f8
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef local_438
#undef local_28

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x169b)))
ulong recovered_1000072f(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004d1();
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
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x169b)))
long recovered_10000766(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100004d1();
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
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x169b)))
ulong recovered_10000791(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_100004d1();
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
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x169b)))
long recovered_100007c2(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_100004d1();
  lVar1 = 0;
  for (plVar2 = &DAT_02044ee8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = lVar1 + *plVar2;
  }
  return lVar1;
}

#undef DAT_02044ee8

#undef DAT_100090f8
#define DAT_100090f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x169bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007e7
 */

ulonglong recovered_100007e7(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return 0;
  }
  recovered_100004d1();
  uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
  puVar2 = &DAT_100090f8;
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

#undef DAT_100090f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000869
 */

ulonglong recovered_10000869(ulonglong value,int shift)

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
 * Address: 0x100008a5
 */

ulonglong recovered_100008a5(ulonglong value,int shift)

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
 * Address: 0x100008e4
 */

long recovered_100008e4(long param_1,uint param_2)

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

ulonglong recovered_10000928(ulonglong a,ulonglong b)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_10000934(a,b,(long *)0x0);
  return uVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10000934(ulong param_1,ulong param_2,long *param_3)

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
ulonglong recovered_1000098e(ulonglong a,ulonglong b)

{
  unsigned char frame[72] = {0};


  local_18 = 0;
  recovered_10000934(a,b,(long *)&local_18);
  return local_18;
}

#undef local_18

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

longlong recovered_100009ae(longlong a,longlong b)

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
  uVar1 = recovered_10000934(uVar4,uVar3,(long *)0x0);
  uVar2 = -uVar1;
  if (-1 < (b ^ a)) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_20 (*(long *)(frame + 16))
longlong recovered_100009ea(longlong a,longlong b)

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
  recovered_10000934(uVar3,uVar1,&local_20);
  lVar2 = -local_20;
  if (-1 < a) {
    lVar2 = local_20;
  }
  return lVar2;
}

#undef local_20

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000a3d(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000a45(int value)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -value;
  if (-value < 0) {
    iVar1 = value;
  }
  return iVar1;
}


#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a52
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000a52(ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001d46(0x4c);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000684c == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*(code *)(ulong)_DAT_0000684c)(size);
  return pvVar2;
}

#undef DAT_0000684c
#undef _DAT_0000684c

#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a87
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000a87(void *buffer)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10001d46(0x50);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_00006850)(buffer);
  return;
}

#undef DAT_00006850
#undef _DAT_00006850

#undef DAT_00006854
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#undef _DAT_00006854
#define _DAT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aba
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000aba(void *buffer,ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001d46(0x54);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006854 == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*(code *)(ulong)_DAT_00006854)(buffer,size);
  return pvVar2;
}

#undef DAT_00006854
#undef _DAT_00006854

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10000af2(void *out,void *pf_input,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)pf_input + uVar1);
  }
  return out;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10000b0f(void *out,void *pf_input,ulong size)

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

void * recovered_10000b5b(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000b74(void *out,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = 0;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10000b8a(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000ba0(void *a,void *b,ulong size)

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

int recovered_10000bc7(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x61U < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000bd8(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x41U < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000be9(int value)

{
  unsigned char frame[64] = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000bfd(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000c1f(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value == 9 || value == 0x20);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000c36(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x20U < 0x5f);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10000c47(int value)

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

int recovered_10000c59(int value)

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

ulong recovered_10000c6b(char *s)

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

int recovered_10000c85(char *a,char *b)

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

int recovered_10000ca6(char *a,char *b)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_10000c85(a,b);
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000cb0(char *a,char *b)

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

char * recovered_10000cc8(char *s)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  char *out;

  if (s != (char *)0x0) {
    uVar1 = recovered_10000c6b(s);
    out = (char *)recovered_100007e7(uVar1 + 1);
    if (out != (char *)0x0) {
      recovered_10000af2(out,s,uVar1 + 1);
      return out;
    }
  }
  return (char *)0x0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000d16(char *s,int c)

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

ulong recovered_10000d3c(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while( true ) {
    if (s[uVar2] == 0) {
      return uVar2;
    }
    pcVar1 = recovered_10000d16(set,(int)s[uVar2]);
    if (pcVar1 == (char *)0x0) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000d78(char *s,char *set)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*s == 0) {
      return (char *)0x0;
    }
    pcVar1 = recovered_10000d16(set,(int)*s);
    if (pcVar1 != (char *)0x0) break;
    s = s + 1;
  }
  return s;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

char * recovered_10000da8(char *s,char *part)

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
#define DAT_0203db58 (*(uint8_t *)((uintptr_t)(pf_module_state+0x40b)))
undefined * recovered_10000dd7(void)

{
  unsigned char frame[64] = {0};

  return &DAT_0203db58;
}

#undef DAT_0203db58

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define PTR_DAT_02044d78 (*(uint8_t * *)((uintptr_t)(pf_module_state+0x15a3)))
undefined ** recovered_10000de4(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_02044d78;
}

#undef PTR_DAT_02044d78

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10000df1(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x3)))
double recovered_10000e08(double value,int exponent)

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
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x3)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x83)))
double recovered_10000e37(double value,int *exponent)

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

double recovered_10000ec9(double a,double b)

{
  unsigned char frame[64] = {0};

  if ((b == 0.0) && (!NAN(b))) {
    return 0.0;
  }
  return a - (double)(int)(a / b) * b;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
double recovered_10000ef8(double a,double b)

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

double recovered_10000f60(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
double recovered_10000f89(double value)

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
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x3)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
double recovered_10000fdb(double value)

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
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x3)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define DAT_0203d1d0 (*(double *)((uintptr_t)(pf_module_state+0x13)))
#define DAT_0203d1d8 (*(double *)((uintptr_t)(pf_module_state+0x1b)))
#define DAT_0203d1e0 (*(double *)((uintptr_t)(pf_module_state+0x23)))
#define DAT_0203d1e8 (*(double *)((uintptr_t)(pf_module_state+0x2b)))
#define DAT_0203d1f8 (*(double *)((uintptr_t)(pf_module_state+0x3b)))
#define _DAT_0203d1f0 (*(double *)((uintptr_t)(pf_module_state+0x33)))
double recovered_10001021(double value)

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
#define DAT_0203d250 (*(uint8_t *)((uintptr_t)(pf_module_state+0x93)))
long recovered_100010dd(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_0203d250 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_0203d250

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define _DAT_0203d200 (*(double *)((uintptr_t)(pf_module_state+0x43)))
#define _DAT_0203d260 (*(uint128 *)((uintptr_t)(pf_module_state+0xa3)))
double recovered_10001101(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  dVar1 = recovered_10001150(value);
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
#define DAT_0203d208 (*(double *)((uintptr_t)(pf_module_state+0x4b)))
#define DAT_0203d210 (*(double *)((uintptr_t)(pf_module_state+0x53)))
#define DAT_0203d218 (*(double *)((uintptr_t)(pf_module_state+0x5b)))
#define DAT_0203d220 (*(double *)((uintptr_t)(pf_module_state+0x63)))
double recovered_10001150(double param_1)

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
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define DAT_0203d228 (*(double *)((uintptr_t)(pf_module_state+0x6b)))
#define _DAT_0203d270 (*(uint128 *)((uintptr_t)(pf_module_state+0xb3)))
double recovered_1000118e(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  dVar1 = recovered_10001150(value);
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
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x83)))
double recovered_100011d9(double value)

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

float recovered_100011f3(float a,float b)

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

float recovered_10001229(int *in_RDI,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000e37((double)param_2,in_RDI);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_1000123c(float param_1)

{
  unsigned char frame[64] = {0};

  int in_EDI;
  double dVar1;

  dVar1 = recovered_10000e08((double)param_1,in_EDI);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_1000124f(float a,float b)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000ef8((double)a,(double)b);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001266(float value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  return (float)(double)(~uVar1 & (ulong)(double)(int)value |
                        (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001297(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000f89((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

double recovered_100012aa(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10000f89(value);
    return dVar2;
  }
  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100012e3(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012aa((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_100012f6(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000fdb((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001309(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001021((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d250 (*(uint8_t *)((uintptr_t)(pf_module_state+0x93)))
ulonglong recovered_1000131c(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_0203d250 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_0203d250

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001340(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001101((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

float recovered_10001353(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000118e((double)value);
  return (float)dVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define _DAT_0203d280 (*(uint *)((uintptr_t)(pf_module_state+0xc3)))
float recovered_10001366(float value)

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

long recovered_1000137d(char *s,char **end,int base)

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
    uVar2 = recovered_1000147d((int)(char)*pbVar3);
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

uint recovered_1000147d(int param_1)

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

ulong recovered_100014b0(char *s,char **end,int base)

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
    uVar2 = recovered_1000147d((int)(char)*pbVar3);
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
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define DAT_0203d230 (*(double *)((uintptr_t)(pf_module_state+0x73)))
#define _DAT_0203d240 (*(uint64_t *)((uintptr_t)(pf_module_state+0x83)))
double recovered_100015b0(char *s,char **end)

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
        dVar8 = recovered_10000e08(dVar8,iVar6 * iVar3);
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

float recovered_10001706(char *s,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100015b0(s,end);
  return (float)dVar1;
}


#undef DAT_10007ad0
#define DAT_10007ad0 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_10007ae0
#define DAT_10007ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef DAT_10007e96
#define DAT_10007e96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x439U)))
#undef UNK_10007ae8
#define UNK_10007ae8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_10007ae0
#define _DAT_10007ae0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x83U)))
#define local_48 (*(ulong *)(frame + 16))
#define local_40 (*(char * *)(frame + 24))
#define local_34 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001715
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001715(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10001757:
  cVar2 = *format;
  if (cVar2 != '%') {
    if (cVar2 == '\0') {
      if (capacity != 0) {
        *local_40 = '\0';
      }
      return local_34;
    }
    if (local_48 < 2) goto LAB_100017b2;
    *local_40 = cVar2;
    goto LAB_10001778;
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
LAB_100017dc:
    switch((uintptr_t)(cVar2)) {
    case 'c':
      goto switchD_100017ef_caseD_63;
    case 'd':
    case 'i':
switchD_100017ef_caseD_64:
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
switchD_100017ef_caseD_65:
      if (local_48 < 2) goto LAB_100017b2;
      *local_40 = '?';
      goto LAB_100017a4;
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
        dVar12 = (double)((ulong)dVar12 ^ _DAT_10007ae0);
      }
      recovered_10001bfe((long *)&local_40,&local_48,&local_34,(int)dVar12,10,0);
      if (1 < local_48) {
        *local_40 = '.';
        local_40 = local_40 + 1;
        local_48 = local_48 - 1;
      }
      dVar1 = DAT_10007ad0;
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
      goto LAB_100017b5;
    case 'h':
    case 'l':
    case 't':
    case 'z':
      goto switchD_100017ef_caseD_68;
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
      recovered_10001bb5((int *)&local_40,(uint *)&local_48,&local_34,&DAT_10007e96);
      recovered_10001bfe((long *)&local_40,&local_48,&local_34,uVar7,0x10,0);
      goto LAB_100017b5;
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
      recovered_10001bb5((int *)&local_40,(uint *)&local_48,&local_34,(char *)*puVar4);
      goto LAB_100017b5;
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
      goto LAB_10001ae8;
    default:
      if (cVar2 == 'I') goto switchD_100017ef_caseD_64;
      if (cVar2 != 'X') goto switchD_100017ef_caseD_65;
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
      goto LAB_10001aed;
    }
    uVar10 = 10;
LAB_10001ae8:
    iVar8 = 0;
LAB_10001aed:
    recovered_10001bfe((long *)&local_40,&local_48,&local_34,uVar7,uVar10,iVar8);
    goto LAB_100017b5;
  }
  if (1 < local_48) {
    *local_40 = '%';
LAB_100017a4:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
  goto LAB_100017b2;
switchD_100017ef_caseD_68:
  cVar2 = format[1];
  format = format + 1;
  goto LAB_100017dc;
switchD_100017ef_caseD_63:
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
LAB_10001778:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
LAB_100017b2:
  local_34 = local_34 + 1;
LAB_100017b5:
  format = format + 1;
  goto LAB_10001757;
}

#undef DAT_10007ad0
#undef DAT_10007ae0
#undef DAT_10007e96
#undef UNK_10007ae8
#undef _DAT_10007ae0
#undef local_48
#undef local_40
#undef local_34

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001b9c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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
#define DAT_0203db5d (*(uint8_t *)((uintptr_t)(pf_module_state+0x410)))
void recovered_10001bb5(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = &DAT_0203db5d;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001b9c((long *)out,(ulong *)remaining,total,*pcVar1);
  }
  return;
}

#undef DAT_0203db5d

#undef str_10007e74
#define str_10007e74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x417U)))
#undef str_10007e85
#define str_10007e85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x428U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(char (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bfe
 */

void recovered_10001bfe(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[128] = {0};

  long lVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = str_10007e85;
  if (param_6 != 0) {
    pcVar2 = str_10007e74;
  }
  lVar1 = 0;
  do {
    local_48[lVar1] = pcVar2[(ulong)param_4 % (ulong)param_5];
    lVar1 = lVar1 + 1;
    bVar3 = param_5 <= param_4;
    param_4 = param_4 / param_5;
  } while (bVar3);
  while (lVar1 != 0) {
    uStack_50 = 0x10001c61;
    recovered_10001b9c(param_1,param_2,param_3,local_48[lVar1 + -1]);
    lVar1 = lVar1 + -1;
  }
  return;
}

#undef str_10007e74
#undef str_10007e85
#undef uStack_50
#undef local_48

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_10001c73(char *out,unsigned long capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10001715(out,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044ee8 (*(uint64_t *)((uintptr_t)(pf_module_state+0x169b)))
void recovered_10001ce6(long param_1,ulong param_2,ulong *param_3)

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
 * Address: 0x10001d46
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10001d46(int in_EDI)

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
#define DAT_02046590 (*(uint64_t *)((uintptr_t)(pf_module_state+0x16a3)))
#define DAT_020465a0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x16b3)))
void recovered_10001d84(long param_1,long param_2)

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
          recovered_10001e31(1);
        }
        else {
          if (DAT_02046590 - 0x1ffU < 0xfffffffffffffe00) {
            recovered_10001e31(0);
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
#undef DAT_10009100
#define DAT_10009100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x16a3U)))
#undef DAT_10009110
#define DAT_10009110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16b3U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e31
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001e31(uchar param_1)

{
  unsigned char frame[568] = {0};

  uchar uVar1;
  ulong uVar2;

  if ((DAT_10009100 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_10009100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000af2(local_208,&DAT_10009110,DAT_10009100);
      uVar2 = DAT_10009100;
    }
    local_208[uVar2] = 0;
    uVar1 = recovered_10002b4d(0x40);
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006840 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_10009100 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_10009100
#undef DAT_10009110
#undef _DAT_00006840
#undef local_208

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001eaf(void)

{
  unsigned char frame[64] = {0};

  recovered_10001e31(1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001ebc(void)

{
  unsigned char frame[64] = {0};

  recovered_10001e31(0);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x40f)))
#define DAT_0203db8e (*(uint8_t *)((uintptr_t)(pf_module_state+0x43c)))
#define local_148 (*(char (*)[320])(frame + 16))
void recovered_10001ec8(undefined *param_1,undefined1 *param_2)

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
  uVar1 = recovered_10001c73(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10001d84((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_0203db5c
#undef DAT_0203db8e
#undef local_148

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001f1d(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f6a((uintptr_t)(pf_module_state+0x43f));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x462));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x49b));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x4d0));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x4f6));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x526));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001f6a(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == 0) {
    return;
  }
  uVar1 = recovered_10000c6b((char *)param_1);
  recovered_10001d84(param_1,uVar1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10001f8f(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f6a((uintptr_t)(pf_module_state+0x529));
  recovered_10001f6a((uintptr_t)(pf_module_state+0x526));
  return;
}


#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10001fac(long param_1,ulong param_2,ulonglong param_3,uchar param_4)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;

  if (param_2 != 0 && param_1 != 0) {
    recovered_10001ebc();
    uVar1 = recovered_10002b4d(0x44);
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

undefined8 recovered_10002011(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002019(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined1 recovered_1000201f(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203db8e (*(uint8_t *)((uintptr_t)(pf_module_state+0x43c)))
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
#define local_30 (*(uint *)(frame + 20))
#define local_34 (*(uint *)(frame + 16))
#define str_0203dd0f (*(char (*)[1])((uintptr_t)(pf_module_state+0x5bd)))
#define str_0203dd1c (*(char (*)[1])((uintptr_t)(pf_module_state+0x5ca)))
#define str_0203dd2a (*(char (*)[1])((uintptr_t)(pf_module_state+0x5d8)))
void * recovered_10002027(char *path,char *mode)

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
  iVar3 = recovered_10000c85(path,str_0203dd0f);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = recovered_10000c85(path,str_0203dd1c);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      iVar4 = recovered_10000c85(path,str_0203dd2a);
      if (iVar4 != 0) {
        puVar6 = recovered_10000a52(0x340);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_02044e50 = 0xc;
          return (void *)0x0;
        }
        recovered_10000b5b(puVar6,0,0x340);
        *puVar6 = 0;
        pcVar7 = recovered_10000d16(mode,0x72);
        bVar9 = true;
        bVar8 = true;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = recovered_10000d16(mode,0x2b);
          bVar8 = true;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10000d16(mode,0x61);
            bVar8 = pcVar7 != (char *)0x0;
          }
        }
        *(bool *)(puVar6 + 0x49) = bVar8;
        pcVar7 = recovered_10000d16(mode,0x77);
        if ((pcVar7 == (char *)0x0) &&
           (pcVar7 = recovered_10000d16(mode,0x61), pcVar7 == (char *)0x0)) {
          pcVar7 = recovered_10000d16(mode,0x2b);
          bVar9 = pcVar7 != (char *)0x0;
        }
        *(bool *)((long)puVar6 + 0x125) = bVar9;
        pcVar7 = recovered_10000d16(mode,0x61);
        *(bool *)((long)puVar6 + 0x126) = pcVar7 != (char *)0x0;
        puVar6[0x48] = 0xffffffff;
        recovered_10001c73((char *)(puVar6 + 1),0xf1,&DAT_0203db8e,path);
        recovered_10000b5b(&local_34,0,0xc);
        uVar5 = recovered_100022cc(path,&local_34);
        if (uVar5 == 0) {
          if (*(char *)((long)puVar6 + 0x125) == '\0') {
            DAT_02044e50 = 2;
LAB_020039e2:
            recovered_10000a87(puVar6);
            return (void *)0x0;
          }
        }
        else {
          pcVar7 = recovered_10000d16(mode,0x77);
          if (local_30 != 0 && pcVar7 == (char *)0x0) {
            if (*(char *)((long)puVar6 + 0x125) == '\x01') {
              uVar2 = recovered_10002304((long)puVar6,(ulong)local_30);
              if (uVar2 == '\0') goto LAB_020039e2;
              recovered_10000af2(*(void **)(puVar6 + 0x40),(void *)(ulong)local_34,(ulong)local_30);
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
  puVar6 = recovered_10000a52(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_02044e50 = 0xc;
    return (void *)0x0;
  }
  recovered_10000b5b(puVar6,0,0x340);
  *puVar6 = uVar1;
  *(bool *)(puVar6 + 0x49) = iVar3 == 0;
  *(bool *)((long)puVar6 + 0x125) = iVar3 != 0;
  puVar6[0x48] = 0xffffffff;
  recovered_10001c73((char *)(puVar6 + 1),0xf1,&DAT_0203db8e,path);
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
 * Address: 0x100022cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100022cc(ulonglong param_1,ulonglong param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002b4d(0x34);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006834 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100022fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006834)(param_1,param_2);
  return uVar2;
}

#undef DAT_00006834
#undef _DAT_00006834

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
uchar recovered_10002304(long param_1,ulong param_2)

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
    pvVar3 = recovered_10000aba(*(void **)(param_1 + 0x100),uVar2);
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

void recovered_1000238a(long param_1,long param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (int *)0x0) {
    recovered_100023b3(param_3);
  }
  recovered_10002027((char *)param_1,(char *)param_2);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100023b3(void *stream)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (stream == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = recovered_1000271a(stream);
    if (*(void **)((long)stream + 0x100) != (void *)0x0) {
      recovered_10000a87(*(void **)((long)stream + 0x100));
    }
    recovered_10000a87(stream);
  }
  return iVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_100023ed(void *out,uint size,uint count,void *stream)

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
          iVar1 = recovered_10002473(stream);
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
#define DAT_0203db5c (*(uint8_t *)((uintptr_t)(pf_module_state+0x40f)))
int recovered_10002473(void *stream)

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
      uVar2 = recovered_10001fac((long)stream + 0x12a,0x1fe,&DAT_0203db5c,0);
      if (uVar2 != '\0') {
        uVar3 = recovered_10000c6b((char *)((long)stream + 0x12a));
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

uint recovered_10002565(void *data,uint size,uint count,void *stream)

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
      recovered_10001d84((long)data,uVar6);
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
      uVar2 = recovered_10002304((long)stream,lVar3 + uVar6);
      if (uVar2 == '\0') goto LAB_02003dbf;
      uVar1 = *(ulong *)((long)stream + 0x108);
      uVar5 = *(ulong *)((long)stream + 0x118);
      if (uVar1 <= uVar5 && uVar5 - uVar1 != 0) {
        recovered_10000b5b((void *)(uVar1 + *(long *)((long)stream + 0x100)),0,uVar5 - uVar1);
        uVar5 = *(ulong *)((long)stream + 0x118);
      }
      recovered_10000af2((void *)(uVar5 + *(long *)((long)stream + 0x100)),data,uVar6);
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
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
int recovered_1000267e(void *stream,int offset,int origin)

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
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
int recovered_100026f7(void *stream)

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
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
int recovered_1000271a(void *stream)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 0;
  if (((stream != (void *)0x0) && (*(int *)stream == 0)) &&
     (*(char *)((long)stream + 0x127) == '\x01')) {
    uVar1 = recovered_100028e8((long)stream + 4,*(undefined8 *)((long)stream + 0xf8),
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

int recovered_1000277e(void *stream)

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

int recovered_10002794(void *stream)

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

void recovered_100027aa(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100027c4(int ch,void *stream)

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
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
int recovered_100027f0(char *path)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (path == (char *)0x0) {
    DAT_02044e50 = 0x16;
  }
  else {
    uVar1 = recovered_1000281b(path);
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
 * Address: 0x1000281b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000281b(ulonglong param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002b4d(0x3c);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000683c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_0000683c)(param_1);
  return uVar2;
}

#undef DAT_0000683c
#undef _DAT_0000683c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044e50 (*(uint32_t *)((uintptr_t)(pf_module_state+0x1603)))
#define local_28 (*(undefined4 *)(frame + 20))
#define local_2c (*(uint *)(frame + 16))
int recovered_10002850(char *from,char *to)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  undefined4 uVar2;

  if (from == (char *)0x0 || to == (char *)0x0) {
    DAT_02044e50 = 0x16;
    return -1;
  }
  recovered_10000b5b(&local_2c,0,0xc);
  uVar1 = recovered_100022cc(from,&local_2c);
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = recovered_100028e8(to,(ulong)local_2c,local_28);
    uVar2 = 5;
    if ((uVar1 != 0) && (uVar1 = recovered_1000281b(from), uVar1 != 0)) {
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
 * Address: 0x100028e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100028e8(ulonglong param_1,ulonglong param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002b4d(0x38);
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006838 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006838)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_00006838
#undef _DAT_00006838

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_38 (*(uint *)(frame + 20))
#define local_3c (*(uint *)(frame + 16))
ulong recovered_10002933(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10000b5b(&local_3c,0,0xc);
    uVar1 = recovered_100022cc(param_1,&local_3c);
    if (uVar1 == 0) goto LAB_02004112;
    out = recovered_10000a52((ulong)(local_38 + (local_38 == 0)));
    if (out != (void *)0x0) {
      if ((ulong)local_38 == 0) {
        uVar2 = 0;
      }
      else {
        recovered_10000af2(out,(void *)(ulong)local_3c,(ulong)local_38);
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

bool recovered_100029d8(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  uVar1 = recovered_100028e8(param_1,param_2,(int)param_3);
  return uVar1 != 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002a00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002a08(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002a0e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002a16(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002a1e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002a26(void *s,int c,ulong size)

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

int recovered_10002a46(char *a,char *b,ulong size)

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
#define DAT_0203dc9e (*(uint8_t *)((uintptr_t)(pf_module_state+0x54c)))
#define str_0203dca1 (*(char (*)[1])((uintptr_t)(pf_module_state+0x54f)))
#define str_0203dcae (*(char (*)[1])((uintptr_t)(pf_module_state+0x55c)))
#define str_0203dcb8 (*(char (*)[1])((uintptr_t)(pf_module_state+0x566)))
#define str_0203dccc (*(char (*)[1])((uintptr_t)(pf_module_state+0x57a)))
#define str_0203dcda (*(char (*)[1])((uintptr_t)(pf_module_state+0x588)))
#define str_0203dcec (*(char (*)[1])((uintptr_t)(pf_module_state+0x59a)))
#define str_0203dcf8 (*(char (*)[1])((uintptr_t)(pf_module_state+0x5a6)))
#define str_0203dd09 (*(char (*)[1])((uintptr_t)(pf_module_state+0x5b7)))
char * recovered_10002a74(int param_1)

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

undefined8 recovered_10002b24(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002b2c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffffffffffff;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x18b3)))
void recovered_10002b35(void)

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
 * Address: 0x10002b4d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10002b4d(int in_EDI)

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

void recovered_10002b90(unsigned long *context) {
  __builtin_longjmp((void **)(uintptr_t)context[8],1);
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b9e
 */

undefined8 recovered_10002b9e(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;

  *param_1 = unaff_RBX;
  param_1[1] = unaff_RBP;
  param_1[2] = unaff_R12;
  param_1[3] = unaff_R13;
  param_1[4] = unaff_R14;
  param_1[5] = unaff_R15;
  param_1[6] = &uStack0000000000000008;
  param_1[7] = unaff_retaddr;
  return 0;
}

#undef uStack0000000000000008
#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bcb
 */

void recovered_10002bcb(long param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


#undef DAT_10002c4a
#define DAT_10002c4a (*(uint8_t *)(0x10002c4aU))
#undef DAT_10008064
#define DAT_10008064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x607U)))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined * *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf9
 */

ulonglong recovered_10002bf9(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002c80;
  local_60 = &DAT_10008064;
  local_50 = &DAT_10002c4a;
  local_80 = 1;
  recovered_100030ca(&local_88);
  recovered_10000a3d();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002c4a
#undef DAT_10008064
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c80
 */

ulonglong recovered_10002c80(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10002c83(void *in_RDI)

{
  unsigned char frame[64] = {0};

  recovered_10002ca0(in_RDI);
                    /* WARNING: Subroutine does not return */
  recovered_10002bf9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(void * *)((uintptr_t)(pf_module_state+0x18bb)))
void * recovered_10002ca0(void *exception)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (exception == (void *)0x0) {
    return (void *)0x0;
  }
  *(void **)((long)exception + 0x10) = DAT_020467a8;
  *(undefined1 *)((long)exception + 0x28) = 0;
  DAT_020467a8 = exception;
  pvVar1 = (void *)recovered_10002fcf((long)exception);
  return pvVar1;
}

#undef DAT_020467a8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002cc3(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000a52(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10000a3d();
  }
  return pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002ced(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002cc3(size);
  return pvVar1;
}


#undef DAT_10008074
#define DAT_10008074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x617U)))
#undef LAB_10002d64
#define LAB_10002d64 (*(uint8_t *)(0x10002d64U))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf7
 */

void recovered_10002cf7(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002c80;
  local_60 = &DAT_10008074;
  local_50 = &LAB_10002d64;
  local_80 = 1;
  recovered_100030ca(&local_88);
  recovered_10000a87(data);
  recovered_100030e1(&local_88);
  return;
}

#undef DAT_10008074
#undef LAB_10002d64
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

#undef DAT_10008084
#define DAT_10008084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x627U)))
#undef LAB_10002dfd
#define LAB_10002dfd (*(uint8_t *)(0x10002dfdU))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d90
 */

void recovered_10002d90(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002c80;
  local_60 = &DAT_10008084;
  local_50 = &LAB_10002dfd;
  local_80 = 1;
  recovered_100030ca(&local_88);
  recovered_10000a87(data);
  recovered_100030e1(&local_88);
  return;
}

#undef DAT_10008084
#undef LAB_10002dfd
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10008094
#define DAT_10008094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x637U)))
#undef LAB_10002e95
#define LAB_10002e95 (*(uint8_t *)(0x10002e95U))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e28
 */

void recovered_10002e28(void *pointer,uint size)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002c80;
  local_60 = &DAT_10008094;
  local_50 = &LAB_10002e95;
  local_80 = 1;
  recovered_100030ca(&local_88);
  recovered_10000a87(pointer);
  recovered_100030e1(&local_88);
  return;
}

#undef DAT_10008094
#undef LAB_10002e95
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100080a4
#define DAT_100080a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x647U)))
#undef LAB_10002f2d
#define LAB_10002f2d (*(uint8_t *)(0x10002f2dU))
#define local_88 (*(ulong *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(void *pointer,uint size)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002c80;
  local_60 = &DAT_100080a4;
  local_50 = &LAB_10002f2d;
  local_80 = 1;
  recovered_100030ca(&local_88);
  recovered_10000a87(pointer);
  recovered_100030e1(&local_88);
  return;
}

#undef DAT_100080a4
#undef LAB_10002f2d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_10002f58(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10002f60(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002f6d(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002f76(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void * recovered_10002f7c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong uVar2;
  ulong size_00;

  size_00 = size + 0x30 + (ulong)(size == 0);
  pvVar1 = recovered_10000a52(size_00);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002bf9();
  }
  for (uVar2 = 0; size_00 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar2) = 0;
  }
  return (void *)((long)pvVar1 + 0x30);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10002fba(void *exception)

{
  unsigned char frame[64] = {0};

  if (exception == (void *)0x0) {
    return;
  }
  recovered_10000a87((void *)((long)exception + -0x30));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10002fcf(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(void * *)((uintptr_t)(pf_module_state+0x18bb)))
void recovered_10002fd9(void)

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
      recovered_10000a87(pointer);
      return;
    }
  }
  return;
}

#undef DAT_020467a8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10003025(void *exception,void *type,void *destructor)

{
  unsigned char frame[64] = {0};

  *(void **)((long)exception + -0x30) = type;
  *(void **)((long)exception + -0x28) = destructor;
  *(undefined8 *)((long)exception + -0x18) = 0;
  *(undefined8 *)((long)exception + -0x10) = 0;
  *(undefined1 *)((long)exception + -8) = 0;
  recovered_10003048((undefined8 *)((long)exception + -0x30));
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x18c3)))
#define cStack_2e (*(char *)(frame + 18))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_30 (*(undefined2 *)(frame + 16))
#define uStack_2c (*(undefined4 *)(frame + 20))
#define uStack_2d (*(undefined1 *)(frame + 19))
void recovered_10003048(undefined8 *param_1)

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
    uVar1 = recovered_10003509(context,(void *)*param_1,&local_30);
  } while ((uVar1 == '\0') || (cStack_2e != '\x01'));
  param_1[3] = context;
  param_1[4] = CONCAT44(local_28,uStack_2c);
  recovered_10003143(param_1);
LAB_02004780:
                    /* WARNING: Subroutine does not return */
  recovered_10002bf9();
}

#undef DAT_020467b0
#undef cStack_2e
#undef local_28
#undef local_30
#undef uStack_2c
#undef uStack_2d

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467a8 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x18bb)))
#define DAT_020467b0 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x18c3)))
void recovered_100030a5(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_020467a8;
  if (DAT_020467a8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002bf9();
  }
  *(undefined1 *)(DAT_020467a8 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  recovered_10003048(puVar1);
  *puVar1 = DAT_020467b0;
  DAT_020467b0 = puVar1;
  return;
}

#undef DAT_020467a8
#undef DAT_020467b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

unsigned int recovered_100030ca(unsigned long *context) {
  context[0]=*(uintptr_t *)(uintptr_t)(pf_module_state+0x18c3);
  *(uintptr_t *)(uintptr_t)(pf_module_state+0x18c3)=(uintptr_t)context;
  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t *)((uintptr_t)(pf_module_state+0x18c3)))
void recovered_100030e1(ulong *context)

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

int recovered_10003112(void *exception)

{
  unsigned char frame[64] = {0};

  recovered_10003048(exception);
                    /* WARNING: Subroutine does not return */
  recovered_10002bf9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_1000311b(void *exception,void *stop,void *argument)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002bf9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b0 (*(uint64_t * *)((uintptr_t)(pf_module_state+0x18c3)))
void recovered_10003124(void *exception)

{
  unsigned char frame[64] = {0};

  if (DAT_020467b0 != (undefined8 *)0x0) {
    DAT_020467b0 = (undefined8 *)*DAT_020467b0;
  }
  recovered_10003143(exception);
  return;
}

#undef DAT_020467b0

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10003143(undefined8 *exception) {
  struct handler {uint8_t present,cleanup,pad[2];uint32_t landing,selector;} handler;
  uintptr_t *context;
  for (;;) {
    context=*(uintptr_t **)(uintptr_t)(pf_module_state+0x18c3);
    if (!context) __builtin_trap();
    if ((uintptr_t)context==exception[3]) {
      handler.landing=*(uint32_t *)((uint8_t *)exception+32);
      handler.selector=*(uint32_t *)((uint8_t *)exception+36);
      break;
    }
    handler=(struct handler){0};
    recovered_10003509(context,(const void *)(uintptr_t)exception[0],&handler);
    if (handler.present && handler.cleanup) {handler.selector=0;break;}
    *(uintptr_t *)(uintptr_t)(pf_module_state+0x18c3)=context[0];
  }
  *(uint32_t *)((uint8_t *)context+8)=handler.landing;
  *(uint32_t *)((uint8_t *)context+12)=(uint32_t)(uintptr_t)exception;
  *(uint32_t *)((uint8_t *)context+16)=handler.selector;
  recovered_10002b90(context);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100031c4(void *exception)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003124(exception);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_100031cd(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100031d5(void *exception)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002bf9();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100031de(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;

  if (param_3 == (undefined8 *)0x0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + -0x10);
  uVar2 = recovered_1000321e(*(undefined8 **)(*param_1 + -8),param_3);
  lVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar3 = (long)param_1 + lVar1;
  }
  return lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_02044eb0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x1663)))
uint recovered_1000321e(undefined8 *param_1,undefined8 *param_2)

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

void recovered_1000329e(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10000a3d();
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 recovered_100032a8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100032b0(int value)

{
  unsigned char frame[64] = {0};

  return (int)(value - 0x30U < 10);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_100032c1(int value)

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

int recovered_100032eb(int value)

{
  unsigned char frame[64] = {0};

  return (int)((value & 0xffffffdfU) - 0x41 < 6 || value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000330b
 */

bool recovered_1000330b(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000332d
 */

bool recovered_1000332d(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003348
 */

byte recovered_10003348(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

int recovered_1000337b(int value,uint a8)

{
  unsigned char frame[64] = {0};

  ulong in_XMM0_Qa;

  return (int)((in_XMM0_Qa & 0x7fffffffffffffff) < 0x7ff0000000000000);
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d1c0 (*(double *)((uintptr_t)(pf_module_state+0x3)))
#define DAT_0203d1c8 (*(double *)((uintptr_t)(pf_module_state+0xb)))
#define DAT_0203d1e8 (*(double *)((uintptr_t)(pf_module_state+0x2b)))
#define DAT_0203d228 (*(double *)((uintptr_t)(pf_module_state+0x6b)))
double recovered_1000339d(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000f60(value);
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
 * Address: 0x100033e8
 */

ulonglong recovered_100033e8(char *s,char **end,int base)

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
    goto LAB_1000341e;
  }
  pbVar1 = (byte *)0x0;
  bVar3 = DAT_00000000;
LAB_1000341e:
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

longlong recovered_100034ff(char *s,char **end,int base)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_100033e8(s,end,base);
  return uVar1;
}


#undef DAT_10007b38
#define DAT_10007b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
#define local_58 (*(byte * *)(frame + 16))
#define local_50 (*(ulong *)(frame + 24))
#define local_44 (*(uint *)(frame + 36))
#define local_40 (*(undefined2 * *)(frame + 40))
#define local_38 (*(byte * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003509
 */

uchar recovered_10003509(ulong *context,void *type,void *handler)

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
      recovered_1000370d((uint)*pbVar10,(long *)&local_38);
      pbVar9 = local_38;
    }
    local_38 = pbVar9 + 1;
    bVar6 = *pbVar9;
    if (bVar6 == 0xff) {
      pbVar10 = (byte *)0x0;
    }
    else {
      uVar3 = recovered_10003834((ulonglong *)&local_38);
      pbVar10 = local_38 + uVar3;
    }
    local_38 = local_38 + 1;
    uVar3 = recovered_10003834((ulonglong *)&local_38);
    iVar8 = (int)context[1];
    if (0 < iVar8) {
      local_50 = (ulong)(ushort)bVar6;
      pbVar9 = local_38 + uVar3;
      while (local_38 < pbVar9) {
        uVar3 = recovered_10003834((ulonglong *)&local_38);
        uVar4 = recovered_10003834((ulonglong *)&local_38);
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
            uVar3 = recovered_10003888((ulonglong *)&local_58);
            pbVar9 = local_58;
            uVar4 = recovered_10003888((ulonglong *)&local_58);
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
                                     *(long *)(&DAT_10007b38 + (ulong)uVar7 * 8);
                puVar5 = (ulonglong *)recovered_1000370d((uint)local_50,(long *)&local_38);
              }
              uVar2 = recovered_1000321e(type,puVar5);
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

#undef DAT_10007b38
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000370d(uint param_1,long *param_2)

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
    puVar2 = (undefined8 *)recovered_10003863(lVar1,8);
    lVar4 = lVar1 + 8;
    goto LAB_02004e40;
  case 1:
    puVar2 = (undefined8 *)recovered_10003834(param_2);
    break;
  case 2:
    puVar2 = (undefined8 *)recovered_10003863(lVar1,2);
    goto LAB_02004e3c;
  case 3:
    puVar2 = (undefined8 *)recovered_10003863(lVar1,4);
    goto LAB_02004dfa;
  default:
    goto switchD_02004db9_caseD_5;
  case 9:
    puVar2 = (undefined8 *)recovered_10003888(param_2);
    break;
  case 10:
    uVar3 = recovered_10003863(lVar1,2);
    puVar2 = (undefined8 *)((long)(short)uVar3 & 0xffffffffffff0000U | uVar3);
LAB_02004e3c:
    lVar4 = lVar1 + 2;
LAB_02004e40:
    *param_2 = lVar4;
    break;
  case 0xb:
    uVar3 = recovered_10003863(lVar1,4);
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

ulonglong recovered_10003834(undefined8 *param_1)

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

ulonglong recovered_10003863(long param_1,long param_2)

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

ulonglong recovered_10003888(undefined8 *param_1)

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


#undef DAT_10007bb0
#define DAT_10007bb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef DAT_10007ddc
#define DAT_10007ddc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37fU)))
#undef DAT_10007df8
#define DAT_10007df8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x39bU)))
#undef DAT_10007e14
#define DAT_10007e14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_10007e30
#define DAT_10007e30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3d3U)))
#undef DAT_10008046
#define DAT_10008046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e9U)))
#undef DAT_1000804b
#define DAT_1000804b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eeU)))
#undef DAT_10008050
#define DAT_10008050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f3U)))
#undef DAT_10008055
#define DAT_10008055 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f8U)))
#undef DAT_1000805a
#define DAT_1000805a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fdU)))
#undef DAT_100080b4
#define DAT_100080b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x657U)))
#undef LAB_10005120
#define LAB_10005120 (*(uint8_t *)(0x10005120U))
#define local_1a8 (*(ulong *)(frame + 272))
#define local_198 (*(byte * *)(frame + 288))
#define pbStack_158 (*(byte * *)(frame + 352))
#define local_190 (*(ulonglong *)(frame + 296))
#define local_180 (*(undefined8 *)(frame + 312))
#define local_170 (*(ulong *)(frame + 328))
#define local_160 (*(void * *)(frame + 344))
#define local_150 (*(byte * *)(frame + 360))
#define local_148 (*(byte * *)(frame + 368))
#define local_140 (*(ulong *)(frame + 376))
#define local_138 (*(undefined4 *)(frame + 384))
#define local_120 (*(code * *)(frame + 408))
#define local_118 (*(undefined * *)(frame + 416))
#define local_110 (*(undefined1 * *)(frame + 424))
#define local_108 (*(undefined1 * *)(frame + 432))
#define uStack_d8 (*(undefined8 *)(frame + 480))
#define local_100 (*(undefined1 * *)(frame + 440))
#define local_e8 (*(byte * *)(frame + 464))
#define local_e0 (*(undefined8 *)(frame + 472))
#define local_d0 (*(byte * *)(frame + 488))
#define local_c8 (*(ulong *)(frame + 496))
#define uStack_a8 (*(undefined8 *)(frame + 528))
#define local_b8 (*(byte * *)(frame + 512))
#define local_b0 (*(undefined8 *)(frame + 520))
#define uStack_98 (*(ulong *)(frame + 544))
#define local_a0 (*(void * *)(frame + 536))
#define local_90 (*(undefined8 *)(frame + 552))
#define local_88 (*(undefined8 *)(frame + 560))
#define uStack_80 (*(undefined8 *)(frame + 568))
#define local_78 (*(undefined2 *)(frame + 576))
#define local_6c (*(uint *)(frame + 588))
#define local_68 (*(byte * *)(frame + 592))
#define local_60 (*(long *)(frame + 600))
#define local_58 (*(uint * *)(frame + 608))
#define local_4c (*(uint *)(frame + 620))
#define local_48 (*(byte * *)(frame + 624))
#define local_40 (*(uint * *)(frame + 632))
#define local_38 (*(byte * *)(frame + 640))
#define pvStack_2a0 (*(void * *)(frame + 24))
#define uStack_298 (*(undefined8 *)(frame + 32))
#define uStack_290 (*(ulong *)(frame + 40))
#define pbStack_288 (*(byte * *)(frame + 48))
#define uStack_280 (*(ulonglong *)(frame + 56))
#define uStack_270 (*(undefined8 *)(frame + 72))
#define pvStack_250 (*(void * *)(frame + 104))
#define pbStack_240 (*(byte * *)(frame + 120))
#define local_2a8 (*(void * *)(frame + 16))
#define local_278 (*(byte * *)(frame + 64))
#define uStack_1f0 (*(undefined8 *)(frame + 200))
#define local_268 (*(ulonglong (*)[3])(frame + 80))
#define local_248 (*(byte * *)(frame + 112))
#define local_230 (*(ulong *)(frame + 136))
#define local_228 (*(long *)(frame + 144))
#define local_220 (*(void * *)(frame + 152))
#define local_218 (*(byte * *)(frame + 160))
#define local_208 (*(ulong *)(frame + 176))
#define uStack_1b0 (*(undefined8 *)(frame + 264))
#define local_1fc (*(uint *)(frame + 188))
#define local_1f8 (*(byte * *)(frame + 192))
#define uStack_1a0 (*(undefined8 *)(frame + 280))
#define local_1e8 (*(undefined8 *)(frame + 208))
#define local_1e0 (*(ulong * *)(frame + 216))
#define local_1d8 (*(ulong *)(frame + 224))
#define uStack_188 (*(ulong *)(frame + 304))
#define local_1d0 (*(ulong *)(frame + 232))
#define local_1c8 (*(ulong *)(frame + 240))
#define puStack_178 (*(ushort * *)(frame + 320))
#define local_1c0 (*(ulong *)(frame + 248))
#define local_1b8 (*(undefined8 *)(frame + 256))
#define uStack_168 (*(undefined8 *)(frame + 336))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d4
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_100038d4(long param_1,long param_2,ulong *param_3)

{
  unsigned char frame[728] = {0};

  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uchar uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte bVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong *puVar21;
  bool bVar22;

  local_2a8 = (void *)0x0;
  pvStack_2a0 = (void *)0x0;
  uStack_298 = 0;
  uStack_290 = 0;
  recovered_10005310(param_3,(ulonglong *)&local_2a8);
  uStack_298 = 0;
  recovered_10002cf7(pvStack_2a0);
  local_100 = (undefined1 *)&local_2a8;
  local_120 = recovered_10002c80;
  local_118 = &DAT_100080b4;
  local_108 = &LAB_10005120;
  local_110 = (undefined1 *)((long)(uintptr_t)(frame + 696) + -8);
  recovered_100030ca(&local_140);
  if (param_2 == 0 || param_1 == 0) {
    uVar8 = 0;
    goto LAB_10003ab4;
  }
  local_138 = 0xffffffff;
  recovered_10007a40(&local_220,(void *)param_1,(void *)(param_2 + param_1));
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  puStack_178 = (ushort *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = (void *)0x0;
  pbStack_158 = (byte *)0x0;
  local_150 = (byte *)0x0;
  local_2a8 = (void *)0x0;
  pvStack_2a0 = (void *)0x0;
  uStack_298 = 0;
  uStack_290 = uStack_290 & 0xffff000000000000;
  pbStack_288 = (byte *)0x0;
  uStack_280 = 0;
  local_278 = (byte *)0x0;
  uStack_270 = 0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_268[2] = 0;
  pvStack_250 = (void *)0x0;
  local_248 = (byte *)0x0;
  pbStack_240 = (byte *)0x0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = uStack_290;
  local_198 = (byte *)0x0;
  recovered_10005336(&local_190,&uStack_280);
  recovered_10005336((ulonglong *)&puStack_178,local_268);
  pbStack_158 = (byte *)0x0;
  recovered_10002cf7(local_160);
  local_160 = pvStack_250;
  pbStack_158 = local_248;
  local_150 = pbStack_240;
  pvStack_250 = (void *)0x0;
  local_248 = (byte *)0x0;
  pbStack_240 = (byte *)0x0;
  recovered_10005378(&local_2a8);
  if (local_218 < (byte *)0x8) {
LAB_10003a92:
    uVar8 = 0;
  }
  else {
    local_138 = 1;
    local_38 = (byte *)0x8;
    local_1e0 = param_3;
    iVar7 = recovered_10000ba0(local_220,&DAT_10007bb0,8);
    if (iVar7 != 0) goto LAB_10003a92;
    while (pbVar15 = local_218, pvVar11 = local_220, local_38 + 0xc <= local_218) {
      uVar8 = recovered_10005d34((uint *)((long)local_220 + (long)local_38));
      pbVar1 = local_38 + 8;
      puVar17 = (uint *)(ulong)uVar8;
      if (pbVar15 + -(long)pbVar1 < puVar17 + 1) goto LAB_10003a92;
      pbVar15 = (byte *)((long)pvVar11 + (long)local_38) + 4;
      puVar20 = (uint *)((long)pvVar11 + (long)pbVar1);
      uVar8 = recovered_10005d34((uint *)(pbVar1 + (long)puVar17 + (long)pvVar11));
      uVar9 = recovered_10005d3e(0,(long)pbVar15,4);
      if (puVar17 != (uint *)0x0) {
        uVar9 = recovered_10005d3e(uVar9,(long)puVar20,(long)puVar17);
      }
      if (uVar9 != uVar8) goto LAB_10003a92;
      local_38 = pbVar1 + (long)puVar17 + 4;
      local_58 = puVar20;
      local_40 = puVar17;
      if (PF_PART1(uStack_1a0, 4) == '\0') {
        local_138 = 2;
        iVar7 = recovered_10000ba0(pbVar15,&DAT_10008046,4);
        puVar17 = local_58;
        uVar8 = 0;
        if (((int)local_40 != 0xd) || (iVar7 != 0)) goto LAB_10003a94;
        uVar9 = recovered_10005d34(local_58);
        local_1b8 = CONCAT44(PF_PART4(local_1b8, 4),uVar9);
        uVar10 = recovered_10005d34(puVar17 + 1);
        local_1b8 = CONCAT44(uVar10,(uint)local_1b8);
        bVar16 = (byte)puVar17[2];
        bVar2 = *(byte *)((long)puVar17 + 9);
        uStack_1b0 = (ulong)CONCAT14(bVar2,(uint)bVar16);
        local_1a8 = (ulong)CONCAT14(*(char *)((long)puVar17 + 0xb),
                                    (uint)*(byte *)((long)puVar17 + 10));
        PF_PART5(uStack_1a0, 0) = CONCAT14(1,(uint)(byte)puVar17[3]);
        uVar8 = 0;
        if ((uVar9 == 0) || (uVar10 == 0)) goto LAB_10003a94;
        bVar22 = false;
        if (bVar2 < 7) {
          if ((0x55U >> (bVar2 & 0x1f) & 1) == 0) {
            if (bVar2 != 3) goto LAB_10003ce9;
            bVar16 = bVar16 - 8;
          }
          else {
            bVar16 = bVar16 - 8 & 0xf7;
          }
          bVar22 = bVar16 == 0;
        }
LAB_10003ce9:
        uVar8 = 0;
        if ((((!bVar22) || (*(byte *)((long)puVar17 + 10) != 0)) ||
            (*(char *)((long)puVar17 + 0xb) != '\0')) || (1 < (byte)puVar17[3])) goto LAB_10003a94;
      }
      else {
        local_138 = 3;
        local_48 = pbVar15;
        iVar7 = recovered_10000ba0(pbVar15,&DAT_10008050,4);
        if (iVar7 == 0) {
          if (local_40 == (uint *)0x0) goto LAB_10003a92;
          uVar8 = 0;
          if ((0x300 < (uint)local_40) || ((int)(((ulong)local_40 & 0xffffffff) % 3) != 0))
          goto LAB_10003a94;
          local_138 = 4;
          recovered_10005dc8((long *)&local_190,(uchar *)local_58,
                             (byte *)((long)local_40 + (long)local_58));
        }
        else {
          local_138 = 5;
          iVar7 = recovered_10000ba0(local_48,&DAT_10008055,4);
          if (iVar7 == 0) {
            if (((int)local_40 != 2 && PF_PART4(uStack_1b0, 4) == 0) ||
               ((int)local_40 != 6 && PF_PART4(uStack_1b0, 4) == 2)) goto LAB_10003a92;
            if (PF_PART4(uStack_1b0, 4) == 3) {
              uVar8 = 0;
              if ((uint *)(uStack_188 / 3) < local_40) goto LAB_10003a94;
            }
            else {
              uVar8 = 0;
              if ((PF_PART4(uStack_1b0, 4) == 4) || (PF_PART4(uStack_1b0, 4) == 6)) goto LAB_10003a94;
            }
            local_138 = 6;
            recovered_10005dc8((long *)&puStack_178,(uchar *)local_58,
                               (byte *)((long)local_40 + (long)local_58));
          }
          else {
            local_138 = 7;
            iVar7 = recovered_10000ba0(local_48,&DAT_1000805a,4);
            if (iVar7 == 0) {
              if (local_40 != (uint *)0x0) {
                puVar17 = local_58;
                puVar20 = local_40;
                if (pbStack_158 == local_150) {
                  pbVar15 = (byte *)((long)pbStack_158 * 2);
                  if (pbStack_158 == (byte *)0x0) {
                    pbVar15 = (byte *)0x4;
                  }
                  if (pbStack_158 < pbVar15) {
                    local_138 = 8;
                    local_48 = pbVar15;
                    pvVar11 = recovered_10002cc3((long)pbVar15 << 4);
                    puVar20 = local_40;
                    puVar17 = local_58;
                    lVar12 = 0;
                    pbVar15 = pbStack_158;
                    while (bVar22 = pbVar15 != (byte *)0x0, pbVar15 = pbVar15 + -1, bVar22) {
                      uVar4 = ((undefined8 *)((long)local_160 + lVar12))[1];
                      *(undefined8 *)((long)pvVar11 + lVar12) =
                           *(undefined8 *)((long)local_160 + lVar12);
                      ((undefined8 *)((long)pvVar11 + lVar12))[1] = uVar4;
                      lVar12 = lVar12 + 0x10;
                    }
                    recovered_10002cf7(local_160);
                    local_150 = local_48;
                    local_160 = pvVar11;
                  }
                }
                *(uint **)((long)local_160 + (long)pbStack_158 * 0x10) = puVar17;
                *(uint **)((long)local_160 + (long)pbStack_158 * 0x10 + 8) = puVar20;
                pbStack_158 = pbStack_158 + 1;
                local_198 = local_198 + (long)puVar20;
              }
            }
            else {
              local_138 = 9;
              iVar7 = recovered_10000ba0(local_48,&DAT_1000804b,4);
              if (iVar7 == 0) {
                if (local_40 == (uint *)0x0) {
                  PF_PART6(uStack_1a0, 0) = CONCAT15(1,(undefined5)uStack_1a0);
                  break;
                }
                goto LAB_10003a92;
              }
              if ((*local_48 & 0x20) == 0) goto LAB_10003a92;
            }
          }
        }
      }
    }
    if (PF_PART1(uStack_1a0, 4) != '\x01') goto LAB_10003a92;
    uVar8 = 0;
    if ((PF_PART1(uStack_1a0, 5) == '\x01') && (local_198 != (byte *)0x0)) {
      if ((PF_PART4(uStack_1b0, 4) == 3) && (uStack_188 == 0)) goto LAB_10003a92;
      local_a0 = (void *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = (byte *)0x0;
      local_78 = 0;
      local_2a8 = (void *)0x0;
      pvStack_2a0 = (void *)0x0;
      uStack_298 = 0;
      uStack_290 = 0;
      pbStack_288 = (byte *)0x0;
      uStack_280 = uStack_280 & 0xffffffffffff0000;
      recovered_10005336((ulonglong *)&local_a0,(ulonglong *)&local_2a8);
      local_88 = uStack_290;
      uStack_80 = pbStack_288;
      local_78 = (undefined2)uStack_280;
      pvStack_2a0 = (void *)0x0;
      recovered_10002cf7(local_2a8);
      if (PF_PART4(uStack_1b0, 4) == 0) {
        if (local_170 == 0) goto LAB_100040f7;
        if (local_170 == 2) {
          local_88 = CONCAT44(PF_PART4(local_88, 4),(uint)(ushort)(*puStack_178 << 8 | *puStack_178 >> 8));
          local_78 = CONCAT11(PF_PART1(local_78, 1),1);
          goto LAB_100040f7;
        }
LAB_100040cb:
        uVar8 = 0;
        goto LAB_10004a97;
      }
      if (PF_PART4(uStack_1b0, 4) == 2) {
        if (local_170 != 0) {
          if (local_170 != 6) goto LAB_100040cb;
          local_88 = (ulong)CONCAT24(*puStack_178 << 8 | *puStack_178 >> 8,(uint)local_88);
          uStack_80 = (byte *)(ulong)CONCAT24(puStack_178[2] << 8 | puStack_178[2] >> 8,
                                              (uint)(ushort)(puStack_178[1] << 8 |
                                                            puStack_178[1] >> 8));
          local_78 = CONCAT11(1,(byte)local_78);
        }
        goto LAB_100040f7;
      }
      if (PF_PART4(uStack_1b0, 4) == 3) {
        uVar8 = 0;
        if ((uStack_188 == 0) || (uStack_188 % 3 != 0)) goto LAB_10004a97;
        local_2a8 = (void *)CONCAT71(PF_PART7(local_2a8, 1),0xff);
        local_138 = 10;
        local_38 = (byte *)(uStack_188 / 3);
        recovered_10005f0c((long *)&local_a0,(long)(uStack_188 / 3) * 4,(uchar *)&local_2a8);
        lVar12 = 0;
        for (pbVar15 = (byte *)0x0; local_38 != pbVar15; pbVar15 = pbVar15 + 1) {
          *(undefined1 *)((long)local_a0 + (long)pbVar15 * 4) = *(undefined1 *)(local_190 + lVar12);
          *(undefined1 *)((long)local_a0 + (long)pbVar15 * 4 + 1) =
               *(undefined1 *)(local_190 + 1 + lVar12);
          *(undefined1 *)((long)local_a0 + (long)pbVar15 * 4 + 2) =
               *(undefined1 *)(local_190 + 2 + lVar12);
          lVar12 = lVar12 + 3;
        }
        for (uVar13 = 0; uVar13 < local_170; uVar13 = uVar13 + 1) {
          *(undefined1 *)((long)local_a0 + uVar13 * 4 + 3) =
               *(undefined1 *)((long)puStack_178 + uVar13);
        }
      }
      else if (local_170 != 0) goto LAB_100040cb;
LAB_100040f7:
      local_1f8 = (byte *)0x0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      pbVar15 = (byte *)(local_1b8 & 0xffffffff);
      if ((int)uStack_1a0 == 0) {
        uVar14 = recovered_10005fc8((long)&local_1b8);
        uVar13 = (local_1b8 >> 0x20) * (long)pbVar15;
        if (uVar13 >> 0x3e == 0) {
          local_40 = (uint *)CONCAT44(PF_PART4(local_40, 4),(int)uVar14);
          local_138 = 0xb;
          local_38 = pbVar15;
          recovered_10005f80((long *)&local_1f8,uVar13 * 4);
          local_2a8 = (void *)0x0;
          pvStack_2a0 = (void *)0x0;
          uStack_298 = 0;
          uStack_290 = 0;
          pbStack_288 = (byte *)0x0;
          uStack_280 = 0;
          local_278 = (byte *)0x0;
          local_138 = 0xc;
          uVar6 = recovered_10005ff0((long *)&local_2a8,(long *)&local_160);
          if (uVar6 == '\0') {
LAB_10004a75:
            recovered_10007090(&local_2a8);
          }
          else {
            uVar13 = ((ulong)local_40 & 0xffffffff) * (long)local_38 + 7;
            pbVar15 = (byte *)(uVar13 >> 3);
            uVar14 = recovered_10005fc8((long)&local_1b8);
            local_1d8 = (ulong)((uint)uVar14 + 7 >> 3);
            if ((uint)uVar14 < 8) {
              local_1d8 = 1;
            }
            local_138 = 0xd;
            local_68 = pbVar15;
            recovered_10007a18(&local_d0,(ulong)(pbVar15 + 1));
            if ((PF_PART4(uStack_1b0, 4) == 6) && ((int)uStack_1b0 == 8)) {
              local_58 = (uint *)-(long)local_68;
              local_40 = (uint *)0x0;
              pbVar15 = (byte *)0x0;
              do {
                local_38 = pbVar15;
                if ((byte *)(local_1b8 >> 0x20) <= pbVar15) {
                  pbVar15 = (byte *)CONCAT71((uint7)(uVar13 >> 0xb),local_278 == pbStack_288);
                  goto LAB_100050b7;
                }
                local_138 = 0xe;
                uVar6 = recovered_10006df8((long)&local_2a8,(long)local_d0,local_c8);
                if (uVar6 == '\0') break;
                pbVar15 = local_1f8 + (long)local_40 + (long)local_58;
                if (local_38 == (byte *)0x0) {
                  pbVar15 = (byte *)0x0;
                }
                local_138 = 0xf;
                uVar6 = recovered_10006e32((uint)*local_d0,(long)(local_1f8 + (long)local_40),
                                           (long)(local_d0 + 1),(long)pbVar15,(ulong)local_68,4);
                pbVar15 = local_38 + 1;
                local_40 = (uint *)((long)local_40 + (long)local_68);
              } while (uVar6 != '\0');
              local_c8 = 0;
              recovered_10002cf7(local_d0);
              goto LAB_10004a75;
            }
            local_138 = 0x10;
            recovered_10007a18(&local_e8,(ulong)local_68);
            local_138 = 0x11;
            recovered_10007a18(&local_b8,(ulong)local_68);
            local_60 = 0;
            local_1c0 = 0;
            local_38 = (byte *)0x0;
            while( true ) {
              if (local_1b8 >> 0x20 <= local_1c0) {
                pbVar15 = (byte *)CONCAT71((int7)((ulong)pbVar15 >> 8),local_278 == pbStack_288);
                goto switchD_10004bdd_caseD_1;
              }
              local_138 = 0x12;
              uVar6 = recovered_10006df8((long)&local_2a8,(long)local_d0,local_c8);
              if (uVar6 == '\0') break;
              if (((ulong)local_38 & 1) == 0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                pbVar15 = local_e8;
              }
              local_138 = 0x13;
              uVar6 = recovered_10006e32((uint)*local_d0,(long)local_b8,(long)(local_d0 + 1),
                                         (long)pbVar15,(ulong)local_68,local_1d8);
              if (uVar6 == '\0') break;
              pbVar15 = (byte *)0x0;
              if (6 < uStack_1b0 >> 0x20) goto switchD_10004bdd_caseD_1;
              local_38 = local_b8;
              local_40 = (uint *)(local_1b8 & 0xffffffff);
              local_48 = local_1f8;
              switch((uintptr_t)(uStack_1b0 >> 0x20)) {
              case 0:
                if ((int)uStack_1b0 == 8) {
                  lVar12 = local_60 * (long)local_40;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    bVar16 = local_b8[(long)puVar17];
                    local_1f8[(long)puVar17 * 4 + lVar12] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] =
                         -(~(byte)local_78 & 1 | (uint)local_88 != bVar16);
                  }
                }
                else {
                  lVar12 = local_60 * (long)local_40;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    uVar8 = (uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 2) << 8 |
                                          *(ushort *)(local_b8 + (long)puVar17 * 2) >> 8);
                    bVar16 = (byte)((ulong)(uVar8 * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] =
                         -(~(byte)local_78 & 1 | uVar8 != (uint)local_88);
                  }
                }
                break;
              default:
                goto switchD_10004bdd_caseD_1;
              case 2:
                if ((int)uStack_1b0 == 8) {
                  lVar12 = local_60 * (long)local_40;
                  local_38 = local_b8 + 2;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    bVar16 = 0xff;
                    if (((PF_PART1(local_78, 1) == 1) && (PF_PART4(local_88, 4) == local_38[-2])) &&
                       ((uint)uStack_80 == local_38[-1])) {
                      bVar16 = -(PF_PART4(uStack_80, 4) != *local_38);
                    }
                    local_1f8[(long)puVar17 * 4 + lVar12] = local_38[-2];
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] = local_38[-1];
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] = *local_38;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] = bVar16;
                    local_38 = local_38 + 3;
                  }
                }
                else {
                  lVar12 = local_60 * (long)local_40;
                  local_38 = local_b8 + 5;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    uVar8 = (uint)(ushort)(*(ushort *)(local_38 + -5) << 8 |
                                          *(ushort *)(local_38 + -5) >> 8);
                    uVar10 = (uint)(ushort)(*(ushort *)(local_38 + -3) << 8 |
                                           *(ushort *)(local_38 + -3) >> 8);
                    uVar9 = (uint)(ushort)(*(ushort *)(local_38 + -1) << 8 |
                                          *(ushort *)(local_38 + -1) >> 8);
                    local_1f8[(long)puVar17 * 4 + lVar12] =
                         (byte)((ulong)(uVar8 * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] =
                         (byte)((ulong)(uVar10 * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] =
                         (byte)((ulong)(uVar9 * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] =
                         -((uVar9 != PF_PART4(uStack_80, 4) || uVar10 != (uint)uStack_80) |
                          ~PF_PART1(local_78, 1) & 1 | uVar8 != PF_PART4(local_88, 4));
                    pbVar15 = local_38 + 6;
                    local_38 = pbVar15;
                  }
                }
                break;
              case 3:
                local_148 = (byte *)(uStack_98 >> 2);
                local_48 = local_1f8 + local_60 * (long)local_40;
                for (local_58 = (uint *)0x0; local_40 != local_58;
                    local_58 = (uint *)((long)local_58 + 1)) {
                  if (local_148 <= (byte *)(ulong)local_38[(long)local_58]) goto LAB_1000507a;
                  local_138 = 0x14;
                  recovered_10000af2(local_48,(void *)((ulong)local_38[(long)local_58] * 4 +
                                                      (long)local_a0),4);
                  local_48 = local_48 + 4;
                }
                break;
              case 4:
                if ((int)uStack_1b0 == 8) {
                  lVar12 = local_60 * (long)local_40;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    bVar16 = local_b8[(long)puVar17 * 2];
                    local_1f8[(long)puVar17 * 4 + lVar12] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] = local_b8[(long)puVar17 * 2];
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] = local_b8[(long)puVar17 * 2 + 1];
                  }
                }
                else {
                  lVar12 = local_60 * (long)local_40;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    uVar3 = *(ushort *)(local_b8 + (long)puVar17 * 4 + 2);
                    bVar16 = (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 4)
                                                           << 8 | *(ushort *)
                                                                   (local_b8 + (long)puVar17 * 4) >>
                                                                  8) * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] = bVar16;
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] =
                         (byte)((ulong)((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * 0xff + 0x7fff) /
                               0xffff);
                  }
                }
                break;
              case 6:
                if ((int)uStack_1b0 == 8) {
                  local_138 = 0x15;
                  recovered_10000af2(local_1f8 + local_1c0 * (long)local_40 * 4,local_b8,
                                     (long)local_40 << 2);
                }
                else {
                  lVar12 = local_60 * (long)local_40;
                  for (puVar17 = (uint *)0x0; local_40 != puVar17;
                      puVar17 = (uint *)((long)puVar17 + 1)) {
                    local_1f8[(long)puVar17 * 4 + lVar12] =
                         (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 8) <<
                                                       8 | *(ushort *)(local_b8 + (long)puVar17 * 8)
                                                           >> 8) * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 1] =
                         (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 8 + 2)
                                                       << 8 | *(ushort *)
                                                               (local_b8 + (long)puVar17 * 8 + 2) >>
                                                              8) * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 2] =
                         (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 8 + 4)
                                                       << 8 | *(ushort *)
                                                               (local_b8 + (long)puVar17 * 8 + 4) >>
                                                              8) * 0xff + 0x7fff) / 0xffff);
                    local_1f8[(long)puVar17 * 4 + lVar12 + 3] =
                         (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)puVar17 * 8 + 6)
                                                       << 8 | *(ushort *)
                                                               (local_b8 + (long)puVar17 * 8 + 6) >>
                                                              8) * 0xff + 0x7fff) / 0xffff);
                  }
                }
              }
              uVar5 = uStack_d8;
              uVar4 = local_e0;
              pbVar1 = local_e8;
              local_e8 = local_b8;
              local_b8 = pbVar1;
              local_e0 = local_b0;
              uStack_d8 = uStack_a8;
              local_b0 = uVar4;
              uStack_a8 = uVar5;
              local_1c0 = local_1c0 + 1;
              local_60 = local_60 + 4;
              local_38 = (byte *)CONCAT71((int7)((ulong)pbVar1 >> 8),1);
            }
LAB_1000507a:
            pbVar15 = (byte *)0x0;
switchD_10004bdd_caseD_1:
            local_b0 = 0;
            recovered_10002cf7(local_b8);
            local_e0 = 0;
            recovered_10002cf7(local_e8);
LAB_100050b7:
            local_c8 = 0;
            recovered_10002cf7(local_d0);
            recovered_10007090(&local_2a8);
            puVar21 = local_1e0;
            if ((char)pbVar15 != '\0') goto LAB_100050e6;
          }
        }
LAB_10004a81:
        uVar8 = 0;
      }
      else {
        uVar13 = (local_1b8 >> 0x20) * (long)pbVar15;
        if (uVar13 >> 0x3e != 0) goto LAB_10004a81;
        local_2a8 = (void *)((ulong)local_2a8 & 0xffffffffffffff00);
        local_138 = 0x16;
        recovered_10005f0c((long *)&local_1f8,uVar13 * 4,(uchar *)&local_2a8);
        local_2a8 = (void *)0x0;
        pvStack_2a0 = (void *)0x0;
        uStack_298 = 0;
        uStack_290 = 0;
        pbStack_288 = (byte *)0x0;
        uStack_280 = 0;
        local_278 = (byte *)0x0;
        local_138 = 0x17;
        uVar6 = recovered_10005ff0((long *)&local_2a8,(long *)&local_160);
        puVar21 = local_1e0;
        if (uVar6 == '\0') goto LAB_10004a75;
        uVar14 = recovered_10005fc8((long)&local_1b8);
        local_230 = (ulong)((uint)uVar14 + 7 >> 3);
        if ((uint)uVar14 < 8) {
          local_230 = 1;
        }
        for (lVar12 = 0; pbVar15 = local_278, pbVar1 = pbStack_288, lVar12 != 7; lVar12 = lVar12 + 1
            ) {
          local_4c = (&DAT_10007ddc)[lVar12];
          local_6c = (&DAT_10007df8)[lVar12];
          pbVar15 = (byte *)0x0;
          if (local_4c < (uint)local_1b8) {
            pbVar15 = (byte *)(ulong)(((uint)local_1b8 + ~local_4c) / (uint)(&DAT_10007e14)[lVar12]
                                     + 1);
          }
          if (local_6c < PF_PART4(local_1b8, 4)) {
            iVar7 = (PF_PART4(local_1b8, 4) + ~local_6c) / (uint)(&DAT_10007e30)[lVar12] + 1;
            if (((int)pbVar15 != 0) && (iVar7 != 0)) {
              local_38 = (byte *)CONCAT44(PF_PART4(local_38, 4),iVar7);
              local_40 = (uint *)CONCAT44(PF_PART4(local_40, 4),(&DAT_10007e14)[lVar12]);
              local_228 = lVar12;
              local_1fc = (&DAT_10007e30)[lVar12];
              uVar14 = recovered_10005fc8((long)&local_1b8);
              local_1c8 = (uVar14 & 0xffffffff) * (long)pbVar15 + 7 >> 3;
              local_138 = 0x18;
              local_148 = pbVar15;
              recovered_10007a18(&local_d0,local_1c8 + 1);
              local_138 = 0x19;
              recovered_10007a18(&local_e8,local_1c8);
              local_138 = 0x1a;
              recovered_10007a18(&local_b8,local_1c8);
              local_208 = (ulong)local_38 & 0xffffffff;
              local_1c0 = (long)local_148 * 6;
              local_60 = (long)local_148 * 3;
              local_38 = (byte *)0x0;
              for (local_1d0 = 0; local_1d0 < local_208; local_1d0 = local_1d0 + 1) {
                local_138 = 0x1b;
                uVar6 = recovered_10006df8((long)&local_2a8,(long)local_d0,local_c8);
                if (uVar6 == '\0') break;
                if (((ulong)local_38 & 1) == 0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  pbVar15 = local_e8;
                }
                local_138 = 0x1c;
                uVar6 = recovered_10006e32((uint)*local_d0,(long)local_b8,(long)(local_d0 + 1),
                                           (long)pbVar15,local_1c8,local_230);
                if ((uVar6 == '\0') || (6 < uStack_1b0 >> 0x20)) break;
                local_58 = (uint *)(local_1f8 +
                                   (ulong)(local_1fc * (int)local_1d0 + local_6c) *
                                   (local_1b8 & 0xffffffff) * 4);
                switch((uintptr_t)(uStack_1b0 >> 0x20)) {
                case 0:
                  if ((int)uStack_1b0 == 8) {
                    uVar8 = local_4c;
                    for (pbVar15 = (byte *)0x0; local_148 != pbVar15; pbVar15 = pbVar15 + 1) {
                      bVar16 = local_b8[(long)pbVar15];
                      uVar13 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar13) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) =
                           -(~(byte)local_78 & 1 | (uint)local_88 != bVar16);
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  else {
                    uVar8 = local_4c;
                    for (pbVar15 = (byte *)0x0; local_148 != pbVar15; pbVar15 = pbVar15 + 1) {
                      uVar9 = (uint)(ushort)(*(ushort *)(local_b8 + (long)pbVar15 * 2) << 8 |
                                            *(ushort *)(local_b8 + (long)pbVar15 * 2) >> 8);
                      bVar16 = (byte)((ulong)(uVar9 * 0xff + 0x7fff) / 0xffff);
                      uVar13 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar13) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) =
                           -(~(byte)local_78 & 1 | uVar9 != (uint)local_88);
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  break;
                default:
                  goto switchD_100043eb_caseD_1;
                case 2:
                  if ((int)uStack_1b0 == 8) {
                    uVar8 = local_4c;
                    for (lVar12 = 0; local_60 != lVar12; lVar12 = lVar12 + 3) {
                      bVar16 = 0xff;
                      if (((PF_PART1(local_78, 1) == 1) && (PF_PART4(local_88, 4) == local_b8[lVar12])) &&
                         ((uint)uStack_80 == local_b8[lVar12 + 1])) {
                        bVar16 = -(PF_PART4(uStack_80, 4) != local_b8[lVar12 + 2]);
                      }
                      uVar13 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar13) = local_b8[lVar12];
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) = local_b8[lVar12 + 1];
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) = local_b8[lVar12 + 2];
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) = bVar16;
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  else {
                    uVar8 = local_4c;
                    for (uVar13 = 0; local_1c0 != uVar13; uVar13 = uVar13 + 6) {
                      uVar9 = (uint)(ushort)(*(ushort *)(local_b8 + uVar13) << 8 |
                                            *(ushort *)(local_b8 + uVar13) >> 8);
                      uVar18 = (uint)(ushort)(*(ushort *)(local_b8 + uVar13 + 2) << 8 |
                                             *(ushort *)(local_b8 + uVar13 + 2) >> 8);
                      uVar10 = (uint)(ushort)(*(ushort *)(local_b8 + uVar13 + 4) << 8 |
                                             *(ushort *)(local_b8 + uVar13 + 4) >> 8);
                      uVar19 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar19) = (byte)((ulong)(uVar9 * 0xff + 0x7fff) / 0xffff)
                      ;
                      *(byte *)((long)local_58 + uVar19 * 4 + 1) =
                           (byte)((ulong)(uVar18 * 0xff + 0x7fff) / 0xffff);
                      *(byte *)((long)local_58 + uVar19 * 4 + 2) =
                           (byte)((ulong)(uVar10 * 0xff + 0x7fff) / 0xffff);
                      *(byte *)((long)local_58 + uVar19 * 4 + 3) =
                           -((uVar10 != PF_PART4(uStack_80, 4) || uVar18 != (uint)uStack_80) |
                            ~PF_PART1(local_78, 1) & 1 | uVar9 != PF_PART4(local_88, 4));
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  break;
                case 3:
                  local_1d8 = uStack_98 >> 2;
                  local_38 = local_b8;
                  pbVar15 = (byte *)0x0;
                  uVar8 = local_4c;
                  while (local_148 != pbVar15) {
                    if (local_1d8 <= local_38[(long)pbVar15]) goto switchD_100043eb_caseD_1;
                    local_68 = (byte *)CONCAT44(PF_PART4(local_68, 4),uVar8);
                    local_138 = 0x1d;
                    local_48 = pbVar15;
                    recovered_10000af2(local_58 + uVar8,
                                       (void *)((ulong)local_38[(long)pbVar15] * 4 + (long)local_a0)
                                       ,4);
                    uVar8 = (int)local_68 + (int)local_40;
                    pbVar15 = local_48 + 1;
                  }
                  break;
                case 4:
                  if ((int)uStack_1b0 == 8) {
                    uVar8 = local_4c;
                    for (pbVar15 = (byte *)0x0; local_148 != pbVar15; pbVar15 = pbVar15 + 1) {
                      uVar13 = (ulong)uVar8;
                      bVar16 = local_b8[(long)pbVar15 * 2];
                      *(byte *)(local_58 + uVar13) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) = local_b8[(long)pbVar15 * 2];
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) = local_b8[(long)pbVar15 * 2 + 1];
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  else {
                    uVar8 = local_4c;
                    for (pbVar15 = (byte *)0x0; local_148 != pbVar15; pbVar15 = pbVar15 + 1) {
                      uVar3 = *(ushort *)(local_b8 + (long)pbVar15 * 4 + 2);
                      bVar16 = (byte)((ulong)((uint)(ushort)(*(ushort *)
                                                              (local_b8 + (long)pbVar15 * 4) << 8 |
                                                            *(ushort *)
                                                             (local_b8 + (long)pbVar15 * 4) >> 8) *
                                              0xff + 0x7fff) / 0xffff);
                      uVar13 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar13) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) = bVar16;
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) =
                           (byte)((ulong)((uint)(ushort)(uVar3 << 8 | uVar3 >> 8) * 0xff + 0x7fff) /
                                 0xffff);
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                  break;
                case 6:
                  if ((int)uStack_1b0 == 8) {
                    pbVar15 = local_148;
                    local_38 = local_b8;
                    uVar8 = local_4c;
                    while (pbVar15 != (byte *)0x0) {
                      local_68 = (byte *)CONCAT44(PF_PART4(local_68, 4),uVar8);
                      local_138 = 0x1e;
                      local_48 = pbVar15 + -1;
                      recovered_10000af2(local_58 + uVar8,local_38,4);
                      uVar8 = (int)local_68 + (int)local_40;
                      local_38 = local_38 + 4;
                      pbVar15 = local_48;
                    }
                  }
                  else {
                    uVar8 = local_4c;
                    for (pbVar15 = (byte *)0x0; local_148 != pbVar15; pbVar15 = pbVar15 + 1) {
                      uVar13 = (ulong)uVar8;
                      *(byte *)(local_58 + uVar13) =
                           (byte)((ulong)((uint)(ushort)(*(ushort *)(local_b8 + (long)pbVar15 * 8)
                                                         << 8 | *(ushort *)
                                                                 (local_b8 + (long)pbVar15 * 8) >> 8
                                                        ) * 0xff + 0x7fff) / 0xffff);
                      *(byte *)((long)local_58 + uVar13 * 4 + 1) =
                           (byte)((ulong)((uint)(ushort)(*(ushort *)
                                                          (local_b8 + (long)pbVar15 * 8 + 2) << 8 |
                                                        *(ushort *)
                                                         (local_b8 + (long)pbVar15 * 8 + 2) >> 8) *
                                          0xff + 0x7fff) / 0xffff);
                      *(byte *)((long)local_58 + uVar13 * 4 + 2) =
                           (byte)((ulong)((uint)(ushort)(*(ushort *)
                                                          (local_b8 + (long)pbVar15 * 8 + 4) << 8 |
                                                        *(ushort *)
                                                         (local_b8 + (long)pbVar15 * 8 + 4) >> 8) *
                                          0xff + 0x7fff) / 0xffff);
                      *(byte *)((long)local_58 + uVar13 * 4 + 3) =
                           (byte)((ulong)((uint)(ushort)(*(ushort *)
                                                          (local_b8 + (long)pbVar15 * 8 + 6) << 8 |
                                                        *(ushort *)
                                                         (local_b8 + (long)pbVar15 * 8 + 6) >> 8) *
                                          0xff + 0x7fff) / 0xffff);
                      uVar8 = uVar8 + (int)local_40;
                    }
                  }
                }
                pbVar1 = local_b8;
                uVar5 = uStack_d8;
                uVar4 = local_e0;
                pbVar15 = local_e8;
                local_e8 = local_b8;
                local_b8 = pbVar15;
                local_e0 = local_b0;
                uStack_d8 = uStack_a8;
                local_b0 = uVar4;
                uStack_a8 = uVar5;
                local_38 = (byte *)CONCAT71((int7)((ulong)pbVar1 >> 8),1);
              }
switchD_100043eb_caseD_1:
              local_b0 = 0;
              recovered_10002cf7(local_b8);
              local_e0 = 0;
              recovered_10002cf7(local_e8);
              local_c8 = 0;
              recovered_10002cf7(local_d0);
              lVar12 = local_228;
              puVar21 = local_1e0;
              if (local_1d0 < local_208) goto LAB_10004a75;
            }
          }
        }
        recovered_10007090(&local_2a8);
        if (pbVar15 != pbVar1) goto LAB_10004a81;
LAB_100050e6:
        *puVar21 = local_1b8;
        recovered_10005336(puVar21 + 1,(ulonglong *)&local_1f8);
        uVar8 = (uint)CONCAT71((int7)((ulong)pbVar15 >> 8),1);
      }
      uStack_1f0 = 0;
      recovered_10002cf7(local_1f8);
LAB_10004a97:
      uStack_98 = 0;
      recovered_10002cf7(local_a0);
    }
  }
LAB_10003a94:
  recovered_10005378(&local_1b8);
  local_218 = (byte *)0x0;
  recovered_10002cf7(local_220);
LAB_10003ab4:
  recovered_100030e1(&local_140);
  return uVar8;
}

#undef DAT_10007bb0
#undef DAT_10007ddc
#undef DAT_10007df8
#undef DAT_10007e14
#undef DAT_10007e30
#undef DAT_10008046
#undef DAT_1000804b
#undef DAT_10008050
#undef DAT_10008055
#undef DAT_1000805a
#undef DAT_100080b4
#undef LAB_10005120
#undef local_1a8
#undef local_198
#undef pbStack_158
#undef local_190
#undef local_180
#undef local_170
#undef local_160
#undef local_150
#undef local_148
#undef local_140
#undef local_138
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef uStack_d8
#undef local_100
#undef local_e8
#undef local_e0
#undef local_d0
#undef local_c8
#undef uStack_a8
#undef local_b8
#undef local_b0
#undef uStack_98
#undef local_a0
#undef local_90
#undef local_88
#undef uStack_80
#undef local_78
#undef local_6c
#undef local_68
#undef local_60
#undef local_58
#undef local_4c
#undef local_48
#undef local_40
#undef local_38
#undef pvStack_2a0
#undef uStack_298
#undef uStack_290
#undef pbStack_288
#undef uStack_280
#undef uStack_270
#undef pvStack_250
#undef pbStack_240
#undef local_2a8
#undef local_278
#undef uStack_1f0
#undef local_268
#undef local_248
#undef local_230
#undef local_228
#undef local_220
#undef local_218
#undef local_208
#undef uStack_1b0
#undef local_1fc
#undef local_1f8
#undef uStack_1a0
#undef local_1e8
#undef local_1e0
#undef local_1d8
#undef uStack_188
#undef local_1d0
#undef local_1c8
#undef puStack_178
#undef local_1c0
#undef local_1b8
#undef uStack_168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005310
 */

ulonglong * recovered_10005310(ulonglong *param_1,ulonglong *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10005336(param_1 + 1,param_2 + 1);
  return param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_10005336(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002cf7((void *)*param_1);
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

void recovered_10005378(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 0x60) = 0;
  recovered_10002cf7(*(void **)((long)object + 0x58));
  recovered_10007a2e((void *)((long)object + 0x40));
  recovered_10007a2e((void *)((long)object + 0x28));
  return;
}


#undef DAT_1000805f
#define DAT_1000805f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x602U)))
#undef DAT_100080f4
#define DAT_100080f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x697U)))
#undef LAB_10005584
#define LAB_10005584 (*(uint8_t *)(0x10005584U))
#define local_c0 (*(ulong *)(frame + 24))
#define local_b8 (*(undefined4 *)(frame + 32))
#define local_a0 (*(code * *)(frame + 56))
#define local_98 (*(undefined * *)(frame + 64))
#define local_90 (*(undefined1 * *)(frame + 72))
#define auStack_c8 (*(undefined1 (*)[8])(frame + 16))
#define local_88 (*(undefined1 * *)(frame + 80))
#define local_80 (*(undefined1 * *)(frame + 88))
#define local_68 (*(ulong * *)(frame + 112))
#define local_60 (*(void * *)(frame + 120))
#define local_48 (*(undefined8 *)(frame + 144))
#define local_40 (*(void * *)(frame + 152))
#define local_38 (*(undefined8 *)(frame + 160))
#define pvStack_58 (*(void * *)(frame + 128))
#define uStack_50 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053aa
 */

uint recovered_100053aa(long param_1,ulong *param_2)

{
  unsigned char frame[248] = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *stream;
  int extraout_var = 0;
  ulonglong uVar4;
  undefined4 extraout_var_00 = 0;

  local_60 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  recovered_10005310(param_2,(ulonglong *)&local_60);
  uStack_50 = 0;
  recovered_10002cf7(pvStack_58);
  local_80 = auStack_c8;
  local_60 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  local_a0 = recovered_10002c80;
  local_98 = &DAT_100080f4;
  local_88 = &LAB_10005584;
  local_90 = (undefined1 *)((long)(uintptr_t)(frame + 216) + -8);
  recovered_100030ca(&local_c0);
  if (param_1 != 0) {
    local_b8 = 1;
    local_68 = param_2;
    stream = recovered_10002027((char *)param_1,&DAT_1000805f);
    if (stream != (void *)0x0) {
      local_b8 = 2;
      local_40 = stream;
      iVar1 = recovered_1000267e(stream,0,2);
      if (iVar1 == 0) {
        local_b8 = 3;
        iVar1 = recovered_100026f7(local_40);
        if (extraout_var < 0) goto LAB_10005481;
        local_b8 = 4;
        local_38 = CONCAT44(extraout_var,iVar1);
        iVar1 = recovered_1000267e(local_40,0,0);
        if (iVar1 != 0) goto LAB_10005481;
        local_b8 = 5;
        uVar4 = recovered_10005f80((long *)&local_60,local_38);
        if (pvStack_58 == (void *)0x0) {
          uVar3 = (undefined4)CONCAT71((int7)(uVar4 >> 8),1);
        }
        else {
          local_b8 = 6;
          uVar2 = recovered_100023ed(local_60,1,(uint)pvStack_58,local_40);
          uVar3 = (undefined4)
                  CONCAT71((int7)((ulong)CONCAT44(extraout_var_00,uVar2) >> 8),
                           (void *)CONCAT44(extraout_var_00,uVar2) == pvStack_58);
        }
        local_38 = CONCAT44(PF_PART4(local_38, 4),uVar3);
      }
      else {
LAB_10005481:
        local_38 = local_38 & 0xffffffff00000000;
      }
      local_b8 = 7;
      iVar1 = recovered_100023b3(local_40);
      if (((byte)local_38 & iVar1 == 0) != 0) {
        local_b8 = 8;
        uVar2 = recovered_100038d4((long)local_60,(long)pvStack_58,local_68);
        goto LAB_100054c2;
      }
    }
  }
  uVar2 = 0;
LAB_100054c2:
  pvStack_58 = (void *)0x0;
  recovered_10002cf7(local_60);
  recovered_100030e1(&local_c0);
  return uVar2;
}

#undef DAT_1000805f
#undef DAT_100080f4
#undef LAB_10005584
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef auStack_c8
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_48
#undef local_40
#undef local_38
#undef pvStack_58
#undef uStack_50

#undef DAT_10008043
#define DAT_10008043 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e6U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6abU)))
#undef LAB_10005bb0
#define LAB_10005bb0 (*(uint8_t *)(0x10005bb0U))
#define uStack_78 (*(ulong *)(frame + 160))
#define uStack_60 (*(ulong *)(frame + 184))
#define local_108 (*(long *)(frame + 16))
#define local_100 (*(ulong *)(frame + 24))
#define local_f8 (*(undefined4 *)(frame + 32))
#define local_e0 (*(code * *)(frame + 56))
#define local_d8 (*(undefined * *)(frame + 64))
#define local_d0 (*(undefined1 * *)(frame + 72))
#define local_c8 (*(undefined1 * *)(frame + 80))
#define local_c0 (*(undefined1 * *)(frame + 88))
#define local_a8 (*(uint * *)(frame + 112))
#define local_a0 (*(ulong *)(frame + 120))
#define local_98 (*(long *)(frame + 128))
#define local_90 (*(ulong *)(frame + 136))
#define local_88 (*(ulong *)(frame + 144))
#define local_80 (*(undefined8 *)(frame + 152))
#define local_70 (*(undefined8 *)(frame + 168))
#define local_68 (*(void * *)(frame + 176))
#define local_58 (*(undefined8 *)(frame + 192))
#define local_50 (*(ulong *)(frame + 200))
#define local_48 (*(ulong *)(frame + 208))
#define local_40 (*(ulong *)(frame + 216))
#define local_31 (*(uchar *)(frame + 231))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e8
 */

ulong recovered_100055e8(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[312] = {0};

  uint uVar1;
  uint uVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  uint *stream;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  void *data;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  char cVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;

  local_d0 = (undefined1 *)((long)(uintptr_t)(frame + 280) + -8);
  local_c0 = (undefined1 *)&local_108;
  local_e0 = recovered_10002c80;
  local_d8 = &DAT_10008108;
  local_c8 = &LAB_10005bb0;
  recovered_100030ca(&local_100);
  if ((0 < (int)param_4 && 0 < (int)param_3) && (param_2 != 0 && param_1 != 0)) {
    local_f8 = 0xffffffff;
    stream = recovered_10002027((char *)param_1,&DAT_10008043);
    if (stream != (uint *)0x0) {
      local_f8 = 0xffffffff;
      uVar3 = recovered_10005c4c(stream,0x10007bb0,8);
      if (uVar3 == '\0') {
LAB_1000592c:
        bVar14 = 0;
      }
      else {
        local_80 = (void *)CONCAT17((char)(param_4 & 0xffffffff),
                                    CONCAT16((char)((param_4 & 0xffffffff) >> 8),
                                             CONCAT15((char)(param_4 >> 0x10),
                                                      CONCAT14((char)(param_4 >> 0x18),
                                                               CONCAT13((char)(param_3 & 0xffffffff)
                                                                        ,CONCAT12((char)((param_3 &
                                                                                         0xffffffff)
                                                                                        >> 8),
                                                                                  CONCAT11((char)(
                                                  param_3 >> 0x10),(char)(param_3 >> 0x18))))))));
        uStack_78 = CONCAT35(PF_PART3(uStack_78, 5),0x608);
        local_f8 = 0xffffffff;
        uVar4 = recovered_10005c7b(stream,0x10008046,(long)&local_80,0xd);
        if ((char)uVar4 == '\0') goto LAB_1000592c;
        local_80 = (void *)0x0;
        uStack_78 = 0;
        local_70 = 0;
        local_88 = param_3 & 0xffffffff;
        local_98 = local_88 * 4 + 1;
        local_f8 = 1;
        local_a8 = stream;
        local_a0 = param_2;
        local_90 = param_4 & 0xffffffff;
        recovered_10005f80(&local_80,local_98 * (param_4 & 0xffffffff));
        uVar9 = local_88 * 4;
        local_108 = local_88 * -4;
        uVar13 = 1;
        uVar7 = 0;
        uVar16 = local_a0;
        lVar17 = local_98;
        uVar18 = local_90;
        uVar19 = local_a0;
        local_88 = uVar9;
        while (uVar7 != uVar18) {
          data = (void *)(uVar7 * uVar9 + uVar19);
          lVar6 = local_108 + (long)data;
          if (uVar7 == 0) {
            lVar6 = 0;
          }
          uVar8 = -(ulong)(lVar6 == 0);
          uVar20 = 0;
          uVar11 = 0;
          for (uVar12 = 0; uVar9 != uVar12; uVar12 = uVar12 + 1) {
            bVar14 = *(byte *)(uVar16 + uVar12);
            uVar4 = 0x100 - bVar14;
            if (-1 < (char)bVar14) {
              uVar4 = (uint)bVar14;
            }
            if (uVar12 < 4) {
              cVar15 = '\0';
            }
            else {
              cVar15 = *(char *)((uVar16 - 4) + uVar12);
            }
            bVar10 = bVar14 - cVar15;
            uVar1 = 0x100 - bVar10;
            if (-1 < (char)bVar10) {
              uVar1 = (uint)bVar10;
            }
            if (lVar6 != 0) {
              bVar14 = bVar14 - *(char *)(lVar6 + uVar12);
              uVar2 = 0x100 - bVar14;
              if (-1 < (char)bVar14) {
                uVar2 = (uint)bVar14;
              }
              uVar8 = uVar8 + uVar2;
            }
            uVar11 = uVar11 + uVar4;
            uVar20 = uVar20 + uVar1;
          }
          bVar21 = uVar20 < uVar11;
          if (bVar21) {
            uVar11 = uVar20;
          }
          cVar15 = '\x02';
          if (uVar11 <= uVar8) {
            cVar15 = bVar21;
          }
          if (lVar6 == 0) {
            cVar15 = bVar21;
          }
          *(char *)((long)local_80 + uVar7 * lVar17) = cVar15;
          local_50 = uVar13;
          local_48 = uVar7;
          local_40 = uVar16;
          if (cVar15 == '\x02') {
            if (lVar6 == 0) goto LAB_100058de;
            for (uVar7 = 0; uVar9 != uVar7; uVar7 = uVar7 + 1) {
              *(char *)((long)local_80 + uVar7 + uVar13) =
                   *(char *)(uVar16 + uVar7) - *(char *)(lVar6 + uVar7);
            }
          }
          else if (cVar15 == '\x01') {
            for (uVar7 = 0; uVar9 != uVar7; uVar7 = uVar7 + 1) {
              if (uVar7 < 4) {
                cVar15 = '\0';
              }
              else {
                cVar15 = *(char *)((uVar16 - 4) + uVar7);
              }
              *(char *)((long)local_80 + uVar7 + uVar13) = *(char *)(uVar16 + uVar7) - cVar15;
            }
          }
          else {
LAB_100058de:
            local_f8 = 2;
            recovered_10000af2((void *)((long)local_80 + uVar7 * lVar17 + 1),data,uVar9);
            uVar9 = local_88;
            lVar17 = local_98;
            uVar18 = local_90;
            uVar19 = local_a0;
          }
          uVar16 = local_40 + uVar9;
          uVar13 = local_50 + lVar17;
          uVar7 = local_48 + 1;
        }
        local_68 = (void *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_31 = 'x';
        local_f8 = 3;
        recovered_100072dc((long *)&local_68,&local_31);
        local_31 = '\x01';
        local_f8 = 4;
        recovered_100072dc((long *)&local_68,&local_31);
        local_48 = 0;
        while( true ) {
          uVar13 = uStack_78 - local_48;
          if (uStack_78 < local_48 || uVar13 == 0) break;
          if (0xfffe < uVar13) {
            uVar13 = 0xffff;
          }
          local_50 = uVar13 + local_48;
          local_31 = local_50 == uStack_78;
          local_f8 = 5;
          local_40 = uVar13;
          recovered_100072dc((long *)&local_68,&local_31);
          local_31 = (uchar)local_40;
          local_f8 = 6;
          recovered_100072dc((long *)&local_68,&local_31);
          local_31 = (uchar)(local_40 >> 8);
          local_f8 = 7;
          recovered_100072dc((long *)&local_68,&local_31);
          uVar4 = (uint)local_40 ^ 0xffff;
          local_40 = (ulong)uVar4;
          local_31 = (uchar)uVar4;
          local_f8 = 8;
          recovered_100072dc((long *)&local_68,&local_31);
          local_31 = (uchar)(local_40 >> 8);
          local_f8 = 9;
          recovered_100072dc((long *)&local_68,&local_31);
          local_f8 = 10;
          recovered_10005de0((long *)&local_68,(long)local_68 + uStack_60,
                             (uchar *)(local_48 + (long)local_80),
                             (uchar *)((long)local_80 + local_50));
          local_48 = local_50;
        }
        uVar4 = recovered_1000726e((long)local_80,uStack_78);
        local_40 = CONCAT44(PF_PART4(local_40, 4),uVar4);
        local_48 = uStack_60;
        local_f8 = 0xb;
        recovered_10005f80((long *)&local_68,uStack_60 + 4);
        *(uint *)((long)local_68 + local_48) =
             (uint)local_40 >> 0x18 | ((uint)local_40 & 0xff0000) >> 8 |
             ((uint)local_40 & 0xff00) << 8 | (uint)local_40 << 0x18;
        uVar13 = 0;
        do {
          stream = local_a8;
          uVar9 = uStack_60 - uVar13;
          if (uStack_60 < uVar13 || uVar9 == 0) {
            uStack_60 = 0;
            recovered_10002cf7(local_68);
            uStack_78 = 0;
            recovered_10002cf7(local_80);
            local_f8 = 0xffffffff;
            uVar4 = recovered_10005c7b(stream,0x1000804b,0,0);
            bVar14 = (byte)uVar4;
            goto LAB_1000592e;
          }
          if (0x3ffff < uVar9) {
            uVar9 = 0x40000;
          }
          local_f8 = 0xc;
          local_48 = uVar9;
          local_40 = uVar13;
          uVar4 = recovered_10005c7b(local_a8,0x1000805a,(long)local_68 + uVar13,uVar9);
          uVar13 = local_40 + local_48;
        } while ((char)uVar4 != '\0');
        uStack_60 = 0;
        recovered_10002cf7(local_68);
        uStack_78 = 0;
        recovered_10002cf7(local_80);
        bVar14 = 0;
        stream = local_a8;
      }
LAB_1000592e:
      local_f8 = 0xffffffff;
      iVar5 = recovered_100023b3(stream);
      uVar13 = CONCAT71((int7)((ulong)stream >> 8),iVar5 == 0 & bVar14);
      goto LAB_10005949;
    }
  }
  uVar13 = 0;
LAB_10005949:
  recovered_100030e1(&local_100);
  return uVar13 & 0xffffffff;
}

#undef DAT_10008043
#undef DAT_10008108
#undef LAB_10005bb0
#undef uStack_78
#undef uStack_60
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
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_70
#undef local_68
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_31

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_10005c4c(uint *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_var = 0;

  if (param_3 == 0) {
    return '\x01';
  }
  uVar1 = recovered_10002565((void *)param_2,1,(uint)param_3,param_1);
  return CONCAT44(extraout_var,uVar1) == param_3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_2c (*(uint *)(frame + 20))
#define local_30 (*(uint *)(frame + 16))
uint recovered_10005c7b(uint *param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[96] = {0};

  uchar uVar1;
  uint uVar2;
  undefined7 extraout_var = 0;

  if (((ulong)param_4 >> 0x20 == 0) && (param_3 != 0 || param_4 == 0)) {
    uVar2 = (uint)param_4;
    local_30 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = recovered_10005d3e(0,param_2,4);
    if (param_4 != 0) {
      uVar2 = recovered_10005d3e(uVar2,param_3,param_4);
    }
    local_2c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = recovered_10005c4c(param_1,(long)&local_30,4);
    if (((uVar1 != '\0') && (uVar1 = recovered_10005c4c(param_1,param_2,4), uVar1 != '\0')) &&
       (uVar1 = recovered_10005c4c(param_1,param_3,param_4), uVar1 != '\0')) {
      uVar1 = recovered_10005c4c(param_1,(long)&local_2c,4);
      return (uint)CONCAT71(extraout_var,uVar1);
    }
  }
  return 0;
}

#undef local_2c
#undef local_30

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10005d34(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_020467b8 (*(char *)((uintptr_t)(pf_module_state+0x18cb)))
#define DAT_020467bc (*(uint32_t *)((uintptr_t)(pf_module_state+0x18cf)))
uint recovered_10005d3e(uint param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;

  if (DAT_020467b8 == '\0') {
    for (uVar2 = 0; uVar2 != 0x100; uVar2 = uVar2 + 1) {
      iVar4 = 8;
      uVar5 = uVar2 & 0xffffffff;
      while( true ) {
        bVar7 = iVar4 == 0;
        iVar4 = iVar4 + -1;
        if (bVar7) break;
        uVar6 = (uint)uVar5 >> 1;
        uVar1 = uVar6 ^ 0xedb88320;
        if ((uVar5 & 1) == 0) {
          uVar1 = uVar6;
        }
        uVar5 = (ulong)uVar1;
      }
      (&DAT_020467bc)[uVar2] = (uint)uVar5;
    }
    DAT_020467b8 = '\x01';
  }
  uVar1 = ~param_1;
  for (lVar3 = 0; param_3 != lVar3; lVar3 = lVar3 + 1) {
    uVar1 = uVar1 >> 8 ^ (&DAT_020467bc)[(byte)(*(byte *)(param_2 + lVar3) ^ (byte)uVar1)];
  }
  return ~uVar1;
}

#undef DAT_020467b8
#undef DAT_020467bc

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10005dc8(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10005de0(param_1,*param_1,param_2,param_3);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_10005de0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005ea6(param_1,uVar2);
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

uint recovered_10005ea6(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_10005ef8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002cf7((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10005ef8(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002cc3(param_1);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10005f0c(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulonglong extraout_RAX = 0;

  param_1[1] = 0;
  recovered_10005f1c(param_1,param_2,param_3);
  return extraout_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10005f1c(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_10005f80(param_1,param_2);
    return;
  }
  recovered_10005ea6(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10005f80(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong in_RAX;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10005ea6(param_1,param_2);
    in_RAX = param_1[1];
    while (in_RAX < param_2) {
      *(undefined1 *)(*param_1 + in_RAX) = 0;
      in_RAX = param_1[1] + 1;
      param_1[1] = in_RAX;
    }
  }
  return in_RAX;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d87c (*(uint8_t *)((uintptr_t)(pf_module_state+0x3ef)))
ulonglong recovered_10005fc8(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulonglong uVar2;

  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  if (((ulong)uVar1 < 7) && ((0x5dU >> (uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 8) * *(int *)(&DAT_0203d87c + (ulong)uVar1 * 4));
  }
  return uVar2;
}

#undef DAT_0203d87c

#undef DAT_10007d90
#define DAT_10007d90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_10008124
#define DAT_10008124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c7U)))
#undef DAT_10009730
#define DAT_10009730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cd3U)))
#undef DAT_10009740
#define DAT_10009740 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce3U)))
#undef DAT_10009750
#define DAT_10009750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cf3U)))
#undef DAT_10009760
#define DAT_10009760 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef DAT_10009770
#define DAT_10009770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d13U)))
#undef DAT_1000977d
#define DAT_1000977d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d20U)))
#undef DAT_10009790
#define DAT_10009790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d33U)))
#undef DAT_10009798
#define DAT_10009798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d3bU)))
#undef DAT_100097a8
#define DAT_100097a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4bU)))
#undef DAT_100097b8
#define DAT_100097b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef DAT_100097c8
#define DAT_100097c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d6bU)))
#undef DAT_100097d8
#define DAT_100097d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7bU)))
#undef DAT_100097e5
#define DAT_100097e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d88U)))
#undef DAT_100097f8
#define DAT_100097f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9bU)))
#undef LAB_10006c1e
#define LAB_10006c1e (*(uint8_t *)(0x10006c1eU))
#undef UNK_10009738
#define UNK_10009738 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cdbU)))
#undef UNK_10009748
#define UNK_10009748 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cebU)))
#undef UNK_10009758
#define UNK_10009758 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfbU)))
#undef UNK_10009768
#define UNK_10009768 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef UNK_10009778
#define UNK_10009778 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d1bU)))
#undef UNK_10009780
#define UNK_10009780 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d23U)))
#undef UNK_10009785
#define UNK_10009785 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d28U)))
#undef UNK_100097a0
#define UNK_100097a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d43U)))
#undef UNK_100097b0
#define UNK_100097b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d53U)))
#undef UNK_100097c0
#define UNK_100097c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d63U)))
#undef UNK_100097d0
#define UNK_100097d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d73U)))
#undef UNK_100097e0
#define UNK_100097e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d83U)))
#undef UNK_100097e8
#define UNK_100097e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d8bU)))
#undef UNK_100097ed
#define UNK_100097ed (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d90U)))
#undef _DAT_10009730
#define _DAT_10009730 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cd3U)))
#undef _DAT_10009740
#define _DAT_10009740 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ce3U)))
#undef _DAT_10009750
#define _DAT_10009750 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cf3U)))
#undef _DAT_10009760
#define _DAT_10009760 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d03U)))
#undef _DAT_10009770
#define _DAT_10009770 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d13U)))
#undef _DAT_1000977d
#define _DAT_1000977d (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d20U)))
#undef _DAT_10009798
#define _DAT_10009798 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d3bU)))
#undef _DAT_100097a8
#define _DAT_100097a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d4bU)))
#undef _DAT_100097b8
#define _DAT_100097b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d5bU)))
#undef _DAT_100097c8
#define _DAT_100097c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d6bU)))
#undef _DAT_100097d8
#define _DAT_100097d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d7bU)))
#undef _DAT_100097e5
#define _DAT_100097e5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d88U)))
#undef uRam0000000010009738
#define uRam0000000010009738 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cdbU)))
#undef uRam0000000010009748
#define uRam0000000010009748 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cebU)))
#undef uRam0000000010009758
#define uRam0000000010009758 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cfbU)))
#undef uRam0000000010009768
#define uRam0000000010009768 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d0bU)))
#undef uRam0000000010009778
#define uRam0000000010009778 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d1bU)))
#undef uRam0000000010009780
#define uRam0000000010009780 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d23U)))
#undef uRam0000000010009785
#define uRam0000000010009785 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d28U)))
#undef uRam00000000100097a0
#define uRam00000000100097a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d43U)))
#undef uRam00000000100097b0
#define uRam00000000100097b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d53U)))
#undef uRam00000000100097c0
#define uRam00000000100097c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d63U)))
#undef uRam00000000100097d0
#define uRam00000000100097d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d73U)))
#undef uRam00000000100097e0
#define uRam00000000100097e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d83U)))
#undef uRam00000000100097e8
#define uRam00000000100097e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d8bU)))
#undef uRam00000000100097ed
#define uRam00000000100097ed (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d90U)))
#define local_c0 (*(undefined1 * *)(frame + 552))
#define uStack_28b (*(undefined3 *)(frame + 93))
#define local_b8 (*(undefined1 * *)(frame + 560))
#define uStack_288 (*(undefined5 *)(frame + 96))
#define local_b0 (*(undefined1 * *)(frame + 568))
#define uStack_283 (*(undefined8 *)(frame + 101))
#define local_98 (*(uint *)(frame + 592))
#define local_90 (*(undefined8 *)(frame + 600))
#define local_80 (*(ulong *)(frame + 616))
#define local_78 (*(uint *)(frame + 624))
#define uStack_22b (*(undefined3 *)(frame + 189))
#define local_74 (*(uint *)(frame + 628))
#define uStack_228 (*(undefined5 *)(frame + 192))
#define local_70 (*(uint *)(frame + 632))
#define uStack_223 (*(undefined8 *)(frame + 197))
#define local_6c (*(uint *)(frame + 636))
#define local_68 (*(void * *)(frame + 640))
#define local_58 (*(undefined8 *)(frame + 656))
#define local_50 (*(long * *)(frame + 664))
#define uStack_1cb (*(undefined3 *)(frame + 285))
#define local_48 (*(long * *)(frame + 672))
#define uStack_1c8 (*(undefined5 *)(frame + 288))
#define local_3c (*(uint *)(frame + 684))
#define uStack_1c3 (*(undefined8 *)(frame + 293))
#define local_38 (*(uint *)(frame + 688))
#define local_34 (*(undefined4 *)(frame + 692))
#define uStack_1b0 (*(undefined8 *)(frame + 312))
#define uStack_1a0 (*(undefined8 *)(frame + 328))
#define uStack_190 (*(undefined8 *)(frame + 344))
#define uStack_180 (*(undefined8 *)(frame + 360))
#define uStack_16b (*(undefined3 *)(frame + 381))
#define uStack_168 (*(undefined5 *)(frame + 384))
#define uStack_163 (*(undefined8 *)(frame + 389))
#define uStack_154 (*(undefined4 *)(frame + 404))
#define uStack_120 (*(ulong *)(frame + 456))
#define uStack_104 (*(undefined4 *)(frame + 484))
#define uStack_94 (*(undefined4 *)(frame + 596))
#define plStack_60 (*(long * *)(frame + 648))
#define local_2d8 (*(ulong (*)[8])(frame + 16))
#define local_298 (*(void * *)(frame + 80))
#define local_290 (*(undefined5 *)(frame + 88))
#define local_278 (*(ulonglong (*)[8])(frame + 112))
#define local_238 (*(void * *)(frame + 176))
#define local_230 (*(undefined5 *)(frame + 184))
#define local_218 (*(ulonglong (*)[8])(frame + 208))
#define local_1d8 (*(void * *)(frame + 272))
#define local_1d0 (*(undefined5 *)(frame + 280))
#define local_1b8 (*(void * *)(frame + 304))
#define local_1a8 (*(undefined8 *)(frame + 320))
#define local_198 (*(undefined8 *)(frame + 336))
#define local_188 (*(undefined8 *)(frame + 352))
#define local_178 (*(void * *)(frame + 368))
#define local_170 (*(undefined5 *)(frame + 376))
#define local_158 (*(uint *)(frame + 400))
#define local_150 (*(undefined8 *)(frame + 408))
#define local_13c (*(uint *)(frame + 428))
#define local_138 (*(byte * *)(frame + 432))
#define local_130 (*(long * *)(frame + 440))
#define local_128 (*(long * *)(frame + 448))
#define local_118 (*(uint *)(frame + 464))
#define local_110 (*(long * *)(frame + 472))
#define local_108 (*(uint *)(frame + 480))
#define local_100 (*(long *)(frame + 488))
#define local_f0 (*(ulong *)(frame + 504))
#define local_e8 (*(undefined4 *)(frame + 512))
#define local_d0 (*(code * *)(frame + 536))
#define local_c8 (*(undefined * *)(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10005ff0(long *param_1,long *param_2)

{
  unsigned char frame[776] = {0};

  byte *pbVar1;
  void *data;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;

  local_c0 = (undefined1 *)((long)(uintptr_t)(frame + 744) + -8);
  local_b0 = (undefined1 *)local_2d8;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  lVar11 = *param_2;
  lVar13 = param_2[1];
  local_d0 = recovered_10002c80;
  local_c8 = &DAT_10008124;
  local_b8 = &LAB_10006c1e;
  recovered_100030ca(&local_f0);
  uVar8 = 0;
  for (lVar13 = lVar13 << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
    bVar14 = CARRY8(uVar8,*(ulong *)(lVar11 + 8));
    uVar8 = uVar8 + *(ulong *)(lVar11 + 8);
    if (bVar14) goto LAB_10006bb3;
    lVar11 = lVar11 + 0x10;
  }
  local_e8 = 0xffffffff;
  recovered_10005ea6(param_1,uVar8);
  puVar12 = (undefined8 *)*param_2;
  for (lVar11 = param_2[1] << 4; lVar11 != 0; lVar11 = lVar11 + -0x10) {
    local_e8 = 0xffffffff;
    recovered_10005de0(param_1,*param_1 + param_1[1],(uchar *)*puVar12,
                       (uchar *)*puVar12 + puVar12[1]);
    puVar12 = puVar12 + 2;
  }
  param_1[4] = 0;
  if (5 < (ulong)param_1[1]) {
    pbVar1 = (byte *)*param_1;
    if ((*pbVar1 & 0xf) == 8) {
      bVar14 = false;
      if (((pbVar1[1] & 0x20) == 0) && ((ushort)(CONCAT11(*pbVar1,pbVar1[1]) % 0x1f) == 0)) {
        plVar5 = (long *)(param_1[1] - 6);
        local_138 = pbVar1 + 2;
        local_128 = (long *)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_130 = plVar5;
        local_110 = param_1 + 3;
        local_48 = param_1;
        do {
          iVar10 = 1;
          local_34 = 0;
          local_6c = 0;
          uVar2 = recovered_100070b0((long *)&local_138,1,&local_34);
          if ((uVar2 == '\0') ||
             (uVar2 = recovered_100070b0((long *)&local_138,2,&local_6c), uVar2 == '\0'))
          goto LAB_10006bb3;
          local_13c = local_34;
          if (local_6c == 2) {
            uStack_288 = 0;
            uStack_283 = 0;
            local_298 = (void *)0x0;
            local_290 = 0;
            uStack_28b = 0;
            local_2d8[6] = 0;
            local_2d8[7] = 0;
            local_2d8[4] = 0;
            local_2d8[5] = 0;
            local_2d8[2] = 0;
            local_2d8[3] = 0;
            local_2d8[0] = 0;
            local_2d8[1] = 0;
            uStack_228 = 0;
            uStack_223 = 0;
            local_238 = (void *)0x0;
            local_230 = 0;
            uStack_22b = 0;
            local_278[6] = 0;
            local_278[7] = 0;
            local_278[4] = 0;
            local_278[5] = 0;
            local_78 = 0;
            local_278[2] = 0;
            local_278[3] = 0;
            local_74 = 0;
            local_278[0] = 0;
            local_278[1] = 0;
            local_70 = 0;
            uVar2 = recovered_100070b0((long *)&local_138,5,&local_78);
            if (((uVar2 != '\0') &&
                (uVar2 = recovered_100070b0((long *)&local_138,5,&local_74), uVar2 != '\0')) &&
               (uVar2 = recovered_100070b0((long *)&local_138,4,&local_70), uVar2 != '\0')) {
              local_80 = (ulong)local_78;
              local_50 = (long *)(ulong)local_74;
              local_1b8 = (void *)((ulong)local_1b8 & 0xffffffff00000000);
              local_e8 = 5;
              recovered_10007590(&local_158,0x13,&local_1b8);
              param_1 = local_48;
              local_80 = local_80 + 0x101;
              local_50 = (long *)((long)local_50 + 1);
              uVar7 = local_70 + 4;
              data = (void *)CONCAT44(uStack_154,local_158);
              for (lVar11 = 0; (ulong)uVar7 * 4 != lVar11; lVar11 = lVar11 + 4) {
                local_1b8 = (void *)((ulong)local_1b8 & 0xffffffff00000000);
                uVar2 = recovered_100070b0((long *)&local_138,3,(uint *)&local_1b8);
                if (uVar2 == '\0') {
                  local_150 = 0;
                  recovered_10002cf7(data);
                  iVar10 = 1;
                  goto LAB_10006478;
                }
                plVar5 = (long *)(ulong)*(uint *)((long)&DAT_10007d90 + lVar11);
                *(uint *)((long)data + (long)plVar5 * 4) = (uint)local_1b8;
              }
              uStack_168 = 0;
              uStack_163 = 0;
              local_178 = (void *)0x0;
              local_170 = 0;
              uStack_16b = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              local_1b8 = (void *)0x0;
              uStack_1b0 = 0;
              local_e8 = 6;
              uVar7 = recovered_10007442((long *)&local_158,(uint *)&local_1b8,0);
              if ((char)uVar7 == '\0') {
                cVar6 = '\0';
                param_1 = local_48;
              }
              else {
                local_68 = (void *)0x0;
                plStack_60 = (long *)0x0;
                local_58 = 0;
                local_50 = (long *)((long)local_50 + local_80);
                local_e8 = 7;
                recovered_1000764a((long *)&local_68,(ulong)local_50);
                do {
                  param_1 = local_48;
                  plVar9 = plStack_60;
                  if (local_50 <= plStack_60) {
                    local_e8 = 0xc;
                    recovered_10007900(&local_98,local_68,(void *)((long)local_68 + local_80 * 4));
                    local_e8 = 0xd;
                    plVar5 = plStack_60;
                    recovered_10007900(&local_108,(void *)((long)local_68 + local_80 * 4),
                                       (void *)((long)local_68 + (long)plStack_60 * 4));
                    local_e8 = 0xe;
                    uVar7 = recovered_10007442((long *)&local_98,(uint *)local_2d8,0);
                    if ((char)uVar7 == '\0') {
                      cVar6 = '\0';
                    }
                    else {
                      plVar5 = (long *)(local_100 * 4);
                      bVar14 = false;
                      for (plVar9 = (long *)0x0; plVar5 != plVar9;
                          plVar9 = (long *)((long)plVar9 + 4)) {
                        bVar14 = (bool)(bVar14 | *(int *)(CONCAT44(uStack_104,local_108) +
                                                         (long)plVar9) != 0);
                      }
                      if (bVar14) {
                        local_e8 = 0xf;
                        uVar7 = recovered_10007442((long *)&local_108,(uint *)local_278,1);
                        cVar6 = (char)uVar7;
                      }
                      else {
                        uStack_1c8 = 0;
                        uStack_1c3 = 0;
                        local_1d8 = (void *)0x0;
                        local_1d0 = 0;
                        uStack_1cb = 0;
                        local_218[6] = 0;
                        local_218[7] = 0;
                        local_218[4] = 0;
                        local_218[5] = 0;
                        local_218[2] = 0;
                        local_218[3] = 0;
                        local_218[0] = 0;
                        local_218[1] = 0;
                        recovered_100076b6(local_278,local_218);
                        local_1d0 = 0;
                        uStack_1cb = 0;
                        recovered_10002cf7(local_1d8);
                        uStack_223 = CONCAT17(1,(undefined7)uStack_223);
                        cVar6 = '\x01';
                      }
                    }
                    param_1 = local_48;
                    local_100 = 0;
                    recovered_10002cf7((void *)CONCAT44(uStack_104,local_108));
                    local_90 = 0;
                    recovered_10002cf7((void *)CONCAT44(uStack_94,local_98));
                    goto LAB_1000690b;
                  }
                  local_218[0] = local_218[0] & 0xffffffff00000000;
                  uVar2 = recovered_1000732c((long *)&local_138,(long)&local_1b8,(uint *)local_218,
                                             (ulong)plVar5);
                  if (uVar2 == '\0') {
LAB_1000679f:
                    cVar6 = '\0';
                    goto LAB_1000690b;
                  }
                  if ((uint)local_218[0] < 0x10) {
                    local_e8 = 8;
                    recovered_1000786c((long *)&local_68,(uint *)local_218);
                    plVar5 = (long *)0x5;
                  }
                  else if ((uint)local_218[0] == 0x12) {
                    local_98 = 0;
                    uVar2 = recovered_100070b0((long *)&local_138,7,&local_98);
                    plVar5 = (long *)0x1;
                    if (uVar2 != '\0') {
                      local_38 = local_98 + 0xb;
                      uVar7 = 0;
                      while ((uVar7 < local_38 && (plVar9 < local_50))) {
                        local_108 = 0;
                        local_e8 = 0xb;
                        local_3c = uVar7;
                        recovered_100078b6((long *)&local_68,&local_108);
                        uVar7 = local_3c + 1;
                        plVar9 = plStack_60;
                      }
LAB_1000672d:
                      plVar5 = (long *)0x5;
                    }
                  }
                  else if ((uint)local_218[0] == 0x11) {
                    local_98 = 0;
                    uVar2 = recovered_100070b0((long *)&local_138,3,&local_98);
                    plVar5 = (long *)0x1;
                    if (uVar2 != '\0') {
                      local_38 = local_98 + 3;
                      uVar7 = 0;
                      while ((uVar7 < local_38 && (plVar9 < local_50))) {
                        local_108 = 0;
                        local_e8 = 10;
                        local_3c = uVar7;
                        recovered_100078b6((long *)&local_68,&local_108);
                        uVar7 = local_3c + 1;
                        plVar9 = plStack_60;
                      }
                      goto LAB_1000672d;
                    }
                  }
                  else {
                    if (((uint)local_218[0] != 0x10) || (plVar9 == (long *)0x0)) goto LAB_1000679f;
                    local_98 = 0;
                    uVar2 = recovered_100070b0((long *)&local_138,2,&local_98);
                    plVar5 = (long *)0x1;
                    if (uVar2 != '\0') {
                      local_38 = local_98 + 3;
                      local_108 = *(uint *)((long)local_68 + (long)plVar9 * 4 + -4);
                      uVar7 = 0;
                      while ((uVar7 < local_38 && (plVar9 < local_50))) {
                        local_e8 = 9;
                        local_3c = uVar7;
                        recovered_1000786c((long *)&local_68,&local_108);
                        uVar7 = local_3c + 1;
                        plVar9 = plStack_60;
                      }
                      goto LAB_1000672d;
                    }
                  }
                } while ((int)plVar5 == 5);
                cVar6 = '\0';
                param_1 = local_48;
LAB_1000690b:
                plStack_60 = (long *)0x0;
                recovered_10002cf7(local_68);
              }
              local_170 = 0;
              uStack_16b = 0;
              recovered_10002cf7(local_178);
              local_150 = 0;
              recovered_10002cf7((void *)CONCAT44(uStack_154,local_158));
              iVar10 = 1;
              if (cVar6 != '\0') {
                local_e8 = 0x10;
                plVar5 = local_110;
                bVar3 = recovered_10007112((long *)&local_138,(long)local_2d8,(long)local_278,
                                           local_110);
                iVar10 = (uint)bVar3 * 2 + 1;
                param_1 = local_48;
              }
            }
LAB_10006478:
            local_230 = 0;
            uStack_22b = 0;
            recovered_10002cf7(local_238);
            local_290 = 0;
            uStack_28b = 0;
            recovered_10002cf7(local_298);
LAB_1000677f:
            if (iVar10 != 3) goto LAB_10006bb3;
          }
          else {
            if (local_6c != 1) {
              if (local_6c == 0) {
                plVar5 = (long *)((ulong)local_118 & 0xffffffffffffff07);
                uStack_120 = uStack_120 >> (sbyte)plVar5;
                local_1b8 = (void *)((ulong)local_1b8 & 0xffffffff00000000);
                local_218[0] = local_218[0] & 0xffffffff00000000;
                local_118 = local_118 & 0xfffffff8;
                local_2d8[0] = local_2d8[0] & 0xffffffff00000000;
                local_278[0] = local_278[0] & 0xffffffff00000000;
                uVar2 = recovered_100070b0((long *)&local_138,8,(uint *)&local_1b8);
                if ((((uVar2 != '\0') &&
                     (uVar2 = recovered_100070b0((long *)&local_138,8,(uint *)local_218),
                     uVar2 != '\0')) &&
                    (uVar2 = recovered_100070b0((long *)&local_138,8,(uint *)local_2d8),
                    uVar2 != '\0')) &&
                   (uVar2 = recovered_100070b0((long *)&local_138,8,(uint *)local_278),
                   uVar2 != '\0')) {
                  plVar5 = (long *)0x8;
                  uVar7 = (uint)local_218[0] << 8 | (uint)local_1b8;
                  if ((((int)local_278[0] << 8 | (uint)local_2d8[0]) ^ uVar7) == 0xffff) {
                    while (bVar14 = uVar7 != 0, uVar7 = uVar7 - 1, bVar14) {
                      local_158 = 0;
                      uVar2 = recovered_100070b0((long *)&local_138,8,&local_158);
                      if (uVar2 == '\0') goto LAB_1000677f;
                      local_68 = (void *)CONCAT71(PF_PART7(local_68, 1),(undefined1)local_158);
                      local_e8 = 0xffffffff;
                      recovered_100072dc(local_110,(uchar *)&local_68);
                    }
                    iVar10 = 3;
                  }
                }
                goto LAB_1000677f;
              }
              goto LAB_10006bb3;
            }
            if (DAT_10009790 == '\0') {
              uVar7 = recovered_10002f60((uint *)&DAT_10009790);
              if (uVar7 != 0) {
                local_218[0] = CONCAT44(PF_PART4(local_218[0], 4),8);
                local_e8 = 1;
                recovered_10007590(&local_1b8,0x120,local_218);
                for (lVar11 = 0; lVar11 != 0x70; lVar11 = lVar11 + 1) {
                  *(undefined4 *)((long)local_1b8 + lVar11 * 4 + 0x240) = 9;
                }
                for (lVar11 = 0; lVar11 != 0x18; lVar11 = lVar11 + 1) {
                  *(undefined4 *)((long)local_1b8 + lVar11 * 4 + 0x400) = 7;
                }
                for (lVar11 = 0; lVar11 != 8; lVar11 = lVar11 + 1) {
                  *(undefined4 *)((long)local_1b8 + lVar11 * 4 + 0x460) = 8;
                }
                uRam0000000010009780 = 0;
                uRam0000000010009785 = 0;
                _DAT_10009770 = 0;
                uRam0000000010009778 = 0;
                _DAT_1000977d = 0;
                _DAT_10009760 = 0;
                uRam0000000010009768 = 0;
                _DAT_10009750 = 0;
                uRam0000000010009758 = 0;
                _DAT_10009740 = 0;
                uRam0000000010009748 = 0;
                _DAT_10009730 = 0;
                uRam0000000010009738 = 0;
                local_e8 = 2;
                recovered_10007442((long *)&local_1b8,(uint *)&DAT_10009730,0);
                uStack_1b0 = 0;
                recovered_10002cf7(local_1b8);
                recovered_10002f58();
                recovered_10002f6d((uchar *)&DAT_10009790);
                param_1 = local_48;
              }
            }
            if (DAT_100097f8 == '\0') {
              uVar7 = recovered_10002f60((uint *)&DAT_100097f8);
              if (uVar7 != 0) {
                local_218[0] = CONCAT44(PF_PART4(local_218[0], 4),5);
                local_e8 = 3;
                recovered_10007590(&local_1b8,0x20,local_218);
                _DAT_10009798 = 0;
                uRam00000000100097a0 = 0;
                _DAT_100097a8 = 0;
                uRam00000000100097b0 = 0;
                _DAT_100097b8 = 0;
                uRam00000000100097c0 = 0;
                _DAT_100097c8 = 0;
                uRam00000000100097d0 = 0;
                _DAT_100097d8 = 0;
                uRam00000000100097e0 = 0;
                _DAT_100097e5 = 0;
                uRam00000000100097e8 = 0;
                uRam00000000100097ed = 0;
                local_e8 = 4;
                recovered_10007442((long *)&local_1b8,(uint *)&DAT_10009798,0);
                uStack_1b0 = 0;
                recovered_10002cf7(local_1b8);
                recovered_10002f58();
                recovered_10002f6d((uchar *)&DAT_100097f8);
                param_1 = local_48;
              }
            }
            local_e8 = 0xffffffff;
            plVar5 = local_110;
            uVar2 = recovered_10007112((long *)&local_138,(long)&DAT_10009730,(long)&DAT_10009798,local_110);
            if (uVar2 == '\0') goto LAB_10006bb3;
          }
        } while (local_13c == 0);
        bVar14 = false;
        if ((local_128 == local_130) && (local_118 < 8)) {
          uVar7 = recovered_10005d34((uint *)(*param_1 + param_1[1] + -4));
          uVar4 = recovered_1000726e(param_1[3],param_1[4]);
          bVar14 = uVar4 == uVar7;
        }
      }
      goto LAB_10006bb5;
    }
  }
LAB_10006bb3:
  bVar14 = false;
LAB_10006bb5:
  recovered_100030e1(&local_f0);
  return bVar14;
}

#undef DAT_10007d90
#undef DAT_10008124
#undef DAT_10009730
#undef DAT_10009740
#undef DAT_10009750
#undef DAT_10009760
#undef DAT_10009770
#undef DAT_1000977d
#undef DAT_10009790
#undef DAT_10009798
#undef DAT_100097a8
#undef DAT_100097b8
#undef DAT_100097c8
#undef DAT_100097d8
#undef DAT_100097e5
#undef DAT_100097f8
#undef LAB_10006c1e
#undef UNK_10009738
#undef UNK_10009748
#undef UNK_10009758
#undef UNK_10009768
#undef UNK_10009778
#undef UNK_10009780
#undef UNK_10009785
#undef UNK_100097a0
#undef UNK_100097b0
#undef UNK_100097c0
#undef UNK_100097d0
#undef UNK_100097e0
#undef UNK_100097e8
#undef UNK_100097ed
#undef _DAT_10009730
#undef _DAT_10009740
#undef _DAT_10009750
#undef _DAT_10009760
#undef _DAT_10009770
#undef _DAT_1000977d
#undef _DAT_10009798
#undef _DAT_100097a8
#undef _DAT_100097b8
#undef _DAT_100097c8
#undef _DAT_100097d8
#undef _DAT_100097e5
#undef uRam0000000010009738
#undef uRam0000000010009748
#undef uRam0000000010009758
#undef uRam0000000010009768
#undef uRam0000000010009778
#undef uRam0000000010009780
#undef uRam0000000010009785
#undef uRam00000000100097a0
#undef uRam00000000100097b0
#undef uRam00000000100097c0
#undef uRam00000000100097d0
#undef uRam00000000100097e0
#undef uRam00000000100097e8
#undef uRam00000000100097ed
#undef local_c0
#undef uStack_28b
#undef local_b8
#undef uStack_288
#undef local_b0
#undef uStack_283
#undef local_98
#undef local_90
#undef local_80
#undef local_78
#undef uStack_22b
#undef local_74
#undef uStack_228
#undef local_70
#undef uStack_223
#undef local_6c
#undef local_68
#undef local_58
#undef local_50
#undef uStack_1cb
#undef local_48
#undef uStack_1c8
#undef local_3c
#undef uStack_1c3
#undef local_38
#undef local_34
#undef uStack_1b0
#undef uStack_1a0
#undef uStack_190
#undef uStack_180
#undef uStack_16b
#undef uStack_168
#undef uStack_163
#undef uStack_154
#undef uStack_120
#undef uStack_104
#undef uStack_94
#undef plStack_60
#undef local_2d8
#undef local_298
#undef local_290
#undef local_278
#undef local_238
#undef local_230
#undef local_218
#undef local_1d8
#undef local_1d0
#undef local_1b8
#undef local_1a8
#undef local_198
#undef local_188
#undef local_178
#undef local_170
#undef local_158
#undef local_150
#undef local_13c
#undef local_138
#undef local_130
#undef local_128
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f0
#undef local_e8
#undef local_d0
#undef local_c8

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_10006df8(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uchar uVar2;

  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((CARRY8(param_3,uVar1)) || (*(ulong *)(param_1 + 0x20) < param_3 + uVar1)) {
    uVar2 = '\0';
  }
  else {
    recovered_10000af2((void *)param_2,(void *)(uVar1 + *(long *)(param_1 + 0x18)),param_3);
    *(ulong *)(param_1 + 0x30) = param_3 + uVar1;
    uVar2 = '\x01';
  }
  return uVar2;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_10006e32(uint param_1,long param_2,long param_3,long param_4,ulong param_5,
                       ulong param_6)

{
  unsigned char frame[64] = {0};

  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  switch((uintptr_t)(param_1)) {
  case 1:
    uVar7 = param_5;
    if (param_6 < param_5) {
      uVar7 = param_6;
    }
    for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
      *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)(param_3 + uVar4);
    }
    for (lVar3 = 0; param_5 + uVar7 * -2 + uVar4 != lVar3; lVar3 = lVar3 + 1) {
      *(char *)(param_2 + uVar7 + lVar3) =
           *(char *)((uVar7 - param_6) + param_2 + lVar3) + *(char *)(param_3 + uVar7 + lVar3);
    }
    break;
  case 2:
    if (param_4 != 0) {
      for (uVar7 = 0; param_5 != uVar7; uVar7 = uVar7 + 1) {
        *(char *)(param_2 + uVar7) = *(char *)(param_4 + uVar7) + *(char *)(param_3 + uVar7);
      }
      return '\x01';
    }
  case 0:
    recovered_10000af2((void *)param_2,(void *)param_3,param_5);
    break;
  case 3:
    if (param_4 == 0) {
      if (param_5 == 0) {
        return '\x01';
      }
      uVar7 = param_5;
      if (param_6 < param_5) {
        uVar7 = param_6;
      }
      for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)(param_3 + uVar4);
      }
      for (lVar3 = 0; param_5 + uVar7 * -2 + uVar4 != lVar3; lVar3 = lVar3 + 1) {
        *(byte *)(param_2 + uVar7 + lVar3) =
             (*(byte *)((uVar7 - param_6) + param_2 + lVar3) >> 1) +
             *(char *)(param_3 + uVar7 + lVar3);
      }
      return '\x01';
    }
    for (uVar7 = 0; param_5 != uVar7; uVar7 = uVar7 + 1) {
      if (uVar7 < param_6) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ushort)*(byte *)((param_2 - param_6) + uVar7);
      }
      *(char *)(param_2 + uVar7) =
           (char)((uint)uVar6 + (uint)*(byte *)(param_4 + uVar7) >> 1) + *(char *)(param_3 + uVar7);
    }
    break;
  case 4:
    if (param_4 == 0) {
      uVar7 = param_5;
      if (param_6 < param_5) {
        uVar7 = param_6;
      }
      for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(param_2 + uVar4) = *(undefined1 *)(param_3 + uVar4);
      }
      for (lVar3 = 0; param_5 + uVar7 * -2 + uVar4 != lVar3; lVar3 = lVar3 + 1) {
        *(char *)(param_2 + uVar7 + lVar3) =
             *(char *)((uVar7 - param_6) + param_2 + lVar3) + *(char *)(param_3 + uVar7 + lVar3);
      }
    }
    else {
      for (uVar7 = 0; param_5 != uVar7; uVar7 = uVar7 + 1) {
        uVar8 = 0;
        uVar5 = 0;
        if (param_6 <= uVar7) {
          uVar8 = (uint)*(byte *)((param_2 - param_6) + uVar7);
          uVar5 = (uint)*(byte *)((param_4 - param_6) + uVar7);
        }
        uVar11 = (uint)*(byte *)(param_4 + uVar7);
        uVar10 = uVar8 - uVar5;
        uVar12 = -(uVar11 - uVar5);
        if ((int)uVar12 < 0) {
          uVar12 = uVar11 - uVar5;
        }
        uVar9 = -uVar10;
        if ((int)-uVar10 < 0) {
          uVar9 = uVar10;
        }
        uVar2 = (uVar11 + uVar10) - uVar5;
        uVar10 = -uVar2;
        if ((int)uVar10 < 0) {
          uVar10 = uVar2;
        }
        if (uVar9 <= uVar10) {
          uVar5 = uVar11;
        }
        if (uVar10 < uVar12) {
          uVar8 = uVar5;
        }
        cVar1 = (char)uVar8;
        if (uVar9 < uVar12) {
          cVar1 = (char)uVar5;
        }
        *(char *)(param_2 + uVar7) = cVar1 + *(char *)(param_3 + uVar7);
      }
    }
    break;
  default:
    return '\0';
  }
  return '\x01';
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007090(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10007a2e((void *)((long)object + 0x18));
  recovered_10007a2e(object);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uchar recovered_100070b0(long *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uint uVar2;

  if (0x18 < param_2) {
    return '\0';
  }
  uVar2 = *(uint *)(param_1 + 4);
  while( true ) {
    if (param_2 <= uVar2) {
      uVar1 = param_1[3];
      *param_3 = ~(uint)(-1L << ((byte)param_2 & 0x3f)) & (uint)uVar1;
      param_1[3] = uVar1 >> ((byte)param_2 & 0x3f);
      *(uint *)(param_1 + 4) = (int)param_1[4] - param_2;
      return '\x01';
    }
    uVar1 = param_1[2];
    if ((ulong)param_1[1] <= uVar1) break;
    param_1[2] = uVar1 + 1;
    param_1[3] = param_1[3] | (ulong)*(byte *)(*param_1 + uVar1) << ((byte)uVar2 & 0x3f);
    uVar2 = uVar2 + 8;
    *(uint *)(param_1 + 4) = uVar2;
  }
  return '\0';
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define DAT_0203d5e8 (*(uint8_t *)((uintptr_t)(pf_module_state+0x15b)))
#define DAT_0203d65c (*(uint8_t *)((uintptr_t)(pf_module_state+0x1cf)))
#define DAT_0203d6d0 (*(uint8_t *)((uintptr_t)(pf_module_state+0x243)))
#define DAT_0203d748 (*(uint8_t *)((uintptr_t)(pf_module_state+0x2bb)))
#define local_34 (*(uint *)(frame + 24))
#define local_38 (*(uint *)(frame + 20))
#define local_3c (*(uint *)(frame + 16))
uchar recovered_10007112(long *param_1,long param_2,long param_3,long *param_4)

{
  unsigned char frame[108] = {0};

  uchar uVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;

  plVar4 = param_4;
  while( true ) {
    while( true ) {
      local_38 = 0;
      uVar1 = recovered_1000732c(param_1,param_2,&local_38,(ulong)plVar4);
      if (uVar1 == '\0') {
        return '\0';
      }
      if (0xff < local_38) break;
      local_34 = CONCAT31(PF_PART3(local_34, 1),(char)local_38);
      recovered_100072dc(param_4,(undefined1 *)&local_34);
    }
    if (local_38 == 0x100) {
      return '\x01';
    }
    if (0x11d < local_38) {
      return '\0';
    }
    iVar6 = *(int *)(&DAT_0203d5e8 + (ulong)(local_38 - 0x101) * 4);
    puVar3 = &DAT_0203d65c;
    if (*(uint *)(&DAT_0203d65c + (ulong)(local_38 - 0x101) * 4) != 0) {
      local_34 = 0;
      uVar1 = recovered_100070b0(param_1,*(uint *)(&DAT_0203d65c + (ulong)(local_38 - 0x101) * 4),
                                &local_34);
      if (uVar1 == '\0') {
        return '\0';
      }
      iVar6 = iVar6 + local_34;
    }
    local_34 = 0;
    uVar1 = recovered_1000732c(param_1,param_3,&local_34,(ulong)puVar3);
    if (uVar1 == '\0') break;
    uVar2 = (ulong)local_34;
    if (0x1d < uVar2) {
      return '\0';
    }
    uVar5 = *(uint *)(&DAT_0203d6d0 + uVar2 * 4);
    plVar4 = (long *)&DAT_0203d748;
    if (*(uint *)(&DAT_0203d748 + uVar2 * 4) != 0) {
      local_3c = 0;
      uVar1 = recovered_100070b0(param_1,*(uint *)(&DAT_0203d748 + uVar2 * 4),&local_3c);
      if (uVar1 == '\0') {
        return '\0';
      }
      uVar5 = uVar5 + local_3c;
    }
    if (uVar5 == 0) {
      return '\0';
    }
    if ((ulong)param_4[1] < (ulong)uVar5) {
      return '\0';
    }
    while (bVar7 = iVar6 != 0, iVar6 = iVar6 + -1, bVar7) {
      recovered_100073f2(param_4,(undefined1 *)((param_4[1] - (ulong)uVar5) + *param_4));
    }
  }
  return '\0';
}

#undef DAT_0203d5e8
#undef DAT_0203d65c
#undef DAT_0203d6d0
#undef DAT_0203d748
#undef local_34
#undef local_38
#undef local_3c

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007260(void *object)

{
  unsigned char frame[64] = {0};

  recovered_10007a06((void *)((long)object + 0x40));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000726e
 */

uint recovered_1000726e(long param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;

  uVar1 = 1;
  uVar4 = 0;
  for (uVar5 = 0; uVar3 = param_2 - uVar5, uVar5 <= param_2 && uVar3 != 0; uVar5 = uVar5 + uVar3) {
    if (0x15af < uVar3) {
      uVar3 = 0x15b0;
    }
    for (uVar2 = 0; uVar3 != uVar2; uVar2 = uVar2 + 1) {
      uVar1 = uVar1 + *(byte *)(param_1 + uVar5 + uVar2);
      uVar4 = uVar4 + uVar1;
    }
    uVar1 = uVar1 % 0xfff1;
    uVar4 = uVar4 % 0xfff1;
  }
  return uVar1 | uVar4 << 0x10;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100072dc(long *param_1,undefined1 *param_2)

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
    recovered_10005ea6(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = *param_2;
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 + 1 + *param_1 + -1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */
#define local_34 (*(uint *)(frame + 20))
#define local_38 (*(uint *)(frame + 16))
uchar recovered_1000732c(long *param_1,long param_2,uint *param_3,ulong param_4)

{
  unsigned char frame[104] = {0};

  uchar uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;

  if (*(char *)(param_2 + 0x5c) == '\x01') {
    local_34 = *(uint *)(param_2 + 0x58);
    uVar8 = 0;
    if (local_34 != 0) {
      uVar5 = 1;
      lVar6 = 0;
      uVar4 = 0;
      while (bVar3 = (byte)param_4, uVar5 <= local_34) {
        local_38 = 0;
        uVar1 = recovered_100070b0(param_1,1,&local_38);
        if (uVar1 == '\0') {
LAB_02008a01:
          bVar3 = 0;
          break;
        }
        uVar4 = uVar4 | local_38;
        uVar2 = *(uint *)(param_2 + (ulong)uVar5 * 4);
        param_4 = (ulong)uVar2;
        uVar2 = uVar2 + uVar8;
        if (uVar4 < uVar2) {
          uVar7 = lVar6 + (ulong)(uVar4 - uVar8);
          if (*(ulong *)(param_2 + 0x48) <= uVar7) goto LAB_02008a01;
          *param_3 = (uint)*(ushort *)(*(long *)(param_2 + 0x40) + uVar7 * 2);
          bVar3 = 1;
          break;
        }
        lVar6 = lVar6 + param_4;
        uVar8 = uVar2 * 2;
        uVar4 = uVar4 * 2;
        uVar5 = uVar5 + 1;
        local_34 = *(uint *)(param_2 + 0x58);
      }
      uVar8 = (uint)(uVar5 <= local_34 & bVar3);
    }
  }
  else {
    uVar8 = 0;
  }
  return (uchar)uVar8;
}

#undef local_34
#undef local_38

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

long recovered_100073f2(long *param_1,undefined1 *param_2)

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
    recovered_10005ea6(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = *param_2;
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 + 1 + *param_1 + -1;
}


#define local_c8 (*(ulonglong (*)[8])(frame + 16))
#define local_88 (*(void * *)(frame + 80))
#define local_80 (*(undefined5 *)(frame + 88))
#define local_68 (*(uint (*)[16])(frame + 112))
#define uStack_7b (*(undefined3 *)(frame + 93))
#define uStack_78 (*(undefined5 *)(frame + 96))
#define uStack_73 (*(undefined8 *)(frame + 101))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007442
 */

uint recovered_10007442(long *param_1,uint *param_2,uint param_3)

{
  unsigned char frame[248] = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;

  uStack_78 = 0;
  uStack_73 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  uStack_7b = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  recovered_100076b6((ulonglong *)param_2,local_c8);
  local_80 = 0;
  uStack_7b = 0;
  recovered_10002cf7(local_88);
  lVar4 = *param_1;
  uVar1 = param_1[1];
  for (lVar5 = 0; uVar1 * 4 != lVar5; lVar5 = lVar5 + 4) {
    uVar3 = *(uint *)(lVar4 + lVar5);
    if (0xf < (ulong)uVar3) goto LAB_100074fe;
    param_2[uVar3] = param_2[uVar3] + 1;
    uVar7 = param_2[0x16];
    if (param_2[0x16] <= uVar3) {
      uVar7 = uVar3;
    }
    param_2[0x16] = uVar7;
  }
  if (uVar1 == *param_2) {
LAB_10007579:
    *(char *)(param_2 + 0x17) = (char)param_3;
  }
  else {
    iVar2 = 1;
    lVar4 = 1;
    do {
      if (lVar4 == 0x10) {
        local_68[0xc] = 0;
        local_68[0xd] = 0;
        local_68[0xe] = 0;
        local_68[0xf] = 0;
        local_68[8] = 0;
        local_68[9] = 0;
        local_68[10] = 0;
        local_68[0xb] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        uVar3 = 0;
        for (lVar4 = 1; lVar4 != 0x10; lVar4 = lVar4 + 1) {
          local_68[lVar4] = uVar3;
          uVar3 = uVar3 + param_2[lVar4];
        }
        local_c8[0] = local_c8[0] & 0xffffffffffff0000;
        recovered_10007704((long *)(param_2 + 0x10),(ulong)uVar3,(ushort *)local_c8);
        lVar4 = *param_1;
        uVar1 = param_1[1];
        lVar5 = *(long *)(param_2 + 0x10);
        for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
          uVar6 = (ulong)*(uint *)(lVar4 + (ulong)uVar3 * 4);
          if (uVar6 != 0) {
            uVar7 = local_68[uVar6];
            local_68[uVar6] = uVar7 + 1;
            *(short *)(lVar5 + (ulong)uVar7 * 2) = (short)uVar3;
          }
        }
        param_3 = (uint)CONCAT71((uint7)(uint3)(param_3 >> 8),1);
        goto LAB_10007579;
      }
      iVar2 = iVar2 * 2 - param_2[lVar4];
      lVar4 = lVar4 + 1;
    } while (-1 < iVar2);
LAB_100074fe:
    param_3 = 0;
  }
  return param_3;
}

#undef local_c8
#undef local_88
#undef local_80
#undef local_68
#undef uStack_7b
#undef uStack_78
#undef uStack_73

/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007590(void *object,ulong p0,void *p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_100075a6(object,p0,p1);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100075a6(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_10007606(param_1,param_2);
    return;
  }
  recovered_1000764a(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

uint recovered_10007606(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong in_RAX;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_1000764a(param_1,param_2);
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

void recovered_1000764a(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_1000769f(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined4 *)(uVar2 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    recovered_10002cf7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_1000769f(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002cc3(param_1 << 2);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_100076b6(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;

  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  recovered_10007714(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)((long)param_2 + 0x5c);
  return param_1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007704(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10007756(param_1,param_2,param_3);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

undefined8 * recovered_10007714(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002cf7((void *)*param_1);
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

void recovered_10007756(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_100077b8(param_1,param_2);
    return;
  }
  recovered_100077fe(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b8
 */

void recovered_100077b8(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_100077fe(param_1,param_2);
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
 * Address: 0x100077fe
 */

void recovered_100077fe(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar2 = recovered_10007855(param_2);
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_10002cf7((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

ulonglong recovered_10007855(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = recovered_10002cc3(param_1 * 2);
  return (ulonglong)pvVar1;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_1000786c(long *param_1,undefined4 *param_2)

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
    recovered_1000764a(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
  param_1[1] = lVar1 + 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_100078b6(long *param_1,undefined4 *param_2)

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
    recovered_1000764a(param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
  param_1[1] = lVar1 + 1;
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007900(void *object,void *p0,void *p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_1000791e(object,0,p0,p1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000791e
 */

long recovered_1000791e(long *param_1,long param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;

  lVar4 = *param_1;
  bVar8 = lVar4 == 0;
  if (bVar8) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_2 - lVar4 >> 2;
  }
  if (3 < (ulong)((long)param_4 - (long)param_3)) {
    uVar7 = (ulong)((long)param_4 - (long)param_3) >> 2;
    uVar2 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar2 + uVar7) {
      uVar1 = 4;
      if (uVar5 != 0) {
        uVar1 = uVar5;
      }
      do {
        uVar5 = uVar1;
        uVar1 = uVar5 * 2;
      } while (uVar5 < uVar2 + uVar7);
      recovered_1000764a(param_1,uVar5);
      uVar2 = param_1[1];
    }
    for (uVar5 = uVar2; uVar6 < uVar5; uVar5 = uVar5 - 1) {
      *(undefined4 *)(uVar7 * 4 + -4 + *param_1 + uVar5 * 4) =
           *(undefined4 *)(*param_1 + -4 + uVar5 * 4);
    }
    lVar4 = uVar6 * 4;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(uint *)(*param_1 + lVar4) = *param_3;
      lVar4 = lVar4 + 4;
    }
    param_1[1] = uVar2 + uVar7;
    lVar4 = *param_1;
    bVar8 = lVar4 == 0;
  }
  lVar3 = 0;
  if (!bVar8) {
    lVar3 = lVar4 + uVar6 * 4;
  }
  return lVar3;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007a06(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002cf7(*(void **)object);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a18
 */

void recovered_10007a18(void *object,ulong p0)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10005f80(object,p0);
  return;
}


/* Instruction-equivalent reviewed C; Pooka's Free Software License. */

void recovered_10007a2e(void *object)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)((long)object + 8) = 0;
  recovered_10002cf7(*(void **)object);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a40
 */

void recovered_10007a40(void *object,void *p0,void *p1)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)object = 0;
  *(undefined8 *)((long)object + 8) = 0;
  *(undefined8 *)((long)object + 0x10) = 0;
  recovered_10005de0(object,0,p0,p1);
  return;
}

