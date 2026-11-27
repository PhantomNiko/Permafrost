/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#undef DAT_10001d30
#define DAT_10001d30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a8U)))
#undef DAT_10001dd3
#define DAT_10001dd3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef DAT_10001dd8
#define DAT_10001dd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x450U)))
#undef str_10001d39
#define str_10001d39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b1U)))
#undef str_10001d43
#define str_10001d43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_10001d7c
#define str_10001d7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_10001da9
#define str_10001da9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x421U)))
#undef str_10001db7
#define str_10001db7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#undef str_10001dc3
#define str_10001dc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43bU)))
#undef str_10001ddd
#define str_10001ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x455U)))
#undef str_10001de3
#define str_10001de3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45bU)))
#undef str_10001de9
#define str_10001de9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x461U)))
#define local_1188 (*(long *)(pf_stack_frame + 24))
#define local_1180 (*(long *)(pf_stack_frame + 32))
#define local_1170 (*(byte *)(pf_stack_frame + 48))
#define local_1168 (*(void * (*)[557])(pf_stack_frame + 56))
#define local_1150 (*(void * (*)[554])(pf_stack_frame + 80))
#define local_1138 (*(void * (*)[551])(pf_stack_frame + 104))
#define local_1088 (*(byte *)(pf_stack_frame + 280))
#define local_1080 (*(char * *)(pf_stack_frame + 288))
#define local_1078 (*(long *)(pf_stack_frame + 296))
#define uStack_1190 (*(undefined8 *)(pf_stack_frame + 16))
#define local_1068 (*(ulong *)(pf_stack_frame + 312))
#define local_1060 (*(char (*)[4192])(pf_stack_frame + 320))
#define local_1020 (*(byte *)(pf_stack_frame + 384))
#define uStack_1178 (*(undefined8 *)(pf_stack_frame + 40))
#define alStack_1120 (*(long (*)[548])(pf_stack_frame + 128))
#define alStack_10d0 (*(long (*)[538])(pf_stack_frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006d0
 */

/* WARNING: Type propagation algorithm not settling */

char recovered_100006d0(int param_1,long param_2)

