/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100048a8
#define DAT_100048a8 (*(int *)(0x100048a8U))
#undef DAT_100048cc
#define DAT_100048cc (*(int *)(0x100048ccU))
#undef DAT_10007d6d
#define DAT_10007d6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10007d7d
#define DAT_10007d7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef DAT_10007d82
#define DAT_10007d82 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a6U)))
#undef DAT_10007d86
#define DAT_10007d86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aaU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef str_10007d6e
#define str_10007d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_10007d75
#define str_10007d75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x299U)))
#undef str_10007d89
#define str_10007d89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2adU)))
#undef str_10007dad
#define str_10007dad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d1U)))
#undef str_10007ded
#define str_10007ded (*(char (*)[1])(((uintptr_t)pf_module_state + 0x311U)))
#undef str_10007e20
#define str_10007e20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_10007e43
#define str_10007e43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x367U)))
#undef str_10007e71
#define str_10007e71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x395U)))
#undef str_10007e82
#define str_10007e82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a6U)))
#undef str_10007e8b
#define str_10007e8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3afU)))
#undef str_10007f8b
#define str_10007f8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4afU)))
#define local_1160 (*(void * *)(pf_stack_frame + 3056))
#define local_115c (*(int *)(pf_stack_frame + 3060))
#define local_1158 (*(undefined4 *)(pf_stack_frame + 3064))
#define local_1154 (*(char *)(pf_stack_frame + 3068))
#define local_1150 (*(byte * *)(pf_stack_frame + 3072))
#define local_114c (*(uint *)(pf_stack_frame + 3076))
#define local_1148 (*(undefined4 *)(pf_stack_frame + 3080))
#define local_1144 (*(byte * *)(pf_stack_frame + 3084))
#define local_1140 (*(uint *)(pf_stack_frame + 3088))
#define local_113c (*(undefined4 *)(pf_stack_frame + 3092))
#define local_112c (*(char * *)(pf_stack_frame + 3108))
#define local_1128 (*(uint *)(pf_stack_frame + 3112))
#define local_1124 (*(undefined4 *)(pf_stack_frame + 3116))
#define local_1120 (*(char * *)(pf_stack_frame + 3120))
#define local_111c (*(int *)(pf_stack_frame + 3124))
#define local_1118 (*(undefined4 *)(pf_stack_frame + 3128))
#define local_1110 (*(int *)(pf_stack_frame + 3136))
#define local_110c (*(void * *)(pf_stack_frame + 3140))
#define local_1108 (*(undefined4 *)(pf_stack_frame + 3144))
#define local_1100 (*(uint *)(pf_stack_frame + 3152))
#define local_10fc (*(void * *)(pf_stack_frame + 3156))
#define local_10f8 (*(undefined4 *)(pf_stack_frame + 3160))
#define local_10f4 (*(undefined4 *)(pf_stack_frame + 3164))
#define local_10f0 (*(char (*)[4336])(pf_stack_frame + 3168))
#define local_f0 (*(char * *)(pf_stack_frame + 7264))
#define local_ec (*(int *)(pf_stack_frame + 7268))
#define local_e8 (*(undefined4 *)(pf_stack_frame + 7272))
#define local_e4 (*(char * *)(pf_stack_frame + 7276))
#define local_e0 (*(int *)(pf_stack_frame + 7280))
#define local_dc (*(undefined4 *)(pf_stack_frame + 7284))
#define local_cc (*(void ** *)(pf_stack_frame + 7300))
#define local_c8 (*(uint *)(pf_stack_frame + 7304))
#define local_c0 (*(undefined4 *)(pf_stack_frame + 7312))
#define local_b9 (*(undefined1 *)(pf_stack_frame + 7319))
#define local_b8 (*(uint *)(pf_stack_frame + 7320))
#define local_b4 (*(char * *)(pf_stack_frame + 7324))
#define local_b0 (*(char * *)(pf_stack_frame + 7328))
#define local_ac (*(uint *)(pf_stack_frame + 7332))
#define auStack_1d40 (*(undefined1 (*)[7488])(pf_stack_frame + 16))
#define local_a8 (*(char * *)(pf_stack_frame + 7336))
#define local_a4 (*(char * *)(pf_stack_frame + 7340))
#define local_a0 (*(uint *)(pf_stack_frame + 7344))
#define local_90 (*(undefined4 *)(pf_stack_frame + 7360))
#define local_7c (*(undefined4 *)(pf_stack_frame + 7380))
#define local_78 (*(int *)(pf_stack_frame + 7384))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 7388))
#define local_70 (*(int *)(pf_stack_frame + 7392))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 7396))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 7356))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 7400))
#define local_1d38 (*(uint *)(pf_stack_frame + 24))
#define local_1d34 (*(int *)(pf_stack_frame + 28))
#define local_1d30 (*(int *)(pf_stack_frame + 32))
#define local_1d2c (*(int *)(pf_stack_frame + 36))
#define local_1d28 (*(void * *)(pf_stack_frame + 40))
#define local_1d24 (*(uint *)(pf_stack_frame + 44))
#define local_1d20 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003868
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003868(int param_1,int param_2)

{
  unsigned char pf_stack_frame[7536] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_1d40;
  local_1158 = 0;
  local_115c = 0;
  local_1160 = (void *)0x0;
  local_1154 = param_1 < 2;
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0xfcU);
  local_70 = (*(uint32_t *)(uint32_t[]){0x1114ULL}) + 0x100038ec;
  local_1d30 = param_2;
  _Unwind_SjLj_Register(&uStack_94);
  local_1d34 = param_1;
  if ((1 < param_1) && (local_1d30 != 0)) {
    iVar4 = 1;
LAB_10003980:
    puVar5 = *(undefined1 **)(local_1d30 + iVar4 * 4);
    local_1124 = 0;
    local_1128 = 0;
    local_112c = (char *)0x0;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_10007d6d;
    }
    uVar8 = 0;
    do {
      uVar9 = uVar8;
      uVar8 = uVar9 + 1;
    } while (puVar5[uVar9] != '\0');
    local_90 = 1;
    local_1d2c = iVar4;
    recovered_10004f54((int *)&local_112c,(int)puVar5,uVar9);
    pcVar6 = local_112c;
    if (local_112c == (char *)0x0) {
      pcVar6 = &DAT_10007d6d;
    }
    if (local_1128 != 0) {
      iVar4 = 0;
      do {
        if (pcVar6[-iVar4] == '=') {
          if (iVar4 != 1) {
            local_113c = 0;
            local_1140 = 0;
            local_1144 = (byte *)0x0;
            local_90 = 2;
            uVar8 = -iVar4;
            if (local_1128 < (uint)-iVar4) {
              uVar8 = local_1128;
            }
            local_1d38 = iVar4;
            recovered_10004f54((int *)&local_1144,(int)pcVar6,uVar8);
            local_1148 = 0;
            local_114c = 0;
            local_1150 = (byte *)0x0;
            local_90 = 3;
            uVar8 = 1 - local_1d38;
            if (local_1128 < 1 - local_1d38) {
              uVar8 = local_1128;
            }
            pcVar6 = local_112c;
            if (local_112c == (char *)0x0) {
              pcVar6 = &DAT_10007d6d;
            }
            recovered_10004f54((int *)&local_1150,(int)(pcVar6 + uVar8),local_1128 - uVar8);
            local_1d38 = local_1140;
            local_90 = 4;
            local_1d20 = 0;
            local_1d24 = 0;
            local_1d28 = (void *)0x0;
            recovered_10004f54((int *)&local_1d28,((uintptr_t)pf_module_state + 0x292U),6);
            uVar8 = local_1d24;
            _ZdlPv(local_1d28);
            if (local_1d38 != uVar8) goto LAB_10003b88;
            if (local_1140 == 0) goto LAB_10003918;
            pbVar3 = local_1144;
            if (local_1144 == (byte *)0x0) {
              pbVar3 = &DAT_10007d6d;
            }
            pbVar7 = (byte *)str_10007d6e;
            uVar8 = local_1140;
            goto LAB_10003b54;
          }
          break;
        }
        iVar4 = iVar4 + -1;
      } while (-iVar4 != local_1128);
    }
    goto LAB_10003960;
  }
LAB_10003ee0:
  local_90 = 10;
  _ZN12WinterScriptC1Ev(&local_1d28);
  if (local_1154 == '\x01') {
    local_90 = 0xb;
    wm_lua_write(str_10007d89,0x23);
    local_90 = 0xc;
    wm_lua_writeline();
    local_90 = 0xd;
    wm_lua_write(str_10007dad,0x3f);
    local_90 = 0xe;
    wm_lua_writeline();
    local_90 = 0xf;
    wm_lua_write(str_10007ded,0x32);
    local_90 = 0x10;
    wm_lua_writeline();
    local_90 = 0x11;
    wm_lua_write(str_10007e20,0x22);
    local_90 = 0x12;
    wm_lua_writeline();
    local_90 = 0x13;
    wm_lua_write(str_10007e43,0x2d);
    local_90 = 0x14;
    wm_lua_writeline();
    local_90 = 0x15;
    wm_lua_write(&DAT_10007d6d,0);
    local_90 = 0x16;
    wm_lua_writeline();
    local_90 = 0x17;
    wm_lua_write(str_10007e71,0x10);
    local_90 = 0x18;
    wm_lua_writeline();
    local_90 = 0x19;
    wm_lua_write(&DAT_10007d6d,0);
    local_90 = 0x1a;
    wm_lua_writeline();
    local_111c = 0;
    local_1120 = (char *)0x0;
    local_1118 = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
       (_DAT_40010834 != (code *)0x0)) {
      local_90 = 0x1b;
      iVar4 = (*_DAT_40010834)(str_10007e82,&local_1120);
      if (iVar4 != 0) {
        local_90 = 0x1c;
        local_1124 = 0;
        local_1128 = 0;
        local_112c = (char *)0x0;
        recovered_10004f54((int *)&local_112c,((uintptr_t)pf_module_state + 0x3a6U),8);
        local_90 = 0x1d;
        _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&local_1110,&local_1d28,&local_112c);
        _ZdlPv(local_112c);
        local_90 = 0x1e;
        wm_lua_write(str_10007e8b,9);
        local_90 = 0x1f;
        wm_lua_write(str_10007e82,8);
        local_90 = 0x20;
        wm_lua_writeline();
        if (local_1110 != 0) {
          local_90 = 0x21;
          recovered_10005118((int *)&local_112c,&local_1110);
          local_90 = 0x22;
          pcVar6 = &DAT_10007d6d;
          if (local_112c != (char *)0x0) {
            pcVar6 = local_112c;
          }
          wm_lua_write(pcVar6,local_1128);
          local_90 = 0x23;
          wm_lua_writeline();
          _ZdlPv(local_112c);
        }
        if (1 < local_1100) {
          if (local_1100 != 2) {
            if (local_1100 != 3) {
              if ((local_1100 & 0xfffffffe) != 4) {
                local_90 = 0x24;
                recovered_10006b08(local_1100,(int *)&local_110c);
              }
              goto LAB_10004110;
            }
            local_1108 = 0;
          }
          _ZdlPv(local_110c);
        }
      }
    }
  }
