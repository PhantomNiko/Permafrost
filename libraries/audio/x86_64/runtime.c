/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008150
#define DAT_10008150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000600
 */

void recovered_10000600(void)

{
  unsigned char frame[64] = {0};

  DAT_10008150 = 0;
  recovered_10000611();
  return;
}

#undef DAT_10008150

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
#undef DAT_10008150
#define DAT_10008150 (*(char *)(((uintptr_t)pf_module_state + 0x1b7cU)))
#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  if (DAT_10008150 == '\0') {
    DAT_10008158 = 0;
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
    if (DAT_10008158 == 0) {
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
    DAT_10008150 = '\x01';
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
#undef DAT_10008150
#undef DAT_10008158
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef local_438
#undef local_28

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  for (plVar1 = &DAT_10008158; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
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

#undef DAT_10008158

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  for (plVar2 = &DAT_10008158; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_10008158

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  for (plVar1 = &DAT_10008158; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
  {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_10008158

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  for (plVar2 = &DAT_10008158; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = lVar1 + *plVar2;
  }
  return lVar1;
}

#undef DAT_10008158

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
  puVar2 = &DAT_10008158;
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

#undef DAT_10008158

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


#undef DAT_100067ed
#define DAT_100067ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f17
 */

undefined * recovered_10000f17(void)

{
  unsigned char frame[64] = {0};

  return &DAT_100067ed;
}

#undef DAT_100067ed

#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1a2cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f24
 */

undefined ** recovered_10000f24(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10008000;
}

#undef PTR_DAT_10008000

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


#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
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
    in_XMM0_Qa = in_XMM0_Qa * DAT_100065e0;
  }
  return SUB84(in_XMM0_Qa,0);
}

#undef DAT_100065e0

#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006660
#define DAT_10006660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_10006660
#define _DAT_10006660 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
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
    dVar3 = (double)(_DAT_10006660 ^ (ulong)in_XMM0_Qa);
    if ((double)(_DAT_10006660 ^ (ulong)in_XMM0_Qa) <= in_XMM0_Qa) {
      dVar3 = in_XMM0_Qa;
    }
    iVar1 = 0;
    for (; DAT_100065e8 <= dVar3; dVar3 = dVar3 * DAT_100065e0) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar3 && (dVar3 < DAT_100065e0)); dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    if (in_RDI != (int *)0x0) {
      *in_RDI = iVar1;
    }
    fVar2 = (float)(~-(uint)(in_XMM0_Qa < 0.0) & SUB84(dVar3,0) |
                   ((uint)_DAT_10006660 ^ SUB84(dVar3,0)) & -(uint)(in_XMM0_Qa < 0.0));
  }
  return fVar2;
}

#undef DAT_100065e0
#undef DAT_100065e8
#undef DAT_10006660
#undef _DAT_10006660

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


#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
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
      return DAT_100065e8;
    }
    uVar2 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar2 = uVar1;
    }
    dVar3 = DAT_100065e8;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        dVar3 = dVar3 * left;
      }
      left = left * left;
    }
    if ((int)uVar1 < 0) {
      return DAT_100065e8 / dVar3;
    }
  }
  return dVar3;
}

#undef DAT_100065e8

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


#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
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
                 (ulong)(DAT_100065e8 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_100065e8

#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
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
    if (value <= DAT_100065e8) {
      dVar3 = DAT_100065e8;
    }
    iVar1 = 0x18;
    while (bVar2 = iVar1 != 0, iVar1 = iVar1 + -1, bVar2) {
      dVar3 = (value / dVar3 + dVar3) * DAT_100065e0;
    }
  }
  return dVar3;
}

#undef DAT_100065e0
#undef DAT_100065e8

#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100065f0
#define DAT_100065f0 (*(double *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100065f8
#define DAT_100065f8 (*(double *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10006600
#define DAT_10006600 (*(double *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10006608
#define DAT_10006608 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10006610
#define DAT_10006610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10006618
#define DAT_10006618 (*(double *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_10006610
#define _DAT_10006610 (*(double *)(((uintptr_t)pf_module_state + 0x3cU)))
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
    return DAT_100065f0;
  }
  iVar1 = 0;
  for (; DAT_100065f8 < value; value = value * DAT_100065e0) {
    iVar1 = iVar1 + 1;
  }
  for (; value < DAT_10006600; value = value + value) {
    iVar1 = iVar1 + -1;
  }
  dVar5 = (DAT_10006608 + value) / (value + DAT_100065e8);
  dVar3 = 0.0;
  dVar4 = DAT_100065e8;
  dVar6 = dVar5;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar3 = dVar3 + dVar6 / dVar4;
    dVar4 = dVar4 + DAT_10006618;
    dVar6 = dVar5 * dVar5 * dVar6;
  }
  return dVar3 + dVar3 + (double)iVar1 * _DAT_10006610;
}

#undef DAT_100065e0
#undef DAT_100065e8
#undef DAT_100065f0
#undef DAT_100065f8
#undef DAT_10006600
#undef DAT_10006608
#undef DAT_10006610
#undef DAT_10006618
#undef _DAT_10006610

#undef DAT_10006670
#define DAT_10006670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121d
 */

ulonglong recovered_1000121d(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  return (long)(in_XMM0_Qa + *(double *)(&DAT_10006670 + (ulong)(0.0 <= in_XMM0_Qa) * 8));
}

#undef DAT_10006670

#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006620
#define DAT_10006620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10006680
#define DAT_10006680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef _DAT_10006620
#define _DAT_10006620 (*(double *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_10006680
#define _DAT_10006680 (*(uint128 *)(((uintptr_t)pf_module_state + 0xacU)))
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
  auVar3 = divpd(auVar3,_DAT_10006680);
  return dVar1 * ((dVar2 / _DAT_10006620 + DAT_100065e8 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8));
}

#undef DAT_100065e8
#undef DAT_10006620
#undef DAT_10006680
#undef _DAT_10006620
#undef _DAT_10006680

#undef DAT_10006628
#define DAT_10006628 (*(double *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_10006630
#define DAT_10006630 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_10006638
#define DAT_10006638 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10006640
#define DAT_10006640 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001290
 */

double recovered_10001290(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  for (; DAT_10006628 < in_XMM0_Qa; in_XMM0_Qa = in_XMM0_Qa + DAT_10006640) {
  }
  for (; in_XMM0_Qa < DAT_10006630; in_XMM0_Qa = in_XMM0_Qa + DAT_10006638) {
  }
  return in_XMM0_Qa;
}

#undef DAT_10006628
#undef DAT_10006630
#undef DAT_10006638
#undef DAT_10006640

#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006648
#define DAT_10006648 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10006690
#define DAT_10006690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef _DAT_10006690
#define _DAT_10006690 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbcU)))
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
  auVar2 = divpd(auVar2,_DAT_10006690);
  return (DAT_10006648 * dVar1 + DAT_100065e8 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8);
}

#undef DAT_100065e8
#undef DAT_10006648
#undef DAT_10006690
#undef _DAT_10006690

#undef DAT_10006660
#define DAT_10006660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_10006660
#define _DAT_10006660 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001319
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001319(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10006660 ^ (ulong)value);
  if ((double)(_DAT_10006660 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}

#undef DAT_10006660
#undef _DAT_10006660

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


#undef DAT_10006670
#define DAT_10006670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000145c
 */

uint recovered_1000145c(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  return (uint)(long)(in_XMM0_Qa + *(double *)(&DAT_10006670 + (ulong)(0.0 <= in_XMM0_Qa) * 8));
}

#undef DAT_10006670

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


#undef DAT_100066a0
#define DAT_100066a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccU)))
#undef _DAT_100066a0
#define _DAT_100066a0 (*(uint *)(((uintptr_t)pf_module_state + 0xccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100014a6(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = (float)(_DAT_100066a0 ^ (uint)value);
  if ((float)(_DAT_100066a0 ^ (uint)value) <= value) {
    fVar1 = value;
  }
  return fVar1;
}

#undef DAT_100066a0
#undef _DAT_100066a0

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


#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006650
#define DAT_10006650 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006660
#define DAT_10006660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef _DAT_10006660
#define _DAT_10006660 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
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
    dVar7 = dVar7 * DAT_10006650 + (double)(int)(bVar3 - 0x30);
    bVar4 = true;
  }
  dVar9 = DAT_100065e8;
  if (bVar3 == 0x2e) {
    dVar8 = 0.0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
      if (9 < (byte)(bVar3 - 0x30)) break;
      dVar8 = dVar8 * DAT_10006650 + (double)(int)(bVar3 - 0x30);
      dVar9 = dVar9 * DAT_10006650;
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
      dVar7 = (double)((ulong)dVar7 ^ _DAT_10006660);
    }
    return dVar7;
  }
  if (end == (char **)0x0) {
    return 0.0;
  }
  *end = text;
  return 0.0;
}

#undef DAT_100065e8
#undef DAT_10006650
#undef DAT_10006660
#undef _DAT_10006660

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


#undef DAT_10006650
#define DAT_10006650 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10006660
#define DAT_10006660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_1000681b
#define DAT_1000681b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef UNK_10006668
#define UNK_10006668 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef _DAT_10006660
#define _DAT_10006660 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
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
        dVar12 = (double)((ulong)dVar12 ^ _DAT_10006660);
      }
      recovered_10001d3e((long *)&local_40,&local_48,&local_34,(int)dVar12,10,0);
      if (1 < local_48) {
        *local_40 = '.';
        local_40 = local_40 + 1;
        local_48 = local_48 - 1;
      }
      dVar1 = DAT_10006650;
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
      recovered_10001cf5((long *)&local_40,&local_48,&local_34,&DAT_1000681b);
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

#undef DAT_10006650
#undef DAT_10006660
#undef DAT_1000681b
#undef UNK_10006668
#undef _DAT_10006660
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


#undef str_100067f2
#define str_100067f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf5
 */

void recovered_10001cf5(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_100067f2;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001cdc(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100067f2

#undef str_100067f9
#define str_100067f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_1000680a
#define str_1000680a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x236U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(char (*)[32])(frame + 24))
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

  pcVar2 = str_1000680a;
  if (param_6 != 0) {
    pcVar2 = str_100067f9;
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

#undef str_100067f9
#undef str_1000680a
#undef uStack_50
#undef local_48

#define local_98 (*(undefined8 *)(frame + 80))
#define local_88 (*(undefined8 *)(frame + 96))
#define local_78 (*(undefined8 *)(frame + 112))
#define local_68 (*(undefined8 *)(frame + 128))
#define local_58 (*(undefined8 *)(frame + 144))
#define local_48 (*(undefined8 *)(frame + 160))
#define local_38 (*(undefined8 *)(frame + 176))
#define local_28 (*(undefined8 *)(frame + 192))
#define local_20 (*(undefined1 * *)(frame + 200))
#define local_18 (*(undefined1 * *)(frame + 208))
#define uStack0000000000000008 (*(undefined1 *)(frame + 240))
#define local_d8 (*(undefined1 (*)[24])(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 40))
#define local_b8 (*(undefined8 *)(frame + 48))
#define local_b0 (*(undefined8 *)(frame + 56))
#define local_a8 (*(undefined8 *)(frame + 64))
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

#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48
#undef local_38
#undef local_28
#undef local_20
#undef local_18
#undef uStack0000000000000008
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8

#undef DAT_10008158
#define DAT_10008158 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b84U)))
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
    if (DAT_10008158 == 0) {
      puVar2 = (ulong *)&DAT_10008158;
    }
    else {
      puVar2 = (ulong *)(*param_3 + 8);
    }
    *puVar2 = (ulong)plVar1;
    *param_3 = (ulong)plVar1;
  }
  return;
}

#undef DAT_10008158

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

#undef DAT_10008160
#define DAT_10008160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b8cU)))
#undef DAT_10008170
#define DAT_10008170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9cU)))
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
        if (DAT_10008160 != 0) {
          DAT_10008160 = DAT_10008160 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001f71(1);
        }
        else {
          if (DAT_10008160 - 0x1ffU < 0xfffffffffffffe00) {
            recovered_10001f71(0);
          }
          pcVar1 = &DAT_10008170 + DAT_10008160;
          DAT_10008160 = DAT_10008160 + 1;
          *pcVar1 = cVar2;
        }
      }
    }
  }
  return;
}

