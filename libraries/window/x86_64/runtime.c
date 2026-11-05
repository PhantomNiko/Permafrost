/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10007120
#define DAT_10007120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000560
 */

void recovered_10000560(void)

{
  unsigned char frame[64] = {0};

  DAT_10007120 = 0;
  recovered_10000571();
  return;
}

#undef DAT_10007120

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
#undef DAT_10007120
#define DAT_10007120 (*(char *)(((uintptr_t)pf_module_state + 0x17aeU)))
#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
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
 * Address: 0x10000571
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000571(void)

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
  if (DAT_10007120 == '\0') {
    DAT_10007128 = 0;
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
      local_438[1] = 0x10000773;
      recovered_10001d86(puVar3[-1],*puVar3,&local_28);
      puVar3 = puVar3 + 2;
      lVar2 = extraout_RAX;
    }
    if (DAT_10007128 == 0) {
      uVar5 = _DAT_00006088 & 0xfffffff0;
      if (_DAT_00006088 < 0x300001) {
        uVar5 = 0x4000000;
      }
      uVar4 = (ulong)uVar5;
      if (uVar5 < 0x300029) {
        uVar4 = 0x4000000;
      }
      local_438[1] = 0x100007ba;
      recovered_10001d86(0x300000,uVar4 - 0x300000,&local_28);
      in_EAX = extraout_EAX;
    }
    DAT_10007120 = '\x01';
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
#undef DAT_10007120
#undef DAT_10007128
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00006238
#undef _DAT_0000623c
#undef local_438
#undef local_28

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007cf
 */

