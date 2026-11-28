/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#undef DAT_100031dd
#define DAT_100031dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef DAT_100031e8
#define DAT_100031e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46cU)))
#undef UNK_82010800
#define UNK_82010800 (*(int *)(0x82010800U))
#undef UNK_82010804
#define UNK_82010804 (*(int *)(0x82010804U))
#undef UNK_82010808
#define UNK_82010808 (*(uint *)(0x82010808U))
#undef UNK_82010834
#define UNK_82010834 (*(uint *)(0x82010834U))
#undef iRam0000000082010800
#define iRam0000000082010800 (*(uint32_t *)(0x82010800U))
#undef iRam0000000082010804
#define iRam0000000082010804 (*(uint32_t *)(0x82010804U))
#undef str_100031ce
#define str_100031ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x452U)))
#undef str_100031d5
#define str_100031d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_100032e4
#define str_100032e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x568U)))
#undef str_10003401
#define str_10003401 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef uRam0000000082010808
#define uRam0000000082010808 (*(uint32_t *)(0x82010808U))
#undef uRam0000000082010834
#define uRam0000000082010834 (*(uint32_t *)(0x82010834U))
#define apvStack_1e78 (*(void * (*)[975])(pf_stack_frame + 24))
#define uStack_1090 (*(undefined8 *)(pf_stack_frame + 3584))
#define uStack_1088 (*(undefined4 *)(pf_stack_frame + 3592))
#define uStack_1080 (*(undefined8 *)(pf_stack_frame + 3600))
#define alStack_1078 (*(long (*)[527])(pf_stack_frame + 3608))
#define apvStack_80 (*(void * (*)[16])(pf_stack_frame + 7696))
#define local_10b0 (*(void * *)(pf_stack_frame + 3552))
#define local_10a8 (*(long *)(pf_stack_frame + 3560))
#define local_10a0 (*(undefined8 *)(pf_stack_frame + 3568))
#define local_1098 (*(char *)(pf_stack_frame + 3576))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006d0
 */

undefined8 recovered_100006d0(int param_1,long param_2)

{
  unsigned char pf_stack_frame[7856] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;

  local_10a0 = 0;
  local_10b0 = (void *)0x0;
  local_10a8 = 0;
  local_1098 = param_1 < 2;
  if (param_2 != 0) {
    for (lVar7 = 1; lVar7 < param_1; lVar7 = lVar7 + 1) {
      puVar6 = *(undefined1 **)(param_2 + lVar7 * 8);
      puVar1 = &DAT_100031cd;
      if (puVar6 != (undefined1 *)0x0) {
        puVar1 = puVar6;
      }
      recovered_10000ed8(&uStack_1080,(long)puVar1);
      uVar4 = recovered_10000d70(&uStack_1080,'=',0);
      if (uVar4 != 0xffffffffffffffff) {
        recovered_10000da8((long *)apvStack_1e78,&uStack_1080,0,uVar4);
        recovered_10000da8((long *)apvStack_80,&uStack_1080,uVar4 + 1,0xffffffffffffffff);
        bVar2 = recovered_10000de4(apvStack_1e78,(byte *)str_100031ce);
        if (bVar2) {
          recovered_10000e94((long *)&local_10b0,(long *)apvStack_80);
        }
        else {
          bVar2 = recovered_10000de4(apvStack_1e78,(byte *)str_100031d5);
          if (bVar2) {
            bVar2 = recovered_10000de4(apvStack_80,&DAT_100031dd);
            if (((bVar2) || (bVar2 = recovered_100011a8(apvStack_80,(char *)((uintptr_t)pf_module_state + 0x466U)), bVar2)) ||
               (bVar2 = recovered_10000de4(apvStack_80,(byte *)((uintptr_t)pf_module_state + 0x468U)), bVar2)) {
              local_1098 = true;
            }
            else {
              local_1098 = recovered_10000de4(apvStack_80,&DAT_100031e8);
            }
          }
        }
        _ZdlPv(apvStack_80[0]);
        _ZdlPv(apvStack_1e78[0]);
      }
      _ZdlPv((void *)CONCAT44(PF_PART4(uStack_1080, 4),(int)uStack_1080));
    }
  }
  _ZN12WinterScriptC1Ev(apvStack_1e78);
  if (local_1098 == '\x01') {
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x46fU));
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x493U));
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x4d3U));
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x506U));
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x529U));
    recovered_10000d2c(((uintptr_t)pf_module_state + 0x451U));
    recovered_10000d08();
    uStack_1088 = 0;
    uStack_1090 = 0;
    if ((((iRam0000000082010800 == 0x50414d57) && (iRam0000000082010804 != 0)) &&
        ((0xb < uRam0000000082010808 &&
         ((0x37 < uRam0000000082010808 && (uRam0000000082010834 != 0)))))) &&
       (iVar3 = (*(code *)(ulong)uRam0000000082010834)(str_100032e4,&uStack_1090), iVar3 != 0)) {
      recovered_10000ed8((long *)apvStack_80,((uintptr_t)pf_module_state + 0x568U));
      _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&uStack_1080,apvStack_1e78,apvStack_80);
      _ZdlPv(apvStack_80[0]);
      recovered_10000d50(((uintptr_t)pf_module_state + 0x571U));
      recovered_10000d2c(((uintptr_t)pf_module_state + 0x568U));
      if ((int)uStack_1080 != 0) {
        recovered_10001280((long *)apvStack_80,(undefined4 *)&uStack_1080);
        recovered_10001258(apvStack_80);
        _ZdlPv(apvStack_80[0]);
      }
      recovered_10001dcc(alStack_1078);
    }
  }
  if (local_10a8 != 0) {
    _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&uStack_1080,apvStack_1e78,&local_10b0);
    if ((int)uStack_1080 != 0) {
      recovered_10001280((long *)apvStack_80,(undefined4 *)&uStack_1080);
      recovered_10001258(apvStack_80);
      _ZdlPv(apvStack_80[0]);
    }
    recovered_10001dcc(alStack_1078);
  }
  while( true ) {
    if ((local_1098 != '\x01') ||
       (bVar2 = wm_lua_readline((long)&uStack_1080,0x1000,str_10003401,1), !bVar2))
    goto LAB_10000ab4;
    plVar5 = recovered_10000ed8((long *)apvStack_80,(long)&uStack_1080);
    bVar2 = recovered_100011a8(plVar5,(char *)((uintptr_t)pf_module_state + 0x6b2U));
    if ((bVar2) || (bVar2 = recovered_100011a8(apvStack_80,(char *)((uintptr_t)pf_module_state + 0x6b7U)), bVar2)) break;
    bVar2 = recovered_100011a8(apvStack_80,(char *)((uintptr_t)pf_module_state + 0x6bcU));
    _ZdlPv(apvStack_80[0]);
    if (bVar2) goto LAB_10000ab4;
    plVar5 = recovered_10000ed8((long *)apvStack_80,(long)&uStack_1080);
    bVar2 = recovered_100011a8(plVar5,(char *)((uintptr_t)pf_module_state + 0x6c2U));
    if ((bVar2) || (bVar2 = recovered_100011a8(apvStack_80,(char *)((uintptr_t)pf_module_state + 0x6c8U)), bVar2)) {
      recovered_10000d08();
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    _ZdlPv(apvStack_80[0]);
    if ((!bVar2) && ((char)uStack_1080 != '\0')) {
      recovered_10000ed8((long *)apvStack_80,(long)&uStack_1080);
      _ZN12WinterScript9runScriptERKN2wm6stringE((long)apvStack_1e78,apvStack_80);
      _ZdlPv(apvStack_80[0]);
    }
  }
  _ZdlPv(apvStack_80[0]);
LAB_10000ab4:
  recovered_10002118(apvStack_1e78);
  _ZdlPv(local_10b0);
  wm_lua_flush_output();
  return 1;
}

