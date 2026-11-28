/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x386U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c03
 */

void * recovered_10000c03(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002000;
}

#undef DAT_10002000

#undef DAT_1000201c
#define DAT_1000201c (*(void * *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef DAT_10002020
#define DAT_10002020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3a6U)))
#undef DAT_10002024
#define DAT_10002024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef DAT_10002028
#define DAT_10002028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_1000202c
#define DAT_1000202c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3b2U)))
#undef DAT_10002030
#define DAT_10002030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3b6U)))
#undef DAT_10002034
#define DAT_10002034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_10002038
#define DAT_10002038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef DAT_1000203c
#define DAT_1000203c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_10002040
#define DAT_10002040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_10002044
#define DAT_10002044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_10002050
#define DAT_10002050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d6U)))
#define local_19 (*(char (*)[25])(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c19
 */

/* WARNING: Removing unreachable block (ram,0x10000da8) */
/* WARNING: Removing unreachable block (ram,0x10000dbf) */
/* WARNING: Removing unreachable block (ram,0x10000dcc) */
/* WARNING: Removing unreachable block (ram,0x10000dd3) */
/* WARNING: Removing unreachable block (ram,0x10000ddd) */
/* WARNING: Removing unreachable block (ram,0x10000df5) */
/* WARNING: Removing unreachable block (ram,0x10000e17) */
/* WARNING: Removing unreachable block (ram,0x10000e5b) */
/* WARNING: Removing unreachable block (ram,0x10000e25) */
/* WARNING: Removing unreachable block (ram,0x10000e64) */
/* WARNING: Removing unreachable block (ram,0x10000e3b) */
/* WARNING: Removing unreachable block (ram,0x10000e59) */
/* WARNING: Removing unreachable block (ram,0x10000e6b) */
/* WARNING: Removing unreachable block (ram,0x10000e6d) */
/* WARNING: Removing unreachable block (ram,0x10000e81) */
/* WARNING: Removing unreachable block (ram,0x10000e8a) */
/* WARNING: Removing unreachable block (ram,0x10000e94) */
/* WARNING: Removing unreachable block (ram,0x10000eaf) */
/* WARNING: Removing unreachable block (ram,0x10000eb6) */
/* WARNING: Removing unreachable block (ram,0x10000ec4) */
/* WARNING: Removing unreachable block (ram,0x10000ec7) */
/* WARNING: Removing unreachable block (ram,0x10000ecf) */
/* WARNING: Removing unreachable block (ram,0x10000ed2) */
/* WARNING: Removing unreachable block (ram,0x10000eef) */
/* WARNING: Removing unreachable block (ram,0x10000ef3) */
/* WARNING: Removing unreachable block (ram,0x10000f03) */
/* WARNING: Removing unreachable block (ram,0x10000f0c) */
/* WARNING: Removing unreachable block (ram,0x10000f1c) */
/* WARNING: Removing unreachable block (ram,0x10000f6c) */
/* WARNING: Removing unreachable block (ram,0x10000f25) */
/* WARNING: Removing unreachable block (ram,0x10000f2f) */
/* WARNING: Removing unreachable block (ram,0x10000f38) */
/* WARNING: Removing unreachable block (ram,0x10000f42) */
/* WARNING: Removing unreachable block (ram,0x10000f64) */
/* WARNING: Removing unreachable block (ram,0x10000f6e) */
/* WARNING: Removing unreachable block (ram,0x10000f77) */
/* WARNING: Removing unreachable block (ram,0x10000fa2) */
/* WARNING: Removing unreachable block (ram,0x10000f7e) */
/* WARNING: Removing unreachable block (ram,0x10000fa4) */
/* WARNING: Removing unreachable block (ram,0x10000fac) */
/* WARNING: Removing unreachable block (ram,0x10000fb4) */