LAB_10004110:
  if (local_115c == 0) {
    local_1d2c = 1;
  }
  else {
    local_1d2c = 1;
    local_90 = 0x29;
    _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&local_1110,&local_1d28,&local_1160);
    if (local_1110 != 0) {
      local_90 = 0x2a;
      recovered_10005118((int *)&local_1120,&local_1110);
      local_90 = 0x2b;
      pcVar6 = local_1120;
      if (local_1120 == (char *)0x0) {
        pcVar6 = &DAT_10007d6d;
      }
      wm_lua_write(pcVar6,local_111c);
      local_90 = 0x2c;
      wm_lua_writeline();
      _ZdlPv(local_1120);
    }
    local_cc = &local_110c;
    local_c8 = local_1100;
    if (1 < local_1100) {
      if (local_1100 != 2) {
        if (local_1100 != 3) {
          if ((local_1100 & 0xfffffffe) != 4) {
            local_90 = 0x2d;
            recovered_10006b08(local_1100,(int *)local_cc);
          }
          goto LAB_10004200;
        }
        local_1108 = 0;
      }
      _ZdlPv(local_110c);
    }
  }
LAB_10004200:
  local_c0 = local_1d2c;
  if (local_1154 == '\x01') {
    do {
      local_90 = 0x33;
      local_b9 = wm_lua_readline((int)local_10f0,0x1000,str_10007f8b,1);
      if (!(bool)local_b9) break;
      local_e8 = 0;
      local_ec = 0;
      local_f0 = (char *)0x0;
      local_b8 = 0;
      do {
        uVar8 = local_b8;
        local_b8 = uVar8 + 1;
      } while (local_10f0[uVar8] != '\0');
      local_90 = 0x34;
      recovered_10004f54((int *)&local_f0,(int)local_10f0,uVar8);
      local_b4 = local_f0;
      local_b0 = local_f0;
      if (local_f0 == (char *)0x0) {
        local_b0 = &DAT_10007d6d;
      }
      if (local_ec == 5) {
        if (((*local_b0 == '.') && (local_b0[1] == 'e')) &&
           ((local_b0[2] == 'x' && (local_b0[3] == 'i')))) {
          cVar1 = local_b0[4];
LAB_10004c10:
          if (cVar1 == 't') {
            _ZdlPv(local_f0);
            break;
          }
        }
      }
      else if (local_ec == 4) {
        if (*local_b0 == 'q') {
          if (local_b0[1] == 'u') goto LAB_10004bf8;
        }
        else if ((*local_b0 == 'e') && (local_b0[1] == 'x')) {
LAB_10004bf8:
          if (local_b0[2] == 'i') {
            cVar1 = local_b0[3];
            goto LAB_10004c10;
          }
        }
      }
      _ZdlPv(local_f0);
      local_dc = 0;
      local_e0 = 0;
      local_e4 = (char *)0x0;
      local_ac = 0;
      do {
        uVar8 = local_ac;
        local_ac = uVar8 + 1;
      } while (local_10f0[uVar8] != '\0');
      local_90 = 0x35;
      recovered_10004f54((int *)&local_e4,(int)local_10f0,uVar8);
      bVar11 = false;
      local_a8 = local_e4;
      local_a4 = local_e4;
      if (local_e4 == (char *)0x0) {
        local_a4 = &DAT_10007d6d;
      }
      if (local_e0 == 5) {
        if ((((*local_a4 == ':') && (local_a4[1] == 'h')) && (local_a4[2] == 'e')) &&
           ((local_a4[3] == 'l' && (local_a4[4] == 'p')))) goto LAB_10004d98;
      }
      else if ((((local_e0 == 6) && ((*local_a4 == 'h' && (local_a4[1] == 'e')))) &&
               (local_a4[2] == 'l')) &&
              (((local_a4[3] == 'p' && (local_a4[4] == '(')) && (local_a4[5] == ')')))) {
LAB_10004d98:
        local_90 = 0x36;
        wm_lua_write(str_10007e71,0x10);
        local_90 = 0x37;
        wm_lua_writeline();
        local_90 = 0x38;
        wm_lua_write(&DAT_10007d6d,0);
        local_90 = 0x39;
        wm_lua_writeline();
        bVar11 = true;
      }
      _ZdlPv(local_e4);
      if ((!bVar11) && (local_10f0[0] != '\0')) {
        local_10f4 = 0;
        local_10f8 = 0;
        local_10fc = (void *)0x0;
        local_a0 = 0;
        do {
          uVar8 = local_a0;
          local_a0 = uVar8 + 1;
        } while (local_10f0[uVar8] != '\0');
        local_90 = 0x3a;
        recovered_10004f54((int *)&local_10fc,(int)local_10f0,uVar8);
        local_90 = 0x3b;
        _ZN12WinterScript9runScriptERKN2wm6stringE((int)&local_1d28,(char *)&local_10fc);
        _ZdlPv(local_10fc);
      }
    } while (local_1154 != '\0');
  }
  recovered_10006e00((int *)&local_1d28);
  _ZdlPv(local_1160);
  uVar2 = local_c0;
  local_90 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&uStack_94);
  return uVar2;
  while (uVar8 = uVar8 - 1, pbVar3 = pbVar3 + 1, pbVar7 = pbVar7 + 1, uVar8 != 0) {
LAB_10003b54:
    uVar9 = (uint)*pbVar7;
    uVar10 = (uint)*pbVar3;
    if (uVar9 - 0x41 < 0x1a) {
      uVar9 = uVar9 | 0x20;
    }
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if (uVar10 != uVar9) goto LAB_10003b88;
  }
LAB_10003918:
  local_90 = 5;
  pbVar3 = local_1150;
  if (local_1150 == (byte *)0x0) {
    pbVar3 = &DAT_10007d6d;
  }
  recovered_10004f54((int *)&local_1160,(int)pbVar3,local_114c);
  goto LAB_1000394c;
LAB_10003b88:
  local_1d20 = 0;
  local_1d24 = 0;
  local_1d28 = (void *)0x0;
  local_1d38 = local_1140;
  local_90 = 6;
  recovered_10004f54((int *)&local_1d28,((uintptr_t)pf_module_state + 0x299U),7);
  uVar8 = local_1d24;
  _ZdlPv(local_1d28);
  if (local_1d38 != uVar8) goto LAB_1000394c;
  if (local_1140 != 0) {
    pbVar3 = local_1144;
    if (local_1144 == (byte *)0x0) {
      pbVar3 = &DAT_10007d6d;
    }
    uVar8 = local_1140;
    pbVar7 = (byte *)str_10007d75;
    do {
      uVar9 = (uint)*pbVar7;
      uVar10 = (uint)*pbVar3;
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar10 != uVar9) goto LAB_1000394c;
      uVar8 = uVar8 - 1;
      pbVar3 = pbVar3 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
  }
  local_1d38 = local_114c;
  local_90 = 7;
  local_1d20 = 0;
  local_1d24 = 0;
  local_1d28 = (void *)0x0;
  recovered_10004f54((int *)&local_1d28,((uintptr_t)pf_module_state + 0x2a1U),4);
  uVar8 = local_1d24;
  _ZdlPv(local_1d28);
  if (local_1d38 == uVar8) {
    bVar11 = true;
    if (local_114c != 0) {
      uVar8 = 0;
      pbVar3 = local_1150;
      if (local_1150 == (byte *)0x0) {
        pbVar3 = &DAT_10007d6d;
      }
      do {
        uVar10 = (uint)pbVar3[uVar8];
        uVar9 = (uint)(byte)(&DAT_10007d7d)[uVar8];
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar9 - 0x41 < 0x1a) {
          uVar9 = uVar9 | 0x20;
        }
        if (uVar10 != uVar9) goto LAB_10003d10;
        uVar8 = uVar8 + 1;
      } while (local_114c != uVar8);
    }
  }
  else {
LAB_10003d10:
    if (local_114c == 1) {
      bVar11 = true;
      pbVar3 = local_1150;
      if (local_1150 == (byte *)0x0) {
        pbVar3 = &DAT_10007d6d;
      }
      if (*pbVar3 == 0x31) goto LAB_10003ed8;
    }
    local_1d38 = local_114c;
    local_1d20 = 0;
    local_1d24 = 0;
    local_1d28 = (void *)0x0;
    local_90 = 8;
    recovered_10004f54((int *)&local_1d28,((uintptr_t)pf_module_state + 0x2a6U),3);
    uVar8 = local_1d24;
    _ZdlPv(local_1d28);
    if (local_1d38 == uVar8) {
      bVar11 = true;
      if (local_114c != 0) {
        pbVar3 = local_1150;
        if (local_1150 == (byte *)0x0) {
          pbVar3 = &DAT_10007d6d;
        }
        pbVar7 = &DAT_10007d82;
        uVar8 = local_114c;
        do {
          uVar10 = (uint)*pbVar7;
          uVar9 = (uint)*pbVar3;
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 | 0x20;
          }
          if (uVar9 != uVar10) goto LAB_10003dfc;
          uVar8 = uVar8 - 1;
          pbVar3 = pbVar3 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
LAB_10003dfc:
      local_1d20 = 0;
      local_1d24 = 0;
      local_1d28 = (void *)0x0;
      local_1d38 = local_114c;
      local_90 = 9;
      recovered_10004f54((int *)&local_1d28,((uintptr_t)pf_module_state + 0x2aaU),2);
      uVar8 = local_1d24;
      _ZdlPv(local_1d28);
      bVar11 = false;
      if (local_1d38 == uVar8) {
        if (local_114c == 0) {
          bVar11 = true;
        }
        else {
          pbVar3 = local_1150;
          if (local_1150 == (byte *)0x0) {
            pbVar3 = &DAT_10007d6d;
          }
          pbVar7 = &DAT_10007d86;
          uVar8 = local_114c;
          do {
            uVar8 = uVar8 - 1;
            uVar9 = (uint)*pbVar7;
            uVar10 = (uint)*pbVar3;
            if (uVar9 - 0x41 < 0x1a) {
              uVar9 = uVar9 | 0x20;
            }
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            bVar11 = uVar10 == uVar9;
          } while ((uVar10 == uVar9) && (pbVar3 = pbVar3 + 1, pbVar7 = pbVar7 + 1, uVar8 != 0));
        }
      }
    }
  }
LAB_10003ed8:
  local_1154 = bVar11;
LAB_1000394c:
  _ZdlPv(local_1150);
  _ZdlPv(local_1144);
LAB_10003960:
  _ZdlPv(local_112c);
  iVar4 = local_1d2c + 1;
  if (iVar4 == local_1d34) goto LAB_10003ee0;
  goto LAB_10003980;
}

