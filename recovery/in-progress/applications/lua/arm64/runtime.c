/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#undef DAT_10001d2b
#define DAT_10001d2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a3U)))
#undef DAT_10001d30
#define DAT_10001d30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a8U)))
#undef DAT_10001d32
#define DAT_10001d32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aaU)))
#undef str_10001d1c
#define str_10001d1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x394U)))
#undef str_10001d23
#define str_10001d23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39bU)))
#undef str_10001d4d
#define str_10001d4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#undef str_10001d61
#define str_10001d61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_10001d7c
#define str_10001d7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
#undef str_10001da9
#define str_10001da9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x421U)))
#undef str_10001db7
#define str_10001db7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42fU)))
#define apvStack_1120 (*(void * (*)[548])(pf_stack_frame + 128))
#define apvStack_10d0 (*(void * (*)[538])(pf_stack_frame + 208))
#define bStack_1088 (*(byte *)(pf_stack_frame + 280))
#define pcStack_1080 (*(char * *)(pf_stack_frame + 288))
#define lStack_1078 (*(long *)(pf_stack_frame + 296))
#define uStack_1068 (*(ulong *)(pf_stack_frame + 312))
#define acStack_1060 (*(char (*)[4192])(pf_stack_frame + 320))
#define auStack_1038 (*(ulong (*)[519])(pf_stack_frame + 360))
#define bStack_1020 (*(byte *)(pf_stack_frame + 384))
#define uStack_1190 (*(undefined8 *)(pf_stack_frame + 16))
#define local_1188 (*(void * *)(pf_stack_frame + 24))
#define local_1180 (*(long *)(pf_stack_frame + 32))
#define uStack_1178 (*(undefined8 *)(pf_stack_frame + 40))
#define local_1170 (*(byte *)(pf_stack_frame + 48))
#define apvStack_1168 (*(void * (*)[557])(pf_stack_frame + 56))
#define apvStack_1150 (*(void * (*)[554])(pf_stack_frame + 80))
#define apvStack_1138 (*(void * (*)[551])(pf_stack_frame + 104))
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
  void *owner;
  undefined1 *puVar6;
  char cVar7;
  long lVar8;

  local_1180 = 0;
  uStack_1178 = 0;
  local_1188 = (void *)0x0;
  local_1170 = param_1 < 2;
  if (param_2 != 0) {
    for (lVar8 = 1; lVar8 < param_1; lVar8 = lVar8 + 1) {
      puVar6 = *(undefined1 **)(param_2 + lVar8 * 8);
      puVar1 = &DAT_10001d1b;
      if (puVar6 != (undefined1 *)0x0) {
        puVar1 = puVar6;
      }
      recovered_10000e9c((long *)&uStack_1068,(long)puVar1);
      uVar5 = recovered_10000d34(&uStack_1068,'=',0);
      if (uVar5 != 0xffffffffffffffff) {
        recovered_10000d6c((long *)apvStack_10d0,&uStack_1068,0,uVar5);
        recovered_10000d6c((long *)apvStack_1120,&uStack_1068,uVar5 + 1,0xffffffffffffffff);
        bVar4 = recovered_10000da8((ulong *)apvStack_10d0,str_10001d1c);
        if (bVar4) {
          recovered_10000e58((long *)&local_1188,(long *)apvStack_1120);
        }
        else {
          bVar4 = recovered_10000da8((ulong *)apvStack_10d0,str_10001d23);
          if (bVar4) {
            bVar4 = recovered_10000da8((ulong *)apvStack_1120,&DAT_10001d2b);
            if (((bVar4) || (bVar4 = recovered_1000116c(apvStack_1120,&DAT_10001d30), bVar4)) ||
               (bVar4 = recovered_10000da8((ulong *)apvStack_1120,&DAT_10001d32), bVar4)) {
              local_1170 = true;
            }
            else {
              local_1170 = recovered_10000da8((ulong *)apvStack_1120,(char *)((uintptr_t)pf_module_state + 0x3aeU));
            }
          }
        }
        _ZdlPv(apvStack_1120[0]);
        _ZdlPv(apvStack_10d0[0]);
      }
      _ZdlPv((void *)CONCAT71(PF_PART7(uStack_1068, 1),(char)uStack_1068));
    }
  }
  _ZN6winter3lua5LuaVMC1Ev(&uStack_1190);
  if (local_1170 == 1) {
    wm_lua_show_banner();
    wm_lua_show_help();
    recovered_10000e9c((long *)apvStack_10d0,((uintptr_t)pf_module_state + 0x3b1U));
    pf_command_result_10001994((undefined1 *)&uStack_1068,&uStack_1190,apvStack_10d0);
    _ZdlPv(apvStack_10d0[0]);
    if ((char)uStack_1068 == '\x01') {
      recovered_10000d14(((uintptr_t)pf_module_state + 0x3bbU));
      recovered_10000cf0(((uintptr_t)pf_module_state + 0x3b1U));
      if (acStack_1060[0] != '\0') {
        pf_command_result_100019d0((long *)apvStack_10d0,acStack_1060);
        recovered_1000121c(apvStack_10d0);
        _ZdlPv(apvStack_10d0[0]);
      }
    }
    else {
      uVar5 = recovered_10000fc8(((uintptr_t)pf_module_state + 0x3c5U));
      uVar5 = recovered_10001244(auStack_1038,str_10001d4d,uVar5,0);
      if (uVar5 == 0xffffffffffffffff) {
        uVar5 = recovered_10000fc8(((uintptr_t)pf_module_state + 0x3d9U));
        uVar5 = recovered_10001244(auStack_1038,str_10001d61,uVar5,0);
        if (uVar5 == 0xffffffffffffffff) {
          recovered_1000127c((char *)&uStack_1068,str_10001d7c);
        }
      }
    }
    recovered_100013d8((long)&uStack_1068);
  }
  if (local_1180 == 0) {
    cVar7 = '\x01';
  }
  else {
    pf_command_result_10001994((undefined1 *)&uStack_1068,&uStack_1190,&local_1188);
    pcVar2 = (char *)0x0;
    if ((char)uStack_1068 == '\0') {
      pcVar2 = str_10001da9;
    }
    recovered_1000127c((char *)&uStack_1068,pcVar2);
    cVar7 = (char)uStack_1068;
    recovered_100013d8((long)&uStack_1068);
    if ((bStack_1020 & 1) != 0) goto LAB_10000b54;
  }
  do {
    do {
      while( true ) {
        if (((local_1170 & 1) == 0) ||
           (bVar4 = wm_lua_readline((long)&uStack_1068,0x1000,str_10001db7,1), !bVar4))
        goto LAB_10000b54;
        recovered_10000e9c((long *)apvStack_10d0,(long)&uStack_1068);
        bVar4 = recovered_1000116c(apvStack_10d0,(char *)((uintptr_t)pf_module_state + 0x44bU));
        if ((bVar4) || (bVar4 = recovered_1000116c(apvStack_10d0,(char *)((uintptr_t)pf_module_state + 0x450U)), bVar4)) {
          _ZdlPv(apvStack_10d0[0]);
          goto LAB_10000b54;
        }
        bVar4 = recovered_1000116c(apvStack_10d0,(char *)((uintptr_t)pf_module_state + 0x455U));
        _ZdlPv(apvStack_10d0[0]);
        if (bVar4) goto LAB_10000b54;
        recovered_10000e9c((long *)apvStack_10d0,(long)&uStack_1068);
        bVar4 = recovered_1000116c(apvStack_10d0,(char *)((uintptr_t)pf_module_state + 0x45bU));
        if (!bVar4) break;
        _ZdlPv(apvStack_10d0[0]);
LAB_10000a48:
        wm_lua_show_help();
      }
      recovered_10000e9c((long *)apvStack_1120,(long)&uStack_1068);
      bVar4 = recovered_1000116c(apvStack_1120,(char *)((uintptr_t)pf_module_state + 0x461U));
      _ZdlPv(apvStack_1120[0]);
      _ZdlPv(apvStack_10d0[0]);
      if (bVar4) goto LAB_10000a48;
    } while ((char)uStack_1068 == '\0');
    recovered_10000e9c((long *)&pcStack_1080,(long)&uStack_1068);
    recovered_1000168c((undefined1 *)apvStack_10d0);
    if (lStack_1078 == 0) {
LAB_10000af8:
      recovered_10000e9c((long *)apvStack_1138,((uintptr_t)pf_module_state + 0x443U));
      pf_command_result_100019a0((undefined1 *)apvStack_1120,&uStack_1190,&pcStack_1080,apvStack_1138);
      recovered_10001648((undefined1 *)apvStack_10d0,(undefined1 *)apvStack_1120);
      recovered_100013d8((long)apvStack_1120);
      owner = apvStack_1138[0];
    }
    else {
      pcVar2 = &DAT_10001d1b;
      if (pcStack_1080 != (char *)0x0) {
        pcVar2 = pcStack_1080;
      }
      if (*pcVar2 != '=') goto LAB_10000af8;
      recovered_10000d6c((long *)apvStack_1150,&pcStack_1080,1,0xffffffffffffffff);
      recovered_100015fc((long *)apvStack_1138,((uintptr_t)pf_module_state + 0x43bU),apvStack_1150);
      recovered_10000e9c((long *)apvStack_1168,((uintptr_t)pf_module_state + 0x443U));
      pf_command_result_100019a0((undefined1 *)apvStack_1120,&uStack_1190,apvStack_1138,apvStack_1168);
      recovered_10001648((undefined1 *)apvStack_10d0,(undefined1 *)apvStack_1120);
      recovered_100013d8((long)apvStack_1120);
      _ZdlPv(apvStack_1168[0]);
      _ZdlPv(apvStack_1138[0]);
      owner = apvStack_1150[0];
    }
    _ZdlPv(owner);
    recovered_1000127c((char *)apvStack_10d0,(char *)0x0);
    bVar3 = bStack_1088;
    recovered_100013d8((long)apvStack_10d0);
    _ZdlPv(pcStack_1080);
  } while ((bVar3 & 1) == 0);
