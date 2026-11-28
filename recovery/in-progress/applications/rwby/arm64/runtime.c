/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#undef DAT_10002326
#define DAT_10002326 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f2U)))
#undef PTR_recovered_10001224_10004038
#define PTR_recovered_10001224_10004038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2304U)))
#undef PTR_recovered_100017e8_100040d0
#define PTR_recovered_100017e8_100040d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x239cU)))
#undef str_1000230c
#define str_1000230c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d8U)))
#undef str_10002313
#define str_10002313 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dfU)))
#undef str_10002487
#define str_10002487 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x753U)))
#undef str_100024a2
#define str_100024a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76eU)))
#undef str_100024d0
#define str_100024d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79cU)))
#undef str_100024de
#define str_100024de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aaU)))
#define lStack_1108 (*(long *)(pf_stack_frame + 24))
#define uStack_10f0 (*(undefined8 *)(pf_stack_frame + 48))
#define apvStack_10e0 (*(void * (*)[540])(pf_stack_frame + 64))
#define aplStack_10c8 (*(long * (*)[537])(pf_stack_frame + 88))
#define lStack_1080 (*(long *)(pf_stack_frame + 160))
#define acStack_1078 (*(char (*)[4216])(pf_stack_frame + 168))
#define auStack_1050 (*(undefined1 (*)[4176])(pf_stack_frame + 208))
#define aplStack_80 (*(long * (*)[16])(pf_stack_frame + 4256))
#define local_1100 (*(void * *)(pf_stack_frame + 32))
#define local_10f8 (*(long *)(pf_stack_frame + 40))
#define local_10e8 (*(char *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006d0
 */

char recovered_100006d0(int param_1,long param_2)

