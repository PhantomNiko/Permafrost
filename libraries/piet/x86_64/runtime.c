/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b150
#define DAT_1000b150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000600
 */

void recovered_10000600(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b150 = 0;
  recovered_10000611();
  return;
}

#undef DAT_1000b150

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
#undef DAT_1000b150
#define DAT_1000b150 (*(char *)(((uintptr_t)pf_module_state + 0x2b80U)))
#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
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
 * Address: 0x10000611
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000611(void)

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
  if (DAT_1000b150 == '\0') {
    DAT_1000b158 = 0;
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
      local_438[1] = 0x10000813;
      recovered_10001e26(puVar3[-1],*puVar3,&local_28);
      puVar3 = puVar3 + 2;
      lVar2 = extraout_RAX;
    }
    if (DAT_1000b158 == 0) {
      uVar5 = _DAT_00006088 & 0xfffffff0;
      if (_DAT_00006088 < 0x300001) {
        uVar5 = 0x4000000;
      }
      uVar4 = (ulong)uVar5;
      if (uVar5 < 0x300029) {
        uVar4 = 0x4000000;
      }
      local_438[1] = 0x1000085a;
      recovered_10001e26(0x300000,uVar4 - 0x300000,&local_28);
      in_EAX = extraout_EAX;
    }
    DAT_1000b150 = '\x01';
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
#undef DAT_1000b150
#undef DAT_1000b158
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef local_438
#undef local_28

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000086f
 */