uint recovered_10000c19(void *api)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  int iVar3;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    DAT_1000201c = api;
    DAT_10002020 = 0;
    DAT_10002024 = 0;
    DAT_10002028 = 0;
    DAT_1000202c = 0;
    DAT_10002030 = 0;
    DAT_10002034 = 0;
    DAT_10002038 = 0;
    DAT_1000203c = 0;
    DAT_10002040 = 0;
    recovered_10000fc0(&DAT_10002044,0xc);
    recovered_10000fc0(&DAT_10002050,4);
    local_19[0] = '\0';
    uVar2 = recovered_100011cf(local_19);
    if (((uVar2 != 0) && (local_19[0] != -1)) &&
       ((bVar1 = recovered_10001210(), CONCAT31(extraout_var,bVar1) != 0 &&
        (bVar1 = recovered_10001210(), CONCAT31(extraout_var_00,bVar1) != 0)))) {
      recovered_10001254();
      bVar1 = recovered_1000129f();
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        local_19[1] = '`';
        local_19[2] = '\0';
        local_19[3] = '\0';
        local_19[4] = '\0';
        bVar1 = recovered_100012d1();
        if (CONCAT31(extraout_var_02,bVar1) != 0) {
          iVar3 = 3;
          while ((bVar1 = iVar3 != 0, iVar3 = iVar3 + -1, bVar1 &&
                 (bVar1 = recovered_10001210(), CONCAT31(extraout_var_03,bVar1) != 0))) {
            recovered_100014d2();
            recovered_10001466();
          }
        }
      }
      recovered_100012d1();
      recovered_10001210();
    }
    DAT_1000201c = (void *)0x0;
  }
  return 0;
}

#undef DAT_1000201c
#undef DAT_10002020
#undef DAT_10002024
#undef DAT_10002028
#undef DAT_1000202c
#undef DAT_10002030
#undef DAT_10002034
#undef DAT_10002038
#undef DAT_1000203c
#undef DAT_10002040
#undef DAT_10002044
#undef DAT_10002050
#undef local_19

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc0
 */

void recovered_10000fc0(void *data,uint bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (data != (void *)0x0) {
    while (bVar1 = bytes != 0, bytes = bytes - 1, bVar1) {
      *(undefined1 *)data = 0;
      data = (void *)((int)data + 1);
    }
  }
  return;
}


#undef DAT_1000201c
#define DAT_1000201c (*(int * *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_10001d00
#define str_10001d00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10001d4e
#define str_10001d4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_10001d66
#define str_10001d66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_10001d76
#define str_10001d76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_10001d84
#define str_10001d84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10aU)))
#undef str_10001dc6
#define str_10001dc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#define local_1d0 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1cc (*(undefined4 *)(pf_stack_frame + 20))
#define local_1c4 (*(undefined4 *)(pf_stack_frame + 28))
#define local_1bc (*(code * *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd9
 */

bool recovered_10000fd9(void)

{
  unsigned char pf_stack_frame[512] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  char *pcVar3;
  bool bVar4;

  recovered_10000fc0(&local_1d0,0x1bc);
  local_1d0 = 0x1bc;
  local_1cc = 1;
  local_1c4 = 0x13;
  local_1bc = recovered_10001599;
  if (in_ECX == 10) {
    local_1bc = recovered_10001581;
  }
  pcVar3 = str_10001dc6;
  pcVar1 = str_10001d00;
  if (in_ECX == 10) {
    pcVar3 = str_10001d84;
    pcVar1 = str_10001d4e;
  }
  recovered_100015b1(pcVar1);
  recovered_100015b1(str_10001d66);
  recovered_100015b1(str_10001d76);
  recovered_100015b1(pcVar3);
  bVar4 = false;
  if ((((DAT_1000201c != (int *)0x0) && (*DAT_1000201c == 0x54584b57)) &&
      (0xef < (uint)DAT_1000201c[2])) && ((code *)DAT_1000201c[0x3b] != (code *)0x0)) {
    iVar2 = (*(code *)DAT_1000201c[0x3b])(&local_1d0);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}

#undef DAT_1000201c
#undef str_10001d00
#undef str_10001d4e
#undef str_10001d66
#undef str_10001d76
#undef str_10001d84
#undef str_10001dc6
#undef local_1d0
#undef local_1cc
#undef local_1c4
#undef local_1bc

#undef DAT_1000201c
#define DAT_1000201c (*(int *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef DAT_10002028
#define DAT_10002028 (*(uint *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_1000202c
#define DAT_1000202c (*(uint *)(((uintptr_t)pf_module_state + 0x3b2U)))
#undef DAT_10002054
#define DAT_10002054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#undef DAT_10002154
#define DAT_10002154 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010de
 */

undefined4 recovered_100010de(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_1000201c == 0) {
    uVar1 = 0;
  }
  else {
    recovered_1000172a();
    if (DAT_10002028 == DAT_1000202c) {
      recovered_10001755();
    }
    uVar1 = 0;
    if (DAT_10002028 != DAT_1000202c) {
      uVar1 = *(undefined4 *)(&DAT_10002054 + DAT_10002028 * 4);
      DAT_10002028 = DAT_10002028 + 1 & 0x3f;
    }
    DAT_10002154 = 0;
  }
  return uVar1;
}