{
  unsigned char pf_stack_frame[4416] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  char cVar7;
  long lVar8;

  local_10f8 = 0;
  uStack_10f0 = 0;
  local_1100 = (void *)0x0;
  local_10e8 = param_1 < 2;
  if (param_2 != 0) {
    for (lVar8 = 1; lVar8 < param_1; lVar8 = lVar8 + 1) {
      puVar6 = *(undefined1 **)(param_2 + lVar8 * 8);
      puVar1 = &DAT_1000230b;
      if (puVar6 != (undefined1 *)0x0) {
        puVar1 = puVar6;
      }
      recovered_10000ea4(&lStack_1080,(long)puVar1);
      uVar4 = recovered_10000d3c(&lStack_1080,'=',0);
      if (uVar4 != 0xffffffffffffffff) {
        recovered_10000d74((long *)aplStack_10c8,&lStack_1080,0,uVar4);
        recovered_10000d74((long *)aplStack_80,&lStack_1080,uVar4 + 1,0xffffffffffffffff);
        bVar3 = recovered_10000db0(aplStack_10c8,(byte *)str_1000230c);
        if (bVar3) {
          recovered_10000e60((long *)&local_1100,(long *)aplStack_80);
        }
        else {
          bVar3 = recovered_10000db0(aplStack_10c8,(byte *)str_10002313);
          if (bVar3) {
            bVar3 = recovered_10000db0(aplStack_80,(byte *)((uintptr_t)pf_module_state + 0x5e7U));
            if (((bVar3) || (bVar3 = recovered_10001174(aplStack_80,(char *)((uintptr_t)pf_module_state + 0x5ecU)), bVar3)) ||
               (bVar3 = recovered_10000db0(aplStack_80,(byte *)((uintptr_t)pf_module_state + 0x5eeU)), bVar3)) {
              local_10e8 = true;
            }
            else {
              local_10e8 = recovered_10000db0(aplStack_80,&DAT_10002326);
            }
          }
        }
        _ZdlPv(aplStack_80[0]);
        _ZdlPv(aplStack_10c8[0]);
      }
      _ZdlPv((void *)CONCAT71(PF_PART7(lStack_1080, 1),(char)lStack_1080));
    }
  }
  _ZN6winter4ruby6RubyVMC1Ev(&lStack_1108);
  recovered_10000ea4(&lStack_1080,((uintptr_t)pf_module_state + 0x5f5U));
  aplStack_10c8[0] = _Znwm(0x10);
  *aplStack_10c8[0] = (long)&PTR_recovered_10001224_10004038;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&lStack_1108,&lStack_1080,aplStack_10c8);
  if (aplStack_10c8[0] != (long *)0x0) {
    (**(code **)(*aplStack_10c8[0] + 8))();
  }
  _ZdlPv((void *)CONCAT71(PF_PART7(lStack_1080, 1),(char)lStack_1080));
  recovered_10000ea4(&lStack_1080,((uintptr_t)pf_module_state + 0x5fcU));
  aplStack_80[0] = _Znwm(0x10);
  *aplStack_80[0] = (long)&PTR_recovered_100017e8_100040d0;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&lStack_1108,&lStack_1080,aplStack_80);
  if (aplStack_80[0] != (long *)0x0) {
    (**(code **)(*aplStack_80[0] + 8))();
  }
  _ZdlPv((void *)CONCAT71(PF_PART7(lStack_1080, 1),(char)lStack_1080));
  if (local_10e8 == '\x01') {
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x654U));
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x676U));
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x6aeU));
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x6e1U));
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x704U));
    recovered_10000cf8(((uintptr_t)pf_module_state + 0x5d7U));
    recovered_10000cd4();
    recovered_10000ea4((long *)aplStack_10c8,((uintptr_t)pf_module_state + 0x740U));
    pf_command_result_10001d4c(&lStack_1080,&lStack_1108,aplStack_10c8);
    _ZdlPv(aplStack_10c8[0]);
    if ((char)lStack_1080 == '\x01') {
      recovered_10000d1c(((uintptr_t)pf_module_state + 0x749U));
      recovered_10000cf8(((uintptr_t)pf_module_state + 0x740U));
      if (acStack_1078[0] != '\0') {
        pf_command_result_10001d88(aplStack_10c8,acStack_1078);
        recovered_10001b2c(aplStack_10c8);
        _ZdlPv(aplStack_10c8[0]);
      }
    }
    else {
      uVar4 = recovered_10000fd0(((uintptr_t)pf_module_state + 0x753U));
      uVar4 = recovered_10001b54(auStack_1050,str_10002487,uVar4,0);
      if (uVar4 == 0xffffffffffffffff) {
        recovered_10001b8c((char *)&lStack_1080,str_100024a2);
      }
    }
    recovered_100015c4((long)&lStack_1080);
  }
  if (local_10f8 == 0) {
    cVar7 = '\x01';
  }
  else {
    pf_command_result_10001d4c(&lStack_1080,&lStack_1108,&local_1100);
    pcVar2 = (char *)0x0;
    if ((char)lStack_1080 == '\0') {
      pcVar2 = str_100024d0;
    }
    recovered_10001b8c((char *)&lStack_1080,pcVar2);
    cVar7 = (char)lStack_1080;
    recovered_100015c4((long)&lStack_1080);
  }