LAB_10000b54:
  _ZN6winter3lua5LuaVMD1Ev(&uStack_1190);
  _ZdlPv(local_1188);
  wm_lua_flush_output();
  return cVar7;
}

#undef DAT_10001d1b
#undef DAT_10001d2b
#undef DAT_10001d30
#undef DAT_10001d32
#undef str_10001d1c
#undef str_10001d23
#undef str_10001d4d
#undef str_10001d61
#undef str_10001d7c
#undef str_10001da9
#undef str_10001db7
#undef apvStack_1120
#undef apvStack_10d0
#undef bStack_1088
#undef pcStack_1080
#undef lStack_1078
#undef uStack_1068
#undef acStack_1060
#undef auStack_1038
#undef bStack_1020
#undef uStack_1190
#undef local_1188
#undef local_1180
#undef uStack_1178
#undef local_1170
#undef apvStack_1168
#undef apvStack_1150
#undef apvStack_1138

#undef PTR_LAB_10008088
#define PTR_LAB_10008088 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6700U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf0
 */

void recovered_10000cf0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000d14(param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xd4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008088)();
  return;
}

#undef PTR_LAB_10008088

#undef PTR_LAB_10008080
#define PTR_LAB_10008080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x66f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d04
 */

void recovered_10000d04(long param_1)

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
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xc8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008080)();
  return;
}