{
  unsigned char pf_stack_frame[4544] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long extraout_x0;
  long extraout_x0_00;
  void *owner;
  undefined1 *puVar6;
  char cVar7;
  long lVar8;

  local_1180 = 0;
  uStack_1178 = 0;
  local_1188 = 0;
  local_1170 = param_1 < 2;
  if (param_2 != 0) {
    for (lVar8 = 1; lVar8 < param_1; lVar8 = lVar8 + 1) {
      puVar6 = *(undefined1 **)(param_2 + lVar8 * 8);
      puVar1 = &DAT_10001d1b;
      if (puVar6 != (undefined1 *)0x0) {
        puVar1 = puVar6;
      }
      recovered_10000e9c((long *)&local_1068,(long)puVar1);
      uVar5 = recovered_10000d34(&local_1068,'=',0);
      if (uVar5 != 0xffffffffffffffff) {
        recovered_10000d6c(alStack_10d0,&local_1068,0,uVar5);
        recovered_10000d6c(alStack_1120,&local_1068,uVar5 + 1,0xffffffffffffffff);
        bVar4 = recovered_10000da8(alStack_10d0,((uintptr_t)pf_module_state + 0x394U));
        if (bVar4) {
          recovered_10000e58(&local_1188,alStack_1120);
        }
        else {
          bVar4 = recovered_10000da8(alStack_10d0,((uintptr_t)pf_module_state + 0x39bU));
          if (bVar4) {
            bVar4 = recovered_10000da8(alStack_1120,((uintptr_t)pf_module_state + 0x3a3U));
            if (((bVar4) || (bVar4 = recovered_1000116c(alStack_1120,&DAT_10001d30), bVar4)) ||
               (bVar4 = recovered_10000da8(alStack_1120,((uintptr_t)pf_module_state + 0x3aaU)), bVar4)) {
              local_1170 = true;
            }
            else {
              local_1170 = recovered_10000da8(alStack_1120,((uintptr_t)pf_module_state + 0x3aeU));
            }
          }
        }
        recovered_10001980();
        recovered_10001938();
      }
      _ZdlPv((void *)CONCAT71(PF_PART7(local_1068, 1),(char)local_1068));
    }
  }
  _ZN6winter3lua5LuaVMC1Ev(&uStack_1190);
  if (local_1170 == 1) {
    wm_lua_show_banner();
    wm_lua_show_help();
    recovered_10000e9c(alStack_10d0,((uintptr_t)pf_module_state + 0x3b1U));
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)&local_1068,&uStack_1190,alStack_10d0);
    recovered_10001938();
    if ((char)local_1068 == '\x01') {
      recovered_10000d14(str_10001d43);
      recovered_10000cf0(str_10001d39);
      if (local_1060[0] != '\0') {
        _ZNK6winter3lua8LuaValue8toStringEv(alStack_10d0,local_1060);
        recovered_1000121c(alStack_10d0);
        recovered_10001938();
      }
    }
    else {
      recovered_10000fc8(((uintptr_t)pf_module_state + 0x3c5U));
      recovered_10001940();
      if (extraout_x0 == -1) {
        recovered_10000fc8(((uintptr_t)pf_module_state + 0x3d9U));
        recovered_10001940();
        if (extraout_x0_00 == -1) {
          recovered_1000127c((char *)&local_1068,str_10001d7c);
        }
      }
    }
    recovered_10001978();
  }
  if (local_1180 == 0) {
    cVar7 = '\x01';
  }
  else {
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)&local_1068,&uStack_1190,&local_1188);
    pcVar2 = (char *)0x0;
    if ((char)local_1068 == '\0') {
      pcVar2 = str_10001da9;
    }
    recovered_1000127c((char *)&local_1068,pcVar2);
    cVar7 = (char)local_1068;
    recovered_10001978();
    if ((local_1020 & 1) != 0) goto LAB_10000b54;
  }
  do {
    do {
      while( true ) {
        if (((local_1170 & 1) == 0) ||
           (bVar4 = wm_lua_readline((long)&local_1068,0x1000,str_10001db7,1), !bVar4))
        goto LAB_10000b54;
        recovered_10001964(alStack_10d0);
        bVar4 = recovered_1000116c(alStack_10d0,&DAT_10001dd3);
        if ((bVar4) || (bVar4 = recovered_1000116c(alStack_10d0,&DAT_10001dd8), bVar4)) {
          recovered_10001938();
          goto LAB_10000b54;
        }
        bVar4 = recovered_1000116c(alStack_10d0,str_10001ddd);
        recovered_10001938();
        if (bVar4) goto LAB_10000b54;
        recovered_10001964(alStack_10d0);
        bVar4 = recovered_1000116c(alStack_10d0,str_10001de3);
        if (!bVar4) break;
        recovered_10001938();
LAB_10000a48:
        wm_lua_show_help();
      }
      recovered_10001964(alStack_1120);
      bVar4 = recovered_1000116c(alStack_1120,str_10001de9);
      recovered_10001980();
      recovered_10001938();
      if (bVar4) goto LAB_10000a48;
    } while ((char)local_1068 == '\0');
    recovered_10001964(&local_1080);
    recovered_1000168c((undefined1 *)alStack_10d0);
    if (local_1078 == 0) {
LAB_10000af8:
      recovered_10000e9c((long *)local_1138,((uintptr_t)pf_module_state + 0x443U));
      _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)alStack_1120,&uStack_1190,&local_1080,local_1138);
      recovered_1000196c();
      recovered_10001954();
      owner = local_1138[0];
    }
    else {
      pcVar2 = &DAT_10001d1b;
      if (local_1080 != (char *)0x0) {
        pcVar2 = local_1080;
      }
      if (*pcVar2 != '=') goto LAB_10000af8;
      recovered_10000d6c(local_1150,&local_1080,1,0xffffffffffffffff);
      recovered_100015fc((long *)local_1138,str_10001dc3,local_1150);
      recovered_10000e9c((long *)local_1168,((uintptr_t)pf_module_state + 0x443U));
      _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)alStack_1120,&uStack_1190,local_1138,local_1168);
      recovered_1000196c();
      recovered_10001954();
      _ZdlPv(local_1168[0]);
      _ZdlPv(local_1138[0]);
      owner = local_1150[0];
    }
    _ZdlPv(owner);
    recovered_1000127c((char *)alStack_10d0,(char *)0x0);
    bVar3 = local_1088;
    recovered_100013d8((long)alStack_10d0);
    _ZdlPv(local_1080);
  } while ((bVar3 & 1) == 0);