LAB_10000a4c:
  do {
    if ((local_10e8 != '\x01') ||
       (bVar3 = wm_lua_readline((long)&lStack_1080,0x1000,str_100024de,1), !bVar3))
    goto LAB_10000b50;
    recovered_10000ea4((long *)aplStack_10c8,(long)&lStack_1080);
    bVar3 = recovered_10001174(aplStack_10c8,(char *)((uintptr_t)pf_module_state + 0x7bfU));
    if ((bVar3) || (bVar3 = recovered_10001174(aplStack_10c8,(char *)((uintptr_t)pf_module_state + 0x7c4U)), bVar3)) {
      _ZdlPv(aplStack_10c8[0]);
LAB_10000b50:
      _ZN6winter4ruby6RubyVMD1Ev(&lStack_1108);
      _ZdlPv(local_1100);
      wm_lua_flush_output();
      return cVar7;
    }
    bVar3 = recovered_10001174(aplStack_10c8,(char *)((uintptr_t)pf_module_state + 0x7c9U));
    _ZdlPv(aplStack_10c8[0]);
    if (bVar3) goto LAB_10000b50;
    recovered_10000ea4((long *)aplStack_10c8,(long)&lStack_1080);
    bVar3 = recovered_10001174(aplStack_10c8,(char *)((uintptr_t)pf_module_state + 0x7cfU));
    if (bVar3) {
      _ZdlPv(aplStack_10c8[0]);
    }
    else {
      plVar5 = recovered_10000ea4((long *)aplStack_80,(long)&lStack_1080);
      bVar3 = recovered_10001174(plVar5,(char *)((uintptr_t)pf_module_state + 0x7d5U));
      _ZdlPv(aplStack_80[0]);
      _ZdlPv(aplStack_10c8[0]);
      if (!bVar3) {
        if ((char)lStack_1080 != '\0') {
          recovered_10000ea4((long *)aplStack_80,(long)&lStack_1080);
          recovered_10000ea4((long *)apvStack_10e0,((uintptr_t)pf_module_state + 0x7b7U));
          pf_command_result_10001d58(aplStack_10c8,&lStack_1108,aplStack_80,apvStack_10e0);
          _ZdlPv(apvStack_10e0[0]);
          _ZdlPv(aplStack_80[0]);
          recovered_10001b8c((char *)aplStack_10c8,(char *)0x0);
          recovered_100015c4((long)aplStack_10c8);
        }
        goto LAB_10000a4c;
      }
    }
    recovered_10000cd4();
  } while( true );
}

#undef DAT_1000230b
#undef DAT_10002326
#undef PTR_recovered_10001224_10004038
#undef PTR_recovered_100017e8_100040d0
#undef str_1000230c
#undef str_10002313
#undef str_10002487
#undef str_100024a2
#undef str_100024d0
#undef str_100024de
#undef lStack_1108
#undef uStack_10f0
#undef apvStack_10e0
#undef aplStack_10c8
#undef lStack_1080
#undef acStack_1078
#undef auStack_1050
#undef aplStack_80
#undef local_1100
#undef local_10f8
#undef local_10e8

#undef PTR_LAB_100080a0
#define PTR_LAB_100080a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x636cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd4
 */

void recovered_10000cd4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000cf8(((uintptr_t)pf_module_state + 0x731U));
  recovered_10000d1c(((uintptr_t)pf_module_state + 0x5d7U));
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xf8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100080a0)();
  return;
}

#undef PTR_LAB_100080a0

#undef PTR_LAB_100080a0
#define PTR_LAB_100080a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x636cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf8
 */

void recovered_10000cf8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d1c(param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xf8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100080a0)();
  return;
}

#undef PTR_LAB_100080a0

#undef PTR_LAB_10008098
#define PTR_LAB_10008098 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6364U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d0c
 */

void recovered_10000d0c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long extraout_x0;
  long lVar2;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  if (extraout_x0 == 0) {
    return;
  }
  lVar2 = 0;
  do {
    pcVar1 = (char *)(extraout_x0 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xecU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008098)();
  return;
}

#undef PTR_LAB_10008098

#undef PTR_LAB_10008098
#define PTR_LAB_10008098 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6364U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d1c
 */

void recovered_10000d1c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  if (param_1 == 0) {
    return;
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xecU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008098)(param_1,lVar2);
  return;
}

#undef PTR_LAB_10008098

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d3c
 */

ulong recovered_10000d3c(undefined8 *text,char needle,ulong start)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = text[1];
  local_20 = &DAT_1000230b;
  if ((undefined1 *)*text != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*text;
  }
  uVar1 = recovered_10001140((long *)&local_20,needle,start);
  return uVar1;
}