#undef DAT_100031cd
#undef DAT_100031dd
#undef DAT_100031e8
#undef UNK_82010800
#undef UNK_82010804
#undef UNK_82010808
#undef UNK_82010834
#undef iRam0000000082010800
#undef iRam0000000082010804
#undef str_100031ce
#undef str_100031d5
#undef str_100032e4
#undef str_10003401
#undef uRam0000000082010808
#undef uRam0000000082010834
#undef apvStack_1e78
#undef uStack_1090
#undef uStack_1088
#undef uStack_1080
#undef alStack_1078
#undef apvStack_80
#undef local_10b0
#undef local_10a8
#undef local_10a0
#undef local_1098

#undef PTR_FUN_10008060
#define PTR_FUN_10008060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d08
 */

void recovered_10000d08(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d2c(((uintptr_t)pf_module_state + 0x557U));
  recovered_10000d50(((uintptr_t)pf_module_state + 0x451U));
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x98U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008060)();
  return;
}

#undef PTR_FUN_10008060

#undef PTR_FUN_10008060
#define PTR_FUN_10008060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d2c
 */

void recovered_10000d2c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d50(param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x98U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008060)();
  return;
}

#undef PTR_FUN_10008060

#undef PTR_FUN_10008058
#define PTR_FUN_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

void recovered_10000d40(long param_1)

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
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x8cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008058)();
  return;
}

#undef PTR_FUN_10008058

#undef PTR_FUN_10008058
#define PTR_FUN_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d50
 */

void recovered_10000d50(long param_1)

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
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x8cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008058)(param_1,lVar2);
  return;
}

#undef PTR_FUN_10008058

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d70
 */

ulong recovered_10000d70(undefined8 *text,char needle,ulong start)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = text[1];
  local_20 = &DAT_100031cd;
  if ((undefined1 *)*text != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*text;
  }
  uVar1 = recovered_10001174((long *)&local_20,needle,start);
  return uVar1;
}

#undef DAT_100031cd
#undef uStack_18
#undef local_20

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

long * recovered_10000da8(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

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
  puVar2 = &DAT_100031cd;
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
  recovered_10000f1c(param_1,(long)(puVar2 + uVar1),uVar3);
  return param_1;
}

#undef DAT_100031cd

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#define pvStack_48 (*(void * *)(pf_stack_frame + 24))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de4
 */

