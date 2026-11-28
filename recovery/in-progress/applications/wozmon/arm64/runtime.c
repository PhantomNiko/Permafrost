/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100007ac
#define DAT_100007ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_10001000
#define DAT_10001000 (*(char *)(((uintptr_t)pf_module_state + 0x918U)))
#undef DAT_10001004
#define DAT_10001004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x91cU)))
#undef DAT_10001008
#define DAT_10001008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x920U)))
#undef DAT_10001009
#define DAT_10001009 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x921U)))
#undef DAT_82010820
#define DAT_82010820 (*(uint8_t *)(0x82010820U))
#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef DAT_82010830
#define DAT_82010830 (*(uint8_t *)(0x82010830U))
#undef _DAT_82010820
#define _DAT_82010820 (*(uint *)(0x82010820U))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
#undef _DAT_82010830
#define _DAT_82010830 (*(uint *)(0x82010830U))
#undef str_100006e8
#define str_100006e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10000700
#define str_10000700 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18U)))
#undef str_1000071c
#define str_1000071c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34U)))
#undef str_10000736
#define str_10000736 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eU)))
#undef str_10000753
#define str_10000753 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bU)))
#undef str_10000768
#define str_10000768 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x80U)))
#define local_7d (*(byte *)(pf_stack_frame + 19))
#define local_7c (*(uint *)(pf_stack_frame + 20))
#define local_78 (*(char * *)(pf_stack_frame + 24))
#define local_70 (*(char * *)(pf_stack_frame + 32))
#define local_65 (*(char *)(pf_stack_frame + 43))
#define local_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10000000(void)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;

  bVar4 = recovered_10000428(0x20);
  if ((bVar4) && (_DAT_82010820 != 0)) {
    (*(code *)(ulong)_DAT_82010820)(0,0x55ff55,10);
  }
  recovered_100003e0(str_100006e8);
  recovered_100003e0(str_10000700);
  recovered_100003e0(str_1000071c);
  recovered_100003e0(str_10000736);
  recovered_100003e0(str_10000753);
  recovered_100003e0(str_10000768);
LAB_100000bc:
  DAT_10001008 = 0;
LAB_100000c0:
  recovered_10000474();
  uVar3 = 0;
LAB_100000c8:
  do {
    do {
      uVar9 = uVar3;
      bVar4 = recovered_10000428(0x2c);
      uVar3 = uVar9;
    } while (!bVar4);
  } while ((_DAT_8201082c == 0) || (bVar5 = (*(code *)(ulong)_DAT_8201082c)(), bVar5 == 0));
  if (bVar5 == 8) {
LAB_10000168:
    uVar3 = 0;
    if (uVar9 != 0) {
      *(undefined1 *)((long)&DAT_10001004 + uVar9 + 3) = 0;
      recovered_10000488(8);
      uVar3 = uVar9 - 1;
    }
    goto LAB_100000c8;
  }
  if (bVar5 == 0x1b) goto LAB_10000188;
  if (bVar5 == 0x7f) goto LAB_10000168;
  if (bVar5 != 0xd && bVar5 != 10) {
    if ((0xffffffa0 < bVar5 - 0x7f) && (uVar9 + 1 < 0x60)) {
      bVar1 = bVar5 - 0x20;
      if (0x19 < (byte)(bVar5 + 0x9f)) {
        bVar1 = bVar5;
      }
      (&DAT_10001008)[uVar9] = bVar1;
      (&DAT_10001009)[uVar9] = 0;
      recovered_10000488((ulong)(uint)(int)(char)bVar1);
      uVar3 = uVar9 + 1;
    }
    goto LAB_100000c8;
  }
  (&DAT_10001008)[uVar9] = 0;
  recovered_1000047c();
  local_78 = recovered_100004d0(&DAT_10001008);
  local_7c = 0;
  local_7d = 0;
  if (*local_78 == '\0') {
    if (DAT_10001000 != '\x01') goto LAB_100000bc;
    uVar6 = DAT_10001004;
  }
  else {
    uVar7 = recovered_10000628(&local_78,&local_7c,(long)&local_7d);
    if ((int)uVar7 == 0) goto LAB_10000394;
    local_78 = recovered_100004d0(local_78);
    uVar6 = local_7c;
    cVar2 = *local_78;
    if (cVar2 == 'R') {
      if ((local_7d & 1) == 0) {
        if (DAT_10001000 != '\x01') goto LAB_10000394;
        local_7c = DAT_10001004;
      }
      local_78 = local_78 + 1;
      local_78 = recovered_100004d0(local_78);
      if (*local_78 != '\0') goto LAB_10000394;
      DAT_10001004 = local_7c;
      DAT_10001000 = '\x01';
      (*(code *)(ulong)local_7c)();
      recovered_1000047c();
      goto LAB_100000bc;
    }
    if (cVar2 == '.') {
      local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
      local_64 = local_64 & 0xffffff00;
      if (local_7d != 1) goto LAB_10000394;
      local_78 = local_78 + 1;
      local_78 = recovered_100004d0(local_78);
      uVar7 = recovered_10000628(&local_78,(uint *)&local_70,(long)&local_64);
      if (((((int)uVar7 == 0) || ((char)local_64 != '\x01')) ||
          (local_78 = recovered_100004d0(local_78), *local_78 != '\0')) ||
         (uVar6 = local_7c, uVar8 = (uint)local_70, (uint)local_70 < local_7c)) goto LAB_10000394;
      goto LAB_10000228;
    }
    if (cVar2 == ':') {
      if (local_7d != 1) goto LAB_10000394;
      local_78 = local_78 + 1;
      local_70 = recovered_100004d0(local_78);
      bVar4 = false;
      goto LAB_100002bc;
    }
    if (cVar2 != '\0') goto LAB_10000394;
    if (local_7d == 1) {
      goto LAB_10000220;
    }
    if (DAT_10001000 != '\x01') goto LAB_10000394;
    local_7c = DAT_10001004;
    uVar6 = DAT_10001004;
  }