#undef DAT_1000230b
#undef local_20
#undef uStack_18

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d74
 */

long * recovered_10000d74(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar4 = param_2[1];
  uVar1 = uVar4;
  if (param_3 <= uVar4) {
    uVar1 = param_3;
  }
  uVar4 = uVar4 - uVar1;
  uVar3 = uVar4;
  if (param_4 <= uVar4) {
    uVar3 = param_4;
  }
  if (param_4 != 0xffffffffffffffff) {
    uVar4 = uVar3;
  }
  puVar2 = &DAT_1000230b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = 0;
  if (puVar2 + uVar1 != (undefined1 *)0x0) {
    uVar3 = uVar4;
  }
  recovered_10000ee8(param_1,(long)(puVar2 + uVar1),uVar3);
  return param_1;
}

#undef DAT_1000230b

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#define pvStack_48 (*(void * *)(pf_stack_frame + 24))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000db0
 */

bool recovered_10000db0(undefined8 *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;

  if (param_2 == (byte *)0x0) {
    return false;
  }
  lVar7 = param_1[1];
  recovered_10000ea4((long *)&pvStack_48,(long)param_2);
  _ZdlPv(pvStack_48);
  if (lVar7 == lStack_40) {
    lVar7 = param_1[1];
    pbVar4 = &DAT_1000230b;
    if ((byte *)*param_1 != (byte *)0x0) {
      pbVar4 = (byte *)*param_1;
    }
    do {
      bVar3 = lVar7 == 0;
      if (lVar7 == 0) {
        return true;
      }
      bVar1 = *pbVar4;
      bVar2 = *param_2;
      uVar5 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar5 = (uint)bVar1;
      }
      uVar6 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar6 = (uint)bVar2;
      }
      lVar7 = lVar7 + -1;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 == uVar6);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_1000230b
#undef pvStack_48
#undef lStack_40

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e60
 */