#undef PTR_LAB_10008080

#undef PTR_LAB_10008080
#define PTR_LAB_10008080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x66f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d14
 */

void recovered_10000d14(long param_1)

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
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xc8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008080)(param_1,lVar2);
  return;
}

#undef PTR_LAB_10008080

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
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
#undef local_20
#undef uStack_18

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d6c
 */

long * recovered_10000d6c(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

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
  puVar2 = &DAT_10001d1b;
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
  recovered_10000ee0(param_1,(long)(puVar2 + uVar1),uVar3);
  return param_1;
}

#undef DAT_10001d1b

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define pvStack_48 (*(void * *)(pf_stack_frame + 24))
#define uStack_40 (*(ulong *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da8
 */

bool recovered_10000da8(ulong *text,char *literal)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;

  if (literal == (char *)0x0) {
    return false;
  }
  uVar7 = text[1];
  recovered_10000e9c((long *)&pvStack_48,(long)literal);
  _ZdlPv(pvStack_48);
  if (uVar7 == uStack_40) {
    uVar7 = text[1];
    pbVar4 = &DAT_10001d1b;
    if ((byte *)*text != (byte *)0x0) {
      pbVar4 = (byte *)*text;
    }
    do {
      bVar3 = uVar7 == 0;
      if (uVar7 == 0) {
        return true;
      }
      bVar1 = *pbVar4;
      bVar2 = *literal;
      uVar5 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar5 = (uint)bVar1;
      }
      uVar6 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        uVar6 = (uint)bVar2;
      }
      uVar7 = uVar7 - 1;
      pbVar4 = pbVar4 + 1;
      literal = literal + 1;
    } while (uVar5 == uVar6);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_10001d1b