#undef DAT_10008160
#undef DAT_10008170

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_10008160
#define DAT_10008160 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b8cU)))
#undef DAT_10008170
#define DAT_10008170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9cU)))
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

  if ((DAT_10008160 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_10008160 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000c32(local_208,&DAT_10008170,DAT_10008160);
      uVar2 = DAT_10008160;
    }
    local_208[uVar2] = 0;
    uVar1 = recovered_10002c8d();
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006840 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_10008160 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_10008160
#undef DAT_10008170
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


#undef DAT_100067f1
#define DAT_100067f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_1000681e
#define DAT_1000681e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24aU)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002008
 */

void recovered_10002008(char *param_1,undefined *param_2)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  undefined *puVar2;
  char *format;

  format = &DAT_1000681e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_100067f1;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10001db3(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10001ec4((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_100067f1
#undef DAT_1000681e
#undef local_148

#undef DAT_10006908
#define DAT_10006908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef str_10006821
#define str_10006821 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef str_10006844
#define str_10006844 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x270U)))
#undef str_1000687d
#define str_1000687d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_100068b2
#define str_100068b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2deU)))
#undef str_100068d8
#define str_100068d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000205d
 */

void recovered_1000205d(void)

{
  unsigned char frame[64] = {0};

  recovered_100020aa(str_10006821);
  recovered_100020aa(str_10006844);
  recovered_100020aa(str_1000687d);
  recovered_100020aa(str_100068b2);
  recovered_100020aa(str_100068d8);
  recovered_100020aa(&DAT_10006908);
  return;
}

#undef DAT_10006908
#undef str_10006821
#undef str_10006844
#undef str_1000687d
#undef str_100068b2
#undef str_100068d8

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


#undef DAT_10006908
#define DAT_10006908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef str_1000690b
#define str_1000690b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020cf
 */

void recovered_100020cf(void)

{
  unsigned char frame[64] = {0};

  recovered_100020aa(str_1000690b);
  recovered_100020aa(&DAT_10006908);
  return;
}

#undef DAT_10006908
#undef str_1000690b

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


#undef DAT_1000681e
#define DAT_1000681e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24aU)))
#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
#undef str_1000699f
#define str_1000699f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
#undef str_100069ac
#define str_100069ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d8U)))
#undef str_100069ba
#define str_100069ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e6U)))
#define local_34 (*(uint *)(frame + 16))
#define local_30 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002167
 */

ulonglong recovered_10002167(void)

{
  unsigned char frame[100] = {0};

  undefined4 uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  long in_RSI;
  char *in_RDI;
  bool bVar8;
  bool bVar9;

  if (in_RDI == (char *)0x0 || in_RSI == 0) {
    DAT_100080c0 = 0x16;
    return 0;
  }
  iVar3 = recovered_10000dc5(in_RDI,str_1000699f);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = recovered_10000dc5(in_RDI,str_100069ac);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      iVar4 = recovered_10000dc5(in_RDI,str_100069ba);
      if (iVar4 != 0) {
        puVar6 = recovered_10000b92(0x340);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_100080c0 = 0xc;
          return 0;
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
        recovered_10001db3((char *)(puVar6 + 1),0xf1,&DAT_1000681e);
        recovered_10000c9b(&local_34,0,0xc);
        uVar5 = recovered_1000240c();
        if (uVar5 == 0) {
          if (*(char *)((long)puVar6 + 0x125) == '\0') {
            DAT_100080c0 = 2;
LAB_100023d6:
            recovered_10000bc7(puVar6);
            return 0;
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
          return (ulonglong)puVar6;
        }
        return (ulonglong)puVar6;
      }
      uVar1 = 3;
    }
  }
  puVar6 = recovered_10000b92(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_100080c0 = 0xc;
    return 0;
  }
  recovered_10000c9b(puVar6,0,0x340);
  *puVar6 = uVar1;
  *(bool *)(puVar6 + 0x49) = iVar3 == 0;
  *(bool *)((long)puVar6 + 0x125) = iVar3 != 0;
  puVar6[0x48] = 0xffffffff;
  recovered_10001db3((char *)(puVar6 + 1),0xf1,&DAT_1000681e);
  return (ulonglong)puVar6;
}

#undef DAT_1000681e
#undef DAT_100080c0
#undef str_1000699f
#undef str_100069ac
#undef str_100069ba
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

#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
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
    DAT_100080c0 = 0xc;
    *(undefined1 *)(in_RDI + 0x129) = 1;
  }
  return '\0';
}

#undef DAT_100080c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ca
 */

void recovered_100024ca(undefined8 param_1,undefined8 param_2,void *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (void *)0x0) {
    recovered_100024f3(param_3);
  }
  recovered_10002167();
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

ulonglong recovered_1000252d(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  long in_RCX;
  ulonglong in_RDX;
  ulonglong uVar2;
  long in_RSI;
  long in_RDI;
  long lVar3;

  uVar2 = 0;
  if ((((in_RDX != 0) && (in_RSI != 0)) && (in_RDI != 0)) && (in_RCX != 0)) {
    if (*(char *)(in_RCX + 0x124) == '\x01') {
      for (uVar2 = 0; uVar2 != in_RDX; uVar2 = uVar2 + 1) {
        for (lVar3 = 0; in_RSI != lVar3; lVar3 = lVar3 + 1) {
          uVar1 = recovered_100025b3();
          if (uVar1 == 0xffffffff) {
            return uVar2;
          }
          *(char *)(in_RDI + lVar3) = (char)uVar1;
        }
        in_RDI = in_RDI + in_RSI;
      }
      uVar2 = in_RDX;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
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

ulonglong recovered_100026a5(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uchar uVar2;
  uint *in_RCX;
  ulonglong in_RDX;
  long in_RSI;
  void *in_RDI;
  ulong uVar3;
  ulong uVar4;

  if (in_RDX == 0) {
    return 0;
  }
  if (in_RSI == 0) {
    return 0;
  }
  if (in_RDI == (void *)0x0) {
    return 0;
  }
  if (in_RCX == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)in_RCX + 0x125) == '\x01') {
    uVar4 = in_RSI * in_RDX;
    if ((*in_RCX & 0xfffffffe) == 2) {
      recovered_10001ec4((long)in_RDI,uVar4);
      *(ulong *)(in_RCX + 0x46) = *(long *)(in_RCX + 0x46) + uVar4;
      goto LAB_100027bd;
    }
    if (*(char *)((long)in_RCX + 0x126) != '\0') {
      *(undefined8 *)(in_RCX + 0x46) = *(undefined8 *)(in_RCX + 0x42);
    }
    uVar2 = recovered_10002444();
    if (uVar2 != '\0') {
      uVar1 = *(ulong *)(in_RCX + 0x42);
      uVar3 = *(ulong *)(in_RCX + 0x46);
      if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
        recovered_10000c9b((void *)(uVar1 + *(long *)(in_RCX + 0x40)),0,uVar3 - uVar1);
        uVar3 = *(ulong *)(in_RCX + 0x46);
      }
      recovered_10000c32((void *)(uVar3 + *(long *)(in_RCX + 0x40)),in_RDI,uVar4);
      uVar4 = uVar4 + *(long *)(in_RCX + 0x46);
      *(ulong *)(in_RCX + 0x46) = uVar4;
      if (*(ulong *)(in_RCX + 0x42) < uVar4) {
        *(ulong *)(in_RCX + 0x42) = uVar4;
      }
      *(undefined2 *)((long)in_RCX + 0x127) = 1;
      goto LAB_100027bd;
    }
  }
  in_RDX = 0;
LAB_100027bd:
  return in_RDX;
}


#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027be
 */

uint recovered_100027be(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  int in_EDX;
  ulong in_RSI;
  int *in_RDI;

  if (in_RDI == (int *)0x0) {
    DAT_100080c0 = 0x16;
    return 0xffffffff;
  }
  if (*in_RDI == 0) {
    if (in_EDX != 0) {
      if (in_EDX == 1) {
        lVar1 = 0x118;
      }
      else {
        if (in_EDX != 2) goto LAB_100027cc;
        lVar1 = 0x108;
      }
      in_RSI = in_RSI + *(long *)((long)in_RDI + lVar1);
    }
    if (-1 < (long)in_RSI) {
      *(ulong *)(in_RDI + 0x46) = in_RSI;
      *(bool *)(in_RDI + 0x4a) = *(ulong *)(in_RDI + 0x42) <= in_RSI;
      in_RDI[0x48] = -1;
      return 0;
    }
  }
LAB_100027cc:
  DAT_100080c0 = 0x16;
  *(undefined1 *)((long)in_RDI + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_100080c0

#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002837
 */

ulonglong recovered_10002837(void)

{
  unsigned char frame[64] = {0};

  long in_RDI;

  if (in_RDI == 0) {
    DAT_100080c0 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(ulonglong *)(in_RDI + 0x118);
}

#undef DAT_100080c0

#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
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
      DAT_100080c0 = 5;
      *(undefined1 *)((long)in_RDI + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((long)in_RDI + 0x127) = 0;
    }
  }
  return uVar2;
}

#undef DAT_100080c0

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


#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002930
 */

undefined8 recovered_10002930(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    DAT_100080c0 = 0x16;
  }
  else {
    uVar1 = recovered_1000295b();
    if (uVar1 != 0) {
      return 0;
    }
    DAT_100080c0 = 5;
  }
  return 0xffffffffffffffff;
}

#undef DAT_100080c0

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

#undef DAT_100080c0
#define DAT_100080c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
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
    DAT_100080c0 = 0x16;
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
  DAT_100080c0 = uVar2;
  return 0xffffffffffffffff;
}

#undef DAT_100080c0
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

#define local_3c (*(uint *)(frame + 16))
#define local_38 (*(uint *)(frame + 20))
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

#undef local_3c
#undef local_38

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


#undef DAT_1000692e
#define DAT_1000692e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35aU)))
#undef str_10006931
#define str_10006931 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35dU)))
#undef str_1000693e
#define str_1000693e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_10006948
#define str_10006948 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_1000695c
#define str_1000695c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1000696a
#define str_1000696a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x396U)))
#undef str_1000697c
#define str_1000697c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a8U)))
#undef str_10006988
#define str_10006988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b4U)))
#undef str_10006999
#define str_10006999 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb4
 */

char * recovered_10002bb4(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_1000692e;
    break;
  case 2:
    pcVar1 = str_10006931;
    break;
  case 5:
    pcVar1 = str_1000693e;
    break;
  case 9:
    pcVar1 = str_10006948;
    break;
  case 0xc:
    pcVar1 = str_1000695c;
    break;
  case 0xd:
    pcVar1 = str_1000696a;
    break;
  default:
    if (param_1 == 0x11) {
      return str_1000697c;
    }
    if (param_1 == 0x16) {
      return str_10006988;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10006999;
  }
  return pcVar1;
}

#undef DAT_1000692e
#undef str_10006931
#undef str_1000693e
#undef str_10006948
#undef str_1000695c
#undef str_1000696a
#undef str_1000697c
#undef str_10006988
#undef str_10006999

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


#undef DAT_10008370
#define DAT_10008370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1d9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c75
 */

void recovered_10002c75(void)

{
  unsigned char frame[64] = {0};

  DAT_10008370 = DAT_10008370 + 1;
  return;
}

#undef DAT_10008370

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
#undef DAT_10006a20
#define DAT_10006a20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44cU)))
#define local_88 (*(undefined1 (*)[8])(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_50 (*(undefined * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d39
 */

double recovered_10002d39(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006a20;
  local_50 = &DAT_10002d8a;
  local_80 = 1;
  recovered_100031fa();
  recovered_10000b7d();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002d8a
#undef DAT_10006a20
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc0
 */

undefined8 recovered_10002dc0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10008378
#define DAT_10008378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1da4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dd0
 */

long recovered_10002dd0(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_10008378;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10008378 = param_1;
  lVar1 = recovered_100030ff(param_1);
  return lVar1;
}

#undef DAT_10008378

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df3
 */

void * recovered_10002df3(ulong size)

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
 * Address: 0x10002e1d
 */

void * recovered_10002e1d(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002df3(size);
  return pvVar1;
}


#undef DAT_10006a30
#define DAT_10006a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45cU)))
#undef LAB_10002e94
#define LAB_10002e94 (*(uint8_t *)(0x10002e94U))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e27
 */

void recovered_10002e27(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006a30;
  local_50 = &LAB_10002e94;
  local_80 = 1;
  recovered_100031fa();
  recovered_10000bc7(data);
  recovered_10003211(&local_88);
  return;
}

#undef DAT_10006a30
#undef LAB_10002e94
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

#undef DAT_10006a40
#define DAT_10006a40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46cU)))
#undef LAB_10002f2d
#define LAB_10002f2d (*(uint8_t *)(0x10002f2dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006a40;
  local_50 = &LAB_10002f2d;
  local_80 = 1;
  recovered_100031fa();
  recovered_10000bc7(data);
  recovered_10003211(&local_88);
  return;
}

#undef DAT_10006a40
#undef LAB_10002f2d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef auStack_40
#undef local_50
#undef local_48

#undef DAT_10006a50
#define DAT_10006a50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47cU)))
#undef LAB_10002fc5
#define LAB_10002fc5 (*(uint8_t *)(0x10002fc5U))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f58
 */

void recovered_10002f58(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006a50;
  local_50 = &LAB_10002fc5;
  local_80 = 1;
  recovered_100031fa();
  recovered_10000bc7(param_1);
  recovered_10003211(&local_88);
  return;
}

#undef DAT_10006a50
#undef LAB_10002fc5
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10006a60
#define DAT_10006a60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48cU)))
#undef LAB_1000305d
#define LAB_1000305d (*(uint8_t *)(0x1000305dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff0
 */

void recovered_10002ff0(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006a60;
  local_50 = &LAB_1000305d;
  local_80 = 1;
  recovered_100031fa();
  recovered_10000bc7(param_1);
  recovered_10003211(&local_88);
  return;
}

#undef DAT_10006a60
#undef LAB_1000305d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003088
 */