long * recovered_10000e60(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10000ee8(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_1000230b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ea4
 */

long * recovered_10000ea4(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10000fd0(param_2);
  recovered_10000ee8(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_48 (*(long *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee8
 */

void recovered_10000ee8(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10000ff4(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10001040(param_1);
    }
    else {
      recovered_10001078(param_1,uVar1);
      for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_100010f0(&local_50,*param_1 + local_38,uVar1);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pvVar3;
    local_48 = lVar5;
    lStack_40 = lVar6;
    _ZdlPv(pvVar3);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fd0
 */

long recovered_10000fd0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + lVar1) == '\0') break;
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ff4
 */

undefined8 recovered_10000ff4(long *param_1,long param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    uVar3 = 0;
    lVar2 = param_2 - *param_1;
    do {
      if ((ulong)param_1[1] < uVar3) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *param_3 = lVar2;
    uVar1 = 1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

void recovered_10001040(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_10001124(0);
    *param_1 = (long)pcVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001078
 */

void recovered_10001078(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pcVar1 = recovered_10001124(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      pcVar1[uVar2] = *(char *)(*param_1 + uVar2);
    }
    pcVar1[param_1[1]] = '\0';
    _ZdlPv((void *)*param_1);
    *param_1 = (long)pcVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f0
 */

undefined8 * recovered_100010f0(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_10000ee8(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001124
 */

char * recovered_10001124(long capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = _Znwm(capacity + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001140
 */

ulong recovered_10001140(long *param_1,char param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001174
 */

bool recovered_10001174(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_1000230b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10000fd0((long)param_2);
  if (lVar6 == lVar4) {
    do {
      bVar3 = lVar6 == 0;
      if (lVar6 == 0) {
        return true;
      }
      cVar1 = *pcVar5;
      cVar2 = *param_2;
      lVar6 = lVar6 + -1;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_1000230b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011c4
 */

bool recovered_100011c4(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;

  if (param_2 == param_4) {
    do {
      bVar3 = param_2 == 0;
      if (param_2 == 0) {
        return true;
      }
      cVar1 = *param_1;
      cVar2 = *param_3;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011fc
 */

undefined8 * recovered_100011fc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001224
 */

void recovered_10001224(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef PTR_LAB_10008048
#define PTR_LAB_10008048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001228
 */

void recovered_10001228(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x74U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _ZdlPv(owner);
  return;
}

#undef PTR_LAB_10008048

#undef DAT_10004080
#define DAT_10004080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x234cU)))
#define abStack_80 (*(byte (*)[128])(pf_stack_frame + 16))
#define auStack_78 (*(undefined1 (*)[120])(pf_stack_frame + 24))
#define auStack_50 (*(undefined8 (*)[10])(pf_stack_frame + 64))
#define apvStack_38 (*(void * (*)[7])(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000122c
 */

void recovered_1000122c(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;

  if (param_4[1] == 1) {
    pcVar2 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    recovered_100013dc((long *)apvStack_38,(undefined8 *)pcVar2);
    pf_command_result_10001d4c(abStack_80,param_3,apvStack_38);
    if ((abStack_80[0] & 1) != 0) {
      recovered_10001450(param_1,auStack_78);
      recovered_100015c4((long)abStack_80);
      _ZdlPv(apvStack_38[0]);
      return;
    }
  }
  else {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x20);
    recovered_10001340(puVar3,((uintptr_t)pf_module_state + 0x605U));
    __cxa_throw((long)puVar3,&DAT_10004080,recovered_10001344);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(0x20);
  recovered_1000141c(puVar3,auStack_50);
  __cxa_throw((long)puVar3,&DAT_10004080,recovered_10001344);
                    /* WARNING: Does not return */
  __builtin_trap();
}

#undef DAT_10004080
#undef abStack_80
#undef auStack_78
#undef auStack_50
#undef apvStack_38

#undef PTR_recovered_10001224_10004038
#define PTR_recovered_10001224_10004038 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2304U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

void recovered_10001320(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = _Znwm(0x10);
  *puVar1 = &PTR_recovered_10001224_10004038;
  return;
}

#undef PTR_recovered_10001224_10004038

#undef PTR_recovered_10001344_100040a8
#define PTR_recovered_10001344_100040a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001340
 */

undefined8 * recovered_10001340(undefined8 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10001344_100040a8;
  recovered_10000ea4(param_1 + 1,param_2);
  return param_1;
}

#undef PTR_recovered_10001344_100040a8

#undef PTR_recovered_10001344_100040a8
#define PTR_recovered_10001344_100040a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001344
 */

undefined8 * recovered_10001344(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10001344_100040a8;
  recovered_100011fc(param_1 + 1);
  return param_1;
}

#undef PTR_recovered_10001344_100040a8

#undef PTR_recovered_10001344_100040a8
#define PTR_recovered_10001344_100040a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001348
 */

undefined8 * recovered_10001348(undefined8 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10001344_100040a8;
  recovered_10000ea4(param_1 + 1,param_2);
  return param_1;
}

#undef PTR_recovered_10001344_100040a8

#undef PTR_LAB_10008048
#define PTR_LAB_10008048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000137c
 */

void recovered_1000137c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a8(param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x74U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _ZdlPv(param_1);
  return;
}

#undef PTR_LAB_10008048

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

undefined1 * recovered_10001390(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_1000230b;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}

#undef DAT_1000230b

#undef PTR_recovered_10001344_100040a8
#define PTR_recovered_10001344_100040a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013a8
 */

undefined8 * recovered_100013a8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10001344_100040a8;
  recovered_100011fc(param_1 + 1);
  return param_1;
}

#undef PTR_recovered_10001344_100040a8

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013dc
 */

long * recovered_100013dc(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_1000230b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10000ee8(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_1000230b

#undef PTR_recovered_10001344_100040a8
#define PTR_recovered_10001344_100040a8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000141c
 */

undefined8 * recovered_1000141c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10001344_100040a8;
  recovered_100013dc(param_1 + 1,param_2);
  return param_1;
}

#undef PTR_recovered_10001344_100040a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001450
 */

undefined1 * recovered_10001450(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_1000147c((long *)(param_1 + 8),(long *)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000147c
 */

long * recovered_1000147c(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;

  plVar1 = (long *)param_2[3];
  param_1[3] = (long)plVar1;
  recovered_100014b0(plVar1,param_1,param_2);
  return param_1;
}


#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

long * recovered_100014b0(long *param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_1 == (long *)0x1) {
    *param_2 = *param_3;
    return (long *)0x1;
  }
  if (param_1 == (long *)0x2) {
    *param_2 = *param_3;
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    *(char *)param_2 = (char)*param_3;
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_10000ee8(param_2,(long)puVar1,param_3[1]);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 == (long *)0x6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return param_2;
}

#undef DAT_1000230b

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014bc
 */

long * recovered_100014bc(long *param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == (long *)0x1) {
    *param_2 = *param_3;
    return (long *)0x1;
  }
  if (param_1 == (long *)0x2) {
    *param_2 = *param_3;
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    *(char *)param_2 = (char)*param_3;
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_10000ee8(param_2,(long)puVar1,param_3[1]);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 == (long *)0x6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return param_2;
}

#undef DAT_1000230b

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d4
 */

long * recovered_100014d4(long *param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == (long *)0x2) {
    *param_2 = *param_3;
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    *(char *)param_2 = (char)*param_3;
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_10000ee8(param_2,(long)puVar1,param_3[1]);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 == (long *)0x6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return param_2;
}

#undef DAT_1000230b

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014ec
 */

long * recovered_100014ec(long *param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == (long *)0x3) {
    *(char *)param_2 = (char)*param_3;
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_10000ee8(param_2,(long)puVar1,param_3[1]);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 == (long *)0x6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return param_2;
}

#undef DAT_1000230b

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001504
 */

long * recovered_10001504(long *param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long lVar2;

  if (param_1 == (long *)0x4) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1 = &DAT_1000230b;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_3;
    }
    recovered_10000ee8(param_2,(long)puVar1,param_3[1]);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 == (long *)0x6) {
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    return param_2;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  lVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return param_2;
}

#undef DAT_1000230b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000151c
 */

void recovered_1000151c(long param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 5) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 == 6) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001534
 */

void recovered_10001534(long param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 6) {
    lVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000154c
 */

void recovered_1000154c(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000156c
 */

void recovered_1000156c(long param_1,long *param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 7) {
    return;
  }
  lVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001584
 */

void recovered_10001584(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015a4
 */

void recovered_100015a4(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c4
 */

long recovered_100015c4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011fc((undefined8 *)(param_1 + 0x30));
  recovered_100015f4((long *)(param_1 + 0x10));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f4
 */

long * recovered_100015f4(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001624((long *)param_1[3],param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001624
 */

long * recovered_10001624(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_1 == (long *)0x1) {
    return (long *)0x1;
  }
  if (param_1 == (long *)0x2) {
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 == (long *)0x6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

long * recovered_10001630(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x1) {
    return (long *)0x1;
  }
  if (param_1 == (long *)0x2) {
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 == (long *)0x6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001640
 */

long * recovered_10001640(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x2) {
    return (long *)0x2;
  }
  if (param_1 == (long *)0x3) {
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 == (long *)0x6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001650
 */

long * recovered_10001650(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x3) {
    return (long *)0x3;
  }
  if (param_1 == (long *)0x4) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 == (long *)0x6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

long * recovered_10001660(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x4) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 == (long *)0x6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          plVar1 = (long *)(**(code **)(*plVar1 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return plVar1;
  }
  if (param_1 != (long *)0x7) {
    return param_1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return plVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001674
 */

void recovered_10001674(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001688
 */

void recovered_10001688(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 6) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[1];
      plVar1[1] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
    return;
  }
  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000169c
 */

void recovered_1000169c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001704
 */

void recovered_10001704(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 != 7) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001718
 */

void recovered_10001718(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001780
 */

void recovered_10001780(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e8
 */

void recovered_100017e8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef PTR_LAB_10008048
#define PTR_LAB_10008048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6314U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017ec
 */

void recovered_100017ec(void *owner)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x74U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _ZdlPv(owner);
  return;
}

#undef PTR_LAB_10008048

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#undef DAT_10004080
#define DAT_10004080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x234cU)))
#define abStack_b8 (*(byte (*)[184])(pf_stack_frame + 24))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 32))
#define auStack_88 (*(undefined8 (*)[17])(pf_stack_frame + 72))
#define pvStack_70 (*(void * *)(pf_stack_frame + 96))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 104))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 112))
#define uStack_58 (*(ulong *)(pf_stack_frame + 120))
#define pvStack_50 (*(void * *)(pf_stack_frame + 128))
#define apuStack_48 (*(undefined1 * (*)[9])(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f0
 */

void recovered_100017f0(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;

  if (param_4[1] == 1) {
    pcVar4 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    recovered_100013dc((long *)apuStack_48,(undefined8 *)pcVar4);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
    puVar1 = &DAT_1000230b;
    if (apuStack_48[0] != (undefined1 *)0x0) {
      puVar1 = apuStack_48[0];
    }
    uVar3 = wmfs_read_entire_file((long)puVar1,&pvStack_50,&uStack_58);
    if ((uVar3 & 1) != 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      pvStack_70 = (void *)0x0;
      if ((pvStack_50 != (void *)0x0) && (uStack_58 != 0)) {
        recovered_10000ee8((long *)&pvStack_70,(long)pvStack_50,uStack_58);
      }
      free(pvStack_50);
      pf_command_result_10001d58(abStack_b8,param_3,&pvStack_70,apuStack_48);
      if ((abStack_b8[0] & 1) != 0) {
        recovered_10001450(param_1,auStack_b0);
        recovered_100015c4((long)abStack_b8);
        _ZdlPv(pvStack_70);
        _ZdlPv(apuStack_48[0]);
        return;
      }
      puVar5 = (undefined8 *)__cxa_allocate_exception(0x20);
      recovered_1000141c(puVar5,auStack_88);
      __cxa_throw((long)puVar5,&DAT_10004080,recovered_10001344);
      goto LAB_10001960;
    }
  }
  else {
    puVar5 = (undefined8 *)__cxa_allocate_exception(0x20);
    recovered_10001340(puVar5,((uintptr_t)pf_module_state + 0x61dU));
    __cxa_throw((long)puVar5,&DAT_10004080,recovered_10001344);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(0x20);
  recovered_100019e4((long *)abStack_b8,((uintptr_t)pf_module_state + 0x637U),apuStack_48);
  recovered_1000141c(puVar5,(undefined8 *)abStack_b8);
  __cxa_throw((long)puVar5,&DAT_10004080,recovered_10001344);
LAB_10001960:
                    /* WARNING: Does not return */
  __builtin_trap();
}

#undef DAT_1000230b
#undef DAT_10004080
#undef abStack_b8
#undef auStack_b0
#undef auStack_88
#undef pvStack_70
#undef uStack_68
#undef uStack_60
#undef uStack_58
#undef pvStack_50
#undef apuStack_48

#undef PTR_recovered_100017e8_100040d0
#define PTR_recovered_100017e8_100040d0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x239cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c4
 */

void recovered_100019c4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = _Znwm(0x10);
  *puVar1 = &PTR_recovered_100017e8_100040d0;
  return;
}

#undef PTR_recovered_100017e8_100040d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e4
 */

void recovered_100019e4(long *param_1,long param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000ea4(param_1,param_2);
  recovered_10001a30(param_1,param_3);
  return;
}


#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a30
 */

long * recovered_10001a30(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar6 = param_2[1];
  puVar1 = &DAT_1000230b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10000ff4(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10001078(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10001078(param_1,uVar4 + lVar7);
      lVar3 = 0;
      for (uVar5 = uVar4; uVar6 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)(*param_1 + lVar7) = *(undefined1 *)(*param_1 + lStack_38 + lVar3);
        lVar3 = lVar3 + 1;
        lVar7 = lVar7 + 1;
      }
    }
    lVar7 = param_1[1];
    param_1[1] = lVar7 + uVar6;
    *(undefined1 *)(*param_1 + lVar7 + uVar6) = 0;
  }
  return param_1;
}

#undef DAT_1000230b
#undef lStack_38

#define local_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a48
 */

long * recovered_10001a48(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10000ff4(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10001078(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10001078(param_1,uVar3 + lVar5);
      lVar2 = 0;
      for (uVar4 = uVar3; param_3 = uVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)(*param_1 + lVar5) = *(undefined1 *)(*param_1 + local_38 + lVar2);
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 1;
      }
    }
    lVar5 = param_1[1];
    param_1[1] = lVar5 + param_3;
    *(undefined1 *)(*param_1 + lVar5 + param_3) = 0;
  }
  return param_1;
}

#undef local_38

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#undef PTR_LAB_100080a0
#define PTR_LAB_100080a0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x636cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b2c
 */

void recovered_10001b2c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000230b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  wm_lua_write(pcVar1,param_1[1]);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xf8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100080a0)();
  return;
}

#undef DAT_1000230b
#undef PTR_LAB_100080a0

#undef DAT_1000230b
#define DAT_1000230b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d7U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b54
 */

ulong recovered_10001b54(void *text,char *needle,ulong count,ulong start)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = *(undefined8 *)((long)text + 8);
  local_20 = &DAT_1000230b;
  if (*(undefined1 **)text != (undefined1 *)0x0) {
    local_20 = *(undefined1 **)text;
  }
  uVar1 = recovered_10001c40((long *)&local_20,needle,count,start);
  return uVar1;
}

#undef DAT_1000230b
#undef local_20
#undef uStack_18

#define local_38 (*(void * (*)[7])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b8c
 */

void recovered_10001b8c(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};


  if (*param_1 == '\x01') {
    if (param_1[8] == '\0') {
      return;
    }
    pf_command_result_10001d88(local_38,param_1 + 8);
    recovered_10001b2c(local_38);
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      recovered_10000d1c((long)param_2);
      recovered_10000d1c(((uintptr_t)pf_module_state + 0x77dU));
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      recovered_10000ea4((long *)local_38,((uintptr_t)pf_module_state + 0x780U));
    }
    else {
      recovered_100013dc((long *)local_38,(undefined8 *)(param_1 + 0x30));
    }
    recovered_10001b2c(local_38);
  }
  _ZdlPv(local_38[0]);
  return;
}

#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c40
 */

ulong recovered_10001c40(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;

  uVar3 = param_1[1];
  if (param_3 == 0) {
    if (uVar3 < param_4) {
      param_4 = 0xffffffffffffffff;
    }
  }
  else {
    if (param_3 <= uVar3 && param_4 <= uVar3 - param_3) {
      for (; param_4 <= uVar3 - param_3; param_4 = param_4 + 1) {
        lVar4 = *param_1;
        pcVar5 = param_2;
        uVar6 = param_3;
        do {
          if (uVar6 == 0) {
            return param_4;
          }
          pcVar1 = (char *)(lVar4 + param_4);
          cVar2 = *pcVar5;
          uVar6 = uVar6 - 1;
          lVar4 = lVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 == cVar2);
      }
    }
    param_4 = 0xffffffffffffffff;
  }
  return param_4;
}