#undef DAT_100048a8
#undef DAT_100048cc
#undef DAT_10007d6d
#undef DAT_10007d7d
#undef DAT_10007d82
#undef DAT_10007d86
#undef DAT_1000c008
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_10007d6e
#undef str_10007d75
#undef str_10007d89
#undef str_10007dad
#undef str_10007ded
#undef str_10007e20
#undef str_10007e43
#undef str_10007e71
#undef str_10007e82
#undef str_10007e8b
#undef str_10007f8b
#undef local_1160
#undef local_115c
#undef local_1158
#undef local_1154
#undef local_1150
#undef local_114c
#undef local_1148
#undef local_1144
#undef local_1140
#undef local_113c
#undef local_112c
#undef local_1128
#undef local_1124
#undef local_1120
#undef local_111c
#undef local_1118
#undef local_1110
#undef local_110c
#undef local_1108
#undef local_1100
#undef local_10fc
#undef local_10f8
#undef local_10f4
#undef local_10f0
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_cc
#undef local_c8
#undef local_c0
#undef local_b9
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef auStack_1d40
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68
#undef local_1d38
#undef local_1d34
#undef local_1d30
#undef local_1d2c
#undef local_1d28
#undef local_1d24
#undef local_1d20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec8
 */

void recovered_10004ec8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 != (char *)0x0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while (param_1[iVar2] != '\0');
    wm_lua_write(param_1,iVar2);
  }
  wm_lua_writeline();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004efc
 */

int * recovered_10004efc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *extraout_r0 = 0;
  int extraout_r1 = 0;
  uint uVar2;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  uVar2 = 0;
  extraout_r0[2] = 0;
  extraout_r0[1] = 0;
  *extraout_r0 = 0;
  uVar1 = uVar2;
  if (extraout_r1 != 0) {
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while (*(char *)(extraout_r1 + uVar2) != '\0');
  }
  recovered_10004f54(extraout_r0,extraout_r1,uVar2);
  return extraout_r0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f0c
 */

int * recovered_10004f0c(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = uVar2;
  if (param_2 != 0) {
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while (*(char *)(param_2 + uVar2) != '\0');
  }
  recovered_10004f54(param_1,param_2,uVar2);
  return param_1;
}


#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f54
 */