#undef DAT_1000201c
#undef DAT_10002028
#undef DAT_1000202c
#undef DAT_10002054
#undef DAT_10002154

#undef DAT_1000201c
#define DAT_1000201c (*(int *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef DAT_10002030
#define DAT_10002030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3b6U)))
#undef DAT_10002034
#define DAT_10002034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_10002038
#define DAT_10002038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef DAT_1000203c
#define DAT_1000203c (*(char *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_10002154
#define DAT_10002154 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001148
 */

undefined4 recovered_10001148(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && (DAT_1000201c != 0)) {
    recovered_10000fc0(param_1,0x20);
    recovered_1000172a();
    recovered_10001755();
    param_1[1] = DAT_10002030;
    if (DAT_1000203c == '\x01') {
      *param_1 = 2;
      param_1[4] = DAT_10002034;
      param_1[5] = DAT_10002038;
      DAT_10002034 = 0;
      DAT_10002038 = 0;
      DAT_1000203c = '\0';
    }
    DAT_10002154 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_1000201c
#undef DAT_10002030
#undef DAT_10002034
#undef DAT_10002038
#undef DAT_1000203c
#undef DAT_10002154

#undef DAT_1000201c
#define DAT_1000201c (*(int * *)(((uintptr_t)pf_module_state + 0x3a2U)))
#define local_20 (*(undefined4 (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cf
 */

uint recovered_100011cf(void *out)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_20[0] = 0;
  uVar1 = recovered_10001385(DAT_1000201c,100,local_20);
  if (uVar1 != 0) {
    *(undefined1 *)out = (undefined1)local_20[0];
  }
  return (uint)(uVar1 != 0);
}

#undef DAT_1000201c
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001210
 */

bool recovered_10001210(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  uint in_ECX;

  bVar1 = recovered_100013ce();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = recovered_1000142f(in_ECX & 0xff);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


#define local_16 (*(byte *)(pf_stack_frame + 26))
#define local_15 (*(undefined1 (*)[21])(pf_stack_frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001254
 */

void recovered_10001254(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  iVar2 = 0x40;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return;
    }
    local_16 = 0;
    uVar1 = recovered_100011cf(&local_16);
    if (uVar1 == 0) {
      return;
    }
    if (local_16 == 0xff) {
      return;
    }
    if ((local_16 & 1) == 0) break;
    uVar1 = recovered_10001491(local_15);
    if (uVar1 == 0) {
      return;
    }
  }
  return;
}

#undef local_16
#undef local_15

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000129f
 */

bool recovered_1000129f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;

  bVar1 = recovered_10001210();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = recovered_100014d2();
    bVar1 = CONCAT31(extraout_var_00,uVar2) != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d1
 */

bool recovered_100012d1(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;

  bVar1 = recovered_10001210();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = recovered_1000153d();
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012fb
 */

/* WARNING: Removing unreachable block (ram,0x10001369) */

undefined4 recovered_100012fb(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int in_ECX;
  int iVar3;

  if (((in_ECX == 0) || (bVar1 = recovered_10001210(), CONCAT31(extraout_var,bVar1) != 0)) &&
     (bVar1 = recovered_1000153d(), CONCAT31(extraout_var_00,bVar1) != 0)) {
    iVar3 = 9;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      uVar2 = recovered_100014d2();
    } while (CONCAT31(extraout_var_01,uVar2) != 0);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001385
 */

uint recovered_10001385(int *api,uint port,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x58)) ||
     (out == (void *)0x0 || (code *)api[0x15] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x15])(port & 0xffff,1,out);
  return uVar1;
}