LAB_10000b54:
  _ZN6winter3lua5LuaVMD1Ev(&uStack_1190);
  recovered_1000195c();
  wm_lua_flush_output();
  return cVar7;
}

#undef DAT_10001d1b
#undef DAT_10001d30
#undef DAT_10001dd3
#undef DAT_10001dd8
#undef str_10001d39
#undef str_10001d43
#undef str_10001d7c
#undef str_10001da9
#undef str_10001db7
#undef str_10001dc3
#undef str_10001ddd
#undef str_10001de3
#undef str_10001de9
#undef local_1188
#undef local_1180
#undef local_1170
#undef local_1168
#undef local_1150
#undef local_1138
#undef local_1088
#undef local_1080
#undef local_1078
#undef uStack_1190
#undef local_1068
#undef local_1060
#undef local_1020
#undef uStack_1178
#undef alStack_1120
#undef alStack_10d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf0
 */

void recovered_10000cf0(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d14(param_1);
  wm_lua_writeline();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void recovered_10000d04(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *extraout_x0 = 0;
  long lVar2;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  if (extraout_x0 == (char *)0x0) {
    return;
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (extraout_x0[lVar2] != '\0');
  wm_lua_write(extraout_x0,lVar2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d14
 */

void recovered_10000d14(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_1[lVar2] != '\0');
  wm_lua_write(param_1,lVar2);
  return;
}


#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d34
 */

ulong recovered_10000d34(ulong *text,char character,ulong offset)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = text[1];
  local_20 = &DAT_10001d1b;
  if ((undefined1 *)*text != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*text;
  }
  uVar1 = recovered_10001138((long *)&local_20,character,offset);
  return uVar1;
}

#undef DAT_10001d1b
#undef uStack_18
#undef local_20

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d6c
 */

void recovered_10000d6c(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar4 = param_2[1];
  uVar1 = uVar4;
  if (param_3 <= uVar4) {
    uVar1 = param_3;
  }
  uVar4 = uVar4 - uVar1;
  uVar2 = uVar4;
  if (param_4 <= uVar4) {
    uVar2 = param_4;
  }
  if (param_4 != 0xffffffffffffffff) {
    uVar4 = uVar2;
  }
  puVar3 = &DAT_10001d1b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_100010e8(param_1,(long)(puVar3 + uVar1),uVar4);
  return;
}

#undef DAT_10001d1b

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define local_48 (*(void * *)(pf_stack_frame + 24))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

bool recovered_10000da8(undefined8 param_1,long param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  long extraout_x0;
  long extraout_x1;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;

  if (param_2 == 0) {
    return false;
  }
  recovered_1000192c();
  lVar7 = *(long *)(extraout_x0 + 8);
  recovered_10000e9c((long *)&local_48,extraout_x1);
  _ZdlPv(local_48);
  if (lVar7 == lStack_40) {
    lVar7 = unaff_x20[1];
    pbVar4 = &DAT_10001d1b;
    if ((byte *)*unaff_x20 != (byte *)0x0) {
      pbVar4 = (byte *)*unaff_x20;
    }
    do {
      bVar3 = lVar7 == 0;
      if (lVar7 == 0) {
        return true;
      }
      bVar1 = *pbVar4;
      bVar2 = *unaff_x19;
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
      unaff_x19 = unaff_x19 + 1;
    } while (uVar5 == uVar6);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_10001d1b
#undef local_48
#undef lStack_40

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e58
 */

long * recovered_10000e58(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (param_1 != param_2) {
    puVar1 = &DAT_10001d1b;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10000ee0(param_1,(long)puVar1,param_2[1]);
  }
  return param_1;
}

#undef DAT_10001d1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e9c
 */

long * recovered_10000e9c(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10000fc8(param_2);
  recovered_10000ee0(param_1,param_2,uVar1);
  return param_1;
}


#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_48 (*(long *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee0
 */

void recovered_10000ee0(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *owner;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10000fec(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10001038(param_1);
    }
    else {
      recovered_10001070(param_1,uVar1);
      for (uVar3 = 0; uVar1 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_100010e8(&local_50,*param_1 + local_38,uVar1);
    owner = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = owner;
    local_48 = lVar4;
    lStack_40 = lVar5;
    _ZdlPv(owner);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc8
 */

long recovered_10000fc8(long param_1)

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
 * Address: 0x10000fec
 */

undefined8 recovered_10000fec(long *param_1,long param_2,long *param_3)

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
 * Address: 0x10001038
 */

void recovered_10001038(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_1000111c(0);
    *param_1 = (long)pcVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001070
 */

void recovered_10001070(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pcVar1 = recovered_1000111c(param_2);
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
 * Address: 0x100010e8
 */

undefined8 * recovered_100010e8(undefined8 *param_1,long param_2,ulong param_3)

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
  recovered_10000ee0(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000111c
 */

char * recovered_1000111c(ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = _Znwm(capacity + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001138
 */

ulong recovered_10001138(long *param_1,char param_2,ulong param_3)

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


#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000116c
 */

bool recovered_1000116c(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  bool bVar3;
  long lVar4;

  lVar2 = param_1[1];
  pcVar1 = &DAT_10001d1b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  lVar4 = recovered_10000fc8((long)param_2);
  bVar3 = recovered_100011bc(pcVar1,lVar2,param_2,lVar4);
  return bVar3;
}

#undef DAT_10001d1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011bc
 */

bool recovered_100011bc(char *param_1,long param_2,char *param_3,long param_4)

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
 * Address: 0x100011f4
 */

undefined8 * recovered_100011f4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv((void *)*param_1);
  return param_1;
}


#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000121c
 */

void recovered_1000121c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_10001d1b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = (char *)*param_1;
  }
  wm_lua_write(pcVar1,param_1[1]);
  wm_lua_writeline();
  return;
}

#undef DAT_10001d1b

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001244
 */

void recovered_10001244(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_10001d1b;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10001334((long *)&local_20,param_2,param_3,param_4);
  return;
}

#undef DAT_10001d1b
#undef local_20
#undef uStack_18

#undef DAT_10001d8b
#define DAT_10001d8b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x403U)))
#define alStack_38 (*(long (*)[7])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000127c
 */

void recovered_1000127c(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};


  if (*param_1 == '\x01') {
    if (param_1[8] == '\0') {
      return;
    }
    _ZNK6winter3lua8LuaValue8toStringEv(alStack_38,param_1 + 8);
    recovered_1000121c(alStack_38);
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      recovered_10000d14(param_2);
      recovered_10000d14(&DAT_10001d8b);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      recovered_10000e9c(alStack_38,((uintptr_t)pf_module_state + 0x406U));
    }
    else {
      recovered_10001398(alStack_38,(undefined8 *)(param_1 + 0x30));
    }
    recovered_1000121c(alStack_38);
  }
  recovered_1000195c();
  return;
}

#undef DAT_10001d8b
#undef alStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001334
 */

ulong recovered_10001334(long *param_1,char *param_2,ulong param_3,ulong param_4)

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


#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001398
 */

undefined8 * recovered_10001398(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10001d1b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10000ee0(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10001d1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d8
 */

long recovered_100013d8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011f4((undefined8 *)(param_1 + 0x30));
  recovered_10001408((long *)(param_1 + 0x10));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001408
 */

long * recovered_10001408(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001438(param_1[3],param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001438
 */

void recovered_10001438(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001444(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001444
 */

void recovered_10001444(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1) {
    return;
  }
  recovered_10001454(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001454
 */

void recovered_10001454(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 2) {
    return;
  }
  recovered_10001464(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001464
 */

void recovered_10001464(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 3) {
    return;
  }
  recovered_10001474(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001474
 */

void recovered_10001474(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 4) {
    recovered_100011f4(param_2);
    return;
  }
  recovered_10001488(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001488
 */

void recovered_10001488(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 5) {
    recovered_100014b0(param_2);
    return;
  }
  recovered_1000149c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000149c
 */

void recovered_1000149c(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 6) {
    recovered_1000152c(param_2);
    return;
  }
  recovered_10001518(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b0
 */

void recovered_100014b0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001518
 */

void recovered_10001518(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 7) {
    recovered_10001594(param_2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000152c
 */

void recovered_1000152c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001594
 */

void recovered_10001594(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_1;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015fc
 */

void recovered_100015fc(long *param_1,long param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e9c(param_1,param_2);
  recovered_100016c4(param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001648
 */

undefined1 * recovered_10001648(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_100017c0(param_1 + 8,param_2 + 8);
  recovered_100017ec((undefined8 *)(param_1 + 0x30),(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000168c
 */

undefined1 * recovered_1000168c(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  _ZN6winter3lua8LuaValueC1Ev(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return param_1;
}


#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016c4
 */

void recovered_100016c4(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10001d1b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100016dc(param_1,(long)puVar1,param_2[1]);
  return;
}

#undef DAT_10001d1b

#define local_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016dc
 */

long * recovered_100016dc(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10000fec(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10001070(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10001070(param_1,uVar3 + lVar5);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017c0
 */

undefined1 * recovered_100017c0(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_2;
  recovered_10001838((undefined8 *)(param_1 + 8),(undefined8 *)(param_2 + 8));
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017ec
 */

undefined8 * recovered_100017ec(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 != param_2) {
    _ZdlPv((void *)*param_1);
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001838
 */

undefined8 * recovered_10001838(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != param_2) {
    recovered_10001438(param_1[3],param_1);
    lVar1 = param_2[3];
    param_1[3] = lVar1;
    recovered_10001884(lVar1,param_1,param_2);
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001884
 */

void recovered_10001884(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001890(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

void recovered_10001890(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  recovered_100018a8(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a8
 */

void recovered_100018a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  recovered_100018c0(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018c0
 */

void recovered_100018c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  recovered_100018d8(param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d8
 */

void recovered_100018d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 4) {
    recovered_10001910(param_2,param_3);
    return;
  }
  if (param_1 - 5U < 3) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

void recovered_10001910(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000192c
 */

void recovered_1000192c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#define in_stack_000000c0 (*(void * *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001938
 */

void recovered_10001938(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  _ZdlPv(in_stack_000000c0);
  return;
}

#undef in_stack_000000c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001940
 */

void recovered_10001940(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong in_x0;
  char *unaff_x19;
  long unaff_x20;

  recovered_10001244((undefined8 *)(unaff_x20 + 0x30),unaff_x19,in_x0,0);
  return;
}


#define uStack0000000000000070 (*(undefined1 *)(pf_stack_frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001954
 */

void recovered_10001954(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_100013d8((long)&uStack0000000000000070);
  return;
}

#undef uStack0000000000000070

#define in_stack_00000008 (*(void * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000195c
 */

void recovered_1000195c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  _ZdlPv(in_stack_00000008);
  return;
}

#undef in_stack_00000008

#define uStack0000000000000128 (*(undefined1 *)(pf_stack_frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001964
 */

void recovered_10001964(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10000e9c(param_1,(long)&uStack0000000000000128);
  return;
}

#undef uStack0000000000000128

#define uStack0000000000000070 (*(undefined1 *)(pf_stack_frame + 144))
#define uStack00000000000000c0 (*(undefined1 *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000196c
 */

void recovered_1000196c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_10001648(&uStack00000000000000c0,&uStack0000000000000070);
  return;
}

#undef uStack0000000000000070
#undef uStack00000000000000c0

#define uStack0000000000000128 (*(undefined1 *)(pf_stack_frame + 328))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001978
 */

void recovered_10001978(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  recovered_100013d8((long)&uStack0000000000000128);
  return;
}

#undef uStack0000000000000128

#define in_stack_00000070 (*(void * *)(pf_stack_frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001980
 */

void recovered_10001980(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  _ZdlPv(in_stack_00000070);
  return;
}

#undef in_stack_00000070