void recovered_10004f54(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  puVar12 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar12 != (undefined1 *)0x0) {
    uVar13 = param_2 - (int)puVar12;
    uVar6 = 0;
    do {
      if (uVar13 == uVar6) {
        uVar6 = param_1[1] - uVar13;
        local_24 = 0;
        if (uVar1 < uVar6) {
          uVar6 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_10004f54((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*param_1;
        iVar7 = param_1[1];
        iVar8 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pvVar4;
        local_28 = iVar7;
        local_24 = iVar8;
        _ZdlPv(pvVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar12 != (undefined1 *)0x0) {
    *puVar12 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar12 = _Znwm(1);
      *param_1 = (int)puVar12;
      *puVar12 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_10005040;
  puVar2 = _Znwm(uVar1 + 1);
  uVar13 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  uVar6 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar13 != 0) {
    bVar14 = uVar13 == 0x10;
    uVar5 = extraout_r1;
    if (0xf < uVar13) {
      uVar5 = (int)puVar2 - (int)puVar3;
      bVar14 = uVar5 == 0xf;
    }
    if ((0xf < uVar13 && 0xe < uVar5) && !bVar14) {
      uVar6 = uVar13 & 0xfffffff0;
      uVar5 = uVar6;
      puVar9 = puVar2;
      puVar11 = puVar3;
      do {
        uVar15 = *puVar11;
        uVar16 = puVar11[1];
        puVar11 = puVar11 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar9 = uVar15;
        puVar9[1] = uVar16;
        puVar9 = puVar9 + 2;
      } while (uVar5 != 0);
      if (uVar13 == uVar6) goto LAB_10005024;
    }
    iVar7 = uVar13 - uVar6;
    puVar12 = (undefined1 *)((int)puVar2 + uVar6);
    puVar10 = (undefined1 *)((int)puVar3 + uVar6);
    do {
      iVar7 = iVar7 + -1;
      *puVar12 = *puVar10;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
LAB_10005024:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  _ZdlPv(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_10005040:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10005a78
#define DAT_10005a78 (*(int *)(0x10005a78U))
#undef DAT_10005a7c
#define DAT_10005a7c (*(int *)(0x10005a7cU))
#undef DAT_10007d6d
#define DAT_10007d6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10007d7d
#define DAT_10007d7d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a1U)))
#undef DAT_10007ea4
#define DAT_10007ea4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#undef str_10007ea8
#define str_10007ea8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ccU)))
#undef str_10007eb7
#define str_10007eb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dbU)))
#undef str_10007ecb
#define str_10007ecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
#undef str_10007ed6
#define str_10007ed6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 16))
#define uStack_ec (*(undefined8 *)(pf_stack_frame + 68))
#define uStack_e4 (*(undefined8 *)(pf_stack_frame + 76))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 156))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
#define local_11c (*(int * *)(pf_stack_frame + 20))
#define local_118 (*(int *)(pf_stack_frame + 24))
#define local_114 (*(int * *)(pf_stack_frame + 28))
#define local_110 (*(int * *)(pf_stack_frame + 32))
#define local_10c (*(undefined4 * *)(pf_stack_frame + 36))
#define local_108 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_104 (*(uint *)(pf_stack_frame + 44))
#define local_fc (*(undefined8 *)(pf_stack_frame + 52))
#define local_f4 (*(ulonglong *)(pf_stack_frame + 60))
#define local_dc (*(undefined4 *)(pf_stack_frame + 84))
#define local_d8 (*(uint *)(pf_stack_frame + 88))
#define local_d4 (*(undefined4 *)(pf_stack_frame + 92))
#define local_d0 (*(undefined4 *)(pf_stack_frame + 96))
#define local_cc (*(undefined1 *)(pf_stack_frame + 100))
#define local_98 (*(int * *)(pf_stack_frame + 152))
#define local_90 (*(undefined4 *)(pf_stack_frame + 160))
#define local_7c (*(undefined4 *)(pf_stack_frame + 180))
#define local_78 (*(int *)(pf_stack_frame + 184))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 188))
#define local_70 (*(int *)(pf_stack_frame + 192))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005118
 */

void recovered_10005118(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint128 auVar24;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  local_78 = ((uintptr_t)pf_module_state + 0x19cU);
  uVar15 = *param_2;
  local_7c = DAT_1000c008;
  local_70 = (*(uint32_t *)(uint32_t[]){0x800ULL}) + 0x10005174;
  local_98 = param_1;
  _Unwind_SjLj_Register(&uStack_94);
  switch((uintptr_t)(uVar15)) {
  case 0:
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = &DAT_10007ea4;
    uVar14 = 3;
    break;
  case 1:
    if (param_2[4] != 0) {
LAB_10005980:
                    /* WARNING: Does not return */
      __builtin_trap();
    }
    uVar22 = param_2[1];
    uVar8 = uVar22;
    if ((int)uVar22 < 0) {
      uVar8 = -uVar22;
    }
    uVar14 = 0;
    uVar16 = 0;
    do {
      uVar13 = uVar14;
      uVar18 = uVar8 >> 1 | uVar16 << 0x1f;
      uVar21 = uVar18 + (uVar16 >> 1) + (uint)CARRY4(uVar18,uVar16 >> 1);
      uVar21 = uVar21 - (((uint)((ulonglong)uVar21 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar21 / 5)
      ;
      uVar6 = uVar18 - uVar21;
      lVar3 = (ulonglong)uVar6 * 0xcccccccd;
      bVar23 = uVar8 < 10;
      uVar4 = -uVar16;
      auStack_68[uVar13 - 0x74] = (char)uVar8 + (char)lVar3 * -10 | 0x30;
      uVar14 = uVar13 + 1;
      uVar8 = (uint)lVar3;
      uVar16 = ((uVar16 >> 1) - (uint)(uVar18 < uVar21)) * -0x33333333 +
               uVar6 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
    } while (bVar23 <= uVar4);
    if ((int)uVar22 < 0) {
      auStack_68[uVar13 - 0x73] = 0x2d;
      uVar14 = uVar13 + 2;
    }
    if (0x20 < uVar14) {
      *local_98 = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      goto LAB_10005954;
    }
    if (uVar14 != 0) {
      uVar8 = 0;
      if (0xf < uVar14) {
        uVar8 = uVar14 & 0x30;
        auVar24 = vrev(*(uint128 *)((int)&uStack_ec + uVar14),1);
        local_fc = PF_PART8(auVar24, 8);
        local_f4 = PF_PART8(auVar24, 0);
        if (uVar8 != 0x10) {
          auVar24 = vrev(*(uint128 *)((int)&local_fc + uVar14),1);
          uStack_ec = PF_PART8(auVar24, 8);
          uStack_e4 = PF_PART8(auVar24, 0);
        }
        if (uVar14 == uVar8) goto LAB_10005924;
      }
      iVar9 = uVar14 - uVar8;
      puVar12 = (undefined1 *)((int)&local_fc + uVar8);
      do {
        iVar5 = iVar9 + -0x75;
        iVar9 = iVar9 + -1;
        *puVar12 = auStack_68[iVar5];
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
LAB_10005924:
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = (char *)&local_fc;
    break;
  case 2:
    if (param_2[4] != 1) goto LAB_10005980;
    local_90 = 0xffffffff;
    recovered_10005e10(local_98,SUB84((double)pf_bits_float((uintptr_t)param_2[1]),0),
                       (int)((ulonglong)(double)pf_bits_float((uintptr_t)param_2[1]) >> 0x20));
    goto LAB_10005954;
  case 3:
    if (param_2[4] != 2) goto LAB_10005980;
    *local_98 = 0;
    pcVar20 = (char *)param_2[1];
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = &DAT_10007d6d;
    if (pcVar20 != (char *)0x0) {
      pcVar11 = pcVar20;
    }
    uVar14 = param_2[2];
    break;
  default:
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = str_10007ed6;
    uVar14 = 0x14;
    break;
  case 5:
    if (param_2[4] != 4) goto LAB_10005980;
    *local_98 = 0;
    cVar2 = *(char *)(param_2 + 1);
    pcVar11 = str_10007ea8;
    local_98[1] = 0;
    local_98[2] = 0;
    uVar8 = 0;
    if (cVar2 != '\0') {
      pcVar11 = &DAT_10007d7d;
    }
    do {
      uVar14 = uVar8;
      uVar8 = uVar14 + 1;
    } while (pcVar11[uVar14] != '\0');
    break;
  case 6:
    local_cc = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = (undefined1 *)0x0;
    local_d0 = 10;
    local_90 = 1;
    local_10c = param_2;
    recovered_100068b0(&local_dc,((uintptr_t)pf_module_state + 0x3d2U),1);
    local_d0 = 0x10;
    local_cc = 1;
    if (local_10c[4] != 5) goto LAB_10005980;
    local_90 = 2;
    recovered_100065d4(&local_dc,local_10c[1],0);
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    puVar12 = &DAT_10007d6d;
    if (local_dc != (undefined1 *)0x0) {
      puVar12 = local_dc;
    }
    local_90 = 3;
    recovered_10004f54(local_98,(int)puVar12,local_d8);
    _ZdlPv(local_dc);
    goto LAB_10005954;
  case 7:
    if (param_2[4] != 6) goto LAB_10005980;
    piVar17 = (int *)0x0;
    *local_98 = 0;
    piVar19 = (int *)param_2[2];
    local_98[1] = 0;
    local_98[2] = 0;
    local_90 = 0xffffffff;
    recovered_10004f54(local_98,((uintptr_t)pf_module_state + 0x3d4U),1);
    local_110 = piVar19;
    if (piVar19[1] != 0) {
      puVar10 = (undefined4 *)0x0;
      do {
        local_90 = 5;
        local_114 = piVar17;
        local_10c = puVar10;
        recovered_10005118(&local_dc,(undefined4 *)(*local_110 + (int)piVar17));
        local_90 = 6;
        puVar12 = local_dc;
        if (local_dc == (undefined1 *)0x0) {
          puVar12 = &DAT_10007d6d;
        }
        recovered_100068b0(local_98,(int)puVar12,local_d8);
        _ZdlPv(local_dc);
        puVar7 = (undefined4 *)local_110[1];
        puVar10 = (undefined4 *)((int)local_10c + 1);
        if (puVar10 < puVar7) {
          local_90 = 7;
          local_10c = puVar10;
          recovered_100068b0(local_98,((uintptr_t)pf_module_state + 0x3d6U),2);
          puVar7 = (undefined4 *)local_110[1];
          puVar10 = local_10c;
        }
        piVar17 = local_114 + 5;
      } while (puVar10 < puVar7);
    }
    local_90 = 4;
    recovered_100068b0(local_98,((uintptr_t)pf_module_state + 0x3d9U),1);
    goto LAB_10005954;
  case 8:
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = str_10007eb7;
    uVar14 = 0xc;
    break;
  case 9:
    if (param_2[4] != 7) goto LAB_10005980;
    *local_98 = 0;
    piVar17 = (int *)param_2[2];
    local_98[1] = 0;
    local_98[2] = 0;
    local_90 = 0xffffffff;
    recovered_10004f54(local_98,((uintptr_t)pf_module_state + 0x3e8U),1);
    local_114 = piVar17;
    if (piVar17[1] != 0) {
      local_118 = *piVar17;
      local_11c = (int *)(local_118 + piVar17[1] * 0x20);
      local_10c = (undefined4 *)0x0;
      do {
        local_110 = (int *)(local_118 + (int)local_10c * 0x20);
        puVar12 = (undefined1 *)*local_110;
        local_f4 = local_f4 & 0xffffffff00000000;
        local_fc = 0;
        local_90 = 9;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &DAT_10007d6d;
        }
        recovered_10004f54((int *)&local_fc,(int)puVar12,local_110[1]);
        local_90 = 10;
        recovered_100068b0((int *)&local_fc,((uintptr_t)pf_module_state + 0x3eaU),2);
        local_90 = 0xb;
        local_110 = local_110 + 3;
        recovered_10005118((int *)&local_108,local_110);
        local_d4 = 0;
        local_d8 = 0;
        local_dc = (undefined1 *)0x0;
        local_90 = 0xc;
        puVar12 = (undefined1 *)local_fc;
        if ((undefined1 *)local_fc == (undefined1 *)0x0) {
          puVar12 = &DAT_10007d6d;
        }
        recovered_10004f54(&local_dc,(int)puVar12,PF_PART4(local_fc, 4));
        local_90 = 0xd;
        puVar12 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar12 = &DAT_10007d6d;
        }
        recovered_100068b0(&local_dc,(int)puVar12,local_104);
        local_90 = 0xe;
        puVar12 = local_dc;
        if (local_dc == (undefined1 *)0x0) {
          puVar12 = &DAT_10007d6d;
        }
        recovered_100068b0(local_98,(int)puVar12,local_d8);
        _ZdlPv(local_dc);
        _ZdlPv(local_108);
        _ZdlPv((undefined1 *)local_fc);
        local_10c = (undefined4 *)((int)local_10c + 1);
        if (local_10c < (undefined4 *)local_114[1]) {
          local_90 = 0xf;
          recovered_100068b0(local_98,((uintptr_t)pf_module_state + 0x3d6U),2);
        }
      } while (local_110 + 5 != local_11c);
    }
    local_90 = 8;
    recovered_100068b0(local_98,((uintptr_t)pf_module_state + 0x3edU),1);
    goto LAB_10005954;
  case 10:
    *local_98 = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    pcVar11 = str_10007ecb;
    uVar14 = 10;
  }
  local_90 = 0xffffffff;
  recovered_10004f54(local_98,(int)pcVar11,uVar14);
LAB_10005954:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10005a78
#undef DAT_10005a7c
#undef DAT_10007d6d
#undef DAT_10007d7d
#undef DAT_10007ea4
#undef DAT_1000c008
#undef str_10007ea8
#undef str_10007eb7
#undef str_10007ecb
#undef str_10007ed6
#undef auStack_120
#undef uStack_ec
#undef uStack_e4
#undef uStack_94
#undef auStack_68
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_fc
#undef local_f4
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10005b88
#define DAT_10005b88 (*(int *)(0x10005b88U))
#undef DAT_10005b8c
#define DAT_10005b8c (*(int *)(0x10005b8cU))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(int *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a80
 */

int recovered_10005a80(int param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  uVar1 = *(uint *)(param_1 + 0x10);
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x1c0U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x80ULL}) + 0x10005ad8;
  _Unwind_SjLj_Register(&uStack_94);
  if (1 < uVar1) {
    if (uVar1 != 2) {
      if (uVar1 != 3) {
        if ((uVar1 & 0xfffffffe) != 4) {
          local_90 = 1;
          local_98 = param_1;
          recovered_10006b08(uVar1,(int *)(param_1 + 4));
          param_1 = local_98;
        }
        goto LAB_10005b0c;
      }
      *(undefined4 *)(param_1 + 8) = 0;
    }
    _ZdlPv(*(void **)(param_1 + 4));
  }
LAB_10005b0c:
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_10005b88
#undef DAT_10005b8c
#undef DAT_1000c008
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

#undef DAT_10007d6d
#define DAT_10007d6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef str_10007f1a
#define str_10007f1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43eU)))
#undef str_10007f35
#define str_10007f35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

undefined1 recovered_10005b90(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  uVar6 = param_1[1];
  puVar4 = &DAT_10007d6d;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_1;
  }
  if (0x19 < uVar6) {
    uVar7 = 0;
    puVar5 = puVar4;
    do {
      iVar3 = 0;
      while (puVar5[-iVar3] == str_10007f1a[-iVar3]) {
        bVar8 = iVar3 == -0x19;
        iVar3 = iVar3 + -1;
        if (bVar8) {
          if (uVar7 != 0xffffffff) {
            return 1;
          }
          goto LAB_10005c14;
        }
      }
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 <= uVar6 - 0x1a);
  }
LAB_10005c14:
  if (0x12 < uVar6) {
    uVar7 = 0;
    do {
      if (puVar4[uVar7] == 'f') {
        puVar5 = puVar4 + uVar7;
        cVar2 = puVar5[1];
        bVar8 = cVar2 == 'a';
        if (bVar8) {
          cVar2 = puVar5[2];
        }
        if (bVar8 && cVar2 == 'i') {
          cVar2 = puVar5[3];
          bVar8 = cVar2 == 'l';
          if (bVar8) {
            cVar2 = puVar5[4];
          }
          if (bVar8 && cVar2 == 'e') {
            cVar2 = puVar5[5];
            bVar8 = cVar2 == 'd';
            if (bVar8) {
              cVar2 = puVar5[6];
            }
            if (bVar8 && cVar2 == ' ') {
              cVar2 = puVar5[7];
              bVar8 = cVar2 == 't';
              if (bVar8) {
                cVar2 = puVar5[8];
              }
              if (bVar8 && cVar2 == 'o') {
                cVar2 = puVar5[9];
                bVar8 = cVar2 == ' ';
                if (bVar8) {
                  cVar2 = puVar5[10];
                }
                if (bVar8 && cVar2 == 'o') {
                  cVar2 = puVar5[0xb];
                  bVar8 = cVar2 == 'p';
                  if (bVar8) {
                    cVar2 = puVar5[0xc];
                  }
                  if (bVar8 && cVar2 == 'e') {
                    cVar2 = puVar5[0xd];
                    bVar8 = cVar2 == 'n';
                    if (bVar8) {
                      cVar2 = puVar5[0xe];
                    }
                    if (bVar8 && cVar2 == ' ') {
                      cVar2 = puVar5[0xf];
                      bVar8 = cVar2 == 'f';
                      if (bVar8) {
                        cVar2 = puVar5[0x10];
                      }
                      if (bVar8 && cVar2 == 'i') {
                        pcVar1 = puVar5 + 0x11;
                        if (*pcVar1 == 'l') {
                          puVar5 = (undefined1 *)(uint)(byte)puVar5[0x12];
                        }
                        if (*pcVar1 == 'l' && puVar5 == (undefined1 *)0x65) {
                          if (uVar7 != 0xffffffff) {
                            return 1;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar6 - 0x13);
    if (0x19 < uVar6) {
      uVar7 = 0;
      do {
        iVar3 = 0;
        while (puVar4[-iVar3] == str_10007f35[-iVar3]) {
          bVar8 = iVar3 == -0x19;
          iVar3 = iVar3 + -1;
          if (bVar8) {
            if (uVar7 == 0xffffffff) {
              return 0;
            }
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 <= uVar6 - 0x1a);
    }
  }
  return 0;
}

#undef DAT_10007d6d
#undef str_10007f1a
#undef str_10007f35

#undef DAT_10007ec6
#define DAT_10007ec6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d7c
 */

void recovered_10005d7c(int *param_1,byte *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;

  if (param_2 != (byte *)0x0) {
    param_3 = (uint)*param_2;
  }
  if (param_2 != (byte *)0x0 && param_3 != 0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while (param_2[iVar2] != 0);
    wm_lua_write((char *)param_2,iVar2);
    wm_lua_write(&DAT_10007ec6,2);
  }
  pcVar3 = (char *)(**(code **)(*param_1 + 8))();
  if (pcVar3 != (char *)0x0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      iVar1 = iVar2 + 1;
    } while (pcVar3[iVar2] != '\0');
    wm_lua_write(pcVar3,iVar2);
  }
  wm_lua_writeline();
  return;
}

#undef DAT_10007ec6

#undef DAT_10006120
#define DAT_10006120 (*(double *)(0x10006120U))
#undef DAT_10006128
#define DAT_10006128 (*(double *)(0x10006128U))
#undef DAT_100064bc
#define DAT_100064bc (*(int *)(0x100064bcU))
#undef DAT_100064c0
#define DAT_100064c0 (*(int *)(0x100064c0U))
#undef DAT_10007d6d
#define DAT_10007d6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_10007eeb
#define DAT_10007eeb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40fU)))
#undef DAT_10007eef
#define DAT_10007eef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define local_118 (*(undefined4 *)(pf_stack_frame + 24))
#define local_114 (*(undefined4 *)(pf_stack_frame + 28))
#define local_110 (*(uint *)(pf_stack_frame + 32))
#define local_10c (*(uint *)(pf_stack_frame + 36))
#define local_108 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_104 (*(uint *)(pf_stack_frame + 44))
#define local_100 (*(undefined4 *)(pf_stack_frame + 48))
#define local_f9 (*(byte (*)[249])(pf_stack_frame + 55))
#define local_d9 (*(byte (*)[217])(pf_stack_frame + 87))
#define local_98 (*(int * *)(pf_stack_frame + 152))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 16))
#define local_90 (*(undefined4 *)(pf_stack_frame + 160))
#define local_7c (*(undefined4 *)(pf_stack_frame + 180))
#define local_78 (*(int *)(pf_stack_frame + 184))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 188))
#define local_70 (*(int *)(pf_stack_frame + 192))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 196))
#define auStack_f1 (*(undefined8 (*)[30])(pf_stack_frame + 63))
#define bStack_da (*(byte *)(pf_stack_frame + 86))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 156))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

void recovered_10005e10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint128 *pauVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  double value;
  double dVar16;
  uint128 auVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  local_78 = ((uintptr_t)pf_module_state + 0x1d0U);
  local_7c = DAT_1000c008;
  local_70 = (*(uint32_t *)(uint32_t[]){0x5c8ULL}) + 0x10005e6c;
  local_98 = param_1;
  _Unwind_SjLj_Register(&uStack_94);
  dVar16 = pf_bits_double(CONCAT44(param_3,param_2));
  if (NAN(dVar16)) {
    *local_98 = 0;
    puVar5 = &DAT_10007eeb;
  }
  else {
    bVar1 = true;
    if (0.0 <= dVar16) {
      if (dVar16 == 0.0) {
        bVar1 = 1.0 / dVar16 < 0.0;
      }
      else {
        bVar1 = false;
      }
    }
    if (dVar16 != pf_bits_double(0x7ff0000000000000ULL)) {
      if (dVar16 == pf_bits_double(0xfff0000000000000ULL)) {
        *local_98 = 0;
        local_98[1] = 0;
        local_98[2] = 0;
        local_90 = 0xffffffff;
        recovered_10004f54(local_98,((uintptr_t)pf_module_state + 0x417U),4);
        goto LAB_100063ec;
      }
      uVar18 = __fixunsdfdi(value);
      dVar16 = __floatundidf(uVar18);
      *local_98 = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      uVar19 = __fixunsdfdi(dVar16);
      iVar6 = (int)(uVar19 >> 0x20);
      uVar8 = (uint)uVar19;
      uVar20 = CONCAT44(iVar6 - (uint)(uVar8 < 1000000),uVar8 - 1000000);
      uVar3 = uVar18 + 1;
      if ((uint)-iVar6 < (uint)(uVar8 < 1000000)) {
        uVar3 = uVar18;
        uVar20 = uVar19;
      }
      local_110 = (uint)(uVar20 >> 0x20);
      local_10c = (uint)uVar20;
      if (bVar1) {
        local_90 = 1;
        local_118 = (int)(uVar3 >> 0x20);
        local_114 = (int)uVar3;
        recovered_100064c4(local_98,0x2d);
        uVar20 = CONCAT44(local_110,local_10c);
        uVar3 = CONCAT44(local_118,local_114);
      }
      iVar6 = 0;
      pbVar4 = &bStack_da;
      do {
        pbVar13 = pbVar4;
        local_110 = (uint)(uVar20 >> 0x20);
        local_10c = (uint)uVar20;
        uVar12 = (uint)(uVar3 >> 0x20);
        uVar15 = (uint)uVar3;
        iVar6 = iVar6 + -1;
        uVar18 = uVar3 >> 1;
        uVar8 = (uint)uVar18;
        uVar10 = (uint)(uVar18 + CONCAT44(uVar8,(int)(uVar18 >> 0x20)) >> 0x20);
        uVar10 = uVar10 - (((uint)((ulonglong)uVar10 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                          uVar10 / 5);
        uVar9 = uVar8 - uVar10;
        lVar2 = (ulonglong)uVar9 * 0xcccccccd;
        pbVar4 = pbVar13 + 1;
        *pbVar4 = (char)uVar3 + (char)lVar2 * -10 | 0x30;
        uVar3 = CONCAT44(((uVar12 >> 1) - (uint)(uVar8 < uVar10)) * -0x33333333 +
                         uVar9 * -0x33333334 + (int)((ulonglong)lVar2 >> 0x20),(int)lVar2);
      } while ((uint)(uVar15 < 10) <= -uVar12);
      uVar8 = -iVar6;
      if (uVar8 < 0x20 || iVar6 == -0x20) {
        if (iVar6 != 0) {
          if (uVar8 >> 4 == 0) {
            uVar9 = 0;
          }
          else {
            iVar14 = (uVar8 >> 4) << 4;
            pauVar11 = (uint128 *)(pbVar13 + -0xe);
            uVar9 = uVar8 & 0xfffffff0;
            pbVar13 = local_f9;
            do {
              auVar17 = *pauVar11;
              pauVar11 = pauVar11 + -1;
              iVar14 = iVar14 + -0x10;
              auVar17 = vrev(auVar17,1);
              *(longlong *)pbVar13 = PF_PART8(auVar17, 8);
              *(longlong *)(pbVar13 + 8) = PF_PART8(auVar17, 0);
              pbVar13 = pbVar13 + 0x10;
            } while (iVar14 != 0);
            if (-uVar9 == iVar6) goto LAB_10006154;
          }
          do {
            local_f9[uVar9] = pbVar4[-uVar9];
            uVar9 = uVar9 + 1;
          } while (-uVar9 != iVar6);
        }
LAB_10006154:
        local_100 = 0;
        local_104 = 0;
        local_108 = (undefined1 *)0x0;
        local_90 = 2;
        recovered_10004f54((int *)&local_108,(int)local_f9,uVar8);
        uVar20 = CONCAT44(local_110,local_10c);
      }
      else {
        local_100 = 0;
        local_104 = 0;
        local_108 = (undefined1 *)0x0;
      }
      local_110 = (uint)(uVar20 >> 0x20);
      local_10c = (uint)uVar20;
      local_90 = 3;
      puVar7 = &DAT_10007d6d;
      if (local_108 != (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      recovered_100068b0(local_98,(int)puVar7,local_104);
      _ZdlPv(local_108);
      local_90 = 4;
      recovered_100064c4(local_98,0x2e);
      uVar20 = __udivdi3(local_10c,local_110,100000,0);
      uVar3 = uVar20 >> 1;
      lVar2 = uVar3 + CONCAT44((int)uVar3,(int)(uVar3 >> 0x20));
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      local_90 = 5;
      recovered_100064c4(local_98,(byte)uVar20 & 1 |
                                  ((char)((ulonglong)lVar2 >> 0x20) -
                                  (((byte)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfc) +
                                  (char)(uVar8 / 5))) * '\x02' | 0x30);
      uVar20 = __udivdi3(local_10c,local_110,10000,0);
      uVar3 = uVar20 >> 1;
      lVar2 = uVar3 + CONCAT44((int)uVar3,(int)(uVar3 >> 0x20));
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      local_90 = 6;
      recovered_100064c4(local_98,(byte)uVar20 & 1 |
                                  ((char)((ulonglong)lVar2 >> 0x20) -
                                  (((byte)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfc) +
                                  (char)(uVar8 / 5))) * '\x02' | 0x30);
      uVar20 = __udivdi3(local_10c,local_110,1000,0);
      uVar3 = uVar20 >> 1;
      lVar2 = uVar3 + CONCAT44((int)uVar3,(int)(uVar3 >> 0x20));
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      local_90 = 7;
      recovered_100064c4(local_98,(byte)uVar20 & 1 |
                                  ((char)((ulonglong)lVar2 >> 0x20) -
                                  (((byte)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfc) +
                                  (char)(uVar8 / 5))) * '\x02' | 0x30);
      uVar20 = __udivdi3(local_10c,local_110,100,0);
      uVar3 = uVar20 >> 1;
      lVar2 = uVar3 + CONCAT44((int)uVar3,(int)(uVar3 >> 0x20));
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      local_90 = 8;
      recovered_100064c4(local_98,(byte)uVar20 & 1 |
                                  ((char)((ulonglong)lVar2 >> 0x20) -
                                  (((byte)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfc) +
                                  (char)(uVar8 / 5))) * '\x02' | 0x30);
      uVar8 = local_10c >> 1 | local_110 << 0x1f;
      uVar10 = uVar8 + (local_110 >> 1) + (uint)CARRY4(uVar8,local_110 >> 1);
      uVar10 = uVar10 - (((uint)((ulonglong)uVar10 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar10 / 5)
      ;
      uVar9 = uVar8 - uVar10;
      lVar2 = (ulonglong)uVar9 * 0xcccccccd;
      uVar8 = ((local_110 >> 1) - (uint)(uVar8 < uVar10)) * -0x33333333 +
              uVar9 * -0x33333334 + (int)((ulonglong)lVar2 >> 0x20);
      local_90 = 9;
      uVar9 = (uint)lVar2 >> 1 | uVar8 * -0x80000000LL;
      uVar8 = uVar8 >> 1;
      uVar8 = uVar9 + uVar8 + (uint)CARRY4(uVar9,uVar8);
      local_110 = (uint)lVar2;
      recovered_100064c4(local_98,(byte)lVar2 & 1 |
                                  ((char)uVar8 -
                                  (((byte)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfc) +
                                  (char)(uVar8 / 5))) * '\x02' | 0x30);
      local_90 = 10;
      recovered_100064c4(local_98,(char)local_10c + (char)local_110 * -10 | 0x30);
      goto LAB_100063ec;
    }
    *local_98 = 0;
    puVar5 = &DAT_10007eef;
  }
  local_98[1] = 0;
  local_98[2] = 0;
  local_90 = 0xffffffff;
  recovered_10004f54(local_98,(int)puVar5,3);
LAB_100063ec:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10006120
#undef DAT_10006128
#undef DAT_100064bc
#undef DAT_100064c0
#undef DAT_10007d6d
#undef DAT_10007eeb
#undef DAT_10007eef
#undef DAT_1000c008
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_f9
#undef local_d9
#undef local_98
#undef auStack_120
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_f1
#undef bStack_da
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064c4
 */

void recovered_100064c4(int *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint extraout_r1 = 0;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar10 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar10 = 0x10;
    }
    if (uVar10 <= uVar1) goto LAB_10006584;
    puVar2 = _Znwm(uVar10 | 1);
    uVar1 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    uVar11 = 0;
    *(undefined1 *)puVar2 = 0;
    if (uVar1 != 0) {
      bVar12 = uVar1 == 0x10;
      uVar4 = extraout_r1;
      if (0xf < uVar1) {
        uVar4 = (int)puVar2 - (int)puVar3;
        bVar12 = uVar4 == 0xf;
      }
      if ((0xf < uVar1 && 0xe < uVar4) && !bVar12) {
        uVar11 = uVar1 & 0xfffffff0;
        uVar4 = uVar11;
        puVar6 = puVar3;
        puVar8 = puVar2;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar4 = uVar4 - 0x10;
          *puVar8 = uVar13;
          puVar8[1] = uVar14;
          puVar8 = puVar8 + 2;
        } while (uVar4 != 0);
        if (uVar1 == uVar11) goto LAB_10006574;
      }
      iVar7 = uVar1 - uVar11;
      puVar5 = (undefined1 *)((int)puVar2 + uVar11);
      puVar9 = (undefined1 *)((int)puVar3 + uVar11);
      do {
        iVar7 = iVar7 + -1;
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 != 0);
    }
LAB_10006574:
    *(undefined1 *)((int)puVar2 + uVar1) = 0;
    _ZdlPv(puVar3);
  }
  else {
LAB_10006584:
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) goto LAB_100065ac;
    puVar2 = _Znwm(1);
    uVar10 = 0;
    *(undefined1 *)puVar2 = 0;
  }
  param_1[2] = uVar10;
  *param_1 = (int)puVar2;
LAB_100065ac:
  iVar7 = param_1[1];
  param_1[1] = iVar7 + 1;
  *(undefined1 *)((int)puVar2 + iVar7) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_100068a8
#define DAT_100068a8 (*(int *)(0x100068a8U))
#undef DAT_100068ac
#define DAT_100068ac (*(int *)(0x100068acU))
#undef DAT_10007d6d
#define DAT_10007d6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#undef str_10007ef8
#define str_10007ef8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41cU)))
#undef str_10007f09
#define str_10007f09 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42dU)))
#define local_108 (*(int * *)(pf_stack_frame + 24))
#define local_104 (*(undefined1 * *)(pf_stack_frame + 28))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 16))
#define local_100 (*(uint *)(pf_stack_frame + 32))
#define local_fc (*(undefined4 *)(pf_stack_frame + 36))
#define local_f5 (*(byte (*)[245])(pf_stack_frame + 43))
#define local_d6 (*(byte (*)[214])(pf_stack_frame + 74))
#define auStack_ed (*(undefined8 (*)[29])(pf_stack_frame + 51))
#define local_90 (*(undefined4 *)(pf_stack_frame + 144))
#define local_7c (*(undefined4 *)(pf_stack_frame + 164))
#define local_78 (*(int *)(pf_stack_frame + 168))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 140))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 172))
#define local_70 (*(int *)(pf_stack_frame + 176))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 180))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065d4
 */

int * recovered_100065d4(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint128 *pauVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  uint128 auVar14;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_110;
  iVar8 = param_1[3];
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x1e8U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x234ULL}) + 0x10006634;
  _Unwind_SjLj_Register(&uStack_94);
  if (iVar8 != 10) {
    uVar5 = 4;
    pcVar12 = str_10007f09;
    if ((char)param_1[4] != '\0') {
      pcVar12 = str_10007ef8;
    }
    uVar9 = 0xf;
    if (iVar8 == 8) {
      uVar5 = 3;
      uVar9 = 7;
    }
    iVar8 = 0;
    do {
      local_d6[1 - iVar8] = pcVar12[param_2 & uVar9];
      iVar8 = iVar8 + -1;
      param_2 = param_2 >> uVar5 | (param_3 << 1) << (uVar5 ^ 0x1f);
      uVar2 = param_3 >> uVar5;
      param_3 = param_3 >> uVar5;
    } while (param_2 != 0 || uVar2 != 0);
    if (iVar8 != 0) {
      do {
        local_90 = 0xffffffff;
        recovered_100064c4(param_1,local_d6[-iVar8]);
        bVar13 = iVar8 != -1;
        iVar8 = iVar8 + 1;
      } while (bVar13);
    }
    goto LAB_10006844;
  }
  iVar8 = 0;
  pbVar11 = local_d6;
  do {
    pbVar7 = pbVar11;
    iVar8 = iVar8 + -1;
    uVar4 = param_2 >> 1 | param_3 << 0x1f;
    uVar9 = uVar4 + (param_3 >> 1) + (uint)CARRY4(uVar4,param_3 >> 1);
    uVar9 = uVar9 - (((uint)((ulonglong)uVar9 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar9 / 5);
    uVar2 = uVar4 - uVar9;
    lVar1 = (ulonglong)uVar2 * 0xcccccccd;
    pbVar11 = pbVar7 + 1;
    *pbVar11 = (char)param_2 + (char)lVar1 * -10 | 0x30;
    bVar13 = param_2 < 10;
    uVar5 = -param_3;
    param_3 = ((param_3 >> 1) - (uint)(uVar4 < uVar9)) * -0x33333333 +
              uVar2 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
    param_2 = (uint)lVar1;
  } while (bVar13 <= uVar5);
  uVar5 = -iVar8;
  if (uVar5 < 0x20 || iVar8 == -0x20) {
    if (iVar8 != 0) {
      if (uVar5 >> 4 == 0) {
        uVar9 = 0;
      }
      else {
        iVar10 = (uVar5 >> 4) << 4;
        pauVar6 = (uint128 *)(pbVar7 + -0xe);
        uVar9 = uVar5 & 0xfffffff0;
        pbVar7 = local_f5;
        do {
          auVar14 = *pauVar6;
          pauVar6 = pauVar6 + -1;
          iVar10 = iVar10 + -0x10;
          auVar14 = vrev(auVar14,1);
          *(longlong *)pbVar7 = PF_PART8(auVar14, 8);
          *(longlong *)(pbVar7 + 8) = PF_PART8(auVar14, 0);
          pbVar7 = pbVar7 + 0x10;
        } while (iVar10 != 0);
        if (-uVar9 == iVar8) goto LAB_100067e4;
      }
      do {
        local_f5[uVar9] = pbVar11[-uVar9];
        uVar9 = uVar9 + 1;
      } while (-uVar9 != iVar8);
    }
LAB_100067e4:
    local_fc = 0;
    local_100 = 0;
    local_104 = (undefined1 *)0x0;
    local_90 = 0xffffffff;
    recovered_10004f54((int *)&local_104,(int)local_f5,uVar5);
  }
  else {
    local_fc = 0;
    local_100 = 0;
    local_104 = (undefined1 *)0x0;
  }
  local_90 = 1;
  puVar3 = &DAT_10007d6d;
  if (local_104 != (undefined1 *)0x0) {
    puVar3 = local_104;
  }
  local_108 = param_1;
  recovered_100068b0(param_1,(int)puVar3,local_100);
  _ZdlPv(local_104);
  param_1 = local_108;
LAB_10006844:
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_100068a8
#undef DAT_100068ac
#undef DAT_10007d6d
#undef DAT_1000c008
#undef str_10007ef8
#undef str_10007f09
#undef local_108
#undef local_104
#undef auStack_110
#undef local_100
#undef local_fc
#undef local_f5
#undef local_d6
#undef auStack_ed
#undef local_90
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068b0
 */

void recovered_100068b0(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = param_2 - (int)puVar12;
    uVar11 = param_1[1];
    uVar6 = 0;
LAB_100068ec:
    if (uVar10 != uVar6) goto code_r0x100068f4;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_10006ab8;
    puVar12 = _Znwm(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_10006a98;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_10006a7c;
    uVar13 = uVar7 & 0xfffffff0;
    uVar2 = uVar13;
    puVar5 = puVar1;
    puVar8 = puVar12;
    do {
      uVar15 = *puVar5;
      uVar16 = puVar5[1];
      puVar5 = puVar5 + 2;
      uVar2 = uVar2 - 0x10;
      *puVar8 = uVar15;
      puVar8[1] = uVar16;
      puVar8 = puVar8 + 2;
    } while (uVar2 != 0);
    if (uVar7 != uVar13) {
LAB_10006a7c:
      iVar4 = uVar7 - uVar13;
      puVar3 = (undefined1 *)((int)puVar12 + uVar13);
      puVar9 = (undefined1 *)((int)puVar1 + uVar13);
      do {
        iVar4 = iVar4 + -1;
        *puVar3 = *puVar9;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar4 != 0);
    }
LAB_10006a98:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    _ZdlPv(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_10006ab8:
    if (param_3 == 0) goto LAB_10006ae4;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_10006ae0;
  }
  uVar11 = param_1[1];
LAB_10006908:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_100069c4;
  puVar12 = _Znwm(uVar11 + 1);
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  uVar10 = 0;
  *(undefined1 *)puVar12 = 0;
  if (uVar6 != 0) {
    bVar14 = uVar6 == 0x10;
    uVar7 = extraout_r3;
    if (0xf < uVar6) {
      uVar7 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar7 == 0xf;
    }
    if ((0xf < uVar6 && 0xe < uVar7) && !bVar14) {
      uVar10 = uVar6 & 0xfffffff0;
      uVar7 = uVar10;
      puVar5 = puVar12;
      puVar8 = puVar1;
      do {
        uVar15 = *puVar8;
        uVar16 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar7 = uVar7 - 0x10;
        *puVar5 = uVar15;
        puVar5[1] = uVar16;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      if (uVar6 == uVar10) goto LAB_100069a4;
    }
    iVar4 = uVar6 - uVar10;
    puVar3 = (undefined1 *)((int)puVar1 + uVar10);
    puVar9 = (undefined1 *)((int)puVar12 + uVar10);
    do {
      iVar4 = iVar4 + -1;
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_100069a4:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  _ZdlPv(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_100069c4:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_10006ae0:
  puVar12 = (undefined8 *)*param_1;
LAB_10006ae4:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x100068f4:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_10006908;
  goto LAB_100068ec;
}


#undef DAT_10006c88
#define DAT_10006c88 (*(int *)(0x10006c88U))
#undef DAT_10006c8c
#define DAT_10006c8c (*(int *)(0x10006c8cU))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b08
 */

void recovered_10006b08(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x1f0U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xf0ULL}) + 0x10006b60;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10006c30;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 2;
      local_98 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
LAB_10006be8:
      param_2 = local_98;
      piVar1 = (int *)*local_98;
      iVar2 = piVar1[2];
      piVar1[2] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
      }
    }
  }
  else {
    if (param_1 != 6) {
      local_90 = 0xffffffff;
      recovered_10006c90(param_1,param_2);
      goto LAB_10006c30;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10006c30;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 1;
      local_98 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      goto LAB_10006be8;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
LAB_10006c30:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10006c88
#undef DAT_10006c8c
#undef DAT_1000c008
#undef local_98
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_10006df8
#define DAT_10006df8 (*(int *)(0x10006df8U))
#undef DAT_10006dfc
#define DAT_10006dfc (*(int *)(0x10006dfcU))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c90
 */

void recovered_10006c90(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x200U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xd8ULL}) + 0x10006ce8;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_1 == 9) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10006da0;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 2;
      local_98 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      goto LAB_10006d70;
    }
  }
  else {
    if ((param_1 != 8) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10006da0;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 1;
      local_98 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
LAB_10006d70:
      param_2 = local_98;
      piVar1 = (int *)*local_98;
      iVar2 = piVar1[2];
      piVar1[2] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
      }
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
LAB_10006da0:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10006df8
#undef DAT_10006dfc
#undef DAT_1000c008
#undef local_98
#undef auStack_68
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_1000745c
#define DAT_1000745c (*(int *)(0x1000745cU))
#undef DAT_10007460
#define DAT_10007460 (*(int *)(0x10007460U))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_a4 (*(int *)(pf_stack_frame + 28))
#define local_a0 (*(int *)(pf_stack_frame + 32))
#define local_9c (*(int *)(pf_stack_frame + 36))
#define local_98 (*(int * *)(pf_stack_frame + 40))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e00
 */

int * recovered_10006e00(int *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  _ZdlPv((void *)param_1[0x2ed]);
  _ZdlPv((void *)param_1[0x2e7]);
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x210U);
  iVar3 = param_1[0x2e4];
  local_70 = (*(uint32_t *)(uint32_t[]){0x5acULL}) + 0x10006e68;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  _Unwind_SjLj_Register(&uStack_94);
  local_98 = param_1;
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar5 = param_1[0x2e3];
      piVar1 = *(int **)(iVar5 + iVar4);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[1];
        piVar1[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          local_90 = 1;
          local_a4 = iVar5;
          local_a0 = iVar4;
          local_9c = iVar3;
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
          param_1 = local_98;
          iVar3 = local_9c;
          iVar4 = local_a0;
          iVar5 = local_a4;
          piVar1 = *(int **)(local_a4 + local_a0);
          iVar2 = piVar1[2];
          piVar1[2] = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
          }
        }
        *(undefined4 *)(iVar5 + iVar4) = 0;
        ((undefined4 *)(iVar5 + iVar4))[1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x2e4] = 0;
  _ZdlPv((void *)param_1[0x2e3]);
  iVar3 = param_1[0x2e1];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 8 + -4;
    iVar3 = 1 - iVar3;
    do {
      iVar5 = param_1[0x2e0];
      piVar1 = *(int **)(iVar5 + iVar3 * -8);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[1];
        piVar1[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          local_90 = 2;
          local_a4 = iVar5;
          local_a0 = iVar3;
          local_9c = iVar4;
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
          param_1 = local_98;
          iVar4 = local_9c;
          iVar3 = local_a0;
          iVar5 = local_a4;
          piVar1 = *(int **)(local_a4 + local_a0 * -8);
          iVar2 = piVar1[2];
          piVar1[2] = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
          }
        }
        *(undefined4 *)(iVar5 + iVar4) = 0;
        *(undefined4 *)(iVar5 + iVar3 * -8) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar3 != 1);
  }
  param_1[0x2e1] = 0;
  _ZdlPv((void *)param_1[0x2e0]);
  param_1[0x2dd] = 0;
  _ZdlPv((void *)param_1[0x2dc]);
  param_1[0x2da] = 0;
  _ZdlPv((void *)param_1[0x2d9]);
  recovered_10007464(param_1 + 0x2d6);
  param_1[0x2d3] = 0;
  _ZdlPv((void *)param_1[0x2d2]);
  param_1[0x2d0] = 0;
  _ZdlPv((void *)param_1[0x2cf]);
  iVar3 = param_1[0x2cd];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0x34;
    do {
      iVar4 = iVar4 + -0x34;
      recovered_1000754c((undefined4 *)(param_1[0x2cc] + iVar4));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x2cd] = 0;
  _ZdlPv((void *)param_1[0x2cc]);
  param_1[0x2c8] = 0;
  _ZdlPv((void *)param_1[0x2c7]);
  param_1[0x2c5] = 0;
  _ZdlPv((void *)param_1[0x2c4]);
  iVar3 = param_1[0x2c2];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0x88 + -0x84;
    do {
      recovered_100076e4((int *)(param_1[0x2c1] + iVar4));
      iVar4 = iVar4 + -0x88;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x2c2] = 0;
  _ZdlPv((void *)param_1[0x2c1]);
  piVar1 = (int *)param_1[0x2bd];
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[1];
    piVar1[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      local_90 = 3;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      param_1 = local_98;
      piVar1 = (int *)local_98[0x2bd];
      iVar3 = piVar1[2];
      piVar1[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
      }
    }
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
  }
  piVar1 = (int *)param_1[699];
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[1];
    piVar1[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      local_90 = 4;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      param_1 = local_98;
      piVar1 = (int *)local_98[699];
      iVar3 = piVar1[2];
      piVar1[2] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
      }
    }
    param_1[700] = 0;
    param_1[699] = 0;
  }
  _ZdlPv((void *)param_1[0x2b5]);
  param_1[0x2b1] = 0;
  _ZdlPv((void *)param_1[0x2b0]);
  param_1[0x39] = 0;
  _ZdlPv((void *)param_1[0x38]);
  param_1[0x36] = 0;
  _ZdlPv((void *)param_1[0x35]);
  if (param_1[0x33] != 0) {
    iVar3 = 1 - param_1[0x33];
    do {
      _ZdlPv(*(void **)(param_1[0x32] + iVar3 * -0x10));
      iVar3 = iVar3 + 1;
    } while (iVar3 != 1);
  }
  param_1[0x33] = 0;
  _ZdlPv((void *)param_1[0x32]);
  iVar3 = param_1[0x30];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      recovered_10007984((int *)(param_1[0x2f] + iVar4));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x30] = 0;
  _ZdlPv((void *)param_1[0x2f]);
  param_1[0x2d] = 0;
  _ZdlPv((void *)param_1[0x2c]);
  param_1[0x2a] = 0;
  _ZdlPv((void *)param_1[0x29]);
  iVar3 = param_1[0x24];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar5 = param_1[0x23];
      recovered_1000781c((int *)(iVar5 + iVar4));
      _ZdlPv(*(void **)(iVar5 + iVar4));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x24] = 0;
  _ZdlPv((void *)param_1[0x23]);
  iVar3 = param_1[0x21];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar5 = param_1[0x20];
      recovered_1000781c((int *)(iVar5 + iVar4));
      _ZdlPv(*(void **)(iVar5 + iVar4));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x21] = 0;
  _ZdlPv((void *)param_1[0x20]);
  iVar3 = param_1[0x1e];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar5 = param_1[0x1d];
      recovered_1000781c((int *)(iVar5 + iVar4));
      _ZdlPv(*(void **)(iVar5 + iVar4));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x1e] = 0;
  _ZdlPv((void *)param_1[0x1d]);
  recovered_1000781c(param_1 + 0x1a);
  _ZdlPv((void *)param_1[0x1a]);
  param_1[0x17] = 0;
  _ZdlPv((void *)param_1[0x16]);
  param_1[0x14] = 0;
  _ZdlPv((void *)param_1[0x13]);
  iVar3 = param_1[0x11];
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0x10 + -4;
    iVar3 = 1 - iVar3;
    do {
      iVar5 = param_1[0x10];
      piVar1 = *(int **)(iVar5 + iVar4);
      if (piVar1 != (int *)0x0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
      }
      _ZdlPv(*(void **)(iVar5 + iVar3 * -0x10));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -0x10;
    } while (iVar3 != 1);
  }
  param_1[0x11] = 0;
  _ZdlPv((void *)param_1[0x10]);
  param_1[0xe] = 0;
  _ZdlPv((void *)param_1[0xd]);
  recovered_10007984(param_1 + 10);
  param_1[7] = 0;
  _ZdlPv((void *)param_1[6]);
  param_1[4] = 0;
  _ZdlPv((void *)param_1[3]);
  if (param_1[1] != 0) {
    iVar3 = 1 - param_1[1];
    do {
      _ZdlPv(*(void **)(*param_1 + iVar3 * -0x10));
      iVar3 = iVar3 + 1;
    } while (iVar3 != 1);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_1000745c
#undef DAT_10007460
#undef DAT_1000c008
#undef auStack_b0
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007464
 */

int * recovered_10007464(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;

  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar5 = iVar4 * 0x24 + -0x10;
    do {
      iVar6 = *param_1;
      piVar3 = (int *)(iVar6 + iVar5);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[2] + -1;
        bVar7 = iVar2 == 0;
        piVar1[2] = iVar2;
        if (bVar7) {
          iVar2 = piVar1[1];
        }
        if (bVar7 && iVar2 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
        }
        *(undefined4 *)(iVar6 + iVar5) = 0;
        ((undefined4 *)(iVar6 + iVar5))[1] = 0;
      }
      piVar1 = (int *)piVar3[-2];
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[2] + -1;
        bVar7 = iVar2 == 0;
        piVar1[2] = iVar2;
        if (bVar7) {
          iVar2 = piVar1[1];
        }
        if (bVar7 && iVar2 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
        }
        piVar3[-2] = 0;
        *(undefined4 *)(iVar6 + iVar5 + -4) = 0;
      }
      _ZdlPv((void *)piVar3[-5]);
      iVar5 = iVar5 + -0x24;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return param_1;
}


#undef DAT_100076dc
#define DAT_100076dc (*(int *)(0x100076dcU))
#undef DAT_100076e0
#define DAT_100076e0 (*(int *)(0x100076e0U))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(undefined4 * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000754c
 */

undefined4 * recovered_1000754c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  piVar2 = (int *)param_1[5];
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x224U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x100ULL}) + 0x100075a4;
  _Unwind_SjLj_Register(&uStack_94);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 1;
      local_98 = param_1;
      (**(code **)(*piVar2 + 8))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)local_98[5];
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
    param_1[6] = 0;
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      local_90 = 2;
      local_98 = param_1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 8)))(piVar2);
      param_1 = local_98;
      piVar2 = (int *)local_98[3];
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
    param_1[4] = 0;
    param_1[3] = 0;
  }
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_100076dc
#undef DAT_100076e0
#undef DAT_1000c008
#undef auStack_68
#undef local_98
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e4
 */

int * recovered_100076e4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  param_1[0x1b] = 0;
  _ZdlPv((void *)param_1[0x1a]);
  param_1[0x18] = 0;
  _ZdlPv((void *)param_1[0x17]);
  if (param_1[0x15] != 0) {
    iVar2 = 1 - param_1[0x15];
    do {
      _ZdlPv(*(void **)(param_1[0x14] + iVar2 * -0x10));
      iVar2 = iVar2 + 1;
    } while (iVar2 != 1);
  }
  param_1[0x15] = 0;
  _ZdlPv((void *)param_1[0x14]);
  recovered_10007984(param_1 + 0x11);
  iVar2 = param_1[0xf];
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0xc;
    do {
      iVar3 = iVar3 + -0xc;
      _ZdlPv(*(void **)(param_1[0xe] + iVar3));
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[0xf] = 0;
  _ZdlPv((void *)param_1[0xe]);
  recovered_10007984(param_1 + 9);
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0xc;
    do {
      iVar3 = iVar3 + -0xc;
      _ZdlPv(*(void **)(param_1[6] + iVar3));
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[7] = 0;
  _ZdlPv((void *)param_1[6]);
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[2] + -1;
    bVar4 = iVar2 == 0;
    piVar1[2] = iVar2;
    if (bVar4) {
      iVar2 = piVar1[1];
    }
    if (bVar4 && iVar2 == 0) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 4)))(piVar1);
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  return param_1;
}


#undef DAT_1000797c
#define DAT_1000797c (*(int *)(0x1000797cU))
#undef DAT_10007980
#define DAT_10007980 (*(int *)(0x10007980U))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define local_90 (*(undefined4 *)(pf_stack_frame + 48))
#define local_7c (*(undefined4 *)(pf_stack_frame + 68))
#define local_78 (*(int *)(pf_stack_frame + 72))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 76))
#define local_70 (*(int *)(pf_stack_frame + 80))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 84))
#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 44))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 88))
#define local_a4 (*(int * *)(pf_stack_frame + 28))
#define local_a0 (*(int * *)(pf_stack_frame + 32))
#define local_9c (*(int *)(pf_stack_frame + 36))
#define local_98 (*(int *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000781c
 */

void recovered_1000781c(int *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  iVar2 = param_1[1];
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x234U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xd8ULL}) + 0x10007874;
  _Unwind_SjLj_Register(&uStack_94);
  if (iVar2 != 0) {
    iVar4 = iVar2 * 0x20 + -0x10;
    iVar2 = 1 - iVar2;
    local_a4 = param_1;
    do {
      piVar3 = (int *)(*param_1 + iVar4);
      uVar1 = piVar3[3];
      if (1 < uVar1) {
        if (uVar1 != 2) {
          if (uVar1 != 3) {
            if ((uVar1 & 0xfffffffe) != 4) {
              local_90 = 1;
              local_a0 = piVar3;
              local_9c = iVar2;
              local_98 = iVar4;
              recovered_10006b08(uVar1,piVar3);
              iVar2 = local_9c;
              piVar3 = local_a0;
              iVar4 = local_98;
              param_1 = local_a4;
            }
            goto LAB_100078ac;
          }
          piVar3[1] = 0;
        }
        _ZdlPv((void *)*piVar3);
      }
LAB_100078ac:
      _ZdlPv((void *)piVar3[-4]);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -0x20;
    } while (iVar2 != 1);
  }
  param_1[1] = 0;
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_1000797c
#undef DAT_10007980
#undef DAT_1000c008
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98

#undef DAT_10007ad4
#define DAT_10007ad4 (*(int *)(0x10007ad4U))
#undef DAT_10007ad8
#define DAT_10007ad8 (*(int *)(0x10007ad8U))
#undef DAT_1000c008
#define DAT_1000c008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x452cU)))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_a0 (*(int * *)(pf_stack_frame + 16))
#define local_9c (*(int *)(pf_stack_frame + 20))
#define local_98 (*(int *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007984
 */

int * recovered_10007984(int *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  iVar3 = param_1[1];
  local_7c = DAT_1000c008;
  local_78 = ((uintptr_t)pf_module_state + 0x244U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xc8ULL}) + 0x100079dc;
  _Unwind_SjLj_Register(&uStack_94);
  if (iVar3 != 0) {
    iVar4 = iVar3 * 0x14 + -0x10;
    local_a0 = param_1;
    do {
      piVar2 = (int *)(*param_1 + iVar4);
      uVar1 = piVar2[3];
      if (1 < uVar1) {
        if (uVar1 != 2) {
          if (uVar1 != 3) {
            if ((uVar1 & 0xfffffffe) != 4) {
              local_90 = 1;
              local_9c = iVar4;
              local_98 = iVar3;
              recovered_10006b08(uVar1,piVar2);
              param_1 = local_a0;
              iVar3 = local_98;
              iVar4 = local_9c;
            }
            goto LAB_10007a14;
          }
          piVar2[1] = 0;
        }
        _ZdlPv((void *)*piVar2);
      }
LAB_10007a14:
      iVar4 = iVar4 + -0x14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_10007ad4
#undef DAT_10007ad8
#undef DAT_1000c008
#undef uStack_94
#undef auStack_68
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