#define local_15 (*(byte (*)[21])(pf_stack_frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ce
 */

bool recovered_100013ce(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  iVar2 = 2000;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return false;
    }
    local_15[0] = 0;
    uVar1 = recovered_100011cf(local_15);
    if (uVar1 == 0) {
      return false;
    }
    if (local_15[0] == 0xff) {
      return false;
    }
    if ((local_15[0] & 2) == 0) break;
    recovered_10001466();
  }
  return true;
}

#undef local_15

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000142f
 */

undefined4 recovered_1000142f(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined2 in_DX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x5c)) ||
     ((code *)in_ECX[0x16] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x16])(in_DX,1,param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001466
 */

void recovered_10001466(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;

  if ((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x33 < (uint)in_ECX[2])) &&
     ((code *)in_ECX[0xc] != (code *)0x0)) {
    (*(code *)in_ECX[0xc])();
  }
  return;
}


#undef DAT_1000201c
#define DAT_1000201c (*(int * *)(((uintptr_t)pf_module_state + 0x3a2U)))
#define local_20 (*(undefined4 (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001491
 */

uint recovered_10001491(void *out)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_20[0] = 0;
  uVar1 = recovered_10001385(DAT_1000201c,0x60,local_20);
  if (uVar1 != 0) {
    *(undefined1 *)out = (undefined1)local_20[0];
  }
  return (uint)(uVar1 != 0);
}

#undef DAT_1000201c
#undef local_20

#define local_19 (*(byte *)(pf_stack_frame + 23))
#define local_18 (*(void * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d2
 */

undefined1 recovered_100014d2(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *in_ECX;
  int iVar2;
  bool bVar3;

  iVar2 = 10000;
  local_18 = in_ECX;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return 0;
    }
    local_19 = 0;
    uVar1 = recovered_100011cf(&local_19);
    if (uVar1 == 0) {
      return 0;
    }
    if (local_19 == 0xff) {
      return 0;
    }
    if ((local_19 & 1) != 0) break;
    recovered_10001466();
  }
  uVar1 = recovered_10001491(local_18);
  return (char)uVar1;
}

#undef local_19
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000153d
 */

bool recovered_1000153d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  uint in_ECX;

  bVar1 = recovered_100013ce();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = recovered_1000142f(in_ECX & 0xff);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001581
 */