LAB_10000220:
  uVar8 = uVar6 + 7;
  if (0xfffffff8 < uVar6) {
    uVar8 = 0xffffffff;
  }
LAB_10000228:
  recovered_100004f0(uVar6,uVar8);
  goto LAB_100000bc;
LAB_10000188:
  if (uVar9 == 0) {
    recovered_1000047c();
    bVar4 = recovered_10000428(0x30);
    if ((bVar4) && (_DAT_82010830 != 0)) {
      (*(code *)(ulong)_DAT_82010830)();
    }
    return 0;
  }
  DAT_10001008 = 0;
  recovered_1000047c();
  goto LAB_100000c0;
LAB_100002bc:
  if (*local_70 == '\0') goto LAB_10000380;
  local_64 = 0;
  local_65 = '\0';
  uVar7 = recovered_10000628(&local_70,&local_64,(long)&local_65);
  if ((((int)uVar7 == 0) || (local_65 != '\x01')) || (0xff < local_64)) goto LAB_10000394;
  *(char *)(ulong)uVar6 = (char)local_64;
  uVar6 = uVar6 + 1;
  local_70 = recovered_100004d0(local_70);
  bVar4 = true;
  goto LAB_100002bc;
LAB_10000380:
  if (bVar4) {
    DAT_10001000 = '\x01';
    DAT_10001004 = uVar6;
  }
  else {
LAB_10000394:
    recovered_100003e0(&DAT_100007ac);
  }
  goto LAB_100000bc;
}

#undef DAT_100007ac
#undef DAT_10001000
#undef DAT_10001004
#undef DAT_10001008
#undef DAT_10001009
#undef DAT_82010820
#undef DAT_8201082c
#undef DAT_82010830
#undef _DAT_82010820
#undef _DAT_8201082c
#undef _DAT_82010830
#undef str_100006e8
#undef str_10000700
#undef str_1000071c
#undef str_10000736
#undef str_10000753
#undef str_10000768
#undef local_7d
#undef local_7c
#undef local_78
#undef local_70
#undef local_65
#undef local_64

#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100003e0(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10000428(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(param_1);
    return;
  }
  return;
}

#undef DAT_82010828
#undef _DAT_82010828

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000428
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10000428(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

#undef DAT_82010824
#define DAT_82010824 (*(uint8_t *)(0x82010824U))
#undef _DAT_82010824
#define _DAT_82010824 (*(uint *)(0x82010824U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000474
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000474(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10000428(0x24);
  if ((bVar1) && (_DAT_82010824 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100004c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010824)(0x5c);
    return;
  }
  return;
}

#undef DAT_82010824
#undef _DAT_82010824

#undef DAT_10000794
#define DAT_10000794 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xacU)))
#undef DAT_82010828
#define DAT_82010828 (*(uint8_t *)(0x82010828U))
#undef _DAT_82010828
#define _DAT_82010828 (*(uint *)(0x82010828U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000047c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000047c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10000428(0x28);
  if ((bVar1) && (_DAT_82010828 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010828)(&DAT_10000794);
    return;
  }
  return;
}