ulong recovered_1000086f(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000611();
  uVar3 = 0;
  for (plVar1 = &DAT_1000b158; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
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

#undef DAT_1000b158

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a6
 */

long recovered_100008a6(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000611();
  lVar1 = 0;
  for (plVar2 = &DAT_1000b158; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_1000b158

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008d1
 */

ulong recovered_100008d1(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000611();
  uVar3 = 0;
  for (plVar1 = &DAT_1000b158; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
  {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_1000b158

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000902
 */

long recovered_10000902(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000611();
  lVar1 = 0;
  for (plVar2 = &DAT_1000b158; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = lVar1 + *plVar2;
  }
  return lVar1;
}

#undef DAT_1000b158

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000927
 */

ulong * recovered_10000927(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  recovered_10000611();
  uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
  puVar2 = &DAT_1000b158;
  do {
    puVar2 = (ulong *)*puVar2;
    if (puVar2 == (ulong *)0x0) {
      return (ulong *)0x0;
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
        return puVar2 + 4;
      }
    }
    puVar2 = puVar2 + 1;
  } while( true );
}

#undef DAT_1000b158

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a9
 */

ulong recovered_100009a9(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    if (param_2 < 0x40) {
      uVar1 = (uint)param_1;
      bVar2 = (byte)param_2;
      if (param_2 < 0x20) {
        uVar3 = (ulong)(uVar1 << (bVar2 & 0x1f));
        uVar1 = (int)(param_1 >> 0x20) << (bVar2 & 0x1f) | uVar1 >> 0x20 - (bVar2 & 0x1f);
      }
      else {
        uVar1 = uVar1 << (bVar2 & 0x1f);
        uVar3 = 0;
      }
      param_1 = (ulong)uVar1 << 0x20 | uVar3;
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009e5
 */

ulong recovered_100009e5(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  if (0 < (int)param_2) {
    if (param_2 < 0x40) {
      bVar1 = (byte)param_2;
      uVar2 = (uint)(param_1 >> 0x20);
      if (param_2 < 0x20) {
        uVar3 = (uint)param_1 >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
        uVar4 = (ulong)(uVar2 >> (bVar1 & 0x1f)) << 0x20;
      }
      else {
        uVar3 = uVar2 >> (bVar1 & 0x1f);
        uVar4 = 0;
      }
      param_1 = uVar3 | uVar4;
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a24
 */

long recovered_10000a24(long param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a68
 */

void recovered_10000a68(void)

{
  unsigned char frame[64] = {0};

  recovered_10000a74();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a74
 */

ulonglong recovered_10000a74(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;
  long *in_RDX;
  ulong in_RSI;
  ulong in_RDI;
  long lVar4;
  ulong uVar5;
  ulong uVar6;

  if (in_RSI == 0) {
    lVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = 0;
    for (uVar3 = 0x3f; -1 < (int)uVar3; uVar3 = (ulong)((int)uVar3 - 1)) {
      uVar1 = (ulong)((in_RDI >> (uVar3 & 0x3f) & 1) != 0) + lVar4 * 2;
      uVar5 = 1L << ((byte)uVar3 & 0x3f);
      if (uVar1 < in_RSI) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = in_RSI;
      }
      uVar2 = uVar2 | uVar5;
      lVar4 = uVar1 - uVar6;
    }
  }
  if (in_RDX != (long *)0x0) {
    *in_RDX = lVar4;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ace
 */

undefined8 recovered_10000ace(void)

{
  unsigned char frame[64] = {0};

  recovered_10000a74();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aee
 */

ulonglong recovered_10000aee(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_10000a74();
  uVar2 = -uVar1;
  if (-1 < (long)(param_2 ^ param_1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b2a
 */

undefined8 recovered_10000b2a(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    return 0;
  }
  recovered_10000a74();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b7d
 */

void recovered_10000b7d(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b85
 */

int recovered_10000b85(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-param_1 < 0) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef _DAT_0000684c
#define _DAT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b92
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000b92(ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001e86();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000684c == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000bbc. Too many branches */
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
 * Address: 0x10000bc7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000bc7(void *buffer)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10001e86();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000bf1. Too many branches */
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
 * Address: 0x10000bfa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000bfa(void *buffer,ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001e86();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006854 == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*(code *)(ulong)_DAT_00006854)(buffer,size);
  return pvVar2;
}

#undef DAT_00006854
#undef _DAT_00006854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c32
 */

void * recovered_10000c32(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c4f
 */

void * recovered_10000c4f(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (size != 0 && out != data) {
    if (out < data) {
      for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
        *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
      }
    }
    else {
      while (size != 0) {
        *(undefined1 *)((long)out + (size - 1)) = *(undefined1 *)((long)data + (size - 1));
        size = size - 1;
      }
    }
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c9b
 */

void * recovered_10000c9b(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb4
 */

void recovered_10000cb4(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cca
 */

void recovered_10000cca(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

int recovered_10000ce0(void *left,void *right,ulong size)

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
    pbVar1 = (byte *)((long)left + uVar3);
    pbVar2 = (byte *)((long)right + uVar3);
    uVar3 = uVar3 + 1;
  } while (*pbVar1 == *pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d07
 */

bool recovered_10000d07(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d18
 */

bool recovered_10000d18(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d29
 */

bool recovered_10000d29(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d3d
 */

bool recovered_10000d3d(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d5f
 */

bool recovered_10000d5f(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d76
 */

bool recovered_10000d76(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d87
 */

int recovered_10000d87(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + 0x20;
  if (param_1 - 0x5bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d99
 */

int recovered_10000d99(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = param_1 + -0x20;
  if (param_1 - 0x7bU < 0xffffffe6) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dab
 */

ulong recovered_10000dab(char *text)

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
 * Address: 0x10000dc5
 */

int recovered_10000dc5(char *left,char *right)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  long lVar2;

  lVar2 = 0;
  while( true ) {
    bVar1 = left[lVar2];
    if ((bVar1 == 0) || (bVar1 != right[lVar2])) break;
    lVar2 = lVar2 + 1;
  }
  return (uint)bVar1 - (uint)(byte)right[lVar2];
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de6
 */

void recovered_10000de6(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10000dc5(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000df0
 */

void recovered_10000df0(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar2);
    *(char *)(param_1 + lVar2) = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e08
 */

void * recovered_10000e08(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000dab(param_1);
    out = recovered_10000b92(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000c32(out,param_1,uVar1 + 1);
      return out;
    }
  }
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e56
 */

ulonglong recovered_10000e56(void)

{
  unsigned char frame[64] = {0};

  char in_SIL;
  char *in_RDI;

  while( true ) {
    if (*in_RDI == '\0') {
      if (in_SIL != '\0') {
        in_RDI = (char *)0x0;
      }
      return (ulonglong)in_RDI;
    }
    if (in_SIL == *in_RDI) break;
    in_RDI = in_RDI + 1;
  }
  return (ulonglong)in_RDI;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e7c
 */

long recovered_10000e7c(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;

  lVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + lVar2) == '\0') {
      return lVar2;
    }
    uVar1 = recovered_10000e56();
    if (uVar1 == 0) break;
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb8
 */

char * recovered_10000eb8(char *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    uVar1 = recovered_10000e56();
    if (uVar1 != 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee8
 */

char * recovered_10000ee8(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      lVar3 = 0;
      do {
        pcVar1 = param_2 + lVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + lVar3;
        lVar3 = lVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


#undef DAT_100090a7
#define DAT_100090a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f17
 */

undefined * recovered_10000f17(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100090a7;
}

#undef DAT_100090a7

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2a30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f24
 */

undefined ** recovered_10000f24(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_1000b000;
}

#undef PTR_DAT_1000b000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f31
 */

undefined8 recovered_10000f31(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_100085d0
#define DAT_100085d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f48
 */

float recovered_10000f48(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint in_EDI;
  double in_XMM0_Qa;

  for (uVar1 = in_EDI; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    in_XMM0_Qa = in_XMM0_Qa + in_XMM0_Qa;
  }
  for (uVar1 = (int)in_EDI >> 0x1f & in_EDI; uVar1 != 0; uVar1 = uVar1 + 1) {
    in_XMM0_Qa = in_XMM0_Qa * DAT_100085d0;
  }
  return SUB84(in_XMM0_Qa,0);
}

#undef DAT_100085d0

#undef DAT_100085d0
#define DAT_100085d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008650
#define DAT_10008650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10008650
#define _DAT_10008650 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f77
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10000f77(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *in_RDI;
  float fVar2;
  double in_XMM0_Qa;
  double dVar3;

  if (in_RDI != (int *)0x0) {
    *in_RDI = 0;
  }
  fVar2 = 0.0;
  if ((in_XMM0_Qa != 0.0) || (NAN(in_XMM0_Qa))) {
    dVar3 = (double)(_DAT_10008650 ^ (ulong)in_XMM0_Qa);
    if ((double)(_DAT_10008650 ^ (ulong)in_XMM0_Qa) <= in_XMM0_Qa) {
      dVar3 = in_XMM0_Qa;
    }
    iVar1 = 0;
    for (; DAT_100085d8 <= dVar3; dVar3 = dVar3 * DAT_100085d0) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar3 && (dVar3 < DAT_100085d0)); dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    if (in_RDI != (int *)0x0) {
      *in_RDI = iVar1;
    }
    fVar2 = (float)(~-(uint)(in_XMM0_Qa < 0.0) & SUB84(dVar3,0) |
                   ((uint)_DAT_10008650 ^ SUB84(dVar3,0)) & -(uint)(in_XMM0_Qa < 0.0));
  }
  return fVar2;
}

#undef DAT_100085d0
#undef DAT_100085d8
#undef DAT_10008650
#undef _DAT_10008650

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001009
 */

double recovered_10001009(double left,double right)

{
  unsigned char frame[64] = {0};

  if ((right == 0.0) && (!NAN(right))) {
    return 0.0;
  }
  return left - (double)(int)(left / right) * right;
}


#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001038
 */

double recovered_10001038(double left,double right)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;

  dVar3 = 0.0;
  if (((double)(int)right == right) && (!NAN((double)(int)right) && !NAN(right))) {
    uVar1 = (uint)right;
    if (uVar1 == 0) {
      return DAT_100085d8;
    }
    uVar2 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar2 = uVar1;
    }
    dVar3 = DAT_100085d8;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        dVar3 = dVar3 * left;
      }
      left = left * left;
    }
    if ((int)uVar1 < 0) {
      return DAT_100085d8 / dVar3;
    }
  }
  return dVar3;
}

#undef DAT_100085d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010a0
 */

double recovered_100010a0(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c9
 */

double recovered_100010c9(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_100085d8 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_100085d8

#undef DAT_100085d0
#define DAT_100085d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000111b
 */

double recovered_1000111b(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  double dVar3;

  dVar3 = 0.0;
  if (0.0 < value) {
    dVar3 = value;
    if (value <= DAT_100085d8) {
      dVar3 = DAT_100085d8;
    }
    iVar1 = 0x18;
    while (bVar2 = iVar1 != 0, iVar1 = iVar1 + -1, bVar2) {
      dVar3 = (value / dVar3 + dVar3) * DAT_100085d0;
    }
  }
  return dVar3;
}

#undef DAT_100085d0
#undef DAT_100085d8

#undef DAT_100085d0
#define DAT_100085d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_100085e0
#define DAT_100085e0 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100085e8
#define DAT_100085e8 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100085f0
#define DAT_100085f0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100085f8
#define DAT_100085f8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10008600
#define DAT_10008600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10008608
#define DAT_10008608 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_10008600
#define _DAT_10008600 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001161
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001161(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (value <= 0.0) {
    return DAT_100085e0;
  }
  iVar1 = 0;
  for (; DAT_100085e8 < value; value = value * DAT_100085d0) {
    iVar1 = iVar1 + 1;
  }
  for (; value < DAT_100085f0; value = value + value) {
    iVar1 = iVar1 + -1;
  }
  dVar5 = (DAT_100085f8 + value) / (value + DAT_100085d8);
  dVar3 = 0.0;
  dVar4 = DAT_100085d8;
  dVar6 = dVar5;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar3 = dVar3 + dVar6 / dVar4;
    dVar4 = dVar4 + DAT_10008608;
    dVar6 = dVar5 * dVar5 * dVar6;
  }
  return dVar3 + dVar3 + (double)iVar1 * _DAT_10008600;
}

#undef DAT_100085d0
#undef DAT_100085d8
#undef DAT_100085e0
#undef DAT_100085e8
#undef DAT_100085f0
#undef DAT_100085f8
#undef DAT_10008600
#undef DAT_10008608
#undef _DAT_10008600

#undef DAT_10008660
#define DAT_10008660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121d
 */

long recovered_1000121d(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_10008660 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10008660

#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008610
#define DAT_10008610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10008670
#define DAT_10008670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#undef _DAT_10008610
#define _DAT_10008610 (*(double *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10008670
#define _DAT_10008670 (*(uint128 *)(((uintptr_t)pf_module_state + 0xa0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001241
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001241(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  dVar1 = recovered_10001290();
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_10008670);
  return dVar1 * ((dVar2 / _DAT_10008610 + DAT_100085d8 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8));
}

#undef DAT_100085d8
#undef DAT_10008610
#undef DAT_10008670
#undef _DAT_10008610
#undef _DAT_10008670

#undef DAT_10008618
#define DAT_10008618 (*(double *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10008620
#define DAT_10008620 (*(double *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_10008628
#define DAT_10008628 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
#undef DAT_10008630
#define DAT_10008630 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001290
 */

double recovered_10001290(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  for (; DAT_10008618 < in_XMM0_Qa; in_XMM0_Qa = in_XMM0_Qa + DAT_10008630) {
  }
  for (; in_XMM0_Qa < DAT_10008620; in_XMM0_Qa = in_XMM0_Qa + DAT_10008628) {
  }
  return in_XMM0_Qa;
}

#undef DAT_10008618
#undef DAT_10008620
#undef DAT_10008628
#undef DAT_10008630

#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008638
#define DAT_10008638 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10008680
#define DAT_10008680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef _DAT_10008680
#define _DAT_10008680 (*(uint128 *)(((uintptr_t)pf_module_state + 0xb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ce
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100012ce(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  dVar1 = recovered_10001290();
  dVar1 = dVar1 * dVar1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_10008680);
  return (DAT_10008638 * dVar1 + DAT_100085d8 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8);
}

#undef DAT_100085d8
#undef DAT_10008638
#undef DAT_10008680
#undef _DAT_10008680

#undef DAT_10008650
#define DAT_10008650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10008650
#define _DAT_10008650 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001319
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001319(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10008650 ^ (ulong)value);
  if ((double)(_DAT_10008650 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}

#undef DAT_10008650
#undef _DAT_10008650

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001333
 */

float recovered_10001333(float left,float right)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - (float)(int)(left / right) * right;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001369
 */

undefined8 recovered_10001369(void)

{
  unsigned char frame[64] = {0};

  float fVar1;
  undefined4 extraout_XMM0_Db = 0;

  fVar1 = recovered_10000f77();
  return CONCAT44(extraout_XMM0_Db,(float)pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar1)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000137c
 */

undefined8 recovered_1000137c(void)

{
  unsigned char frame[64] = {0};

  float fVar1;
  undefined4 extraout_XMM0_Db = 0;

  fVar1 = recovered_10000f48();
  return CONCAT44(extraout_XMM0_Db,(float)pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar1)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000138f
 */

float recovered_1000138f(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001038((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a6
 */

float recovered_100013a6(float value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  return (float)(double)(~uVar1 & (ulong)(double)(int)value |
                        (ulong)(double)((int)value + -1) & uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d7
 */

float recovered_100013d7(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010c9((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ea
 */

double recovered_100013ea(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_100010c9(value);
    return dVar2;
  }
  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001423
 */

float recovered_10001423(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100013ea((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001436
 */

float recovered_10001436(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000111b((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001449
 */

float recovered_10001449(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001161((double)value);
  return (float)dVar1;
}


#undef DAT_10008660
#define DAT_10008660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000145c
 */

long recovered_1000145c(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_10008660 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10008660

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001480
 */

float recovered_10001480(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001241((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001493
 */

float recovered_10001493(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100012ce((double)value);
  return (float)dVar1;
}


#undef DAT_10008690
#define DAT_10008690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef _DAT_10008690
#define _DAT_10008690 (*(uint *)(((uintptr_t)pf_module_state + 0xc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100014a6(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = (float)(_DAT_10008690 ^ (uint)value);
  if ((float)(_DAT_10008690 ^ (uint)value) <= value) {
    fVar1 = value;
  }
  return fVar1;
}

#undef DAT_10008690
#undef _DAT_10008690

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014bd
 */

long recovered_100014bd(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  pbVar5 = param_1;
  while( true ) {
    bVar1 = *pbVar5;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar6 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar5 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar5 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar3 == 0x30) {
      if ((pbVar5[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar5 + uVar6 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    pbVar3 = pbVar3 + 1;
    uVar2 = recovered_100015bd();
    if (param_3 <= uVar2) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar2;
    param_1 = pbVar3;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar4 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar4 = lVar7;
  }
  return lVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015bd
 */

uint recovered_100015bd(void)

{
  unsigned char frame[64] = {0};

  char cVar1;
  uint uVar2;
  int in_EDI;

  cVar1 = (char)in_EDI;
  if ((byte)(cVar1 - 0x30U) < 10) {
    uVar2 = in_EDI - 0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    uVar2 = in_EDI - 0x57;
  }
  else {
    uVar2 = 0xffffffff;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      uVar2 = in_EDI - 0x37;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f0
 */

long recovered_100015f0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  pbVar5 = param_1;
  while( true ) {
    bVar1 = *pbVar5;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar6 = (ulong)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar3 = pbVar5 + uVar6;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) {
      pbVar3 = pbVar5 + uVar6 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar3 == 0x30) {
      if ((pbVar5[uVar6 + 1] | 0x20) == 0x78) {
        pbVar3 = pbVar5 + uVar6 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  lVar7 = 0;
  while( true ) {
    pbVar3 = pbVar3 + 1;
    uVar2 = recovered_100015bd();
    if (param_3 <= uVar2) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar2;
    param_1 = pbVar3;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar4 = -lVar7;
  if (bVar1 != 0x2d) {
    lVar4 = lVar7;
  }
  return lVar4;
}


#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10008640
#define DAT_10008640 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008650
#define DAT_10008650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef _DAT_10008650
#define _DAT_10008650 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100016f0(char *text,char **end)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  float fVar6;
  double dVar7;
  undefined4 extraout_XMM0_Db = 0;
  double dVar8;
  double dVar9;

  pbVar2 = (byte *)text;
  while( true ) {
    bVar1 = *pbVar2;
    if ((0x20 < (ulong)bVar1) || ((0x100003e00U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) break;
    pbVar2 = pbVar2 + 1;
  }
  dVar7 = 0.0;
  bVar4 = false;
  for (pbVar2 = pbVar2 + ((bVar1 - 0x2b & 0xfd) == 0); bVar3 = *pbVar2, (byte)(bVar3 - 0x30) < 10;
      pbVar2 = pbVar2 + 1) {
    dVar7 = dVar7 * DAT_10008640 + (double)(int)(bVar3 - 0x30);
    bVar4 = true;
  }
  dVar9 = DAT_100085d8;
  if (bVar3 == 0x2e) {
    dVar8 = 0.0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
      if (9 < (byte)(bVar3 - 0x30)) break;
      dVar8 = dVar8 * DAT_10008640 + (double)(int)(bVar3 - 0x30);
      dVar9 = dVar9 * DAT_10008640;
      bVar4 = true;
    }
  }
  else {
    dVar8 = 0.0;
  }
  if (bVar4) {
    dVar7 = dVar7 + dVar8 / dVar9;
    if ((bVar3 | 0x20) == 0x65) {
      if (pbVar2[1] == 0x2b) {
        pbVar5 = pbVar2 + 2;
      }
      else if (pbVar2[1] == 0x2d) {
        pbVar5 = pbVar2 + 2;
      }
      else {
        pbVar5 = pbVar2 + 1;
      }
      bVar4 = false;
      for (; (byte)(*pbVar5 - 0x30) < 10; pbVar5 = pbVar5 + 1) {
        bVar4 = true;
      }
      if (bVar4) {
        fVar6 = recovered_10000f48();
        dVar7 = pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar6));
        pbVar2 = pbVar5;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar2;
    }
    if (bVar1 == 0x2d) {
      dVar7 = (double)((ulong)dVar7 ^ _DAT_10008650);
    }
    return dVar7;
  }
  if (end == (char **)0x0) {
    return 0.0;
  }
  *end = text;
  return 0.0;
}

#undef DAT_100085d8
#undef DAT_10008640
#undef DAT_10008650
#undef _DAT_10008650

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001846
 */

float recovered_10001846(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100016f0(text,end);
  return (float)dVar1;
}


#undef DAT_10008640
#define DAT_10008640 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10008650
#define DAT_10008650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100090d5
#define DAT_100090d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb05U)))
#undef UNK_10008658
#define UNK_10008658 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x88U)))
#undef _DAT_10008650
#define _DAT_10008650 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x80U)))
#define local_48 (*(ulong *)(frame + 16))
#define local_40 (*(char * *)(frame + 24))
#define local_34 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001855
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001855(char *out,ulong capacity,char *format,void *arguments)

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
LAB_10001897:
  cVar2 = *format;
  if (cVar2 != '%') {
    if (cVar2 == '\0') {
      if (capacity != 0) {
        *local_40 = '\0';
      }
      return local_34;
    }
    if (local_48 < 2) goto LAB_100018f2;
    *local_40 = cVar2;
    goto LAB_100018b8;
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
LAB_1000191c:
    switch((uintptr_t)(cVar2)) {
    case 'c':
      goto switchD_1000192f_caseD_63;
    case 'd':
    case 'i':
switchD_1000192f_caseD_64:
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
switchD_1000192f_caseD_65:
      if (local_48 < 2) goto LAB_100018f2;
      *local_40 = '?';
      goto LAB_100018e4;
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
        dVar12 = (double)((ulong)dVar12 ^ _DAT_10008650);
      }
      recovered_10001d3e((long *)&local_40,&local_48,&local_34,(int)dVar12,10,0);
      if (1 < local_48) {
        *local_40 = '.';
        local_40 = local_40 + 1;
        local_48 = local_48 - 1;
      }
      dVar1 = DAT_10008640;
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
      goto LAB_100018f5;
    case 'h':
    case 'l':
    case 't':
    case 'z':
      goto switchD_1000192f_caseD_68;
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
      recovered_10001cf5((long *)&local_40,&local_48,&local_34,&DAT_100090d5);
      recovered_10001d3e((long *)&local_40,&local_48,&local_34,uVar7,0x10,0);
      goto LAB_100018f5;
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
      recovered_10001cf5((long *)&local_40,&local_48,&local_34,(char *)*puVar4);
      goto LAB_100018f5;
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
      goto LAB_10001c28;
    default:
      if (cVar2 == 'I') goto switchD_1000192f_caseD_64;
      if (cVar2 != 'X') goto switchD_1000192f_caseD_65;
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
      goto LAB_10001c2d;
    }
    uVar10 = 10;
LAB_10001c28:
    iVar8 = 0;
LAB_10001c2d:
    recovered_10001d3e((long *)&local_40,&local_48,&local_34,uVar7,uVar10,iVar8);
    goto LAB_100018f5;
  }
  if (1 < local_48) {
    *local_40 = '%';
LAB_100018e4:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
  goto LAB_100018f2;
switchD_1000192f_caseD_68:
  cVar2 = format[1];
  format = format + 1;
  goto LAB_1000191c;
switchD_1000192f_caseD_63:
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
LAB_100018b8:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
LAB_100018f2:
  local_34 = local_34 + 1;
LAB_100018f5:
  format = format + 1;
  goto LAB_10001897;
}

#undef DAT_10008640
#undef DAT_10008650
#undef DAT_100090d5
#undef UNK_10008658
#undef _DAT_10008650
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cdc
 */

void recovered_10001cdc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef DAT_100090ac
#define DAT_100090ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf5
 */

void recovered_10001cf5(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = &DAT_100090ac;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001cdc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_100090ac

#undef str_100090b3
#define str_100090b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae3U)))
#undef str_100090c4
#define str_100090c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf4U)))
#define local_48 (*(char (*)[32])(frame + 24))
#define uStack_50 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d3e
 */

void recovered_10001d3e(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[128] = {0};

  long lVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = str_100090c4;
  if (param_6 != 0) {
    pcVar2 = str_100090b3;
  }
  lVar1 = 0;
  do {
    local_48[lVar1] = pcVar2[(ulong)param_4 % (ulong)param_5];
    lVar1 = lVar1 + 1;
    bVar3 = param_5 <= param_4;
    param_4 = param_4 / param_5;
  } while (bVar3);
  while (lVar1 != 0) {
    uStack_50 = 0x10001da1;
    recovered_10001cdc(param_1,param_2,param_3,local_48[lVar1 + -1]);
    lVar1 = lVar1 + -1;
  }
  return;
}

#undef str_100090b3
#undef str_100090c4
#undef local_48
#undef uStack_50

#define local_d8 (*(undefined1 (*)[24])(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 40))
#define local_b8 (*(undefined8 *)(frame + 48))
#define local_b0 (*(undefined8 *)(frame + 56))
#define local_a8 (*(undefined8 *)(frame + 64))
#define local_98 (*(undefined8 *)(frame + 80))
#define local_88 (*(undefined8 *)(frame + 96))
#define local_78 (*(undefined8 *)(frame + 112))
#define local_68 (*(undefined8 *)(frame + 128))
#define uStack0000000000000008 (*(undefined1 *)(frame + 240))
#define local_58 (*(undefined8 *)(frame + 144))
#define local_48 (*(undefined8 *)(frame + 160))
#define local_38 (*(undefined8 *)(frame + 176))
#define local_28 (*(undefined8 *)(frame + 192))
#define local_20 (*(undefined1 * *)(frame + 200))
#define local_18 (*(undefined1 * *)(frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db3
 */

int recovered_10001db3(char *out,ulong capacity,char *format,...)

{
  unsigned char frame[264] = {0};

  char in_AL;
  int iVar1;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  local_18 = local_d8;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  local_20 = &uStack0000000000000008;
  local_28 = 0x3000000018;
  local_c0 = in_RCX;
  local_b8 = in_R8;
  local_b0 = in_R9;
  iVar1 = recovered_10001855(out,capacity,format,&local_28);
  return iVar1;
}

#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef uStack0000000000000008
#undef local_58
#undef local_48
#undef local_38
#undef local_28
#undef local_20
#undef local_18

#undef DAT_1000b158
#define DAT_1000b158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e26
 */

void recovered_10001e26(long param_1,ulong param_2,ulong *param_3)

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
    if (DAT_1000b158 == 0) {
      puVar2 = (ulong *)&DAT_1000b158;
    }
    else {
      puVar2 = (ulong *)(*param_3 + 8);
    }
    *puVar2 = (ulong)plVar1;
    *param_3 = (ulong)plVar1;
  }
  return;
}

#undef DAT_1000b158

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
 * Address: 0x10001e86
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10001e86(void)

{
  unsigned char frame[64] = {0};

  int in_EDI;
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

#undef DAT_1000b160
#define DAT_1000b160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b90U)))
#undef DAT_1000b170
#define DAT_1000b170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec4
 */

void recovered_10001ec4(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 != 0) {
    for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
      cVar2 = *(char *)(param_1 + lVar3);
      if (cVar2 == '\b') {
        if (DAT_1000b160 != 0) {
          DAT_1000b160 = DAT_1000b160 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f71(1);
        }
        else {
          if (DAT_1000b160 - 0x1ffU < 0xfffffffffffffe00) {
            recovered_10001f71(0);
          }
          pcVar1 = &DAT_1000b170 + DAT_1000b160;
          DAT_1000b160 = DAT_1000b160 + 1;
          *pcVar1 = cVar2;
        }
      }
    }
  }
  return;
}

#undef DAT_1000b160
#undef DAT_1000b170

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000b160
#define DAT_1000b160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b90U)))
#undef DAT_1000b170
#define DAT_1000b170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2ba0U)))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f71
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f71(byte param_1)

{
  unsigned char frame[568] = {0};

  uchar uVar1;
  ulong uVar2;

  if ((DAT_1000b160 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_1000b160 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c32(local_208,&DAT_1000b170,DAT_1000b160);
      uVar2 = DAT_1000b160;
    }
    local_208[uVar2] = 0;
    uVar1 = recovered_10002c8d();
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006840 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_1000b160 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_1000b160
#undef DAT_1000b170
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fef
 */

void recovered_10001fef(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f71(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ffc
 */

void recovered_10001ffc(void)

{
  unsigned char frame[64] = {0};

  recovered_10001f71(0);
  return;
}


#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_100090d8
#define DAT_100090d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb08U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002008
 */

void recovered_10002008(char *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_100090d8;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_100090ab;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10001db3(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10001ec4((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_100090ab
#undef DAT_100090d8
#undef local_148

#undef DAT_100091c2
#define DAT_100091c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_100090db
#define str_100090db (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0bU)))
#undef str_100090fe
#define str_100090fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2eU)))
#undef str_10009137
#define str_10009137 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb67U)))
#undef str_1000916c
#define str_1000916c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9cU)))
#undef str_10009192
#define str_10009192 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000205d
 */

void recovered_1000205d(void)

{
  unsigned char frame[64] = {0};

  recovered_100020aa(str_100090db);
  recovered_100020aa(str_100090fe);
  recovered_100020aa(str_10009137);
  recovered_100020aa(str_1000916c);
  recovered_100020aa(str_10009192);
  recovered_100020aa(&DAT_100091c2);
  return;
}

#undef DAT_100091c2
#undef str_100090db
#undef str_100090fe
#undef str_10009137
#undef str_1000916c
#undef str_10009192

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020aa
 */

void recovered_100020aa(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10000dab(param_1);
  recovered_10001ec4((long)param_1,uVar1);
  return;
}


#undef DAT_100091c2
#define DAT_100091c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_100091c5
#define str_100091c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020cf
 */

void recovered_100020cf(void)

{
  unsigned char frame[64] = {0};

  recovered_100020aa(str_100091c5);
  recovered_100020aa(&DAT_100091c2);
  return;
}

#undef DAT_100091c2
#undef str_100091c5

#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_100020ec(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;
  long in_RSI;
  long in_RDI;

  if (in_RSI != 0 && in_RDI != 0) {
    recovered_10001ffc();
    uVar1 = recovered_10002c8d();
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006844 != (code *)0x0)) {
      iVar2 = (*(code *)(ulong)_DAT_00006844)();
      return iVar2 != 0;
    }
  }
  return '\0';
}

#undef DAT_00006844
#undef _DAT_00006844

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002151
 */

undefined8 recovered_10002151(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002159
 */

void recovered_10002159(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000215f
 */

undefined1 recovered_1000215f(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_100090d8
#define DAT_100090d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb08U)))
#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
#undef str_10009259
#define str_10009259 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc89U)))
#undef str_10009266
#define str_10009266 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc96U)))
#undef str_10009274
#define str_10009274 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca4U)))
#define local_34 (*(uint *)(frame + 16))
#define local_30 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002167
 */

undefined4 * recovered_10002167(char *param_1,long param_2)

{
  unsigned char frame[100] = {0};

  undefined4 uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;

  if (param_1 == (char *)0x0 || param_2 == 0) {
    DAT_1000b0c0 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10000dc5(param_1,str_10009259);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = recovered_10000dc5(param_1,str_10009266);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      iVar4 = recovered_10000dc5(param_1,str_10009274);
      if (iVar4 != 0) {
        puVar6 = recovered_10000b92(0x340);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_1000b0c0 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000c9b(puVar6,0,0x340);
        *puVar6 = 0;
        uVar7 = recovered_10000e56();
        bVar9 = true;
        bVar8 = true;
        if (uVar7 == 0) {
          uVar7 = recovered_10000e56();
          bVar8 = true;
          if (uVar7 == 0) {
            uVar7 = recovered_10000e56();
            bVar8 = uVar7 != 0;
          }
        }
        *(bool *)(puVar6 + 0x49) = bVar8;
        uVar7 = recovered_10000e56();
        if ((uVar7 == 0) && (uVar7 = recovered_10000e56(), uVar7 == 0)) {
          uVar7 = recovered_10000e56();
          bVar9 = uVar7 != 0;
        }
        *(bool *)((long)puVar6 + 0x125) = bVar9;
        uVar7 = recovered_10000e56();
        *(bool *)((long)puVar6 + 0x126) = uVar7 != 0;
        puVar6[0x48] = 0xffffffff;
        recovered_10001db3((char *)(puVar6 + 1),0xf1,&DAT_100090d8,param_1);
        recovered_10000c9b(&local_34,0,0xc);
        uVar5 = recovered_1000240c();
        if (uVar5 == 0) {
          if (*(char *)((long)puVar6 + 0x125) == '\0') {
            DAT_1000b0c0 = 2;
LAB_100023d6:
            recovered_10000bc7(puVar6);
            return (undefined4 *)0x0;
          }
        }
        else {
          uVar7 = recovered_10000e56();
          if (local_30 != 0 && uVar7 == 0) {
            if (*(char *)((long)puVar6 + 0x125) == '\x01') {
              uVar2 = recovered_10002444();
              if (uVar2 == '\0') goto LAB_100023d6;
              recovered_10000c32(*(void **)(puVar6 + 0x40),(void *)(ulong)local_34,(ulong)local_30);
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
  puVar6 = recovered_10000b92(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_1000b0c0 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000c9b(puVar6,0,0x340);
  *puVar6 = uVar1;
  *(bool *)(puVar6 + 0x49) = iVar3 == 0;
  *(bool *)((long)puVar6 + 0x125) = iVar3 != 0;
  puVar6[0x48] = 0xffffffff;
  recovered_10001db3((char *)(puVar6 + 1),0xf1,&DAT_100090d8,param_1);
  return puVar6;
}

#undef DAT_100090d8
#undef DAT_1000b0c0
#undef str_10009259
#undef str_10009266
#undef str_10009274
#undef local_34
#undef local_30

#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000240c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000240c(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c8d();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006834 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000243b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006834)();
  return uVar2;
}

#undef DAT_00006834
#undef _DAT_00006834

#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002444
 */

uchar recovered_10002444(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong in_RSI;
  long in_RDI;

  if (in_RDI != 0) {
    uVar2 = *(ulong *)(in_RDI + 0x110);
    if (in_RSI <= uVar2) {
      return '\x01';
    }
    uVar1 = 0x100;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while (uVar2 < in_RSI);
    pvVar3 = recovered_10000bfa(*(void **)(in_RDI + 0x100),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(in_RDI + 0x100) = pvVar3;
      *(ulong *)(in_RDI + 0x110) = uVar2;
      *(void **)(in_RDI + 0xf8) = pvVar3;
      return '\x01';
    }
    DAT_1000b0c0 = 0xc;
    *(undefined1 *)(in_RDI + 0x129) = 1;
  }
  return '\0';
}

#undef DAT_1000b0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ca
 */

void recovered_100024ca(char *param_1,long param_2,void *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (void *)0x0) {
    recovered_100024f3(param_3);
  }
  recovered_10002167(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f3
 */

uint recovered_100024f3(void *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000285a();
    if (*(void **)((long)param_1 + 0x100) != (void *)0x0) {
      recovered_10000bc7(*(void **)((long)param_1 + 0x100));
    }
    recovered_10000bc7(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000252d
 */

long recovered_1000252d(long param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  long lVar2;
  long lVar3;

  lVar2 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) && (param_4 != 0)) {
    if (*(char *)(param_4 + 0x124) == '\x01') {
      for (lVar2 = 0; lVar2 != param_3; lVar2 = lVar2 + 1) {
        for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
          uVar1 = recovered_100025b3();
          if (uVar1 == 0xffffffff) {
            return lVar2;
          }
          *(char *)(param_1 + lVar3) = (char)uVar1;
        }
        param_1 = param_1 + param_2;
      }
      lVar2 = param_3;
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b3
 */

uint recovered_100025b3(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uchar uVar2;
  ulong uVar3;
  int *in_RDI;

  if ((in_RDI != (int *)0x0) && ((char)in_RDI[0x49] == '\x01')) {
    uVar1 = in_RDI[0x48];
    if (uVar1 != 0xffffffff) {
      in_RDI[0x48] = -1;
      return uVar1;
    }
    if (*in_RDI == 1) {
      uVar3 = *(ulong *)(in_RDI + 0xce);
      if (uVar3 < *(ulong *)(in_RDI + 0xcc)) {
LAB_10002653:
        *(ulong *)(in_RDI + 0xce) = uVar3 + 1;
        return (uint)*(byte *)((long)in_RDI + uVar3 + 0x12a);
      }
      uVar2 = recovered_100020ec();
      if (uVar2 != '\0') {
        uVar3 = recovered_10000dab((char *)((long)in_RDI + 0x12a));
        *(ulong *)(in_RDI + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)in_RDI + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)in_RDI + *(long *)(in_RDI + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_10002653;
      }
    }
    else {
      uVar3 = *(ulong *)(in_RDI + 0x46);
      if (uVar3 < *(ulong *)(in_RDI + 0x42)) {
        *(ulong *)(in_RDI + 0x46) = uVar3 + 1;
        return (uint)*(byte *)(*(long *)(in_RDI + 0x3e) + uVar3);
      }
    }
    *(undefined1 *)(in_RDI + 0x4a) = 1;
  }
  return 0xffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a5
 */

long recovered_100026a5(void *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar4 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10001ec4((long)param_1,uVar4);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar4;
      goto LAB_100027bd;
    }
    if (*(char *)((long)param_4 + 0x126) != '\0') {
      *(undefined8 *)(param_4 + 0x46) = *(undefined8 *)(param_4 + 0x42);
    }
    uVar2 = recovered_10002444();
    if (uVar2 != '\0') {
      uVar1 = *(ulong *)(param_4 + 0x42);
      uVar3 = *(ulong *)(param_4 + 0x46);
      if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
        recovered_10000c9b((void *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar3 - uVar1);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000c32((void *)(uVar3 + *(long *)(param_4 + 0x40)),param_1,uVar4);
      uVar4 = uVar4 + *(long *)(param_4 + 0x46);
      *(ulong *)(param_4 + 0x46) = uVar4;
      if (*(ulong *)(param_4 + 0x42) < uVar4) {
        *(ulong *)(param_4 + 0x42) = uVar4;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100027bd;
    }
  }
  param_3 = 0;
LAB_100027bd:
  return param_3;
}


#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027be
 */

undefined8 recovered_100027be(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000b0c0 = 0x16;
    return 0xffffffffffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_100027cc;
        lVar1 = 0x108;
      }
      param_2 = param_2 + *(long *)((long)param_1 + lVar1);
    }
    if (-1 < (long)param_2) {
      *(ulong *)(param_1 + 0x46) = param_2;
      *(bool *)(param_1 + 0x4a) = *(ulong *)(param_1 + 0x42) <= param_2;
      param_1[0x48] = -1;
      return 0;
    }
  }
LAB_100027cc:
  DAT_1000b0c0 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffffffffffff;
}

#undef DAT_1000b0c0

#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002837
 */

undefined8 recovered_10002837(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_1000b0c0 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000b0c0

#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000285a
 */

uint recovered_1000285a(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int *in_RDI;

  uVar2 = 0;
  if (((in_RDI != (int *)0x0) && (*in_RDI == 0)) && (*(char *)((long)in_RDI + 0x127) == '\x01')) {
    uVar1 = recovered_10002a28();
    if (uVar1 == 0) {
      DAT_1000b0c0 = 5;
      *(undefined1 *)((long)in_RDI + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((long)in_RDI + 0x127) = 0;
    }
  }
  return uVar2;
}

#undef DAT_1000b0c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028be
 */

undefined1 recovered_100028be(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d4
 */

undefined1 recovered_100028d4(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028ea
 */

void recovered_100028ea(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002904
 */

ulong recovered_10002904(uint param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == 0xffffffff || param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (ulong)(param_1 & 0xff);
    *(uint *)(param_2 + 0x120) = param_1 & 0xff;
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return uVar1;
}


#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

undefined8 recovered_10002930(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    DAT_1000b0c0 = 0x16;
  }
  else {
    uVar1 = recovered_1000295b();
    if (uVar1 != 0) {
      return 0;
    }
    DAT_1000b0c0 = 5;
  }
  return 0xffffffffffffffff;
}

#undef DAT_1000b0c0

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000295b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000295b(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c8d();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000683c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_0000683c)();
  return uVar2;
}

#undef DAT_0000683c
#undef _DAT_0000683c

#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
#define local_2c (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002990
 */

undefined8 recovered_10002990(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_1000b0c0 = 0x16;
    return 0xffffffffffffffff;
  }
  recovered_10000c9b(local_2c,0,0xc);
  uVar1 = recovered_1000240c();
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = recovered_10002a28();
    uVar2 = 5;
    if ((uVar1 != 0) && (uVar1 = recovered_1000295b(), uVar1 != 0)) {
      return 0;
    }
  }
  DAT_1000b0c0 = uVar2;
  return 0xffffffffffffffff;
}

#undef DAT_1000b0c0
#undef local_2c

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10002a28(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002c8d();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006838 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006838)();
  return uVar2;
}

#undef DAT_00006838
#undef _DAT_00006838

#define local_38 (*(uint *)(frame + 20))
#define local_3c (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a73
 */

ulong recovered_10002a73(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10000c9b(&local_3c,0,0xc);
    uVar1 = recovered_1000240c();
    if (uVar1 == 0) goto LAB_10002b06;
    out = recovered_10000b92((ulong)(local_38 + (local_38 == 0)));
    if (out != (void *)0x0) {
      if ((ulong)local_38 == 0) {
        uVar2 = 0;
      }
      else {
        recovered_10000c32(out,(void *)(ulong)local_3c,(ulong)local_38);
        uVar2 = (ulong)local_38;
      }
      *param_2 = out;
      *param_3 = uVar2;
      uVar2 = CONCAT71((int7)((ulong)out >> 8),1);
      goto LAB_10002b06;
    }
  }
  uVar2 = 0;
LAB_10002b06:
  return uVar2 & 0xffffffff;
}

#undef local_38
#undef local_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b18
 */

undefined8 recovered_10002b18(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_var = 0;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return 0;
  }
  uVar1 = recovered_10002a28();
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),uVar1 != 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

undefined8 recovered_10002b40(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b48
 */

void recovered_10002b48(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b4e
 */

undefined8 recovered_10002b4e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b56
 */

undefined8 recovered_10002b56(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b5e
 */

undefined8 recovered_10002b5e(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b66
 */

long recovered_10002b66(long param_1,char param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;

  lVar3 = param_1 + -1;
  do {
    bVar4 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      return 0;
    }
    lVar1 = lVar3 + 1;
    pcVar2 = (char *)(lVar3 + 1);
    lVar3 = lVar1;
  } while (*pcVar2 != param_2);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b86
 */

int recovered_10002b86(char *left,char *right,ulong size)

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


#undef DAT_100091e8
#define DAT_100091e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc18U)))
#undef str_100091eb
#define str_100091eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1bU)))
#undef str_100091f8
#define str_100091f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc28U)))
#undef str_10009202
#define str_10009202 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_10009216
#define str_10009216 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc46U)))
#undef str_10009224
#define str_10009224 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc54U)))
#undef str_10009236
#define str_10009236 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc66U)))
#undef str_10009242
#define str_10009242 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_10009253
#define str_10009253 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb4
 */

char * recovered_10002bb4(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_100091e8;
    break;
  case 2:
    pcVar1 = str_100091eb;
    break;
  case 5:
    pcVar1 = str_100091f8;
    break;
  case 9:
    pcVar1 = str_10009202;
    break;
  case 0xc:
    pcVar1 = str_10009216;
    break;
  case 0xd:
    pcVar1 = str_10009224;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10009236;
    }
    if (param_1 == 0x16) {
      return str_10009242;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10009253;
  }
  return pcVar1;
}

#undef DAT_100091e8
#undef str_100091eb
#undef str_100091f8
#undef str_10009202
#undef str_10009216
#undef str_10009224
#undef str_10009236
#undef str_10009242
#undef str_10009253

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c64
 */

undefined8 recovered_10002c64(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c6c
 */

undefined8 recovered_10002c6c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffffffffffff;
}


#undef DAT_1000b370
#define DAT_1000b370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2da0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c75
 */

void recovered_10002c75(void)

{
  unsigned char frame[64] = {0};

  DAT_1000b370 = DAT_1000b370 + 1;
  return;
}

#undef DAT_1000b370

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
 * Address: 0x10002c8d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10002c8d(void)

{
  unsigned char frame[64] = {0};

  int in_EDI;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd0
 */

void recovered_10002cd0(long param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cde
 */

undefined8 recovered_10002cde(undefined8 *param_1)

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
 * Address: 0x10002d0b
 */

void recovered_10002d0b(long param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


#undef DAT_10002d8a
#define DAT_10002d8a (*(uint8_t *)(0x10002d8aU))
#undef DAT_10009284
#define DAT_10009284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcb4U)))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d39
 */

double recovered_10002d39(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10009284;
  local_50 = &DAT_10002d8a;
  local_80 = 1;
  recovered_1000320a(&local_88);
  recovered_10000b7d();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002d8a
#undef DAT_10009284
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc0
 */

undefined8 recovered_10002dc0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc3
 */

void recovered_10002dc3(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002de0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


#undef DAT_1000b378
#define DAT_1000b378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de0
 */

long recovered_10002de0(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_1000b378;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_1000b378 = param_1;
  lVar1 = recovered_1000310f(param_1);
  return lVar1;
}

#undef DAT_1000b378

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e03
 */

void * recovered_10002e03(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000b92(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000b7d();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e2d
 */

void * recovered_10002e2d(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002e03(size);
  return pvVar1;
}


#undef DAT_10009294
#define DAT_10009294 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc4U)))
#undef LAB_10002ea4
#define LAB_10002ea4 (*(uint8_t *)(0x10002ea4U))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e37
 */

void recovered_10002e37(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10009294;
  local_50 = &LAB_10002ea4;
  local_80 = 1;
  recovered_1000320a(&local_88);
  recovered_10000bc7(data);
  recovered_10003221(&local_88);
  return;
}

#undef DAT_10009294
#undef LAB_10002ea4
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88
#undef local_80

#undef DAT_100092a4
#define DAT_100092a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcd4U)))
#undef LAB_10002f3d
#define LAB_10002f3d (*(uint8_t *)(0x10002f3dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed0
 */

void recovered_10002ed0(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_100092a4;
  local_50 = &LAB_10002f3d;
  local_80 = 1;
  recovered_1000320a(&local_88);
  recovered_10000bc7(data);
  recovered_10003221(&local_88);
  return;
}

#undef DAT_100092a4
#undef LAB_10002f3d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_100092b4
#define DAT_100092b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce4U)))
#undef LAB_10002fd5
#define LAB_10002fd5 (*(uint8_t *)(0x10002fd5U))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f68
 */

void recovered_10002f68(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_100092b4;
  local_50 = &LAB_10002fd5;
  local_80 = 1;
  recovered_1000320a(&local_88);
  recovered_10000bc7(param_1);
  recovered_10003221(&local_88);
  return;
}

#undef DAT_100092b4
#undef LAB_10002fd5
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

#undef DAT_100092c4
#define DAT_100092c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcf4U)))
#undef LAB_1000306d
#define LAB_1000306d (*(uint8_t *)(0x1000306dU))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_88 (*(undefined8 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003000
 */

void recovered_10003000(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_100092c4;
  local_50 = &LAB_1000306d;
  local_80 = 1;
  recovered_1000320a(&local_88);
  recovered_10000bc7(param_1);
  recovered_10003221(&local_88);
  return;
}

#undef DAT_100092c4
#undef LAB_1000306d
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40
#undef local_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003098
 */

undefined8 recovered_10003098(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a0
 */

uint recovered_100030a0(void)

{
  unsigned char frame[64] = {0};

  uint *in_RDI;

  return ~*in_RDI & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030ad
 */

void recovered_100030ad(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b6
 */

void recovered_100030b6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030bc
 */

long recovered_100030bc(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong uVar2;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar1 = recovered_10000b92(size);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002d39();
  }
  for (uVar2 = 0; size != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar2) = 0;
  }
  return (long)pvVar1 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030fa
 */

void recovered_100030fa(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000bc7((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000310f
 */

long recovered_1000310f(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_1000b378
#define DAT_1000b378 (*(void * *)(((uintptr_t)pf_module_state + 0x2da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003119
 */

void recovered_10003119(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *buffer;

  buffer = DAT_1000b378;
  if (DAT_1000b378 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_1000b378 + 0x10);
    DAT_1000b378 = *(void **)((long)DAT_1000b378 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)buffer + 0x28) == '\0') {
      if (*(code **)((long)buffer + 8) != (code *)0x0) {
        (**(code **)((long)buffer + 8))((long)buffer + 0x30);
      }
      recovered_10000bc7(buffer);
      return;
    }
  }
  return;
}

#undef DAT_1000b378

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003165
 */

void recovered_10003165(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
  recovered_10003188();
  return;
}


#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003188
 */

/* WARNING: Removing unreachable block (ram,0x100031cc) */

void recovered_10003188(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = &DAT_1000b380;
  while (puVar1 = (undefined8 *)*puVar1, puVar1 != (undefined8 *)0x0) {
    recovered_10003649();
  }
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}

#undef DAT_1000b380

#undef DAT_1000b378
#define DAT_1000b378 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2da8U)))
#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e5
 */

void recovered_100031e5(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000b378;
  if (DAT_1000b378 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002d39();
  }
  *(undefined1 *)(DAT_1000b378 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  recovered_10003188();
  *puVar1 = DAT_1000b380;
  DAT_1000b380 = puVar1;
  return;
}

#undef DAT_1000b378
#undef DAT_1000b380

#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000320a
 */

void recovered_1000320a(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_1000b380;
  DAT_1000b380 = param_1;
  return;
}

#undef DAT_1000b380

#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003221
 */

void recovered_10003221(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_1000b380;
  if (DAT_1000b380 == param_1) {
    puVar2 = &DAT_1000b380;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1000b380

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003252
 */

void recovered_10003252(void)

{
  unsigned char frame[64] = {0};

  recovered_10003188();
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000325b
 */

void recovered_1000325b(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003264
 */

ulonglong recovered_10003264(void)

{
  unsigned char frame[64] = {0};

  ulonglong extraout_RAX = 0;
  long in_RDI;

  if (DAT_1000b380 != (undefined8 *)0x0) {
    DAT_1000b380 = (undefined8 *)*DAT_1000b380;
  }
  recovered_10003283(in_RDI);
  return extraout_RAX;
}

#undef DAT_1000b380

#undef DAT_1000b380
#define DAT_1000b380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x2db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003283
 */

/* WARNING: Removing unreachable block (ram,0x100032c6) */
/* WARNING: Removing unreachable block (ram,0x100032ee) */

void recovered_10003283(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 in_RSI;

  while( true ) {
    puVar1 = DAT_1000b380;
    if (DAT_1000b380 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002d39();
    }
    if (DAT_1000b380 == *(undefined8 **)(param_1 + 0x18)) break;
    in_RSI = *(undefined8 *)param_1;
    recovered_10003649();
    DAT_1000b380 = (undefined8 *)*puVar1;
  }
  DAT_1000b380[2] = param_1;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x20);
  recovered_10002cd0((long)puVar1,in_RSI);
                    /* WARNING: Subroutine does not return */
  recovered_10003264();
}

#undef DAT_1000b380

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003304
 */

void recovered_10003304(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003264();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000330d
 */

undefined8 recovered_1000330d(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003315
 */

void recovered_10003315(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000331e
 */

long recovered_1000331e(long *param_1,undefined8 param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;

  if (param_3 == 0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + -0x10);
  uVar2 = recovered_1000335e();
  lVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar3 = (long)param_1 + lVar1;
  }
  return lVar3;
}


#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000335e
 */

uint recovered_1000335e(void)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  long in_RAX;
  undefined8 *in_RSI;
  undefined8 *in_RDI;
  undefined8 *puVar5;
  long lVar6;

  if (in_RSI == (undefined8 *)0x0) {
    return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  do {
    puVar5 = in_RDI;
    uVar4 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),puVar5 != (undefined8 *)0x0);
    if (puVar5 == in_RSI) {
      return uVar4;
    }
    if (puVar5 == (undefined8 *)0x0) {
      return uVar4;
    }
    in_RAX = puVar5[1];
    lVar3 = in_RSI[1];
    if (lVar3 == 0 || in_RAX == 0) {
      if (in_RAX == lVar3) {
LAB_100033da:
        return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
    }
    else {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(in_RAX + lVar6);
        cVar2 = *(char *)(lVar3 + lVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) goto LAB_100033da;
          break;
        }
        lVar6 = lVar6 + 1;
      } while (cVar1 == cVar2);
    }
    in_RDI = (undefined8 *)0x0;
    if ((undefined *)*puVar5 == &DAT_1000b120) {
      in_RDI = (undefined8 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_1000b120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033de
 */

void recovered_100033de(void)

{
  unsigned char frame[64] = {0};

  recovered_10000b7d();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e8
 */

undefined8 recovered_100033e8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f0
 */

bool recovered_100033f0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003401
 */

bool recovered_10003401(uint param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((param_1 < 0x21) && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000342b
 */

bool recovered_1000342b(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000344b
 */

bool recovered_1000344b(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000346d
 */

bool recovered_1000346d(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003488
 */

byte recovered_10003488(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bb
 */

bool recovered_100034bb(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_100085d0
#define DAT_100085d0 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_100085d8
#define DAT_100085d8 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_100085f8
#define DAT_100085f8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10008638
#define DAT_10008638 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034dd
 */

double recovered_100034dd(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010a0(value);
  if (DAT_100085d0 <= value - dVar1) {
    dVar1 = dVar1 + DAT_100085d8;
  }
  else if (value - dVar1 <= DAT_10008638) {
    dVar1 = dVar1 + DAT_100085f8;
  }
  return dVar1;
}

#undef DAT_100085d0
#undef DAT_100085d8
#undef DAT_100085f8
#undef DAT_10008638

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003528
 */

long recovered_10003528(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;

  for (pbVar2 = param_1; pbVar2 != (byte *)0x0; pbVar2 = pbVar2 + 1) {
    bVar3 = *pbVar2;
    if ((0x20 < (ulong)bVar3) || ((0x100003e00U >> ((ulong)bVar3 & 0x3f) & 1) == 0))
    goto LAB_1000355e;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = DAT_00000000;
LAB_1000355e:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar7 = bVar3 == 0x2d;
    pbVar2 = pbVar2 + 1;
  }
  else {
    bVar7 = false;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar2[1] | 0x20) == 0x78)) {
      pbVar2 = pbVar2 + 2;
    }
  }
  else if (param_3 == 0) {
    if (*pbVar2 == 0x30) {
      if ((pbVar2[1] | 0x20) == 0x78) {
        pbVar2 = pbVar2 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  pbVar2 = pbVar2 + -1;
  lVar5 = 1;
  lVar1 = 0;
  do {
    lVar6 = lVar1;
    bVar3 = pbVar2[1];
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
    pbVar2 = pbVar2 + 1;
    lVar5 = lVar5 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar1 = (ulong)uVar4 + lVar6 * (ulong)param_3, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar5 == 0) {
      pbVar2 = param_1;
    }
    *param_2 = pbVar2;
  }
  lVar5 = -lVar6;
  if (!bVar7) {
    lVar5 = lVar6;
  }
  return lVar5;
}

#undef DAT_00000000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000363f
 */

uint recovered_1000363f(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  lVar1 = recovered_10003528(in_RDI,in_RSI,in_EDX);
  return (uint)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003649
 */

uchar recovered_10003649(void)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined2 *in_RDX;
  int iVar7;
  long in_RDI;
  char *pcVar8;
  bool bVar9;

  pcVar1 = *(char **)(in_RDI + 0x38);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != -1) {
      recovered_1000384d();
    }
    bVar6 = pcVar1[1];
    if (bVar6 == 0xff) {
      pcVar8 = (char *)0x0;
    }
    else {
      uVar3 = recovered_10003974();
      pcVar8 = pcVar1 + uVar3 + 2;
    }
    uVar3 = recovered_10003974();
    iVar7 = *(int *)(in_RDI + 8);
    if (0 < iVar7) {
      while (pcVar1 + 3 < pcVar1 + 3 + uVar3) {
        uVar4 = recovered_10003974();
        uVar5 = recovered_10003974();
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          *in_RDX = 1;
          *(undefined1 *)(in_RDX + 1) = 0;
          *(int *)(in_RDX + 2) = (int)uVar4;
          *(undefined4 *)(in_RDX + 4) = 0;
          if ((uVar5 & 0xffffffff) == 0) {
            *(undefined1 *)((long)in_RDX + 1) = 1;
            return '\0';
          }
          bVar6 = bVar6 & 0xf;
          iVar7 = 0x40;
          do {
            bVar9 = iVar7 == 0;
            iVar7 = iVar7 + -1;
            if (bVar9) {
              return '\0';
            }
            uVar3 = recovered_100039c8();
            uVar4 = recovered_100039c8();
            if (uVar3 == 0) {
              *(undefined1 *)((long)in_RDX + 1) = 1;
            }
            else if (0 < (long)uVar3) {
              if (((pcVar8 != (char *)0x0 && bVar6 < 0xd) && (~(byte)(0x1c1d >> bVar6) & 1) == 0) &&
                  0 < (int)uVar3) {
                recovered_1000384d();
              }
              uVar2 = recovered_1000335e();
              if ((char)uVar2 != '\0') {
                *(undefined1 *)(in_RDX + 1) = 1;
                *(int *)(in_RDX + 4) = (int)uVar3;
                return '\x01';
              }
            }
            if (uVar4 == 0) {
              return '\0';
            }
          } while( true );
        }
      }
    }
  }
  *in_RDX = 0;
  *(undefined1 *)(in_RDX + 1) = 0;
  *(undefined8 *)(in_RDX + 2) = 0;
  return '\0';
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000384d
 */

ulonglong recovered_1000384d(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  long lVar4;
  long *in_RSI;
  uint in_EDI;

  if (in_EDI == 0xff) {
    return 0;
  }
  puVar2 = (undefined8 *)0x0;
  if (0xc < (in_EDI & 0xf)) {
    return 0;
  }
  lVar1 = *in_RSI;
  switch((uintptr_t)(in_EDI & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    puVar2 = (undefined8 *)recovered_100039a3();
    lVar4 = lVar1 + 8;
    goto LAB_10003910;
  case 1:
    puVar2 = (undefined8 *)recovered_10003974();
    break;
  case 2:
    puVar2 = (undefined8 *)recovered_100039a3();
    goto LAB_1000390c;
  case 3:
    puVar2 = (undefined8 *)recovered_100039a3();
    goto LAB_100038ca;
  default:
    goto switchD_10003889_caseD_5;
  case 9:
    puVar2 = (undefined8 *)recovered_100039c8();
    break;
  case 10:
    uVar3 = recovered_100039a3();
    puVar2 = (undefined8 *)((long)(short)uVar3 & 0xffffffffffff0000U | uVar3);
LAB_1000390c:
    lVar4 = lVar1 + 2;
LAB_10003910:
    *in_RSI = lVar4;
    break;
  case 0xb:
    uVar3 = recovered_100039a3();
    puVar2 = (undefined8 *)((long)(int)uVar3 & 0xffffffff00000000U | uVar3);
LAB_100038ca:
    lVar4 = lVar1 + 4;
    goto LAB_10003910;
  }
  if ((in_EDI & 0x70) != 0) {
    if ((in_EDI & 0x70) != 0x10) {
      return 0;
    }
    puVar2 = (undefined8 *)((long)puVar2 + lVar1);
  }
  if (((char)in_EDI < '\0') && (puVar2 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*puVar2;
  }
switchD_10003889_caseD_5:
  return (ulonglong)puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003974
 */

ulonglong recovered_10003974(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *in_RDI;

  bVar4 = 0;
  uVar3 = 0;
  pbVar2 = (byte *)*in_RDI;
  do {
    *in_RDI = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (ulong)(bVar1 & 0x7f) << (bVar4 & 0x3f);
    bVar4 = bVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039a3
 */

ulonglong recovered_100039a3(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  byte bVar2;
  long lVar3;
  long in_RSI;
  long in_RDI;

  bVar2 = 0;
  uVar1 = 0;
  for (lVar3 = 0; in_RSI != lVar3; lVar3 = lVar3 + 1) {
    uVar1 = uVar1 | (ulong)*(byte *)(in_RDI + lVar3) << (bVar2 & 0x3f);
    bVar2 = bVar2 + 8;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

ulonglong recovered_100039c8(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *in_RDI;

  uVar3 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*in_RDI;
  do {
    *in_RDI = pbVar2 + 1;
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a14
 */

void recovered_10003a14(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a1a
 */

void recovered_10003a1a(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100092d4
#define DAT_100092d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd04U)))
#undef LAB_10003acb
#define LAB_10003acb (*(uint8_t *)(0x10003acbU))
#define local_98 (*(undefined8 *)(frame + 16))
#define local_90 (*(undefined4 *)(frame + 24))
#define local_78 (*(code * *)(frame + 48))
#define local_70 (*(undefined * *)(frame + 56))
#define local_68 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 80))
#define local_40 (*(undefined1 * *)(frame + 104))
#define local_38 (*(undefined8 *)(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

undefined1 * recovered_10003a20(undefined1 *param_1,ulonglong *param_2)

{
  unsigned char frame[200] = {0};

  ulonglong *puVar1;
  undefined1 *puVar2;

  local_68 = (undefined1 *)((long)(uintptr_t)(frame + 168) + -8);
  local_58 = (undefined1 *)&local_98;
  puVar1 = (ulonglong *)(param_1 + 8);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  local_78 = recovered_10002dc0;
  local_70 = &DAT_100092d4;
  local_60 = &LAB_10003acb;
  local_90 = 1;
  local_40 = param_1;
  local_38 = puVar1;
  recovered_1000320a(&local_98);
  recovered_10003b10(puVar1,param_2);
  puVar2 = local_40;
  local_40[0x30] = 0;
  recovered_10003221(&local_98);
  return puVar2;
}

#undef DAT_100092d4
#undef LAB_10003acb
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b10
 */

ulonglong * recovered_10003b10(ulonglong *param_1,ulonglong *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_100090ab;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000656a(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_100090ab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b46
 */

undefined1 * recovered_10003b46(undefined1 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *param_1 = 0;
  recovered_10003b80((undefined8 *)(param_1 + 8),param_2);
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b80
 */

undefined8 * recovered_10003b80(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    recovered_10002e37((void *)*param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bbe
 */

undefined1 * recovered_10003bbe(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003be4
 */

undefined1 * recovered_10003be4(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 2;
  *(ulong *)(param_1 + 0x28) = param_2 + (ulong)(param_2 == 0);
  param_1[0x30] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c0c
 */

void recovered_10003c0c(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c2c
 */

void recovered_10003c2c(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong *in_RSI;

  *param_1 = 1;
  recovered_10003b10((ulonglong *)(param_1 + 8),in_RSI);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c4e
 */

void recovered_10003c4e(undefined1 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RSI;

  *param_1 = 1;
  recovered_10003b80((undefined8 *)(param_1 + 8),in_RSI);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c70
 */

void recovered_10003c70(undefined1 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c8e
 */

undefined8 * recovered_10003c8e(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  if (*param_2 == '\x02') {
    recovered_10003cd7(param_1);
  }
  else if (*param_2 == '\x01') {
    recovered_100066c8(param_1,(undefined8 *)(param_2 + 8));
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}


#define local_38 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cd7
 */

undefined8 * recovered_10003cd7(undefined8 *param_1)

{
  unsigned char frame[104] = {0};

  long extraout_RAX;
  int extraout_EDX = 0;

  recovered_100066f5();
  if (extraout_EDX == 0) {
    recovered_1000669a(param_1,(long)local_38,extraout_RAX - (long)local_38);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}

#undef local_38

#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_1000b0c0
#define DAT_1000b0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d2a
 */

/* WARNING: Removing unreachable block (ram,0x10003db1) */
/* WARNING: Removing unreachable block (ram,0x10003db6) */
/* WARNING: Removing unreachable block (ram,0x10003dfe) */
/* WARNING: Removing unreachable block (ram,0x10003e07) */
/* WARNING: Removing unreachable block (ram,0x10003e0c) */

ulonglong recovered_10003d2a(void)

{
  unsigned char frame[64] = {0};

  char *in_RDI;
  char *pcVar1;

  if (*in_RDI == '\x01') {
    if (*(long *)(in_RDI + 0x10) != 0) {
      DAT_1000b0c0 = 0;
      recovered_1000363f();
      pcVar1 = *(char **)(in_RDI + 8);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = &DAT_100090ab;
      }
      if (((2 < *(ulong *)(in_RDI + 0x10)) && (*pcVar1 == '0')) &&
         ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
        DAT_1000b0c0 = 0;
        recovered_1000363f();
      }
    }
  }
  else if (*in_RDI == '\x02') {
    return *(ulonglong *)(in_RDI + 0x20);
  }
  return 0;
}

#undef DAT_100090ab
#undef DAT_1000b0c0

#undef DAT_100092dc
#define DAT_100092dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0cU)))
#undef LAB_10003ef4
#define LAB_10003ef4 (*(uint8_t *)(0x10003ef4U))
#define local_a0 (*(undefined8 *)(frame + 24))
#define local_98 (*(undefined4 *)(frame + 32))
#define local_80 (*(code * *)(frame + 56))
#define local_78 (*(undefined * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_60 (*(undefined1 * *)(frame + 88))
#define local_48 (*(undefined8 * *)(frame + 112))
#define local_40 (*(undefined8 * *)(frame + 120))
#define local_38 (*(uintptr_t * *)(frame + 128))
#define auStack_a8 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e22
 */

void recovered_10003e22(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[216] = {0};


  local_70 = (undefined1 *)((long)(uintptr_t)(frame + 184) + -8);
  local_60 = auStack_a8;
  *param_1 = param_2;
  local_38 = param_1 + 1;
  *local_38 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_40 = param_1 + 4;
  *local_40 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x100000001;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xfff;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = 0;
  local_80 = recovered_10002dc0;
  local_78 = &DAT_100092dc;
  local_68 = &LAB_10003ef4;
  local_98 = 1;
  recovered_1000320a(&local_a0);
  local_48 = param_1;
  recovered_10003f40((long)param_1);
  recovered_100051b4((long)local_48);
  recovered_10003221(&local_a0);
  return;
}

#undef DAT_100092dc
#undef LAB_10003ef4
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef local_40
#undef local_38
#undef auStack_a8

#undef DAT_100092e4
#define DAT_100092e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd14U)))
#undef LAB_10004b91
#define LAB_10004b91 (*(uint8_t *)(0x10004b91U))
#undef PTR_recovered_10006cfe_1000a0d0
#define PTR_recovered_10006cfe_1000a0d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1b00U)))
#undef PTR_recovered_10006ea6_1000a128
#define PTR_recovered_10006ea6_1000a128 (*(void * *)(((uintptr_t)pf_module_state + 0x1b58U)))
#undef PTR_recovered_10006fe4_1000a170
#define PTR_recovered_10006fe4_1000a170 (*(void * *)(((uintptr_t)pf_module_state + 0x1ba0U)))
#undef PTR_recovered_1000706a_1000a1b8
#define PTR_recovered_1000706a_1000a1b8 (*(void * *)(((uintptr_t)pf_module_state + 0x1be8U)))
#undef PTR_recovered_100070e6_1000a200
#define PTR_recovered_100070e6_1000a200 (*(void * *)(((uintptr_t)pf_module_state + 0x1c30U)))
#undef PTR_recovered_1000714e_1000a248
#define PTR_recovered_1000714e_1000a248 (*(void * *)(((uintptr_t)pf_module_state + 0x1c78U)))
#undef PTR_recovered_100071c6_1000a290
#define PTR_recovered_100071c6_1000a290 (*(void * *)(((uintptr_t)pf_module_state + 0x1cc0U)))
#undef PTR_recovered_1000736a_1000a2d8
#define PTR_recovered_1000736a_1000a2d8 (*(void * *)(((uintptr_t)pf_module_state + 0x1d08U)))
#undef PTR_recovered_10007474_1000a320
#define PTR_recovered_10007474_1000a320 (*(void * *)(((uintptr_t)pf_module_state + 0x1d50U)))
#undef PTR_recovered_100077b8_1000a368
#define PTR_recovered_100077b8_1000a368 (*(void * *)(((uintptr_t)pf_module_state + 0x1d98U)))
#undef PTR_recovered_10007828_1000a3b0
#define PTR_recovered_10007828_1000a3b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1de0U)))
#undef PTR_recovered_10007870_1000a3f8
#define PTR_recovered_10007870_1000a3f8 (*(void * *)(((uintptr_t)pf_module_state + 0x1e28U)))
#undef PTR_recovered_10007bc4_1000a440
#define PTR_recovered_10007bc4_1000a440 (*(void * *)(((uintptr_t)pf_module_state + 0x1e70U)))
#undef PTR_recovered_10007d0c_1000a488
#define PTR_recovered_10007d0c_1000a488 (*(void * *)(((uintptr_t)pf_module_state + 0x1eb8U)))
#undef PTR_recovered_10007d90_1000a4d0
#define PTR_recovered_10007d90_1000a4d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1f00U)))
#undef PTR_recovered_10007e32_1000a518
#define PTR_recovered_10007e32_1000a518 (*(void * *)(((uintptr_t)pf_module_state + 0x1f48U)))
#undef PTR_recovered_10007eb6_1000a560
#define PTR_recovered_10007eb6_1000a560 (*(void * *)(((uintptr_t)pf_module_state + 0x1f90U)))
#undef PTR_recovered_10007f58_1000a5a8
#define PTR_recovered_10007f58_1000a5a8 (*(void * *)(((uintptr_t)pf_module_state + 0x1fd8U)))
#undef PTR_recovered_10007fdc_1000a5f0
#define PTR_recovered_10007fdc_1000a5f0 (*(void * *)(((uintptr_t)pf_module_state + 0x2020U)))
#undef PTR_recovered_10008080_1000a638
#define PTR_recovered_10008080_1000a638 (*(void * *)(((uintptr_t)pf_module_state + 0x2068U)))
#undef PTR_recovered_10008116_1000a680
#define PTR_recovered_10008116_1000a680 (*(void * *)(((uintptr_t)pf_module_state + 0x20b0U)))
#undef PTR_recovered_100081c2_1000a6c8
#define PTR_recovered_100081c2_1000a6c8 (*(void * *)(((uintptr_t)pf_module_state + 0x20f8U)))
#define local_d8 (*(long * *)(frame + 656))
#define local_d0 (*(long * *)(frame + 664))
#define local_c8 (*(long * *)(frame + 672))
#define local_c0 (*(long * *)(frame + 680))
#define local_b8 (*(long * *)(frame + 688))
#define local_b0 (*(long * *)(frame + 696))
#define local_a8 (*(long * *)(frame + 704))
#define local_a0 (*(long * *)(frame + 712))
#define local_98 (*(undefined8 *)(frame + 720))
#define local_90 (*(undefined4 *)(frame + 728))
#define local_78 (*(code * *)(frame + 752))
#define local_70 (*(undefined * *)(frame + 760))
#define local_68 (*(undefined1 * *)(frame + 768))
#define local_60 (*(undefined1 * *)(frame + 776))
#define local_58 (*(undefined1 * *)(frame + 784))
#define local_40 (*(long *)(frame + 808))
#define local_33 (*(undefined2 *)(frame + 821))
#define local_31 (*(undefined1 *)(frame + 823))
#define local_358 (*(void * *)(frame + 16))
#define local_350 (*(undefined8 *)(frame + 24))
#define local_340 (*(void * *)(frame + 40))
#define local_338 (*(undefined8 *)(frame + 48))
#define local_328 (*(void * *)(frame + 64))
#define local_320 (*(undefined8 *)(frame + 72))
#define local_310 (*(void * *)(frame + 88))
#define local_308 (*(undefined8 *)(frame + 96))
#define local_2f8 (*(void * *)(frame + 112))
#define local_2f0 (*(undefined8 *)(frame + 120))
#define local_2e0 (*(void * *)(frame + 136))
#define local_2d8 (*(undefined8 *)(frame + 144))
#define local_2c8 (*(void * *)(frame + 160))
#define local_2c0 (*(undefined8 *)(frame + 168))
#define local_2b0 (*(void * *)(frame + 184))
#define local_2a8 (*(undefined8 *)(frame + 192))
#define local_298 (*(void * *)(frame + 208))
#define local_290 (*(undefined8 *)(frame + 216))
#define local_280 (*(void * *)(frame + 232))
#define local_278 (*(undefined8 *)(frame + 240))
#define local_268 (*(void * *)(frame + 256))
#define local_260 (*(undefined8 *)(frame + 264))
#define local_250 (*(void * *)(frame + 280))
#define local_248 (*(undefined8 *)(frame + 288))
#define local_238 (*(void * *)(frame + 304))
#define local_230 (*(undefined8 *)(frame + 312))
#define local_220 (*(void * *)(frame + 328))
#define local_218 (*(undefined8 *)(frame + 336))
#define local_208 (*(void * *)(frame + 352))
#define local_200 (*(undefined8 *)(frame + 360))
#define local_1f0 (*(void * *)(frame + 376))
#define local_1e8 (*(undefined8 *)(frame + 384))
#define local_1d8 (*(void * *)(frame + 400))
#define local_1d0 (*(undefined8 *)(frame + 408))
#define local_1c0 (*(void * *)(frame + 424))
#define local_1b8 (*(undefined8 *)(frame + 432))
#define local_1a8 (*(void * *)(frame + 448))
#define local_1a0 (*(undefined8 *)(frame + 456))
#define local_190 (*(void * *)(frame + 472))
#define local_188 (*(undefined8 *)(frame + 480))
#define local_178 (*(void * *)(frame + 496))
#define local_170 (*(undefined8 *)(frame + 504))
#define local_160 (*(void * *)(frame + 520))
#define local_158 (*(undefined8 *)(frame + 528))
#define local_148 (*(long * *)(frame + 544))
#define local_140 (*(long * *)(frame + 552))
#define local_138 (*(long * *)(frame + 560))
#define local_130 (*(long * *)(frame + 568))
#define local_128 (*(long * *)(frame + 576))
#define local_120 (*(long * *)(frame + 584))
#define local_118 (*(long * *)(frame + 592))
#define local_110 (*(long * *)(frame + 600))
#define local_108 (*(long * *)(frame + 608))
#define local_100 (*(long * *)(frame + 616))
#define local_f8 (*(long * *)(frame + 624))
#define local_f0 (*(long * *)(frame + 632))
#define local_e8 (*(long * *)(frame + 640))
#define local_e0 (*(long * *)(frame + 648))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

void recovered_10003f40(long param_1)

{
  unsigned char frame[904] = {0};


  local_40 = param_1;
  recovered_10005f0a((long *)(param_1 + 0x20));
  local_33 = (ushort)PF_PART1(local_33, 1) << 8;
  recovered_10006c64((long *)&local_358,(undefined1 *)&local_33,1);
  local_58 = (undefined1 *)&local_358;
  local_78 = recovered_10002dc0;
  local_70 = &DAT_100092e4;
  local_60 = &LAB_10004b91;
  local_90 = 1;
  local_68 = (undefined1 *)((long)(uintptr_t)(frame + 872) + -8);
  recovered_1000320a(&local_98);
  local_148 = recovered_10002e03(0x10);
  *local_148 = (long)&PTR_recovered_10006cfe_1000a0d0;
  local_90 = 2;
  recovered_10005d34(local_40,1,&local_358,(long *)&local_148);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 8))();
  }
  local_350 = 0;
  recovered_10002e37(local_358);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_340,(undefined1 *)&local_33,1);
  local_90 = 3;
  local_140 = recovered_10002e03(0x10);
  *local_140 = (long)&PTR_recovered_10006ea6_1000a128;
  local_90 = 4;
  recovered_10005d34(local_40,2,&local_340,(long *)&local_140);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 8))();
  }
  local_338 = 0;
  recovered_10002e37(local_340);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_328,(undefined1 *)&local_33,1);
  local_90 = 5;
  local_138 = recovered_10002e03(0x10);
  *local_138 = (long)&PTR_recovered_10006fe4_1000a170;
  local_90 = 6;
  recovered_10005d34(local_40,3,&local_328,(long *)&local_138);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 8))();
  }
  local_320 = 0;
  recovered_10002e37(local_328);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_310,(undefined1 *)&local_33,1);
  local_90 = 7;
  local_130 = recovered_10002e03(0x10);
  *local_130 = (long)&PTR_recovered_1000706a_1000a1b8;
  local_90 = 8;
  recovered_10005d34(local_40,4,&local_310,(long *)&local_130);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 8))();
  }
  local_308 = 0;
  recovered_10002e37(local_310);
  local_33 = local_33 & 0xff00;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_2f8,(undefined1 *)&local_33,1);
  local_90 = 9;
  local_128 = recovered_10002e03(0x10);
  *local_128 = (long)&PTR_recovered_100070e6_1000a200;
  local_90 = 10;
  recovered_10005d34(local_40,5,&local_2f8,(long *)&local_128);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 8))();
  }
  local_2f0 = 0;
  recovered_10002e37(local_2f8);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_2e0,(undefined1 *)&local_33,1);
  local_90 = 0xb;
  local_120 = recovered_10002e03(0x10);
  *local_120 = (long)&PTR_recovered_1000714e_1000a248;
  local_90 = 0xc;
  recovered_10005d34(local_40,6,&local_2e0,(long *)&local_120);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 8))();
  }
  local_2d8 = 0;
  recovered_10002e37(local_2e0);
  local_33 = CONCAT11(PF_PART1(local_33, 1),2);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_2c8,(undefined1 *)&local_33,1);
  local_90 = 0xd;
  local_118 = recovered_10002e03(0x10);
  *local_118 = (long)&PTR_recovered_100071c6_1000a290;
  local_90 = 0xe;
  recovered_10005d34(local_40,7,&local_2c8,(long *)&local_118);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  local_2c0 = 0;
  recovered_10002e37(local_2c8);
  local_33 = 0x101;
  local_31 = 1;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_2b0,(undefined1 *)&local_33,3);
  local_90 = 0xf;
  local_110 = recovered_10002e03(0x10);
  *local_110 = (long)&PTR_recovered_1000736a_1000a2d8;
  local_90 = 0x10;
  recovered_10005d34(local_40,8,&local_2b0,(long *)&local_110);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  local_2a8 = 0;
  recovered_10002e37(local_2b0);
  local_33 = 0x101;
  local_31 = 0;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_298,(undefined1 *)&local_33,3);
  local_90 = 0x11;
  local_108 = recovered_10002e03(0x10);
  *local_108 = (long)&PTR_recovered_10007474_1000a320;
  local_90 = 0x12;
  recovered_10005d34(local_40,9,&local_298,(long *)&local_108);
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  local_290 = 0;
  recovered_10002e37(local_298);
  local_33 = 0x101;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_280,(undefined1 *)&local_33,2);
  local_90 = 0x13;
  local_100 = recovered_10002e03(0x10);
  *local_100 = (long)&PTR_recovered_100077b8_1000a368;
  local_90 = 0x14;
  recovered_10005d34(local_40,10,&local_280,(long *)&local_100);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 8))();
  }
  local_278 = 0;
  recovered_10002e37(local_280);
  local_33 = CONCAT11(PF_PART1(local_33, 1),1);
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_268,(undefined1 *)&local_33,1);
  local_90 = 0x15;
  local_f8 = recovered_10002e03(0x10);
  *local_f8 = (long)&PTR_recovered_10007828_1000a3b0;
  local_90 = 0x16;
  recovered_10005d34(local_40,0xb,&local_268,(long *)&local_f8);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_260 = 0;
  recovered_10002e37(local_268);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_250,(undefined1 *)&local_33,2);
  local_90 = 0x17;
  local_f0 = recovered_10002e03(0x10);
  *local_f0 = (long)&PTR_recovered_10007870_1000a3f8;
  local_90 = 0x18;
  recovered_10005d34(local_40,0xc,&local_250,(long *)&local_f0);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  local_248 = 0;
  recovered_10002e37(local_250);
  local_33 = 2;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_238,(undefined1 *)&local_33,2);
  local_90 = 0x19;
  local_e8 = recovered_10002e03(0x10);
  *local_e8 = (long)&PTR_recovered_10007bc4_1000a440;
  local_90 = 0x1a;
  recovered_10005d34(local_40,0xd,&local_238,(long *)&local_e8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  local_230 = 0;
  recovered_10002e37(local_238);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_220,(undefined1 *)&local_33,2);
  local_90 = 0x1b;
  local_e0 = recovered_10002e03(0x10);
  *local_e0 = (long)&PTR_recovered_10007d0c_1000a488;
  local_90 = 0x1c;
  recovered_10005d34(local_40,0xe,&local_220,(long *)&local_e0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 8))();
  }
  local_218 = 0;
  recovered_10002e37(local_220);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_208,(undefined1 *)&local_33,2);
  local_90 = 0x1d;
  local_d8 = recovered_10002e03(0x10);
  *local_d8 = (long)&PTR_recovered_10007d90_1000a4d0;
  local_90 = 0x1e;
  recovered_10005d34(local_40,0xf,&local_208,(long *)&local_d8);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 8))();
  }
  local_200 = 0;
  recovered_10002e37(local_208);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_1f0,(undefined1 *)&local_33,2);
  local_90 = 0x1f;
  local_d0 = recovered_10002e03(0x10);
  *local_d0 = (long)&PTR_recovered_10007e32_1000a518;
  local_90 = 0x20;
  recovered_10005d34(local_40,0x10,&local_1f0,(long *)&local_d0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 8))();
  }
  local_1e8 = 0;
  recovered_10002e37(local_1f0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_1d8,(undefined1 *)&local_33,2);
  local_90 = 0x21;
  local_c8 = recovered_10002e03(0x10);
  *local_c8 = (long)&PTR_recovered_10007eb6_1000a560;
  local_90 = 0x22;
  recovered_10005d34(local_40,0x11,&local_1d8,(long *)&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 8))();
  }
  local_1d0 = 0;
  recovered_10002e37(local_1d8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_1c0,(undefined1 *)&local_33,2);
  local_90 = 0x23;
  local_c0 = recovered_10002e03(0x10);
  *local_c0 = (long)&PTR_recovered_10007f58_1000a5a8;
  local_90 = 0x24;
  recovered_10005d34(local_40,0x12,&local_1c0,(long *)&local_c0);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_1b8 = 0;
  recovered_10002e37(local_1c0);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_1a8,(undefined1 *)&local_33,2);
  local_90 = 0x25;
  local_b8 = recovered_10002e03(0x10);
  *local_b8 = (long)&PTR_recovered_10007fdc_1000a5f0;
  local_90 = 0x26;
  recovered_10005d34(local_40,0x13,&local_1a8,(long *)&local_b8);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  local_1a0 = 0;
  recovered_10002e37(local_1a8);
  local_33 = 0x102;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_190,(undefined1 *)&local_33,2);
  local_90 = 0x27;
  local_b0 = recovered_10002e03(0x10);
  *local_b0 = (long)&PTR_recovered_10008080_1000a638;
  local_90 = 0x28;
  recovered_10005d34(local_40,0x14,&local_190,(long *)&local_b0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  local_188 = 0;
  recovered_10002e37(local_190);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_178,(undefined1 *)&local_33,2);
  local_90 = 0x29;
  local_a8 = recovered_10002e03(0x10);
  *local_a8 = (long)&PTR_recovered_10008116_1000a680;
  local_90 = 0x2a;
  recovered_10005d34(local_40,0x15,&local_178,(long *)&local_a8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  local_170 = 0;
  recovered_10002e37(local_178);
  local_33 = 0x202;
  local_90 = 0xffffffff;
  recovered_10006c64((long *)&local_160,(undefined1 *)&local_33,2);
  local_90 = 0x2b;
  local_a0 = recovered_10002e03(0x10);
  *local_a0 = (long)&PTR_recovered_100081c2_1000a6c8;
  local_90 = 0x2c;
  recovered_10005d34(local_40,0x16,&local_160,(long *)&local_a0);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  local_158 = 0;
  recovered_10002e37(local_160);
  recovered_10003221(&local_98);
  return;
}

#undef DAT_100092e4
#undef LAB_10004b91
#undef PTR_recovered_10006cfe_1000a0d0
#undef PTR_recovered_10006ea6_1000a128
#undef PTR_recovered_10006fe4_1000a170
#undef PTR_recovered_1000706a_1000a1b8
#undef PTR_recovered_100070e6_1000a200
#undef PTR_recovered_1000714e_1000a248
#undef PTR_recovered_100071c6_1000a290
#undef PTR_recovered_1000736a_1000a2d8
#undef PTR_recovered_10007474_1000a320
#undef PTR_recovered_100077b8_1000a368
#undef PTR_recovered_10007828_1000a3b0
#undef PTR_recovered_10007870_1000a3f8
#undef PTR_recovered_10007bc4_1000a440
#undef PTR_recovered_10007d0c_1000a488
#undef PTR_recovered_10007d90_1000a4d0
#undef PTR_recovered_10007e32_1000a518
#undef PTR_recovered_10007eb6_1000a560
#undef PTR_recovered_10007f58_1000a5a8
#undef PTR_recovered_10007fdc_1000a5f0
#undef PTR_recovered_10008080_1000a638
#undef PTR_recovered_10008116_1000a680
#undef PTR_recovered_100081c2_1000a6c8
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_33
#undef local_31
#undef local_358
#undef local_350
#undef local_340
#undef local_338
#undef local_328
#undef local_320
#undef local_310
#undef local_308
#undef local_2f8
#undef local_2f0
#undef local_2e0
#undef local_2d8
#undef local_2c8
#undef local_2c0
#undef local_2b0
#undef local_2a8
#undef local_298
#undef local_290
#undef local_280
#undef local_278
#undef local_268
#undef local_260
#undef local_250
#undef local_248
#undef local_238
#undef local_230
#undef local_220
#undef local_218
#undef local_208
#undef local_200
#undef local_1f0
#undef local_1e8
#undef local_1d8
#undef local_1d0
#undef local_1c0
#undef local_1b8
#undef local_1a8
#undef local_1a0
#undef local_190
#undef local_188
#undef local_178
#undef local_170
#undef local_160
#undef local_158
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_e8
#undef local_e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b4
 */

void recovered_100051b4(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xfff;
  uVar1 = recovered_1000520f();
  *(byte *)(param_1 + 0x48) = (byte)uVar1 ^ 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051ee
 */

void recovered_100051ee(void)

{
  unsigned char frame[64] = {0};

  undefined8 in_RSI;
  undefined8 *in_RDI;

  recovered_10003e22(in_RDI,in_RSI);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f8
 */

void recovered_100051f8(undefined8 *param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = param_2;
  recovered_100051b4((long)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005206
 */

undefined8 recovered_10005206(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  return *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000520f
 */

uint recovered_1000520f(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined8 in_RAX;
  int *in_RDI;

  if (((in_RDI == (int *)0x0) || (*(long *)(in_RDI + 2) == 0)) || (*in_RDI < 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),0 < in_RDI[1]);
  }
  return uVar1;
}


#undef DAT_10009340
#define DAT_10009340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef LAB_100058be
#define LAB_100058be (*(uint8_t *)(0x100058beU))
#define local_40 (*(undefined8 * *)(frame + 344))
#define local_31 (*(char *)(frame + 359))
#define auStack_188 (*(undefined1 (*)[8])(frame + 16))
#define uStack_e0 (*(undefined8 *)(frame + 184))
#define uStack_b0 (*(undefined8 *)(frame + 232))
#define uStack_a0 (*(ulonglong *)(frame + 248))
#define lStack_80 (*(long *)(frame + 280))
#define local_180 (*(undefined8 *)(frame + 24))
#define local_178 (*(byte * *)(frame + 32))
#define local_170 (*(byte * *)(frame + 40))
#define local_168 (*(undefined8 *)(frame + 48))
#define local_160 (*(undefined4 *)(frame + 56))
#define local_148 (*(code * *)(frame + 80))
#define local_140 (*(undefined * *)(frame + 88))
#define local_138 (*(undefined1 * *)(frame + 96))
#define local_130 (*(undefined1 * *)(frame + 104))
#define local_128 (*(undefined1 * *)(frame + 112))
#define local_110 (*(ulonglong (*)[3])(frame + 136))
#define local_f8 (*(undefined8 * *)(frame + 160))
#define local_ec (*(uint *)(frame + 172))
#define local_e8 (*(void * *)(frame + 176))
#define local_d8 (*(undefined8 *)(frame + 192))
#define local_d0 (*(long *)(frame + 200))
#define local_c8 (*(void * *)(frame + 208))
#define local_c0 (*(undefined4 (*)[2])(frame + 216))
#define local_b8 (*(void * *)(frame + 224))
#define local_a8 (*(undefined8 *)(frame + 240))
#define local_98 (*(long *)(frame + 256))
#define local_90 (*(undefined1 *)(frame + 264))
#define local_88 (*(void * *)(frame + 272))
#define local_78 (*(undefined8 *)(frame + 288))
#define local_70 (*(undefined8 *)(frame + 296))
#define local_68 (*(byte *)(frame + 304))
#define local_60 (*(undefined4 *)(frame + 312))
#define local_5c (*(undefined4 *)(frame + 316))
#define local_58 (*(undefined4 *)(frame + 320))
#define local_54 (*(undefined4 *)(frame + 324))
#define local_50 (*(long *)(frame + 328))
#define local_43 (*(char (*)[3])(frame + 341))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005232
 */

uchar recovered_10005232(void)

{
  unsigned char frame[440] = {0};

  char cVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *in_RDI;
  void *data;
  undefined8 *puVar13;
  bool bVar14;

  local_138 = local_43 + 0x3b;
  local_128 = auStack_188;
  cVar1 = *(char *)(in_RDI + 9);
  local_148 = recovered_10002dc0;
  local_140 = &DAT_10009340;
  local_130 = &LAB_100058be;
  recovered_1000320a(&local_168);
  if (cVar1 == '\0') {
    uVar12 = *(undefined4 *)(in_RDI + 7);
    uVar11 = *(undefined4 *)((long)in_RDI + 0x3c);
    uVar6 = recovered_10005994();
    if ((char)uVar6 != '\0') {
      local_40 = in_RDI;
      uVar6 = recovered_100059d7();
      puVar13 = local_40;
      if (uVar6 == 0) {
        recovered_10005a6c((long)local_40);
        local_c0[0] = *(undefined4 *)(local_40 + 7);
        local_88 = (void *)CONCAT44(PF_PART4(local_88, 4),*(undefined4 *)((long)local_40 + 0x3c));
        recovered_10005a2d();
        *(undefined4 *)(local_40 + 7) = local_c0[0];
        *(undefined4 *)((long)local_40 + 0x3c) = PF_PART4(local_88, 0);
        uVar6 = recovered_10005994();
        if ((char)uVar6 == '\0') {
          *(undefined1 *)(local_40 + 9) = 1;
          goto LAB_1000531e;
        }
        bVar10 = *(byte *)(local_40 + 9);
      }
      else {
        if (uVar6 == 0xffffff) {
          *(undefined4 *)((long)local_40 + 0x44) = 0xfff;
          local_88 = (void *)CONCAT44(PF_PART4(local_88, 4),uVar11);
          local_c0[0] = uVar12;
          recovered_10005a2d();
          *(undefined4 *)(local_40 + 7) = local_c0[0];
          *(undefined4 *)((long)local_40 + 0x3c) = PF_PART4(local_88, 0);
        }
        else {
          uVar2 = *(uint *)((long)local_40 + 0x44);
          uVar4 = uVar6 - uVar2;
          if (uVar6 < uVar2) {
            uVar4 = -(uVar6 - uVar2);
          }
          *(uint *)((long)local_40 + 0x44) = uVar6;
          cVar1 = *(char *)((long)local_40 + 0x49);
          *(undefined1 *)((long)local_40 + 0x49) = 0;
          if ((cVar1 != '\0') || (uVar2 != uVar6)) {
            local_60 = uVar12;
            local_5c = uVar11;
            recovered_10005a2d();
            local_110[0] = 0;
            local_110[1] = 0;
            local_110[2] = 0;
            if (((ulong)uVar4 < (ulong)puVar13[5]) && (puVar13[4] != 0)) {
              local_f8 = (undefined8 *)(puVar13[4] + (ulong)uVar4 * 0x20);
              local_160 = 1;
              recovered_10005a88(local_110,local_f8[1]);
              pbVar9 = (byte *)*local_f8;
              local_170 = pbVar9 + local_f8[1];
              puVar13 = local_40;
              uVar12 = local_60;
              uVar11 = local_5c;
              do {
                if (pbVar9 == local_170) {
                  *(undefined4 *)(puVar13 + 7) = uVar12;
                  *(undefined4 *)((long)puVar13 + 0x3c) = uVar11;
                  plVar3 = (long *)local_f8[3];
                  if (plVar3 != (long *)0x0) {
                    local_160 = 9;
                    (**(code **)(*plVar3 + 0x10))(plVar3,puVar13,local_110);
                    puVar13 = local_40;
                  }
                  goto LAB_10005853;
                }
                local_ec = (uint)*pbVar9;
                local_180 = *puVar13;
                local_c8 = (void *)CONCAT71(PF_PART7(local_c8, 1),*(undefined1 *)(puVar13 + 8));
                local_88 = (void *)0x0;
                lStack_80 = 0;
                local_78 = 0;
                local_70 = 0x100000001;
                local_68 = 0;
                local_e8 = (void *)CONCAT44(PF_PART4(local_e8, 4),uVar11);
                bVar14 = false;
                local_178 = pbVar9;
                local_c0[0] = uVar12;
                local_58 = uVar12;
                local_54 = uVar11;
                while (uVar12 = local_c0[0], uVar6 = recovered_10005994(), (char)uVar6 != '\0') {
                  uVar6 = recovered_100059d7();
                  if (uVar6 == 0xffffff) {
                    recovered_10005a2d();
                    local_70 = CONCAT44(PF_PART4(local_e8, 0),local_c0[0]);
                    uVar12 = local_c0[0];
                    uVar11 = PF_PART4(local_e8, 0);
                    if ((local_68 & 1) != 0) goto LAB_10005605;
                    if (local_ec == 2) {
                      uVar7 = recovered_10005bb2();
                      local_98 = uVar7 + 1;
                      if (uVar7 + 1 == 0) {
                        local_98 = -1;
                      }
                      local_b8 = (void *)0x0;
                      uStack_b0 = 0;
                      local_a8 = 0;
                      uStack_a0 = 0;
                      local_c0[0] = CONCAT31(PF_PART3(local_c0[0], 1),2);
                      local_90 = lStack_80 == 0;
                      local_160 = 7;
                      local_50 = local_98;
                      recovered_10006b2c((long *)local_110,(undefined1 *)local_c0);
                      local_160 = 8;
                      recovered_10005be8();
LAB_100057a8:
                      data = local_b8;
                    }
                    else {
                      if (local_ec == 1) {
                        uStack_a0 = recovered_10005bb2();
                        if (0x7ffffffffffffffe < uStack_a0) {
                          uStack_a0 = 0x7fffffffffffffff;
                        }
                        local_b8 = (void *)0x0;
                        uStack_b0 = 0;
                        local_a8 = 0;
                        local_98 = 0;
                        local_c0[0] = CONCAT31(PF_PART3(local_c0[0], 1),1);
                        local_90 = lStack_80 == 0;
                        local_160 = 6;
                        recovered_10006b2c((long *)local_110,(undefined1 *)local_c0);
                        goto LAB_100057a8;
                      }
                      if (local_ec != 0) goto LAB_10005808;
                      local_e8 = (void *)0x0;
                      uStack_e0 = 0;
                      local_d8 = 0;
                      local_160 = 3;
                      recovered_10005b00();
                      local_c8 = local_88;
                      local_d0 = lStack_80;
                      lVar8 = 0;
                      while (local_d0 != lVar8) {
                        local_160 = 5;
                        local_50 = lVar8;
                        recovered_10005b5a((ulonglong *)&local_e8,
                                           *(undefined1 *)((long)local_c8 + lVar8));
                        lVar8 = local_50 + 1;
                      }
                      recovered_10003b46((undefined1 *)local_c0,&local_e8);
                      local_90 = lStack_80 == 0;
                      local_160 = 4;
                      recovered_10006b2c((long *)local_110,(undefined1 *)local_c0);
                      recovered_10002e37(local_b8);
                      data = local_e8;
                    }
                    recovered_10002e37(data);
LAB_10005808:
                    local_58 = (undefined4)local_70;
                    local_54 = PF_PART4(local_70, 4);
                    bVar14 = false;
                    goto LAB_10005816;
                  }
                  local_d0 = CONCAT44(PF_PART4(local_d0, 4),(uint)(byte)local_c8);
                  bVar5 = !bVar14;
                  bVar14 = true;
                  if (bVar5) {
                    local_43[0] = (char)(uVar6 >> 0x10);
                    local_43[1] = (char)(uVar6 >> 8);
                    local_43[2] = (char)uVar6;
                    lVar8 = 0;
                    while ((bVar14 = lVar8 != 3, bVar14 &&
                           (local_31 = local_43[lVar8], local_31 != -1))) {
                      local_160 = 2;
                      local_50 = lVar8;
                      recovered_100067c4((ulonglong *)&local_88,&local_31);
                      lVar8 = local_50 + 1;
                    }
                  }
                  recovered_10005a2d();
                  uVar11 = PF_PART4(local_e8, 0);
                }
                local_70 = CONCAT44(uVar11,uVar12);
                local_68 = 1;
LAB_10005605:
                *(undefined4 *)(local_40 + 7) = uVar12;
                *(undefined4 *)((long)local_40 + 0x3c) = uVar11;
                *(undefined1 *)(local_40 + 9) = 1;
                bVar14 = true;
LAB_10005816:
                puVar13 = local_40;
                lStack_80 = 0;
                recovered_10002e37(local_88);
                pbVar9 = local_178 + 1;
                uVar12 = local_58;
                uVar11 = local_54;
              } while (!bVar14);
LAB_1000586f:
              bVar10 = 0;
            }
            else {
              *(undefined4 *)(puVar13 + 7) = local_60;
              *(undefined4 *)((long)puVar13 + 0x3c) = local_5c;
LAB_10005853:
              uVar6 = recovered_10005994();
              if ((char)uVar6 == '\0') {
                *(undefined1 *)(puVar13 + 9) = 1;
                goto LAB_1000586f;
              }
              bVar10 = *(byte *)(puVar13 + 9) ^ 1;
            }
            recovered_10006a64((long *)local_110);
            goto LAB_10005320;
          }
          local_88 = (void *)CONCAT44(PF_PART4(local_88, 4),uVar11);
          local_c0[0] = uVar12;
          recovered_10005a2d();
          *(undefined4 *)(local_40 + 7) = local_c0[0];
          *(undefined4 *)((long)local_40 + 0x3c) = PF_PART4(local_88, 0);
        }
        uVar6 = recovered_10005994();
        if ((char)uVar6 == '\0') {
          *(undefined1 *)(local_40 + 9) = 1;
          goto LAB_1000531e;
        }
        bVar10 = *(byte *)(local_40 + 9);
      }
      bVar10 = bVar10 ^ 1;
      goto LAB_10005320;
    }
    *(undefined1 *)(in_RDI + 9) = 1;
  }
LAB_1000531e:
  bVar10 = 0;
LAB_10005320:
  recovered_10003221(&local_168);
  return bVar10 & 1;
}

#undef DAT_10009340
#undef LAB_100058be
#undef local_40
#undef local_31
#undef auStack_188
#undef uStack_e0
#undef uStack_b0
#undef uStack_a0
#undef lStack_80
#undef local_180
#undef local_178
#undef local_170
#undef local_168
#undef local_160
#undef local_148
#undef local_140
#undef local_138
#undef local_130
#undef local_128
#undef local_110
#undef local_f8
#undef local_ec
#undef local_e8
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a8
#undef local_98
#undef local_90
#undef local_88
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_43

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005994
 */

uint recovered_10005994(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int in_EDX;
  int in_ESI;
  int *in_RDI;

  uVar1 = recovered_1000520f();
  uVar2 = 0;
  if (((0 < in_EDX) && (0 < in_ESI)) && ((char)uVar1 != '\0')) {
    if (*in_RDI < in_ESI) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(in_EDX <= in_RDI[1]);
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059d7
 */

uint recovered_100059d7(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int in_EDX;
  int in_ESI;
  int *in_RDI;

  uVar2 = recovered_10005994();
  uVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar4 = (long)(in_ESI + (in_EDX + -1) * *in_RDI + -1);
    lVar1 = *(long *)(in_RDI + 2);
    uVar3 = (uint)*(byte *)(lVar1 + 2 + lVar4 * 4) |
            (uint)*(byte *)(lVar1 + 1 + lVar4 * 4) << 8 | (uint)*(byte *)(lVar1 + lVar4 * 4) << 0x10
    ;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a2d
 */

double recovered_10005a2d(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 in_EDX;
  int *in_RSI;
  int *in_RDI;
  double in_XMM0_Qa;

  iVar1 = 1;
  switch((uintptr_t)(in_EDX)) {
  case 1:
    break;
  case 2:
    iVar1 = -1;
  case 0:
    in_RSI = in_RDI;
    break;
  case 3:
    iVar1 = -1;
    break;
  default:
    goto switchD_10005a45_default;
  }
  *in_RSI = *in_RSI + iVar1;
switchD_10005a45_default:
  return in_XMM0_Qa;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a6c
 */

void recovered_10005a6c(long param_1)

{
  unsigned char frame[64] = {0};

  if (*(byte *)(param_1 + 0x40) < 4) {
    *(char *)(param_1 + 0x40) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x40) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a88
 */

void recovered_10005a88(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if (param_1[2] < param_2) {
    uVar1 = recovered_10006ac0();
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < param_1[1]; uVar3 = uVar3 + 1) {
      recovered_10006ad8((undefined1 *)(uVar1 + lVar2),(undefined1 *)(*param_1 + lVar2));
      recovered_1000687a((undefined8 *)(*param_1 + lVar2 + 8));
      lVar2 = lVar2 + 0x38;
    }
    recovered_10002e37((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b00
 */

uint recovered_10005b00(void)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;
  ulong in_RSI;
  ulonglong *in_RDI;

  if (in_RDI[2] < in_RSI) {
    uVar1 = recovered_100066b6();
    for (uVar2 = 0; uVar2 < in_RDI[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*in_RDI + uVar2);
    }
    *(undefined1 *)(uVar1 + in_RDI[1]) = 0;
    recovered_10002e37((void *)*in_RDI);
    *in_RDI = uVar1;
    in_RDI[2] = in_RSI;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b5a
 */

void recovered_10005b5a(ulonglong *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (param_1[1] == param_1[2]) {
    recovered_10005b00();
  }
  recovered_10006674(param_1);
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  *(undefined1 *)(*param_1 + uVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb2
 */

ulonglong recovered_10005bb2(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;
  long *in_RDI;

  lVar2 = 0;
  uVar1 = 0;
  while( true ) {
    if (in_RDI[1] == lVar2) {
      return uVar1;
    }
    if (uVar1 >> 0x38 != 0) break;
    uVar1 = uVar1 << 8 | (ulong)*(byte *)(*in_RDI + lVar2);
    lVar2 = lVar2 + 1;
  }
  return 0xffffffffffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005be8
 */

ulonglong recovered_10005be8(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long in_RSI;
  long in_RDI;

  uVar1 = in_RSI + (ulong)(in_RSI == 0);
  if (*(ulong *)(in_RDI + 0x10) < uVar1) {
    recovered_10005f5e((long *)(in_RDI + 8),uVar1);
  }
  return (*(long *)(in_RDI + 8) + uVar1 * 0x28) - 0x28;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c22
 */

void recovered_10005c22(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  do {
    uVar1 = recovered_10005232();
  } while (uVar1 != '\0');
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c3e
 */

undefined1 recovered_10005c3e(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x48);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c48
 */

void recovered_10005c48(long param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  if (*(ulong *)(param_1 + 0x28) <= param_2) {
    recovered_10005c8a((long *)(param_1 + 0x20),param_2 + 1);
  }
  recovered_10005d0a((long *)(param_2 * 0x20 + *(long *)(param_1 + 0x20)),param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c8a
 */

void recovered_10005c8a(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;

  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    lVar2 = uVar3 << 5;
    for (; lVar2 = lVar2 + -0x20, param_2 < uVar3; uVar3 = uVar3 - 1) {
      recovered_100069c6((undefined8 *)(*param_1 + lVar2));
    }
    param_1[1] = param_2;
  }
  else if (uVar3 < param_2) {
    recovered_10006b84();
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      lVar2 = *param_1;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar3 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar2 + uVar3 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d0a
 */

long * recovered_10005d0a(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10006888(param_1,param_2);
  recovered_100068da(param_1 + 3,param_2 + 3);
  return param_1;
}


#undef DAT_10009358
#define DAT_10009358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd88U)))
#undef LAB_10005de7
#define LAB_10005de7 (*(uint8_t *)(0x10005de7U))
#define local_50 (*(long (*)[4])(frame + 104))
#define local_a8 (*(undefined8 *)(frame + 16))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_88 (*(code * *)(frame + 48))
#define local_80 (*(undefined * *)(frame + 56))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d34
 */

void recovered_10005d34(long param_1,ulong param_2,undefined8 *param_3,long *param_4)

{
  unsigned char frame[216] = {0};


  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  recovered_10005e2c(local_50,param_3);
  recovered_10005e6e(local_50 + 3,param_4);
  local_68 = (undefined1 *)&local_a8;
  local_88 = recovered_10002dc0;
  local_80 = &DAT_10009358;
  local_70 = &LAB_10005de7;
  local_a0 = 1;
  local_78 = (undefined1 *)(local_50 + 9);
  recovered_1000320a(&local_a8);
  recovered_10005c48(param_1,param_2,local_50);
  recovered_100069c6(local_50);
  recovered_10003221(&local_a8);
  return;
}

#undef DAT_10009358
#undef LAB_10005de7
#undef local_50
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e2c
 */

undefined8 * recovered_10005e2c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002e37((void *)*param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e6e
 */

long * recovered_10005e6e(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  if (param_1 != param_2) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


#define local_30 (*(undefined8 *)(frame + 16))
#define local_20 (*(undefined8 *)(frame + 32))
#define uStack_28 (*(undefined8 *)(frame + 24))
#define uStack_18 (*(undefined8 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ea0
 */

void recovered_10005ea0(long param_1,ulong param_2)

{
  unsigned char frame[96] = {0};


  if (param_2 < *(ulong *)(param_1 + 0x28)) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    recovered_10005ee0(param_2 * 0x20 + *(long *)(param_1 + 0x20),(long)&local_30);
    recovered_100069c6(&local_30);
  }
  return;
}

#undef local_30
#undef local_20
#undef uStack_28
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee0
 */

long recovered_10005ee0(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  recovered_10005e2c((undefined8 *)param_1,(undefined8 *)param_2);
  recovered_10005e6e((long *)(param_1 + 0x18),(long *)(param_2 + 0x18));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f0a
 */

void recovered_10005f0a(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 << 5;
  while( true ) {
    lVar2 = lVar2 + -0x20;
    bVar3 = lVar1 == 0;
    lVar1 = lVar1 + -1;
    if (bVar3) break;
    recovered_100069c6((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f4a
 */

long recovered_10005f4a(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f54
 */

long recovered_10005f54(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f5e
 */

void recovered_10005f5e(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  uVar4 = param_1[1];
  if (param_2 < uVar4) {
    lVar3 = uVar4 * 0x28 + -0x20;
    for (; param_2 < uVar4; uVar4 = uVar4 - 1) {
      recovered_1000687a((undefined8 *)(*param_1 + lVar3));
      lVar3 = lVar3 + -0x28;
    }
    param_1[1] = param_2;
  }
  else if (uVar4 < param_2) {
    recovered_100082ce();
    uVar4 = param_1[1];
    while (uVar4 < param_2) {
      lVar3 = *param_1;
      lVar2 = uVar4 * 0x28;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar3 + 0x20 + lVar2) = 0;
      *(undefined8 *)(lVar3 + lVar2) = 0;
      ((undefined8 *)(lVar3 + lVar2))[1] = 0;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fe4
 */

long recovered_10005fe4(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulong uVar2;

  uVar2 = param_2 + (ulong)(param_2 == 0);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8) + uVar2 * 0x28 + -0x28;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000600c
 */

void recovered_1000600c(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10008388((long *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000602e
 */

ulonglong recovered_1000602e(void)

{
  unsigned char frame[64] = {0};

  undefined1 *in_RSI;
  long in_RDI;

  recovered_100083e0((long *)(in_RDI + 8),in_RSI);
  *(ulonglong *)(in_RDI + 0x50) = *(ulonglong *)(in_RDI + 0x10);
  return *(ulonglong *)(in_RDI + 0x10);
}


#undef DAT_10009360
#define DAT_10009360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd90U)))
#undef LAB_1000610b
#define LAB_1000610b (*(uint8_t *)(0x1000610bU))
#define local_48 (*(undefined8 *)(frame + 128))
#define local_38 (*(undefined8 *)(frame + 144))
#define local_b8 (*(undefined8 *)(frame + 16))
#define local_b0 (*(undefined4 *)(frame + 24))
#define local_98 (*(code * *)(frame + 48))
#define local_90 (*(undefined * *)(frame + 56))
#define local_88 (*(undefined1 * *)(frame + 64))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define uStack_50 (*(undefined8 *)(frame + 120))
#define local_60 (*(undefined1 (*)[8])(frame + 104))
#define local_58 (*(void * *)(frame + 112))
#define uStack_40 (*(undefined8 *)(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006050
 */

ulonglong recovered_10006050(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[232] = {0};

  ulonglong uVar1;

  local_88 = local_60 + 0x58;
  local_78 = (undefined1 *)&local_b8;
  local_60[0] = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_98 = recovered_10002dc0;
  local_90 = &DAT_10009360;
  local_80 = &LAB_1000610b;
  local_b0 = 1;
  local_38 = param_1;
  recovered_1000320a(&local_b8);
  recovered_10003c2c(local_60);
  local_b0 = 2;
  uVar1 = recovered_1000602e();
  recovered_10002e37(local_58);
  recovered_10003221(&local_b8);
  return uVar1;
}

#undef DAT_10009360
#undef LAB_1000610b
#undef local_48
#undef local_38
#undef local_b8
#undef local_b0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef uStack_50
#undef local_60
#undef local_58
#undef uStack_40

#undef DAT_10009368
#define DAT_10009368 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd98U)))
#undef LAB_100061fc
#define LAB_100061fc (*(uint8_t *)(0x100061fcU))
#define uStack_38 (*(undefined8 *)(frame + 144))
#define local_b0 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined4 *)(frame + 32))
#define local_90 (*(code * *)(frame + 56))
#define local_88 (*(undefined * *)(frame + 64))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 88))
#define local_58 (*(undefined1 (*)[8])(frame + 112))
#define local_50 (*(void * *)(frame + 120))
#define local_40 (*(undefined8 *)(frame + 136))
#define auStack_b8 (*(undefined1 (*)[8])(frame + 16))
#define uStack_48 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006154
 */

ulonglong recovered_10006154(void)

{
  unsigned char frame[232] = {0};

  ulonglong uVar1;

  local_58[0] = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  recovered_10003c4e(local_58);
  local_70 = auStack_b8;
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10009368;
  local_78 = &LAB_100061fc;
  local_a8 = 1;
  local_80 = local_58 + 0x50;
  recovered_1000320a(&local_b0);
  uVar1 = recovered_1000602e();
  recovered_10002e37(local_50);
  recovered_10003221(&local_b0);
  return uVar1;
}

#undef DAT_10009368
#undef LAB_100061fc
#undef uStack_38
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_58
#undef local_50
#undef local_40
#undef auStack_b8
#undef uStack_48

#undef DAT_10009370
#define DAT_10009370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xda0U)))
#undef LAB_100062e4
#define LAB_100062e4 (*(uint8_t *)(0x100062e4U))
#define local_b0 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined4 *)(frame + 32))
#define local_90 (*(code * *)(frame + 56))
#define local_88 (*(undefined * *)(frame + 64))
#define auStack_b8 (*(undefined1 (*)[8])(frame + 16))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 88))
#define local_58 (*(undefined1 *)(frame + 112))
#define local_50 (*(void * *)(frame + 120))
#define local_40 (*(undefined8 *)(frame + 136))
#define local_38 (*(undefined8 *)(frame + 144))
#define uStack_48 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006240
 */

ulonglong recovered_10006240(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[232] = {0};

  ulonglong uVar1;

  local_80 = (undefined1 *)((long)(uintptr_t)(frame + 200) + -8);
  local_70 = auStack_b8;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = 2;
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10009370;
  local_78 = &LAB_100062e4;
  local_a8 = 1;
  local_38 = param_2;
  recovered_1000320a(&local_b0);
  uVar1 = recovered_1000602e();
  recovered_10002e37(local_50);
  recovered_10003221(&local_b0);
  return uVar1;
}

#undef DAT_10009370
#undef LAB_100062e4
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef auStack_b8
#undef local_80
#undef local_78
#undef local_70
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006328
 */

void recovered_10006328(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)recovered_10005be8();
  recovered_1000600c(param_1,puVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006348
 */

void recovered_10006348(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  recovered_10006384(param_1,param_2);
  puVar1 = (undefined1 *)recovered_10005be8();
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006384
 */

void recovered_10006384(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = param_2 + (ulong)(param_2 == 0);
  *(ulong *)(param_1 + 0x50) = uVar1;
  if (*(ulong *)(param_1 + 0x10) < uVar1) {
    recovered_10005f5e((long *)(param_1 + 8),uVar1);
    return;
  }
  return;
}


#undef DAT_10009378
#define DAT_10009378 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xda8U)))
#undef LAB_10006488
#define LAB_10006488 (*(uint8_t *)(0x10006488U))
#define auStack_48 (*(undefined1 (*)[24])(frame + 128))
#define local_b8 (*(undefined1 (*)[8])(frame + 16))
#define local_b0 (*(void * *)(frame + 24))
#define local_a0 (*(undefined8 *)(frame + 40))
#define local_90 (*(undefined8 *)(frame + 56))
#define local_88 (*(undefined4 *)(frame + 64))
#define local_70 (*(code * *)(frame + 88))
#define uStack_a8 (*(undefined8 *)(frame + 32))
#define local_68 (*(undefined * *)(frame + 96))
#define local_60 (*(undefined1 * *)(frame + 104))
#define uStack_98 (*(undefined8 *)(frame + 48))
#define local_58 (*(undefined1 * *)(frame + 112))
#define local_50 (*(undefined1 * *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a6
 */

ulonglong recovered_100063a6(void)

{
  unsigned char frame[232] = {0};

  long lVar1;
  ulonglong uVar2;
  long in_RDI;

  local_60 = auStack_48 + 0x40;
  local_50 = local_b8;
  lVar1 = *(long *)(in_RDI + 0x50);
  local_70 = recovered_10002dc0;
  local_68 = &DAT_10009378;
  local_58 = &LAB_10006488;
  recovered_1000320a(&local_90);
  if (lVar1 == 0) {
    local_b8[0] = 0;
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_88 = 1;
    recovered_1000602e();
    local_88 = 2;
    uVar2 = recovered_10005be8();
    recovered_10002e37(local_b0);
  }
  else {
    local_88 = 0xffffffff;
    uVar2 = recovered_10005be8();
  }
  recovered_10003221(&local_90);
  return uVar2;
}

#undef DAT_10009378
#undef LAB_10006488
#undef auStack_48
#undef local_b8
#undef local_b0
#undef local_a0
#undef local_90
#undef local_88
#undef local_70
#undef uStack_a8
#undef local_68
#undef local_60
#undef uStack_98
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064cc
 */

ulonglong recovered_100064cc(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  long in_RDI;

  uVar1 = *(ulong *)(in_RDI + 0x50);
  if ((uVar1 == 0) || (*(ulong *)(in_RDI + 0x10) < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uVar1 * 0x28 + *(long *)(in_RDI + 8)) - 0x28;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064f4
 */

long recovered_100064f4(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064fe
 */

long recovered_100064fe(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006508
 */

undefined8 recovered_10006508(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined8 *)(param_1 + 0x50);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006512
 */

undefined4 recovered_10006512(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x38);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000651c
 */

undefined4 recovered_1000651c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x3c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006526
 */

undefined1 recovered_10006526(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined1 *)(param_1 + 0x40);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006530
 */

void recovered_10006530(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000653c
 */

undefined4 recovered_1000653c(long param_1)

{
  unsigned char frame[64] = {0};

  return *(undefined4 *)(param_1 + 0x44);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006546
 */

void recovered_10006546(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  *(uint *)(param_1 + 0x44) = param_2 & 0xffffff;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006556
 */

void recovered_10006556(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006560
 */

void recovered_10006560(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#define local_28 (*(long *)(frame + 40))
#define uStack_30 (*(ulonglong *)(frame + 32))
#define local_40 (*(void * *)(frame + 16))
#define local_38 (*(ulonglong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000656a
 */

void recovered_1000656a(ulonglong *param_1,long param_2,ulong param_3)

{
  unsigned char frame[112] = {0};

  void *data;
  ulonglong uVar1;
  ulonglong uVar2;
  uchar uVar3;
  ulong uVar4;

  if (param_2 == 0) {
    param_3 = 0;
  }
  local_28 = 0;
  uVar3 = recovered_10006636();
  if (uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10006674(param_1);
    }
    else {
      recovered_10005b00();
      for (uVar4 = 0; param_3 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = param_3;
      *(undefined1 *)(*param_1 + param_3) = 0;
    }
  }
  else {
    uVar4 = param_1[1] - local_28;
    if (param_3 < param_1[1] - local_28) {
      uVar4 = param_3;
    }
    recovered_1000669a(&local_40,local_28 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (ulonglong)local_40;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    local_40 = data;
    local_38 = uVar1;
    uStack_30 = uVar2;
    recovered_10002e37(data);
  }
  return;
}

#undef local_28
#undef uStack_30
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006636
 */

uchar recovered_10006636(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  long *in_RDX;
  long in_RSI;
  long lVar2;
  long *in_RDI;
  ulong uVar3;

  if (in_RSI == 0 || *in_RDI == 0) {
LAB_10006670:
    uVar1 = '\0';
  }
  else {
    lVar2 = in_RSI - *in_RDI;
    uVar3 = 0;
    do {
      if ((ulong)in_RDI[1] < uVar3) goto LAB_10006670;
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *in_RDX = lVar2;
    uVar1 = '\x01';
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006674
 */

void recovered_10006674(ulonglong *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_100066b6();
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000669a
 */

void recovered_1000669a(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  recovered_1000656a(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066b6
 */

ulonglong recovered_100066b6(void)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long in_RDI;

  puVar1 = recovered_10002e03(in_RDI + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
}


#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066c8
 */

void recovered_100066c8(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_100090ab;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_1000656a(param_1,(long)puVar1,param_2[1]);
  return;
}

#undef DAT_100090ab

#define abStack_59 (*(byte (*)[73])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f5
 */

double recovered_100066f5(void)

{
  unsigned char frame[137] = {0};

  uint in_ECX;
  ulong uVar1;
  ulong uVar2;
  ulong in_RDX;
  byte *in_RSI;
  byte *in_RDI;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  double in_XMM0_Qa;

  if ((in_RSI != (byte *)0x0 && in_RDI != (byte *)0x0) &&
     (0xffffffdc < in_ECX - 0x25 && in_RDI <= in_RSI)) {
    uVar3 = -in_RDX;
    if ((long)-in_RDX < 0) {
      uVar3 = in_RDX;
    }
    uVar4 = (ulong)in_ECX;
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      bVar5 = (byte)(uVar3 % uVar4);
      bVar6 = bVar5 + 0x57;
      if (uVar3 % uVar4 < 10) {
        bVar6 = bVar5 | 0x30;
      }
      abStack_59[uVar1 + 1] = bVar6;
      uVar2 = uVar1 + 1;
      bVar7 = uVar4 <= uVar3;
      uVar3 = uVar3 / uVar4;
    } while (bVar7);
    if ((long)in_RDX < 0) {
      abStack_59[uVar1 + 2] = 0x2d;
      uVar2 = uVar1 + 2;
    }
    if (uVar2 <= (ulong)((long)in_RSI - (long)in_RDI)) {
      while (uVar2 != 0) {
        *in_RDI = abStack_59[uVar2];
        in_RDI = in_RDI + 1;
        uVar2 = uVar2 - 1;
      }
    }
  }
  return in_XMM0_Qa;
}

#undef abStack_59

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067c4
 */

long recovered_100067c4(ulonglong *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar2 = 4;
    if (uVar1 != 0) {
      uVar2 = uVar1 * 2;
    }
    recovered_10006814(param_1,uVar2);
    uVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + uVar1) = *param_2;
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  return uVar1 + 1 + *param_1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006814
 */

void recovered_10006814(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if (param_1[2] < param_2) {
    uVar1 = recovered_10006866();
    for (uVar2 = 0; uVar2 < param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002e37((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006866
 */

ulonglong recovered_10006866(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002e03(in_RDI);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000687a
 */

void recovered_1000687a(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37((void *)*param_1);
  return;
}


#define lStack_20 (*(long *)(frame + 32))
#define local_30 (*(void * *)(frame + 16))
#define local_28 (*(long *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006888
 */

long * recovered_10006888(long *param_1,long *param_2)

{
  unsigned char frame[96] = {0};

  void *data;
  long lVar1;

  if (param_1 != param_2) {
    recovered_10006916((ulonglong *)&local_30,param_2);
    data = (void *)*param_1;
    *param_1 = (long)local_30;
    lVar1 = param_1[2];
    param_1[1] = local_28;
    param_1[2] = lStack_20;
    local_28 = 0;
    local_30 = data;
    lStack_20 = lVar1;
    recovered_10002e37(data);
  }
  return param_1;
}

#undef lStack_20
#undef local_30
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068da
 */

long * recovered_100068da(long *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  long lVar2;

  if (param_1 != param_2) {
    if ((long *)*param_2 == (long *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*param_2 + 0x18))();
    }
    plVar1 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006916
 */

void recovered_10006916(ulonglong *param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;
  ulonglong uVar2;
  ulonglong uVar3;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_1000695e(param_1,param_2[1]);
  lVar1 = *param_2;
  uVar2 = param_2[1];
  for (uVar3 = 0; uVar2 != uVar3; uVar3 = uVar3 + 1) {
    *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(lVar1 + uVar3);
  }
  param_1[1] = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000695e
 */

void recovered_1000695e(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if (param_1[2] < param_2) {
    uVar2 = recovered_100069b3();
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined1 *)(uVar2 + uVar3) = *(undefined1 *)(*param_1 + uVar3);
    }
    recovered_10002e37((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069b3
 */

ulonglong recovered_100069b3(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002e03(in_RDI);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c6
 */

void recovered_100069c6(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  recovered_10006c52(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069ec
 */

void recovered_100069ec(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006a08(param_1);
  recovered_10002e37((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a08
 */

void recovered_10006a08(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  while (bVar3 = lVar1 != 0, lVar1 = lVar1 + -1, bVar3) {
    recovered_1000687a((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a48
 */

void recovered_10006a48(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005f0a(param_1);
  recovered_10002e37((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a64
 */

void recovered_10006a64(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006a80(param_1);
  recovered_10002e37((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a80
 */

void recovered_10006a80(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  bool bVar3;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x38 + -0x30;
  while (bVar3 = lVar1 != 0, lVar1 = lVar1 + -1, bVar3) {
    recovered_1000687a((undefined8 *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x38;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

ulonglong recovered_10006ac0(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002e03(in_RDI * 0x38);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ad8
 */

void recovered_10006ad8(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  recovered_10006b0c((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  param_1[0x30] = param_2[0x30];
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b0c
 */

void recovered_10006b0c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b2c
 */

long recovered_10006b2c(long *param_1,undefined1 *param_2)

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
    recovered_10005a88((ulonglong *)param_1,uVar2);
    lVar1 = param_1[1];
  }
  recovered_10006ad8((undefined1 *)(lVar1 * 0x38 + *param_1),param_2);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 * 0x38 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b84
 */

double recovered_10006b84(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong in_RSI;
  ulonglong *in_RDI;
  long lVar2;
  ulong uVar3;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa = 0;

  if (in_RDI[2] < in_RSI) {
    uVar1 = recovered_10006bf6();
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < in_RDI[1]; uVar3 = uVar3 + 1) {
      recovered_10006c0e((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*in_RDI + lVar2));
      recovered_100069c6((undefined8 *)(*in_RDI + lVar2));
      lVar2 = lVar2 + 0x20;
    }
    recovered_10002e37((void *)*in_RDI);
    *in_RDI = uVar1;
    in_RDI[2] = in_RSI;
    in_XMM0_Qa = extraout_XMM0_Qa;
  }
  return in_XMM0_Qa;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf6
 */

ulonglong recovered_10006bf6(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002e03(in_RDI << 5);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c0e
 */

void recovered_10006c0e(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10006c32(param_1,param_2);
  param_1[3] = param_2[3];
  param_2[3] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c32
 */

void recovered_10006c32(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c52
 */

void recovered_10006c52(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e37((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c64
 */

void recovered_10006c64(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_1000695e((ulonglong *)param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    recovered_10006cae(param_1,param_2);
    param_2 = param_2 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cae
 */

undefined1 * recovered_10006cae(long *param_1,undefined1 *param_2)

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
    recovered_1000695e((ulonglong *)param_1,uVar3);
    lVar2 = param_1[1];
  }
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + lVar2) = *param_2;
  param_1[1] = lVar2 + 1;
  return (undefined1 *)(lVar1 + lVar2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cfe
 */

void recovered_10006cfe(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d04
 */

void recovered_10006d04(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#undef DAT_10009380
#define DAT_10009380 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdb0U)))
#undef LAB_10006df2
#define LAB_10006df2 (*(uint8_t *)(0x10006df2U))
#define local_a0 (*(undefined8 *)(frame + 24))
#define local_98 (*(undefined4 *)(frame + 32))
#define local_80 (*(code * *)(frame + 56))
#define local_78 (*(undefined * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_60 (*(undefined1 * *)(frame + 88))
#define local_48 (*(void * (*)[3])(frame + 112))
#define auStack_a8 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d0e
 */

void recovered_10006d0e(undefined8 param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[216] = {0};

  long lVar1;
  char *pcVar2;

  local_70 = (undefined1 *)(local_48 + 8);
  local_60 = auStack_a8;
  lVar1 = param_3[1];
  local_80 = recovered_10002dc0;
  local_78 = &DAT_10009380;
  local_68 = &LAB_10006df2;
  recovered_1000320a(&local_a0);
  if (lVar1 != 0) {
    if (*(char *)(*param_3 + 0x30) == '\x01') {
      pcVar2 = (char *)recovered_100064cc();
      if (pcVar2 != (char *)0x0) {
        local_98 = 0xffffffff;
        recovered_10003c8e(local_48,pcVar2);
        local_98 = 1;
        recovered_10006e50();
        recovered_10002e37(local_48[0]);
      }
    }
    else {
      local_98 = 0xffffffff;
      recovered_10006e50();
    }
  }
  recovered_10003221(&local_a0);
  return;
}

#undef DAT_10009380
#undef LAB_10006df2
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef auStack_a8

#undef PTR_recovered_10006cfe_1000a0d0
#define PTR_recovered_10006cfe_1000a0d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1b00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e38
 */

void recovered_10006e38(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10006cfe_1000a0d0;
  return;
}

#undef PTR_recovered_10006cfe_1000a0d0

#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

ulonglong recovered_10006e50(void)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 *in_RSI;
  long in_RDI;

  puVar1 = &DAT_100090ab;
  if ((undefined1 *)*in_RSI != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*in_RSI;
  }
  uVar2 = recovered_10006e72(in_RDI,(long)puVar1,in_RSI[1]);
  return uVar2;
}

#undef DAT_100090ab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e72
 */

long recovered_10006e72(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  if (((param_3 != 0) && (param_2 != 0)) && (*(uint **)(param_1 + 8) != (uint *)0x0)) {
    recovered_100026a5((void *)param_2,1,param_3,*(uint **)(param_1 + 8));
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea6
 */

void recovered_10006ea6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eac
 */

void recovered_10006eac(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb6
 */

void recovered_10006eb6(undefined8 param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (param_3[1] == 0) {
    return;
  }
  if (*(char *)(*param_3 + 0x30) == '\x01') {
    uVar1 = recovered_100064cc();
    if (uVar1 == 0) {
      return;
    }
    recovered_10003d2a();
  }
  recovered_10006f10();
  return;
}


#undef PTR_recovered_10006ea6_1000a128
#define PTR_recovered_10006ea6_1000a128 (*(void * *)(((uintptr_t)pf_module_state + 0x1b58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ef8
 */

void recovered_10006ef8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10006ea6_1000a128;
  return;
}

#undef PTR_recovered_10006ea6_1000a128

#undef DAT_10009388
#define DAT_10009388 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdb8U)))
#undef LAB_10006fa1
#define LAB_10006fa1 (*(uint8_t *)(0x10006fa1U))
#define local_a0 (*(undefined8 *)(frame + 24))
#define local_98 (*(undefined4 *)(frame + 32))
#define local_80 (*(code * *)(frame + 56))
#define local_78 (*(undefined * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_60 (*(undefined1 * *)(frame + 88))
#define local_48 (*(void * (*)[3])(frame + 112))
#define auStack_a8 (*(undefined1 (*)[8])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

ulonglong recovered_10006f10(void)

{
  unsigned char frame[216] = {0};

  ulonglong uVar1;

  recovered_10003cd7(local_48);
  local_60 = auStack_a8;
  local_80 = recovered_10002dc0;
  local_78 = &DAT_10009388;
  local_68 = &LAB_10006fa1;
  local_98 = 1;
  local_70 = (undefined1 *)(local_48 + 8);
  recovered_1000320a(&local_a0);
  uVar1 = recovered_10006e50();
  recovered_10002e37(local_48[0]);
  recovered_10003221(&local_a0);
  return uVar1;
}

#undef DAT_10009388
#undef LAB_10006fa1
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef auStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe4
 */

void recovered_10006fe4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fea
 */

void recovered_10006fea(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#define local_30 (*(void * (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff4
 */

void recovered_10006ff4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[96] = {0};

  char *pcVar1;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10005be8();
  recovered_10003c8e(local_30,pcVar1);
  recovered_10003c4e(pcVar1);
  recovered_10002e37(local_30[0]);
  return;
}

#undef local_30

#undef PTR_recovered_10006fe4_1000a170
#define PTR_recovered_10006fe4_1000a170 (*(void * *)(((uintptr_t)pf_module_state + 0x1ba0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007052
 */

void recovered_10007052(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10006fe4_1000a170;
  return;
}

#undef PTR_recovered_10006fe4_1000a170

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000706a
 */

void recovered_1000706a(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007070
 */

void recovered_10007070(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000707a
 */

void recovered_1000707a(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  uVar2 = recovered_10003d2a();
  *puVar1 = 2;
  *(ulonglong *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_1000706a_1000a1b8
#define PTR_recovered_1000706a_1000a1b8 (*(void * *)(((uintptr_t)pf_module_state + 0x1be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070ce
 */

void recovered_100070ce(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_1000706a_1000a1b8;
  return;
}

#undef PTR_recovered_1000706a_1000a1b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e6
 */

void recovered_100070e6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070ec
 */

void recovered_100070ec(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070f6
 */

void recovered_100070f6(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (*(long *)(param_2 + 0x50) == 0) {
    recovered_10006050(param_2,*param_3 + 8);
    return;
  }
  puVar1 = (undefined1 *)recovered_100063a6();
  recovered_10003c2c(puVar1);
  return;
}


#undef PTR_recovered_100070e6_1000a200
#define PTR_recovered_100070e6_1000a200 (*(void * *)(((uintptr_t)pf_module_state + 0x1c30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007136
 */

void recovered_10007136(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_100070e6_1000a200;
  return;
}

#undef PTR_recovered_100070e6_1000a200

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000714e
 */

void recovered_1000714e(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007154
 */

void recovered_10007154(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000715e
 */

void recovered_1000715e(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  undefined1 *puVar2;

  if (*(long *)(param_2 + 0x50) == 0) {
    recovered_10006240(param_2,*(undefined8 *)(*param_3 + 0x20));
    return;
  }
  puVar2 = (undefined1 *)recovered_100063a6();
  uVar1 = *(undefined8 *)(*param_3 + 0x20);
  *puVar2 = 2;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_1000714e_1000a248
#define PTR_recovered_1000714e_1000a248 (*(void * *)(((uintptr_t)pf_module_state + 0x1c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071ae
 */

void recovered_100071ae(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_1000714e_1000a248;
  return;
}

#undef PTR_recovered_1000714e_1000a248

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071c6
 */

void recovered_100071c6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071cc
 */

void recovered_100071cc(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#undef DAT_10009390
#define DAT_10009390 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdc0U)))
#undef LAB_100072ad
#define LAB_100072ad (*(uint8_t *)(0x100072adU))
#define local_b0 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined4 *)(frame + 32))
#define auStack_b8 (*(undefined1 (*)[8])(frame + 16))
#define local_90 (*(code * *)(frame + 56))
#define local_88 (*(undefined * *)(frame + 64))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 88))
#define local_58 (*(undefined1 (*)[8])(frame + 112))
#define local_50 (*(void * *)(frame + 120))
#define auStack_48 (*(undefined1 (*)[24])(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d6
 */

void recovered_100071d6(undefined8 param_1,long param_2)

{
  unsigned char frame[232] = {0};

  long lVar1;
  undefined1 *puVar2;

  puVar2 = (undefined1 *)recovered_10005be8();
  recovered_1000733e(local_58,puVar2);
  local_70 = auStack_b8;
  lVar1 = *(long *)(param_2 + 0x50);
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10009390;
  local_78 = &LAB_100072ad;
  local_80 = auStack_48 + 0x40;
  recovered_1000320a(&local_b0);
  if (lVar1 == 0) {
    local_a8 = 1;
    recovered_1000600c(param_2,local_58);
  }
  else {
    local_a8 = 2;
    puVar2 = (undefined1 *)recovered_100063a6();
    local_a8 = 3;
    recovered_10007310(puVar2,local_58);
  }
  recovered_10002e37(local_50);
  recovered_10003221(&local_b0);
  return;
}

#undef DAT_10009390
#undef LAB_100072ad
#undef local_b0
#undef local_a8
#undef auStack_b8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_58
#undef local_50
#undef auStack_48

#undef PTR_recovered_100071c6_1000a290
#define PTR_recovered_100071c6_1000a290 (*(void * *)(((uintptr_t)pf_module_state + 0x1cc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f8
 */

void recovered_100072f8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_100071c6_1000a290;
  return;
}

#undef PTR_recovered_100071c6_1000a290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

undefined1 * recovered_10007310(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10003b10((ulonglong *)(param_1 + 8),(ulonglong *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000733e
 */

void recovered_1000733e(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_100066c8((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000736a
 */

void recovered_1000736a(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

void recovered_10007370(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000737a
 */

void recovered_1000737a(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar1 = *param_3;
  lVar3 = *(long *)(lVar1 + 0x20);
  if (lVar3 < -0x7fffffff) {
    lVar3 = -0x80000000;
  }
  if (0x7ffffffe < lVar3) {
    lVar3 = 0x7fffffff;
  }
  lVar2 = -0x80000000;
  if (-0x80000000 < *(long *)(lVar1 + 0x58)) {
    lVar2 = *(long *)(lVar1 + 0x58);
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  recovered_100073e0((int *)*param_2,(int)lVar3,(int)lVar2,*(uint *)(lVar1 + 0x90));
  return;
}


#undef PTR_recovered_1000736a_1000a2d8
#define PTR_recovered_1000736a_1000a2d8 (*(void * *)(((uintptr_t)pf_module_state + 0x1d08U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073c8
 */

void recovered_100073c8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_1000736a_1000a2d8;
  return;
}

#undef PTR_recovered_1000736a_1000a2d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073e0
 */

void recovered_100073e0(int *param_1,int param_2,int param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;

  uVar2 = recovered_10005994();
  if ((char)uVar2 != '\0') {
    lVar3 = (long)(param_2 + (param_3 + -1) * *param_1 + -1);
    lVar1 = lVar3 * 4;
    lVar3 = lVar3 * 4 + 1;
    uVar4 = (undefined1)(param_4 >> 8);
    uVar5 = (undefined1)(param_4 >> 0x10);
    if (param_4 < 0x1000000) {
      *(undefined1 *)(*(long *)(param_1 + 2) + lVar1) = uVar5;
      *(undefined1 *)(*(long *)(param_1 + 2) + lVar3) = uVar4;
      *(char *)(*(long *)(param_1 + 2) + 2 + lVar1) = (char)param_4;
      param_4 = 0xff;
    }
    else {
      *(char *)(*(long *)(param_1 + 2) + lVar1) = (char)(param_4 >> 0x18);
      *(undefined1 *)(*(long *)(param_1 + 2) + lVar3) = uVar5;
      *(undefined1 *)(*(long *)(param_1 + 2) + 2 + lVar1) = uVar4;
    }
    *(char *)(*(long *)(param_1 + 2) + 3 + lVar1) = (char)param_4;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007474
 */

void recovered_10007474(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000747a
 */

void recovered_1000747a(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_1000939c
#define DAT_1000939c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdccU)))
#undef LAB_100076b4
#define LAB_100076b4 (*(uint8_t *)(0x100076b4U))
#define local_c8 (*(undefined8 *)(frame + 16))
#define local_c0 (*(undefined4 *)(frame + 24))
#define local_a8 (*(code * *)(frame + 48))
#define local_a0 (*(undefined * *)(frame + 56))
#define local_98 (*(undefined1 * *)(frame + 64))
#define local_90 (*(undefined1 * *)(frame + 72))
#define local_88 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 104))
#define local_68 (*(char * *)(frame + 112))
#define local_60 (*(undefined8 * *)(frame + 120))
#define uStack_48 (*(ulong *)(frame + 144))
#define local_58 (*(long * *)(frame + 128))
#define local_50 (*(char * *)(frame + 136))
#define local_40 (*(undefined8 *)(frame + 152))
#define local_38 (*(undefined8 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007484
 */

void recovered_10007484(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  unsigned char frame[248] = {0};

  char cVar1;
  long lVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 216) + -8);
  local_88 = (undefined1 *)&local_c8;
  local_38 = (char *)*param_3;
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_a8 = recovered_10002dc0;
  local_a0 = &DAT_1000939c;
  local_90 = &LAB_100076b4;
  local_c0 = 1;
  local_60 = param_2;
  local_58 = param_3;
  recovered_1000320a(&local_c8);
  recovered_10005b00();
  puVar4 = &DAT_100090ab;
  if (*(undefined1 **)(local_38 + 0x78) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(local_38 + 0x78);
  }
  pcVar8 = *(char **)(local_38 + 0x80);
  local_70 = puVar4;
  local_68 = pcVar8;
  for (pcVar7 = (char *)0x0; pcVar8 != pcVar7; pcVar7 = pcVar7 + 1) {
    bVar3 = pcVar7[(long)puVar4];
    if ((ulong)bVar3 < 0x24) {
      if ((0x900002600U >> ((ulong)bVar3 & 0x3f) & 1) == 0) goto LAB_1000754f;
    }
    else {
LAB_1000754f:
      local_c0 = 2;
      local_38 = pcVar7;
      recovered_10005b5a((ulonglong *)&local_50,bVar3);
      pcVar8 = local_68;
      puVar4 = local_70;
      pcVar7 = local_38;
    }
  }
  uVar6 = 0;
  bVar10 = false;
  if (1 < uStack_48) {
    if ((*local_50 == '0') && ((byte)(local_50[1] | 0x20U) == 0x78)) {
      recovered_10007728((long *)&local_50,0,2);
    }
    if ((uStack_48 == 8) || (uVar6 = 0, uStack_48 == 6)) {
      local_c0 = 3;
      local_38 = (char *)recovered_100077a0();
      local_c0 = 4;
      pcVar7 = (char *)recovered_10007786();
      uVar6 = 0;
      for (pcVar8 = local_38; bVar10 = pcVar8 == pcVar7, !bVar10; pcVar8 = pcVar8 + 1) {
        cVar1 = *pcVar8;
        bVar3 = cVar1 - 0x30;
        if (9 < bVar3) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            bVar3 = cVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) {
              uVar6 = 0;
              break;
            }
            bVar3 = cVar1 - 0x37;
          }
        }
        uVar6 = uVar6 << 4 | (uint)bVar3;
      }
    }
  }
  recovered_10002e37(local_50);
  if (bVar10) {
    lVar9 = *(long *)(*local_58 + 0x20);
    if (lVar9 < -0x7fffffff) {
      lVar9 = -0x80000000;
    }
    if (0x7ffffffe < lVar9) {
      lVar9 = 0x7fffffff;
    }
    lVar2 = *(long *)(*local_58 + 0x58);
    lVar5 = -0x80000000;
    if (-0x80000000 < lVar2) {
      lVar5 = lVar2;
    }
    if (0x7ffffffe < lVar5) {
      lVar5 = 0x7fffffff;
    }
    recovered_100073e0((int *)*local_60,(int)lVar9,(int)lVar5,uVar6);
  }
  recovered_10003221(&local_c8);
  return;
}

#undef DAT_100090ab
#undef DAT_1000939c
#undef LAB_100076b4
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef uStack_48
#undef local_58
#undef local_50
#undef local_40
#undef local_38

#undef PTR_recovered_10007474_1000a320
#define PTR_recovered_10007474_1000a320 (*(void * *)(((uintptr_t)pf_module_state + 0x1d50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007710
 */

void recovered_10007710(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007474_1000a320;
  return;
}

#undef PTR_recovered_10007474_1000a320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007728
 */

void recovered_10007728(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar3 = uVar1 - param_2;
  uVar2 = param_3;
  if (uVar3 < param_3) {
    uVar2 = uVar3;
  }
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = uVar3;
  }
  for (; uVar2 + param_2 < uVar1; param_2 = param_2 + 1) {
    *(undefined1 *)(*param_1 + param_2) = *(undefined1 *)(uVar2 + *param_1 + param_2);
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 - uVar2;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + (uVar1 - uVar2)) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007786
 */

ulonglong recovered_10007786(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long in_RDI;

  uVar1 = recovered_100077a0();
  return uVar1 + *(long *)(in_RDI + 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077a0
 */

ulonglong recovered_100077a0(void)

{
  unsigned char frame[64] = {0};

  ulonglong *in_RDI;

  recovered_10006674(in_RDI);
  return *in_RDI;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b8
 */

void recovered_100077b8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077be
 */

void recovered_100077be(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077c8
 */

void recovered_100077c8(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(*param_3 + 0x20);
  lVar1 = *(long *)(*param_3 + 0x58);
  if (lVar2 < -0x7fffffff) {
    lVar2 = -0x80000000;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar3 = -0x80000000;
  if (-0x80000000 < lVar1) {
    lVar3 = lVar1;
  }
  if (0x7ffffffe < lVar3) {
    lVar3 = 0x7fffffff;
  }
  *(int *)(param_2 + 0x38) = (int)lVar2;
  *(int *)(param_2 + 0x3c) = (int)lVar3;
  return;
}


#undef PTR_recovered_100077b8_1000a368
#define PTR_recovered_100077b8_1000a368 (*(void * *)(((uintptr_t)pf_module_state + 0x1d98U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007810
 */

void recovered_10007810(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_100077b8_1000a368;
  return;
}

#undef PTR_recovered_100077b8_1000a368

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007828
 */

void recovered_10007828(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000782e
 */

void recovered_1000782e(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007838
 */

void recovered_10007838(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = 1;
  if (1 < *(long *)(*param_3 + 0x20)) {
    lVar1 = *(long *)(*param_3 + 0x20);
  }
  recovered_10006348(param_2,lVar1);
  return;
}


#undef PTR_recovered_10007828_1000a3b0
#define PTR_recovered_10007828_1000a3b0 (*(void * *)(((uintptr_t)pf_module_state + 0x1de0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007858
 */

void recovered_10007858(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007828_1000a3b0;
  return;
}

#undef PTR_recovered_10007828_1000a3b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007870
 */

void recovered_10007870(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007876
 */

void recovered_10007876(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#undef DAT_100093a8
#define DAT_100093a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdd8U)))
#undef LAB_1000798b
#define LAB_1000798b (*(uint8_t *)(0x1000798bU))
#define local_d8 (*(void * (*)[3])(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 40))
#define local_b8 (*(undefined4 *)(frame + 48))
#define local_a0 (*(code * *)(frame + 72))
#define local_98 (*(undefined * *)(frame + 80))
#define local_90 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined1 * *)(frame + 96))
#define local_80 (*(undefined1 * *)(frame + 104))
#define local_68 (*(void * (*)[3])(frame + 128))
#define local_50 (*(void * (*)[3])(frame + 152))
#define local_38 (*(char * *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007880
 */

void recovered_10007880(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[264] = {0};

  char *pcVar1;
  char *pcVar2;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  pcVar1 = (char *)recovered_10005be8();
  pcVar2 = (char *)recovered_10005be8();
  recovered_10003c8e(local_68,pcVar2);
  local_80 = (undefined1 *)local_d8;
  local_a0 = recovered_10002dc0;
  local_98 = &DAT_100093a8;
  local_88 = &LAB_1000798b;
  local_b8 = 1;
  local_90 = (undefined1 *)(local_50 + 9);
  recovered_1000320a(&local_c0);
  local_38 = pcVar1;
  recovered_10003c8e(local_50,pcVar1);
  local_b8 = 2;
  recovered_10007a08((long *)local_d8,local_50,local_68);
  recovered_10003c4e(local_38);
  recovered_10002e37(local_d8[0]);
  recovered_10002e37(local_50[0]);
  recovered_10002e37(local_68[0]);
  recovered_10003221(&local_c0);
  return;
}

#undef DAT_100093a8
#undef LAB_1000798b
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_50
#undef local_38

#undef PTR_recovered_10007870_1000a3f8
#define PTR_recovered_10007870_1000a3f8 (*(void * *)(((uintptr_t)pf_module_state + 0x1e28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

void recovered_100079f0(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007870_1000a3f8;
  return;
}

#undef PTR_recovered_10007870_1000a3f8

#undef DAT_100093b0
#define DAT_100093b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde0U)))
#undef LAB_10007a97
#define LAB_10007a97 (*(uint8_t *)(0x10007a97U))
#define local_98 (*(undefined8 *)(frame + 16))
#define local_90 (*(undefined4 *)(frame + 24))
#define local_78 (*(code * *)(frame + 48))
#define local_70 (*(undefined * *)(frame + 56))
#define local_68 (*(undefined1 * *)(frame + 64))
#define local_60 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 80))
#define local_40 (*(long * *)(frame + 104))
#define local_38 (*(undefined8 *)(frame + 112))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a08
 */

long * recovered_10007a08(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[200] = {0};

  long *plVar1;

  local_40 = param_1;
  local_38 = param_1;
  recovered_100066c8(param_1,param_2);
  plVar1 = local_38;
  local_58 = (undefined1 *)&local_98;
  local_78 = recovered_10002dc0;
  local_70 = &DAT_100093b0;
  local_60 = &LAB_10007a97;
  local_90 = 1;
  local_68 = (undefined1 *)((long)(uintptr_t)(frame + 168) + -8);
  recovered_1000320a(&local_98);
  recovered_10007adc(plVar1,param_3);
  recovered_10003221(&local_98);
  return local_40;
}

#undef DAT_100093b0
#undef LAB_10007a97
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007adc
 */

void recovered_10007adc(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_100090ab;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10007afe(param_1,(long)puVar1,param_2[1]);
  return;
}

#undef DAT_100090ab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007afe
 */

long * recovered_10007afe(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_3 != 0 && param_2 != 0) {
    uVar2 = recovered_10006636();
    uVar4 = param_1[1];
    if (uVar2 == '\0') {
      recovered_10005b00();
      for (uVar4 = 0; param_3 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(uVar4 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar4);
      }
    }
    else {
      if (uVar4 < param_3) {
        param_3 = uVar4;
      }
      recovered_10005b00();
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(uVar3 + *param_1 + uVar4) = *(undefined1 *)(uVar3 + *param_1);
      }
    }
    lVar1 = param_1[1];
    param_1[1] = param_3 + lVar1;
    *(undefined1 *)(*param_1 + param_3 + lVar1) = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bc4
 */

void recovered_10007bc4(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bca
 */

void recovered_10007bca(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


#undef DAT_100093b8
#define DAT_100093b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xde8U)))
#undef LAB_10007cb0
#define LAB_10007cb0 (*(uint8_t *)(0x10007cb0U))
#define local_90 (*(undefined1 * *)(frame + 72))
#define local_88 (*(undefined1 * *)(frame + 80))
#define local_80 (*(undefined1 * *)(frame + 88))
#define local_68 (*(void * (*)[3])(frame + 112))
#define local_50 (*(void * (*)[3])(frame + 136))
#define local_38 (*(char * *)(frame + 160))
#define auStack_c8 (*(undefined1 (*)[8])(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 24))
#define local_b8 (*(undefined4 *)(frame + 32))
#define local_a0 (*(code * *)(frame + 56))
#define local_98 (*(undefined * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bd4
 */

void recovered_10007bd4(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[248] = {0};

  long lVar1;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  local_38 = (char *)recovered_10005be8();
  recovered_10003c8e(local_50,local_38);
  local_80 = auStack_c8;
  lVar1 = *param_3;
  local_a0 = recovered_10002dc0;
  local_98 = &DAT_100093b8;
  local_88 = &LAB_10007cb0;
  local_b8 = 1;
  local_90 = (undefined1 *)(local_50 + 9);
  recovered_1000320a(&local_c0);
  recovered_10007a08((long *)local_68,local_50,(undefined8 *)(lVar1 + 0x40));
  recovered_10003c4e(local_38);
  recovered_10002e37(local_68[0]);
  recovered_10002e37(local_50[0]);
  recovered_10003221(&local_c0);
  return;
}

#undef DAT_100093b8
#undef LAB_10007cb0
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_50
#undef local_38
#undef auStack_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98

#undef PTR_recovered_10007bc4_1000a440
#define PTR_recovered_10007bc4_1000a440 (*(void * *)(((uintptr_t)pf_module_state + 0x1e70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf4
 */

void recovered_10007cf4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007bc4_1000a440;
  return;
}

#undef PTR_recovered_10007bc4_1000a440

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d0c
 */

void recovered_10007d0c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d12
 */

void recovered_10007d12(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d1c
 */

void recovered_10007d1c(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar2 = (undefined1 *)recovered_10005be8();
  uVar3 = recovered_10003d2a();
  lVar1 = *(long *)(*param_3 + 0x58);
  *puVar2 = 2;
  *(ulonglong *)(puVar2 + 0x20) = uVar3 + lVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007d0c_1000a488
#define PTR_recovered_10007d0c_1000a488 (*(void * *)(((uintptr_t)pf_module_state + 0x1eb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d78
 */

void recovered_10007d78(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007d0c_1000a488;
  return;
}

#undef PTR_recovered_10007d0c_1000a488

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d90
 */

void recovered_10007d90(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d96
 */

void recovered_10007d96(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007da0
 */

void recovered_10007da0(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  recovered_10005be8();
  uVar2 = recovered_10003d2a();
  uVar3 = recovered_10003d2a();
  *puVar1 = 2;
  *(ulonglong *)(puVar1 + 0x20) = uVar3 + uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007d90_1000a4d0
#define PTR_recovered_10007d90_1000a4d0 (*(void * *)(((uintptr_t)pf_module_state + 0x1f00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e1a
 */

void recovered_10007e1a(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007d90_1000a4d0;
  return;
}

#undef PTR_recovered_10007d90_1000a4d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e32
 */

void recovered_10007e32(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e38
 */

void recovered_10007e38(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e42
 */

void recovered_10007e42(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar2 = (undefined1 *)recovered_10005be8();
  uVar3 = recovered_10003d2a();
  lVar1 = *(long *)(*param_3 + 0x58);
  *puVar2 = 2;
  *(ulonglong *)(puVar2 + 0x20) = uVar3 - lVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007e32_1000a518
#define PTR_recovered_10007e32_1000a518 (*(void * *)(((uintptr_t)pf_module_state + 0x1f48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e9e
 */

void recovered_10007e9e(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007e32_1000a518;
  return;
}

#undef PTR_recovered_10007e32_1000a518

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007eb6
 */

void recovered_10007eb6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ebc
 */

void recovered_10007ebc(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ec6
 */

void recovered_10007ec6(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  recovered_10005be8();
  uVar2 = recovered_10003d2a();
  uVar3 = recovered_10003d2a();
  *puVar1 = 2;
  *(ulonglong *)(puVar1 + 0x20) = uVar3 - uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007eb6_1000a560
#define PTR_recovered_10007eb6_1000a560 (*(void * *)(((uintptr_t)pf_module_state + 0x1f90U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f40
 */

void recovered_10007f40(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007eb6_1000a560;
  return;
}

#undef PTR_recovered_10007eb6_1000a560

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f58
 */

void recovered_10007f58(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f5e
 */

void recovered_10007f5e(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f68
 */

void recovered_10007f68(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar2 = (undefined1 *)recovered_10005be8();
  uVar3 = recovered_10003d2a();
  lVar1 = *(long *)(*param_3 + 0x58);
  *puVar2 = 2;
  *(ulonglong *)(puVar2 + 0x20) = uVar3 * lVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  if (*(undefined1 **)(puVar2 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar2 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007f58_1000a5a8
#define PTR_recovered_10007f58_1000a5a8 (*(void * *)(((uintptr_t)pf_module_state + 0x1fd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fc4
 */

void recovered_10007fc4(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007f58_1000a5a8;
  return;
}

#undef PTR_recovered_10007f58_1000a5a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fdc
 */

void recovered_10007fdc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fe2
 */

void recovered_10007fe2(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fec
 */

void recovered_10007fec(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  recovered_10005be8();
  uVar2 = recovered_10003d2a();
  uVar3 = recovered_10003d2a();
  *puVar1 = 2;
  *(ulonglong *)(puVar1 + 0x20) = uVar3 * uVar2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10007fdc_1000a5f0
#define PTR_recovered_10007fdc_1000a5f0 (*(void * *)(((uintptr_t)pf_module_state + 0x2020U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008068
 */

void recovered_10008068(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10007fdc_1000a5f0;
  return;
}

#undef PTR_recovered_10007fdc_1000a5f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008080
 */

void recovered_10008080(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008086
 */

void recovered_10008086(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

void recovered_10008090(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  long lVar3;

  lVar3 = *(long *)(*param_3 + 0x58);
  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = recovered_10003d2a();
    lVar3 = (long)uVar2 / lVar3;
  }
  *puVar1 = 2;
  *(long *)(puVar1 + 0x20) = lVar3;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10008080_1000a638
#define PTR_recovered_10008080_1000a638 (*(void * *)(((uintptr_t)pf_module_state + 0x2068U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080fe
 */

void recovered_100080fe(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10008080_1000a638;
  return;
}

#undef PTR_recovered_10008080_1000a638

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008116
 */

void recovered_10008116(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000811c
 */

void recovered_1000811c(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008126
 */

void recovered_10008126(undefined8 param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  long lVar4;

  recovered_10006384(param_2,*(long *)(*param_3 + 0x28));
  puVar1 = (undefined1 *)recovered_10005be8();
  recovered_10005be8();
  uVar2 = recovered_10003d2a();
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = recovered_10003d2a();
    lVar4 = (long)uVar3 / (long)uVar2;
  }
  *puVar1 = 2;
  *(long *)(puVar1 + 0x20) = lVar4;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (*(undefined1 **)(puVar1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(puVar1 + 8) = 0;
  }
  return;
}


#undef PTR_recovered_10008116_1000a680
#define PTR_recovered_10008116_1000a680 (*(void * *)(((uintptr_t)pf_module_state + 0x20b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081aa
 */

void recovered_100081aa(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_10008116_1000a680;
  return;
}

#undef PTR_recovered_10008116_1000a680

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081c2
 */

void recovered_100081c2(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081c8
 */

void recovered_100081c8(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e37(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081d2
 */

void recovered_100081d2(undefined8 param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  uchar uVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)recovered_10005be8();
  pcVar4 = (char *)recovered_10005be8();
  cVar1 = *pcVar3;
  if (cVar1 != *pcVar4) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = recovered_10008270();
      if (uVar2 == '\0') {
        return;
      }
    }
    else if ((cVar1 != '\x02') || (*(long *)(pcVar3 + 0x20) != *(long *)(pcVar4 + 0x20))) {
      return;
    }
  }
  recovered_10005a6c(param_2);
  return;
}


#undef PTR_recovered_100081c2_1000a6c8
#define PTR_recovered_100081c2_1000a6c8 (*(void * *)(((uintptr_t)pf_module_state + 0x20f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008258
 */

void recovered_10008258(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = recovered_10002e03(0x10);
  *puVar1 = &PTR_recovered_100081c2_1000a6c8;
  return;
}

#undef PTR_recovered_100081c2_1000a6c8

#undef DAT_100090ab
#define DAT_100090ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008270
 */

uchar recovered_10008270(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *in_RSI;
  undefined8 *in_RDI;

  puVar2 = (undefined1 *)*in_RDI;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_100090ab;
  }
  puVar3 = (undefined1 *)*in_RSI;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_100090ab;
  }
  uVar1 = recovered_100082a3((long)puVar2,in_RDI[1],(long)puVar3,in_RSI[1]);
  return uVar1;
}

#undef DAT_100090ab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082a3
 */

undefined1 recovered_100082a3(long param_1,long param_2,long param_3,long param_4)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082ce
 */

double recovered_100082ce(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong in_RSI;
  ulonglong *in_RDI;
  long lVar2;
  ulong uVar3;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa = 0;

  if (in_RDI[2] < in_RSI) {
    uVar1 = recovered_10008345();
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < in_RDI[1]; uVar3 = uVar3 + 1) {
      recovered_1000835c((undefined1 *)(uVar1 + lVar2),(undefined1 *)(*in_RDI + lVar2));
      recovered_1000687a((undefined8 *)(*in_RDI + lVar2 + 8));
      lVar2 = lVar2 + 0x28;
    }
    recovered_10002e37((void *)*in_RDI);
    *in_RDI = uVar1;
    in_RDI[2] = in_RSI;
    in_XMM0_Qa = extraout_XMM0_Qa;
  }
  return in_XMM0_Qa;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008345
 */

ulonglong recovered_10008345(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002e03(in_RDI * 0x28);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000835c
 */

void recovered_1000835c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_2;
  recovered_10006b0c((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008388
 */

long recovered_10008388(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    recovered_100082ce();
    lVar1 = param_1[1];
  }
  recovered_1000733e((undefined1 *)(lVar1 * 0x28 + *param_1),param_2);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 * 0x28 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083e0
 */

long recovered_100083e0(long *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = param_1[1];
  if (lVar1 == param_1[2]) {
    recovered_100082ce();
    lVar1 = param_1[1];
  }
  recovered_1000835c((undefined1 *)(lVar1 * 0x28 + *param_1),param_2);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 * 0x28 + *param_1;
}


#undef DAT_1000b0c8
#define DAT_1000b0c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2af8U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a30U)))
#undef PTR_DAT_1000a020
#define PTR_DAT_1000a020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a50U)))
#undef PTR_recovered_10003a14_1000a070
#define PTR_recovered_10003a14_1000a070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1aa0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008438
 */

void recovered_10008438(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_1000a000 == '\0') {
    uVar3 = recovered_100030a0();
    uVar2 = DAT_1000b0c8;
    puVar1 = PTR_DAT_1000a020;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_1000a020 = &PTR_recovered_10003a14_1000a070;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003098();
      recovered_100030ad(PTR_DAT_1000a000);
      return;
    }
  }
  return;
}

#undef DAT_1000b0c8
#undef PTR_DAT_1000a000
#undef PTR_DAT_1000a020
#undef PTR_recovered_10003a14_1000a070

#undef DAT_1000b0d0
#define DAT_1000b0d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b00U)))
#undef PTR_DAT_1000a018
#define PTR_DAT_1000a018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a48U)))
#undef PTR_DAT_1000a038
#define PTR_DAT_1000a038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a68U)))
#undef PTR_recovered_10003a1a_1000a0a0
#define PTR_recovered_10003a1a_1000a0a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1ad0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000849e
 */

void recovered_1000849e(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_1000a018 == '\0') {
    uVar3 = recovered_100030a0();
    uVar2 = DAT_1000b0d0;
    puVar1 = PTR_DAT_1000a038;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_1000a038 = &PTR_recovered_10003a1a_1000a0a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003098();
      recovered_100030ad(PTR_DAT_1000a018);
      return;
    }
  }
  return;
}

#undef DAT_1000b0d0
#undef PTR_DAT_1000a018
#undef PTR_DAT_1000a038
#undef PTR_recovered_10003a1a_1000a0a0

#undef DAT_1000b0d8
#define DAT_1000b0d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b08U)))
#undef PTR_DAT_1000a008
#define PTR_DAT_1000a008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a38U)))
#undef PTR_DAT_1000a028
#define PTR_DAT_1000a028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a58U)))
#undef PTR_recovered_10003a1a_1000a0a0
#define PTR_recovered_10003a1a_1000a0a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1ad0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008504
 */

void recovered_10008504(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_1000a008 == '\0') {
    uVar3 = recovered_100030a0();
    uVar2 = DAT_1000b0d8;
    puVar1 = PTR_DAT_1000a028;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_1000a028 = &PTR_recovered_10003a1a_1000a0a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003098();
      recovered_100030ad(PTR_DAT_1000a008);
      return;
    }
  }
  return;
}

#undef DAT_1000b0d8
#undef PTR_DAT_1000a008
#undef PTR_DAT_1000a028
#undef PTR_recovered_10003a1a_1000a0a0

#undef DAT_1000b0d8
#define DAT_1000b0d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b08U)))
#undef PTR_DAT_1000a010
#define PTR_DAT_1000a010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a40U)))
#undef PTR_DAT_1000a030
#define PTR_DAT_1000a030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a60U)))
#undef PTR_recovered_10003a1a_1000a0a0
#define PTR_recovered_10003a1a_1000a0a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1ad0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000856a
 */

void recovered_1000856a(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_1000a010 == '\0') {
    uVar3 = recovered_100030a0();
    uVar2 = DAT_1000b0d8;
    puVar1 = PTR_DAT_1000a030;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_1000a030 = &PTR_recovered_10003a1a_1000a0a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003098();
      recovered_100030ad(PTR_DAT_1000a010);
      return;
    }
  }
  return;
}

#undef DAT_1000b0d8
#undef PTR_DAT_1000a010
#undef PTR_DAT_1000a030
#undef PTR_recovered_10003a1a_1000a0a0