undefined8 recovered_10003088(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

uint recovered_10003090(void)

{
  unsigned char frame[64] = {0};

  uint *in_RDI;

  return ~*in_RDI & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000309d
 */

void recovered_1000309d(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a6
 */

void recovered_100030a6(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030ac
 */

long recovered_100030ac(long param_1)

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
 * Address: 0x100030ea
 */

void recovered_100030ea(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000bc7((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030ff
 */

long recovered_100030ff(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_10008378
#define DAT_10008378 (*(void * *)(((uintptr_t)pf_module_state + 0x1da4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003109
 */

void recovered_10003109(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *buffer;

  buffer = DAT_10008378;
  if (DAT_10008378 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_10008378 + 0x10);
    DAT_10008378 = *(void **)((long)DAT_10008378 + 0x10);
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

#undef DAT_10008378

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003155
 */

void recovered_10003155(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
  recovered_10003178();
  return;
}


#undef DAT_10008380
#define DAT_10008380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003178
 */

/* WARNING: Removing unreachable block (ram,0x100031bc) */

void recovered_10003178(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = &DAT_10008380;
  while (puVar1 = (undefined8 *)*puVar1, puVar1 != (undefined8 *)0x0) {
    recovered_10003639();
  }
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}

#undef DAT_10008380

#undef DAT_10008378
#define DAT_10008378 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1da4U)))
#undef DAT_10008380
#define DAT_10008380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d5
 */

void recovered_100031d5(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10008378;
  if (DAT_10008378 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002d39();
  }
  *(undefined1 *)(DAT_10008378 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  recovered_10003178();
  *puVar1 = DAT_10008380;
  DAT_10008380 = puVar1;
  return;
}

#undef DAT_10008378
#undef DAT_10008380

#undef DAT_10008380
#define DAT_10008380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031fa
 */

double recovered_100031fa(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;
  double in_XMM0_Qa;

  *in_RDI = DAT_10008380;
  DAT_10008380 = in_RDI;
  return in_XMM0_Qa;
}

#undef DAT_10008380

#undef DAT_10008380
#define DAT_10008380 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003211
 */

void recovered_10003211(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10008380;
  if (DAT_10008380 == param_1) {
    puVar2 = &DAT_10008380;
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

#undef DAT_10008380

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003242
 */

void recovered_10003242(void)

{
  unsigned char frame[64] = {0};

  recovered_10003178();
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000324b
 */

void recovered_1000324b(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


#undef DAT_10008380
#define DAT_10008380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003254
 */

ulonglong recovered_10003254(void)

{
  unsigned char frame[64] = {0};

  ulonglong extraout_RAX = 0;
  long in_RDI;

  if (DAT_10008380 != (undefined8 *)0x0) {
    DAT_10008380 = (undefined8 *)*DAT_10008380;
  }
  recovered_10003273(in_RDI);
  return extraout_RAX;
}

#undef DAT_10008380

#undef DAT_10008380
#define DAT_10008380 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x1dacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003273
 */

/* WARNING: Removing unreachable block (ram,0x100032b6) */
/* WARNING: Removing unreachable block (ram,0x100032de) */

void recovered_10003273(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 in_RSI;

  while( true ) {
    puVar1 = DAT_10008380;
    if (DAT_10008380 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002d39();
    }
    if (DAT_10008380 == *(undefined8 **)(param_1 + 0x18)) break;
    in_RSI = *(undefined8 *)param_1;
    recovered_10003639();
    DAT_10008380 = (undefined8 *)*puVar1;
  }
  DAT_10008380[2] = param_1;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x20);
  recovered_10002cd0((long)puVar1,in_RSI);
                    /* WARNING: Subroutine does not return */
  recovered_10003254();
}

#undef DAT_10008380

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032f4
 */

void recovered_100032f4(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003254();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032fd
 */

undefined8 recovered_100032fd(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003305
 */

void recovered_10003305(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000330e
 */

long recovered_1000330e(long *param_1,undefined8 param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;

  if (param_3 == 0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + -0x10);
  uVar2 = recovered_1000334e();
  lVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar3 = (long)param_1 + lVar1;
  }
  return lVar3;
}


#undef DAT_10008120
#define DAT_10008120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000334e
 */

uint recovered_1000334e(void)

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
LAB_100033ca:
        return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
    }
    else {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(in_RAX + lVar6);
        cVar2 = *(char *)(lVar3 + lVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) goto LAB_100033ca;
          break;
        }
        lVar6 = lVar6 + 1;
      } while (cVar1 == cVar2);
    }
    in_RDI = (undefined8 *)0x0;
    if ((undefined *)*puVar5 == &DAT_10008120) {
      in_RDI = (undefined8 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_10008120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ce
 */

void recovered_100033ce(void)

{
  unsigned char frame[64] = {0};

  recovered_10000b7d();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033d8
 */

undefined8 recovered_100033d8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

bool recovered_100033e0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033f1
 */

bool recovered_100033f1(uint param_1)

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
 * Address: 0x1000341b
 */

bool recovered_1000341b(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000343b
 */

bool recovered_1000343b(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000345d
 */

bool recovered_1000345d(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003478
 */

byte recovered_10003478(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034ab
 */

double recovered_100034ab(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  return in_XMM0_Qa;
}


#undef DAT_100065e0
#define DAT_100065e0 (*(double *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006608
#define DAT_10006608 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10006648
#define DAT_10006648 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034cd
 */

double recovered_100034cd(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010a0(value);
  if (DAT_100065e0 <= value - dVar1) {
    dVar1 = dVar1 + DAT_100065e8;
  }
  else if (value - dVar1 <= DAT_10006648) {
    dVar1 = dVar1 + DAT_10006608;
  }
  return dVar1;
}

#undef DAT_100065e0
#undef DAT_100065e8
#undef DAT_10006608
#undef DAT_10006648

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003518
 */

long recovered_10003518(byte *param_1,undefined8 *param_2,uint param_3)

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
    goto LAB_1000354e;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = DAT_00000000;
LAB_1000354e:
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
 * Address: 0x1000362f
 */

void recovered_1000362f(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10003518(in_RDI,in_RSI,in_EDX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003639
 */

uchar recovered_10003639(void)

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
      recovered_1000383d();
    }
    bVar6 = pcVar1[1];
    if (bVar6 == 0xff) {
      pcVar8 = (char *)0x0;
    }
    else {
      uVar3 = recovered_10003964();
      pcVar8 = pcVar1 + uVar3 + 2;
    }
    uVar3 = recovered_10003964();
    iVar7 = *(int *)(in_RDI + 8);
    if (0 < iVar7) {
      while (pcVar1 + 3 < pcVar1 + 3 + uVar3) {
        uVar4 = recovered_10003964();
        uVar5 = recovered_10003964();
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
            uVar3 = recovered_100039b8();
            uVar4 = recovered_100039b8();
            if (uVar3 == 0) {
              *(undefined1 *)((long)in_RDX + 1) = 1;
            }
            else if (0 < (long)uVar3) {
              if (((pcVar8 != (char *)0x0 && bVar6 < 0xd) && (~(byte)(0x1c1d >> bVar6) & 1) == 0) &&
                  0 < (int)uVar3) {
                recovered_1000383d();
              }
              uVar2 = recovered_1000334e();
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
 * Address: 0x1000383d
 */

ulonglong recovered_1000383d(void)

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
    puVar2 = (undefined8 *)recovered_10003993();
    lVar4 = lVar1 + 8;
    goto LAB_10003900;
  case 1:
    puVar2 = (undefined8 *)recovered_10003964();
    break;
  case 2:
    puVar2 = (undefined8 *)recovered_10003993();
    goto LAB_100038fc;
  case 3:
    puVar2 = (undefined8 *)recovered_10003993();
    goto LAB_100038ba;
  default:
    goto switchD_10003879_caseD_5;
  case 9:
    puVar2 = (undefined8 *)recovered_100039b8();
    break;
  case 10:
    uVar3 = recovered_10003993();
    puVar2 = (undefined8 *)((long)(short)uVar3 & 0xffffffffffff0000U | uVar3);
LAB_100038fc:
    lVar4 = lVar1 + 2;
LAB_10003900:
    *in_RSI = lVar4;
    break;
  case 0xb:
    uVar3 = recovered_10003993();
    puVar2 = (undefined8 *)((long)(int)uVar3 & 0xffffffff00000000U | uVar3);
LAB_100038ba:
    lVar4 = lVar1 + 4;
    goto LAB_10003900;
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
switchD_10003879_caseD_5:
  return (ulonglong)puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003964
 */

ulonglong recovered_10003964(void)

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
 * Address: 0x10003993
 */

ulonglong recovered_10003993(void)

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
 * Address: 0x100039b8
 */

ulonglong recovered_100039b8(void)

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
 * Address: 0x10003a04
 */

void recovered_10003a04(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a0a
 */

void recovered_10003a0a(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a10
 */

void recovered_10003a10(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

void recovered_10003a20(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


#undef DAT_10006a70
#define DAT_10006a70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49cU)))
#undef LAB_10003b31
#define LAB_10003b31 (*(uint8_t *)(0x10003b31U))
#define local_b0 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined4 *)(frame + 32))
#define local_90 (*(code * *)(frame + 56))
#define local_88 (*(undefined * *)(frame + 64))
#define auStack_b8 (*(undefined1 (*)[8])(frame + 16))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 88))
#define local_58 (*(void * *)(frame + 112))
#define local_48 (*(undefined8 *)(frame + 128))
#define local_40 (*(int *)(frame + 136))
#define local_3c (*(short *)(frame + 140))
#define local_32 (*(undefined2 *)(frame + 150))
#define uStack_50 (*(undefined8 *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a30
 */

undefined8 * recovered_10003a30(long param_1)

{
  unsigned char frame[232] = {0};

  byte bVar1;
  undefined8 *puVar2;

  local_80 = (undefined1 *)((long)(uintptr_t)(frame + 200) + -8);
  local_70 = auStack_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10006a70;
  local_78 = &LAB_10003b31;
  recovered_100031fa();
  if (param_1 != 0) {
    local_32 = 2;
    local_a8 = 1;
    bVar1 = recovered_10003b88();
    if (((bVar1 & local_3c == 2) == 1) && (local_40 != 0)) {
      local_a8 = 2;
      puVar2 = recovered_10002df3(0x28);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      recovered_10003ca0(puVar2,&local_58);
      puVar2[4] = 0;
      goto LAB_10003b02;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_10003b02:
  uStack_50 = 0;
  recovered_10002e27(local_58);
  recovered_10003211(&local_b0);
  return puVar2;
}

#undef DAT_10006a70
#undef LAB_10003b31
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef auStack_b8
#undef local_80
#undef local_78
#undef local_70
#undef local_58
#undef local_48
#undef local_40
#undef local_3c
#undef local_32
#undef uStack_50

#undef DAT_10006a78
#define DAT_10006a78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a4U)))
#undef LAB_10003c54
#define LAB_10003c54 (*(uint8_t *)(0x10003c54U))
#define auStack_b8 (*(undefined1 (*)[8])(frame + 16))
#define uStack_40 (*(undefined8 *)(frame + 136))
#define local_b0 (*(undefined8 *)(frame + 24))
#define local_a8 (*(undefined4 *)(frame + 32))
#define local_90 (*(code * *)(frame + 56))
#define local_88 (*(undefined * *)(frame + 64))
#define local_80 (*(undefined1 * *)(frame + 72))
#define local_78 (*(undefined1 * *)(frame + 80))
#define local_70 (*(undefined1 * *)(frame + 88))
#define local_48 (*(void * *)(frame + 128))
#define local_38 (*(undefined8 *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

uchar recovered_10003b88(void)

{
  unsigned char frame[232] = {0};

  uchar uVar1;
  uint uVar2;

  local_80 = (undefined1 *)((long)(uintptr_t)(frame + 200) + -8);
  local_70 = auStack_b8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10006a78;
  local_78 = &LAB_10003c54;
  local_a8 = 1;
  recovered_100031fa();
  uVar1 = recovered_10004af6();
  if (uVar1 == '\0') {
    uVar1 = '\0';
  }
  else {
    local_a8 = 2;
    uVar2 = recovered_10004cb4();
    uVar1 = (uchar)uVar2;
  }
  uStack_40 = 0;
  recovered_10002e27(local_48);
  recovered_10003211(&local_b0);
  return uVar1;
}

#undef DAT_10006a78
#undef LAB_10003c54
#undef auStack_b8
#undef uStack_40
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ca0
 */

undefined8 * recovered_10003ca0(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  recovered_100046b4(param_1,param_2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
  return param_1;
}


#undef DAT_10006638
#define DAT_10006638 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10006720
#define DAT_10006720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef UNK_10006724
#define UNK_10006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10006738
#define UNK_10006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10006720
#define _DAT_10006720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_10006730
#define _DAT_10006730 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef dRam0000000010006738
#define dRam0000000010006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef uRam0000000010006724
#define uRam0000000010006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#define local_50 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 32))
#define local_38 (*(ulong *)(frame + 40))
#define uStack_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10003cca(uint param_1,uint param_2,long param_3,long param_4)

{
  unsigned char frame[128] = {0};

  int iVar1;
  bool bVar2;
  uchar uVar3;
  uint uVar4;
  long *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  double value;
  uint128 auVar9;

  if ((int)(param_2 | param_1) < 0) {
    return (long *)0x0;
  }
  if (param_3 == 0) {
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
  }
  else {
    recovered_100059fc((ulonglong *)&local_50,param_3);
  }
  uVar3 = recovered_100059b7();
  iVar7 = 0;
  if (uVar3 == '\0') {
    uVar3 = recovered_100059b7();
    if (uVar3 != '\0') {
      iVar7 = 1;
      goto LAB_10003d55;
    }
    uVar3 = recovered_100059b7();
    if (uVar3 != '\0') {
      iVar7 = 2;
      goto LAB_10003d55;
    }
    iVar7 = 1;
    bVar2 = false;
  }
  else {
LAB_10003d55:
    bVar2 = true;
  }
  recovered_10002e27(local_50);
  if (!bVar2) {
    return (long *)0x0;
  }
  if (param_4 == 0) {
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
  }
  else {
    recovered_100059fc((ulonglong *)&local_50,param_4);
  }
  uVar3 = recovered_100059b7();
  local_38 = 0;
  if (uVar3 == '\0') {
    uVar3 = recovered_100059b7();
    if (uVar3 == '\0') {
      uVar3 = recovered_100059b7();
      local_38 = 2;
      if (uVar3 == '\0') {
        bVar2 = false;
        goto LAB_10003def;
      }
    }
    else {
      local_38 = 1;
    }
  }
  bVar2 = true;
LAB_10003def:
  recovered_10002e27(local_50);
  if (bVar2) {
    plVar5 = recovered_10002df3(0x28);
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 3) = 0xac44;
    *(undefined2 *)((long)plVar5 + 0x1c) = 2;
    uVar6 = recovered_10003f68();
    local_50 = (void *)((ulong)local_50 & 0xffffffffffff0000);
    recovered_10003fce();
    if (0 < (int)param_1) {
      iVar1 = (int)local_38;
      for (uVar8 = 0; uVar6 != uVar8; uVar8 = uVar8 + 1) {
        PF_PART4(auVar9, 8) = (int)(uVar8 >> 0x20);
        PF_PART8(auVar9, 0) = uVar8;
        PF_PART4(auVar9, 12) = uRam0000000010006724;
        value = (((PF_PART8(auVar9, 8) - dRam0000000010006738) +
                 (pf_bits_double(CONCAT44(_DAT_10006720,(int)uVar8)) - _DAT_10006730)) *
                (double)(int)param_1) / (double)*(uint *)(plVar5 + 3);
        recovered_100010a0(value);
        if ((iVar7 != 2) && (iVar7 == 1)) {
          recovered_10001241(value * DAT_10006638);
        }
        uVar4 = recovered_10003fdd();
        if ((local_38 & 1) == 0) {
          *(short *)(*plVar5 + uVar8 * 4) = (short)uVar4;
        }
        if (iVar1 - 1U < 2) {
          *(short *)(*plVar5 + 2 + uVar8 * 4) = (short)uVar4;
        }
      }
    }
    plVar5[4] = 0;
    return plVar5;
  }
  return (long *)0x0;
}

#undef DAT_10006638
#undef DAT_10006720
#undef DAT_10006730
#undef UNK_10006724
#undef UNK_10006738
#undef _DAT_10006720
#undef _DAT_10006730
#undef dRam0000000010006738
#undef uRam0000000010006724
#undef local_50
#undef local_40
#undef local_38
#undef uStack_48

#undef DAT_10006750
#define DAT_10006750 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef DAT_100067a8
#define DAT_100067a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d4U)))
#undef _DAT_10006750
#define _DAT_10006750 (*(long double *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef _DAT_100067a8
#define _DAT_100067a8 (*(float *)(((uintptr_t)pf_module_state + 0x1d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong recovered_10003f68(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  uint in_ESI;
  long in_RDI;

  if (in_ESI == 0 || in_RDI < 1) {
    uVar1 = 0;
  }
  else {
    if (((longdouble)in_ESI * (longdouble)in_RDI) / (longdouble)_DAT_100067a8 < _DAT_10006750) {
      uVar1 = recovered_1000121d();
      return uVar1;
    }
    uVar1 = 0x7fffffffffffffff;
  }
  return uVar1;
}

#undef DAT_10006750
#undef DAT_100067a8
#undef _DAT_10006750
#undef _DAT_100067a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fce
 */

double recovered_10003fce(void)

{
  unsigned char frame[64] = {0};

  undefined2 *in_RDX;
  ulong in_RSI;
  long *in_RDI;
  double extraout_XMM0_Qa = 0;

  in_RDI[1] = 0;
  recovered_100062f4(in_RDI,in_RSI,in_RDX);
  return extraout_XMM0_Qa;
}


#undef DAT_10006770
#define DAT_10006770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19cU)))
#undef DAT_10006778
#define DAT_10006778 (*(double *)(((uintptr_t)pf_module_state + 0x1a4U)))
#undef _DAT_10006770
#define _DAT_10006770 (*(double *)(((uintptr_t)pf_module_state + 0x19cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fdd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10003fdd(void)

{
  unsigned char frame[64] = {0};

  short sVar1;
  uint uVar2;
  double in_XMM0_Qa;

  sVar1 = -0x8000;
  if ((DAT_10006778 < in_XMM0_Qa) && (sVar1 = 0x7fff, in_XMM0_Qa < _DAT_10006770)) {
    uVar2 = recovered_1000145c();
    sVar1 = (short)uVar2;
  }
  return (int)sVar1;
}

#undef DAT_10006770
#undef DAT_10006778
#undef _DAT_10006770

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004009
 */

undefined8 recovered_10004009(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined2 uVar1;
  uchar uVar2;

  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined2 *)((long)param_2 + 0x14) = 0;
  if ((param_1 == (undefined8 *)0x0) || (uVar2 = recovered_10004068(), uVar2 != '\0')) {
    return 0;
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 3);
  uVar1 = *(undefined2 *)((long)param_1 + 0x1c);
  *(undefined2 *)((long)param_2 + 0x14) = uVar1;
  return CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004068
 */

uchar recovered_10004068(void)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long in_RDI;

  bVar1 = true;
  if ((*(long *)(in_RDI + 8) != 0) && (*(int *)(in_RDI + 0x18) != 0)) {
    bVar1 = *(short *)(in_RDI + 0x1c) == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004085
 */

ulong recovered_10004085(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  uVar1 = recovered_100040ac(param_2,param_1);
  return uVar1;
}


#undef DAT_10006a80
#define DAT_10006a80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4acU)))
#undef LAB_100041cd
#define LAB_100041cd (*(uint8_t *)(0x100041cdU))
#define local_80 (*(undefined1 * *)(frame + 104))
#define local_78 (*(undefined1 * *)(frame + 112))
#define uStack_48 (*(ulonglong *)(frame + 160))
#define local_70 (*(undefined1 * *)(frame + 120))
#define local_58 (*(long *)(frame + 144))
#define local_50 (*(void * *)(frame + 152))
#define local_40 (*(undefined8 *)(frame + 168))
#define local_38 (*(undefined8 *)(frame + 176))
#define local_d8 (*(undefined8 (*)[2])(frame + 16))
#define local_c8 (*(long *)(frame + 32))
#define local_c0 (*(undefined1 *)(frame + 40))
#define local_b0 (*(undefined8 *)(frame + 56))
#define local_a8 (*(undefined4 *)(frame + 64))
#define local_90 (*(code * *)(frame + 88))
#define local_88 (*(undefined * *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040ac
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong recovered_100040ac(long param_1,undefined8 param_2)

{
  unsigned char frame[264] = {0};

  uchar uVar1;
  ulong uVar2;

  local_80 = (undefined1 *)((long)(uintptr_t)(frame + 232) + -8);
  local_70 = (undefined1 *)local_d8;
  local_90 = recovered_10002dc0;
  local_88 = &DAT_10006a80;
  local_78 = &LAB_100041cd;
  recovered_100031fa();
  if (param_1 == 0) {
    uVar2 = 0;
    goto LAB_100041ad;
  }
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_a8 = 1;
  local_58 = param_1;
  uVar1 = recovered_10005c29();
  if (uVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_a8 = 2;
    recovered_10006170(local_d8,local_58,4);
    local_38 = &local_c8;
    if (local_c8 == 0) {
LAB_10004194:
      uVar2 = 0;
    }
    else {
      local_a8 = 3;
      recovered_10006298(local_38,(long)local_50,uStack_48);
      if (local_c8 == 0) goto LAB_10004194;
      uVar2 = CONCAT71((int7)((ulong)param_2 >> 8),local_c0);
    }
    recovered_10005414(local_38);
  }
  uStack_48 = 0;
  recovered_10002e27(local_50);
LAB_100041ad:
  recovered_10003211(&local_b0);
  return uVar2 & 0xffffffff;
}

#undef DAT_10006a80
#undef LAB_100041cd
#undef local_80
#undef local_78
#undef uStack_48
#undef local_70
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b0
#undef local_a8
#undef local_90
#undef local_88

#undef DAT_10006720
#define DAT_10006720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10006780
#define DAT_10006780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acU)))
#undef UNK_10006724
#define UNK_10006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10006738
#define UNK_10006738 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10006780
#define _DAT_10006780 (*(double *)(((uintptr_t)pf_module_state + 0x1acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000423c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000423c(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 extraout_var = 0;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;

  if (param_3 < 0 || (param_2 == 0 || param_1 == (long *)0x0)) {
    return 0;
  }
  if ((((*(short *)((long)param_1 + 0x1c) == 2) && (*(short *)(param_2 + 0x1c) == 2)) &&
      ((int)param_1[3] != 0)) && (*(int *)(param_2 + 0x18) != 0)) {
    uVar5 = *(ulong *)(param_2 + 8);
    uVar2 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
    if (1 < uVar5 && 1 < (ulong)param_1[1]) {
      uVar7 = (ulong)param_1[1] >> 1;
      uVar3 = recovered_10003f68();
      uVar8 = uVar7 - uVar3;
      uVar4 = uVar3;
      if (uVar3 <= uVar7 && uVar8 != 0) {
        dVar10 = recovered_100010c9((double)(uVar5 >> 1) /
                                    ((double)*(uint *)(param_2 + 0x18) /
                                    (double)*(uint *)(param_1 + 3)));
        uVar4 = pf_double_bits(dVar10);
        uVar5 = (long)(dVar10 - _DAT_10006780) & (long)uVar4 >> 0x3f | uVar4;
        if (uVar8 <= uVar5) {
          uVar5 = uVar8;
        }
        lVar6 = uVar3 << 2;
        for (uVar7 = 0; uVar7 < uVar5; uVar7 = uVar7 + 1) {
          for (lVar9 = 0; lVar9 != 2; lVar9 = lVar9 + 1) {
            recovered_100043d0();
            uVar1 = recovered_10003fdd();
            uVar4 = CONCAT44(extraout_var,uVar1);
            *(short *)(*param_1 + lVar6 + lVar9 * 2) = (short)uVar1;
          }
          lVar6 = lVar6 + 4;
        }
        param_1[4] = 0;
      }
      uVar2 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_10006720
#undef DAT_10006730
#undef DAT_10006780
#undef UNK_10006724
#undef UNK_10006738
#undef _DAT_10006780

#undef DAT_10006720
#define DAT_10006720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10006780
#define DAT_10006780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acU)))
#undef UNK_10006724
#define UNK_10006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10006738
#define UNK_10006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10006720
#define _DAT_10006720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_10006730
#define _DAT_10006730 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef _DAT_10006780
#define _DAT_10006780 (*(double *)(((uintptr_t)pf_module_state + 0x1acU)))
#undef dRam0000000010006738
#define dRam0000000010006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef uRam0000000010006724
#define uRam0000000010006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100043d0(void)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  ushort in_SI;
  ulong uVar3;
  long *in_RDI;
  double in_XMM0_Qa;
  double dVar4;
  uint128 auVar5;
  uint128 auVar6;

  uVar3 = (ulong)*(ushort *)((long)in_RDI + 0x1c);
  if ((((uVar3 == 0) || (*(ushort *)((long)in_RDI + 0x1c) <= in_SI)) || (in_XMM0_Qa < 0.0)) ||
     (((uVar2 = in_RDI[1], uVar2 == 0 || (uVar1 = uVar2 / uVar3, uVar2 < uVar3)) ||
      (PF_PART4(auVar6, 8) = (int)(uVar1 >> 0x20), PF_PART8(auVar6, 0) = uVar1,
      PF_PART4(auVar6, 12) = uRam0000000010006724,
      (PF_PART8(auVar6, 8) - dRam0000000010006738) +
      (pf_bits_double(CONCAT44(_DAT_10006720,(int)uVar1)) - _DAT_10006730) <= in_XMM0_Qa)))) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = recovered_100010a0(in_XMM0_Qa);
    uVar2 = (long)(dVar4 - _DAT_10006780) & (long)dVar4 >> 0x3f | (long)dVar4;
    uVar3 = uVar1 - 1;
    if (uVar2 + 1 <= uVar1 - 1) {
      uVar3 = uVar2 + 1;
    }
    PF_PART4(auVar5, 8) = (int)(uVar2 >> 0x20);
    PF_PART8(auVar5, 0) = uVar2;
    PF_PART4(auVar5, 12) = uRam0000000010006724;
    dVar4 = (double)(int)*(short *)((ulong)((uint)in_SI * 2) +
                                   *in_RDI + uVar2 * *(ushort *)((long)in_RDI + 0x1c) * 2);
    dVar4 = ((double)(int)*(short *)((ulong)((uint)in_SI * 2) +
                                    *in_RDI + uVar3 * *(ushort *)((long)in_RDI + 0x1c) * 2) - dVar4)
            * (in_XMM0_Qa -
              ((PF_PART8(auVar5, 8) - dRam0000000010006738) +
              (pf_bits_double(CONCAT44(_DAT_10006720,(int)uVar2)) - _DAT_10006730))) + dVar4;
  }
  return dVar4;
}

#undef DAT_10006720
#undef DAT_10006730
#undef DAT_10006780
#undef UNK_10006724
#undef UNK_10006738
#undef _DAT_10006720
#undef _DAT_10006730
#undef _DAT_10006780
#undef dRam0000000010006738
#undef uRam0000000010006724

#undef DAT_10006a8c
#define DAT_10006a8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b8U)))
#undef LAB_10004654
#define LAB_10004654 (*(uint8_t *)(0x10004654U))
#define local_40 (*(undefined8 *)(frame + 120))
#define local_38 (*(undefined8 *)(frame + 128))
#define uStack_48 (*(undefined8 *)(frame + 112))
#define local_a8 (*(undefined8 *)(frame + 16))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_88 (*(code * *)(frame + 48))
#define local_80 (*(undefined * *)(frame + 56))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_50 (*(void * *)(frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044fa
 */

ulong recovered_100044fa(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[216] = {0};

  long *plVar1;
  ulong uVar2;
  ulonglong uVar3;
  ulong uVar4;

  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 184) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_88 = recovered_10002dc0;
  local_80 = &DAT_10006a8c;
  local_70 = &LAB_10004654;
  recovered_100031fa();
  uVar4 = 0;
  if ((((long)param_2 <= (long)param_3) && (param_1 != (long *)0x0)) &&
     (-1 < (long)(param_3 | param_2))) {
    if (((ulong)*(ushort *)((long)param_1 + 0x1c) == 0) || ((int)param_1[3] == 0)) {
      uVar4 = 0;
    }
    else {
      uVar2 = (ulong)param_1[1] / (ulong)*(ushort *)((long)param_1 + 0x1c);
      local_a0 = 0xffffffff;
      uVar3 = recovered_10003f68();
      local_a0 = 0xffffffff;
      uVar4 = recovered_10003f68();
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      local_50 = (void *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      local_a0 = 1;
      local_38 = param_1;
      recovered_1000469c((long *)&local_50,
                         (undefined2 *)(*param_1 + uVar3 * *(ushort *)((long)param_1 + 0x1c) * 2),
                         (undefined2 *)(*param_1 + uVar4 * *(ushort *)((long)param_1 + 0x1c) * 2));
      plVar1 = local_38;
      recovered_100046b4(local_38,&local_50);
      plVar1[4] = 0;
      uStack_48 = 0;
      recovered_10002e27(local_50);
      uVar4 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  recovered_10003211(&local_a8);
  return uVar4 & 0xffffffff;
}

#undef DAT_10006a8c
#undef LAB_10004654
#undef local_40
#undef local_38
#undef uStack_48
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000469c
 */

void recovered_1000469c(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10006356(param_1,*param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b4
 */

undefined8 * recovered_100046b4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002e27((void *)*param_1);
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


#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#define local_48 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 24))
#define local_28 (*(double *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f6
 */

undefined8 recovered_100046f6(double param_1,long param_2)

{
  unsigned char frame[120] = {0};

  int extraout_EAX = 0;
  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    local_28 = param_1;
    recovered_100034ab();
    uVar2 = 0;
    if ((0.0 < local_28) && (extraout_EAX != 0)) {
      uVar2 = 1;
      if (((local_28 != DAT_100065e8) || (NAN(local_28) || NAN(DAT_100065e8))) &&
         ((uVar1 = (ulong)*(ushort *)(param_2 + 0x1c), uVar1 != 0 &&
          (uVar1 <= *(ulong *)(param_2 + 8))))) {
        recovered_10004796(local_28,(long *)&local_48,param_2,*(ulong *)(param_2 + 8) / uVar1);
        recovered_10003ca0((undefined8 *)param_2,&local_48);
        local_40 = 0;
        recovered_10002e27(local_48);
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
    }
  }
  return uVar2;
}

#undef DAT_100065e8
#undef local_48
#undef local_40
#undef local_28

#undef DAT_10006720
#define DAT_10006720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10006a94
#define DAT_10006a94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c0U)))
#undef LAB_1000495c
#define LAB_1000495c (*(uint8_t *)(0x1000495cU))
#undef UNK_10006724
#define UNK_10006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10006738
#define UNK_10006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10006720
#define _DAT_10006720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_10006730
#define _DAT_10006730 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef dRam0000000010006738
#define dRam0000000010006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef uRam0000000010006724
#define uRam0000000010006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#define local_e0 (*(undefined8 *)(frame + 24))
#define local_d8 (*(undefined4 *)(frame + 32))
#define local_c0 (*(code * *)(frame + 56))
#define local_b8 (*(undefined * *)(frame + 64))
#define local_b0 (*(undefined1 * *)(frame + 72))
#define local_a8 (*(undefined1 * *)(frame + 80))
#define local_a0 (*(undefined1 * *)(frame + 88))
#define local_88 (*(double *)(frame + 112))
#define local_78 (*(ulong *)(frame + 128))
#define local_70 (*(long *)(frame + 136))
#define local_68 (*(long *)(frame + 144))
#define local_60 (*(long * *)(frame + 152))
#define local_58 (*(long *)(frame + 160))
#define auStack_e8 (*(undefined1 (*)[8])(frame + 16))
#define local_50 (*(double *)(frame + 168))
#define local_42 (*(undefined2 *)(frame + 182))
#define local_40 (*(long *)(frame + 184))
#define local_38 (*(long * *)(frame + 192))
#define dStack_80 (*(double *)(frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004796
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10004796(double param_1,long *param_2,long param_3,long param_4)

{
  unsigned char frame[280] = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint128 auVar4;

  local_b0 = (undefined1 *)((long)(uintptr_t)(frame + 248) + -8);
  local_a0 = auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 0x18);
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(param_3 + 0x1c);
  local_42 = 0;
  local_c0 = recovered_10002dc0;
  local_b8 = &DAT_10006a94;
  local_a8 = &LAB_1000495c;
  local_d8 = 1;
  local_68 = param_4;
  local_60 = param_2;
  local_50 = param_1;
  local_40 = param_3;
  local_38 = param_2;
  recovered_100031fa();
  recovered_10003fce();
  if ((((0.0 < local_50) && (*(short *)(local_40 + 0x1c) != 0)) && (*(int *)(local_40 + 0x18) != 0))
     && (*(long *)(local_40 + 8) != 0)) {
    local_58 = 0;
    lVar2 = 0;
    while (lVar2 != local_68) {
      PF_PART4(auVar4, 8) = (int)((ulong)lVar2 >> 0x20);
      PF_PART8(auVar4, 0) = lVar2;
      PF_PART4(auVar4, 12) = uRam0000000010006724;
      dStack_80 = PF_PART8(auVar4, 8) - dRam0000000010006738;
      local_88 = (dStack_80 + (pf_bits_double(CONCAT44(_DAT_10006720,(int)lVar2)) - _DAT_10006730)) *
                 local_50;
      uVar3 = 0;
      local_70 = lVar2;
      while (uVar3 < *(ushort *)((long)local_38 + 0x1c)) {
        local_d8 = 2;
        local_78 = uVar3;
        recovered_100043d0();
        local_d8 = 3;
        uVar1 = recovered_10003fdd();
        *(short *)((ulong)*(ushort *)((long)local_38 + 0x1c) * local_58 + *local_38 + local_78 * 2)
             = (short)uVar1;
        uVar3 = local_78 + 1;
      }
      local_58 = local_58 + 2;
      lVar2 = local_70 + 1;
    }
  }
  recovered_10003211(&local_e0);
  return local_60;
}

#undef DAT_10006720
#undef DAT_10006730
#undef DAT_10006a94
#undef LAB_1000495c
#undef UNK_10006724
#undef UNK_10006738
#undef _DAT_10006720
#undef _DAT_10006730
#undef dRam0000000010006738
#undef uRam0000000010006724
#undef local_e0
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_88
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef auStack_e8
#undef local_50
#undef local_42
#undef local_40
#undef local_38
#undef dStack_80

#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006720
#define DAT_10006720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10006730
#define DAT_10006730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef UNK_10006724
#define UNK_10006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10006738
#define UNK_10006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10006720
#define _DAT_10006720 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_10006730
#define _DAT_10006730 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef dRam0000000010006738
#define dRam0000000010006738 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef uRam0000000010006724
#define uRam0000000010006724 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#define local_48 (*(void * *)(frame + 16))
#define local_40 (*(undefined8 *)(frame + 24))
#define local_28 (*(double *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100049b0(double param_1,long param_2)

{
  unsigned char frame[120] = {0};

  int extraout_EAX = 0;
  ulong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint128 auVar4;

  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    local_28 = param_1;
    recovered_100034ab();
    uVar3 = 0;
    if ((0.0 < local_28) && (extraout_EAX != 0)) {
      uVar3 = 1;
      if (((local_28 != DAT_100065e8) || (NAN(local_28) || NAN(DAT_100065e8))) &&
         ((uVar1 = (ulong)*(ushort *)(param_2 + 0x1c), uVar1 != 0 &&
          (uVar1 <= *(ulong *)(param_2 + 8))))) {
        uVar1 = *(ulong *)(param_2 + 8) / uVar1;
        PF_PART4(auVar4, 8) = (int)(uVar1 >> 0x20);
        PF_PART8(auVar4, 0) = uVar1;
        PF_PART4(auVar4, 12) = uRam0000000010006724;
        uVar2 = 0;
        if (0.0 < ((PF_PART8(auVar4, 8) - dRam0000000010006738) +
                  (pf_bits_double(CONCAT44(_DAT_10006720,(int)uVar1)) - _DAT_10006730)) / local_28) {
          uVar2 = recovered_1000121d();
        }
        recovered_10004796(local_28,(long *)&local_48,param_2,uVar2);
        recovered_10003ca0((undefined8 *)param_2,&local_48);
        local_40 = 0;
        recovered_10002e27(local_48);
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
    }
  }
  return uVar3;
}

#undef DAT_100065e8
#undef DAT_10006720
#undef DAT_10006730
#undef UNK_10006724
#undef UNK_10006738
#undef _DAT_10006720
#undef _DAT_10006730
#undef dRam0000000010006738
#undef uRam0000000010006724
#undef local_48
#undef local_40
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a9d
 */

undefined8 recovered_10004a9d(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa5
 */

undefined8 recovered_10004aa5(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aad
 */

undefined8 recovered_10004aad(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab5
 */

void recovered_10004ab5(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  param_1[4] = 0;
  recovered_100062e2(param_1);
  recovered_10002e27(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004adc
 */

void recovered_10004adc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ae2
 */

void recovered_10004ae2(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e27(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aec
 */

void recovered_10004aec(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002e27(param_1);
  return;
}


#undef DAT_10006aa0
#define DAT_10006aa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef LAB_10004c56
#define LAB_10004c56 (*(uint8_t *)(0x10004c56U))
#define local_c8 (*(undefined8 (*)[2])(frame + 16))
#define local_b8 (*(long *)(frame + 32))
#define local_b0 (*(uchar *)(frame + 40))
#define local_a0 (*(undefined8 *)(frame + 56))
#define local_98 (*(undefined4 *)(frame + 64))
#define local_80 (*(code * *)(frame + 88))
#define local_78 (*(undefined * *)(frame + 96))
#define local_70 (*(undefined1 * *)(frame + 104))
#define local_68 (*(undefined1 * *)(frame + 112))
#define local_60 (*(undefined1 * *)(frame + 120))
#define local_48 (*(ulonglong * *)(frame + 144))
#define local_40 (*(ulong *)(frame + 152))
#define local_38 (*(undefined8 *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004af6
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uchar recovered_10004af6(void)

{
  unsigned char frame[248] = {0};

  ulonglong uVar1;
  uchar uVar2;
  ulonglong *in_RSI;
  long in_RDI;

  local_70 = (undefined1 *)((long)(uintptr_t)(frame + 216) + -8);
  local_60 = (undefined1 *)local_c8;
  local_80 = recovered_10002dc0;
  local_78 = &DAT_10006aa0;
  local_68 = &LAB_10004c56;
  recovered_100031fa();
  if (in_RSI == (ulonglong *)0x0 || in_RDI == 0) {
    uVar2 = '\0';
    goto LAB_10004c36;
  }
  local_98 = 0xffffffff;
  recovered_1000530a(local_c8);
  local_38 = &local_b8;
  if (local_b8 == 0) {
LAB_10004c2b:
    uVar2 = '\0';
  }
  else {
    local_98 = 1;
    local_48 = in_RSI;
    recovered_100055e8(local_38);
    local_98 = 2;
    uVar1 = recovered_10005620();
    if ((long)uVar1 < 1) goto LAB_10004c2b;
    local_98 = 3;
    local_40 = uVar1;
    recovered_100055e8(local_38);
    local_98 = 4;
    recovered_100052b4(local_48,local_40);
    local_98 = 5;
    recovered_100056b6(local_38,*local_48,local_40);
    if (local_b8 == 0) goto LAB_10004c2b;
    uVar2 = local_b0;
  }
  recovered_10005414(local_38);
LAB_10004c36:
  recovered_10003211(&local_a0);
  return uVar2;
}

#undef DAT_10006aa0
#undef LAB_10004c56
#undef local_c8
#undef local_b8
#undef local_b0
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

#undef DAT_100069ec
#define DAT_100069ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_100069f1
#define DAT_100069f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_100069f6
#define DAT_100069f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_100069fb
#define DAT_100069fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x427U)))
#undef DAT_10006ab0
#define DAT_10006ab0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef LAB_10005235
#define LAB_10005235 (*(uint8_t *)(0x10005235U))
#define local_70 (*(undefined8 *)(frame + 232))
#define local_68 (*(void * *)(frame + 240))
#define local_60 (*(ushort * *)(frame + 248))
#define local_58 (*(ushort * *)(frame + 256))
#define local_50 (*(ulong *)(frame + 264))
#define local_48 (*(ushort * *)(frame + 272))
#define local_40 (*(double *)(frame + 280))
#define local_32 (*(undefined2 *)(frame + 294))
#define auStack_148 (*(undefined1 (*)[8])(frame + 16))
#define uStack_138 (*(undefined8 *)(frame + 32))
#define local_140 (*(void * *)(frame + 24))
#define local_130 (*(undefined8 *)(frame + 40))
#define local_128 (*(int *)(frame + 48))
#define local_124 (*(short *)(frame + 52))
#define local_120 (*(ulong *)(frame + 56))
#define local_118 (*(ulong *)(frame + 64))
#define local_110 (*(undefined8 * *)(frame + 72))
#define local_108 (*(void * *)(frame + 80))
#define local_100 (*(double *)(frame + 88))
#define local_f8 (*(undefined8 *)(frame + 96))
#define local_f0 (*(undefined4 *)(frame + 104))
#define local_d8 (*(code * *)(frame + 128))
#define local_d0 (*(undefined * *)(frame + 136))
#define local_c8 (*(undefined1 * *)(frame + 144))
#define local_c0 (*(undefined1 * *)(frame + 152))
#define local_b8 (*(undefined1 * *)(frame + 160))
#define local_a0 (*(ulong *)(frame + 184))
#define local_98 (*(int *)(frame + 192))
#define local_94 (*(uint *)(frame + 196))
#define local_90 (*(double *)(frame + 200))
#define local_88 (*(ulong *)(frame + 208))
#define local_80 (*(ulong *)(frame + 216))
#define local_78 (*(ulong *)(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb4
 */

uint recovered_10004cb4(void)

{
  unsigned char frame[376] = {0};

  double dVar1;
  ushort uVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  ushort *in_RCX;
  void *pvVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 *in_RDX;
  double in_RSI;
  void *in_RDI;
  void *left;
  long lVar10;
  double dVar11;

  local_c8 = (undefined1 *)((long)(uintptr_t)(frame + 344) + -8);
  local_b8 = auStack_148;
  local_d8 = recovered_10002dc0;
  local_d0 = &DAT_10006ab0;
  local_c0 = &LAB_10005235;
  recovered_100031fa();
  uVar5 = 0;
  if ((((ulong)in_RSI < 0xc) || (in_RDI == (void *)0x0)) || (in_RDX == (undefined8 *)0x0))
  goto LAB_10004d68;
  local_f0 = 0xffffffff;
  iVar4 = recovered_10000ce0(in_RDI,&DAT_100069ec,4);
  if (iVar4 == 0) {
    local_f0 = 0xffffffff;
    iVar4 = recovered_10000ce0((void *)((long)in_RDI + 8),&DAT_100069f1,4);
    uVar5 = 0;
    if (iVar4 != 0) goto LAB_10004d68;
    local_50 = 0;
    local_32 = 0;
    local_60 = (ushort *)0x0;
    local_48 = (ushort *)0x0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    lVar10 = 0xc;
    local_110 = in_RDX;
    local_68 = in_RDI;
    local_58 = in_RCX;
    local_40 = in_RSI;
    while( true ) {
      pvVar6 = local_68;
      dVar11 = (double)(lVar10 + 8);
      if ((ulong)local_40 < (ulong)dVar11) break;
      uVar5 = *(uint *)((long)local_68 + lVar10 + 4);
      dVar1 = (double)((long)dVar11 + (long)(ulong)uVar5);
      if ((ulong)local_40 < (ulong)dVar1) goto LAB_10004d3c;
      left = (void *)(lVar10 + (long)local_68);
      local_f0 = 0xffffffff;
      local_70 = dVar1;
      iVar4 = recovered_10000ce0(left,&DAT_100069f6,4);
      if (iVar4 == 0) {
        if (uVar5 < 0x10) goto LAB_10004d3c;
        local_32 = *(undefined2 *)((long)local_68 + (long)dVar11);
        local_88 = (ulong)*(ushort *)((long)local_68 + lVar10 + 10);
        local_50 = (ulong)*(uint *)((long)local_68 + lVar10 + 0xc);
        uVar2 = *(ushort *)((long)local_68 + lVar10 + 0x16);
        pvVar6 = local_68;
        uVar3 = recovered_100056ff();
        if (uVar3 == '\0') goto LAB_10004d3c;
        local_80 = (ulong)uVar2;
        uVar3 = recovered_10005740();
        local_60 = (ushort *)CONCAT71((int7)((ulong)pvVar6 >> 8),1);
        if (uVar3 == '\0') goto LAB_10004d3c;
      }
      else {
        local_f0 = 0xffffffff;
        iVar4 = recovered_10000ce0(left,&DAT_100069fb,4);
        if (iVar4 == 0 && local_78 == 0) {
          local_78 = (long)dVar11 + (long)pvVar6;
          local_48 = (ushort *)(ulong)uVar5;
        }
      }
      lVar10 = (long)local_70 + (ulong)(uVar5 & 1);
    }
    uVar5 = 0;
    if ((((((ulong)local_60 & 1) == 0) || (local_78 == 0)) ||
        ((local_48 == (ushort *)0x0 || (((short)local_88 == 0 || ((int)local_50 == 0)))))) ||
       (uVar5 = 0, (ushort)local_80 < 8)) goto LAB_10004d68;
    local_70 = pf_double_bits((double)(CONCAT44(PF_PART4(local_70, 4),(uint)local_80) & 0xffffffff0000ffff));
    local_68 = (void *)(ulong)(((uint)local_80 & 0xffff) >> 3);
    local_90 = (double)(local_88 & 0xffff);
    puVar7 = (ushort *)((long)local_90 * (long)local_68);
    if ((puVar7 == (ushort *)0x0) || (local_48 < puVar7)) goto LAB_10004d68;
    uVar5 = (uint)local_88;
    if (*local_58 != 0) {
      uVar5 = (uint)*local_58;
    }
    if ((short)uVar5 != 0) {
      local_120 = (ulong)local_48 / (ulong)puVar7;
      local_140 = (void *)0x0;
      uStack_138 = 0;
      local_130 = 0;
      local_60 = (ushort *)(ulong)(uVar5 & 0xffff);
      local_f0 = 1;
      local_128 = (int)local_50;
      local_124 = (short)uVar5;
      local_94 = uVar5;
      local_58 = puVar7;
      recovered_1000576a((ulonglong *)&local_140,local_120 * (long)local_60);
      local_80 = 0;
      local_108 = (void *)0x0;
      if (1 < (ushort)local_88) {
        local_108 = local_68;
      }
      local_100 = (double)PF_PART4(local_90, 0);
      local_98 = (int)local_88 + -1;
      local_118 = (ulong)(uint)((int)local_60 * 2);
      local_a0 = local_78;
      uVar8 = 0;
      puVar7 = local_58;
      while (uVar8 < local_120) {
        local_40 = (double)(uVar8 * (long)puVar7 + local_78);
        local_50 = uVar8;
        if ((short)local_94 == 2) {
          local_f0 = 4;
          local_48 = (ushort *)(uintptr_t)pf_double_bits((double)recovered_100057af());
          local_f0 = 5;
          local_40 = recovered_100057af();
          local_f0 = 6;
          uVar5 = recovered_10005904();
          *(short *)((long)local_140 + local_50 * 4) = (short)uVar5;
          local_f0 = 7;
          uVar5 = recovered_10005904();
          *(short *)((long)local_140 + local_50 * 4 + 2) = (short)uVar5;
LAB_100051ec:
          puVar7 = local_58;
        }
        else {
          if ((int)local_60 == 1) {
            puVar7 = (ushort *)0x0;
            dVar11 = local_90;
            uVar8 = local_a0;
            while (dVar11 != 0.0) {
              local_f0 = 3;
              local_88 = uVar8;
              local_48 = puVar7;
              local_40 = (double)((long)dVar11 - 1);
              dVar11 = recovered_100057af();
              puVar7 = (ushort *)(uintptr_t)pf_double_bits((pf_bits_double((uintptr_t)local_48) + dVar11));
              uVar8 = local_88 + (long)local_68;
              dVar11 = local_40;
            }
            local_f0 = 2;
            uVar5 = recovered_10005904();
            *(short *)((long)local_140 + local_50 * 2) = (short)uVar5;
            goto LAB_100051ec;
          }
          puVar9 = (ushort *)0x0;
          while (local_60 != puVar9) {
            local_f0 = 8;
            local_48 = puVar9;
            recovered_100057af();
            local_f0 = 9;
            uVar5 = recovered_10005904();
            *(short *)((long)local_140 + (long)local_48 * 2 + local_80) = (short)uVar5;
            puVar7 = local_58;
            puVar9 = (ushort *)((long)local_48 + 1);
          }
        }
        local_a0 = local_a0 + (long)puVar7;
        local_80 = local_80 + local_118;
        uVar8 = local_50 + 1;
      }
      recovered_10003ca0(local_110,&local_140);
      uStack_138 = 0;
      recovered_10002e27(local_140);
      uVar5 = 1;
      goto LAB_10004d68;
    }
  }
LAB_10004d3c:
  uVar5 = 0;
LAB_10004d68:
  recovered_10003211(&local_f8);
  return uVar5;
}

#undef DAT_100069ec
#undef DAT_100069f1
#undef DAT_100069f6
#undef DAT_100069fb
#undef DAT_10006ab0
#undef LAB_10005235
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_32
#undef auStack_148
#undef uStack_138
#undef local_140
#undef local_130
#undef local_128
#undef local_124
#undef local_120
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_94
#undef local_90
#undef local_88
#undef local_80
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b4
 */

void recovered_100052b4(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < param_1[1]) {
    param_1[1] = param_2;
  }
  else if (param_1[1] < param_2) {
    recovered_10005650(param_1,param_2);
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
 * Address: 0x100052fc
 */

void recovered_100052fc(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005414((long *)(param_1 + 0x10));
  return;
}


#undef DAT_10006ac8
#define DAT_10006ac8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef LAB_100053b3
#define LAB_100053b3 (*(uint8_t *)(0x100053b3U))
#undef PTR_recovered_100052fc_100070d0
#define PTR_recovered_100052fc_100070d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xafcU)))
#define local_88 (*(undefined4 *)(frame + 32))
#define local_70 (*(code * *)(frame + 56))
#define local_68 (*(undefined * *)(frame + 64))
#define local_60 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 80))
#define auStack_98 (*(undefined1 (*)[8])(frame + 16))
#define local_50 (*(undefined1 * *)(frame + 88))
#define local_38 (*(uintptr_t * *)(frame + 112))
#define local_90 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000530a
 */

void recovered_1000530a(undefined8 *param_1)

{
  unsigned char frame[200] = {0};


  local_60 = (undefined1 *)((long)(uintptr_t)(frame + 168) + -8);
  local_50 = auStack_98;
  local_38 = param_1 + 2;
  *local_38 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_recovered_100052fc_100070d0;
  local_70 = recovered_10002dc0;
  local_68 = &DAT_10006ac8;
  local_58 = &LAB_100053b3;
  local_88 = 1;
  recovered_100031fa();
  recovered_100053f0((long)param_1);
  recovered_10003211(&local_90);
  return;
}

#undef DAT_10006ac8
#undef LAB_100053b3
#undef PTR_recovered_100052fc_100070d0
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef auStack_98
#undef local_50
#undef local_38
#undef local_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f0
 */

void recovered_100053f0(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_100054cc((ulonglong *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


#undef DAT_10006ad0
#define DAT_10006ad0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fcU)))
#undef LAB_10005481
#define LAB_10005481 (*(uint8_t *)(0x10005481U))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005414
 */

void recovered_10005414(long *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002dc0;
  local_60 = &DAT_10006ad0;
  local_50 = &LAB_10005481;
  local_80 = 1;
  recovered_100031fa();
  recovered_10005510(param_1);
  recovered_10003211(&local_88);
  return;
}

#undef DAT_10006ad0
#undef LAB_10005481
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054ac
 */

void recovered_100054ac(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005414((long *)((long)param_1 + 0x10));
  recovered_10002e27(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054cc
 */

void recovered_100054cc(ulonglong *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  recovered_10005510((long *)param_1);
  recovered_1000553a();
  uVar1 = recovered_10002167();
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 != 0;
  param_1[2] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

void recovered_10005510(long *param_1)

{
  unsigned char frame[64] = {0};

  if ((void *)*param_1 != (void *)0x0) {
    recovered_100024f3((void *)*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}


#undef DAT_100069c8
#define DAT_100069c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_100069cc
#define DAT_100069cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f8U)))
#undef DAT_100069cf
#define DAT_100069cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fbU)))
#undef DAT_100069d3
#define DAT_100069d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ffU)))
#undef DAT_100069d6
#define DAT_100069d6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x402U)))
#undef DAT_100069da
#define DAT_100069da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_100069dd
#define DAT_100069dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef DAT_100069e0
#define DAT_100069e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef DAT_100069e2
#define DAT_100069e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_100069e5
#define DAT_100069e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x411U)))
#undef DAT_100069e7
#define DAT_100069e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_100069ea
#define DAT_100069ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x416U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000553a
 */

ulonglong recovered_1000553a(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined *puVar2;
  uint in_EDI;
  bool bVar3;

  if ((~in_EDI & 3) == 0) {
    if ((in_EDI & 8) == 0) {
      if ((in_EDI & 0x10) == 0) {
        bVar3 = (in_EDI & 4) == 0;
        puVar2 = &DAT_100069da;
        puVar1 = &DAT_100069d6;
      }
      else {
        bVar3 = (in_EDI & 4) == 0;
        puVar2 = &DAT_100069d3;
        puVar1 = &DAT_100069cf;
      }
    }
    else {
      bVar3 = (in_EDI & 4) == 0;
      puVar2 = &DAT_100069cc;
      puVar1 = &DAT_100069c8;
    }
  }
  else if ((in_EDI & 2) == 0) {
    bVar3 = (in_EDI & 4) == 0;
    puVar2 = &DAT_100069ea;
    puVar1 = &DAT_100069e7;
  }
  else if ((in_EDI & 8) == 0) {
    bVar3 = (in_EDI & 4) == 0;
    puVar2 = &DAT_100069e5;
    puVar1 = &DAT_100069e2;
  }
  else {
    bVar3 = (in_EDI & 4) == 0;
    puVar2 = &DAT_100069e0;
    puVar1 = &DAT_100069dd;
  }
  if (bVar3) {
    puVar1 = puVar2;
  }
  return (ulonglong)puVar1;
}

#undef DAT_100069c8
#undef DAT_100069cc
#undef DAT_100069cf
#undef DAT_100069d3
#undef DAT_100069d6
#undef DAT_100069da
#undef DAT_100069dd
#undef DAT_100069e0
#undef DAT_100069e2
#undef DAT_100069e5
#undef DAT_100069e7
#undef DAT_100069ea

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055da
 */

void recovered_100055da(void)

{
  unsigned char frame[64] = {0};

  long in_RDI;

  recovered_10002dd0(in_RDI);
                    /* WARNING: Subroutine does not return */
  recovered_10002d39();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e8
 */

void recovered_100055e8(long *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if (*param_1 != 0) {
    uVar1 = recovered_100027be();
    bVar2 = uVar1 == 0;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005620
 */

ulonglong recovered_10005620(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long *in_RDI;

  if ((*in_RDI == 0) || (uVar1 = recovered_10002837(), (long)uVar1 < 0)) {
    *(undefined1 *)(in_RDI + 1) = 0;
    return 0xffffffffffffffff;
  }
  *(undefined1 *)(in_RDI + 1) = 1;
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

void recovered_10005650(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if (param_1[2] < param_2) {
    uVar1 = recovered_100056a2();
    for (uVar2 = 0; uVar2 < param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002e27((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a2
 */

ulonglong recovered_100056a2(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002df3(in_RDI);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b6
 */

void recovered_100056b6(long *param_1,long param_2,ulonglong param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  bool bVar2;

  uVar1 = 0;
  bVar2 = false;
  if (((-1 < (long)param_3) && (param_2 != 0)) && (*param_1 != 0)) {
    uVar1 = recovered_1000252d();
    bVar2 = uVar1 == param_3;
  }
  *(bool *)(param_1 + 1) = bVar2;
  param_1[2] = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056ff
 */

uchar recovered_100056ff(void)

{
  unsigned char frame[64] = {0};

  ulong in_RDX;
  long in_RSI;
  ushort *in_RDI;

  if (in_RDI != (ushort *)0x0) {
    if (*in_RDI != 0xfffe) {
      return '\x01';
    }
    if (((0x27 < in_RDX && in_RSI != 0) && (0x15 < *(ushort *)(in_RSI + 0x10))) &&
       ((*(ushort *)(in_RSI + 0x18) & 0xfffd) == 1)) {
      *in_RDI = *(ushort *)(in_RSI + 0x18);
      return '\x01';
    }
  }
  return '\0';
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

uchar recovered_10005740(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int in_ESI;
  int in_EDI;

  if (in_EDI == 3) {
    uVar1 = in_ESI - 0x20U & 0xffdf;
  }
  else {
    if (in_EDI != 1) {
      return '\0';
    }
    uVar1 = in_ESI - 8U & 0xffe7;
  }
  return uVar1 == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000576a
 */

void recovered_1000576a(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < param_1[1]) {
    param_1[1] = param_2;
  }
  else if (param_1[1] < param_2) {
    recovered_1000594a(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006608
#define DAT_10006608 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10006788
#define DAT_10006788 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef DAT_10006790
#define DAT_10006790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef DAT_10006798
#define DAT_10006798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c4U)))
#undef DAT_100067a0
#define DAT_100067a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ccU)))
#undef DAT_100067ac
#define DAT_100067ac (*(float *)(((uintptr_t)pf_module_state + 0x1d8U)))
#undef _DAT_10006788
#define _DAT_10006788 (*(double *)(((uintptr_t)pf_module_state + 0x1b4U)))
#undef _DAT_10006790
#define _DAT_10006790 (*(double *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef _DAT_10006798
#define _DAT_10006798 (*(double *)(((uintptr_t)pf_module_state + 0x1c4U)))
#undef _DAT_100067a0
#define _DAT_100067a0 (*(double *)(((uintptr_t)pf_module_state + 0x1ccU)))
#define local_20 (*(double *)(frame + 16))
#define local_14 (*(float *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057af
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100057af(void)

{
  unsigned char frame[80] = {0};

  uint uVar1;
  ushort in_DX;
  int in_ESI;
  uint3 *in_RDI;
  double dVar2;

  dVar2 = 0.0;
  if (in_ESI == 3) {
    if (in_DX == 0x40) {
      local_20 = 0.0;
      recovered_10000c32(&local_20,in_RDI,8);
      dVar2 = DAT_100065e8;
      if (local_20 <= DAT_100065e8) {
        dVar2 = local_20;
      }
      dVar2 = (double)(-(ulong)(local_20 < DAT_10006608) & (ulong)DAT_10006608 |
                      ~-(ulong)(local_20 < DAT_10006608) & (ulong)dVar2);
    }
    else if (in_DX == 0x20) {
      local_14 = 0.0;
      recovered_10000c32(&local_14,in_RDI,4);
      if (local_14 < DAT_100067ac) {
        dVar2 = DAT_10006608;
      }
      else {
        dVar2 = DAT_100065e8;
        if ((double)local_14 <= DAT_100065e8) {
          dVar2 = (double)local_14;
        }
      }
    }
  }
  else if (in_ESI == 1) {
    switch((uintptr_t)((uint)in_DX << 0x1d | in_DX - 8 >> 3)) {
    case 0:
      dVar2 = (double)(int)((byte)*in_RDI - 0x80) * _DAT_100067a0;
      break;
    case 1:
      dVar2 = (double)(int)(short)*in_RDI * _DAT_10006798;
      break;
    case 2:
      uVar1 = *in_RDI - 0x1000000;
      if (-1 < (char)*(byte *)((long)in_RDI + 2)) {
        uVar1 = (uint)*in_RDI;
      }
      dVar2 = (double)(int)uVar1 * _DAT_10006790;
      break;
    case 3:
      dVar2 = (double)*(int *)in_RDI * _DAT_10006788;
    }
  }
  return dVar2;
}

#undef DAT_100065e8
#undef DAT_10006608
#undef DAT_10006788
#undef DAT_10006790
#undef DAT_10006798
#undef DAT_100067a0
#undef DAT_100067ac
#undef _DAT_10006788
#undef _DAT_10006790
#undef _DAT_10006798
#undef _DAT_100067a0
#undef local_20
#undef local_14

#undef DAT_100065e8
#define DAT_100065e8 (*(double *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10006608
#define DAT_10006608 (*(double *)(((uintptr_t)pf_module_state + 0x34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005904
 */

uint recovered_10005904(void)

{
  unsigned char frame[64] = {0};

  short sVar1;
  uint uVar2;
  double in_XMM0_Qa;

  sVar1 = -0x8000;
  if ((DAT_10006608 < in_XMM0_Qa) && (sVar1 = 0x7fff, in_XMM0_Qa < DAT_100065e8)) {
    uVar2 = recovered_1000145c();
    sVar1 = (short)uVar2;
  }
  return (int)sVar1;
}

#undef DAT_100065e8
#undef DAT_10006608

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000594a
 */

void recovered_1000594a(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulonglong uVar2;
  ulong uVar3;

  if (param_1[2] < param_2) {
    uVar2 = recovered_100059a1();
    uVar1 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar2 + uVar3 * 2) = *(undefined2 *)(*param_1 + uVar3 * 2);
    }
    recovered_10002e27((void *)*param_1);
    *param_1 = uVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a1
 */

ulonglong recovered_100059a1(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002df3(in_RDI * 2);
  return (ulonglong)pvVar1;
}


#undef DAT_100067f1
#define DAT_100067f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059b7
 */

uchar recovered_100059b7(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uchar uVar2;
  ulonglong uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  undefined *puVar4;

  lVar1 = in_RDI[1];
  puVar4 = &DAT_100067f1;
  if ((undefined *)*in_RDI != (undefined *)0x0) {
    puVar4 = (undefined *)*in_RDI;
  }
  uVar3 = recovered_10005af9();
  uVar2 = recovered_10005bff((long)puVar4,lVar1,in_RSI,uVar3);
  return uVar2;
}

#undef DAT_100067f1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059fc
 */

void recovered_100059fc(ulonglong *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = recovered_10005af9();
  recovered_10005a2e(param_1,param_2,uVar1);
  return;
}


#define local_40 (*(void * *)(frame + 16))
#define local_38 (*(ulonglong *)(frame + 24))
#define local_28 (*(long *)(frame + 40))
#define uStack_30 (*(ulonglong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a2e
 */

void recovered_10005a2e(ulonglong *param_1,long param_2,ulong param_3)

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
  uVar3 = recovered_10005b14();
  if (uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10005b52(param_1);
    }
    else {
      recovered_10005b78();
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
    recovered_10005bd2(&local_40,local_28 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (ulonglong)local_40;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    local_40 = data;
    local_38 = uVar1;
    uStack_30 = uVar2;
    recovered_10002e27(data);
  }
  return;
}

#undef local_40
#undef local_38
#undef local_28
#undef uStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005af9
 */

ulonglong recovered_10005af9(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long in_RDI;

  uVar1 = 0;
  while( true ) {
    if (in_RDI == 0) {
      return 0;
    }
    if (*(char *)(in_RDI + uVar1) == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b14
 */

uchar recovered_10005b14(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  long *in_RDX;
  long in_RSI;
  long lVar2;
  long *in_RDI;
  ulong uVar3;

  if (in_RSI == 0 || *in_RDI == 0) {
LAB_10005b4e:
    uVar1 = '\0';
  }
  else {
    lVar2 = in_RSI - *in_RDI;
    uVar3 = 0;
    do {
      if ((ulong)in_RDI[1] < uVar3) goto LAB_10005b4e;
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *in_RDX = lVar2;
    uVar1 = '\x01';
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b52
 */

void recovered_10005b52(ulonglong *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_10005bee();
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b78
 */

uint recovered_10005b78(void)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;
  ulong in_RSI;
  ulonglong *in_RDI;

  if (in_RDI[2] < in_RSI) {
    uVar1 = recovered_10005bee();
    for (uVar2 = 0; uVar2 < in_RDI[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*in_RDI + uVar2);
    }
    *(undefined1 *)(uVar1 + in_RDI[1]) = 0;
    recovered_10002e27((void *)*in_RDI);
    *in_RDI = uVar1;
    in_RDI[2] = in_RSI;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd2
 */

void recovered_10005bd2(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  recovered_10005a2e(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bee
 */

ulonglong recovered_10005bee(void)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long in_RDI;

  puVar1 = recovered_10002df3(in_RDI + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bff
 */

undefined1 recovered_10005bff(long param_1,long param_2,long param_3,long param_4)

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


#undef DAT_100069ec
#define DAT_100069ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_100069f1
#define DAT_100069f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41dU)))
#undef DAT_100069f6
#define DAT_100069f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x422U)))
#undef DAT_100069fb
#define DAT_100069fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x427U)))
#undef DAT_10006ae0
#define DAT_10006ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50cU)))
#undef LAB_10005edb
#define LAB_10005edb (*(uint8_t *)(0x10005edbU))
#define local_c8 (*(undefined8 * *)(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 24))
#define local_b8 (*(undefined4 *)(frame + 32))
#define local_a0 (*(code * *)(frame + 56))
#define local_98 (*(undefined * *)(frame + 64))
#define local_90 (*(undefined1 * *)(frame + 72))
#define local_88 (*(undefined1 * *)(frame + 80))
#define local_80 (*(undefined1 * *)(frame + 88))
#define local_64 (*(uint *)(frame + 116))
#define local_60 (*(long *)(frame + 120))
#define local_58 (*(long * *)(frame + 128))
#define local_50 (*(void * *)(frame + 136))
#define local_40 (*(undefined8 *)(frame + 152))
#define local_38 (*(long * *)(frame + 160))
#define uStack_48 (*(undefined8 *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c29
 */

uchar recovered_10005c29(void)

{
  unsigned char frame[248] = {0};

  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uchar uVar5;
  undefined8 *in_RSI;
  long *in_RDI;

  local_90 = (undefined1 *)((long)(uintptr_t)(frame + 216) + -8);
  local_80 = (undefined1 *)&local_c8;
  local_a0 = recovered_10002dc0;
  local_98 = &DAT_10006ae0;
  local_88 = &LAB_10005edb;
  recovered_100031fa();
  if ((in_RSI != (undefined8 *)0x0) && (*(uint *)(in_RDI + 3) != 0)) {
    uVar1 = *(ushort *)((long)in_RDI + 0x1c);
    if ((ulong)uVar1 != 0) {
      uVar2 = in_RDI[1];
      uVar5 = '\0';
      if (uVar2 % (ulong)uVar1 != 0) goto LAB_10005ccd;
      if ((uVar2 & 0x7fffffffffffffff) >> 1 < 0x3ffffff7) {
        lVar3 = (ulong)*(uint *)(in_RDI + 3) * (ulong)((uint)uVar1 * 2);
        if (-1 < (short)uVar1 && (int)((ulong)lVar3 >> 0x20) == 0) {
          local_60 = CONCAT44(PF_PART4(local_60, 4),(int)lVar3);
          local_50 = (void *)0x0;
          uStack_48 = 0;
          local_40 = 0;
          local_b8 = 1;
          local_c8 = in_RSI;
          local_64 = (uint)uVar1 * 2;
          local_58 = (long *)(uVar2 * 2);
          local_38 = in_RDI;
          recovered_10005650((ulonglong *)&local_50,uVar2 * 2 + 0x2c);
          local_b8 = 2;
          recovered_10005f72((long *)&local_50,&DAT_100069ec,4);
          local_b8 = 3;
          recovered_10005f8d((long *)&local_50,(int)local_58 + 0x24);
          local_b8 = 4;
          recovered_10005f72((long *)&local_50,&DAT_100069f1,4);
          local_b8 = 5;
          recovered_10005f72((long *)&local_50,&DAT_100069f6,4);
          local_b8 = 6;
          recovered_10005f8d((long *)&local_50,0x10);
          local_b8 = 7;
          recovered_10005fe4((long *)&local_50,1);
          local_b8 = 8;
          recovered_10005fe4((long *)&local_50,(uint)*(ushort *)((long)local_38 + 0x1c));
          local_b8 = 9;
          recovered_10005f8d((long *)&local_50,(int)local_38[3]);
          local_b8 = 10;
          recovered_10005f8d((long *)&local_50,(undefined4)local_60);
          local_b8 = 0xb;
          recovered_10005fe4((long *)&local_50,local_64 & 0xffff);
          local_b8 = 0xc;
          recovered_10005fe4((long *)&local_50,0x10);
          local_b8 = 0xd;
          recovered_10005f72((long *)&local_50,&DAT_100069fb,4);
          local_b8 = 0xe;
          recovered_10005f8d((long *)&local_50,(int)local_58);
          local_60 = *local_38;
          local_58 = (long *)(local_38[1] * 2);
          plVar4 = (long *)0x0;
          while (local_58 != plVar4) {
            local_b8 = 0xf;
            local_38 = plVar4;
            recovered_10005fe4((long *)&local_50,(uint)*(ushort *)(local_60 + (long)plVar4));
            plVar4 = (long *)((long)local_38 + 2);
          }
          recovered_10006018(local_c8,&local_50);
          uStack_48 = 0;
          recovered_10002e27(local_50);
          uVar5 = '\x01';
          goto LAB_10005ccd;
        }
      }
    }
  }
  uVar5 = '\0';
LAB_10005ccd:
  recovered_10003211(&local_c0);
  return uVar5;
}

#undef DAT_100069ec
#undef DAT_100069f1
#undef DAT_100069f6
#undef DAT_100069fb
#undef DAT_10006ae0
#undef LAB_10005edb
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef local_38
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f64
 */

void recovered_10005f64(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005414((long *)(param_1 + 0x10));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f72
 */

void recovered_10005f72(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  recovered_1000605a(param_1,*param_1 + param_1[1],param_2,param_2 + param_3);
  return;
}


#define local_1c (*(undefined1 *)(frame + 16))
#define local_1b (*(undefined1 *)(frame + 17))
#define local_1a (*(undefined1 *)(frame + 18))
#define local_19 (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f8d
 */

void recovered_10005f8d(long *param_1,undefined4 param_2)

{
  unsigned char frame[76] = {0};


  local_1c = (undefined1)param_2;
  recovered_10006120(param_1,&local_1c);
  local_19 = (undefined1)((uint)param_2 >> 8);
  recovered_10006120(param_1,&local_19);
  local_1b = (undefined1)((uint)param_2 >> 0x10);
  recovered_10006120(param_1,&local_1b);
  local_1a = (undefined1)((uint)param_2 >> 0x18);
  recovered_10006120(param_1,&local_1a);
  return;
}

#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19

#define local_1a (*(undefined1 *)(frame + 16))
#define local_19 (*(undefined1 *)(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fe4
 */

void recovered_10005fe4(long *param_1,undefined4 param_2)

{
  unsigned char frame[74] = {0};


  local_1a = (undefined1)param_2;
  recovered_10006120(param_1,&local_1a);
  local_19 = (undefined1)((uint)param_2 >> 8);
  recovered_10006120(param_1,&local_19);
  return;
}

#undef local_1a
#undef local_19

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006018
 */

undefined8 * recovered_10006018(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    param_1[1] = 0;
    recovered_10002e27((void *)*param_1);
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
 * Address: 0x1000605a
 */

long recovered_1000605a(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10005650((ulonglong *)param_1,uVar2);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006120
 */

long recovered_10006120(long *param_1,undefined1 *param_2)

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
    recovered_10005650((ulonglong *)param_1,uVar2);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = *param_2;
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  return lVar1 + 1 + *param_1 + -1;
}


#undef DAT_10006b04
#define DAT_10006b04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x530U)))
#undef LAB_10006219
#define LAB_10006219 (*(uint8_t *)(0x10006219U))
#undef PTR_recovered_10005f64_10007138
#define PTR_recovered_10005f64_10007138 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xb64U)))
#define local_60 (*(undefined1 * *)(frame + 72))
#define local_58 (*(undefined1 * *)(frame + 80))
#define local_50 (*(undefined1 * *)(frame + 88))
#define local_38 (*(uintptr_t * *)(frame + 112))
#define auStack_98 (*(undefined1 (*)[8])(frame + 16))
#define local_90 (*(undefined8 *)(frame + 24))
#define local_88 (*(undefined4 *)(frame + 32))
#define local_70 (*(code * *)(frame + 56))
#define local_68 (*(undefined * *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006170
 */

void recovered_10006170(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  unsigned char frame[200] = {0};


  local_60 = (undefined1 *)((long)(uintptr_t)(frame + 168) + -8);
  local_50 = auStack_98;
  local_38 = param_1 + 2;
  *local_38 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_recovered_10005f64_10007138;
  local_70 = recovered_10002dc0;
  local_68 = &DAT_10006b04;
  local_58 = &LAB_10006219;
  local_88 = 1;
  recovered_100031fa();
  recovered_10006254((long)param_1,param_2,param_3);
  recovered_10003211(&local_90);
  return;
}

#undef DAT_10006b04
#undef LAB_10006219
#undef PTR_recovered_10005f64_10007138
#undef local_60
#undef local_58
#undef local_50
#undef local_38
#undef auStack_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006254
 */

void recovered_10006254(long param_1,undefined8 param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  recovered_100054cc((ulonglong *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006278
 */

void recovered_10006278(void *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005414((long *)((long)param_1 + 0x10));
  recovered_10002e27(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006298
 */

void recovered_10006298(long *param_1,long param_2,ulonglong param_3)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 != 0) {
    if ((-1 < (long)param_3) && (param_2 != 0 || param_3 == 0)) {
      uVar1 = recovered_100026a5();
      *(bool *)(param_1 + 1) = uVar1 == param_3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062e2
 */

void recovered_100062e2(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002e27((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f4
 */

void recovered_100062f4(long *param_1,ulong param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_1000576a((ulonglong *)param_1,param_2);
    return;
  }
  recovered_1000594a((ulonglong *)param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006356
 */

long recovered_10006356(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

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
    uVar6 = param_2 - lVar4 >> 1;
  }
  if (1 < (ulong)((long)param_4 - (long)param_3)) {
    uVar7 = (ulong)((long)param_4 - (long)param_3) >> 1;
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
      recovered_1000594a((ulonglong *)param_1,uVar5);
      uVar2 = param_1[1];
    }
    for (uVar5 = uVar2; uVar6 < uVar5; uVar5 = uVar5 - 1) {
      *(undefined2 *)(uVar7 * 2 + -2 + *param_1 + uVar5 * 2) =
           *(undefined2 *)(*param_1 + -2 + uVar5 * 2);
    }
    lVar4 = uVar6 * 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined2 *)(*param_1 + lVar4) = *param_3;
      lVar4 = lVar4 + 2;
    }
    param_1[1] = uVar2 + uVar7;
    lVar4 = *param_1;
    bVar8 = lVar4 == 0;
  }
  lVar3 = 0;
  if (!bVar8) {
    lVar3 = lVar4 + uVar6 * 2;
  }
  return lVar3;
}


#undef DAT_100080c8
#define DAT_100080c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1af4U)))
#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa2cU)))
#undef PTR_DAT_10007020
#define PTR_DAT_10007020 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa4cU)))
#undef PTR_recovered_10003a04_10007070
#define PTR_recovered_10003a04_10007070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000643c
 */

void recovered_1000643c(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_10007000 == '\0') {
    uVar3 = recovered_10003090();
    uVar2 = DAT_100080c8;
    puVar1 = PTR_DAT_10007020;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_10007020 = &PTR_recovered_10003a04_10007070;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003088();
      recovered_1000309d(PTR_DAT_10007000);
      return;
    }
  }
  return;
}

#undef DAT_100080c8
#undef PTR_DAT_10007000
#undef PTR_DAT_10007020
#undef PTR_recovered_10003a04_10007070

#undef DAT_100080d0
#define DAT_100080d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1afcU)))
#undef PTR_DAT_10007018
#define PTR_DAT_10007018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa44U)))
#undef PTR_DAT_10007038
#define PTR_DAT_10007038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa64U)))
#undef PTR_recovered_10003a0a_100070a0
#define PTR_recovered_10003a0a_100070a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xaccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a2
 */

void recovered_100064a2(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_10007018 == '\0') {
    uVar3 = recovered_10003090();
    uVar2 = DAT_100080d0;
    puVar1 = PTR_DAT_10007038;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_10007038 = &PTR_recovered_10003a0a_100070a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003088();
      recovered_1000309d(PTR_DAT_10007018);
      return;
    }
  }
  return;
}

#undef DAT_100080d0
#undef PTR_DAT_10007018
#undef PTR_DAT_10007038
#undef PTR_recovered_10003a0a_100070a0

#undef DAT_100080d8
#define DAT_100080d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef PTR_DAT_10007008
#define PTR_DAT_10007008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa34U)))
#undef PTR_DAT_10007028
#define PTR_DAT_10007028 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa54U)))
#undef PTR_recovered_10003a0a_100070a0
#define PTR_recovered_10003a0a_100070a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xaccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006508
 */

void recovered_10006508(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_10007008 == '\0') {
    uVar3 = recovered_10003090();
    uVar2 = DAT_100080d8;
    puVar1 = PTR_DAT_10007028;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_10007028 = &PTR_recovered_10003a0a_100070a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003088();
      recovered_1000309d(PTR_DAT_10007008);
      return;
    }
  }
  return;
}

#undef DAT_100080d8
#undef PTR_DAT_10007008
#undef PTR_DAT_10007028
#undef PTR_recovered_10003a0a_100070a0

#undef DAT_100080d8
#define DAT_100080d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef PTR_DAT_10007010
#define PTR_DAT_10007010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa3cU)))
#undef PTR_DAT_10007030
#define PTR_DAT_10007030 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa5cU)))
#undef PTR_recovered_10003a0a_100070a0
#define PTR_recovered_10003a0a_100070a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xaccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000656e
 */

void recovered_1000656e(void)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;

  if (*PTR_DAT_10007010 == '\0') {
    uVar3 = recovered_10003090();
    uVar2 = DAT_100080d8;
    puVar1 = PTR_DAT_10007030;
    if (uVar3 != 0) {
      *(undefined ***)PTR_DAT_10007030 = &PTR_recovered_10003a0a_100070a0;
      *(undefined8 *)(puVar1 + 8) = uVar2;
      recovered_10003088();
      recovered_1000309d(PTR_DAT_10007010);
      return;
    }
  }
  return;
}

#undef DAT_100080d8
#undef PTR_DAT_10007010
#undef PTR_DAT_10007030
#undef PTR_recovered_10003a0a_100070a0