ulong recovered_100007cf(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000571();
  uVar3 = 0;
  for (plVar1 = &DAT_10007128; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
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

#undef DAT_10007128

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000806
 */

long recovered_10000806(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000571();
  lVar1 = 0;
  for (plVar2 = &DAT_10007128; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[2] == '\x01') {
      lVar1 = lVar1 + *plVar2;
    }
  }
  return lVar1;
}

#undef DAT_10007128

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000831
 */

ulong recovered_10000831(void)

{
  unsigned char frame[64] = {0};

  long *plVar1;
  ulong uVar2;
  ulong uVar3;

  recovered_10000571();
  uVar3 = 0;
  for (plVar1 = &DAT_10007128; plVar1 = (long *)*plVar1, plVar1 != (long *)0x0; plVar1 = plVar1 + 1)
  {
    uVar3 = uVar3 + *plVar1;
  }
  uVar2 = 0xffffffff;
  if (uVar3 < 0xffffffff) {
    uVar2 = uVar3;
  }
  return uVar2;
}

#undef DAT_10007128

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000862
 */

long recovered_10000862(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long *plVar2;

  recovered_10000571();
  lVar1 = 0;
  for (plVar2 = &DAT_10007128; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = lVar1 + *plVar2;
  }
  return lVar1;
}

#undef DAT_10007128

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000887
 */

ulong * recovered_10000887(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  recovered_10000571();
  uVar4 = param_1 + 0xfU & 0xfffffffffffffff0;
  puVar2 = &DAT_10007128;
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

#undef DAT_10007128

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000909
 */

ulong recovered_10000909(ulong param_1,uint param_2)

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
 * Address: 0x10000945
 */

ulong recovered_10000945(ulong param_1,uint param_2)

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
 * Address: 0x10000984
 */

long recovered_10000984(long param_1,uint param_2)

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
 * Address: 0x100009c8
 */

void recovered_100009c8(void)

{
  unsigned char frame[64] = {0};

  recovered_100009d4();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009d4
 */

ulonglong recovered_100009d4(void)

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
 * Address: 0x10000a2e
 */

undefined8 recovered_10000a2e(void)

{
  unsigned char frame[64] = {0};

  recovered_100009d4();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a4e
 */

ulonglong recovered_10000a4e(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulonglong uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_100009d4();
  uVar2 = -uVar1;
  if (-1 < (long)(param_2 ^ param_1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a8a
 */

undefined8 recovered_10000a8a(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0) {
    return 0;
  }
  recovered_100009d4();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000add
 */

void recovered_10000add(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae5
 */

int recovered_10000ae5(int param_1)

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
 * Address: 0x10000af2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000af2(ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001de6();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000684c == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b1c. Too many branches */
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
 * Address: 0x10000b27
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000b27(void *buffer)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10001de6();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b51. Too many branches */
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
 * Address: 0x10000b5a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10000b5a(void *buffer,ulong size)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  void *pvVar2;

  uVar1 = recovered_10001de6();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006854 == (code *)0x0)) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*(code *)(ulong)_DAT_00006854)(buffer,size);
  return pvVar2;
}

#undef DAT_00006854
#undef _DAT_00006854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b92
 */

void * recovered_10000b92(void *out,void *data,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((long)out + uVar1) = *(undefined1 *)((long)data + uVar1);
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000baf
 */

void * recovered_10000baf(void *out,void *data,ulong size)

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
 * Address: 0x10000bfb
 */

void * recovered_10000bfb(void *out,int value,ulong size)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((long)out + uVar1) = (char)value;
  }
  return out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c14
 */

void recovered_10000c14(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c2a
 */

void recovered_10000c2a(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c40
 */

int recovered_10000c40(void *left,void *right,ulong size)

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
 * Address: 0x10000c67
 */

bool recovered_10000c67(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c78
 */

bool recovered_10000c78(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c89
 */

bool recovered_10000c89(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c9d
 */

bool recovered_10000c9d(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cbf
 */

bool recovered_10000cbf(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd6
 */

bool recovered_10000cd6(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce7
 */

int recovered_10000ce7(int param_1)

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
 * Address: 0x10000cf9
 */

int recovered_10000cf9(int param_1)

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
 * Address: 0x10000d0b
 */

ulong recovered_10000d0b(char *text)

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
 * Address: 0x10000d25
 */

int recovered_10000d25(char *left,char *right)

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
 * Address: 0x10000d46
 */

void recovered_10000d46(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  recovered_10000d25(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d50
 */

void recovered_10000d50(long param_1,long param_2)

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
 * Address: 0x10000d68
 */

void * recovered_10000d68(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *out;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_10000d0b(param_1);
    out = recovered_10000af2(uVar1 + 1);
    if (out != (void *)0x0) {
      recovered_10000b92(out,param_1,uVar1 + 1);
      return out;
    }
  }
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db6
 */

ulonglong recovered_10000db6(void)

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
 * Address: 0x10000ddc
 */

long recovered_10000ddc(long param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;

  lVar2 = 0;
  while( true ) {
    if (*(char *)(param_1 + lVar2) == '\0') {
      return lVar2;
    }
    uVar1 = recovered_10000db6();
    if (uVar1 == 0) break;
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e18
 */

char * recovered_10000e18(char *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    uVar1 = recovered_10000db6();
    if (uVar1 != 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e48
 */

char * recovered_10000e48(char *param_1,char *param_2)

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


#undef DAT_10005ae8
#define DAT_10005ae8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x176U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e77
 */

undefined * recovered_10000e77(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10005ae8;
}

#undef DAT_10005ae8

#undef PTR_DAT_10007000
#define PTR_DAT_10007000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x168eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e84
 */

undefined ** recovered_10000e84(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10007000;
}

#undef PTR_DAT_10007000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e91
 */

undefined8 recovered_10000e91(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10005980
#define DAT_10005980 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ea8
 */

float recovered_10000ea8(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint in_EDI;
  double in_XMM0_Qa;

  for (uVar1 = in_EDI; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    in_XMM0_Qa = in_XMM0_Qa + in_XMM0_Qa;
  }
  for (uVar1 = (int)in_EDI >> 0x1f & in_EDI; uVar1 != 0; uVar1 = uVar1 + 1) {
    in_XMM0_Qa = in_XMM0_Qa * DAT_10005980;
  }
  return SUB84(in_XMM0_Qa,0);
}

#undef DAT_10005980

#undef DAT_10005980
#define DAT_10005980 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_10005a00
#define DAT_10005a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_10005a00
#define _DAT_10005a00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10000ed7(void)

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
    dVar3 = (double)(_DAT_10005a00 ^ (ulong)in_XMM0_Qa);
    if ((double)(_DAT_10005a00 ^ (ulong)in_XMM0_Qa) <= in_XMM0_Qa) {
      dVar3 = in_XMM0_Qa;
    }
    iVar1 = 0;
    for (; DAT_10005988 <= dVar3; dVar3 = dVar3 * DAT_10005980) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar3 && (dVar3 < DAT_10005980)); dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    if (in_RDI != (int *)0x0) {
      *in_RDI = iVar1;
    }
    fVar2 = (float)(~-(uint)(in_XMM0_Qa < 0.0) & SUB84(dVar3,0) |
                   ((uint)_DAT_10005a00 ^ SUB84(dVar3,0)) & -(uint)(in_XMM0_Qa < 0.0));
  }
  return fVar2;
}

#undef DAT_10005980
#undef DAT_10005988
#undef DAT_10005a00
#undef _DAT_10005a00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f69
 */

double recovered_10000f69(double left,double right)

{
  unsigned char frame[64] = {0};

  if ((right == 0.0) && (!NAN(right))) {
    return 0.0;
  }
  return left - (double)(int)(left / right) * right;
}


#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f98
 */

double recovered_10000f98(double left,double right)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;

  dVar3 = 0.0;
  if (((double)(int)right == right) && (!NAN((double)(int)right) && !NAN(right))) {
    uVar1 = (uint)right;
    if (uVar1 == 0) {
      return DAT_10005988;
    }
    uVar2 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar2 = uVar1;
    }
    dVar3 = DAT_10005988;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        dVar3 = dVar3 * left;
      }
      left = left * left;
    }
    if ((int)uVar1 < 0) {
      return DAT_10005988 / dVar3;
    }
  }
  return dVar3;
}

#undef DAT_10005988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

double recovered_10001000(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001029
 */

double recovered_10001029(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  uVar1 = -(ulong)(value < (double)(int)value);
  dVar2 = (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
  return (double)(~-(ulong)(dVar2 < value) & (ulong)dVar2 |
                 (ulong)(DAT_10005988 + dVar2) & -(ulong)(dVar2 < value));
}

#undef DAT_10005988

#undef DAT_10005980
#define DAT_10005980 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000107b
 */

double recovered_1000107b(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;
  double dVar3;

  dVar3 = 0.0;
  if (0.0 < value) {
    dVar3 = value;
    if (value <= DAT_10005988) {
      dVar3 = DAT_10005988;
    }
    iVar1 = 0x18;
    while (bVar2 = iVar1 != 0, iVar1 = iVar1 + -1, bVar2) {
      dVar3 = (value / dVar3 + dVar3) * DAT_10005980;
    }
  }
  return dVar3;
}

#undef DAT_10005980
#undef DAT_10005988

#undef DAT_10005980
#define DAT_10005980 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_10005990
#define DAT_10005990 (*(double *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_10005998
#define DAT_10005998 (*(double *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_100059a0
#define DAT_100059a0 (*(double *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100059a8
#define DAT_100059a8 (*(double *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100059b0
#define DAT_100059b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_100059b8
#define DAT_100059b8 (*(double *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_100059b0
#define _DAT_100059b0 (*(double *)(((uintptr_t)pf_module_state + 0x3eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100010c1(double value)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (value <= 0.0) {
    return DAT_10005990;
  }
  iVar1 = 0;
  for (; DAT_10005998 < value; value = value * DAT_10005980) {
    iVar1 = iVar1 + 1;
  }
  for (; value < DAT_100059a0; value = value + value) {
    iVar1 = iVar1 + -1;
  }
  dVar5 = (DAT_100059a8 + value) / (value + DAT_10005988);
  dVar3 = 0.0;
  dVar4 = DAT_10005988;
  dVar6 = dVar5;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar3 = dVar3 + dVar6 / dVar4;
    dVar4 = dVar4 + DAT_100059b8;
    dVar6 = dVar5 * dVar5 * dVar6;
  }
  return dVar3 + dVar3 + (double)iVar1 * _DAT_100059b0;
}

#undef DAT_10005980
#undef DAT_10005988
#undef DAT_10005990
#undef DAT_10005998
#undef DAT_100059a0
#undef DAT_100059a8
#undef DAT_100059b0
#undef DAT_100059b8
#undef _DAT_100059b0

#undef DAT_10005a10
#define DAT_10005a10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000117d
 */

long recovered_1000117d(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_10005a10 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10005a10

#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100059c0
#define DAT_100059c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10005a20
#define DAT_10005a20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeU)))
#undef _DAT_100059c0
#define _DAT_100059c0 (*(double *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef _DAT_10005a20
#define _DAT_10005a20 (*(uint128 *)(((uintptr_t)pf_module_state + 0xaeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100011a1(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  double dVar2;
  uint128 auVar3;

  dVar1 = recovered_100011f0();
  dVar2 = dVar1 * dVar1;
  PF_PART8(auVar3, 0) = dVar2 * dVar2;
  PF_PART8(auVar3, 8) = dVar2 * PF_PART8(auVar3, 0);
  auVar3 = divpd(auVar3,_DAT_10005a20);
  return dVar1 * ((dVar2 / _DAT_100059c0 + DAT_10005988 + PF_PART8(auVar3, 0)) - PF_PART8(auVar3, 8));
}

#undef DAT_10005988
#undef DAT_100059c0
#undef DAT_10005a20
#undef _DAT_100059c0
#undef _DAT_10005a20

#undef DAT_100059c8
#define DAT_100059c8 (*(double *)(((uintptr_t)pf_module_state + 0x56U)))
#undef DAT_100059d0
#define DAT_100059d0 (*(double *)(((uintptr_t)pf_module_state + 0x5eU)))
#undef DAT_100059d8
#define DAT_100059d8 (*(double *)(((uintptr_t)pf_module_state + 0x66U)))
#undef DAT_100059e0
#define DAT_100059e0 (*(double *)(((uintptr_t)pf_module_state + 0x6eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

double recovered_100011f0(void)

{
  unsigned char frame[64] = {0};

  double in_XMM0_Qa;

  for (; DAT_100059c8 < in_XMM0_Qa; in_XMM0_Qa = in_XMM0_Qa + DAT_100059e0) {
  }
  for (; in_XMM0_Qa < DAT_100059d0; in_XMM0_Qa = in_XMM0_Qa + DAT_100059d8) {
  }
  return in_XMM0_Qa;
}

#undef DAT_100059c8
#undef DAT_100059d0
#undef DAT_100059d8
#undef DAT_100059e0

#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100059e8
#define DAT_100059e8 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
#undef DAT_10005a30
#define DAT_10005a30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef _DAT_10005a30
#define _DAT_10005a30 (*(uint128 *)(((uintptr_t)pf_module_state + 0xbeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000122e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1000122e(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;

  dVar1 = recovered_100011f0();
  dVar1 = dVar1 * dVar1;
  PF_PART8(auVar2, 0) = dVar1 * dVar1;
  PF_PART8(auVar2, 8) = dVar1 * PF_PART8(auVar2, 0);
  auVar2 = divpd(auVar2,_DAT_10005a30);
  return (DAT_100059e8 * dVar1 + DAT_10005988 + PF_PART8(auVar2, 0)) - PF_PART8(auVar2, 8);
}

#undef DAT_10005988
#undef DAT_100059e8
#undef DAT_10005a30
#undef _DAT_10005a30

#undef DAT_10005a00
#define DAT_10005a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_10005a00
#define _DAT_10005a00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001279
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001279(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = (double)(_DAT_10005a00 ^ (ulong)value);
  if ((double)(_DAT_10005a00 ^ (ulong)value) <= value) {
    dVar1 = value;
  }
  return dVar1;
}

#undef DAT_10005a00
#undef _DAT_10005a00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001293
 */

float recovered_10001293(float left,float right)

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
 * Address: 0x100012c9
 */

undefined8 recovered_100012c9(void)

{
  unsigned char frame[64] = {0};

  float fVar1;
  undefined4 extraout_XMM0_Db = 0;

  fVar1 = recovered_10000ed7();
  return CONCAT44(extraout_XMM0_Db,(float)pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar1)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012dc
 */

undefined8 recovered_100012dc(void)

{
  unsigned char frame[64] = {0};

  float fVar1;
  undefined4 extraout_XMM0_Db = 0;

  fVar1 = recovered_10000ea8();
  return CONCAT44(extraout_XMM0_Db,(float)pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar1)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ef
 */

float recovered_100012ef(float left,float right)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10000f98((double)left,(double)right);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001306
 */

float recovered_10001306(float value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = -(ulong)((double)value < (double)(int)value);
  return (float)(double)(~uVar1 & (ulong)(double)(int)value |
                        (ulong)(double)((int)value + -1) & uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001337
 */

float recovered_10001337(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001029((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000134a
 */

double recovered_1000134a(double value)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  double dVar2;

  if (value < 0.0) {
    dVar2 = recovered_10001029(value);
    return dVar2;
  }
  uVar1 = -(ulong)(value < (double)(int)value);
  return (double)(~uVar1 & (ulong)(double)(int)value | (ulong)(double)((int)value + -1) & uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001383
 */

float recovered_10001383(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000134a((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001396
 */

float recovered_10001396(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000107b((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a9
 */

float recovered_100013a9(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100010c1((double)value);
  return (float)dVar1;
}


#undef DAT_10005a10
#define DAT_10005a10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013bc
 */

long recovered_100013bc(double param_1)

{
  unsigned char frame[64] = {0};

  return (long)(param_1 + *(double *)(&DAT_10005a10 + (ulong)(0.0 <= param_1) * 8));
}

#undef DAT_10005a10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

float recovered_100013e0(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_100011a1((double)value);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f3
 */

float recovered_100013f3(float value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_1000122e((double)value);
  return (float)dVar1;
}


#undef DAT_10005a40
#define DAT_10005a40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef _DAT_10005a40
#define _DAT_10005a40 (*(uint *)(((uintptr_t)pf_module_state + 0xceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001406
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10001406(float value)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = (float)(_DAT_10005a40 ^ (uint)value);
  if ((float)(_DAT_10005a40 ^ (uint)value) <= value) {
    fVar1 = value;
  }
  return fVar1;
}

#undef DAT_10005a40
#undef _DAT_10005a40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000141d
 */

long recovered_1000141d(byte *param_1,undefined8 *param_2,uint param_3)

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
    uVar2 = recovered_1000151d();
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
 * Address: 0x1000151d
 */

uint recovered_1000151d(void)

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
 * Address: 0x10001550
 */

long recovered_10001550(byte *param_1,undefined8 *param_2,uint param_3)

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
    uVar2 = recovered_1000151d();
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


#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100059f0
#define DAT_100059f0 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10005a00
#define DAT_10005a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef _DAT_10005a00
#define _DAT_10005a00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10001650(char *text,char **end)

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
    dVar7 = dVar7 * DAT_100059f0 + (double)(int)(bVar3 - 0x30);
    bVar4 = true;
  }
  dVar9 = DAT_10005988;
  if (bVar3 == 0x2e) {
    dVar8 = 0.0;
    while( true ) {
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
      if (9 < (byte)(bVar3 - 0x30)) break;
      dVar8 = dVar8 * DAT_100059f0 + (double)(int)(bVar3 - 0x30);
      dVar9 = dVar9 * DAT_100059f0;
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
        fVar6 = recovered_10000ea8();
        dVar7 = pf_bits_double(CONCAT44(extraout_XMM0_Db,fVar6));
        pbVar2 = pbVar5;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar2;
    }
    if (bVar1 == 0x2d) {
      dVar7 = (double)((ulong)dVar7 ^ _DAT_10005a00);
    }
    return dVar7;
  }
  if (end == (char **)0x0) {
    return 0.0;
  }
  *end = text;
  return 0.0;
}

#undef DAT_10005988
#undef DAT_100059f0
#undef DAT_10005a00
#undef _DAT_10005a00

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a6
 */

float recovered_100017a6(char *text,char **end)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001650(text,end);
  return (float)dVar1;
}


#undef DAT_100059f0
#define DAT_100059f0 (*(double *)(((uintptr_t)pf_module_state + 0x7eU)))
#undef DAT_10005a00
#define DAT_10005a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#undef DAT_10005b16
#define DAT_10005b16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a4U)))
#undef UNK_10005a08
#define UNK_10005a08 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef _DAT_10005a00
#define _DAT_10005a00 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8eU)))
#define local_48 (*(ulong *)(frame + 16))
#define local_40 (*(char * *)(frame + 24))
#define local_34 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017b5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100017b5(char *out,ulong capacity,char *format,void *arguments)

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
LAB_100017f7:
  cVar2 = *format;
  if (cVar2 != '%') {
    if (cVar2 == '\0') {
      if (capacity != 0) {
        *local_40 = '\0';
      }
      return local_34;
    }
    if (local_48 < 2) goto LAB_10001852;
    *local_40 = cVar2;
    goto LAB_10001818;
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
LAB_1000187c:
    switch((uintptr_t)(cVar2)) {
    case 'c':
      goto switchD_1000188f_caseD_63;
    case 'd':
    case 'i':
switchD_1000188f_caseD_64:
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
switchD_1000188f_caseD_65:
      if (local_48 < 2) goto LAB_10001852;
      *local_40 = '?';
      goto LAB_10001844;
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
        dVar12 = (double)((ulong)dVar12 ^ _DAT_10005a00);
      }
      recovered_10001c9e((long *)&local_40,&local_48,&local_34,(int)dVar12,10,0);
      if (1 < local_48) {
        *local_40 = '.';
        local_40 = local_40 + 1;
        local_48 = local_48 - 1;
      }
      dVar1 = DAT_100059f0;
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
      goto LAB_10001855;
    case 'h':
    case 'l':
    case 't':
    case 'z':
      goto switchD_1000188f_caseD_68;
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
      recovered_10001c55((long *)&local_40,&local_48,&local_34,&DAT_10005b16);
      recovered_10001c9e((long *)&local_40,&local_48,&local_34,uVar7,0x10,0);
      goto LAB_10001855;
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
      recovered_10001c55((long *)&local_40,&local_48,&local_34,(char *)*puVar4);
      goto LAB_10001855;
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
      goto LAB_10001b88;
    default:
      if (cVar2 == 'I') goto switchD_1000188f_caseD_64;
      if (cVar2 != 'X') goto switchD_1000188f_caseD_65;
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
      goto LAB_10001b8d;
    }
    uVar10 = 10;
LAB_10001b88:
    iVar8 = 0;
LAB_10001b8d:
    recovered_10001c9e((long *)&local_40,&local_48,&local_34,uVar7,uVar10,iVar8);
    goto LAB_10001855;
  }
  if (1 < local_48) {
    *local_40 = '%';
LAB_10001844:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
  goto LAB_10001852;
switchD_1000188f_caseD_68:
  cVar2 = format[1];
  format = format + 1;
  goto LAB_1000187c;
switchD_1000188f_caseD_63:
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
LAB_10001818:
    local_40 = local_40 + 1;
    local_48 = local_48 - 1;
  }
LAB_10001852:
  local_34 = local_34 + 1;
LAB_10001855:
  format = format + 1;
  goto LAB_100017f7;
}

#undef DAT_100059f0
#undef DAT_10005a00
#undef DAT_10005b16
#undef UNK_10005a08
#undef _DAT_10005a00
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c3c
 */

void recovered_10001c3c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10005aed
#define str_10005aed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c55
 */

void recovered_10001c55(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = str_10005aed;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10001c3c(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10005aed

#undef str_10005af4
#define str_10005af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10005b05
#define str_10005b05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#define uStack_50 (*(undefined8 *)(frame + 16))
#define local_48 (*(char (*)[32])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c9e
 */

void recovered_10001c9e(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[128] = {0};

  long lVar1;
  char *pcVar2;
  bool bVar3;

  pcVar2 = str_10005b05;
  if (param_6 != 0) {
    pcVar2 = str_10005af4;
  }
  lVar1 = 0;
  do {
    local_48[lVar1] = pcVar2[(ulong)param_4 % (ulong)param_5];
    lVar1 = lVar1 + 1;
    bVar3 = param_5 <= param_4;
    param_4 = param_4 / param_5;
  } while (bVar3);
  while (lVar1 != 0) {
    uStack_50 = 0x10001d01;
    recovered_10001c3c(param_1,param_2,param_3,local_48[lVar1 + -1]);
    lVar1 = lVar1 + -1;
  }
  return;
}

#undef str_10005af4
#undef str_10005b05
#undef uStack_50
#undef local_48

#define uStack0000000000000008 (*(undefined1 *)(frame + 240))
#define local_d8 (*(undefined1 (*)[24])(frame + 16))
#define local_c0 (*(undefined8 *)(frame + 40))
#define local_b8 (*(undefined8 *)(frame + 48))
#define local_b0 (*(undefined8 *)(frame + 56))
#define local_a8 (*(undefined8 *)(frame + 64))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d13
 */

int recovered_10001d13(char *out,ulong capacity,char *format,...)

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
  iVar1 = recovered_100017b5(out,capacity,format,&local_28);
  return iVar1;
}

#undef uStack0000000000000008
#undef local_d8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
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

#undef DAT_10007128
#define DAT_10007128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d86
 */

void recovered_10001d86(long param_1,ulong param_2,ulong *param_3)

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
    if (DAT_10007128 == 0) {
      puVar2 = (ulong *)&DAT_10007128;
    }
    else {
      puVar2 = (ulong *)(*param_3 + 8);
    }
    *puVar2 = (ulong)plVar1;
    *param_3 = (ulong)plVar1;
  }
  return;
}

#undef DAT_10007128

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
 * Address: 0x10001de6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10001de6(void)

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

#undef DAT_10007130
#define DAT_10007130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17beU)))
#undef DAT_10007140
#define DAT_10007140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e24
 */

void recovered_10001e24(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;

  if (param_1 != 0) {
    for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
      cVar2 = *(char *)(param_1 + lVar3);
      if (cVar2 == '\b') {
        if (DAT_10007130 != 0) {
          DAT_10007130 = DAT_10007130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10001ed1(1);
        }
        else {
          if (DAT_10007130 - 0x1ffU < 0xfffffffffffffe00) {
            recovered_10001ed1(0);
          }
          pcVar1 = &DAT_10007140 + DAT_10007130;
          DAT_10007130 = DAT_10007130 + 1;
          *pcVar1 = cVar2;
        }
      }
    }
  }
  return;
}

#undef DAT_10007130
#undef DAT_10007140

#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_10007130
#define DAT_10007130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x17beU)))
#undef DAT_10007140
#define DAT_10007140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ceU)))
#undef _DAT_00006840
#define _DAT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ed1(byte param_1)

{
  unsigned char frame[568] = {0};

  uchar uVar1;
  ulong uVar2;

  if ((DAT_10007130 == 0 & (param_1 ^ 1)) == 0) {
    if (DAT_10007130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10000b92(local_208,&DAT_10007140,DAT_10007130);
      uVar2 = DAT_10007130;
    }
    local_208[uVar2] = 0;
    uVar1 = recovered_10002bed();
    if ((uVar1 != '\0') && ((code *)(ulong)_DAT_00006840 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_00006840)(local_208);
    }
    DAT_10007130 = 0;
  }
  return;
}

#undef DAT_00006840
#undef DAT_10007130
#undef DAT_10007140
#undef _DAT_00006840
#undef local_208

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f4f
 */

void recovered_10001f4f(void)

{
  unsigned char frame[64] = {0};

  recovered_10001ed1(1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f5c
 */

void recovered_10001f5c(void)

{
  unsigned char frame[64] = {0};

  recovered_10001ed1(0);
  return;
}


#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10005b19
#define DAT_10005b19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f68
 */

void recovered_10001f68(char *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *format;

  format = &DAT_10005b19;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10005aec;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = recovered_10001d13(local_148,0x140,format,puVar2);
  if (0 < (int)uVar1) {
    recovered_10001e24((long)local_148,(ulong)uVar1);
  }
  return;
}

#undef DAT_10005aec
#undef DAT_10005b19
#undef local_148

#undef DAT_10005c03
#define DAT_10005c03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10005b1c
#define str_10005b1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
#undef str_10005b3f
#define str_10005b3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_10005b78
#define str_10005b78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_10005bad
#define str_10005bad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23bU)))
#undef str_10005bd3
#define str_10005bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x261U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbd
 */

void recovered_10001fbd(void)

{
  unsigned char frame[64] = {0};

  recovered_1000200a(str_10005b1c);
  recovered_1000200a(str_10005b3f);
  recovered_1000200a(str_10005b78);
  recovered_1000200a(str_10005bad);
  recovered_1000200a(str_10005bd3);
  recovered_1000200a(&DAT_10005c03);
  return;
}

#undef DAT_10005c03
#undef str_10005b1c
#undef str_10005b3f
#undef str_10005b78
#undef str_10005bad
#undef str_10005bd3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000200a
 */

void recovered_1000200a(char *param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar1 = recovered_10000d0b(param_1);
  recovered_10001e24((long)param_1,uVar1);
  return;
}


#undef DAT_10005c03
#define DAT_10005c03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10005c06
#define str_10005c06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000202f
 */

void recovered_1000202f(void)

{
  unsigned char frame[64] = {0};

  recovered_1000200a(str_10005c06);
  recovered_1000200a(&DAT_10005c03);
  return;
}

#undef DAT_10005c03
#undef str_10005c06

#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef _DAT_00006844
#define _DAT_00006844 (*(uint *)(0x6844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000204c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_1000204c(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;
  long in_RSI;
  long in_RDI;

  if (in_RSI != 0 && in_RDI != 0) {
    recovered_10001f5c();
    uVar1 = recovered_10002bed();
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
 * Address: 0x100020b1
 */

undefined8 recovered_100020b1(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b9
 */

void recovered_100020b9(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020bf
 */

undefined1 recovered_100020bf(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10005b19
#define DAT_10005b19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7U)))
#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
#undef str_10005c9a
#define str_10005c9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x328U)))
#undef str_10005ca7
#define str_10005ca7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x335U)))
#undef str_10005cb5
#define str_10005cb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
#define local_34 (*(uint *)(frame + 16))
#define local_30 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c7
 */

undefined4 * recovered_100020c7(char *param_1,long param_2)

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
    DAT_10007060 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10000d25(param_1,str_10005c9a);
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = recovered_10000d25(param_1,str_10005ca7);
    if (iVar4 == 0) {
      uVar1 = 2;
    }
    else {
      iVar4 = recovered_10000d25(param_1,str_10005cb5);
      if (iVar4 != 0) {
        puVar6 = recovered_10000af2(0x340);
        if (puVar6 == (undefined4 *)0x0) {
          DAT_10007060 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10000bfb(puVar6,0,0x340);
        *puVar6 = 0;
        uVar7 = recovered_10000db6();
        bVar9 = true;
        bVar8 = true;
        if (uVar7 == 0) {
          uVar7 = recovered_10000db6();
          bVar8 = true;
          if (uVar7 == 0) {
            uVar7 = recovered_10000db6();
            bVar8 = uVar7 != 0;
          }
        }
        *(bool *)(puVar6 + 0x49) = bVar8;
        uVar7 = recovered_10000db6();
        if ((uVar7 == 0) && (uVar7 = recovered_10000db6(), uVar7 == 0)) {
          uVar7 = recovered_10000db6();
          bVar9 = uVar7 != 0;
        }
        *(bool *)((long)puVar6 + 0x125) = bVar9;
        uVar7 = recovered_10000db6();
        *(bool *)((long)puVar6 + 0x126) = uVar7 != 0;
        puVar6[0x48] = 0xffffffff;
        recovered_10001d13((char *)(puVar6 + 1),0xf1,&DAT_10005b19,param_1);
        recovered_10000bfb(&local_34,0,0xc);
        uVar5 = recovered_1000236c();
        if (uVar5 == 0) {
          if (*(char *)((long)puVar6 + 0x125) == '\0') {
            DAT_10007060 = 2;
LAB_10002336:
            recovered_10000b27(puVar6);
            return (undefined4 *)0x0;
          }
        }
        else {
          uVar7 = recovered_10000db6();
          if (local_30 != 0 && uVar7 == 0) {
            if (*(char *)((long)puVar6 + 0x125) == '\x01') {
              uVar2 = recovered_100023a4();
              if (uVar2 == '\0') goto LAB_10002336;
              recovered_10000b92(*(void **)(puVar6 + 0x40),(void *)(ulong)local_34,(ulong)local_30);
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
  puVar6 = recovered_10000af2(0x340);
  if (puVar6 == (undefined4 *)0x0) {
    DAT_10007060 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10000bfb(puVar6,0,0x340);
  *puVar6 = uVar1;
  *(bool *)(puVar6 + 0x49) = iVar3 == 0;
  *(bool *)((long)puVar6 + 0x125) = iVar3 != 0;
  puVar6[0x48] = 0xffffffff;
  recovered_10001d13((char *)(puVar6 + 1),0xf1,&DAT_10005b19,param_1);
  return puVar6;
}

#undef DAT_10005b19
#undef DAT_10007060
#undef str_10005c9a
#undef str_10005ca7
#undef str_10005cb5
#undef local_34
#undef local_30

#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef _DAT_00006834
#define _DAT_00006834 (*(uint *)(0x6834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000236c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000236c(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002bed();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006834 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000239b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006834)();
  return uVar2;
}

#undef DAT_00006834
#undef _DAT_00006834

#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a4
 */

uchar recovered_100023a4(void)

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
    pvVar3 = recovered_10000b5a(*(void **)(in_RDI + 0x100),uVar2);
    if (pvVar3 != (void *)0x0) {
      *(void **)(in_RDI + 0x100) = pvVar3;
      *(ulong *)(in_RDI + 0x110) = uVar2;
      *(void **)(in_RDI + 0xf8) = pvVar3;
      return '\x01';
    }
    DAT_10007060 = 0xc;
    *(undefined1 *)(in_RDI + 0x129) = 1;
  }
  return '\0';
}

#undef DAT_10007060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000242a
 */

void recovered_1000242a(char *param_1,long param_2,void *param_3)

{
  unsigned char frame[64] = {0};

  if (param_3 != (void *)0x0) {
    recovered_10002453(param_3);
  }
  recovered_100020c7(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002453
 */

uint recovered_10002453(void *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100027ba();
    if (*(void **)((long)param_1 + 0x100) != (void *)0x0) {
      recovered_10000b27(*(void **)((long)param_1 + 0x100));
    }
    recovered_10000b27(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000248d
 */

long recovered_1000248d(long param_1,long param_2,long param_3,long param_4)

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
          uVar1 = recovered_10002513();
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
 * Address: 0x10002513
 */

uint recovered_10002513(void)

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
LAB_100025b3:
        *(ulong *)(in_RDI + 0xce) = uVar3 + 1;
        return (uint)*(byte *)((long)in_RDI + uVar3 + 0x12a);
      }
      uVar2 = recovered_1000204c();
      if (uVar2 != '\0') {
        uVar3 = recovered_10000d0b((char *)((long)in_RDI + 0x12a));
        *(ulong *)(in_RDI + 0xcc) = uVar3 + 1;
        *(undefined1 *)((long)in_RDI + uVar3 + 0x12a) = 10;
        *(undefined1 *)((long)in_RDI + *(long *)(in_RDI + 0xcc) + 0x12a) = 0;
        uVar3 = 0;
        goto LAB_100025b3;
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
 * Address: 0x10002605
 */

long recovered_10002605(void *param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10001e24((long)param_1,uVar4);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar4;
      goto LAB_1000271d;
    }
    if (*(char *)((long)param_4 + 0x126) != '\0') {
      *(undefined8 *)(param_4 + 0x46) = *(undefined8 *)(param_4 + 0x42);
    }
    uVar2 = recovered_100023a4();
    if (uVar2 != '\0') {
      uVar1 = *(ulong *)(param_4 + 0x42);
      uVar3 = *(ulong *)(param_4 + 0x46);
      if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
        recovered_10000bfb((void *)(uVar1 + *(long *)(param_4 + 0x40)),0,uVar3 - uVar1);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10000b92((void *)(uVar3 + *(long *)(param_4 + 0x40)),param_1,uVar4);
      uVar4 = uVar4 + *(long *)(param_4 + 0x46);
      *(ulong *)(param_4 + 0x46) = uVar4;
      if (*(ulong *)(param_4 + 0x42) < uVar4) {
        *(ulong *)(param_4 + 0x42) = uVar4;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_1000271d;
    }
  }
  param_3 = 0;
LAB_1000271d:
  return param_3;
}


#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000271e
 */

undefined8 recovered_1000271e(int *param_1,ulong param_2,int param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10007060 = 0x16;
    return 0xffffffffffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_1000272c;
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
LAB_1000272c:
  DAT_10007060 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffffffffffff;
}

#undef DAT_10007060

#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002797
 */

undefined8 recovered_10002797(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    DAT_10007060 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10007060

#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ba
 */

uint recovered_100027ba(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int *in_RDI;

  uVar2 = 0;
  if (((in_RDI != (int *)0x0) && (*in_RDI == 0)) && (*(char *)((long)in_RDI + 0x127) == '\x01')) {
    uVar1 = recovered_10002988();
    if (uVar1 == 0) {
      DAT_10007060 = 5;
      *(undefined1 *)((long)in_RDI + 0x129) = 1;
      uVar2 = 0xffffffff;
    }
    else {
      *(undefined1 *)((long)in_RDI + 0x127) = 0;
    }
  }
  return uVar2;
}

#undef DAT_10007060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000281e
 */

undefined1 recovered_1000281e(long param_1)

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
 * Address: 0x10002834
 */

undefined1 recovered_10002834(long param_1)

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
 * Address: 0x1000284a
 */

void recovered_1000284a(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002864
 */

ulong recovered_10002864(uint param_1,long param_2)

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


#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

undefined8 recovered_10002890(long param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 == 0) {
    DAT_10007060 = 0x16;
  }
  else {
    uVar1 = recovered_100028bb();
    if (uVar1 != 0) {
      return 0;
    }
    DAT_10007060 = 5;
  }
  return 0xffffffffffffffff;
}

#undef DAT_10007060

#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef _DAT_0000683c
#define _DAT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028bb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100028bb(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002bed();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_0000683c == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100028e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_0000683c)();
  return uVar2;
}

#undef DAT_0000683c
#undef _DAT_0000683c

#undef DAT_10007060
#define DAT_10007060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16eeU)))
#define local_2c (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028f0
 */

undefined8 recovered_100028f0(long param_1,long param_2)

{
  unsigned char frame[92] = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    DAT_10007060 = 0x16;
    return 0xffffffffffffffff;
  }
  recovered_10000bfb(local_2c,0,0xc);
  uVar1 = recovered_1000236c();
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = recovered_10002988();
    uVar2 = 5;
    if ((uVar1 != 0) && (uVar1 = recovered_100028bb(), uVar1 != 0)) {
      return 0;
    }
  }
  DAT_10007060 = uVar2;
  return 0xffffffffffffffff;
}

#undef DAT_10007060
#undef local_2c

#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006838
#define _DAT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002988
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10002988(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10002bed();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006838 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100029c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006838)();
  return uVar2;
}

#undef DAT_00006838
#undef _DAT_00006838

#define local_3c (*(uint *)(frame + 16))
#define local_38 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d3
 */

ulong recovered_100029d3(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_10000bfb(&local_3c,0,0xc);
    uVar1 = recovered_1000236c();
    if (uVar1 == 0) goto LAB_10002a66;
    out = recovered_10000af2((ulong)(local_38 + (local_38 == 0)));
    if (out != (void *)0x0) {
      if ((ulong)local_38 == 0) {
        uVar2 = 0;
      }
      else {
        recovered_10000b92(out,(void *)(ulong)local_3c,(ulong)local_38);
        uVar2 = (ulong)local_38;
      }
      *param_2 = out;
      *param_3 = uVar2;
      uVar2 = CONCAT71((int7)((ulong)out >> 8),1);
      goto LAB_10002a66;
    }
  }
  uVar2 = 0;
LAB_10002a66:
  return uVar2 & 0xffffffff;
}

#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a78
 */

undefined8 recovered_10002a78(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 extraout_var = 0;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return 0;
  }
  uVar1 = recovered_10002988();
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),uVar1 != 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa0
 */

undefined8 recovered_10002aa0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa8
 */

void recovered_10002aa8(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aae
 */

undefined8 recovered_10002aae(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab6
 */

undefined8 recovered_10002ab6(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002abe
 */

undefined8 recovered_10002abe(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac6
 */

long recovered_10002ac6(long param_1,char param_2,long param_3)

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
 * Address: 0x10002ae6
 */

int recovered_10002ae6(char *left,char *right,ulong size)

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


#undef DAT_10005c29
#define DAT_10005c29 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b7U)))
#undef str_10005c2c
#define str_10005c2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_10005c39
#define str_10005c39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_10005c43
#define str_10005c43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d1U)))
#undef str_10005c57
#define str_10005c57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_10005c65
#define str_10005c65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10005c77
#define str_10005c77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x305U)))
#undef str_10005c83
#define str_10005c83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x311U)))
#undef str_10005c94
#define str_10005c94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b14
 */

char * recovered_10002b14(int param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  switch((uintptr_t)(param_1)) {
  case 0:
    pcVar1 = &DAT_10005c29;
    break;
  case 2:
    pcVar1 = str_10005c2c;
    break;
  case 5:
    pcVar1 = str_10005c39;
    break;
  case 9:
    pcVar1 = str_10005c43;
    break;
  case 0xc:
    pcVar1 = str_10005c57;
    break;
  case 0xd:
    pcVar1 = str_10005c65;
    break;
  default:
    if (param_1 == 0x11) {
      return str_10005c77;
    }
    if (param_1 == 0x16) {
      return str_10005c83;
    }
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    pcVar1 = str_10005c94;
  }
  return pcVar1;
}

#undef DAT_10005c29
#undef str_10005c2c
#undef str_10005c39
#undef str_10005c43
#undef str_10005c57
#undef str_10005c65
#undef str_10005c77
#undef str_10005c83
#undef str_10005c94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc4
 */

undefined8 recovered_10002bc4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bcc
 */

undefined8 recovered_10002bcc(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffffffffffff;
}


#undef DAT_10007340
#define DAT_10007340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd5
 */

void recovered_10002bd5(void)

{
  unsigned char frame[64] = {0};

  DAT_10007340 = DAT_10007340 + 1;
  return;
}

#undef DAT_10007340

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
 * Address: 0x10002bed
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10002bed(void)

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
 * Address: 0x10002c30
 */

void recovered_10002c30(long param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))(param_1,param_2,*(code **)(param_1 + 0x48));
  return;
}


#define uStack0000000000000008 (*(undefined1 *)(frame + 40))
#define unaff_retaddr (*(undefined8 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3e
 */

undefined8 recovered_10002c3e(undefined8 *param_1)

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
 * Address: 0x10002c6b
 */

void recovered_10002c6b(long param_1,undefined4 param_2)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(code **)(param_1 + 0x38));
  return;
}


#undef DAT_10002cea
#define DAT_10002cea (*(uint8_t *)(0x10002ceaU))
#undef DAT_10005cd8
#define DAT_10005cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x366U)))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined1 (*)[8])(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined * *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c99
 */

double recovered_10002c99(void)

{
  unsigned char frame[184] = {0};

  code *pcVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = local_88;
  local_68 = recovered_10002d20;
  local_60 = &DAT_10005cd8;
  local_50 = &DAT_10002cea;
  local_80 = 1;
  recovered_1000316a();
  recovered_10000add();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10002cea
#undef DAT_10005cd8
#undef local_48
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef auStack_40
#undef local_58
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d20
 */

undefined8 recovered_10002d20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d23
 */

void recovered_10002d23(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002d40(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10002c99();
}


#undef DAT_10007348
#define DAT_10007348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

long recovered_10002d40(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x10) = DAT_10007348;
  *(undefined1 *)(param_1 + 0x28) = 0;
  DAT_10007348 = param_1;
  lVar1 = recovered_1000306f(param_1);
  return lVar1;
}

#undef DAT_10007348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d63
 */

void * recovered_10002d63(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000af2(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000add();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d8d
 */

void * recovered_10002d8d(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10002d63(size);
  return pvVar1;
}


#undef DAT_10005ce8
#define DAT_10005ce8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x376U)))
#undef LAB_10002e04
#define LAB_10002e04 (*(uint8_t *)(0x10002e04U))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d97
 */

void recovered_10002d97(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d20;
  local_60 = &DAT_10005ce8;
  local_50 = &LAB_10002e04;
  local_80 = 1;
  recovered_1000316a();
  recovered_10000b27(data);
  recovered_10003181(&local_88);
  return;
}

#undef DAT_10005ce8
#undef LAB_10002e04
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10005cf8
#define DAT_10005cf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x386U)))
#undef LAB_10002e9d
#define LAB_10002e9d (*(uint8_t *)(0x10002e9dU))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_48 (*(undefined1 * *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

void recovered_10002e30(void *data)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d20;
  local_60 = &DAT_10005cf8;
  local_50 = &LAB_10002e9d;
  local_80 = 1;
  recovered_1000316a();
  recovered_10000b27(data);
  recovered_10003181(&local_88);
  return;
}

#undef DAT_10005cf8
#undef LAB_10002e9d
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_10005d08
#define DAT_10005d08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x396U)))
#undef LAB_10002f35
#define LAB_10002f35 (*(uint8_t *)(0x10002f35U))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec8
 */

void recovered_10002ec8(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d20;
  local_60 = &DAT_10005d08;
  local_50 = &LAB_10002f35;
  local_80 = 1;
  recovered_1000316a();
  recovered_10000b27(param_1);
  recovered_10003181(&local_88);
  return;
}

#undef DAT_10005d08
#undef LAB_10002f35
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10005d18
#define DAT_10005d18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a6U)))
#undef LAB_10002fcd
#define LAB_10002fcd (*(uint8_t *)(0x10002fcdU))
#define local_58 (*(undefined1 * *)(frame + 64))
#define local_50 (*(undefined1 * *)(frame + 72))
#define local_48 (*(undefined1 * *)(frame + 80))
#define local_88 (*(undefined8 *)(frame + 16))
#define local_80 (*(undefined4 *)(frame + 24))
#define auStack_40 (*(undefined1 (*)[16])(frame + 88))
#define local_68 (*(code * *)(frame + 48))
#define local_60 (*(undefined * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

void recovered_10002f60(void *param_1)

{
  unsigned char frame[184] = {0};


  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  local_68 = recovered_10002d20;
  local_60 = &DAT_10005d18;
  local_50 = &LAB_10002fcd;
  local_80 = 1;
  recovered_1000316a();
  recovered_10000b27(param_1);
  recovered_10003181(&local_88);
  return;
}

#undef DAT_10005d18
#undef LAB_10002fcd
#undef local_58
#undef local_50
#undef local_48
#undef local_88
#undef local_80
#undef auStack_40
#undef local_68
#undef local_60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff8
 */

undefined8 recovered_10002ff8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003000
 */

uint recovered_10003000(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000300d
 */

void recovered_1000300d(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003016
 */

void recovered_10003016(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000301c
 */

long recovered_1000301c(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong uVar2;
  ulong size;

  size = param_1 + 0x30 + (ulong)(param_1 == 0);
  pvVar1 = recovered_10000af2(size);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002c99();
  }
  for (uVar2 = 0; size != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar2) = 0;
  }
  return (long)pvVar1 + 0x30;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000305a
 */

void recovered_1000305a(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10000b27((void *)(param_1 + -0x30));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000306f
 */

long recovered_1000306f(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_10007348
#define DAT_10007348 (*(void * *)(((uintptr_t)pf_module_state + 0x19d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003079
 */

void recovered_10003079(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  void *buffer;

  buffer = DAT_10007348;
  if (DAT_10007348 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)DAT_10007348 + 0x10);
    DAT_10007348 = *(void **)((long)DAT_10007348 + 0x10);
    *puVar1 = 0;
    if (*(char *)((long)buffer + 0x28) == '\0') {
      if (*(code **)((long)buffer + 8) != (code *)0x0) {
        (**(code **)((long)buffer + 8))((long)buffer + 0x30);
      }
      recovered_10000b27(buffer);
      return;
    }
  }
  return;
}

#undef DAT_10007348

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c5
 */

void recovered_100030c5(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
  recovered_100030e8();
  return;
}


#undef DAT_10007350
#define DAT_10007350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030e8
 */

/* WARNING: Removing unreachable block (ram,0x1000312c) */

void recovered_100030e8(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = &DAT_10007350;
  while (puVar1 = (undefined8 *)*puVar1, puVar1 != (undefined8 *)0x0) {
    recovered_100035a9();
  }
                    /* WARNING: Subroutine does not return */
  recovered_10002c99();
}

#undef DAT_10007350

#undef DAT_10007348
#define DAT_10007348 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19d6U)))
#undef DAT_10007350
#define DAT_10007350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003145
 */

void recovered_10003145(void)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10007348;
  if (DAT_10007348 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10002c99();
  }
  *(undefined1 *)(DAT_10007348 + 5) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  recovered_100030e8();
  *puVar1 = DAT_10007350;
  DAT_10007350 = puVar1;
  return;
}

#undef DAT_10007348
#undef DAT_10007350

#undef DAT_10007350
#define DAT_10007350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000316a
 */

double recovered_1000316a(void)

{
  unsigned char frame[64] = {0};

  undefined8 *in_RDI;
  double in_XMM0_Qa;

  *in_RDI = DAT_10007350;
  DAT_10007350 = in_RDI;
  return in_XMM0_Qa;
}

#undef DAT_10007350

#undef DAT_10007350
#define DAT_10007350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003181
 */

void recovered_10003181(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = DAT_10007350;
  if (DAT_10007350 == param_1) {
    puVar2 = &DAT_10007350;
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

#undef DAT_10007350

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b2
 */

void recovered_100031b2(void)

{
  unsigned char frame[64] = {0};

  recovered_100030e8();
                    /* WARNING: Subroutine does not return */
  recovered_10002c99();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031bb
 */

void recovered_100031bb(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002c99();
}


#undef DAT_10007350
#define DAT_10007350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031c4
 */

uint recovered_100031c4(void)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;
  long in_RDI;

  if (DAT_10007350 != (undefined8 *)0x0) {
    DAT_10007350 = (undefined8 *)*DAT_10007350;
  }
  recovered_100031e3(in_RDI);
  return extraout_EAX;
}

#undef DAT_10007350

#undef DAT_10007350
#define DAT_10007350 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e3
 */

/* WARNING: Removing unreachable block (ram,0x10003226) */
/* WARNING: Removing unreachable block (ram,0x1000324e) */

void recovered_100031e3(long param_1)

{
  unsigned char frame[64] = {0};

  undefined8 *puVar1;
  undefined8 in_RSI;

  while( true ) {
    puVar1 = DAT_10007350;
    if (DAT_10007350 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10002c99();
    }
    if (DAT_10007350 == *(undefined8 **)(param_1 + 0x18)) break;
    in_RSI = *(undefined8 *)param_1;
    recovered_100035a9();
    DAT_10007350 = (undefined8 *)*puVar1;
  }
  DAT_10007350[2] = param_1;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x20);
  recovered_10002c30((long)puVar1,in_RSI);
                    /* WARNING: Subroutine does not return */
  recovered_100031c4();
}

#undef DAT_10007350

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003264
 */

void recovered_10003264(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100031c4();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000326d
 */

undefined8 recovered_1000326d(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003275
 */

void recovered_10003275(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10002c99();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000327e
 */

long recovered_1000327e(long *param_1,undefined8 param_2,long param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uint uVar2;
  long lVar3;

  if (param_3 == 0 || param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(*param_1 + -0x10);
  uVar2 = recovered_100032be();
  lVar3 = 0;
  if ((char)uVar2 != '\0') {
    lVar3 = (long)param_1 + lVar1;
  }
  return lVar3;
}


#undef DAT_100070c0
#define DAT_100070c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032be
 */

uint recovered_100032be(void)

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
LAB_1000333a:
        return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
    }
    else {
      lVar6 = 0;
      do {
        cVar1 = *(char *)(in_RAX + lVar6);
        cVar2 = *(char *)(lVar3 + lVar6);
        if ((cVar1 == '\0') || (cVar2 == '\0')) {
          if (cVar1 == cVar2) goto LAB_1000333a;
          break;
        }
        lVar6 = lVar6 + 1;
      } while (cVar1 == cVar2);
    }
    in_RDI = (undefined8 *)0x0;
    if ((undefined *)*puVar5 == &DAT_100070c0) {
      in_RDI = (undefined8 *)puVar5[2];
    }
  } while( true );
}

#undef DAT_100070c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000333e
 */

void recovered_1000333e(void)

{
  unsigned char frame[64] = {0};

  recovered_10000add();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003348
 */

undefined8 recovered_10003348(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003350
 */

bool recovered_10003350(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003361
 */

bool recovered_10003361(uint param_1)

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
 * Address: 0x1000338b
 */

bool recovered_1000338b(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033ab
 */

bool recovered_100033ab(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033cd
 */

bool recovered_100033cd(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


#define in_stack_00000008 (*(undefined8 *)(frame + 40))
#define in_stack_00000010 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e8
 */

byte recovered_100033e8(void)

{
  unsigned char frame[64] = {0};


  return (in_stack_00000010 & 0x7fff) == 0 |
         (ushort)((in_stack_00000010 & 0x7fff) - 1) < 0x7ffe &
         (byte)((ulong)in_stack_00000008 >> 0x3f);
}

#undef in_stack_00000008
#undef in_stack_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000341b
 */

bool recovered_1000341b(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10005980
#define DAT_10005980 (*(double *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100059a8
#define DAT_100059a8 (*(double *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100059e8
#define DAT_100059e8 (*(double *)(((uintptr_t)pf_module_state + 0x76U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000343d
 */

double recovered_1000343d(double value)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001000(value);
  if (DAT_10005980 <= value - dVar1) {
    dVar1 = dVar1 + DAT_10005988;
  }
  else if (value - dVar1 <= DAT_100059e8) {
    dVar1 = dVar1 + DAT_100059a8;
  }
  return dVar1;
}

#undef DAT_10005980
#undef DAT_10005988
#undef DAT_100059a8
#undef DAT_100059e8

#undef DAT_00000000
#define DAT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003488
 */

long recovered_10003488(byte *param_1,undefined8 *param_2,uint param_3)

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
    goto LAB_100034be;
  }
  pbVar2 = (byte *)0x0;
  bVar3 = DAT_00000000;
LAB_100034be:
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
 * Address: 0x1000359f
 */

void recovered_1000359f(void)

{
  unsigned char frame[64] = {0};

  uint in_EDX;
  undefined8 *in_RSI;
  byte *in_RDI;

  recovered_10003488(in_RDI,in_RSI,in_EDX);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a9
 */

uchar recovered_100035a9(void)

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
      recovered_100037ad();
    }
    bVar6 = pcVar1[1];
    if (bVar6 == 0xff) {
      pcVar8 = (char *)0x0;
    }
    else {
      uVar3 = recovered_100038d4();
      pcVar8 = pcVar1 + uVar3 + 2;
    }
    uVar3 = recovered_100038d4();
    iVar7 = *(int *)(in_RDI + 8);
    if (0 < iVar7) {
      while (pcVar1 + 3 < pcVar1 + 3 + uVar3) {
        uVar4 = recovered_100038d4();
        uVar5 = recovered_100038d4();
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
            uVar3 = recovered_10003928();
            uVar4 = recovered_10003928();
            if (uVar3 == 0) {
              *(undefined1 *)((long)in_RDX + 1) = 1;
            }
            else if (0 < (long)uVar3) {
              if (((pcVar8 != (char *)0x0 && bVar6 < 0xd) && (~(byte)(0x1c1d >> bVar6) & 1) == 0) &&
                  0 < (int)uVar3) {
                recovered_100037ad();
              }
              uVar2 = recovered_100032be();
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
 * Address: 0x100037ad
 */

ulonglong recovered_100037ad(void)

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
    puVar2 = (undefined8 *)recovered_10003903();
    lVar4 = lVar1 + 8;
    goto LAB_10003870;
  case 1:
    puVar2 = (undefined8 *)recovered_100038d4();
    break;
  case 2:
    puVar2 = (undefined8 *)recovered_10003903();
    goto LAB_1000386c;
  case 3:
    puVar2 = (undefined8 *)recovered_10003903();
    goto LAB_1000382a;
  default:
    goto switchD_100037e9_caseD_5;
  case 9:
    puVar2 = (undefined8 *)recovered_10003928();
    break;
  case 10:
    uVar3 = recovered_10003903();
    puVar2 = (undefined8 *)((long)(short)uVar3 & 0xffffffffffff0000U | uVar3);
LAB_1000386c:
    lVar4 = lVar1 + 2;
LAB_10003870:
    *in_RSI = lVar4;
    break;
  case 0xb:
    uVar3 = recovered_10003903();
    puVar2 = (undefined8 *)((long)(int)uVar3 & 0xffffffff00000000U | uVar3);
LAB_1000382a:
    lVar4 = lVar1 + 4;
    goto LAB_10003870;
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
switchD_100037e9_caseD_5:
  return (ulonglong)puVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038d4
 */

ulonglong recovered_100038d4(void)

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
 * Address: 0x10003903
 */

ulonglong recovered_10003903(void)

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
 * Address: 0x10003928
 */

ulonglong recovered_10003928(void)

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


#undef DAT_000068a0
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10007358
#define DAT_10007358 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x19e6U)))
#undef _DAT_000068a0
#define _DAT_000068a0 (*(uint *)(0x68a0U))
#undef str_10005cc3
#define str_10005cc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x351U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003974
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * recovered_10003974(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;
  ulonglong *data;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;

  data = recovered_10002d63(0xd0);
  *data = 0;
  data[1] = 0;
  data[2] = 0;
  data[3] = 0;
  data[4] = 0;
  data[5] = 0xf6f6000000000000;
  *(undefined1 *)(data + 6) = 0xf6;
  *(undefined8 *)((long)data + 0x34) = 0;
  *(undefined2 *)((long)data + 0x3c) = 0;
  *(undefined1 *)((long)data + 0x3e) = 0;
  data[8] = 0;
  data[9] = 0;
  data[10] = 0;
  data[0xb] = 0;
  data[0xc] = 0;
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
  pcVar3 = str_10005cc3;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  recovered_10003ab8(data,(long)pcVar3);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)((long)data + 0x1c) = param_2;
  uVar4 = 1;
  if (1 < (int)param_3) {
    uVar4 = param_3;
  }
  *(uint *)(data + 4) = uVar4;
  *(uint *)((long)data + 0x34) = param_2 >> 1;
  *(uint *)(data + 7) = uVar4 >> 1;
  puVar5 = &DAT_10005aec;
  if ((undefined1 *)*data != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*data;
  }
  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_000068a0 == (code *)0x0)) {
    *(undefined4 *)(data + 3) = 0;
  }
  else {
    iVar2 = (*(code *)(ulong)_DAT_000068a0)(puVar5,param_2,uVar4);
    *(int *)(data + 3) = iVar2;
    if (iVar2 != 0) {
      DAT_10007358 = data;
      recovered_10003b04(data);
      recovered_10003e90();
      return data;
    }
  }
  recovered_10003ae4(data);
  recovered_10002d97(data);
  return (ulonglong *)0x0;
}

#undef DAT_000068a0
#undef DAT_10005aec
#undef DAT_10007358
#undef _DAT_000068a0
#undef str_10005cc3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab8
 */

ulonglong * recovered_10003ab8(ulonglong *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_1000520b();
  recovered_10005140(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae4
 */

void recovered_10003ae4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000534e(param_1 + 8);
  recovered_10005132(param_1);
  return;
}


#undef DAT_000068a4
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10005d28
#define DAT_10005d28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b6U)))
#undef LAB_10003e3c
#define LAB_10003e3c (*(uint8_t *)(0x10003e3cU))
#undef _DAT_000068a4
#define _DAT_000068a4 (*(uint *)(0x68a4U))
#define local_d8 (*(uint (*)[4])(frame + 16))
#define local_c8 (*(undefined8 *)(frame + 32))
#define local_c0 (*(undefined4 *)(frame + 40))
#define local_a8 (*(code * *)(frame + 64))
#define local_a0 (*(undefined * *)(frame + 72))
#define local_98 (*(undefined1 * *)(frame + 80))
#define local_90 (*(undefined1 * *)(frame + 88))
#define local_88 (*(undefined1 * *)(frame + 96))
#define local_70 (*(ulong *)(frame + 120))
#define local_64 (*(int *)(frame + 132))
#define local_60 (*(undefined8 * *)(frame + 136))
#define local_58 (*(void * *)(frame + 144))
#define local_48 (*(undefined8 *)(frame + 160))
#define local_40 (*(undefined8 *)(frame + 168))
#define local_38 (*(undefined8 *)(frame + 176))
#define uStack_50 (*(undefined8 *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003b04(undefined8 *param_1)

{
  unsigned char frame[264] = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uchar uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined1 *puVar21;

  local_98 = (undefined1 *)((long)(uintptr_t)(frame + 232) + -8);
  local_88 = (undefined1 *)local_d8;
  local_a8 = recovered_10002d20;
  local_a0 = &DAT_10005d28;
  local_90 = &LAB_10003e3c;
  recovered_1000316a();
  if ((param_1 != (undefined8 *)0x0) && (iVar19 = *(int *)(param_1 + 3), iVar19 != 0)) {
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    local_70 = 1;
    if (1 < (int)uVar4) {
      local_70 = (ulong)uVar4;
    }
    iVar8 = *(int *)(param_1 + 4);
    local_64 = 1;
    if (1 < iVar8) {
      local_64 = iVar8;
    }
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = param_1;
    if (((param_1[9] == 0) || (*(int *)(param_1 + 0xb) < 1)) || (*(int *)((long)param_1 + 0x5c) < 1)
       ) {
      local_40 = 0;
      local_38 = (void *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (void *)((long)(int)uVar4 * (long)iVar8 * 4);
      local_c0 = 1;
      recovered_10005360();
      for (uVar10 = 0; uVar10 < local_38; uVar10 = uVar10 + 4) {
        *(undefined1 *)((long)local_58 + uVar10) = *(undefined1 *)((long)local_60 + 0x2e);
        *(undefined1 *)((long)local_58 + uVar10 + 1) = *(undefined1 *)((long)local_60 + 0x2f);
        *(undefined1 *)((long)local_58 + uVar10 + 2) = *(undefined1 *)(local_60 + 6);
        *(undefined1 *)((long)local_58 + uVar10 + 3) = 0xff;
      }
      uVar4 = *(uint *)((long)local_60 + 0x1c);
      uVar7 = (uint)(((long)(int)uVar4 * (long)*(int *)((long)local_60 + 0x5c)) /
                    (long)*(int *)(local_60 + 0xb));
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      uVar5 = *(uint *)(local_60 + 4);
      uVar15 = uVar4;
      if ((int)uVar5 < (int)uVar7) {
        uVar7 = (uint)(((long)(int)uVar5 * (long)*(int *)(local_60 + 0xb)) /
                      (long)*(int *)((long)local_60 + 0x5c));
        uVar15 = 1;
        if (1 < (int)uVar7) {
          uVar15 = uVar7;
        }
        uVar7 = uVar5;
      }
      uVar10 = 0;
      if (0 < (int)uVar15) {
        uVar10 = (ulong)uVar15;
      }
      lVar16 = (long)((int)(uVar5 - uVar7) / 2);
      uVar17 = 0;
      if (0 < (int)uVar7) {
        uVar17 = (ulong)uVar7;
      }
      for (uVar14 = 0; uVar14 != uVar17; uVar14 = uVar14 + 1) {
        iVar8 = ((int)uVar14 * *(int *)((long)local_60 + 0x5c)) / (int)uVar7;
        iVar19 = *(int *)((long)local_60 + 0x5c) + -1;
        if (iVar8 <= iVar19) {
          iVar19 = iVar8;
        }
        if (iVar8 < 0) {
          iVar19 = 0;
        }
        for (uVar20 = 0; uVar10 != uVar20; uVar20 = uVar20 + 1) {
          iVar8 = *(int *)(local_60 + 0xb);
          iVar9 = ((int)uVar20 * iVar8) / (int)uVar15;
          iVar12 = iVar8 + -1;
          if (iVar9 <= iVar8 + -1) {
            iVar12 = iVar9;
          }
          iVar18 = 0;
          if (-1 < iVar9) {
            iVar18 = iVar12;
          }
          lVar11 = (long)iVar18 + (long)iVar8 * (long)iVar19;
          lVar13 = *(int *)((long)local_60 + 0x1c) * lVar16 + (long)((int)(uVar4 - uVar15) / 2) +
                   uVar20;
          *(undefined1 *)((long)local_58 + lVar13 * 4) = *(undefined1 *)(local_60[8] + lVar11 * 4);
          *(undefined1 *)((long)local_58 + lVar13 * 4 + 1) =
               *(undefined1 *)(local_60[8] + 1 + lVar11 * 4);
          *(undefined1 *)((long)local_58 + lVar13 * 4 + 2) =
               *(undefined1 *)(local_60[8] + 2 + lVar11 * 4);
          *(undefined1 *)((long)local_58 + lVar13 * 4 + 3) =
               *(undefined1 *)(local_60[8] + 3 + lVar11 * 4);
        }
        lVar16 = lVar16 + 1;
      }
      local_38 = local_58;
      iVar19 = *(int *)(local_60 + 3);
    }
    puVar21 = &DAT_10005aec;
    if ((undefined1 *)*local_60 != (undefined1 *)0x0) {
      puVar21 = (undefined1 *)*local_60;
    }
    bVar1 = *(byte *)((long)local_60 + 0x2e);
    bVar2 = *(byte *)((long)local_60 + 0x2f);
    bVar3 = *(byte *)(local_60 + 6);
    local_58 = local_38;
    uVar6 = recovered_10005311();
    if ((uVar6 != '\0') && ((code *)(ulong)_DAT_000068a4 != (code *)0x0)) {
      local_d8[0] = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
      local_c0 = 2;
      local_40 = (*(code *)(ulong)_DAT_000068a4)
                           (iVar19,puVar21,local_38,local_70,local_64,(int)local_70 * 4);
    }
    *(bool *)((long)local_60 + 0x2d) = (int)local_40 != 0;
    uStack_50 = 0;
    recovered_10002d97(local_58);
  }
  recovered_10003181(&local_c8);
  return;
}

#undef DAT_000068a4
#undef DAT_10005aec
#undef DAT_10005d28
#undef LAB_10003e3c
#undef _DAT_000068a4
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_38
#undef uStack_50

#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10003e90(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  int iVar2;
  long in_RDI;

  if (in_RDI == 0) {
    return '\0';
  }
  iVar2 = *(int *)(in_RDI + 0x18);
  if (iVar2 == 0) {
    uVar1 = '\0';
  }
  else {
    uVar1 = recovered_10005311();
    if (((uVar1 == '\0') || ((code *)(ulong)_DAT_000068b4 == (code *)0x0)) ||
       (iVar2 = (*(code *)(ulong)_DAT_000068b4)(iVar2,in_RDI + 0x60), iVar2 == 0)) {
      uVar1 = '\0';
    }
    else {
      *(undefined8 *)(in_RDI + 0x24) = *(undefined8 *)(in_RDI + 0x88);
      uVar1 = '\x01';
      if ((*(byte *)(in_RDI + 0x84) & 1) == 0) {
        return '\x01';
      }
    }
    *(undefined1 *)(in_RDI + 0x2c) = 1;
  }
  return uVar1;
}

#undef DAT_000068b4
#undef _DAT_000068b4

#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ef9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003ef9(long param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uchar uVar4;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      uVar4 = recovered_10005311();
      if ((uVar4 != '\0') && ((code *)(ulong)_DAT_000068b0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10003f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_000068b0)(iVar1,uVar2,uVar3,1,1);
        return;
      }
    }
  }
  return;
}

#undef DAT_000068b0
#undef _DAT_000068b0

#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef DAT_10007358
#define DAT_10007358 (*(void * *)(((uintptr_t)pf_module_state + 0x19e6U)))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f5a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f5a(void *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uchar uVar2;

  if (param_1 == (void *)0x0) {
    return;
  }
  if (DAT_10007358 == param_1) {
    DAT_10007358 = (void *)0x0;
  }
  iVar1 = *(int *)((long)param_1 + 0x18);
  if (iVar1 != 0) {
    uVar2 = recovered_10005311();
    if ((uVar2 != '\0') && ((code *)(ulong)_DAT_000068a8 != (code *)0x0)) {
      (*(code *)(ulong)_DAT_000068a8)(iVar1);
    }
  }
  recovered_10003ae4(param_1);
  recovered_10002d97(param_1);
  return;
}

#undef DAT_000068a8
#undef DAT_10007358
#undef _DAT_000068a8

#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10005d30
#define DAT_10005d30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef LAB_1000409f
#define LAB_1000409f (*(uint8_t *)(0x1000409fU))
#define lStack_40 (*(long *)(frame + 120))
#define local_a8 (*(undefined8 *)(frame + 16))
#define local_a0 (*(undefined4 *)(frame + 24))
#define local_88 (*(code * *)(frame + 48))
#define local_80 (*(undefined * *)(frame + 56))
#define local_78 (*(undefined1 * *)(frame + 64))
#define local_70 (*(undefined1 * *)(frame + 72))
#define local_68 (*(undefined1 * *)(frame + 80))
#define local_50 (*(void * *)(frame + 104))
#define local_48 (*(undefined1 * *)(frame + 112))
#define local_38 (*(undefined8 *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb7
 */

void * recovered_10003fb7(undefined8 *param_1)

{
  unsigned char frame[216] = {0};

  void *pvVar1;
  undefined1 *data;
  ulong size;

  local_78 = (undefined1 *)((long)(uintptr_t)(frame + 184) + -8);
  local_68 = (undefined1 *)&local_a8;
  local_88 = recovered_10002d20;
  local_80 = &DAT_10005d30;
  local_70 = &LAB_1000409f;
  recovered_1000316a();
  if (param_1 == (undefined8 *)0x0) {
    local_48 = (undefined1 *)0x0;
    lStack_40 = 0;
    local_38 = 0;
    size = 1;
  }
  else {
    local_a0 = 0xffffffff;
    recovered_1000540e(&local_48,param_1);
    size = lStack_40 + 1;
  }
  local_a0 = 1;
  local_50 = recovered_10002d8d(size);
  data = &DAT_10005aec;
  if (local_48 != (undefined1 *)0x0) {
    data = local_48;
  }
  local_a0 = 2;
  recovered_10000b92(local_50,data,lStack_40 + 1);
  pvVar1 = local_50;
  recovered_10002d97(local_48);
  recovered_10003181(&local_a8);
  return pvVar1;
}

#undef DAT_10005aec
#undef DAT_10005d30
#undef LAB_1000409f
#undef lStack_40
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e8
 */

void recovered_100040e8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004114
 */

void recovered_10004114(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  iVar1 = 1;
  if (1 < param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  recovered_1000414b(param_1);
  recovered_10003b04((undefined8 *)param_1);
  return;
}


#undef DAT_10005ac0
#define DAT_10005ac0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14eU)))
#undef UNK_10005ac4
#define UNK_10005ac4 (*(uint *)(((uintptr_t)pf_module_state + 0x152U)))
#undef _DAT_10005ac0
#define _DAT_10005ac0 (*(uint *)(((uintptr_t)pf_module_state + 0x14eU)))
#undef uRam0000000010005ac4
#define uRam0000000010005ac4 (*(uint *)(((uintptr_t)pf_module_state + 0x152U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000414b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000414b(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;

  uVar4 = -(uint)((int)_DAT_10005ac0 < (int)*(uint *)(param_1 + 0x1c));
  uVar5 = -(uint)((int)uRam0000000010005ac4 < (int)*(uint *)(param_1 + 0x20));
  iVar2 = (~uVar4 & _DAT_10005ac0 | *(uint *)(param_1 + 0x1c) & uVar4) - 1;
  iVar3 = (~uVar5 & uRam0000000010005ac4 | *(uint *)(param_1 + 0x20) & uVar5) - 1;
  uVar1 = *(ulong *)(param_1 + 0x34);
  uVar6 = CONCAT44(-(uint)(iVar3 < (int)(uVar1 >> 0x20)),-(uint)(iVar2 < (int)uVar1));
  *(ulong *)(param_1 + 0x34) =
       ~CONCAT44(-(uint)((long)uVar1 < 0),-(uint)((int)uVar1 < 0)) &
       (~uVar6 & uVar1 | CONCAT44(iVar3,iVar2) & uVar6);
  return;
}

#undef DAT_10005ac0
#undef UNK_10005ac4
#undef _DAT_10005ac0
#undef uRam0000000010005ac4

#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041a4
 */

void recovered_100041a4(long param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_1 == 0) {
    return;
  }
  puVar1 = &DAT_10005aec;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  recovered_10003ab8((ulonglong *)param_1,(long)puVar1);
  recovered_10003b04((undefined8 *)param_1);
  return;
}

#undef DAT_10005aec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041d7
 */

void recovered_100041d7(long param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar1 = *(undefined1 **)(param_2 + 2), puVar1 == (undefined1 *)0x0)) ||
      ((long)*param_2 < 1)) || ((long)param_2[1] < 1)) {
    return;
  }
  recovered_10004238((long *)(param_1 + 0x40),puVar1,puVar1 + (long)*param_2 * (long)param_2[1] * 4)
  ;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_2;
  recovered_10003b04((undefined8 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004238
 */

void recovered_10004238(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100058ac(param_1,*param_1,param_2,param_3);
  return;
}


#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_0000687c
#define _DAT_0000687c (*(uint *)(0x687cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(uint *)(0x6880U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint *)(0x689cU))
#define local_98 (*(undefined1 (*)[16])(frame + 16))
#define local_88 (*(undefined1 (*)[16])(frame + 32))
#define local_78 (*(undefined1 (*)[16])(frame + 48))
#define local_68 (*(undefined4 *)(frame + 64))
#define local_58 (*(undefined1 (*)[16])(frame + 80))
#define local_48 (*(undefined1 (*)[16])(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004250(long param_1)

{
  unsigned char frame[200] = {0};

  int iVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint128 auVar8;

  if (param_1 == 0) {
    return;
  }
  (*(uint128 *)(void *)local_48) = (uint128)0x0;
  (*(uint128 *)(void *)local_58) = (uint128)0x0;
  recovered_10003e90();
  uVar3 = recovered_10005311();
  if (((uVar3 == '\0') || ((code *)(ulong)_DAT_00006880 == (code *)0x0)) ||
     (iVar4 = (*(code *)(ulong)_DAT_00006880)(local_58), iVar4 == 0)) goto LAB_100043fd;
  (*(uint128 *)(void *)local_78) = (uint128)0x0;
  (*(uint128 *)(void *)local_88) = (uint128)0x0;
  (*(uint128 *)(void *)local_98) = (uint128)0x0;
  local_68 = 0;
  uVar3 = recovered_10005311();
  bVar2 = 1;
  if (((uVar3 != '\0') && ((code *)(ulong)_DAT_0000687c != (code *)0x0)) &&
     (iVar4 = (*(code *)(ulong)_DAT_0000687c)(local_98), iVar4 != 0)) {
    PF_PART4(auVar8, 0) = -(uint)(PF_PART4(local_98, 8) == 0);
    PF_PART4(auVar8, 4) = -(uint)(PF_PART4(local_98, 12) == 0);
    PF_PART4(auVar8, 8) = -(uint)(PF_PART4(local_88, 0) == 0);
    PF_PART4(auVar8, 12) = -(uint)(SUB164((uint128)0x0,0xc) == PF_PART4(local_88, 4));
    iVar4 = movmskps(iVar4,auVar8);
    if (((iVar4 == 0) && (PF_PART4(local_88, 8) == 0x20)) &&
       ((PF_PART4(local_88, 12) != 0 &&
        ((((PF_PART4(local_78, 4) != 0 && (PF_PART8(local_98, 0) != 0)) && (PF_PART4(local_78, 12) != 0)) &&
         ((uint)PF_PART4(local_88, 0) <= (uint)PF_PART4(local_98, 12) >> 2)))))) {
      bVar2 = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x28);
  if (((byte)local_58[0] & 2) == 0) {
LAB_1000438a:
    if (!(bool)(bVar2 | ((byte)local_58[0] & 1) == 0)) {
      uVar5 = recovered_1000543b();
      uVar6 = recovered_1000543b();
      *(uint *)(param_1 + 0x34) = (uVar5 - iVar4) + -0xe;
      iVar4 = (uVar6 - iVar1) + -0x26;
      goto LAB_100043c2;
    }
  }
  else {
    if (PF_PART4(local_48, 0) == 0 && PF_PART4(local_48, 4) == 0) goto LAB_1000438a;
    *(int *)(param_1 + 0x34) = PF_PART4(local_48, 0) + *(int *)(param_1 + 0x34);
    iVar4 = PF_PART4(local_48, 4) + *(int *)(param_1 + 0x38);
LAB_100043c2:
    *(int *)(param_1 + 0x38) = iVar4;
  }
  bVar7 = (*(uint *)(param_1 + 0x84) & 6) == 2;
  *(byte *)(param_1 + 0x3c) = local_58[4] & bVar7;
  *(byte *)(param_1 + 0x3d) = (byte)(((byte)local_58[4] & 2) >> 1) & bVar7;
  *(byte *)(param_1 + 0x3e) = (byte)(((byte)local_58[4] & 4) >> 2) & bVar7;
  recovered_1000414b(param_1);
LAB_100043fd:
  recovered_1000443b();
  if (*(char *)(param_1 + 0x2d) == '\0') {
    recovered_10003b04((undefined8 *)param_1);
  }
  uVar3 = recovered_10005311();
  if ((uVar3 != '\0') && ((code *)(ulong)_DAT_0000689c != (code *)0x0)) {
    (*(code *)(ulong)_DAT_0000689c)();
  }
  return;
}

#undef DAT_0000687c
#undef DAT_00006880
#undef DAT_0000689c
#undef _DAT_0000687c
#undef _DAT_00006880
#undef _DAT_0000689c
#undef local_98
#undef local_88
#undef local_78
#undef local_68
#undef local_58
#undef local_48

#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef DAT_100070f0
#define DAT_100070f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177eU)))
#undef DAT_100070f1
#define DAT_100070f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177fU)))
#undef DAT_100070f2
#define DAT_100070f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1780U)))
#undef DAT_100070f3
#define DAT_100070f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1781U)))
#undef DAT_100070f4
#define DAT_100070f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1782U)))
#undef DAT_10007119
#define DAT_10007119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a7U)))
#undef DAT_1000711a
#define DAT_1000711a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a8U)))
#undef DAT_1000711b
#define DAT_1000711b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a9U)))
#undef DAT_1000711c
#define DAT_1000711c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aaU)))
#undef DAT_1000711d
#define DAT_1000711d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17abU)))
#undef DAT_1000711e
#define DAT_1000711e (*(byte *)(((uintptr_t)pf_module_state + 0x17acU)))
#undef DAT_10007358
#define DAT_10007358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19e6U)))
#undef DAT_10007360
#define DAT_10007360 (*(int *)(((uintptr_t)pf_module_state + 0x19eeU)))
#undef PTR_DAT_10006000
#define PTR_DAT_10006000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x68eU)))
#undef _DAT_0000682c
#define _DAT_0000682c (*(uint *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000443b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000443b(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;

  recovered_100048a0();
  lVar1 = DAT_10007358;
  if (((DAT_10007358 == 0) || (uVar2 = recovered_10003e90(), uVar2 == '\0')) ||
     ((*(uint *)(lVar1 + 0x84) & 6) != 2)) {
    return;
  }
switchD_1000464a_caseD_49:
  do {
    do {
      uVar2 = recovered_10005311();
      if (uVar2 == '\0') {
        return;
      }
      if ((code *)(ulong)_DAT_0000682c == (code *)0x0) {
        return;
      }
      uVar5 = (*(code *)(ulong)_DAT_0000682c)();
      uVar4 = (uint)uVar5;
      if (uVar4 == 0) {
        return;
      }
      uVar7 = (uint)(uVar5 >> 8) & 0xff;
      bVar3 = (byte)uVar5;
      if (bVar3 == 0) goto LAB_10004501;
    } while (DAT_10007358 == 0);
    uVar6 = uVar4 & 0xff;
    if (DAT_10007360 == 2) {
      DAT_10007360 = 0;
      switch((uintptr_t)(uVar6)) {
      case 0x41:
        DAT_100070f1 = 1;
        break;
      case 0x42:
        DAT_100070f2 = 1;
        break;
      case 0x43:
        DAT_100070f4 = 1;
        break;
      case 0x44:
        DAT_100070f3 = 1;
      }
    }
    else if (DAT_10007360 == 1) {
      DAT_10007360 = (uint)(bVar3 == 0x5b) * 2;
    }
    else if (bVar3 == 0x1b) {
      DAT_10007360 = 1;
    }
    else if ((byte)(bVar3 - 0x20) < 0x5f) {
      DAT_1000711e = bVar3;
      if (0x19 < (byte)(bVar3 + 0x9f)) {
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          if ((byte)(uVar4 - 0x30) < 10) {
            *(&PTR_DAT_10006000)[uVar4 - 0x30 & 0xff] = 1;
            goto switchD_100045e3_caseD_5;
          }
          goto LAB_100045cd;
        }
        uVar5 = (ulong)(bVar3 | 0x20);
      }
      recovered_10005478((char)uVar5);
    }
    else {
LAB_100045cd:
      switch((uintptr_t)(uVar6)) {
      case 3:
      case 4:
        *(undefined1 *)(DAT_10007358 + 0x2c) = 1;
        break;
      case 5:
      case 6:
      case 7:
      case 9:
      case 0xb:
      case 0xc:
        break;
      case 8:
switchD_100045e3_caseD_8:
        DAT_1000711b = 1;
        break;
      case 10:
      case 0xd:
        DAT_100070f0 = 1;
        break;
      default:
        if (uVar6 == 0x20) {
          DAT_1000711d = 1;
        }
        else if (uVar6 == 0x2d) {
          DAT_10007119 = 1;
        }
        else if (uVar6 == 0x2e) {
          DAT_1000711a = 1;
        }
        else if (uVar6 == 0x7f) goto switchD_100045e3_caseD_8;
      }
    }
switchD_100045e3_caseD_5:
  } while (DAT_10007358 == 0);
  goto LAB_1000463a;
LAB_10004501:
  if (DAT_10007358 == 0) goto switchD_1000464a_caseD_49;
  switch((uintptr_t)(uVar7)) {
  case 1:
switchD_1000464a_caseD_48:
    DAT_100070f1 = 1;
    goto switchD_1000464a_caseD_49;
  case 2:
switchD_1000464a_caseD_50:
    DAT_100070f2 = 1;
    goto switchD_1000464a_caseD_49;
  case 3:
switchD_1000464a_caseD_4d:
    DAT_100070f4 = 1;
    goto switchD_1000464a_caseD_49;
  case 4:
switchD_1000464a_caseD_4b:
    DAT_100070f3 = 1;
    goto switchD_1000464a_caseD_49;
  }
  if (uVar7 != 0x17) {
LAB_1000463a:
    switch((uintptr_t)(uVar7)) {
    case 0x48:
      goto switchD_1000464a_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_1000464a_caseD_49;
    case 0x4b:
      goto switchD_1000464a_caseD_4b;
    case 0x4d:
      goto switchD_1000464a_caseD_4d;
    case 0x50:
      goto switchD_1000464a_caseD_50;
    case 0x53:
      DAT_1000711c = 1;
      goto switchD_1000464a_caseD_49;
    default:
      if (uVar7 != 1) {
        if (uVar7 == 0xe) {
          DAT_1000711b = 1;
        }
        else if (uVar7 == 0x1c) {
          DAT_100070f0 = 1;
        }
        goto switchD_1000464a_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_10007358 + 0x2c) = 1;
  goto switchD_1000464a_caseD_49;
}

#undef DAT_0000682c
#undef DAT_100070f0
#undef DAT_100070f1
#undef DAT_100070f2
#undef DAT_100070f3
#undef DAT_100070f4
#undef DAT_10007119
#undef DAT_1000711a
#undef DAT_1000711b
#undef DAT_1000711c
#undef DAT_1000711d
#undef DAT_1000711e
#undef DAT_10007358
#undef DAT_10007360
#undef PTR_DAT_10006000
#undef _DAT_0000682c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000474c
 */

undefined1 recovered_1000474c(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 1;
  }
  recovered_10003e90();
  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000476c
 */

void recovered_1000476c(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2e) = param_2;
  *(undefined1 *)(param_1 + 0x2f) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  recovered_10003b04((undefined8 *)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004787
 */

int * recovered_10004787(long param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  void *out;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong size;

  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_10002d63(0x20);
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    *piVar1 = iVar3;
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x20);
    }
    piVar1[1] = iVar4;
    size = (long)iVar4 * (long)iVar3 * 4;
    out = recovered_10002d8d(size);
    *(void **)(piVar1 + 2) = out;
    if (((*(long *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x58) != iVar3)) ||
       (*(int *)(param_1 + 0x5c) != iVar4)) {
      for (uVar2 = 0; uVar2 < size; uVar2 = uVar2 + 4) {
        *(undefined1 *)((long)out + uVar2) = *(undefined1 *)(param_1 + 0x2e);
        *(undefined1 *)((long)out + uVar2 + 1) = *(undefined1 *)(param_1 + 0x2f);
        *(undefined1 *)((long)out + uVar2 + 2) = *(undefined1 *)(param_1 + 0x30);
        *(undefined1 *)((long)out + uVar2 + 3) = 0xff;
      }
    }
    else {
      recovered_10000b92(out,*(void **)(param_1 + 0x40),size);
    }
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
  }
  return piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000484f
 */

void recovered_1000484f(long param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x34);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

undefined1 recovered_10004880(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_2 < 3 && param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x3c + (ulong)param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_100070f0
#define DAT_100070f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177eU)))
#undef DAT_100070f1
#define DAT_100070f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177fU)))
#undef DAT_100070f2
#define DAT_100070f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1780U)))
#undef DAT_100070f3
#define DAT_100070f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1781U)))
#undef DAT_100070f4
#define DAT_100070f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1782U)))
#undef DAT_100070f5
#define DAT_100070f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1783U)))
#undef DAT_100070f6
#define DAT_100070f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1784U)))
#undef DAT_100070f7
#define DAT_100070f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1785U)))
#undef DAT_100070f8
#define DAT_100070f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1786U)))
#undef DAT_100070f9
#define DAT_100070f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1787U)))
#undef DAT_100070fa
#define DAT_100070fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1788U)))
#undef DAT_100070fb
#define DAT_100070fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1789U)))
#undef DAT_100070fc
#define DAT_100070fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178aU)))
#undef DAT_100070fd
#define DAT_100070fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178bU)))
#undef DAT_100070fe
#define DAT_100070fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178cU)))
#undef DAT_100070ff
#define DAT_100070ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178dU)))
#undef DAT_10007100
#define DAT_10007100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178eU)))
#undef DAT_10007101
#define DAT_10007101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178fU)))
#undef DAT_10007102
#define DAT_10007102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1790U)))
#undef DAT_10007103
#define DAT_10007103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1791U)))
#undef DAT_10007104
#define DAT_10007104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1792U)))
#undef DAT_10007105
#define DAT_10007105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1793U)))
#undef DAT_10007106
#define DAT_10007106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1794U)))
#undef DAT_10007107
#define DAT_10007107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1795U)))
#undef DAT_10007108
#define DAT_10007108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1796U)))
#undef DAT_10007109
#define DAT_10007109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1797U)))
#undef DAT_1000710a
#define DAT_1000710a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1798U)))
#undef DAT_1000710b
#define DAT_1000710b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1799U)))
#undef DAT_1000710c
#define DAT_1000710c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179aU)))
#undef DAT_1000710d
#define DAT_1000710d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179bU)))
#undef DAT_1000710e
#define DAT_1000710e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179cU)))
#undef DAT_1000710f
#define DAT_1000710f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179dU)))
#undef DAT_10007110
#define DAT_10007110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179eU)))
#undef DAT_10007111
#define DAT_10007111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x179fU)))
#undef DAT_10007112
#define DAT_10007112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a0U)))
#undef DAT_10007113
#define DAT_10007113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a1U)))
#undef DAT_10007114
#define DAT_10007114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a2U)))
#undef DAT_10007115
#define DAT_10007115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a3U)))
#undef DAT_10007116
#define DAT_10007116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a4U)))
#undef DAT_10007117
#define DAT_10007117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a5U)))
#undef DAT_10007118
#define DAT_10007118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a6U)))
#undef DAT_10007119
#define DAT_10007119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a7U)))
#undef DAT_1000711a
#define DAT_1000711a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a8U)))
#undef DAT_1000711b
#define DAT_1000711b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a9U)))
#undef DAT_1000711c
#define DAT_1000711c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aaU)))
#undef DAT_1000711d
#define DAT_1000711d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17abU)))
#undef DAT_1000711e
#define DAT_1000711e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a0
 */

void recovered_100048a0(void)

{
  unsigned char frame[64] = {0};

  DAT_100070f0 = 0;
  DAT_100070f1 = 0;
  DAT_100070f2 = 0;
  DAT_100070f3 = 0;
  DAT_100070f4 = 0;
  DAT_100070f5 = 0;
  DAT_100070f6 = 0;
  DAT_100070f7 = 0;
  DAT_100070f8 = 0;
  DAT_100070f9 = 0;
  DAT_100070fa = 0;
  DAT_100070fb = 0;
  DAT_100070fc = 0;
  DAT_100070fd = 0;
  DAT_100070fe = 0;
  DAT_100070ff = 0;
  DAT_10007100 = 0;
  DAT_10007101 = 0;
  DAT_10007102 = 0;
  DAT_10007103 = 0;
  DAT_10007104 = 0;
  DAT_10007105 = 0;
  DAT_10007106 = 0;
  DAT_10007107 = 0;
  DAT_10007108 = 0;
  DAT_10007109 = 0;
  DAT_1000710a = 0;
  DAT_1000710b = 0;
  DAT_1000710c = 0;
  DAT_1000710d = 0;
  DAT_1000710e = 0;
  DAT_1000710f = 0;
  DAT_10007110 = 0;
  DAT_10007111 = 0;
  DAT_10007112 = 0;
  DAT_10007113 = 0;
  DAT_10007114 = 0;
  DAT_10007115 = 0;
  DAT_10007116 = 0;
  DAT_10007117 = 0;
  DAT_10007118 = 0;
  DAT_10007119 = 0;
  DAT_1000711a = 0;
  DAT_1000711b = 0;
  DAT_1000711c = 0;
  DAT_1000711d = 0;
  DAT_1000711e = 0;
  return;
}

#undef DAT_100070f0
#undef DAT_100070f1
#undef DAT_100070f2
#undef DAT_100070f3
#undef DAT_100070f4
#undef DAT_100070f5
#undef DAT_100070f6
#undef DAT_100070f7
#undef DAT_100070f8
#undef DAT_100070f9
#undef DAT_100070fa
#undef DAT_100070fb
#undef DAT_100070fc
#undef DAT_100070fd
#undef DAT_100070fe
#undef DAT_100070ff
#undef DAT_10007100
#undef DAT_10007101
#undef DAT_10007102
#undef DAT_10007103
#undef DAT_10007104
#undef DAT_10007105
#undef DAT_10007106
#undef DAT_10007107
#undef DAT_10007108
#undef DAT_10007109
#undef DAT_1000710a
#undef DAT_1000710b
#undef DAT_1000710c
#undef DAT_1000710d
#undef DAT_1000710e
#undef DAT_1000710f
#undef DAT_10007110
#undef DAT_10007111
#undef DAT_10007112
#undef DAT_10007113
#undef DAT_10007114
#undef DAT_10007115
#undef DAT_10007116
#undef DAT_10007117
#undef DAT_10007118
#undef DAT_10007119
#undef DAT_1000711a
#undef DAT_1000711b
#undef DAT_1000711c
#undef DAT_1000711d
#undef DAT_1000711e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c2
 */

void recovered_100049c2(void)

{
  unsigned char frame[64] = {0};

  recovered_100048a0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049cc
 */

void recovered_100049cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d2
 */

void recovered_100049d2(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d8
 */

undefined8 recovered_100049d8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e0
 */

void recovered_100049e0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049e6
 */

undefined8 recovered_100049e6(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#undef DAT_10005d38
#define DAT_10005d38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef LAB_10004e07
#define LAB_10004e07 (*(uint8_t *)(0x10004e07U))
#define local_130 (*(void * (*)[3])(frame + 24))
#define local_118 (*(long *)(frame + 48))
#define local_110 (*(undefined4 * *)(frame + 56))
#define local_108 (*(undefined4 * *)(frame + 64))
#define local_100 (*(char * *)(frame + 72))
#define local_f8 (*(void * *)(frame + 80))
#define local_e8 (*(undefined8 *)(frame + 96))
#define local_e0 (*(undefined4 *)(frame + 104))
#define local_c8 (*(code * *)(frame + 128))
#define local_c0 (*(undefined * *)(frame + 136))
#define local_b8 (*(undefined1 * *)(frame + 144))
#define local_b0 (*(undefined1 * *)(frame + 152))
#define local_a8 (*(undefined1 * *)(frame + 160))
#define local_90 (*(ulonglong *)(frame + 184))
#define local_80 (*(undefined8 *)(frame + 200))
#define local_78 (*(void * *)(frame + 208))
#define local_68 (*(undefined8 *)(frame + 224))
#define local_60 (*(void * *)(frame + 232))
#define local_58 (*(long *)(frame + 240))
#define local_48 (*(void * *)(frame + 256))
#define local_40 (*(void * *)(frame + 264))
#define local_34 (*(undefined4 *)(frame + 276))
#define auStack_138 (*(undefined1 (*)[8])(frame + 16))
#define pvStack_88 (*(void * *)(frame + 192))
#define uStack_70 (*(undefined8 *)(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049ee
 */

void * recovered_100049ee(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[360] = {0};

  uchar uVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;

  local_b8 = (undefined1 *)((long)(uintptr_t)(frame + 328) + -8);
  local_a8 = auStack_138;
  local_c8 = recovered_10002d20;
  local_c0 = &DAT_10005d38;
  local_b0 = &LAB_10004e07;
  recovered_1000316a();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    pvVar5 = (void *)0x0;
    goto LAB_10004de6;
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_e0 = 0xffffffff;
  recovered_1000587a();
  local_90 = 0;
  pvStack_88 = (void *)0x0;
  local_80 = 0;
  if (local_f8 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    pcVar3 = &DAT_10005aec;
    if (local_100 != (char *)0x0) {
      pcVar3 = local_100;
    }
    local_34 = (uint)CONCAT71((int7)((ulong)local_100 >> 8),*pcVar3 == '/');
  }
  pvVar5 = (void *)0x0;
  local_118 = param_1;
  local_110 = param_3;
  local_108 = param_2;
  do {
    if (local_f8 <= pvVar5) break;
    local_40 = (void *)recovered_1000549a();
    pvVar4 = local_40;
    if (local_40 == (void *)0xffffffffffffffff) {
      pvVar4 = local_f8;
    }
    local_e0 = 1;
    recovered_100054d0(&local_60,&local_100,(ulong)pvVar5,(long)pvVar4 - (long)pvVar5);
    if ((local_58 != 0) && (uVar1 = recovered_10004ef8(), uVar1 != '\0')) {
      uVar1 = recovered_10005522();
      if (uVar1 == '\0') {
LAB_10004b9f:
        local_e0 = 2;
        recovered_1000565a(&local_90,&local_60);
      }
      else if ((pvStack_88 == (void *)0x0) || (uVar1 = recovered_10004ef8(), uVar1 == '\0')) {
        if ((char)local_34 == '\0') goto LAB_10004b9f;
      }
      else {
        recovered_10005568((long *)&local_90);
      }
    }
    recovered_10002d97(local_60);
    pvVar5 = (void *)((long)local_40 + 1);
  } while (pvVar5 != (void *)0x0);
  local_e0 = 3;
  recovered_1000587a();
  pvVar4 = (void *)0x0;
  pvVar5 = (void *)0x0;
  while (pvVar5 < pvStack_88) {
    local_48 = pvVar5;
    local_40 = pvVar4;
    if (pvVar5 != (void *)0x0 || (local_34 & 1) != 0) {
      local_e0 = 4;
      recovered_10005592((long *)&local_60,0x2f);
    }
    local_e0 = 5;
    recovered_100055ea((long *)&local_60,(undefined8 *)(local_90 + (long)local_40));
    pvVar4 = (void *)((long)local_40 + 0x18);
    pvVar5 = (void *)((long)local_48 + 1);
  }
  if (local_58 == 0) {
    local_e0 = 6;
    recovered_1000587a();
  }
  else {
    local_e0 = 7;
    recovered_1000540e(local_130,&local_60);
  }
  recovered_10002d97(local_60);
  recovered_10005822((long *)&local_90);
  recovered_10002d97(local_100);
  local_e0 = 8;
  uVar2 = recovered_10004ec0();
  if (uVar2 == 0) {
    uVar1 = recovered_10004ef8();
    if (uVar1 != '\0') {
      local_e0 = 9;
      uVar2 = recovered_10004ec0();
      if (uVar2 != 0) goto LAB_10004d06;
    }
    pvVar5 = (void *)0x0;
  }
  else {
LAB_10004d06:
    pvVar5 = (void *)0x0;
    if (local_78 != (void *)0x0) {
      if ((((int)uStack_70 != 0) && (PF_PART4(uStack_70, 4) != 0)) && ((int)local_68 != 0)) {
        local_e0 = 10;
        local_40 = local_78;
        local_48 = recovered_10002d8d(uStack_70 & 0xffffffff);
        local_e0 = 0xb;
        recovered_10000b92(local_48,local_40,uStack_70 & 0xffffffff);
        local_e0 = 0xc;
        recovered_10004f05(local_40);
        if (local_108 != (undefined4 *)0x0) {
          *local_108 = PF_PART4(uStack_70, 4);
        }
        pvVar5 = local_48;
        if (local_110 != (undefined4 *)0x0) {
          *local_110 = (int)local_68;
        }
      }
    }
  }
  recovered_10002d97(local_130[0]);
LAB_10004de6:
  recovered_10003181(&local_e8);
  return pvVar5;
}

#undef DAT_10005aec
#undef DAT_10005d38
#undef LAB_10004e07
#undef local_130
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f8
#undef local_e8
#undef local_e0
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_90
#undef local_80
#undef local_78
#undef local_68
#undef local_60
#undef local_58
#undef local_48
#undef local_40
#undef local_34
#undef auStack_138
#undef pvStack_88
#undef uStack_70

#undef DAT_00006858
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#undef _DAT_00006858
#define _DAT_00006858 (*(uint *)(0x6858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004ec0(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  uint uVar2;

  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006858 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10004eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006858)();
  return uVar2;
}

#undef DAT_00006858
#undef _DAT_00006858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef8
 */

uchar recovered_10004ef8(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  bVar1 = recovered_10005522();
  return bVar1 ^ 1;
}


#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006850
#define _DAT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f05
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004f05(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006850 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10004f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_00006850)(param_1);
  return;
}

#undef DAT_00006850
#undef _DAT_00006850

#undef DAT_00006868
#define DAT_00006868 (*(uint8_t *)(0x6868U))
#undef _DAT_00006868
#define _DAT_00006868 (*(uint *)(0x6868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10004f38(undefined4 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006868 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10004f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_00006868)(param_1,param_2);
  return uVar2;
}

#undef DAT_00006868
#undef _DAT_00006868

#undef DAT_00006870
#define DAT_00006870 (*(uint8_t *)(0x6870U))
#undef _DAT_00006870
#define _DAT_00006870 (*(uint *)(0x6870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f77
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004f77(undefined4 param_1,undefined8 param_2)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006870 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10004fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_00006870)(param_1,param_2);
  return;
}

#undef DAT_00006870
#undef _DAT_00006870

#undef DAT_00006874
#define DAT_00006874 (*(uint8_t *)(0x6874U))
#undef DAT_10005988
#define DAT_10005988 (*(double *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_10005ae0
#define DAT_10005ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16eU)))
#undef _DAT_00006874
#define _DAT_00006874 (*(uint *)(0x6874U))
#undef _DAT_10005ae0
#define _DAT_10005ae0 (*(double *)(((uintptr_t)pf_module_state + 0x16eU)))
#define uStack_40 (*(uint *)(frame + 24))
#define uStack_3c (*(uint *)(frame + 28))
#define uStack_38 (*(uint *)(frame + 32))
#define uStack_34 (*(undefined4 *)(frame + 36))
#define local_48 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fb4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
recovered_10004fb4(double param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6)

{
  unsigned char frame[120] = {0};

  void *data;
  uchar uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *out;
  ulong size;
  double dVar4;

  local_48 = (void *)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (((param_3 != 0 && param_2 != 0) && (uVar1 = recovered_10005311(), uVar1 != '\0')) &&
     ((code *)(ulong)_DAT_00006874 != (code *)0x0)) {
    dVar4 = DAT_10005988;
    if (param_1 <= DAT_10005988) {
      dVar4 = param_1;
    }
    iVar2 = (*(code *)(ulong)_DAT_00006874)
                      (param_2,param_3,param_4,param_5,param_6,
                       (long)(double)(~-(ulong)(param_1 < 0.0) & (ulong)(dVar4 * _DAT_10005ae0)),
                       &local_48);
    data = local_48;
    if (iVar2 != 0) {
      if (uStack_38 != 0 && (uStack_3c != 0 && local_48 != (void *)0x0)) {
        size = (ulong)uStack_38 * (ulong)uStack_3c * 4;
        if ((ulong)uStack_40 != 0) {
          size = (ulong)uStack_40;
        }
        puVar3 = recovered_10002d63(0x20);
        *puVar3 = CONCAT44(uStack_38,uStack_3c);
        out = recovered_10002d8d(size);
        puVar3[1] = out;
        recovered_10000b92(out,data,size);
        puVar3[2] = 0;
        puVar3[3] = 0;
        recovered_10004f05(data);
        return puVar3;
      }
      if (local_48 != (void *)0x0) {
        recovered_10004f05(local_48);
      }
    }
  }
  return (undefined8 *)0x0;
}

#undef DAT_00006874
#undef DAT_10005988
#undef DAT_10005ae0
#undef _DAT_00006874
#undef _DAT_10005ae0
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef local_48

#undef DAT_00006878
#define DAT_00006878 (*(uint8_t *)(0x6878U))
#undef _DAT_00006878
#define _DAT_00006878 (*(uint *)(0x6878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050fe
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050fe(undefined8 param_1)

{
  unsigned char frame[64] = {0};

  uchar uVar1;

  uVar1 = recovered_10005311();
  if ((uVar1 == '\0') || ((code *)(ulong)_DAT_00006878 == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10005128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_00006878)(param_1);
  return;
}

#undef DAT_00006878
#undef _DAT_00006878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005132
 */

void recovered_10005132(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10002d97((void *)*param_1);
  return;
}


#define local_40 (*(void * *)(frame + 16))
#define local_38 (*(ulonglong *)(frame + 24))
#define local_28 (*(long *)(frame + 40))
#define uStack_30 (*(ulonglong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005140
 */

void recovered_10005140(ulonglong *param_1,long param_2,ulong param_3)

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
  uVar3 = recovered_10005226();
  if (uVar3 == '\0') {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (param_3 == 0) {
      recovered_10005264(param_1);
    }
    else {
      recovered_1000528a();
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
    recovered_100052e4(&local_40,local_28 + *param_1,uVar4);
    data = (void *)*param_1;
    *param_1 = (ulonglong)local_40;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    local_40 = data;
    local_38 = uVar1;
    uStack_30 = uVar2;
    recovered_10002d97(data);
  }
  return;
}

#undef local_40
#undef local_38
#undef local_28
#undef uStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000520b
 */

ulonglong recovered_1000520b(void)

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
 * Address: 0x10005226
 */

uchar recovered_10005226(void)

{
  unsigned char frame[64] = {0};

  uchar uVar1;
  long *in_RDX;
  long in_RSI;
  long lVar2;
  long *in_RDI;
  ulong uVar3;

  if (in_RSI == 0 || *in_RDI == 0) {
LAB_10005260:
    uVar1 = '\0';
  }
  else {
    lVar2 = in_RSI - *in_RDI;
    uVar3 = 0;
    do {
      if ((ulong)in_RDI[1] < uVar3) goto LAB_10005260;
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *in_RDX = lVar2;
    uVar1 = '\x01';
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005264
 */

void recovered_10005264(ulonglong *param_1)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  if (*param_1 == 0) {
    uVar1 = recovered_10005300();
    *param_1 = uVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000528a
 */

uint recovered_1000528a(void)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulonglong uVar1;
  ulong uVar2;
  ulong in_RSI;
  ulonglong *in_RDI;

  if (in_RDI[2] < in_RSI) {
    uVar1 = recovered_10005300();
    for (uVar2 = 0; uVar2 < in_RDI[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*in_RDI + uVar2);
    }
    *(undefined1 *)(uVar1 + in_RDI[1]) = 0;
    recovered_10002d97((void *)*in_RDI);
    *in_RDI = uVar1;
    in_RDI[2] = in_RSI;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e4
 */

void recovered_100052e4(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_3 = 0;
  }
  recovered_10005140(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005300
 */

ulonglong recovered_10005300(void)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  long in_RDI;

  puVar1 = recovered_10002d63(in_RDI + 1);
  *puVar1 = 0;
  return (ulonglong)puVar1;
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
 * Address: 0x10005311
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10005311(void)

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
 * Address: 0x1000534e
 */

void recovered_1000534e(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_10002d97((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

uint recovered_10005360(void)

{
  unsigned char frame[64] = {0};

  ulong in_RAX;
  ulong in_RSI;
  ulonglong *in_RDI;

  if (in_RSI < in_RDI[1]) {
    in_RDI[1] = in_RSI;
  }
  else if (in_RDI[1] < in_RSI) {
    recovered_100053a8(in_RDI,in_RSI);
    in_RAX = in_RDI[1];
    while (in_RAX < in_RSI) {
      *(undefined1 *)(*in_RDI + in_RAX) = 0;
      in_RAX = in_RDI[1] + 1;
      in_RDI[1] = in_RAX;
    }
  }
  return (uint)in_RAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053a8
 */

void recovered_100053a8(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  ulong uVar2;

  if (param_1[2] < param_2) {
    uVar1 = recovered_100053fa();
    for (uVar2 = 0; uVar2 < param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10002d97((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053fa
 */

ulonglong recovered_100053fa(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002d63(in_RDI);
  return (ulonglong)pvVar1;
}


#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000540e
 */

void recovered_1000540e(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_10005aec;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10005140(param_1,(long)puVar1,param_2[1]);
  return;
}

#undef DAT_10005aec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000543b
 */

uint recovered_1000543b(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int in_EDX;
  uint uVar2;
  uint in_ESI;
  uint in_EDI;

  uVar1 = 0;
  if (1 < in_EDX) {
    if (in_ESI == 0) {
      uVar2 = in_EDX - 1U;
      if (in_EDI <= in_EDX - 1U) {
        uVar2 = in_EDI;
      }
      uVar1 = 0;
      if (-1 < (int)in_EDI) {
        uVar1 = uVar2;
      }
    }
    else {
      if ((int)in_EDI < 1) {
        in_EDI = 0;
      }
      if (in_ESI <= in_EDI) {
        in_EDI = in_ESI;
      }
      uVar1 = (uint)(((ulong)(in_EDX - 1) * (ulong)in_EDI) / (ulong)in_ESI);
    }
  }
  return uVar1;
}


#undef PTR_DAT_10006050
#define PTR_DAT_10006050 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6deU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005478
 */

void recovered_10005478(char param_1)

{
  unsigned char frame[64] = {0};

  if ((byte)(param_1 + 0x9fU) < 0x1a) {
    *(&PTR_DAT_10006050)[(byte)(param_1 + 0x9fU)] = 1;
  }
  return;
}

#undef PTR_DAT_10006050

#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
#define local_18 (*(undefined1 * *)(frame + 16))
#define local_10 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000549a
 */

ulonglong recovered_1000549a(void)

{
  unsigned char frame[72] = {0};

  ulong uVar1;
  ulong in_RDX;
  char in_SIL;
  undefined8 *in_RDI;

  local_18 = &DAT_10005aec;
  if ((undefined1 *)*in_RDI != (undefined1 *)0x0) {
    local_18 = (undefined1 *)*in_RDI;
  }
  local_10 = in_RDI[1];
  uVar1 = recovered_1000560c((long *)&local_18,in_SIL,in_RDX);
  return uVar1;
}

#undef DAT_10005aec
#undef local_18
#undef local_10

#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054d0
 */

undefined8 * recovered_100054d0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  uVar2 = param_2[1];
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  uVar2 = uVar2 - param_3;
  uVar1 = param_4;
  if (uVar2 < param_4) {
    uVar1 = uVar2;
  }
  if (param_4 == 0xffffffffffffffff) {
    uVar1 = uVar2;
  }
  puVar3 = &DAT_10005aec;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_100052e4(param_1,(long)(puVar3 + param_3),uVar1);
  return param_1;
}

#undef DAT_10005aec

#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005522
 */

uchar recovered_10005522(void)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uchar uVar2;
  ulonglong uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  undefined1 *puVar4;

  lVar1 = in_RDI[1];
  puVar4 = &DAT_10005aec;
  if ((undefined1 *)*in_RDI != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*in_RDI;
  }
  uVar3 = recovered_1000520b();
  uVar2 = recovered_1000562f((long)puVar4,lVar1,in_RSI,uVar3);
  return uVar2;
}

#undef DAT_10005aec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005568
 */

void recovered_10005568(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10005132((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005592
 */

void recovered_10005592(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  long lVar1;

  if (param_1[1] == param_1[2]) {
    recovered_1000528a();
  }
  recovered_10005264((ulonglong *)param_1);
  lVar1 = param_1[1];
  param_1[1] = lVar1 + 1;
  *(undefined1 *)(*param_1 + lVar1) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005aec
#define DAT_10005aec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055ea
 */

void recovered_100055ea(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10005aec;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_1000575c(param_1,(long)puVar1,param_2[1]);
  return;
}

#undef DAT_10005aec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000560c
 */

ulong recovered_1000560c(long *param_1,char param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000562f
 */

undefined1 recovered_1000562f(long param_1,long param_2,long param_3,long param_4)

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
 * Address: 0x1000565a
 */

long recovered_1000565a(ulonglong *param_1,undefined8 *param_2)

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
    recovered_100056b2(param_1,uVar2);
    uVar1 = param_1[1];
  }
  recovered_1000540e((undefined8 *)(uVar1 * 0x18 + *param_1),param_2);
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  return uVar1 * 0x18 + *param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b2
 */

void recovered_100056b2(ulonglong *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long lVar2;
  ulong uVar3;

  if (param_1[2] < param_2) {
    uVar1 = recovered_10005724();
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < param_1[1]; uVar3 = uVar3 + 1) {
      recovered_1000573c((undefined8 *)(uVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_10005132((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10002d97((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005724
 */

ulonglong recovered_10005724(void)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  long in_RDI;

  if (in_RDI == 0) {
    return 0;
  }
  pvVar1 = recovered_10002d63(in_RDI * 0x18);
  return (ulonglong)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000573c
 */

void recovered_1000573c(undefined8 *param_1,undefined8 *param_2)

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
 * Address: 0x1000575c
 */

long * recovered_1000575c(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_3 != 0 && param_2 != 0) {
    uVar2 = recovered_10005226();
    uVar4 = param_1[1];
    if (uVar2 == '\0') {
      recovered_1000528a();
      for (uVar4 = 0; param_3 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(uVar4 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar4);
      }
    }
    else {
      if (uVar4 < param_3) {
        param_3 = uVar4;
      }
      recovered_1000528a();
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
 * Address: 0x10005822
 */

void recovered_10005822(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_1000583e(param_1);
  recovered_10002d97((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000583e
 */

void recovered_1000583e(long *param_1)

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
    recovered_10005132((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000587a
 */

double recovered_1000587a(void)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;
  long in_RSI;
  ulonglong *in_RDI;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Db = 0;

  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  uVar1 = recovered_1000520b();
  recovered_10005140(in_RDI,in_RSI,uVar1);
  return pf_bits_double(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058ac
 */

long recovered_100058ac(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_100053a8((ulonglong *)param_1,uVar2);
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