#undef DAT_10000794
#undef DAT_82010828
#undef _DAT_82010828

#undef DAT_82010824
#define DAT_82010824 (*(uint8_t *)(0x82010824U))
#undef _DAT_82010824
#define _DAT_82010824 (*(uint *)(0x82010824U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000488
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000488(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10000428(0x24);
  if ((bVar1) && (_DAT_82010824 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100004c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010824)(param_1);
    return;
  }
  return;
}

#undef DAT_82010824
#undef _DAT_82010824

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004d0
 */

char * recovered_100004d0(char *cursor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; (cursor != (char *)0x0 && (*cursor == ' ' || *cursor == '\t')); cursor = cursor + 1) {
  }
  return cursor;
}


#undef DAT_10000797
#define DAT_10000797 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafU)))
#undef DAT_10000799
#define DAT_10000799 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_10001000
#define DAT_10001000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x918U)))
#undef DAT_10001004
#define DAT_10001004 (*(int *)(((uintptr_t)pf_module_state + 0x91cU)))
#undef str_1000079b
#define str_1000079b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3U)))
#define local_6c (*(char (*)[108])(pf_stack_frame + 20))
#define local_62 (*(char *)(pf_stack_frame + 30))
#define local_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004f0
 */

void recovered_100004f0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;

  do {
    uVar5 = 0x1c;
    for (lVar4 = 0; lVar4 != 8; lVar4 = lVar4 + 1) {
      local_6c[lVar4] = str_1000079b[(ulong)(param_1 >> (ulong)(uVar5 & 0x1f)) & 0xf];
      uVar5 = uVar5 - 4;
    }
    local_6c[8] = 0;
    recovered_100003e0(local_6c);
    recovered_100003e0(&DAT_10000797);
    lVar4 = 0;
    do {
      pbVar1 = (byte *)((ulong)param_1 + lVar4);
      if (7 < (uint)lVar4 || (byte *)(ulong)param_2 < pbVar1) {
        uVar5 = param_1 + (uint)lVar4;
        goto LAB_100005dc;
      }
      bVar2 = *pbVar1;
      recovered_100003e0(&DAT_10000799);
      local_6c[9] = str_1000079b[bVar2 >> 4];
      local_62 = str_1000079b[(ulong)bVar2 & 0xf];
      local_61 = 0;
      recovered_100003e0(local_6c + 9);
      lVar4 = lVar4 + 1;
    } while (((ulong)param_1 | 0xffffffff00000000) + lVar4 != 0);
    uVar5 = 0;
LAB_100005dc:
    recovered_1000047c();
    bVar3 = param_2 <= param_1;
    param_1 = uVar5;
    if (bVar3 || param_2 <= uVar5 - 1) {
      DAT_10001004 = param_2 + 1;
      DAT_10001000 = 1;
      return;
    }
  } while( true );
}

#undef DAT_10000797
#undef DAT_10000799
#undef DAT_10001000
#undef DAT_10001004
#undef str_1000079b
#undef local_6c
#undef local_62
#undef local_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000628
 */

undefined8 recovered_10000628(undefined8 *param_1,uint *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (param_1 == (undefined8 *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)*param_1;
  }
  if (((param_3 == 0) || (param_2 == (uint *)0x0)) || (pbVar3 == (byte *)0x0)) {
    return 0;
  }
  uVar2 = 0;
  iVar4 = 8;
  do {
    bVar1 = *pbVar3;
    uVar6 = bVar1 - 0x30U;
    if ((uVar6 & 0xff) < 10) {
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar6 = bVar1 - 0x41U;
      if (0x25 < uVar6 || (1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0) {
        *(bool *)param_3 = iVar4 != 8;
        if (iVar4 != 8) {
          *param_2 = uVar2;
          *param_1 = pbVar3;
        }
        return 1;
      }
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = (uint)bVar1;
      uVar6 = uVar5 - 0x20;
      if (0x19 < (uVar5 - 0x61 & 0xff)) {
        uVar6 = uVar5;
      }
      uVar6 = uVar6 - 0x37;
    }
    uVar2 = uVar6 & 0xff | uVar2 << 4;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + -1;
  } while( true );
}