void recovered_10001581(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100015f0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001599
 */

void recovered_10001599(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100015f0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015b1
 */

void recovered_100015b1(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *in_ECX;
  uint in_EDX;
  uint uVar2;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    uVar2 = 0;
    do {
      pcVar1 = in_ECX + uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    if (param_1 != (char *)0x0) {
      for (; (*param_1 != '\0' && (uVar2 < in_EDX)); uVar2 = uVar2 + 1) {
        in_ECX[uVar2 - 1] = *param_1;
        param_1 = param_1 + 1;
      }
      in_ECX[uVar2 - 1] = 0;
    }
  }
  return;
}


#undef DAT_1000201c
#define DAT_1000201c (*(int * *)(((uintptr_t)pf_module_state + 0x3a2U)))
#undef DAT_10002020
#define DAT_10002020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3a6U)))
#undef DAT_10002024
#define DAT_10002024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef DAT_10002040
#define DAT_10002040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef str_10001d00
#define str_10001d00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10001d4e
#define str_10001d4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_10001d66
#define str_10001d66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_10001dfc
#define str_10001dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10001e11
#define str_10001e11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_10001e28
#define str_10001e28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_10001ebc
#define str_10001ebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x242U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f0
 */

undefined4 recovered_100015f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int in_EDX;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0;
  if ((in_ECX != (undefined4 *)0x0) && (DAT_1000201c != (int *)0x0)) {
    piVar3 = &DAT_10002020;
    if (in_EDX == 10) {
      piVar3 = &DAT_10002024;
    }
    iVar1 = *piVar3;
    recovered_10000fc0(in_ECX,500);
    *in_ECX = 500;
    in_ECX[1] = 1;
    in_ECX[3] = in_EDX;
    uVar2 = 0x13;
    if (iVar1 == 0) {
      uVar2 = 8;
    }
    in_ECX[4] = uVar2;
    uVar2 = 0;
    if ((((DAT_1000201c != (int *)0x0) && (*DAT_1000201c == 0x54584b57)) &&
        (0x2f < (uint)DAT_1000201c[2])) && ((code *)DAT_1000201c[0xb] != (code *)0x0)) {
      uVar2 = (*(code *)DAT_1000201c[0xb])();
    }
    in_ECX[6] = uVar2;
    in_ECX[0x11] = iVar1;
    in_ECX[0x12] = DAT_10002040;
    pcVar4 = str_10001d00;
    if (in_EDX == 10) {
      pcVar4 = str_10001d4e;
    }
    pcVar5 = str_10001ebc;
    if (in_EDX == 10) {
      pcVar5 = str_10001e28;
    }
    recovered_100015b1(pcVar4);
    recovered_100015b1(str_10001d66);
    pcVar4 = str_10001dfc;
    if (iVar1 == 0) {
      pcVar4 = str_10001e11;
    }
    recovered_100015b1(pcVar4);
    recovered_100015b1(pcVar5);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_1000201c
#undef DAT_10002020
#undef DAT_10002024
#undef DAT_10002040
#undef str_10001d00
#undef str_10001d4e
#undef str_10001d66
#undef str_10001dfc
#undef str_10001e11
#undef str_10001e28
#undef str_10001ebc

#undef DAT_10002154
#define DAT_10002154 (*(int *)(((uintptr_t)pf_module_state + 0x4daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000172a
 */

/* WARNING: Removing unreachable block (ram,0x1000174f) */

void recovered_1000172a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10002154;
  { __typeof__(DAT_10002154) pf_atomic_old = __atomic_exchange_n(&(DAT_10002154),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10002154

#undef DAT_10001f44
#define DAT_10001f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2caU)))
#undef DAT_10001f7e
#define DAT_10001f7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x304U)))
#undef DAT_10002020
#define DAT_10002020 (*(int *)(((uintptr_t)pf_module_state + 0x3a6U)))
#undef DAT_10002024
#define DAT_10002024 (*(int *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef DAT_10002028
#define DAT_10002028 (*(uint *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_1000202c
#define DAT_1000202c (*(uint *)(((uintptr_t)pf_module_state + 0x3b2U)))
#undef DAT_10002030
#define DAT_10002030 (*(uint *)(((uintptr_t)pf_module_state + 0x3b6U)))
#undef DAT_10002034
#define DAT_10002034 (*(int *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_10002038
#define DAT_10002038 (*(int *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef DAT_1000203c
#define DAT_1000203c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_10002040
#define DAT_10002040 (*(int *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_10002044
#define DAT_10002044 (*(char *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_10002045
#define DAT_10002045 (*(char *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef DAT_10002046
#define DAT_10002046 (*(byte *)(((uintptr_t)pf_module_state + 0x3ccU)))
#undef DAT_10002047
#define DAT_10002047 (*(byte *)(((uintptr_t)pf_module_state + 0x3cdU)))
#undef DAT_10002048
#define DAT_10002048 (*(byte *)(((uintptr_t)pf_module_state + 0x3ceU)))
#undef DAT_10002049
#define DAT_10002049 (*(byte *)(((uintptr_t)pf_module_state + 0x3cfU)))
#undef DAT_1000204a
#define DAT_1000204a (*(byte *)(((uintptr_t)pf_module_state + 0x3d0U)))
#undef DAT_1000204b
#define DAT_1000204b (*(byte *)(((uintptr_t)pf_module_state + 0x3d1U)))
#undef DAT_1000204c
#define DAT_1000204c (*(uint *)(((uintptr_t)pf_module_state + 0x3d2U)))
#undef DAT_10002050
#define DAT_10002050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d6U)))
#undef DAT_10002051
#define DAT_10002051 (*(byte *)(((uintptr_t)pf_module_state + 0x3d7U)))
#undef DAT_10002052
#define DAT_10002052 (*(byte *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_10002053
#define DAT_10002053 (*(byte *)(((uintptr_t)pf_module_state + 0x3d9U)))
#undef DAT_10002054
#define DAT_10002054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#undef _DAT_10002044
#define _DAT_10002044 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#define local_36 (*(byte *)(pf_stack_frame + 26))
#define local_35 (*(byte *)(pf_stack_frame + 27))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_2d (*(char *)(pf_stack_frame + 35))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(uint (*)[7])(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001755
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001755(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;

  local_24 = 0;
  do {
    if (local_24 == 0x40) {
      return;
    }
    local_36 = 0;
    local_35 = 0;
    uVar3 = recovered_100011cf(&local_36);
    bVar6 = local_36;
    if (uVar3 == 0) {
      return;
    }
    if (local_36 == 0xff) {
      return;
    }
    if ((local_36 & 1) == 0) {
      return;
    }
    uVar3 = recovered_10001491(&local_35);
    if (uVar3 == 0) {
      return;
    }
    DAT_10002040 = DAT_10002040 + 1;
    if (bVar6 < 0x40) {
      if (bVar6 < 0x20) {
        if (DAT_10002020 != 0) {
          uVar3 = (uint)local_35;
          local_20 = 0;
          cVar2 = DAT_10002044;
          if (DAT_10002045 == '\0') {
            uVar5 = uVar3 - 0xe0;
            if (uVar5 < 0x20) {
              if ((0xc4004000U >> (uVar5 & 0x1f) & 1) != 0) goto LAB_100018c5;
              if (uVar5 == 0) {
                _DAT_10002044 = 1;
              }
              else {
                if (uVar5 != 1) goto LAB_10001938;
                _DAT_10002044 = 0x200;
              }
            }
            else {
LAB_10001938:
              if (uVar3 == 0) {
LAB_100018c5:
                _DAT_10002044 = 0;
              }
              else {
                local_2d = DAT_10002044;
                _DAT_10002044 = 0;
                local_2c = uVar3 & 0x7f;
                bVar6 = (byte)local_2c;
                if (cVar2 == '\x01') {
                  if ((((uVar3 == 0x2a) || (uVar3 == 0x36)) || (uVar3 == 0xaa)) || (uVar3 == 0xb6))
                  goto LAB_100018d4;
                  if (bVar6 == 0x5c) {
                    DAT_1000204b = (byte)~local_35 >> 7;
                  }
                  else if (local_2c == 0x5b) {
                    DAT_1000204a = (byte)~local_35 >> 7;
                  }
                  else {
                    bVar1 = true;
                    if (local_2c != 0x1d) goto LAB_10001a08;
                    DAT_10002049 = (byte)~local_35 >> 7;
                  }
LAB_10001a06:
                  bVar1 = false;
                }
                else {
                  if (bVar6 == 0x1d) {
                    DAT_10002048 = (byte)~local_35 >> 7;
                    goto LAB_10001a06;
                  }
                  if (local_2c == 0x36) {
                    DAT_10002047 = (byte)~local_35 >> 7;
                    goto LAB_10001a06;
                  }
                  bVar1 = true;
                  if (local_2c == 0x2a) {
                    DAT_10002046 = (byte)~local_35 >> 7;
                    goto LAB_10001a06;
                  }
                }
LAB_10001a08:
                if ((DAT_10002046 != 0) || (local_28 = 0, DAT_10002047 == 1)) {
                  local_28 = 0x10000;
                }
                if ((DAT_10002048 != 0) || (DAT_10002049 == 1)) {
                  local_28 = local_28 | 0x20000;
                }
                if ((DAT_1000204a != 0) || (DAT_1000204b == 1)) {
                  local_28 = local_28 | 0x40000;
                }
                bVar9 = local_28 != DAT_1000204c;
                if (bVar9) {
                  local_1c[0] = local_28 + 0x80000000;
                  DAT_1000204c = local_28;
                }
                local_20 = (uint)bVar9;
                local_34 = (uint)bVar9;
                if (bVar1 && -1 < (char)local_35) {
                  if (cVar2 == '\0') {
                    if (bVar6 != 0x38) {
                      if ((byte)(bVar6 - 1) < 0x44) {
                        if (bVar6 < 0x3a) {
                          puVar8 = &DAT_10001f7e;
                          if ((local_28 >> 0x10 & 1) == 0) {
                            puVar8 = &DAT_10001f44;
                          }
                          uVar5 = (uint)(byte)puVar8[local_2c];
                          goto LAB_10001b77;
                        }
                      }
                      else if (1 < (byte)(bVar6 + 0xa9) && 0xc < (byte)(bVar6 + 0xb9))
                      goto LAB_100018d4;
                      uVar5 = 0;
                      if (bVar6 == 0x4e) {
                        uVar5 = 0x2b;
                      }
                      if (bVar6 == 0x4a) {
                        uVar5 = 0x2d;
                      }
                      goto LAB_10001b77;
                    }
                  }
                  else if (((bVar6 == 0x1c) || (local_2c == 0x35)) ||
                          (((byte)(bVar6 + 0xb9) < 0xd &&
                           ((4 < local_2c - 0x4a || ((0x15U >> (local_2c - 0x4a & 0x1f) & 1) == 0)))
                           ))) {
                    uVar5 = 0;
                    if (bVar6 == 0x35) {
                      uVar5 = 0x2f;
                    }
                    if (bVar6 == 0x1c) {
                      uVar5 = 0xd;
                    }
LAB_10001b77:
                    local_20 = local_34 + 1;
                    local_1c[local_34] = uVar3 << 8 | uVar5 | local_28;
                  }
                }
              }
            }
          }
          else {
            _DAT_10002044 = CONCAT11(DAT_10002045 + -1,DAT_10002044);
          }
LAB_100018d4:
          uVar3 = DAT_10002028;
          uVar5 = DAT_1000202c;
          for (uVar4 = 0; local_20 != uVar4; uVar4 = uVar4 + 1) {
            uVar7 = uVar5 + 1 & 0x3f;
            if (uVar7 != uVar3) {
              *(uint *)(&DAT_10002054 + uVar5 * 4) = local_1c[uVar4];
              uVar5 = uVar7;
              DAT_1000202c = uVar7;
            }
          }
          local_34 = local_20;
        }
      }
      else if ((DAT_10002024 != 0) &&
              (uVar3 = (uint)DAT_10002053, (local_35 & 8) != 0 || DAT_10002053 != 0)) {
        DAT_10002053 = DAT_10002053 + 1;
        (&DAT_10002050)[uVar3] = local_35;
        if (2 < DAT_10002053) {
          DAT_10002053 = 0;
          uVar3 = (uint)DAT_10002050;
          if (uVar3 < 0x40) {
            DAT_10002030 = uVar3 & 7;
            DAT_10002034 = DAT_10002034 + (uint)DAT_10002051 + (uVar3 & 0x10) * -0x10;
            DAT_10002038 = DAT_10002038 + ((uVar3 & 0x20) * 8 - (uint)DAT_10002052);
            DAT_1000203c = 1;
          }
        }
      }
    }
    else if ((bVar6 & 0x20) != 0) {
      DAT_10002053 = 0;
    }
    local_24 = local_24 + 1;
  } while( true );
}

#undef DAT_10001f44
#undef DAT_10001f7e
#undef DAT_10002020
#undef DAT_10002024
#undef DAT_10002028
#undef DAT_1000202c
#undef DAT_10002030
#undef DAT_10002034
#undef DAT_10002038
#undef DAT_1000203c
#undef DAT_10002040
#undef DAT_10002044
#undef DAT_10002045
#undef DAT_10002046
#undef DAT_10002047
#undef DAT_10002048
#undef DAT_10002049
#undef DAT_1000204a
#undef DAT_1000204b
#undef DAT_1000204c
#undef DAT_10002050
#undef DAT_10002051
#undef DAT_10002052
#undef DAT_10002053
#undef DAT_10002054
#undef _DAT_10002044
#undef local_36
#undef local_35
#undef local_34
#undef local_2d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bbe
 */

undefined8 recovered_10001bbe(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10001bf9;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10001bf9;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10001bf9:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c00
 */

undefined8 recovered_10001c00(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c44
 */

undefined8 recovered_10001c44(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