#undef pvStack_48
#undef uStack_40

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

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10001d1b;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10000fc8((long)param_2);
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
#undef PTR_LAB_10008088
#define PTR_LAB_10008088 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x6700U)))
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
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xd4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_10008088)();
  return;
}

#undef DAT_10001d1b
#undef PTR_LAB_10008088

#undef DAT_10001d1b
#define DAT_10001d1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x393U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001244
 */

ulong recovered_10001244(ulong *text,char *needle,ulong length,ulong offset)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_18 = text[1];
  local_20 = &DAT_10001d1b;
  if ((undefined1 *)*text != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*text;
  }
  uVar1 = recovered_10001334((long *)&local_20,needle,length,offset);
  return uVar1;
}

#undef DAT_10001d1b
#undef local_20
#undef uStack_18

#define apvStack_38 (*(void * (*)[7])(pf_stack_frame + 24))
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
    pf_command_result_100019d0((long *)apvStack_38,param_1 + 8);
    recovered_1000121c(apvStack_38);
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      recovered_10000d14((long)param_2);
      recovered_10000d14(((uintptr_t)pf_module_state + 0x403U));
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      recovered_10000e9c((long *)apvStack_38,((uintptr_t)pf_module_state + 0x406U));
    }
    else {
      recovered_10001398((long *)apvStack_38,(undefined8 *)(param_1 + 0x30));
    }
    recovered_1000121c(apvStack_38);
  }
  _ZdlPv(apvStack_38[0]);
  return;
}

#undef apvStack_38

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

long * recovered_10001398(long *param_1,undefined8 *param_2)

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

  recovered_10001438((long *)param_1[3],param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001438
 */

long * recovered_10001438(long *param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
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
        (**(code **)(*plVar1 + 0x10))();
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
      (**(code **)(*plVar1 + 0x10))();
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
 * Address: 0x10001444
 */

long * recovered_10001444(long *param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
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
        (**(code **)(*plVar1 + 0x10))();
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
      (**(code **)(*plVar1 + 0x10))();
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
 * Address: 0x10001454
 */

long * recovered_10001454(long *param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
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
        (**(code **)(*plVar1 + 0x10))();
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
      (**(code **)(*plVar1 + 0x10))();
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
 * Address: 0x10001464
 */

long * recovered_10001464(long *param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
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
        (**(code **)(*plVar1 + 0x10))();
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
      (**(code **)(*plVar1 + 0x10))();
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
 * Address: 0x10001474
 */

long * recovered_10001474(long *param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
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
        (**(code **)(*plVar1 + 0x10))();
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
      (**(code **)(*plVar1 + 0x10))();
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
 * Address: 0x10001488
 */

void recovered_10001488(long param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
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
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
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
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000149c
 */

void recovered_1000149c(long param_1,long *param_2)

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
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = (long *)*param_2;
        lVar2 = plVar1[2];
        plVar1[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar1 + 8))();
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
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
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
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = (long *)*param_2;
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
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
#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016c4
 */

long * recovered_100016c4(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10001d1b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10000fec(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10001070(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10001070(param_1,uVar4 + lVar7);
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

#undef DAT_10001d1b
#undef lStack_38

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
  recovered_10001838((long *)(param_1 + 8),(long *)(param_2 + 8));
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

long * recovered_10001838(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != param_2) {
    recovered_10001438((long *)param_1[3],param_1);
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

  undefined8 uVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
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
 * Address: 0x10001890
 */

void recovered_10001890(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 1) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
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
 * Address: 0x100018a8
 */

void recovered_100018a8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 2) {
    *param_2 = *param_3;
    return;
  }
  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
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
 * Address: 0x100018c0
 */

void recovered_100018c0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 3) {
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  }
  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
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
 * Address: 0x100018d8
 */

void recovered_100018d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 4) {
    *param_2 = *param_3;
    uVar1 = param_3[1];
    param_2[2] = param_3[2];
    param_2[1] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
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