bool recovered_10000de4(undefined8 *param_1,byte *param_2)

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
  recovered_10000ed8((long *)&pvStack_48,(long)param_2);
  _ZdlPv(pvStack_48);
  if (lVar7 == lStack_40) {
    lVar7 = param_1[1];
    pbVar4 = &DAT_100031cd;
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

#undef DAT_100031cd
#undef pvStack_48
#undef lStack_40

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e94
 */

long * recovered_10000e94(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_100031cd;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10000f1c(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_100031cd

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed8
 */

long * recovered_10000ed8(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10001004(param_2);
  recovered_10000f1c(param_1,param_2,uVar1);
  return param_1;
}


#define lStack_40 (*(long *)(pf_stack_frame + 32))
#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_48 (*(long *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f1c
 */

void recovered_10000f1c(long *param_1,long param_2,ulong param_3)

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
  uVar2 = recovered_10001028(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10001074(param_1);
    }
    else {
      recovered_100010ac(param_1,uVar1);
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
    recovered_10001124(&local_50,*param_1 + local_38,uVar1);
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

#undef lStack_40
#undef local_50
#undef local_48
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001004
 */

long recovered_10001004(long param_1)

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
 * Address: 0x10001028
 */

undefined8 recovered_10001028(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10001074
 */

void recovered_10001074(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_10001158(0);
    *param_1 = (long)pcVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010ac
 */

void recovered_100010ac(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pcVar1 = recovered_10001158(param_2);
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
 * Address: 0x10001124
 */

undefined8 * recovered_10001124(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10000f1c(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001158
 */

char * recovered_10001158(long capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = _Znwm(capacity + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001174
 */

ulong recovered_10001174(long *param_1,char param_2,ulong param_3)

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


#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a8
 */

bool recovered_100011a8(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_100031cd;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10001004((long)param_2);
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

#undef DAT_100031cd

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f8
 */

bool recovered_100011f8(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x10001230
 */

undefined8 * recovered_10001230(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv((void *)*param_1);
  return param_1;
}


#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#undef PTR_FUN_10008060
#define PTR_FUN_10008060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001258
 */

void recovered_10001258(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_100031cd;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  wm_lua_write(pcVar1,param_1[1]);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x98U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008060)();
  return;
}

#undef DAT_100031cd
#undef PTR_FUN_10008060

#undef DAT_10003198
#define DAT_10003198 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#undef DAT_100031dd
#define DAT_100031dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x461U)))
#undef DAT_10003306
#define DAT_10003306 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58aU)))
#undef DAT_1000334d
#define DAT_1000334d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d1U)))
#undef DAT_10003351
#define DAT_10003351 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d5U)))
#undef DAT_10003355
#define DAT_10003355 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d9U)))
#undef _DAT_10003198
#define _DAT_10003198 (*(double *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef str_1000330a
#define str_1000330a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58eU)))
#undef str_10003319
#define str_10003319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59dU)))
#undef str_1000332d
#define str_1000332d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
#undef str_10003338
#define str_10003338 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bcU)))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 80))
#define local_a0 (*(void * (*)[20])(pf_stack_frame + 16))
#define local_88 (*(void * (*)[17])(pf_stack_frame + 40))
#define local_70 (*(void * *)(pf_stack_frame + 64))
#define local_68 (*(undefined8 *)(pf_stack_frame + 72))
#define local_58 (*(undefined8 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10001280(long *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long *extraout_x0;
  long *plVar6;
  long *extraout_x0_00;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  uint128 auVar15;

  switch((uintptr_t)(*param_2)) {
  case 0:
    pcVar7 = &DAT_10003306;
    break;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      auVar15 = recovered_10001788((byte *)(local_88 + 9),(byte *)(local_88 + 0xd),param_2[2],10);
      plVar6 = PF_PART8(auVar15, 0);
      if (PF_PART4(auVar15, 8) == 0) {
        plVar6 = recovered_10001124(param_1,(long)(local_88 + 9),(long)plVar6 - (long)(local_88 + 9)
                                   );
      }
      else {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      return plVar6;
    }
    goto LAB_100015b0;
  case 2:
    if (*(long *)(param_2 + 8) != 1) goto LAB_100015b0;
    dVar13 = (double)pf_bits_float((uint32_t)param_2[2]);
    if (NAN(dVar13)) {
      pcVar7 = &DAT_1000334d;
    }
    else {
      if (0.0 <= dVar13) {
        if (dVar13 == 0.0) {
          bVar4 = 1.0 / dVar13 < 0.0;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = true;
      }
      if (dVar13 == INFINITY) {
        pcVar7 = &DAT_10003351;
      }
      else {
        if (dVar13 != -INFINITY) {
          dVar14 = -dVar13;
          if (!bVar4) {
            dVar14 = dVar13;
          }
          uVar5 = (ulong)dVar14;
          dVar13 = pf_unsigned_integer_part(dVar14);
          uVar8 = (ulong)(_DAT_10003198 * (dVar14 - dVar13) + 0.5);
          uVar9 = uVar8 - 1000000;
          param_1[1] = 0;
          param_1[2] = 0;
          if (uVar8 < 1000000) {
            uVar9 = uVar8;
          }
          else {
            uVar5 = uVar5 + 1;
          }
          *param_1 = 0;
          if (bVar4) {
            recovered_10001a10(param_1,0x2d);
          }
          recovered_10001a74(&local_58,uVar5);
          recovered_100016d8(param_1,&local_58);
          _ZdlPv((void *)CONCAT44(PF_PART4(local_58, 4),(undefined4)local_58));
          recovered_10001a10(param_1,0x2e);
          iVar10 = 6;
          uVar5 = 100000;
          do {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar9 / uVar5;
            }
            recovered_10001a10(param_1,(char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30);
            iVar10 = iVar10 + -1;
            uVar5 = uVar5 / 10;
          } while (iVar10 != 0);
          return extraout_x0_00;
        }
        pcVar7 = &DAT_10003355;
      }
    }
    break;
  case 3:
    if (*(long *)(param_2 + 8) == 2) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      puVar1 = &DAT_100031cd;
      if (*(undefined1 **)(param_2 + 2) != (undefined1 *)0x0) {
        puVar1 = *(undefined1 **)(param_2 + 2);
      }
      recovered_10000f1c(param_1,(long)puVar1,*(ulong *)(param_2 + 4));
      return param_1;
    }
    goto LAB_100015b0;
  default:
    pcVar7 = str_10003338;
    break;
  case 5:
    if (*(long *)(param_2 + 8) != 4) goto LAB_100015b0;
    pcVar7 = &DAT_100031dd;
    if (*(char *)(param_2 + 2) == '\0') {
      pcVar7 = str_1000330a;
    }
    break;
  case 6:
    local_68 = 0;
    uStack_60 = 0;
    local_70 = (void *)0x0;
    PF_PART4(local_58, 0) = 10;
    PF_PART4(local_58, 4) = PF_PART4(local_58, 4) & 0xffffff00;
    recovered_10001d98((long *)&local_70,((uintptr_t)pf_module_state + 0x594U));
    PF_PART4(local_58, 4) = CONCAT31(PF_PART3(local_58, 5),1);
    PF_PART4(local_58, 0) = 0x10;
    if (*(long *)(param_2 + 8) == 5) {
      recovered_10001bc8((long *)&local_70,*(ulong *)(param_2 + 2));
      recovered_10001b88(param_1,&local_70);
      _ZdlPv(local_70);
      return extraout_x0;
    }
    goto LAB_100015b0;
  case 7:
    if (*(long *)(param_2 + 8) == 6) {
      plVar6 = *(long **)(param_2 + 4);
      recovered_10000ed8(param_1,((uintptr_t)pf_module_state + 0x596U));
      lVar12 = 0;
      for (uVar5 = 1; uVar5 - 1 < (ulong)plVar6[1]; uVar5 = uVar5 + 1) {
        recovered_10001280((long *)&local_70,(undefined4 *)(*plVar6 + lVar12));
        recovered_100016d8(param_1,&local_70);
        _ZdlPv(local_70);
        if (uVar5 < (ulong)plVar6[1]) {
          recovered_10001d98(param_1,((uintptr_t)pf_module_state + 0x598U));
        }
        lVar12 = lVar12 + 0x28;
      }
      plVar6 = recovered_10001d98(param_1,((uintptr_t)pf_module_state + 0x59bU));
      return plVar6;
    }
    goto LAB_100015b0;
  case 8:
    pcVar7 = str_10003319;
    break;
  case 9:
    if (*(long *)(param_2 + 8) == 7) {
      puVar11 = *(undefined8 **)(param_2 + 4);
      recovered_10000ed8(param_1,((uintptr_t)pf_module_state + 0x5aaU));
      puVar2 = (undefined8 *)*puVar11;
      uVar5 = 1;
      for (lVar12 = puVar11[1] << 6; lVar12 != 0; lVar12 = lVar12 + -0x40) {
        recovered_1000173c((long *)local_88,puVar2,((uintptr_t)pf_module_state + 0x5acU));
        recovered_10001280((long *)local_a0,(undefined4 *)(puVar2 + 3));
        recovered_100016f0((long *)&local_70,local_88,local_a0);
        recovered_100016d8(param_1,&local_70);
        _ZdlPv(local_70);
        _ZdlPv(local_a0[0]);
        _ZdlPv(local_88[0]);
        if (uVar5 < (ulong)puVar11[1]) {
          recovered_10001d98(param_1,((uintptr_t)pf_module_state + 0x598U));
        }
        puVar2 = puVar2 + 8;
        uVar5 = uVar5 + 1;
      }
      plVar6 = recovered_10001d98(param_1,((uintptr_t)pf_module_state + 0x5afU));
      return plVar6;
    }
LAB_100015b0:
                    /* WARNING: Does not return */
    __builtin_trap();
  case 10:
    pcVar7 = str_1000332d;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar5 = recovered_10001004((long)pcVar7);
  recovered_10000f1c(param_1,(long)pcVar7,uVar5);
  return param_1;
}

#undef DAT_10003198
#undef DAT_100031cd
#undef DAT_100031dd
#undef DAT_10003306
#undef DAT_1000334d
#undef DAT_10003351
#undef DAT_10003355
#undef _DAT_10003198
#undef str_1000330a
#undef str_10003319
#undef str_1000332d
#undef str_10003338
#undef uStack_60
#undef local_a0
#undef local_88
#undef local_70
#undef local_68
#undef local_58

#undef PTR_FUN_10008060
#define PTR_FUN_10008060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x52e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001628
 */

void recovered_10001628(long *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    recovered_10000d50((long)param_2);
    recovered_10000d50(((uintptr_t)pf_module_state + 0x5acU));
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  recovered_10000d50(lVar1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x98U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_10008060)();
  return;
}

#undef PTR_FUN_10008060

#define abStack_40 (*(byte (*)[64])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001674
 */

void recovered_10001674(undefined8 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001788(abStack_40,abStack_40 + 0x20,param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10001124(param_1,(long)abStack_40,PF_PART8(auVar1, 0) - (long)abStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef abStack_40

#undef DAT_10003198
#define DAT_10003198 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef DAT_1000334d
#define DAT_1000334d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d1U)))
#undef DAT_10003351
#define DAT_10003351 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d5U)))
#undef DAT_10003355
#define DAT_10003355 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d9U)))
#undef _DAT_10003198
#define _DAT_10003198 (*(double *)(((uintptr_t)pf_module_state + 0x41cU)))
#define apvStack_58 (*(void * (*)[11])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_100016d0(long *param_1,float param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  long *extraout_x0;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;

  dVar7 = (double)param_2;
  if (NAN(dVar7)) {
    puVar3 = &DAT_1000334d;
  }
  else {
    if (0.0 <= dVar7) {
      if (dVar7 == 0.0) {
        bVar1 = 1.0 / dVar7 < 0.0;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (dVar7 == INFINITY) {
      puVar3 = &DAT_10003351;
    }
    else {
      if (dVar7 != -INFINITY) {
        dVar8 = -dVar7;
        if (!bVar1) {
          dVar8 = dVar7;
        }
        uVar2 = (ulong)dVar8;
        dVar7 = pf_unsigned_integer_part(dVar8);
        uVar4 = (ulong)(_DAT_10003198 * (dVar8 - dVar7) + 0.5);
        uVar5 = uVar4 - 1000000;
        param_1[1] = 0;
        param_1[2] = 0;
        if (uVar4 < 1000000) {
          uVar5 = uVar4;
        }
        else {
          uVar2 = uVar2 + 1;
        }
        *param_1 = 0;
        if (bVar1) {
          recovered_10001a10(param_1,0x2d);
        }
        recovered_10001a74(apvStack_58,uVar2);
        recovered_100016d8(param_1,apvStack_58);
        _ZdlPv(apvStack_58[0]);
        recovered_10001a10(param_1,0x2e);
        iVar6 = 6;
        uVar2 = 100000;
        do {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = uVar5 / uVar2;
          }
          recovered_10001a10(param_1,(char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30);
          iVar6 = iVar6 + -1;
          uVar2 = uVar2 / 10;
        } while (iVar6 != 0);
        return extraout_x0;
      }
      puVar3 = &DAT_10003355;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = recovered_10001004((long)puVar3);
  recovered_10000f1c(param_1,(long)puVar3,uVar2);
  return param_1;
}

#undef DAT_10003198
#undef DAT_1000334d
#undef DAT_10003351
#undef DAT_10003355
#undef _DAT_10003198
#undef apvStack_58

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d8
 */

long * recovered_100016d8(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_100031cd;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10001028(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_100010ac(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_100010ac(param_1,uVar4 + lVar7);
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

#undef DAT_100031cd
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

void recovered_100016f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b88(param_1,param_2);
  recovered_100016d8(param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000173c
 */

void recovered_1000173c(long *param_1,undefined8 *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b88(param_1,param_2);
  recovered_10001d98(param_1,param_3);
  return;
}


#define abStack_42 (*(byte (*)[66])(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001788
 */

uint128 recovered_10001788(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint128 auVar12;

  uVar7 = 1;
  if ((((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (uVar7 = 1, param_1 <= param_2)) &&
     (0xffffffdc < param_4 - 0x25)) {
    uVar1 = -param_3;
    if (-1 < (int)param_3) {
      uVar1 = param_3;
    }
    uVar10 = (ulong)param_4;
    uVar8 = (ulong)uVar1;
    uVar11 = 0;
    do {
      uVar9 = uVar11;
      uVar3 = 0;
      if (uVar10 != 0) {
        uVar3 = uVar8 / uVar10;
      }
      uVar11 = uVar8 - uVar3 * uVar10;
      bVar4 = (byte)uVar11;
      bVar2 = bVar4 | 0x30;
      if (9 < uVar11) {
        bVar2 = bVar4 + 0x57;
      }
      abStack_42[uVar9 + 1] = bVar2;
      uVar11 = uVar9 + 1;
      bVar6 = uVar10 <= uVar8;
      uVar8 = uVar3;
    } while (bVar6);
    if ((int)param_3 < 0) {
      abStack_42[uVar9 + 2] = 0x2d;
      uVar11 = uVar9 + 2;
    }
    pbVar5 = param_1;
    uVar8 = uVar11;
    if ((ulong)((long)param_2 - (long)param_1) < uVar11) {
      uVar7 = 2;
      param_1 = param_2;
    }
    else {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar5 = abStack_42[uVar8];
        pbVar5 = pbVar5 + 1;
      }
      uVar7 = 0;
      param_1 = param_1 + uVar11;
    }
  }
  PF_PART8(auVar12, 8) = uVar7;
  PF_PART8(auVar12, 0) = param_1;
  return auVar12;
}

#undef abStack_42

#undef DAT_10003198
#define DAT_10003198 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41cU)))
#undef DAT_1000334d
#define DAT_1000334d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d1U)))
#undef DAT_10003351
#define DAT_10003351 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d5U)))
#undef DAT_10003355
#define DAT_10003355 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5d9U)))
#undef _DAT_10003198
#define _DAT_10003198 (*(double *)(((uintptr_t)pf_module_state + 0x41cU)))
#define local_58 (*(void * (*)[11])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10001854(long *param_1,double param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  long *extraout_x0;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;

  if (NAN(param_2)) {
    puVar3 = &DAT_1000334d;
  }
  else {
    if (0.0 <= param_2) {
      if (param_2 == 0.0) {
        bVar1 = 1.0 / param_2 < 0.0;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
    if (param_2 == INFINITY) {
      puVar3 = &DAT_10003351;
    }
    else {
      if (param_2 != -INFINITY) {
        dVar7 = -param_2;
        if (!bVar1) {
          dVar7 = param_2;
        }
        uVar2 = (ulong)dVar7;
        dVar8 = pf_unsigned_integer_part(dVar7);
        uVar4 = (ulong)(_DAT_10003198 * (dVar7 - dVar8) + 0.5);
        uVar5 = uVar4 - 1000000;
        param_1[1] = 0;
        param_1[2] = 0;
        if (uVar4 < 1000000) {
          uVar5 = uVar4;
        }
        else {
          uVar2 = uVar2 + 1;
        }
        *param_1 = 0;
        if (bVar1) {
          recovered_10001a10(param_1,0x2d);
        }
        recovered_10001a74(local_58,uVar2);
        recovered_100016d8(param_1,local_58);
        _ZdlPv(local_58[0]);
        recovered_10001a10(param_1,0x2e);
        iVar6 = 6;
        uVar2 = 100000;
        do {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = uVar5 / uVar2;
          }
          recovered_10001a10(param_1,(char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30);
          iVar6 = iVar6 + -1;
          uVar2 = uVar2 / 10;
        } while (iVar6 != 0);
        return extraout_x0;
      }
      puVar3 = &DAT_10003355;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = recovered_10001004((long)puVar3);
  recovered_10000f1c(param_1,(long)puVar3,uVar2);
  return param_1;
}

#undef DAT_10003198
#undef DAT_1000334d
#undef DAT_10003351
#undef DAT_10003355
#undef _DAT_10003198
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

void recovered_10001a10(long *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_100010ac(param_1,uVar1);
  }
  recovered_10001074(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a74
 */

void recovered_10001a74(undefined8 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  auVar1 = recovered_10001ad0((ulong)auStack_40,(ulong)(auStack_40 + 0x20),param_2,10);
  if (PF_PART4(auVar1, 8) == 0) {
    recovered_10001124(param_1,(long)auStack_40,PF_PART8(auVar1, 0) - (long)auStack_40);
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}

#undef auStack_40

#define local_41 (*(byte (*)[65])(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad0
 */

uint128 recovered_10001ad0(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint128 auVar10;

  uVar5 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar5 = 1, param_1 <= param_2)) &&
     (0xffffffdc < param_4 - 0x25)) {
    uVar6 = (ulong)param_4;
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = param_3 / uVar6;
      }
      uVar7 = param_3 - uVar2 * uVar6;
      bVar3 = (byte)uVar7;
      bVar1 = bVar3 | 0x30;
      if (9 < uVar7) {
        bVar1 = bVar3 + 0x57;
      }
      uVar7 = uVar8 + 1;
      local_41[uVar8] = bVar1;
      bVar4 = uVar6 <= param_3;
      param_3 = uVar2;
    } while (bVar4);
    if (param_2 - param_1 < uVar7) {
      uVar5 = 2;
      param_1 = param_2;
    }
    else {
      pbVar9 = local_41 + uVar8 + 1;
      for (uVar6 = 0; pbVar9 = pbVar9 + -1, uVar7 != uVar6; uVar6 = uVar6 + 1) {
        *(byte *)(param_1 + uVar6) = *pbVar9;
      }
      uVar5 = 0;
      param_1 = param_1 + uVar7;
    }
  }
  PF_PART8(auVar10, 8) = uVar5;
  PF_PART8(auVar10, 0) = param_1;
  return auVar10;
}

#undef local_41

#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b88
 */

long * recovered_10001b88(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_100031cd;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10000f1c(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_100031cd

#undef str_1000335a
#define str_1000335a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5deU)))
#undef str_1000336b
#define str_1000336b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#define local_70 (*(void * (*)[14])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bc8
 */

long * recovered_10001bc8(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;

  iVar4 = (int)param_1[3];
  if (iVar4 == 10) {
    recovered_10001a74(local_70,param_2);
    recovered_100016d8(param_1,local_70);
    _ZdlPv(local_70[0]);
  }
  else {
    pcVar2 = str_1000335a;
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      pcVar2 = str_1000336b;
    }
    uVar3 = 7;
    if (iVar4 != 8) {
      uVar3 = 0xf;
    }
    lVar1 = 3;
    lVar5 = 0;
    if (iVar4 != 8) {
      lVar1 = 4;
    }
    do {
      lVar6 = lVar5;
      *(char *)((long)local_70 + lVar6) = pcVar2[param_2 & uVar3];
      param_2 = param_2 >> lVar1;
      lVar5 = lVar6 + 1;
    } while (param_2 != 0);
    for (; lVar6 != -1; lVar6 = lVar6 + -1) {
      recovered_10001a10(param_1,*(undefined1 *)((long)local_70 + lVar6));
    }
  }
  return param_1;
}

#undef str_1000335a
#undef str_1000336b
#undef local_70

#define local_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb4
 */

long * recovered_10001cb4(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10001028(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_100010ac(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_100010ac(param_1,uVar3 + lVar5);
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

#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d98
 */

long * recovered_10001d98(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;

  uVar2 = recovered_10001004(param_2);
  if ((param_2 != 0) && (uVar2 != 0)) {
    lStack_38 = 0;
    uVar1 = recovered_10001028(param_1,param_2,&lStack_38);
    lVar6 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_100010ac(param_1,lVar6 + uVar2);
      for (uVar4 = 0; uVar2 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
    }
    else {
      uVar4 = lVar6 - lStack_38;
      if (uVar2 <= (ulong)(lVar6 - lStack_38)) {
        uVar4 = uVar2;
      }
      recovered_100010ac(param_1,uVar4 + lVar6);
      lVar3 = 0;
      for (uVar5 = uVar4; uVar2 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)(*param_1 + lVar6) = *(undefined1 *)(*param_1 + lStack_38 + lVar3);
        lVar3 = lVar3 + 1;
        lVar6 = lVar6 + 1;
      }
    }
    lVar6 = param_1[1];
    param_1[1] = lVar6 + uVar2;
    *(undefined1 *)(*param_1 + lVar6 + uVar2) = 0;
  }
  return param_1;
}

#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dcc
 */

long * recovered_10001dcc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001dfc((long *)param_1[3],param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dfc
 */

long * recovered_10001dfc(long *param_1,long *param_2)

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
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x3) {
    param_2[1] = 0;
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x4) {
    return (long *)0x4;
  }
  if (param_1 == (long *)0x5) {
    return (long *)0x5;
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
  if (param_1 == (long *)0x7) {
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
  if (param_1 == (long *)0x8) {
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
  if (param_1 != (long *)0x9) {
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
 * Address: 0x10001e08
 */

long * recovered_10001e08(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x1) {
    return (long *)0x1;
  }
  if (param_1 == (long *)0x2) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x3) {
    param_2[1] = 0;
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x4) {
    return (long *)0x4;
  }
  if (param_1 == (long *)0x5) {
    return (long *)0x5;
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
  if (param_1 == (long *)0x7) {
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
  if (param_1 == (long *)0x8) {
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
  if (param_1 != (long *)0x9) {
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
 * Address: 0x10001e18
 */

long * recovered_10001e18(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x2) {
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x3) {
    param_2[1] = 0;
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x4) {
    return (long *)0x4;
  }
  if (param_1 == (long *)0x5) {
    return (long *)0x5;
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
  if (param_1 == (long *)0x7) {
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
  if (param_1 == (long *)0x8) {
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
  if (param_1 != (long *)0x9) {
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
 * Address: 0x10001e2c
 */

long * recovered_10001e2c(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == (long *)0x3) {
    param_2[1] = 0;
    _ZdlPv((void *)*param_2);
    return param_2;
  }
  if (param_1 == (long *)0x4) {
    return (long *)0x4;
  }
  if (param_1 == (long *)0x5) {
    return (long *)0x5;
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
  if (param_1 == (long *)0x7) {
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
  if (param_1 == (long *)0x8) {
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
  if (param_1 != (long *)0x9) {
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
 * Address: 0x10001e40
 */

void recovered_10001e40(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 4) {
    return;
  }
  if (param_1 == 5) {
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
  if (param_1 == 7) {
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
  if (param_1 == 8) {
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
  if (param_1 != 9) {
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
 * Address: 0x10001e50
 */

undefined8 * recovered_10001e50(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e7c
 */

void recovered_10001e7c(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 5) {
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
  if (param_1 == 7) {
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
  if (param_1 == 8) {
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
  if (param_1 != 9) {
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
 * Address: 0x10001e8c
 */

void recovered_10001e8c(long param_1,long *param_2)

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
  if (param_1 == 7) {
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
  if (param_1 == 8) {
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
  if (param_1 != 9) {
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
 * Address: 0x10001ea0
 */

void recovered_10001ea0(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 7) {
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
  if (param_1 == 8) {
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
  if (param_1 != 9) {
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
 * Address: 0x10001eb4
 */

void recovered_10001eb4(long *param_1)

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
 * Address: 0x10001f1c
 */

void recovered_10001f1c(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 == 8) {
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
  if (param_1 != 9) {
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
 * Address: 0x10001f30
 */

void recovered_10001f30(long *param_1)

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
 * Address: 0x10001f98
 */

void recovered_10001f98(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  if (param_1 != 9) {
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
 * Address: 0x10001fac
 */

void recovered_10001fac(long *param_1)

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
 * Address: 0x10002014
 */

void recovered_10002014(long *param_1)

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


#undef DAT_100031cd
#define DAT_100031cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x451U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000207c
 */

ulong recovered_1000207c(undefined8 *text,char *needle,ulong count,ulong start)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = text[1];
  local_20 = &DAT_100031cd;
  if ((undefined1 *)*text != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*text;
  }
  uVar1 = recovered_100020b4((long *)&local_20,needle,count,start);
  return uVar1;
}

#undef DAT_100031cd
#undef local_20
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b4
 */

ulong recovered_100020b4(long *param_1,char *param_2,ulong param_3,ulong param_4)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002118
 */

undefined8 * recovered_10002118(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001230(param_1 + 0x1b4);
  recovered_10001230(param_1 + 0x1ae);
  recovered_100021e8(param_1 + 0x1aa);
  recovered_100022d0(param_1 + 0x1a7);
  recovered_1000234c(param_1 + 0x19d);
  recovered_100024e8(param_1 + 0x193);
  recovered_100025f0(param_1 + 0x188);
  recovered_100027bc(param_1 + 0x184);
  recovered_100027bc(param_1 + 0x182);
  recovered_10001230(param_1 + 0x17c);
  recovered_10002824(param_1 + 0x177);
  recovered_10002850(param_1 + 0x32);
  recovered_100028fc(param_1 + 0x2f);
  recovered_1000297c(param_1 + 0x2c);
  recovered_1000297c(param_1 + 0x29);
  recovered_100029a8(param_1 + 0x23);
  recovered_100029a8(param_1 + 0x20);
  recovered_100029a8(param_1 + 0x1d);
  recovered_10002a28(param_1 + 0x1a);
  recovered_10002acc(param_1 + 0x10);
  recovered_10002bac(param_1 + 0xd);
  recovered_10002bd8(param_1 + 10);
  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_10002cb4(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021e8
 */

long * recovered_100021e8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002214(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002214
 */

void recovered_10002214(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10002268((long *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002268
 */

void recovered_10002268(long *param_1)

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
 * Address: 0x100022d0
 */

long * recovered_100022d0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100022fc(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022fc
 */

void recovered_100022fc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x10;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x10;
    recovered_10001fac((long *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000234c
 */

undefined8 * recovered_1000234c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_100023a8(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000237c
 */

long * recovered_1000237c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100023a8(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a8
 */

void recovered_100023a8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x40;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x40;
    recovered_100023f8((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f8
 */

undefined8 * recovered_100023f8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002420(param_1 + 3);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002420
 */

long * recovered_10002420(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002450(param_1 + 2);
  recovered_1000249c(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

void recovered_10002450(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[2];
    plVar1[2] = lVar2 + -1;
    if ((lVar2 + -1 == 0) && (plVar1[1] == 0)) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000249c
 */

void recovered_1000249c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[2];
    plVar1[2] = lVar2 + -1;
    if ((lVar2 + -1 == 0) && (plVar1[1] == 0)) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024e8
 */

undefined8 * recovered_100024e8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_10002544(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002518
 */

long * recovered_10002518(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002544(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002544
 */

void recovered_10002544(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x50;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x50;
    recovered_10002598((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002598
 */

undefined8 * recovered_10002598(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100025c0(param_1 + 3);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c0
 */

long * recovered_100025c0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001fac(param_1 + 2);
  recovered_10002268(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f0
 */

undefined8 * recovered_100025f0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_1000264c(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002620
 */

long * recovered_10002620(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000264c(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000264c
 */

void recovered_1000264c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0xf0 + -0xe8;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_100026a0((long *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0xf0;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

long * recovered_100026a0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002c58(param_1 + 0x11);
  recovered_10002bd8(param_1 + 0xe);
  recovered_100026f0(param_1 + 0xb);
  recovered_10002bd8(param_1 + 7);
  recovered_100026f0(param_1 + 4);
  recovered_10002770(param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f0
 */

long * recovered_100026f0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000271c(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000271c
 */

void recovered_1000271c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10001230((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002770
 */

void recovered_10002770(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[2];
    plVar1[2] = lVar2 + -1;
    if ((lVar2 + -1 == 0) && (plVar1[1] == 0)) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027bc
 */

void recovered_100027bc(long *param_1)

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
 * Address: 0x10002824
 */

undefined8 * recovered_10002824(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002850
 */

undefined8 * recovered_10002850(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_100028ac(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

long * recovered_10002880(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100028ac(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028ac
 */

void recovered_100028ac(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10001230((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028fc
 */

long * recovered_100028fc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002928(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002928
 */

void recovered_10002928(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10002bd8((long *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000297c
 */

undefined8 * recovered_1000297c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a8
 */

long * recovered_100029a8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100029d4(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d4
 */

void recovered_100029d4(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_10002a28((long *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a28
 */

long * recovered_10002a28(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002a54(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a54
 */

void recovered_10002a54(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x40;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x40;
    recovered_10002aa4((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa4
 */

undefined8 * recovered_10002aa4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001dcc(param_1 + 4);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002acc
 */

undefined8 * recovered_10002acc(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_10002b28(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002afc
 */

long * recovered_10002afc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002b28(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b28
 */

void recovered_10002b28(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10002b78((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b78
 */

undefined8 * recovered_10002b78(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((long *)param_1[3] != (long *)0x0) {
    ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)(uintptr_t)param_1[3]+8)))((void *)(uintptr_t)param_1[3]);
  }
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bac
 */

undefined8 * recovered_10002bac(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd8
 */

long * recovered_10002bd8(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002c04(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c04
 */

void recovered_10002c04(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x28 + -0x20;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    recovered_10001dcc((long *)(*param_1 + lVar2));
    lVar2 = lVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c58
 */

undefined8 * recovered_10002c58(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002824(param_1 + 6);
  recovered_10002824(param_1 + 3);
  recovered_10002cb4(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c88
 */

long * recovered_10002c88(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002cb4(param_1);
  _ZdlPv((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb4
 */

void recovered_10002cb4(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = param_1[1];
  lVar1 = lVar2 * 0x20;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = lVar1 + -0x20;
    recovered_10001230((undefined8 *)(*param_1 + lVar1));
  }
  param_1[1] = 0;
  return;
}

