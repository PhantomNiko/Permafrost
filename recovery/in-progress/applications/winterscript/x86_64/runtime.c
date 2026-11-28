/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_100050d0
#define DAT_100050d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acU)))
#undef DAT_10005255
#define DAT_10005255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_10005265
#define DAT_10005265 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x341U)))
#undef DAT_1000526a
#define DAT_1000526a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x346U)))
#undef DAT_1000526e
#define DAT_1000526e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34aU)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_100016da
#define LAB_100016da (*(uint8_t *)(0x100016daU))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(uint *)(0x280834U))
#undef str_10005256
#define str_10005256 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x332U)))
#undef str_1000525d
#define str_1000525d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_1000536a
#define str_1000536a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x446U)))
#undef str_1000543d
#define str_1000543d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x519U)))
#define local_2008 (*(char (*)[8200])(pf_stack_frame + 24))
#define local_1000 (*(void * *)(pf_stack_frame + 4128))
#define local_ff0 (*(undefined8 *)(pf_stack_frame + 4144))
#define local_220 (*(char * *)(pf_stack_frame + 7680))
#define local_210 (*(undefined8 *)(pf_stack_frame + 7696))
#define local_1f8 (*(void ** *)(pf_stack_frame + 7720))
#define local_1f0 (*(void * *)(pf_stack_frame + 7728))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 7744))
#define local_1d8 (*(ulong *)(pf_stack_frame + 7752))
#define local_1d0 (*(char * *)(pf_stack_frame + 7760))
#define local_1c0 (*(undefined8 *)(pf_stack_frame + 7776))
#define local_1b8 (*(undefined1 * *)(pf_stack_frame + 7784))
#define local_1b0 (*(undefined4 *)(pf_stack_frame + 7792))
#define local_198 (*(ulong *)(pf_stack_frame + 7816))
#define local_190 (*(ulong *)(pf_stack_frame + 7824))
#define local_188 (*(ulong *)(pf_stack_frame + 7832))
#define local_180 (*(void * *)(pf_stack_frame + 7840))
#define local_170 (*(undefined8 *)(pf_stack_frame + 7856))
#define local_168 (*(char *)(pf_stack_frame + 7864))
#define local_160 (*(int (*)[88])(pf_stack_frame + 7872))
#define local_158 (*(void * *)(pf_stack_frame + 7880))
#define local_150 (*(undefined8 *)(pf_stack_frame + 7888))
#define local_140 (*(ulong *)(pf_stack_frame + 7904))
#define local_138 (*(undefined1 * *)(pf_stack_frame + 7912))
#define local_128 (*(undefined8 *)(pf_stack_frame + 7928))
#define local_11c (*(undefined4 *)(pf_stack_frame + 7940))
#define local_118 (*(ulong *)(pf_stack_frame + 7944))
#define local_f8 (*(char * *)(pf_stack_frame + 7976))
#define local_f0 (*(char * *)(pf_stack_frame + 7984))
#define local_e0 (*(undefined8 *)(pf_stack_frame + 8000))
#define local_d8 (*(undefined1 * *)(pf_stack_frame + 8008))
#define local_c8 (*(undefined8 *)(pf_stack_frame + 8024))
#define local_c0 (*(char * *)(pf_stack_frame + 8032))
#define local_b8 (*(ulong *)(pf_stack_frame + 8040))
#define local_b0 (*(char * *)(pf_stack_frame + 8048))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 8056))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 8064))
#define local_88 (*(undefined8 *)(pf_stack_frame + 8088))
#define local_80 (*(undefined * *)(pf_stack_frame + 8096))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 8104))
#define uStack_ff8 (*(ulong *)(pf_stack_frame + 4136))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 8112))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 8120))
#define lStack_218 (*(long *)(pf_stack_frame + 7688))
#define local_50 (*(char * *)(pf_stack_frame + 8144))
#define local_41 (*(undefined1 *)(pf_stack_frame + 8159))
#define local_40 (*(long *)(pf_stack_frame + 8160))
#define local_38 (*(undefined8 *)(pf_stack_frame + 8168))
#define uStack_1e8 (*(undefined8 *)(pf_stack_frame + 7736))
#define lStack_1c8 (*(long *)(pf_stack_frame + 7768))
#define uStack_1ac (*(undefined4 *)(pf_stack_frame + 7796))
#define lStack_178 (*(long *)(pf_stack_frame + 7848))
#define uStack_130 (*(ulong *)(pf_stack_frame + 7920))
#define uStack_e8 (*(ulong *)(pf_stack_frame + 7992))
#define uStack_d0 (*(ulong *)(pf_stack_frame + 8016))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10000670(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[8256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  byte bVar12;
  bool bVar13;

  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 8224) + -8);
  local_68 = local_2008;
  local_180 = (void *)0x0;
  lStack_178 = 0;
  local_170 = 0;
  local_168 = (int)param_1 < 2;
  local_88 = DAT_10006000;
  local_80 = &DAT_100050d0;
  local_70 = &LAB_100016da;
  local_40 = param_2;
  _Unwind_SjLj_Register(&local_a8);
  if (param_2 != 0 && 1 < (int)param_1) {
    uVar7 = 1;
    local_1d8 = (ulong)param_1;
LAB_10000779:
    puVar11 = *(undefined1 **)(local_40 + uVar7 * 8);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_10005255;
    }
    local_d8 = (undefined1 *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    uVar9 = 0xffffffffffffffff;
    do {
      lVar3 = uVar9 + 1;
      uVar9 = uVar9 + 1;
    } while (puVar11[lVar3] != '\0');
    local_a0 = 1;
    local_38 = uVar7;
    recovered_10001d10((long *)&local_d8,(long)puVar11,uVar9);
    puVar11 = local_d8;
    if (local_d8 == (undefined1 *)0x0) {
      puVar11 = &DAT_10005255;
    }
    if (uStack_d0 != 0) {
      uVar7 = 0;
      do {
        if (puVar11[uVar7] == '=') {
          if (uVar7 != 0xffffffffffffffff) {
            uVar9 = uStack_d0;
            if (uVar7 <= uStack_d0) {
              uVar9 = uVar7;
            }
            local_138 = (undefined1 *)0x0;
            uStack_130 = 0;
            local_128 = 0;
            local_a0 = 2;
            local_b8 = uVar7;
            recovered_10001d10((long *)&local_138,(long)puVar11,uVar9);
            uVar7 = local_b8 + 1;
            if (uStack_d0 < local_b8 + 1) {
              uVar7 = uStack_d0;
            }
            puVar11 = local_d8;
            if (local_d8 == (undefined1 *)0x0) {
              puVar11 = &DAT_10005255;
            }
            local_f0 = (char *)0x0;
            uStack_e8 = 0;
            local_e0 = 0;
            local_a0 = 3;
            recovered_10001d10((long *)&local_f0,(long)(puVar11 + uVar7),uStack_d0 - uVar7);
            local_b8 = uStack_130;
            local_1000 = (void *)0x0;
            uStack_ff8 = 0;
            local_ff0 = 0;
            local_a0 = 4;
            recovered_10001d10((long *)&local_1000,((uintptr_t)pf_module_state + 0x332U),6);
            uVar7 = uStack_ff8;
            _ZdlPv(local_1000);
            if (local_b8 != uVar7) goto LAB_10000994;
            if (uStack_130 == 0) goto LAB_10000702;
            puVar11 = local_138;
            if (local_138 == (undefined1 *)0x0) {
              puVar11 = &DAT_10005255;
            }
            uVar7 = 0;
            goto LAB_10000950;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uStack_d0 != uVar7);
    }
    goto LAB_10000760;
  }
LAB_10000d33:
  local_a0 = 10;
  _ZN12WinterScriptC1Ev((long *)&local_1000);
  if (local_168 == '\x01') {
    local_a0 = 0xb;
    wm_lua_write(((uintptr_t)pf_module_state + 0x34dU),0x23);
    local_a0 = 0xc;
    wm_lua_writeline();
    local_a0 = 0xd;
    wm_lua_write(((uintptr_t)pf_module_state + 0x371U),0x3f);
    local_a0 = 0xe;
    wm_lua_writeline();
    local_a0 = 0xf;
    wm_lua_write(((uintptr_t)pf_module_state + 0x3b1U),0x32);
    local_a0 = 0x10;
    wm_lua_writeline();
    local_a0 = 0x11;
    wm_lua_write(((uintptr_t)pf_module_state + 0x3e4U),0x22);
    local_a0 = 0x12;
    wm_lua_writeline();
    local_a0 = 0x13;
    wm_lua_write(((uintptr_t)pf_module_state + 0x407U),0x2d);
    local_a0 = 0x14;
    wm_lua_writeline();
    local_a0 = 0x15;
    wm_lua_write(((uintptr_t)pf_module_state + 0x331U),0);
    local_a0 = 0x16;
    wm_lua_writeline();
    local_a0 = 0x17;
    wm_lua_write(((uintptr_t)pf_module_state + 0x435U),0x10);
    local_a0 = 0x18;
    wm_lua_writeline();
    local_a0 = 0x19;
    wm_lua_write(((uintptr_t)pf_module_state + 0x331U),0);
    local_a0 = 0x1a;
    wm_lua_writeline();
    local_1b0 = 0;
    local_1b8 = (undefined1 *)0x0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && ((code *)(ulong)_DAT_00280834 != (code *)0x0)))) {
      local_a0 = 0x1b;
      iVar6 = (*(code *)(ulong)_DAT_00280834)(str_1000536a,&local_1b8);
      if (iVar6 != 0) {
        local_d8 = (undefined1 *)0x0;
        uStack_d0 = 0;
        local_c8 = 0;
        local_a0 = 0x1c;
        recovered_10001d10((long *)&local_d8,((uintptr_t)pf_module_state + 0x446U),8);
        local_a0 = 0x1d;
        _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(local_160,&local_1000,&local_d8);
        _ZdlPv(local_d8);
        local_a0 = 0x1e;
        wm_lua_write(((uintptr_t)pf_module_state + 0x44fU),9);
        local_a0 = 0x1f;
        wm_lua_write(((uintptr_t)pf_module_state + 0x446U),8);
        local_a0 = 0x20;
        wm_lua_writeline();
        if (local_160[0] != 0) {
          local_a0 = 0x21;
          recovered_10001fc0((long *)&local_d8,(undefined8 *)local_160);
          puVar11 = &DAT_10005255;
          if (local_d8 != (undefined1 *)0x0) {
            puVar11 = local_d8;
          }
          local_a0 = 0x22;
          wm_lua_write((long)puVar11,uStack_d0);
          local_a0 = 0x23;
          wm_lua_writeline();
          _ZdlPv(local_d8);
        }
        if (1 < local_140) {
          if (local_140 != 2) {
            if (local_140 != 3) {
              if ((local_140 & 0xfffffffffffffffe) != 4) {
                local_a0 = 0x24;
                recovered_10003fc0(local_140,(long *)&local_158);
              }
              goto LAB_1000106f;
            }
            local_150 = 0;
          }
          _ZdlPv(local_158);
        }
      }
    }
  }
LAB_1000106f:
  if (lStack_178 == 0) {
    local_38 = CONCAT44(PF_PART4(local_38, 4),1);
  }
  else {
    local_38 = CONCAT44(PF_PART4(local_38, 4),1);
    local_a0 = 0x29;
    _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(local_160,&local_1000,&local_180);
    if (local_160[0] != 0) {
      local_a0 = 0x2a;
      recovered_10001fc0((long *)&local_1b8,(undefined8 *)local_160);
      puVar11 = &DAT_10005255;
      if (local_1b8 != (undefined1 *)0x0) {
        puVar11 = local_1b8;
      }
      local_a0 = 0x2b;
      wm_lua_write((long)puVar11,CONCAT44(uStack_1ac,local_1b0));
      local_a0 = 0x2c;
      wm_lua_writeline();
      _ZdlPv(local_1b8);
    }
    local_1f8 = &local_158;
    local_118 = local_140;
    if (1 < local_140) {
      if (local_140 != 2) {
        if (local_140 != 3) {
          if ((local_140 & 0xfffffffffffffffe) != 4) {
            local_a0 = 0x2d;
            recovered_10003fc0(local_140,(long *)local_1f8);
          }
          goto LAB_10001165;
        }
        local_150 = 0;
      }
      _ZdlPv(local_158);
    }
  }
LAB_10001165:
  local_11c = (undefined4)local_38;
  if (local_168 == '\x01') {
    do {
      local_a0 = 0x33;
      local_41 = wm_lua_readline((long)local_2008,0x1000,str_1000543d,1);
      if (!(bool)local_41) break;
      local_220 = (char *)0x0;
      lStack_218 = 0;
      local_210 = 0;
      uVar7 = 0xffffffffffffffff;
      do {
        local_188 = uVar7 + 1;
        lVar3 = uVar7 + 1;
        uVar7 = local_188;
      } while (local_2008[lVar3] != '\0');
      local_a0 = 0x34;
      recovered_10001d10((long *)&local_220,(long)local_2008,local_188);
      local_f8 = local_220;
      local_b0 = &DAT_10005255;
      if (local_220 != (char *)0x0) {
        local_b0 = local_220;
      }
      if (lStack_218 == 5) {
        if (((*local_b0 == '.') && (local_b0[1] == 'e')) &&
           ((local_b0[2] == 'x' && (local_b0[3] == 'i')))) {
          cVar5 = local_b0[4];
joined_r0x10001895:
          if (cVar5 == 't') {
            _ZdlPv(local_220);
            break;
          }
        }
      }
      else if (lStack_218 == 4) {
        if (*local_b0 == 'q') {
          if (local_b0[1] == 'u') goto LAB_100018a9;
        }
        else if ((*local_b0 == 'e') && (local_b0[1] == 'x')) {
LAB_100018a9:
          if (local_b0[2] == 'i') {
            cVar5 = local_b0[3];
            goto joined_r0x10001895;
          }
        }
      }
      _ZdlPv(local_220);
      local_1d0 = (char *)0x0;
      lStack_1c8 = 0;
      local_1c0 = 0;
      uVar7 = 0xffffffffffffffff;
      do {
        local_190 = uVar7 + 1;
        lVar3 = uVar7 + 1;
        uVar7 = local_190;
      } while (local_2008[lVar3] != '\0');
      local_a0 = 0x35;
      recovered_10001d10((long *)&local_1d0,(long)local_2008,local_190);
      local_50 = local_1d0;
      local_c0 = &DAT_10005255;
      if (local_1d0 != (char *)0x0) {
        local_c0 = local_1d0;
      }
      if (lStack_1c8 == 5) {
        bVar2 = false;
        if ((((*local_c0 == ':') && (bVar2 = false, local_c0[1] == 'h')) &&
            (bVar2 = false, local_c0[2] == 'e')) && (bVar2 = false, local_c0[3] == 'l')) {
          bVar13 = local_c0[4] == 'p';
          goto LAB_10001a5a;
        }
      }
      else {
        bVar2 = false;
        if ((((lStack_1c8 == 6) && (bVar2 = false, *local_c0 == 'h')) &&
            ((bVar2 = false, local_c0[1] == 'e' &&
             ((bVar2 = false, local_c0[2] == 'l' && (bVar2 = false, local_c0[3] == 'p')))))) &&
           (bVar2 = false, local_c0[4] == '(')) {
          bVar13 = local_c0[5] == ')';
LAB_10001a5a:
          bVar2 = false;
          if (bVar13) {
            local_a0 = 0x36;
            wm_lua_write(((uintptr_t)pf_module_state + 0x435U),0x10);
            local_a0 = 0x37;
            wm_lua_writeline();
            local_a0 = 0x38;
            wm_lua_write(((uintptr_t)pf_module_state + 0x331U),0);
            local_a0 = 0x39;
            wm_lua_writeline();
            bVar2 = true;
          }
        }
      }
      _ZdlPv(local_1d0);
      if ((!bVar2) && (local_2008[0] != '\0')) {
        local_1f0 = (void *)0x0;
        uStack_1e8 = 0;
        local_1e0 = 0;
        uVar7 = 0xffffffffffffffff;
        do {
          local_198 = uVar7 + 1;
          lVar3 = uVar7 + 1;
          uVar7 = local_198;
        } while (local_2008[lVar3] != '\0');
        local_a0 = 0x3a;
        recovered_10001d10((long *)&local_1f0,(long)local_2008,local_198);
        local_a0 = 0x3b;
        _ZN12WinterScript9runScriptERKN2wm6stringE((long)&local_1000,&local_1f0);
        _ZdlPv(local_1f0);
      }
    } while (local_168 != '\0');
  }
  recovered_100041f0((long *)&local_1000);
  _ZdlPv(local_180);
  uVar4 = local_11c;
  local_a0 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_a8);
  return uVar4;
  while (uVar7 = uVar7 + 1, uStack_130 != uVar7) {
LAB_10000950:
    bVar8 = puVar11[uVar7];
    bVar1 = str_10005256[uVar7];
    bVar12 = bVar8 | 0x20;
    if (0x19 < (byte)(bVar8 + 0xbf)) {
      bVar12 = bVar8;
    }
    bVar8 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar8 = bVar1;
    }
    if (bVar12 != bVar8) goto LAB_10000994;
  }
LAB_10000702:
  pcVar10 = local_f0;
  if (local_f0 == (char *)0x0) {
    pcVar10 = &DAT_10005255;
  }
  local_a0 = 5;
  recovered_10001d10((long *)&local_180,(long)pcVar10,uStack_e8);
  goto LAB_10000734;
LAB_10000994:
  local_b8 = uStack_130;
  local_1000 = (void *)0x0;
  uStack_ff8 = 0;
  local_ff0 = 0;
  local_a0 = 6;
  recovered_10001d10((long *)&local_1000,((uintptr_t)pf_module_state + 0x339U),7);
  uVar7 = uStack_ff8;
  _ZdlPv(local_1000);
  if (local_b8 != uVar7) goto LAB_10000734;
  if (uStack_130 != 0) {
    puVar11 = local_138;
    if (local_138 == (undefined1 *)0x0) {
      puVar11 = &DAT_10005255;
    }
    uVar7 = 0;
    do {
      bVar8 = puVar11[uVar7];
      bVar1 = str_1000525d[uVar7];
      bVar12 = bVar8 | 0x20;
      if (0x19 < (byte)(bVar8 + 0xbf)) {
        bVar12 = bVar8;
      }
      bVar8 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar8 = bVar1;
      }
      if (bVar12 != bVar8) goto LAB_10000734;
      uVar7 = uVar7 + 1;
    } while (uStack_130 != uVar7);
  }
  local_b8 = uStack_e8;
  local_1000 = (void *)0x0;
  uStack_ff8 = 0;
  local_ff0 = 0;
  local_a0 = 7;
  recovered_10001d10((long *)&local_1000,((uintptr_t)pf_module_state + 0x341U),4);
  uVar7 = uStack_ff8;
  _ZdlPv(local_1000);
  if (local_b8 == uVar7) {
    cVar5 = '\x01';
    if (uStack_e8 != 0) {
      pcVar10 = local_f0;
      if (local_f0 == (char *)0x0) {
        pcVar10 = &DAT_10005255;
      }
      uVar7 = 0;
      do {
        bVar8 = pcVar10[uVar7];
        bVar1 = (&DAT_10005265)[uVar7];
        bVar12 = bVar8 | 0x20;
        if (0x19 < (byte)(bVar8 + 0xbf)) {
          bVar12 = bVar8;
        }
        bVar8 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar8 = bVar1;
        }
        if (bVar12 != bVar8) goto LAB_10000b57;
        uVar7 = uVar7 + 1;
      } while (uStack_e8 != uVar7);
    }
  }
  else {
LAB_10000b57:
    if (uStack_e8 == 1) {
      pcVar10 = local_f0;
      if (local_f0 == (char *)0x0) {
        pcVar10 = &DAT_10005255;
      }
      cVar5 = '\x01';
      if (*pcVar10 == '1') goto LAB_10000d28;
    }
    local_b8 = uStack_e8;
    local_1000 = (void *)0x0;
    uStack_ff8 = 0;
    local_ff0 = 0;
    local_a0 = 8;
    recovered_10001d10((long *)&local_1000,((uintptr_t)pf_module_state + 0x346U),3);
    uVar7 = uStack_ff8;
    _ZdlPv(local_1000);
    if (local_b8 == uVar7) {
      cVar5 = '\x01';
      if (uStack_e8 != 0) {
        pcVar10 = local_f0;
        if (local_f0 == (char *)0x0) {
          pcVar10 = &DAT_10005255;
        }
        uVar7 = 0;
        do {
          bVar8 = pcVar10[uVar7];
          bVar1 = (&DAT_1000526a)[uVar7];
          bVar12 = bVar8 | 0x20;
          if (0x19 < (byte)(bVar8 + 0xbf)) {
            bVar12 = bVar8;
          }
          bVar8 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar8 = bVar1;
          }
          if (bVar12 != bVar8) goto LAB_10000c5a;
          uVar7 = uVar7 + 1;
        } while (uStack_e8 != uVar7);
      }
    }
    else {
LAB_10000c5a:
      local_b8 = uStack_e8;
      local_1000 = (void *)0x0;
      uStack_ff8 = 0;
      local_ff0 = 0;
      local_a0 = 9;
      recovered_10001d10((long *)&local_1000,((uintptr_t)pf_module_state + 0x34aU),2);
      uVar7 = uStack_ff8;
      _ZdlPv(local_1000);
      if (local_b8 == uVar7) {
        cVar5 = '\x01';
        if (uStack_e8 != 0) {
          pcVar10 = local_f0;
          if (local_f0 == (char *)0x0) {
            pcVar10 = &DAT_10005255;
          }
          uVar7 = 0;
          do {
            bVar8 = pcVar10[uVar7];
            bVar1 = (&DAT_1000526e)[uVar7];
            bVar12 = bVar8 | 0x20;
            if (0x19 < (byte)(bVar8 + 0xbf)) {
              bVar12 = bVar8;
            }
            bVar8 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar8 = bVar1;
            }
            if (bVar12 != bVar8) goto LAB_10000d26;
            uVar7 = uVar7 + 1;
          } while (uStack_e8 != uVar7);
        }
      }
      else {
LAB_10000d26:
        cVar5 = '\0';
      }
    }
  }
LAB_10000d28:
  local_168 = cVar5;
LAB_10000734:
  _ZdlPv(local_f0);
  _ZdlPv(local_138);
LAB_10000760:
  _ZdlPv(local_d8);
  uVar7 = local_38 + 1;
  if (uVar7 == local_1d8) goto LAB_10000d33;
  goto LAB_10000779;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_100050d0
#undef DAT_10005255
#undef DAT_10005265
#undef DAT_1000526a
#undef DAT_1000526e
#undef DAT_10006000
#undef LAB_100016da
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_10005256
#undef str_1000525d
#undef str_1000536a
#undef str_1000543d
#undef local_2008
#undef local_1000
#undef local_ff0
#undef local_220
#undef local_210
#undef local_1f8
#undef local_1f0
#undef local_1e0
#undef local_1d8
#undef local_1d0
#undef local_1c0
#undef local_1b8
#undef local_1b0
#undef local_198
#undef local_190
#undef local_188
#undef local_180
#undef local_170
#undef local_168
#undef local_160
#undef local_158
#undef local_150
#undef local_140
#undef local_138
#undef local_128
#undef local_11c
#undef local_118
#undef local_f8
#undef local_f0
#undef local_e0
#undef local_d8
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef uStack_ff8
#undef local_70
#undef local_68
#undef lStack_218
#undef local_50
#undef local_41
#undef local_40
#undef local_38
#undef uStack_1e8
#undef lStack_1c8
#undef uStack_1ac
#undef lStack_178
#undef uStack_130
#undef uStack_e8
#undef uStack_d0

#undef DAT_10007070
#define DAT_10007070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214cU)))
#undef _DAT_10007070
#define _DAT_10007070 (*(code * *)(((uintptr_t)pf_module_state + 0x214cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001c90(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x54U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_10007070)();
    return;
  }
  lVar2 = -1;
  do {
    pcVar1 = (char *)(param_1 + 1 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  wm_lua_write(param_1,lVar2);
  wm_lua_writeline();
  return;
}

#undef DAT_10007070
#undef _DAT_10007070

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

void recovered_10001cc0(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  ulong uVar3;

  __cxa_begin_catch((long)param_1);
  _ZSt9terminatev();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    recovered_10001d10(param_1,0,0);
    return;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    pcVar2 = (char *)(param_2 + 1 + uVar3);
    uVar3 = uVar1;
  } while (*pcVar2 != '\0');
  recovered_10001d10(param_1,param_2,uVar1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  ulong uVar3;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    recovered_10001d10(param_1,0,0);
    return;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    pcVar2 = (char *)(param_2 + 1 + uVar3);
    uVar3 = uVar1;
  } while (*pcVar2 != '\0');
  recovered_10001d10(param_1,param_2,uVar1);
  return;
}


#define lStack_40 (*(long *)(pf_stack_frame + 32))
#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d10
 */

void recovered_10001d10(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  uVar13 = param_3;
  if (param_2 == 0) {
    uVar13 = 0;
  }
  puVar8 = (undefined1 *)*param_1;
  if (puVar8 != (undefined1 *)0x0 && param_2 != 0) {
    uVar11 = param_2 - (long)puVar8;
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        uVar12 = param_1[1] - uVar11;
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        local_48 = (void *)0x0;
        lStack_40 = 0;
        local_38 = 0;
        recovered_10001d10((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)local_48;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_40;
        param_1[2] = local_38;
        local_48 = pvVar2;
        lStack_40 = lVar3;
        local_38 = lVar4;
        _ZdlPv(pvVar2);
        return;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 <= (ulong)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (uVar13 == 0) {
    if (*param_1 == 0) {
      puVar8 = _Znwm(1);
      *puVar8 = 0;
      *param_1 = (long)puVar8;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10001f36;
  puVar8 = _Znwm(uVar13 + 1);
  *puVar8 = 0;
  pvVar2 = (void *)*param_1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar12 = 0;
    if ((3 < uVar11) && (0x1f < (ulong)((long)puVar8 - (long)pvVar2))) {
      if (uVar11 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar5 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined8 *)(puVar8 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar8 + uVar9) + 8) = uVar5;
          *(undefined8 *)(puVar8 + uVar9 + 0x10) = uVar6;
          *(undefined8 *)((long)(puVar8 + uVar9 + 0x10) + 8) = uVar7;
          uVar9 = uVar9 + 0x20;
        } while (uVar12 != uVar9);
        if (uVar11 == uVar12) goto LAB_10001f1f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_10001eb5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_10001f1f;
    }
LAB_10001eb5:
    uVar10 = uVar11 & 3;
    uVar9 = uVar12;
    if (uVar10 != 0) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar12 - uVar11 < 0xfffffffffffffffd) {
      do {
        puVar8[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar8[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar8[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar8[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar11 != uVar9);
    }
  }
LAB_10001f1f:
  puVar8[uVar11] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10001f36:
  uVar11 = (ulong)((uint)uVar13 & 3);
  if (uVar13 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
      *(undefined1 *)(*param_1 + 1 + uVar12) = *(undefined1 *)(param_2 + 1 + uVar12);
      *(undefined1 *)(*param_1 + 2 + uVar12) = *(undefined1 *)(param_2 + 2 + uVar12);
      *(undefined1 *)(*param_1 + 3 + uVar12) = *(undefined1 *)(param_2 + 3 + uVar12);
      uVar12 = uVar12 + 4;
    } while ((uVar13 & 0xfffffffffffffffc) != uVar12);
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*param_1 + uVar12) = *(undefined1 *)(param_2 + uVar12);
    uVar12 = uVar12 + 1;
  }
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef lStack_40
#undef local_48
#undef local_38

#undef DAT_10002928
#define DAT_10002928 (*(uint8_t *)(0x10002928U))
#undef DAT_10005170
#define DAT_10005170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef DAT_10005255
#define DAT_10005255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_10005265
#define DAT_10005265 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x341U)))
#undef DAT_1000538c
#define DAT_1000538c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x468U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef str_10005390
#define str_10005390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46cU)))
#undef str_1000539f
#define str_1000539f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_100053b3
#define str_100053b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48fU)))
#undef str_100053be
#define str_100053be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49aU)))
#define cStack_ff (*(char *)(pf_stack_frame + 81))
#define cStack_fe (*(char *)(pf_stack_frame + 82))
#define cStack_fd (*(char *)(pf_stack_frame + 83))
#define acStack_fc (*(char (*)[252])(pf_stack_frame + 84))
#define auStack_f8 (*(undefined1 (*)[248])(pf_stack_frame + 88))
#define local_138 (*(undefined1 * *)(pf_stack_frame + 24))
#define local_130 (*(ulong *)(pf_stack_frame + 32))
#define local_120 (*(undefined8 * *)(pf_stack_frame + 48))
#define local_118 (*(undefined1 (*)[280])(pf_stack_frame + 56))
#define local_108 (*(char (*)[264])(pf_stack_frame + 72))
#define local_e8 (*(undefined8 *)(pf_stack_frame + 104))
#define local_e0 (*(undefined4 *)(pf_stack_frame + 112))
#define local_dc (*(undefined1 *)(pf_stack_frame + 116))
#define local_b0 (*(undefined8 * *)(pf_stack_frame + 160))
#define local_a8 (*(long * *)(pf_stack_frame + 168))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 176))
#define local_98 (*(undefined4 *)(pf_stack_frame + 184))
#define local_80 (*(undefined8 *)(pf_stack_frame + 208))
#define local_78 (*(undefined * *)(pf_stack_frame + 216))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_68 (*(undefined * *)(pf_stack_frame + 232))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_48 (*(long * *)(pf_stack_frame + 264))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 272))
#define local_38 (*(long * *)(pf_stack_frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fc0
 */

long * recovered_10001fc0(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  code *pcVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  uint uVar22;
  pf_u120 auVar23;
  pf_u120 auVar24;
  pf_u120 auVar25;
  pf_u120 auVar26;
  pf_u120 auVar27;
  pf_u120 auVar28;
  pf_u120 auVar29;
  pf_u120 auVar30;
  pf_u120 auVar31;
  pf_u120 auVar32;
  pf_u120 auVar33;
  pf_u120 auVar34;
  pf_u120 auVar35;
  pf_u120 auVar36;
  pf_u120 auVar37;
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u88 auVar41;
  pf_u120 auVar42;
  pf_u120 auVar43;
  pf_u120 auVar44;
  pf_u88 auVar45;
  pf_u120 auVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  ulong uVar49;
  undefined8 *puVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  char *pcVar54;
  undefined1 *puVar55;
  uint128 auVar56;
  pf_u88 auVar57;
  pf_u120 auVar58;
  pf_u120 auVar59;
  uint128 auVar60;
  uint128 auVar61;
  uint128 auVar62;
  uint128 auVar63;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 336) + -8);
  local_60 = (undefined1 *)&local_138;
  uVar1 = *(undefined4 *)param_2;
  local_80 = DAT_10006000;
  local_78 = &DAT_10005170;
  local_68 = &DAT_10002928;
  local_38 = param_1;
  _Unwind_SjLj_Register(&local_a0);
  switch((uintptr_t)(uVar1)) {
  case 0:
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = 3;
    pcVar54 = &DAT_1000538c;
    break;
  case 1:
    if (param_2[4] != 0) {
LAB_10002933:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar2 = *(uint *)(param_2 + 1);
    uVar22 = -uVar2;
    if ((int)-uVar2 < 0) {
      uVar22 = uVar2;
    }
    uVar51 = 0;
    uVar49 = (ulong)uVar22;
    do {
      uVar52 = uVar51;
      auStack_f8[uVar52] = (char)uVar49 + (char)(uVar49 / 10) * -10 | 0x30;
      uVar51 = uVar52 + 1;
      bVar4 = 9 < uVar49;
      uVar49 = uVar49 / 10;
    } while (bVar4);
    local_a8 = param_1;
    if ((int)uVar2 < 0) {
      auStack_f8[uVar52 + 1] = 0x2d;
      uVar51 = uVar52 + 2;
    }
    if (0x20 < uVar51) {
      *local_38 = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      goto LAB_10002903;
    }
    if (uVar51 != 0) {
      if (uVar51 < 4) {
        uVar49 = 0;
      }
      else {
        if (uVar51 < 0x10) {
          uVar52 = 0;
        }
        else {
          uVar49 = (ulong)((uint)uVar51 & 0x30);
          auVar60 = *(uint128 *)(local_108 + uVar51);
          PF_PART1(auVar23,0xd) = 0;
          PF_PART13(auVar23, 0) = PF_PART13(auVar60, 0);
          PF_PART1(auVar23,0xe) = ((uint8_t *)(void *)&auVar60)[7];
          PF_PART1(auVar25,0xc) = ((uint8_t *)(void *)&auVar60)[6];
          PF_PART12(auVar25, 0) = PF_PART12(auVar60, 0);
          PF_PART2(auVar25, 13) = PF_PART2(auVar23, 13);
          PF_PART1(auVar27,0xb) = 0;
          PF_PART11(auVar27, 0) = PF_PART11(auVar60, 0);
          PF_PART3(auVar27, 12) = PF_PART3(auVar25, 12);
          PF_PART1(auVar29,10) = ((uint8_t *)(void *)&auVar60)[5];
          PF_PART10(auVar29, 0) = PF_PART10(auVar60, 0);
          PF_PART4(auVar29, 11) = PF_PART4(auVar27, 11);
          PF_PART1(auVar31,9) = 0;
          PF_PART9(auVar31, 0) = PF_PART9(auVar60, 0);
          PF_PART5(auVar31, 10) = PF_PART5(auVar29, 10);
          PF_PART1(auVar33,8) = ((uint8_t *)(void *)&auVar60)[4];
          PF_PART8(auVar33, 0) = PF_PART8(auVar60, 0);
          PF_PART6(auVar33, 9) = PF_PART6(auVar31, 9);
          ((uint8_t *)(void *)&auVar62)[7] = 0;
          PF_PART7(auVar62, 0) = PF_PART7(auVar33, 8);
          PF_PART8(auVar39, 7) = 0;
          PF_PART7(auVar39, 0) = PF_PART7(auVar33, 8);
          PF_PART8(auVar40, 1) = SUB158(auVar39 << 0x40,7);
          PF_PART1(auVar40,0) = ((uint8_t *)(void *)&auVar60)[3];
          PF_PART6(auVar40, 9) = 0;
          PF_PART10(auVar41, 1) = SUB1510(auVar40 << 0x30,5);
          PF_PART1(auVar41,0) = ((uint8_t *)(void *)&auVar60)[2];
          PF_PART4(auVar42, 11) = 0;
          PF_PART11(auVar42, 0) = auVar41;
          PF_PART1(auVar35,2) = ((uint8_t *)(void *)&auVar60)[1];
          PF_PART2(auVar35, 0) = PF_PART2(auVar60, 0);
          PF_PART12(auVar35, 3) = SUB1512(auVar42 << 0x20,3);
          PF_PART13(auVar37, 2) = PF_PART13(auVar35, 2);
          PF_PART2(auVar37, 0) = PF_PART2(auVar60, 0) & 0xff;
          PF_PART4(auVar62, 8) = PF_PART4(auVar37, 0);
          PF_PART4(auVar62, 12) = PF_PART4(auVar41, 0);
          auVar61 = pshuflw(auVar62,auVar62,0x1b);
          auVar62 = pshufhw(auVar61,auVar61,0x1b);
          ((uint8_t *)(void *)&auVar61)[8] = ((uint8_t *)(void *)&auVar60)[8];
          ((uint8_t *)(void *)&auVar61)[9] = 0;
          ((uint8_t *)(void *)&auVar61)[10] = ((uint8_t *)(void *)&auVar60)[9];
          PF_PART10(auVar57, 0) = (unkuint10)((uint8_t *)(void *)&auVar60)[0xc] << 0x40;
          PF_PART1(auVar57,10) = ((uint8_t *)(void *)&auVar60)[0xd];
          PF_PART1(auVar58,0xb) = 0;
          PF_PART11(auVar58, 0) = auVar57;
          PF_PART1(auVar58,0xc) = ((uint8_t *)(void *)&auVar60)[0xe];
          PF_PART1(auVar58,0xd) = 0;
          PF_PART1(auVar58,0xe) = ((uint8_t *)(void *)&auVar60)[0xf];
          ((uint8_t *)(void *)&auVar61)[3] = 0;
          PF_PART3(auVar61, 0) = PF_PART3(auVar57, 8);
          PF_PART3(auVar61, 4) = PF_PART3(auVar58, 12);
          ((uint8_t *)(void *)&auVar61)[7] = 0;
          ((uint8_t *)(void *)&auVar61)[0xb] = 0;
          PF_PART3(auVar61, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar60)[0xb],(uint6)((uint8_t *)(void *)&auVar60)[10] << 0x20) >> 0x20);
          ((uint8_t *)(void *)&auVar61)[0xf] = 0;
          auVar60 = pshuflw(auVar61,auVar61,0x1b);
          auVar60 = pshufhw(auVar60,auVar60,0x1b);
          sVar6 = PF_PART2(auVar60, 0);
          sVar7 = PF_PART2(auVar60, 2);
          sVar8 = PF_PART2(auVar60, 4);
          sVar9 = PF_PART2(auVar60, 6);
          sVar10 = PF_PART2(auVar60, 8);
          sVar11 = PF_PART2(auVar60, 10);
          sVar12 = PF_PART2(auVar60, 12);
          sVar13 = PF_PART2(auVar60, 14);
          sVar14 = PF_PART2(auVar62, 0);
          sVar15 = PF_PART2(auVar62, 2);
          sVar16 = PF_PART2(auVar62, 4);
          sVar17 = PF_PART2(auVar62, 6);
          sVar18 = PF_PART2(auVar62, 8);
          sVar19 = PF_PART2(auVar62, 10);
          sVar20 = PF_PART2(auVar62, 12);
          sVar21 = PF_PART2(auVar62, 14);
          local_118[1] = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar60)[2] - (0xff < sVar7);
          local_118[0] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar60)[0] - (0xff < sVar6);
          local_118[2] = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar60)[4] - (0xff < sVar8);
          local_118[3] = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar60)[6] - (0xff < sVar9);
          local_118[4] = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar60)[8] - (0xff < sVar10);
          local_118[5] = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar60)[10] - (0xff < sVar11);
          local_118[6] = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar60)[0xc] - (0xff < sVar12);
          local_118[7] = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar60)[0xe] - (0xff < sVar13);
          local_118[8] = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar62)[0] - (0xff < sVar14);
          local_118[9] = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar62)[2] - (0xff < sVar15);
          local_118[10] = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar62)[4] - (0xff < sVar16);
          local_118[0xb] = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar62)[6] - (0xff < sVar17);
          local_118[0xc] = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar62)[8] - (0xff < sVar18);
          local_118[0xd] = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar62)[10] - (0xff < sVar19);
          local_118[0xe] = (0 < sVar20) * (sVar20 < 0x100) * ((uint8_t *)(void *)&auVar62)[0xc] - (0xff < sVar20);
          local_118[0xf] = (0 < sVar21) * (sVar21 < 0x100) * ((uint8_t *)(void *)&auVar62)[0xe] - (0xff < sVar21);
          if (uVar49 != 0x10) {
            auVar60 = *(uint128 *)(local_118 + uVar51);
            PF_PART1(auVar24,0xd) = 0;
            PF_PART13(auVar24, 0) = PF_PART13(auVar60, 0);
            PF_PART1(auVar24,0xe) = ((uint8_t *)(void *)&auVar60)[7];
            PF_PART1(auVar26,0xc) = ((uint8_t *)(void *)&auVar60)[6];
            PF_PART12(auVar26, 0) = PF_PART12(auVar60, 0);
            PF_PART2(auVar26, 13) = PF_PART2(auVar24, 13);
            PF_PART1(auVar28,0xb) = 0;
            PF_PART11(auVar28, 0) = PF_PART11(auVar60, 0);
            PF_PART3(auVar28, 12) = PF_PART3(auVar26, 12);
            PF_PART1(auVar30,10) = ((uint8_t *)(void *)&auVar60)[5];
            PF_PART10(auVar30, 0) = PF_PART10(auVar60, 0);
            PF_PART4(auVar30, 11) = PF_PART4(auVar28, 11);
            PF_PART1(auVar32,9) = 0;
            PF_PART9(auVar32, 0) = PF_PART9(auVar60, 0);
            PF_PART5(auVar32, 10) = PF_PART5(auVar30, 10);
            PF_PART1(auVar34,8) = ((uint8_t *)(void *)&auVar60)[4];
            PF_PART8(auVar34, 0) = PF_PART8(auVar60, 0);
            PF_PART6(auVar34, 9) = PF_PART6(auVar32, 9);
            ((uint8_t *)(void *)&auVar63)[7] = 0;
            PF_PART7(auVar63, 0) = PF_PART7(auVar34, 8);
            PF_PART8(auVar43, 7) = 0;
            PF_PART7(auVar43, 0) = PF_PART7(auVar34, 8);
            PF_PART8(auVar44, 1) = SUB158(auVar43 << 0x40,7);
            PF_PART1(auVar44,0) = ((uint8_t *)(void *)&auVar60)[3];
            PF_PART6(auVar44, 9) = 0;
            PF_PART10(auVar45, 1) = SUB1510(auVar44 << 0x30,5);
            PF_PART1(auVar45,0) = ((uint8_t *)(void *)&auVar60)[2];
            PF_PART4(auVar46, 11) = 0;
            PF_PART11(auVar46, 0) = auVar45;
            PF_PART1(auVar36,2) = ((uint8_t *)(void *)&auVar60)[1];
            PF_PART2(auVar36, 0) = PF_PART2(auVar60, 0);
            PF_PART12(auVar36, 3) = SUB1512(auVar46 << 0x20,3);
            PF_PART13(auVar38, 2) = PF_PART13(auVar36, 2);
            PF_PART2(auVar38, 0) = PF_PART2(auVar60, 0) & 0xff;
            PF_PART4(auVar63, 8) = PF_PART4(auVar38, 0);
            PF_PART4(auVar63, 12) = PF_PART4(auVar45, 0);
            auVar61 = pshuflw(auVar63,auVar63,0x1b);
            auVar61 = pshufhw(auVar61,auVar61,0x1b);
            ((uint8_t *)(void *)&auVar56)[9] = 0;
            ((uint8_t *)(void *)&auVar56)[8] = ((uint8_t *)(void *)&auVar60)[8];
            ((uint8_t *)(void *)&auVar56)[10] = ((uint8_t *)(void *)&auVar60)[9];
            PF_PART10(auVar59, 0) = (unkuint10)((uint8_t *)(void *)&auVar60)[0xc] << 0x40;
            PF_PART1(auVar59,10) = ((uint8_t *)(void *)&auVar60)[0xd];
            PF_PART1(auVar59,0xb) = 0;
            PF_PART1(auVar59,0xc) = ((uint8_t *)(void *)&auVar60)[0xe];
            PF_PART1(auVar59,0xd) = 0;
            PF_PART1(auVar59,0xe) = ((uint8_t *)(void *)&auVar60)[0xf];
            ((uint8_t *)(void *)&auVar56)[7] = 0;
            PF_PART7(auVar56, 0) = PF_PART7(auVar59, 8);
            ((uint8_t *)(void *)&auVar56)[0xb] = 0;
            PF_PART3(auVar56, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar60)[0xb],(uint6)((uint8_t *)(void *)&auVar60)[10] << 0x20) >> 0x20);
            ((uint8_t *)(void *)&auVar56)[0xf] = 0;
            auVar60 = pshuflw(auVar56,auVar56,0x1b);
            auVar60 = pshufhw(auVar60,auVar60,0x1b);
            sVar6 = PF_PART2(auVar60, 0);
            sVar7 = PF_PART2(auVar60, 2);
            sVar8 = PF_PART2(auVar60, 4);
            sVar9 = PF_PART2(auVar60, 6);
            sVar10 = PF_PART2(auVar60, 8);
            sVar11 = PF_PART2(auVar60, 10);
            sVar12 = PF_PART2(auVar60, 12);
            sVar13 = PF_PART2(auVar60, 14);
            sVar14 = PF_PART2(auVar61, 0);
            sVar15 = PF_PART2(auVar61, 2);
            sVar16 = PF_PART2(auVar61, 4);
            sVar17 = PF_PART2(auVar61, 6);
            sVar18 = PF_PART2(auVar61, 8);
            sVar19 = PF_PART2(auVar61, 10);
            sVar20 = PF_PART2(auVar61, 12);
            sVar21 = PF_PART2(auVar61, 14);
            local_108[1] = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar60)[2] - (0xff < sVar7);
            local_108[0] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar60)[0] - (0xff < sVar6);
            local_108[2] = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar60)[4] - (0xff < sVar8);
            local_108[3] = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar60)[6] - (0xff < sVar9);
            local_108[4] = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar60)[8] - (0xff < sVar10);
            local_108[5] = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar60)[10] - (0xff < sVar11);
            local_108[6] = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar60)[0xc] - (0xff < sVar12);
            local_108[7] = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar60)[0xe] - (0xff < sVar13);
            local_108[8] = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar61)[0] - (0xff < sVar14);
            cStack_ff = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar61)[2] - (0xff < sVar15);
            cStack_fe = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar61)[4] - (0xff < sVar16);
            cStack_fd = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar61)[6] - (0xff < sVar17);
            acStack_fc[0] = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar61)[8] - (0xff < sVar18);
            acStack_fc[1] = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar61)[10] - (0xff < sVar19);
            acStack_fc[2] = (0 < sVar20) * (sVar20 < 0x100) * ((uint8_t *)(void *)&auVar61)[0xc] - (0xff < sVar20);
            acStack_fc[3] = (0 < sVar21) * (sVar21 < 0x100) * ((uint8_t *)(void *)&auVar61)[0xe] - (0xff < sVar21);
          }
          if (uVar51 == uVar49) goto LAB_100028c3;
          uVar52 = uVar49;
          if ((uVar51 & 0xc) == 0) goto LAB_1000289c;
        }
        uVar49 = (ulong)((uint)uVar51 & 0x3c);
        pcVar54 = local_108 + (uVar51 - uVar52) + 0xc;
        do {
          uVar1 = *(undefined4 *)pcVar54;
          auVar60 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                           >> 0x10),(short)uVar1) & 0xffffff00ff00ff);
          auVar60 = pshuflw(auVar60,auVar60,0x1b);
          sVar6 = PF_PART2(auVar60, 0);
          sVar7 = PF_PART2(auVar60, 2);
          sVar8 = PF_PART2(auVar60, 4);
          sVar9 = PF_PART2(auVar60, 6);
          *(uint *)(local_118 + uVar52) =
               CONCAT13((0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar60)[6] - (0xff < sVar9),
                        CONCAT12((0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar60)[4] - (0xff < sVar8),
                                 CONCAT11((0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar60)[2] -
                                          (0xff < sVar7),
                                          (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar60)[0] -
                                          (0xff < sVar6))));
          uVar52 = uVar52 + 4;
          pcVar54 = pcVar54 + -4;
        } while (uVar49 != uVar52);
        if (uVar51 == uVar49) goto LAB_100028c3;
      }
LAB_1000289c:
      lVar53 = uVar51 - uVar49;
      puVar55 = local_118 + uVar49;
      do {
        *puVar55 = auStack_f8[lVar53 + -1];
        puVar55 = puVar55 + 1;
        lVar53 = lVar53 + -1;
      } while (lVar53 != 0);
    }
LAB_100028c3:
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_98 = 0xffffffff;
    recovered_10001d10(local_38,(long)local_118,uVar51);
    goto LAB_10002903;
  case 2:
    if (param_2[4] != 1) goto LAB_10002933;
    local_98 = 0xffffffff;
    recovered_10002ec0((double)*(float *)(param_2 + 1),local_38);
    goto LAB_100024dd;
  case 3:
    if (param_2[4] != 2) goto LAB_10002933;
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = param_2[2];
    pcVar54 = &DAT_10005255;
    if ((char *)param_2[1] != (char *)0x0) {
      pcVar54 = (char *)param_2[1];
    }
    break;
  default:
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = 0x14;
    pcVar54 = str_100053be;
    break;
  case 5:
    if (param_2[4] != 4) goto LAB_10002933;
    pcVar54 = str_10005390;
    if (*(char *)(param_2 + 1) != '\0') {
      pcVar54 = &DAT_10005265;
    }
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = 0xffffffffffffffff;
    do {
      lVar53 = uVar51 + 1;
      uVar51 = uVar51 + 1;
    } while (pcVar54[lVar53] != '\0');
    break;
  case 6:
    PF_PART16(auStack_f8,0) = (uint128)0x0;
    local_e8 = 0;
    local_e0 = 10;
    local_dc = 0;
    local_98 = 1;
    local_a8 = param_1;
    local_40 = param_2;
    recovered_10003b20((long *)auStack_f8,((uintptr_t)pf_module_state + 0x472U),1);
    local_dc = 1;
    local_e0 = 0x10;
    if (local_40[4] != 5) goto LAB_10002933;
    local_98 = 2;
    recovered_10003790((long *)auStack_f8,local_40[1]);
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    puVar55 = &DAT_10005255;
    if ((undefined1 *)PF_PART8(auStack_f8, 0) != (undefined1 *)0x0) {
      puVar55 = (undefined1 *)PF_PART8(auStack_f8, 0);
    }
    local_98 = 3;
    recovered_10001d10(local_38,(long)puVar55,PF_PART8(auStack_f8, 8));
    _ZdlPv((void *)PF_PART8(auStack_f8, 0));
    goto LAB_10002903;
  case 7:
    local_a8 = param_1;
    if (param_2[4] != 6) goto LAB_10002933;
    plVar3 = (long *)param_2[2];
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_98 = 0xffffffff;
    recovered_10001d10(local_38,((uintptr_t)pf_module_state + 0x474U),1);
    local_48 = plVar3;
    if (plVar3[1] != 0) {
      puVar48 = (undefined8 *)0x0;
      puVar50 = (undefined8 *)0x0;
      do {
        local_98 = 5;
        local_b0 = puVar48;
        local_40 = puVar50;
        recovered_10001fc0((long *)auStack_f8,(undefined8 *)(*local_48 + (long)puVar48));
        puVar55 = (undefined1 *)PF_PART8(auStack_f8, 0);
        if ((undefined1 *)PF_PART8(auStack_f8, 0) == (undefined1 *)0x0) {
          puVar55 = &DAT_10005255;
        }
        local_98 = 6;
        recovered_10003b20(local_38,(long)puVar55,PF_PART8(auStack_f8, 8));
        _ZdlPv((void *)PF_PART8(auStack_f8, 0));
        puVar50 = (undefined8 *)((long)local_40 + 1);
        puVar47 = (undefined8 *)local_48[1];
        if (puVar50 < puVar47) {
          local_98 = 7;
          local_40 = puVar50;
          recovered_10003b20(local_38,((uintptr_t)pf_module_state + 0x476U),2);
          puVar47 = (undefined8 *)local_48[1];
          puVar50 = local_40;
        }
        puVar48 = local_b0 + 5;
      } while (puVar50 < puVar47);
    }
    local_98 = 4;
    recovered_10003b20(local_38,((uintptr_t)pf_module_state + 0x479U),1);
    goto LAB_10002903;
  case 8:
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = 0xc;
    pcVar54 = str_1000539f;
    break;
  case 9:
    local_a8 = param_1;
    if (param_2[4] != 7) goto LAB_10002933;
    puVar50 = (undefined8 *)param_2[2];
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_98 = 0xffffffff;
    local_48 = (long *)0x1;
    recovered_10001d10(local_38,((uintptr_t)pf_module_state + 0x488U),1);
    local_b0 = puVar50;
    if (puVar50[1] != 0) {
      puVar48 = (undefined8 *)*puVar50;
      local_120 = puVar48 + puVar50[1] * 8;
      do {
        PF_PART16(local_118,0) = (uint128)0x0;
        local_108[0] = '\0';
        local_108[1] = '\0';
        local_108[2] = '\0';
        local_108[3] = '\0';
        local_108[4] = '\0';
        local_108[5] = '\0';
        local_108[6] = '\0';
        local_108[7] = '\0';
        puVar55 = (undefined1 *)*puVar48;
        if (puVar55 == (undefined1 *)0x0) {
          puVar55 = &DAT_10005255;
        }
        local_98 = 9;
        local_40 = puVar48;
        recovered_10001d10((long *)local_118,(long)puVar55,puVar48[1]);
        local_98 = 10;
        recovered_10003b20((long *)local_118,((uintptr_t)pf_module_state + 0x48aU),2);
        local_40 = local_40 + 3;
        local_98 = 0xb;
        recovered_10001fc0((long *)&local_138,local_40);
        PF_PART16(auStack_f8,0) = (uint128)0x0;
        local_e8 = 0;
        puVar55 = (undefined1 *)PF_PART8(local_118, 0);
        if ((undefined1 *)PF_PART8(local_118, 0) == (undefined1 *)0x0) {
          puVar55 = &DAT_10005255;
        }
        local_98 = 0xc;
        recovered_10001d10((long *)auStack_f8,(long)puVar55,PF_PART8(local_118, 8));
        puVar55 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar55 = &DAT_10005255;
        }
        local_98 = 0xd;
        recovered_10003b20((long *)auStack_f8,(long)puVar55,local_130);
        puVar55 = (undefined1 *)PF_PART8(auStack_f8, 0);
        if ((undefined1 *)PF_PART8(auStack_f8, 0) == (undefined1 *)0x0) {
          puVar55 = &DAT_10005255;
        }
        local_98 = 0xe;
        recovered_10003b20(local_38,(long)puVar55,PF_PART8(auStack_f8, 8));
        _ZdlPv((void *)PF_PART8(auStack_f8, 0));
        _ZdlPv(local_138);
        _ZdlPv((void *)PF_PART8(local_118, 0));
        if (local_48 < (long *)local_b0[1]) {
          local_98 = 0xf;
          recovered_10003b20(local_38,((uintptr_t)pf_module_state + 0x476U),2);
        }
        local_48 = (long *)((long)local_48 + 1);
        puVar48 = local_40 + 5;
      } while (puVar48 != local_120);
    }
    local_98 = 8;
    recovered_10003b20(local_38,((uintptr_t)pf_module_state + 0x48dU),1);
LAB_10002903:
    _Unwind_SjLj_Unregister(&local_a0);
    return local_a8;
  case 10:
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    uVar51 = 10;
    pcVar54 = str_100053b3;
  }
  local_98 = 0xffffffff;
  recovered_10001d10(local_38,(long)pcVar54,uVar51);
LAB_100024dd:
  _Unwind_SjLj_Unregister(&local_a0);
  return param_1;
}

#undef DAT_10002928
#undef DAT_10005170
#undef DAT_10005255
#undef DAT_10005265
#undef DAT_1000538c
#undef DAT_10006000
#undef str_10005390
#undef str_1000539f
#undef str_100053b3
#undef str_100053be
#undef cStack_ff
#undef cStack_fe
#undef cStack_fd
#undef acStack_fc
#undef auStack_f8
#undef local_138
#undef local_130
#undef local_120
#undef local_118
#undef local_108
#undef local_e8
#undef local_e0
#undef local_dc
#undef local_b0
#undef local_a8
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

#undef DAT_10005194
#define DAT_10005194 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10002b15
#define LAB_10002b15 (*(uint8_t *)(0x10002b15U))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(undefined8 *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

void recovered_10002a70(long param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  local_58 = auStack_40 + 0x38;
  local_48 = (undefined1 *)&local_88;
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_68 = DAT_10006000;
  local_60 = &DAT_10005194;
  local_50 = &LAB_10002b15;
  _Unwind_SjLj_Register(&local_88);
  if (1 < uVar1) {
    if (uVar1 != 2) {
      if (uVar1 != 3) {
        if ((uVar1 & 0xfffffffffffffffe) != 4) {
          local_80 = 1;
          recovered_10003fc0(uVar1,(long *)(param_1 + 8));
        }
        goto LAB_10002adc;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    _ZdlPv(*(void **)(param_1 + 8));
  }
LAB_10002adc:
  _Unwind_SjLj_Unregister(&local_88);
  return;
}

#undef DAT_10005194
#undef DAT_10006000
#undef LAB_10002b15
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef DAT_10005255
#define DAT_10005255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

undefined8 recovered_10002b40(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;

  puVar1 = (undefined1 *)*param_1;
  uVar2 = param_1[1];
  puVar4 = &DAT_10005255;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  if (0x19 < uVar2) {
    uVar3 = 0;
    do {
      if (((((((puVar4[uVar3] == 'F') && (puVar4[uVar3 + 1] == 'a')) && (puVar4[uVar3 + 2] == 'i'))
            && ((puVar4[uVar3 + 3] == 'l' && (puVar4[uVar3 + 4] == 'e')))) &&
           ((puVar4[uVar3 + 5] == 'd' && ((puVar4[uVar3 + 6] == ' ' && (puVar4[uVar3 + 7] == 't'))))
           )) && ((puVar4[uVar3 + 8] == 'o' &&
                  (((puVar4[uVar3 + 9] == ' ' && (puVar4[uVar3 + 10] == 'o')) &&
                   (puVar4[uVar3 + 0xb] == 'p')))))) &&
         ((((puVar4[uVar3 + 0xc] == 'e' && (puVar4[uVar3 + 0xd] == 'n')) &&
           ((puVar4[uVar3 + 0xe] == ' ' &&
            ((puVar4[uVar3 + 0xf] == 's' && (puVar4[uVar3 + 0x10] == 'c')))))) &&
          ((puVar4[uVar3 + 0x11] == 'r' &&
           (((((puVar4[uVar3 + 0x12] == 'i' && (puVar4[uVar3 + 0x13] == 'p')) &&
              (puVar4[uVar3 + 0x14] == 't')) &&
             ((puVar4[uVar3 + 0x15] == ' ' && (puVar4[uVar3 + 0x16] == 'f')))) &&
            ((puVar4[uVar3 + 0x17] == 'i' &&
             ((puVar4[uVar3 + 0x18] == 'l' && (puVar4[uVar3 + 0x19] == 'e')))))))))))) {
        if (uVar3 != 0xffffffffffffffff) {
          return CONCAT71((int7)((ulong)puVar1 >> 8),1);
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar2 - 0x1a);
  }
  if (0x12 < uVar2) {
    uVar3 = 0;
    do {
      if (((((((puVar4[uVar3] == 'f') && (puVar4[uVar3 + 1] == 'a')) && (puVar4[uVar3 + 2] == 'i'))
            && ((puVar4[uVar3 + 3] == 'l' && (puVar4[uVar3 + 4] == 'e')))) &&
           (puVar4[uVar3 + 5] == 'd')) &&
          (((puVar4[uVar3 + 6] == ' ' && (puVar4[uVar3 + 7] == 't')) &&
           ((puVar4[uVar3 + 8] == 'o' &&
            (((puVar4[uVar3 + 9] == ' ' && (puVar4[uVar3 + 10] == 'o')) &&
             (puVar4[uVar3 + 0xb] == 'p')))))))) &&
         (((puVar4[uVar3 + 0xc] == 'e' && (puVar4[uVar3 + 0xd] == 'n')) &&
          ((puVar4[uVar3 + 0xe] == ' ' &&
           (((puVar4[uVar3 + 0xf] == 'f' && (puVar4[uVar3 + 0x10] == 'i')) &&
            ((puVar4[uVar3 + 0x11] == 'l' && (puVar4[uVar3 + 0x12] == 'e')))))))))) {
        if (uVar2 < 0x1a || uVar3 != 0xffffffffffffffff) {
          return CONCAT71((int7)(uVar2 - 0x13 >> 8),uVar3 != 0xffffffffffffffff);
        }
        goto LAB_10002d40;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar2 - 0x13);
    if (0x19 < uVar2) {
LAB_10002d40:
      uVar3 = 0;
      do {
        if (((((((puVar4[uVar3] == 'u') && (puVar4[uVar3 + 1] == 'n')) && (puVar4[uVar3 + 2] == 'a')
               ) && ((puVar4[uVar3 + 3] == 'b' && (puVar4[uVar3 + 4] == 'l')))) &&
             (((((puVar4[uVar3 + 5] == 'e' &&
                 ((puVar4[uVar3 + 6] == ' ' && (puVar4[uVar3 + 7] == 't')))) &&
                (puVar4[uVar3 + 8] == 'o')) &&
               ((((puVar4[uVar3 + 9] == ' ' && (puVar4[uVar3 + 10] == 'o')) &&
                 (puVar4[uVar3 + 0xb] == 'p')) &&
                ((puVar4[uVar3 + 0xc] == 'e' && (puVar4[uVar3 + 0xd] == 'n')))))) &&
              ((puVar4[uVar3 + 0xe] == ' ' &&
               ((puVar4[uVar3 + 0xf] == 's' && (puVar4[uVar3 + 0x10] == 'c')))))))) &&
            ((puVar4[uVar3 + 0x11] == 'r' &&
             (((puVar4[uVar3 + 0x12] == 'i' && (puVar4[uVar3 + 0x13] == 'p')) &&
              (puVar4[uVar3 + 0x14] == 't')))))) &&
           (((puVar4[uVar3 + 0x15] == ' ' && (puVar4[uVar3 + 0x16] == 'f')) &&
            ((puVar4[uVar3 + 0x17] == 'i' &&
             ((puVar4[uVar3 + 0x18] == 'l' && (puVar4[uVar3 + 0x19] == 'e')))))))) {
          return CONCAT71((int7)(uVar3 >> 8),uVar3 != 0xffffffffffffffff);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar2 - 0x1a);
    }
  }
  return 0;
}

#undef DAT_10005255

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e40
 */

void recovered_10002e40(long *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    lVar2 = -1;
    do {
      lVar3 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (param_2[lVar3] != '\0');
    wm_lua_write((long)param_2,lVar2);
    wm_lua_write(((uintptr_t)pf_module_state + 0x48aU),2);
  }
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if (lVar2 != 0) {
    lVar3 = -1;
    do {
      pcVar1 = (char *)(lVar2 + 1 + lVar3);
      lVar3 = lVar3 + 1;
    } while (*pcVar1 != '\0');
    wm_lua_write(lVar2,lVar3);
  }
  wm_lua_writeline();
  return;
}


#undef DAT_10005060
#define DAT_10005060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef DAT_10005070
#define DAT_10005070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_10005080
#define DAT_10005080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10005090
#define DAT_10005090 (*(double *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10005098
#define DAT_10005098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174U)))
#undef DAT_100050a0
#define DAT_100050a0 (*(double *)(((uintptr_t)pf_module_state + 0x17cU)))
#undef DAT_100050a8
#define DAT_100050a8 (*(double *)(((uintptr_t)pf_module_state + 0x184U)))
#undef DAT_100050b0
#define DAT_100050b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef DAT_100050b8
#define DAT_100050b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194U)))
#undef DAT_100051a4
#define DAT_100051a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10005255
#define DAT_10005255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_100053d3
#define DAT_100053d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4afU)))
#undef DAT_100053d7
#define DAT_100053d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b3U)))
#undef DAT_100053db
#define DAT_100053db (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b7U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10003548
#define LAB_10003548 (*(uint8_t *)(0x10003548U))
#undef UNK_10005074
#define UNK_10005074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef UNK_10005088
#define UNK_10005088 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef _DAT_10005060
#define _DAT_10005060 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13cU)))
#undef _DAT_10005070
#define _DAT_10005070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef _DAT_10005080
#define _DAT_10005080 (*(double *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef _DAT_10005098
#define _DAT_10005098 (*(double *)(((uintptr_t)pf_module_state + 0x174U)))
#undef _DAT_100050b0
#define _DAT_100050b0 (*(double *)(((uintptr_t)pf_module_state + 0x18cU)))
#undef _DAT_100050b8
#define _DAT_100050b8 (*(double *)(((uintptr_t)pf_module_state + 0x194U)))
#undef dRam0000000010005088
#define dRam0000000010005088 (*(double *)(((uintptr_t)pf_module_state + 0x164U)))
#undef uRam0000000010005074
#define uRam0000000010005074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x150U)))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_58 (*(undefined8 *)(pf_stack_frame + 280))
#define local_50 (*(ulong *)(pf_stack_frame + 288))
#define local_48 (*(double *)(pf_stack_frame + 296))
#define local_38 (*(long * *)(pf_stack_frame + 312))
#define auStack_157 (*(undefined1 (*)[343])(pf_stack_frame + 25))
#define auStack_147 (*(undefined1 (*)[327])(pf_stack_frame + 41))
#define auStack_140 (*(undefined1 (*)[320])(pf_stack_frame + 48))
#define uStack_60 (*(ulong *)(pf_stack_frame + 272))
#define local_138 (*(byte (*)[312])(pf_stack_frame + 56))
#define local_e8 (*(byte (*)[232])(pf_stack_frame + 136))
#define local_c8 (*(long * *)(pf_stack_frame + 168))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 176))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 208))
#define local_98 (*(undefined * *)(pf_stack_frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10002ec0(double param_1,long *param_2)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  uint128 auVar3;
  uint128 auVar4;
  uint128 auVar5;
  uint128 auVar6;
  uint128 auVar7;
  bool bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  bool bVar41;
  pf_u120 auVar42;
  pf_u120 auVar43;
  pf_u120 auVar44;
  pf_u120 auVar45;
  pf_u120 auVar46;
  pf_u120 auVar47;
  pf_u120 auVar48;
  pf_u120 auVar49;
  pf_u120 auVar50;
  pf_u120 auVar51;
  pf_u120 auVar52;
  pf_u120 auVar53;
  pf_u120 auVar54;
  pf_u120 auVar55;
  pf_u120 auVar56;
  pf_u120 auVar57;
  pf_u120 auVar58;
  pf_u120 auVar59;
  pf_u88 auVar60;
  pf_u120 auVar61;
  pf_u120 auVar62;
  pf_u120 auVar63;
  pf_u88 auVar64;
  pf_u120 auVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  long lVar70;
  byte *pbVar71;
  undefined *puVar72;
  undefined1 *puVar73;
  pf_u88 auVar74;
  pf_u120 auVar75;
  uint128 auVar76;
  pf_u88 auVar77;
  pf_u120 auVar78;
  uint128 auVar79;
  double dVar80;
  uint128 auVar81;
  uint128 auVar82;
  uint128 auVar83;

  local_90 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 368) + -8);
  local_80 = local_138;
  local_a0 = DAT_10006000;
  local_98 = &DAT_100051a4;
  local_88 = &LAB_10003548;
  PF_PART8(auStack_140,0) = (uint64_t)0x10002f1e;
  local_48 = param_1;
  local_38 = param_2;
  _Unwind_SjLj_Register(&local_c0);
  if (NAN(local_48)) {
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    puVar72 = &DAT_100053d3;
  }
  else {
    bVar41 = local_48 < 0.0;
    bVar2 = local_48 == 0.0;
    bVar8 = DAT_10005090 / local_48 < 0.0;
    if (local_48 < _DAT_10005098) {
      if (local_48 <= DAT_100050a0) {
        *local_38 = 0;
        local_38[1] = 0;
        local_38[2] = 0;
        puVar72 = &DAT_100053db;
        uVar69 = 4;
        goto LAB_10002ff3;
      }
      local_c8 = param_2;
      if (bVar41 || bVar8 && bVar2) {
        local_48 = (double)((ulong)local_48 ^ _DAT_10005060);
      }
      uVar69 = (long)(local_48 - DAT_100050a8) & (long)local_48 >> 0x3f | (long)local_48;
      PF_PART4(auVar76, 8) = (int)(uVar69 >> 0x20);
      PF_PART8(auVar76, 0) = uVar69;
      PF_PART4(auVar76, 12) = uRam0000000010005074;
      dVar80 = (local_48 -
               (((*(double *)((uint8_t *)&(auVar76)+8)) - dRam0000000010005088) +
               (pf_bits_double(CONCAT44(_DAT_10005070,(int)uVar69)) - _DAT_10005080))) * _DAT_100050b0 +
               _DAT_100050b8;
      uVar67 = (ulong)dVar80;
      uVar67 = (long)(dVar80 - DAT_100050a8) & (long)uVar67 >> 0x3f | uVar67;
      uVar69 = (uVar69 + 1) - (ulong)(uVar67 < 1000000);
      local_48 = (double)(uVar67 - 1000000);
      if (uVar67 < 1000000) {
        local_48 = (double)uVar67;
      }
      *local_38 = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      if (bVar41 || bVar8 && bVar2) {
        local_b8 = 1;
        PF_PART8(auStack_140,0) = (uint64_t)0x1000310b;
        local_50 = uVar69;
        recovered_100035e0(local_38,0x2d);
        uVar69 = local_50;
      }
      uVar67 = 0;
      do {
        uVar68 = uVar67;
        local_138[uVar68] = (char)uVar69 + (char)(uVar69 / 10) * -10 | 0x30;
        uVar67 = uVar68 + 1;
        bVar2 = 9 < uVar69;
        uVar69 = uVar69 / 10;
      } while (bVar2);
      if (0x20 < uVar67) {
        local_68 = (undefined1 *)0x0;
        uStack_60 = 0;
        local_58 = 0;
        goto LAB_1000330c;
      }
      if (uVar67 != 0) {
        if (uVar67 < 4) {
          uVar69 = 0;
        }
        else {
          if (uVar67 < 0x20) {
            uVar66 = 0;
          }
          else {
            uVar69 = uVar67 & 0xffffffffffffffe0;
            pbVar71 = local_e8 + 0x10;
            lVar70 = 0;
            do {
              auVar76 = *(uint128 *)(auStack_157 + uVar68 + lVar70);
              auVar79 = *(uint128 *)(auStack_147 + uVar68 + lVar70);
              PF_PART1(auVar42,0xd) = 0;
              PF_PART13(auVar42, 0) = PF_PART13(auVar79, 0);
              PF_PART1(auVar42,0xe) = ((uint8_t *)(void *)&auVar79)[7];
              PF_PART1(auVar44,0xc) = ((uint8_t *)(void *)&auVar79)[6];
              PF_PART12(auVar44, 0) = PF_PART12(auVar79, 0);
              PF_PART2(auVar44, 13) = PF_PART2(auVar42, 13);
              PF_PART1(auVar46,0xb) = 0;
              PF_PART11(auVar46, 0) = PF_PART11(auVar79, 0);
              PF_PART3(auVar46, 12) = PF_PART3(auVar44, 12);
              PF_PART1(auVar48,10) = ((uint8_t *)(void *)&auVar79)[5];
              PF_PART10(auVar48, 0) = PF_PART10(auVar79, 0);
              PF_PART4(auVar48, 11) = PF_PART4(auVar46, 11);
              PF_PART1(auVar50,9) = 0;
              PF_PART9(auVar50, 0) = PF_PART9(auVar79, 0);
              PF_PART5(auVar50, 10) = PF_PART5(auVar48, 10);
              PF_PART1(auVar52,8) = ((uint8_t *)(void *)&auVar79)[4];
              PF_PART8(auVar52, 0) = PF_PART8(auVar79, 0);
              PF_PART6(auVar52, 9) = PF_PART6(auVar50, 9);
              ((uint8_t *)(void *)&auVar82)[7] = 0;
              PF_PART7(auVar82, 0) = PF_PART7(auVar52, 8);
              PF_PART8(auVar58, 7) = 0;
              PF_PART7(auVar58, 0) = PF_PART7(auVar52, 8);
              PF_PART8(auVar59, 1) = SUB158(auVar58 << 0x40,7);
              PF_PART1(auVar59,0) = ((uint8_t *)(void *)&auVar79)[3];
              PF_PART6(auVar59, 9) = 0;
              PF_PART10(auVar60, 1) = SUB1510(auVar59 << 0x30,5);
              PF_PART1(auVar60,0) = ((uint8_t *)(void *)&auVar79)[2];
              PF_PART4(auVar61, 11) = 0;
              PF_PART11(auVar61, 0) = auVar60;
              PF_PART1(auVar54,2) = ((uint8_t *)(void *)&auVar79)[1];
              PF_PART2(auVar54, 0) = PF_PART2(auVar79, 0);
              PF_PART12(auVar54, 3) = SUB1512(auVar61 << 0x20,3);
              PF_PART13(auVar56, 2) = PF_PART13(auVar54, 2);
              PF_PART2(auVar56, 0) = PF_PART2(auVar79, 0) & 0xff;
              PF_PART4(auVar82, 8) = PF_PART4(auVar56, 0);
              PF_PART4(auVar82, 12) = PF_PART4(auVar60, 0);
              auVar81 = pshuflw(auVar82,auVar82,0x1b);
              auVar82 = pshufhw(auVar81,auVar81,0x1b);
              ((uint8_t *)(void *)&auVar81)[8] = ((uint8_t *)(void *)&auVar79)[8];
              ((uint8_t *)(void *)&auVar81)[9] = 0;
              ((uint8_t *)(void *)&auVar81)[10] = ((uint8_t *)(void *)&auVar79)[9];
              PF_PART10(auVar77, 0) = (unkuint10)((uint8_t *)(void *)&auVar79)[0xc] << 0x40;
              PF_PART1(auVar77,10) = ((uint8_t *)(void *)&auVar79)[0xd];
              PF_PART1(auVar78,0xb) = 0;
              PF_PART11(auVar78, 0) = auVar77;
              PF_PART1(auVar78,0xc) = ((uint8_t *)(void *)&auVar79)[0xe];
              PF_PART1(auVar78,0xd) = 0;
              PF_PART1(auVar78,0xe) = ((uint8_t *)(void *)&auVar79)[0xf];
              ((uint8_t *)(void *)&auVar81)[3] = 0;
              PF_PART3(auVar81, 0) = PF_PART3(auVar77, 8);
              PF_PART3(auVar81, 4) = PF_PART3(auVar78, 12);
              ((uint8_t *)(void *)&auVar81)[7] = 0;
              ((uint8_t *)(void *)&auVar81)[0xb] = 0;
              PF_PART3(auVar81, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar79)[0xb],(uint6)((uint8_t *)(void *)&auVar79)[10] << 0x20) >> 0x20);
              ((uint8_t *)(void *)&auVar81)[0xf] = 0;
              auVar79 = pshuflw(auVar81,auVar81,0x1b);
              auVar81 = pshufhw(auVar79,auVar79,0x1b);
              sVar10 = PF_PART2(auVar81, 0);
              sVar11 = PF_PART2(auVar81, 2);
              sVar13 = PF_PART2(auVar81, 4);
              sVar15 = PF_PART2(auVar81, 6);
              sVar17 = PF_PART2(auVar81, 8);
              sVar19 = PF_PART2(auVar81, 10);
              sVar21 = PF_PART2(auVar81, 12);
              sVar23 = PF_PART2(auVar81, 14);
              sVar25 = PF_PART2(auVar82, 0);
              sVar27 = PF_PART2(auVar82, 2);
              sVar29 = PF_PART2(auVar82, 4);
              sVar31 = PF_PART2(auVar82, 6);
              sVar33 = PF_PART2(auVar82, 8);
              sVar35 = PF_PART2(auVar82, 10);
              sVar37 = PF_PART2(auVar82, 12);
              sVar39 = PF_PART2(auVar82, 14);
              PF_PART1(auVar43,0xd) = 0;
              PF_PART13(auVar43, 0) = PF_PART13(auVar76, 0);
              PF_PART1(auVar43,0xe) = ((uint8_t *)(void *)&auVar76)[7];
              PF_PART1(auVar45,0xc) = ((uint8_t *)(void *)&auVar76)[6];
              PF_PART12(auVar45, 0) = PF_PART12(auVar76, 0);
              PF_PART2(auVar45, 13) = PF_PART2(auVar43, 13);
              PF_PART1(auVar47,0xb) = 0;
              PF_PART11(auVar47, 0) = PF_PART11(auVar76, 0);
              PF_PART3(auVar47, 12) = PF_PART3(auVar45, 12);
              PF_PART1(auVar49,10) = ((uint8_t *)(void *)&auVar76)[5];
              PF_PART10(auVar49, 0) = PF_PART10(auVar76, 0);
              PF_PART4(auVar49, 11) = PF_PART4(auVar47, 11);
              PF_PART1(auVar51,9) = 0;
              PF_PART9(auVar51, 0) = PF_PART9(auVar76, 0);
              PF_PART5(auVar51, 10) = PF_PART5(auVar49, 10);
              PF_PART1(auVar53,8) = ((uint8_t *)(void *)&auVar76)[4];
              PF_PART8(auVar53, 0) = PF_PART8(auVar76, 0);
              PF_PART6(auVar53, 9) = PF_PART6(auVar51, 9);
              ((uint8_t *)(void *)&auVar83)[7] = 0;
              PF_PART7(auVar83, 0) = PF_PART7(auVar53, 8);
              PF_PART8(auVar62, 7) = 0;
              PF_PART7(auVar62, 0) = PF_PART7(auVar53, 8);
              PF_PART8(auVar63, 1) = SUB158(auVar62 << 0x40,7);
              PF_PART1(auVar63,0) = ((uint8_t *)(void *)&auVar76)[3];
              PF_PART6(auVar63, 9) = 0;
              PF_PART10(auVar64, 1) = SUB1510(auVar63 << 0x30,5);
              PF_PART1(auVar64,0) = ((uint8_t *)(void *)&auVar76)[2];
              PF_PART4(auVar65, 11) = 0;
              PF_PART11(auVar65, 0) = auVar64;
              PF_PART1(auVar55,2) = ((uint8_t *)(void *)&auVar76)[1];
              PF_PART2(auVar55, 0) = PF_PART2(auVar76, 0);
              PF_PART12(auVar55, 3) = SUB1512(auVar65 << 0x20,3);
              PF_PART13(auVar57, 2) = PF_PART13(auVar55, 2);
              PF_PART2(auVar57, 0) = PF_PART2(auVar76, 0) & 0xff;
              PF_PART4(auVar83, 8) = PF_PART4(auVar57, 0);
              PF_PART4(auVar83, 12) = PF_PART4(auVar64, 0);
              auVar79 = pshuflw(auVar83,auVar83,0x1b);
              auVar83 = pshufhw(auVar79,auVar79,0x1b);
              ((uint8_t *)(void *)&auVar79)[8] = ((uint8_t *)(void *)&auVar76)[8];
              ((uint8_t *)(void *)&auVar79)[9] = 0;
              ((uint8_t *)(void *)&auVar79)[10] = ((uint8_t *)(void *)&auVar76)[9];
              PF_PART10(auVar74, 0) = (unkuint10)((uint8_t *)(void *)&auVar76)[0xc] << 0x40;
              PF_PART1(auVar74,10) = ((uint8_t *)(void *)&auVar76)[0xd];
              PF_PART1(auVar75,0xb) = 0;
              PF_PART11(auVar75, 0) = auVar74;
              PF_PART1(auVar75,0xc) = ((uint8_t *)(void *)&auVar76)[0xe];
              PF_PART1(auVar75,0xd) = 0;
              PF_PART1(auVar75,0xe) = ((uint8_t *)(void *)&auVar76)[0xf];
              ((uint8_t *)(void *)&auVar79)[3] = 0;
              PF_PART3(auVar79, 0) = PF_PART3(auVar74, 8);
              PF_PART3(auVar79, 4) = PF_PART3(auVar75, 12);
              ((uint8_t *)(void *)&auVar79)[7] = 0;
              ((uint8_t *)(void *)&auVar79)[0xb] = 0;
              PF_PART3(auVar79, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar76)[0xb],(uint6)((uint8_t *)(void *)&auVar76)[10] << 0x20) >> 0x20);
              ((uint8_t *)(void *)&auVar79)[0xf] = 0;
              auVar76 = pshuflw(auVar79,auVar79,0x1b);
              auVar76 = pshufhw(auVar76,auVar76,0x1b);
              sVar9 = PF_PART2(auVar76, 0);
              sVar12 = PF_PART2(auVar76, 2);
              sVar14 = PF_PART2(auVar76, 4);
              sVar16 = PF_PART2(auVar76, 6);
              sVar18 = PF_PART2(auVar76, 8);
              sVar20 = PF_PART2(auVar76, 10);
              sVar22 = PF_PART2(auVar76, 12);
              sVar24 = PF_PART2(auVar76, 14);
              sVar26 = PF_PART2(auVar83, 0);
              sVar28 = PF_PART2(auVar83, 2);
              sVar30 = PF_PART2(auVar83, 4);
              sVar32 = PF_PART2(auVar83, 6);
              sVar34 = PF_PART2(auVar83, 8);
              sVar36 = PF_PART2(auVar83, 10);
              sVar38 = PF_PART2(auVar83, 12);
              sVar40 = PF_PART2(auVar83, 14);
              pbVar71[-0x10] = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar81)[0] - (0xff < sVar10);
              pbVar71[-0xf] = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar81)[2] - (0xff < sVar11);
              pbVar71[-0xe] = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar81)[4] - (0xff < sVar13);
              pbVar71[-0xd] = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar81)[6] - (0xff < sVar15);
              pbVar71[-0xc] = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar81)[8] - (0xff < sVar17);
              pbVar71[-0xb] = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar81)[10] - (0xff < sVar19);
              pbVar71[-10] = (0 < sVar21) * (sVar21 < 0x100) * ((uint8_t *)(void *)&auVar81)[0xc] - (0xff < sVar21);
              pbVar71[-9] = (0 < sVar23) * (sVar23 < 0x100) * ((uint8_t *)(void *)&auVar81)[0xe] - (0xff < sVar23);
              pbVar71[-8] = (0 < sVar25) * (sVar25 < 0x100) * ((uint8_t *)(void *)&auVar82)[0] - (0xff < sVar25);
              pbVar71[-7] = (0 < sVar27) * (sVar27 < 0x100) * ((uint8_t *)(void *)&auVar82)[2] - (0xff < sVar27);
              pbVar71[-6] = (0 < sVar29) * (sVar29 < 0x100) * ((uint8_t *)(void *)&auVar82)[4] - (0xff < sVar29);
              pbVar71[-5] = (0 < sVar31) * (sVar31 < 0x100) * ((uint8_t *)(void *)&auVar82)[6] - (0xff < sVar31);
              pbVar71[-4] = (0 < sVar33) * (sVar33 < 0x100) * ((uint8_t *)(void *)&auVar82)[8] - (0xff < sVar33);
              pbVar71[-3] = (0 < sVar35) * (sVar35 < 0x100) * ((uint8_t *)(void *)&auVar82)[10] - (0xff < sVar35);
              pbVar71[-2] = (0 < sVar37) * (sVar37 < 0x100) * ((uint8_t *)(void *)&auVar82)[0xc] - (0xff < sVar37);
              pbVar71[-1] = (0 < sVar39) * (sVar39 < 0x100) * ((uint8_t *)(void *)&auVar82)[0xe] - (0xff < sVar39);
              *pbVar71 = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar76)[0] - (0xff < sVar9);
              pbVar71[1] = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar76)[2] - (0xff < sVar12);
              pbVar71[2] = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar76)[4] - (0xff < sVar14);
              pbVar71[3] = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar76)[6] - (0xff < sVar16);
              pbVar71[4] = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar76)[8] - (0xff < sVar18);
              pbVar71[5] = (0 < sVar20) * (sVar20 < 0x100) * ((uint8_t *)(void *)&auVar76)[10] - (0xff < sVar20);
              pbVar71[6] = (0 < sVar22) * (sVar22 < 0x100) * ((uint8_t *)(void *)&auVar76)[0xc] - (0xff < sVar22);
              pbVar71[7] = (0 < sVar24) * (sVar24 < 0x100) * ((uint8_t *)(void *)&auVar76)[0xe] - (0xff < sVar24);
              pbVar71[8] = (0 < sVar26) * (sVar26 < 0x100) * ((uint8_t *)(void *)&auVar83)[0] - (0xff < sVar26);
              pbVar71[9] = (0 < sVar28) * (sVar28 < 0x100) * ((uint8_t *)(void *)&auVar83)[2] - (0xff < sVar28);
              pbVar71[10] = (0 < sVar30) * (sVar30 < 0x100) * ((uint8_t *)(void *)&auVar83)[4] - (0xff < sVar30);
              pbVar71[0xb] = (0 < sVar32) * (sVar32 < 0x100) * ((uint8_t *)(void *)&auVar83)[6] - (0xff < sVar32);
              pbVar71[0xc] = (0 < sVar34) * (sVar34 < 0x100) * ((uint8_t *)(void *)&auVar83)[8] - (0xff < sVar34);
              pbVar71[0xd] = (0 < sVar36) * (sVar36 < 0x100) * ((uint8_t *)(void *)&auVar83)[10] - (0xff < sVar36);
              pbVar71[0xe] = (0 < sVar38) * (sVar38 < 0x100) * ((uint8_t *)(void *)&auVar83)[0xc] - (0xff < sVar38);
              pbVar71[0xf] = (0 < sVar40) * (sVar40 < 0x100) * ((uint8_t *)(void *)&auVar83)[0xe] - (0xff < sVar40);
              lVar70 = lVar70 + -0x20;
              pbVar71 = pbVar71 + 0x20;
            } while (-lVar70 != uVar69);
            if (uVar67 == uVar69) goto LAB_100032d6;
            uVar66 = uVar69;
            if ((uVar67 & 0x1c) == 0) goto LAB_100032a5;
          }
          uVar69 = uVar67 & 0xfffffffffffffffc;
          pbVar71 = local_e8 + uVar66;
          lVar70 = -uVar66;
          do {
            uVar1 = *(undefined4 *)(auStack_140 + uVar68 + lVar70 + 5);
            auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((
                                                  uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28
                                                  ),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                                  CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1))
                                             >> 0x10),(short)uVar1) & 0xffffff00ff00ff);
            auVar76 = pshuflw(auVar76,auVar76,0x1b);
            sVar10 = PF_PART2(auVar76, 0);
            sVar9 = PF_PART2(auVar76, 2);
            sVar11 = PF_PART2(auVar76, 4);
            sVar12 = PF_PART2(auVar76, 6);
            *(uint *)pbVar71 =
                 CONCAT13((0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar76)[6] - (0xff < sVar12),
                          CONCAT12((0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar76)[4] - (0xff < sVar11),
                                   CONCAT11((0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar76)[2] -
                                            (0xff < sVar9),
                                            (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar76)[0] -
                                            (0xff < sVar10))));
            lVar70 = lVar70 + -4;
            pbVar71 = pbVar71 + 4;
          } while (-lVar70 != uVar69);
          if (uVar67 == uVar69) goto LAB_100032d6;
        }
LAB_100032a5:
        pbVar71 = local_138 + (uVar67 - uVar69) + -1;
        do {
          local_e8[uVar69] = *pbVar71;
          uVar69 = uVar69 + 1;
          pbVar71 = pbVar71 + -1;
        } while (uVar67 != uVar69);
      }
LAB_100032d6:
      local_68 = (undefined1 *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_b8 = 2;
      PF_PART8(auStack_140,0) = (uint64_t)0x10003304;
      recovered_10001d10((long *)&local_68,(long)local_e8,uVar67);
LAB_1000330c:
      puVar73 = &DAT_10005255;
      if (local_68 != (undefined1 *)0x0) {
        puVar73 = local_68;
      }
      local_b8 = 3;
      PF_PART8(auStack_140,0) = (uint64_t)0x1000332d;
      recovered_10003b20(local_38,(long)puVar73,uStack_60);
      PF_PART8(auStack_140,0) = (uint64_t)0x10003336;
      _ZdlPv(local_68);
      local_b8 = 4;
      PF_PART8(auStack_140,0) = (uint64_t)0x1000334e;
      recovered_100035e0(local_38,0x2e);
      PF_PART8(auVar3, 8) = 0;
      PF_PART8(auVar3, 0) = (ulong)local_48 / 100000;
      local_b8 = 5;
      PF_PART8(auStack_140,0) = (uint64_t)0x1000339a;
      recovered_100035e0(local_38,(char)((ulong)local_48 / 100000) +
                                  SUB161(auVar3 * ZEXT816(0x199999999999999a),8) * -10 | 0x30);
      PF_PART8(auVar4, 8) = 0;
      PF_PART8(auVar4, 0) = (ulong)local_48 / 10000;
      local_b8 = 6;
      PF_PART8(auStack_140,0) = (uint64_t)0x100033e2;
      recovered_100035e0(local_38,(char)((ulong)local_48 / 10000) +
                                  SUB161(auVar4 * ZEXT816(0x199999999999999a),8) * -10 | 0x30);
      PF_PART8(auVar5, 8) = 0;
      PF_PART8(auVar5, 0) = (ulong)local_48 / 1000;
      local_b8 = 7;
      PF_PART8(auStack_140,0) = (uint64_t)0x1000342e;
      recovered_100035e0(local_38,(char)((ulong)local_48 / 1000) +
                                  SUB161(auVar5 * ZEXT816(0x199999999999999a),8) * -10 | 0x30);
      PF_PART8(auVar6, 8) = 0;
      PF_PART8(auVar6, 0) = (ulong)local_48 / 100;
      local_b8 = 8;
      PF_PART8(auStack_140,0) = (uint64_t)0x1000347a;
      recovered_100035e0(local_38,(char)((ulong)local_48 / 100) +
                                  SUB161(auVar6 * ZEXT816(0x199999999999999a),8) * -10 | 0x30);
      local_50 = (ulong)local_48 / 10;
      PF_PART8(auVar7, 8) = 0;
      PF_PART8(auVar7, 0) = local_50;
      local_b8 = 9;
      PF_PART8(auStack_140,0) = (uint64_t)0x100034c8;
      recovered_100035e0(local_38,(char)local_50 +
                                  SUB161(auVar7 * ZEXT816(0x199999999999999a),8) * -10 | 0x30);
      local_b8 = 10;
      PF_PART8(auStack_140,0) = (uint64_t)0x100034f3;
      recovered_100035e0(local_38,SUB81(local_48,0) + (char)local_50 * -10 | 0x30);
      PF_PART8(auStack_140,0) = (uint64_t)0x100034ff;
      _Unwind_SjLj_Unregister(&local_c0);
      return local_c8;
    }
    *local_38 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    puVar72 = &DAT_100053d7;
  }
  uVar69 = 3;
LAB_10002ff3:
  local_b8 = 0xffffffff;
  PF_PART8(auStack_140,0) = (uint64_t)0x10002ff8;
  recovered_10001d10(local_38,(long)puVar72,uVar69);
  PF_PART8(auStack_140,0) = (uint64_t)0x10003004;
  _Unwind_SjLj_Unregister(&local_c0);
  return param_2;
}

#undef DAT_10005060
#undef DAT_10005070
#undef DAT_10005080
#undef DAT_10005090
#undef DAT_10005098
#undef DAT_100050a0
#undef DAT_100050a8
#undef DAT_100050b0
#undef DAT_100050b8
#undef DAT_100051a4
#undef DAT_10005255
#undef DAT_100053d3
#undef DAT_100053d7
#undef DAT_100053db
#undef DAT_10006000
#undef LAB_10003548
#undef UNK_10005074
#undef UNK_10005088
#undef _DAT_10005060
#undef _DAT_10005070
#undef _DAT_10005080
#undef _DAT_10005098
#undef _DAT_100050b0
#undef _DAT_100050b8
#undef dRam0000000010005088
#undef uRam0000000010005074
#undef local_90
#undef local_88
#undef local_80
#undef local_68
#undef local_58
#undef local_50
#undef local_48
#undef local_38
#undef auStack_157
#undef auStack_147
#undef auStack_140
#undef uStack_60
#undef local_138
#undef local_e8
#undef local_c8
#undef local_c0
#undef local_b8
#undef local_a0
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e0
 */

void recovered_100035e0(long *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;

  uVar2 = param_1[1];
  if (uVar2 == param_1[2]) {
    uVar12 = 0x10;
    if (uVar2 != 0) {
      uVar12 = uVar2 * 2;
    }
    if (uVar12 <= uVar2) goto LAB_10003659;
    puVar8 = _Znwm(uVar12 | 1);
    *puVar8 = 0;
    pvVar3 = (void *)*param_1;
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar9 = 0;
      if ((3 < uVar2) && (0x1f < (ulong)((long)puVar8 - (long)pvVar3))) {
        if (uVar2 < 0x20) {
          uVar10 = 0;
        }
        else {
          uVar9 = uVar2 & 0xffffffffffffffe0;
          uVar10 = 0;
          do {
            uVar5 = ((undefined8 *)((long)pvVar3 + uVar10))[1];
            puVar1 = (undefined8 *)((long)pvVar3 + uVar10 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            *(undefined8 *)(puVar8 + uVar10) = *(undefined8 *)((long)pvVar3 + uVar10);
            *(undefined8 *)((long)(puVar8 + uVar10) + 8) = uVar5;
            *(undefined8 *)(puVar8 + uVar10 + 0x10) = uVar6;
            *(undefined8 *)((long)(puVar8 + uVar10 + 0x10) + 8) = uVar7;
            uVar10 = uVar10 + 0x20;
          } while (uVar9 != uVar10);
          if (uVar2 == uVar9) goto LAB_1000374f;
          uVar10 = uVar9;
          if ((uVar2 & 0x1c) == 0) goto LAB_100036e5;
        }
        uVar9 = uVar2 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar3 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
        if (uVar2 == uVar9) goto LAB_1000374f;
      }
LAB_100036e5:
      uVar11 = uVar2 & 3;
      uVar10 = uVar9;
      if (uVar11 != 0) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar3 + uVar10);
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 - uVar2 < 0xfffffffffffffffd) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar3 + uVar10);
          puVar8[uVar10 + 1] = *(undefined1 *)((long)pvVar3 + uVar10 + 1);
          puVar8[uVar10 + 2] = *(undefined1 *)((long)pvVar3 + uVar10 + 2);
          puVar8[uVar10 + 3] = *(undefined1 *)((long)pvVar3 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar2 != uVar10);
      }
    }
LAB_1000374f:
    puVar8[uVar2] = 0;
    _ZdlPv(pvVar3);
  }
  else {
LAB_10003659:
    puVar8 = (undefined1 *)*param_1;
    if (puVar8 != (undefined1 *)0x0) goto LAB_10003760;
    puVar8 = _Znwm(1);
    *puVar8 = 0;
    uVar12 = 0;
  }
  *param_1 = (long)puVar8;
  param_1[2] = uVar12;
LAB_10003760:
  lVar4 = param_1[1];
  param_1[1] = lVar4 + 1;
  puVar8[lVar4] = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_100051bc
#define DAT_100051bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_10005255
#define DAT_10005255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10003ace
#define LAB_10003ace (*(uint8_t *)(0x10003aceU))
#undef str_100053e0
#define str_100053e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_100053f1
#define str_100053f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cdU)))
#define local_c8 (*(byte (*)[200])(pf_stack_frame + 136))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 168))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 176))
#define local_88 (*(undefined8 *)(pf_stack_frame + 200))
#define local_80 (*(undefined * *)(pf_stack_frame + 208))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_50 (*(long * *)(pf_stack_frame + 256))
#define local_48 (*(undefined1 (*)[72])(pf_stack_frame + 264))
#define local_38 (*(undefined8 *)(pf_stack_frame + 280))
#define auStack_137 (*(undefined1 (*)[311])(pf_stack_frame + 25))
#define auStack_127 (*(undefined1 (*)[295])(pf_stack_frame + 41))
#define auStack_120 (*(undefined1 (*)[288])(pf_stack_frame + 48))
#define abStack_119 (*(byte (*)[281])(pf_stack_frame + 55))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003790
 */

long * recovered_10003790(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  pf_u120 auVar36;
  pf_u120 auVar37;
  pf_u120 auVar38;
  pf_u120 auVar39;
  pf_u120 auVar40;
  pf_u120 auVar41;
  pf_u120 auVar42;
  pf_u120 auVar43;
  pf_u120 auVar44;
  pf_u120 auVar45;
  pf_u120 auVar46;
  pf_u120 auVar47;
  pf_u120 auVar48;
  pf_u120 auVar49;
  pf_u120 auVar50;
  pf_u120 auVar51;
  pf_u120 auVar52;
  pf_u120 auVar53;
  pf_u88 auVar54;
  pf_u120 auVar55;
  pf_u120 auVar56;
  pf_u120 auVar57;
  pf_u88 auVar58;
  pf_u120 auVar59;
  char *pcVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  long lVar65;
  byte *pbVar66;
  undefined1 *puVar67;
  pf_u88 auVar68;
  pf_u120 auVar69;
  uint128 auVar70;
  pf_u88 auVar71;
  pf_u120 auVar72;
  uint128 auVar73;
  uint128 auVar74;
  uint128 auVar75;
  uint128 auVar76;

  local_78 = local_48 + 0x40;
  local_68 = abStack_119 + 1;
  iVar1 = (int)param_1[3];
  local_88 = DAT_10006000;
  local_80 = &DAT_100051bc;
  local_70 = &LAB_10003ace;
  PF_PART8(auStack_120,0) = 0x100037e3;
  _Unwind_SjLj_Register(&local_a8);
  if (iVar1 != 10) {
    pcVar60 = str_100053f1;
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      pcVar60 = str_100053e0;
    }
    lVar65 = 0;
    do {
      abStack_119[lVar65 + 1] = pcVar60[(uint)param_2 & (uint)(iVar1 != 8) * 8 + 7];
      lVar65 = lVar65 + 1;
      param_2 = param_2 >> (iVar1 != 8) + 3;
    } while (param_2 != 0);
    for (; lVar65 != 0; lVar65 = lVar65 + -1) {
      local_a0 = 0xffffffff;
      PF_PART8(auStack_120,0) = 0x100038cb;
      recovered_100035e0(param_1,abStack_119[lVar65]);
    }
    goto LAB_10003aad;
  }
  uVar64 = 0;
  do {
    uVar63 = uVar64;
    abStack_119[uVar63 + 1] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
    uVar64 = uVar63 + 1;
    bVar3 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar3);
  if (uVar64 < 0x21) {
    if (uVar64 != 0) {
      if (uVar64 < 4) {
        uVar62 = 0;
      }
      else {
        if (uVar64 < 0x20) {
          uVar61 = 0;
        }
        else {
          uVar62 = uVar64 & 0xffffffffffffffe0;
          pbVar66 = local_c8 + 0x10;
          lVar65 = 0;
          do {
            auVar70 = *(uint128 *)(auStack_137 + uVar63 + lVar65);
            auVar73 = *(uint128 *)(auStack_127 + uVar63 + lVar65);
            PF_PART1(auVar36,0xd) = 0;
            PF_PART13(auVar36, 0) = PF_PART13(auVar73, 0);
            PF_PART1(auVar36,0xe) = ((uint8_t *)(void *)&auVar73)[7];
            PF_PART1(auVar38,0xc) = ((uint8_t *)(void *)&auVar73)[6];
            PF_PART12(auVar38, 0) = PF_PART12(auVar73, 0);
            PF_PART2(auVar38, 13) = PF_PART2(auVar36, 13);
            PF_PART1(auVar40,0xb) = 0;
            PF_PART11(auVar40, 0) = PF_PART11(auVar73, 0);
            PF_PART3(auVar40, 12) = PF_PART3(auVar38, 12);
            PF_PART1(auVar42,10) = ((uint8_t *)(void *)&auVar73)[5];
            PF_PART10(auVar42, 0) = PF_PART10(auVar73, 0);
            PF_PART4(auVar42, 11) = PF_PART4(auVar40, 11);
            PF_PART1(auVar44,9) = 0;
            PF_PART9(auVar44, 0) = PF_PART9(auVar73, 0);
            PF_PART5(auVar44, 10) = PF_PART5(auVar42, 10);
            PF_PART1(auVar46,8) = ((uint8_t *)(void *)&auVar73)[4];
            PF_PART8(auVar46, 0) = PF_PART8(auVar73, 0);
            PF_PART6(auVar46, 9) = PF_PART6(auVar44, 9);
            ((uint8_t *)(void *)&auVar75)[7] = 0;
            PF_PART7(auVar75, 0) = PF_PART7(auVar46, 8);
            PF_PART8(auVar52, 7) = 0;
            PF_PART7(auVar52, 0) = PF_PART7(auVar46, 8);
            PF_PART8(auVar53, 1) = SUB158(auVar52 << 0x40,7);
            PF_PART1(auVar53,0) = ((uint8_t *)(void *)&auVar73)[3];
            PF_PART6(auVar53, 9) = 0;
            PF_PART10(auVar54, 1) = SUB1510(auVar53 << 0x30,5);
            PF_PART1(auVar54,0) = ((uint8_t *)(void *)&auVar73)[2];
            PF_PART4(auVar55, 11) = 0;
            PF_PART11(auVar55, 0) = auVar54;
            PF_PART1(auVar48,2) = ((uint8_t *)(void *)&auVar73)[1];
            PF_PART2(auVar48, 0) = PF_PART2(auVar73, 0);
            PF_PART12(auVar48, 3) = SUB1512(auVar55 << 0x20,3);
            PF_PART13(auVar50, 2) = PF_PART13(auVar48, 2);
            PF_PART2(auVar50, 0) = PF_PART2(auVar73, 0) & 0xff;
            PF_PART4(auVar75, 8) = PF_PART4(auVar50, 0);
            PF_PART4(auVar75, 12) = PF_PART4(auVar54, 0);
            auVar74 = pshuflw(auVar75,auVar75,0x1b);
            auVar75 = pshufhw(auVar74,auVar74,0x1b);
            ((uint8_t *)(void *)&auVar74)[8] = ((uint8_t *)(void *)&auVar73)[8];
            ((uint8_t *)(void *)&auVar74)[9] = 0;
            ((uint8_t *)(void *)&auVar74)[10] = ((uint8_t *)(void *)&auVar73)[9];
            PF_PART10(auVar71, 0) = (unkuint10)((uint8_t *)(void *)&auVar73)[0xc] << 0x40;
            PF_PART1(auVar71,10) = ((uint8_t *)(void *)&auVar73)[0xd];
            PF_PART1(auVar72,0xb) = 0;
            PF_PART11(auVar72, 0) = auVar71;
            PF_PART1(auVar72,0xc) = ((uint8_t *)(void *)&auVar73)[0xe];
            PF_PART1(auVar72,0xd) = 0;
            PF_PART1(auVar72,0xe) = ((uint8_t *)(void *)&auVar73)[0xf];
            ((uint8_t *)(void *)&auVar74)[3] = 0;
            PF_PART3(auVar74, 0) = PF_PART3(auVar71, 8);
            PF_PART3(auVar74, 4) = PF_PART3(auVar72, 12);
            ((uint8_t *)(void *)&auVar74)[7] = 0;
            ((uint8_t *)(void *)&auVar74)[0xb] = 0;
            PF_PART3(auVar74, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar73)[0xb],(uint6)((uint8_t *)(void *)&auVar73)[10] << 0x20) >> 0x20);
            ((uint8_t *)(void *)&auVar74)[0xf] = 0;
            auVar73 = pshuflw(auVar74,auVar74,0x1b);
            auVar74 = pshufhw(auVar73,auVar73,0x1b);
            sVar5 = PF_PART2(auVar74, 0);
            sVar6 = PF_PART2(auVar74, 2);
            sVar8 = PF_PART2(auVar74, 4);
            sVar10 = PF_PART2(auVar74, 6);
            sVar12 = PF_PART2(auVar74, 8);
            sVar14 = PF_PART2(auVar74, 10);
            sVar16 = PF_PART2(auVar74, 12);
            sVar18 = PF_PART2(auVar74, 14);
            sVar20 = PF_PART2(auVar75, 0);
            sVar22 = PF_PART2(auVar75, 2);
            sVar24 = PF_PART2(auVar75, 4);
            sVar26 = PF_PART2(auVar75, 6);
            sVar28 = PF_PART2(auVar75, 8);
            sVar30 = PF_PART2(auVar75, 10);
            sVar32 = PF_PART2(auVar75, 12);
            sVar34 = PF_PART2(auVar75, 14);
            PF_PART1(auVar37,0xd) = 0;
            PF_PART13(auVar37, 0) = PF_PART13(auVar70, 0);
            PF_PART1(auVar37,0xe) = ((uint8_t *)(void *)&auVar70)[7];
            PF_PART1(auVar39,0xc) = ((uint8_t *)(void *)&auVar70)[6];
            PF_PART12(auVar39, 0) = PF_PART12(auVar70, 0);
            PF_PART2(auVar39, 13) = PF_PART2(auVar37, 13);
            PF_PART1(auVar41,0xb) = 0;
            PF_PART11(auVar41, 0) = PF_PART11(auVar70, 0);
            PF_PART3(auVar41, 12) = PF_PART3(auVar39, 12);
            PF_PART1(auVar43,10) = ((uint8_t *)(void *)&auVar70)[5];
            PF_PART10(auVar43, 0) = PF_PART10(auVar70, 0);
            PF_PART4(auVar43, 11) = PF_PART4(auVar41, 11);
            PF_PART1(auVar45,9) = 0;
            PF_PART9(auVar45, 0) = PF_PART9(auVar70, 0);
            PF_PART5(auVar45, 10) = PF_PART5(auVar43, 10);
            PF_PART1(auVar47,8) = ((uint8_t *)(void *)&auVar70)[4];
            PF_PART8(auVar47, 0) = PF_PART8(auVar70, 0);
            PF_PART6(auVar47, 9) = PF_PART6(auVar45, 9);
            ((uint8_t *)(void *)&auVar76)[7] = 0;
            PF_PART7(auVar76, 0) = PF_PART7(auVar47, 8);
            PF_PART8(auVar56, 7) = 0;
            PF_PART7(auVar56, 0) = PF_PART7(auVar47, 8);
            PF_PART8(auVar57, 1) = SUB158(auVar56 << 0x40,7);
            PF_PART1(auVar57,0) = ((uint8_t *)(void *)&auVar70)[3];
            PF_PART6(auVar57, 9) = 0;
            PF_PART10(auVar58, 1) = SUB1510(auVar57 << 0x30,5);
            PF_PART1(auVar58,0) = ((uint8_t *)(void *)&auVar70)[2];
            PF_PART4(auVar59, 11) = 0;
            PF_PART11(auVar59, 0) = auVar58;
            PF_PART1(auVar49,2) = ((uint8_t *)(void *)&auVar70)[1];
            PF_PART2(auVar49, 0) = PF_PART2(auVar70, 0);
            PF_PART12(auVar49, 3) = SUB1512(auVar59 << 0x20,3);
            PF_PART13(auVar51, 2) = PF_PART13(auVar49, 2);
            PF_PART2(auVar51, 0) = PF_PART2(auVar70, 0) & 0xff;
            PF_PART4(auVar76, 8) = PF_PART4(auVar51, 0);
            PF_PART4(auVar76, 12) = PF_PART4(auVar58, 0);
            auVar73 = pshuflw(auVar76,auVar76,0x1b);
            auVar76 = pshufhw(auVar73,auVar73,0x1b);
            ((uint8_t *)(void *)&auVar73)[8] = ((uint8_t *)(void *)&auVar70)[8];
            ((uint8_t *)(void *)&auVar73)[9] = 0;
            ((uint8_t *)(void *)&auVar73)[10] = ((uint8_t *)(void *)&auVar70)[9];
            PF_PART10(auVar68, 0) = (unkuint10)((uint8_t *)(void *)&auVar70)[0xc] << 0x40;
            PF_PART1(auVar68,10) = ((uint8_t *)(void *)&auVar70)[0xd];
            PF_PART1(auVar69,0xb) = 0;
            PF_PART11(auVar69, 0) = auVar68;
            PF_PART1(auVar69,0xc) = ((uint8_t *)(void *)&auVar70)[0xe];
            PF_PART1(auVar69,0xd) = 0;
            PF_PART1(auVar69,0xe) = ((uint8_t *)(void *)&auVar70)[0xf];
            ((uint8_t *)(void *)&auVar73)[3] = 0;
            PF_PART3(auVar73, 0) = PF_PART3(auVar68, 8);
            PF_PART3(auVar73, 4) = PF_PART3(auVar69, 12);
            ((uint8_t *)(void *)&auVar73)[7] = 0;
            ((uint8_t *)(void *)&auVar73)[0xb] = 0;
            PF_PART3(auVar73, 12) = (int3)(CONCAT16(((uint8_t *)(void *)&auVar70)[0xb],(uint6)((uint8_t *)(void *)&auVar70)[10] << 0x20) >> 0x20);
            ((uint8_t *)(void *)&auVar73)[0xf] = 0;
            auVar70 = pshuflw(auVar73,auVar73,0x1b);
            auVar70 = pshufhw(auVar70,auVar70,0x1b);
            sVar4 = PF_PART2(auVar70, 0);
            sVar7 = PF_PART2(auVar70, 2);
            sVar9 = PF_PART2(auVar70, 4);
            sVar11 = PF_PART2(auVar70, 6);
            sVar13 = PF_PART2(auVar70, 8);
            sVar15 = PF_PART2(auVar70, 10);
            sVar17 = PF_PART2(auVar70, 12);
            sVar19 = PF_PART2(auVar70, 14);
            sVar21 = PF_PART2(auVar76, 0);
            sVar23 = PF_PART2(auVar76, 2);
            sVar25 = PF_PART2(auVar76, 4);
            sVar27 = PF_PART2(auVar76, 6);
            sVar29 = PF_PART2(auVar76, 8);
            sVar31 = PF_PART2(auVar76, 10);
            sVar33 = PF_PART2(auVar76, 12);
            sVar35 = PF_PART2(auVar76, 14);
            pbVar66[-0x10] = (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar74)[0] - (0xff < sVar5);
            pbVar66[-0xf] = (0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar74)[2] - (0xff < sVar6);
            pbVar66[-0xe] = (0 < sVar8) * (sVar8 < 0x100) * ((uint8_t *)(void *)&auVar74)[4] - (0xff < sVar8);
            pbVar66[-0xd] = (0 < sVar10) * (sVar10 < 0x100) * ((uint8_t *)(void *)&auVar74)[6] - (0xff < sVar10);
            pbVar66[-0xc] = (0 < sVar12) * (sVar12 < 0x100) * ((uint8_t *)(void *)&auVar74)[8] - (0xff < sVar12);
            pbVar66[-0xb] = (0 < sVar14) * (sVar14 < 0x100) * ((uint8_t *)(void *)&auVar74)[10] - (0xff < sVar14);
            pbVar66[-10] = (0 < sVar16) * (sVar16 < 0x100) * ((uint8_t *)(void *)&auVar74)[0xc] - (0xff < sVar16);
            pbVar66[-9] = (0 < sVar18) * (sVar18 < 0x100) * ((uint8_t *)(void *)&auVar74)[0xe] - (0xff < sVar18);
            pbVar66[-8] = (0 < sVar20) * (sVar20 < 0x100) * ((uint8_t *)(void *)&auVar75)[0] - (0xff < sVar20);
            pbVar66[-7] = (0 < sVar22) * (sVar22 < 0x100) * ((uint8_t *)(void *)&auVar75)[2] - (0xff < sVar22);
            pbVar66[-6] = (0 < sVar24) * (sVar24 < 0x100) * ((uint8_t *)(void *)&auVar75)[4] - (0xff < sVar24);
            pbVar66[-5] = (0 < sVar26) * (sVar26 < 0x100) * ((uint8_t *)(void *)&auVar75)[6] - (0xff < sVar26);
            pbVar66[-4] = (0 < sVar28) * (sVar28 < 0x100) * ((uint8_t *)(void *)&auVar75)[8] - (0xff < sVar28);
            pbVar66[-3] = (0 < sVar30) * (sVar30 < 0x100) * ((uint8_t *)(void *)&auVar75)[10] - (0xff < sVar30);
            pbVar66[-2] = (0 < sVar32) * (sVar32 < 0x100) * ((uint8_t *)(void *)&auVar75)[0xc] - (0xff < sVar32);
            pbVar66[-1] = (0 < sVar34) * (sVar34 < 0x100) * ((uint8_t *)(void *)&auVar75)[0xe] - (0xff < sVar34);
            *pbVar66 = (0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar70)[0] - (0xff < sVar4);
            pbVar66[1] = (0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar70)[2] - (0xff < sVar7);
            pbVar66[2] = (0 < sVar9) * (sVar9 < 0x100) * ((uint8_t *)(void *)&auVar70)[4] - (0xff < sVar9);
            pbVar66[3] = (0 < sVar11) * (sVar11 < 0x100) * ((uint8_t *)(void *)&auVar70)[6] - (0xff < sVar11);
            pbVar66[4] = (0 < sVar13) * (sVar13 < 0x100) * ((uint8_t *)(void *)&auVar70)[8] - (0xff < sVar13);
            pbVar66[5] = (0 < sVar15) * (sVar15 < 0x100) * ((uint8_t *)(void *)&auVar70)[10] - (0xff < sVar15);
            pbVar66[6] = (0 < sVar17) * (sVar17 < 0x100) * ((uint8_t *)(void *)&auVar70)[0xc] - (0xff < sVar17);
            pbVar66[7] = (0 < sVar19) * (sVar19 < 0x100) * ((uint8_t *)(void *)&auVar70)[0xe] - (0xff < sVar19);
            pbVar66[8] = (0 < sVar21) * (sVar21 < 0x100) * ((uint8_t *)(void *)&auVar76)[0] - (0xff < sVar21);
            pbVar66[9] = (0 < sVar23) * (sVar23 < 0x100) * ((uint8_t *)(void *)&auVar76)[2] - (0xff < sVar23);
            pbVar66[10] = (0 < sVar25) * (sVar25 < 0x100) * ((uint8_t *)(void *)&auVar76)[4] - (0xff < sVar25);
            pbVar66[0xb] = (0 < sVar27) * (sVar27 < 0x100) * ((uint8_t *)(void *)&auVar76)[6] - (0xff < sVar27);
            pbVar66[0xc] = (0 < sVar29) * (sVar29 < 0x100) * ((uint8_t *)(void *)&auVar76)[8] - (0xff < sVar29);
            pbVar66[0xd] = (0 < sVar31) * (sVar31 < 0x100) * ((uint8_t *)(void *)&auVar76)[10] - (0xff < sVar31);
            pbVar66[0xe] = (0 < sVar33) * (sVar33 < 0x100) * ((uint8_t *)(void *)&auVar76)[0xc] - (0xff < sVar33);
            pbVar66[0xf] = (0 < sVar35) * (sVar35 < 0x100) * ((uint8_t *)(void *)&auVar76)[0xe] - (0xff < sVar35);
            lVar65 = lVar65 + -0x20;
            pbVar66 = pbVar66 + 0x20;
          } while (-lVar65 != uVar62);
          if (uVar64 == uVar62) goto LAB_10003a46;
          uVar61 = uVar62;
          if ((uVar64 & 0x1c) == 0) goto LAB_10003a15;
        }
        uVar62 = uVar64 & 0xfffffffffffffffc;
        pbVar66 = local_c8 + uVar61;
        lVar65 = -uVar61;
        do {
          uVar2 = *(undefined4 *)(auStack_120 + uVar63 + lVar65 + 5);
          auVar70 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)
                                                  (byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                                  CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2))
                                           >> 0x10),(short)uVar2) & 0xffffff00ff00ff);
          auVar70 = pshuflw(auVar70,auVar70,0x1b);
          sVar5 = PF_PART2(auVar70, 0);
          sVar4 = PF_PART2(auVar70, 2);
          sVar6 = PF_PART2(auVar70, 4);
          sVar7 = PF_PART2(auVar70, 6);
          *(uint *)pbVar66 =
               CONCAT13((0 < sVar7) * (sVar7 < 0x100) * ((uint8_t *)(void *)&auVar70)[6] - (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * ((uint8_t *)(void *)&auVar70)[4] - (0xff < sVar6),
                                 CONCAT11((0 < sVar4) * (sVar4 < 0x100) * ((uint8_t *)(void *)&auVar70)[2] -
                                          (0xff < sVar4),
                                          (0 < sVar5) * (sVar5 < 0x100) * ((uint8_t *)(void *)&auVar70)[0] -
                                          (0xff < sVar5))));
          lVar65 = lVar65 + -4;
          pbVar66 = pbVar66 + 4;
        } while (-lVar65 != uVar62);
        if (uVar64 == uVar62) goto LAB_10003a46;
      }
LAB_10003a15:
      pbVar66 = abStack_119 + (uVar64 - uVar62);
      do {
        local_c8[uVar62] = *pbVar66;
        uVar62 = uVar62 + 1;
        pbVar66 = pbVar66 + -1;
      } while (uVar64 != uVar62);
    }
LAB_10003a46:
    PF_PART16(local_48,0) = (uint128)0x0;
    local_38 = 0;
    local_a0 = 0xffffffff;
    PF_PART8(auStack_120,0) = 0x10003a74;
    recovered_10001d10((long *)local_48,(long)local_c8,uVar64);
  }
  else {
    PF_PART16(local_48,0) = (uint128)0x0;
    local_38 = 0;
    PF_PART8(local_48, 8) = 0;
    PF_PART8(local_48, 0) = (undefined1 *)0x0;
  }
  puVar67 = &DAT_10005255;
  if ((undefined1 *)PF_PART8(local_48, 0) != (undefined1 *)0x0) {
    puVar67 = (undefined1 *)PF_PART8(local_48, 0);
  }
  local_a0 = 1;
  PF_PART8(auStack_120,0) = 0x10003aa0;
  local_50 = param_1;
  recovered_10003b20(param_1,(long)puVar67,PF_PART8(local_48, 8));
  PF_PART8(auStack_120,0) = 0x10003aa9;
  _ZdlPv((void *)PF_PART8(local_48, 0));
  param_1 = local_50;
LAB_10003aad:
  PF_PART8(auStack_120,0) = 0x10003ab9;
  _Unwind_SjLj_Unregister(&local_a8);
  return param_1;
}

#undef DAT_100051bc
#undef DAT_10005255
#undef DAT_10006000
#undef LAB_10003ace
#undef str_100053e0
#undef str_100053f1
#undef local_c8
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
#undef auStack_137
#undef auStack_127
#undef auStack_120
#undef abStack_119

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b20
 */

long * recovered_10003b20(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;

  if (param_3 == 0 || param_2 == 0) {
    return param_1;
  }
  puVar7 = (undefined1 *)*param_1;
  if (puVar7 != (undefined1 *)0x0) {
    uVar15 = param_1[1];
    uVar13 = param_2 - (long)puVar7;
    uVar6 = 0;
LAB_10003b60:
    if (uVar13 != uVar6) goto code_r0x10003b65;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_10003ef0;
    puVar8 = _Znwm(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_10003ecf;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_10003e65;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_10003e3a;
    }
    uVar11 = uVar9 & 0xffffffffffffffe0;
    uVar10 = 0;
    do {
      uVar3 = ((undefined8 *)((long)pvVar2 + uVar10))[1];
      puVar1 = (undefined8 *)((long)pvVar2 + uVar10 + 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar8 + uVar10) = *(undefined8 *)((long)pvVar2 + uVar10);
      *(undefined8 *)((long)(puVar8 + uVar10) + 8) = uVar3;
      *(undefined8 *)(puVar8 + uVar10 + 0x10) = uVar4;
      *(undefined8 *)((long)(puVar8 + uVar10 + 0x10) + 8) = uVar5;
      uVar10 = uVar10 + 0x20;
    } while (uVar11 != uVar10);
    if (uVar9 != uVar11) {
      uVar10 = uVar11;
      if ((uVar9 & 0x1c) != 0) {
LAB_10003e3a:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_10003ecf;
      }
LAB_10003e65:
      uVar12 = uVar9 & 3;
      uVar10 = uVar11;
      if (uVar12 != 0) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar11 - uVar9 < 0xfffffffffffffffd) {
        do {
          puVar8[uVar10] = *(undefined1 *)((long)pvVar2 + uVar10);
          puVar8[uVar10 + 1] = *(undefined1 *)((long)pvVar2 + uVar10 + 1);
          puVar8[uVar10 + 2] = *(undefined1 *)((long)pvVar2 + uVar10 + 2);
          puVar8[uVar10 + 3] = *(undefined1 *)((long)pvVar2 + uVar10 + 3);
          uVar10 = uVar10 + 4;
        } while (uVar9 != uVar10);
      }
    }
LAB_10003ecf:
    puVar8[uVar9] = 0;
    _ZdlPv(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_10003ef0:
    if (param_3 == 0) goto LAB_10003dde;
    uVar6 = (ulong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(uVar9 + *param_1 + uVar15) = *(undefined1 *)(uVar9 + *param_1 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + 1 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + uVar13 + 1);
        *(undefined1 *)(uVar9 + *param_1 + 2 + uVar15) =
             *(undefined1 *)(uVar9 + *param_1 + 2 + uVar13);
        *(undefined1 *)(uVar9 + *param_1 + uVar15 + 3) =
             *(undefined1 *)(uVar9 + *param_1 + 3 + uVar13);
        uVar9 = uVar9 + 4;
      } while ((param_3 & 0xfffffffffffffffc) != uVar9);
    }
    if (uVar6 != 0) {
      lVar16 = uVar15 + uVar9;
      lVar14 = (param_2 + uVar9) - (long)puVar7;
      do {
        *(undefined1 *)(*param_1 + lVar16) = *(undefined1 *)(*param_1 + lVar14);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    goto LAB_10003ddb;
  }
  uVar15 = param_1[1];
LAB_10003b73:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_10003d36;
  puVar7 = _Znwm(uVar15 + 1);
  *puVar7 = 0;
  pvVar2 = (void *)*param_1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar13 = 0;
    if ((3 < uVar6) && (0x1f < (ulong)((long)puVar7 - (long)pvVar2))) {
      if (uVar6 < 0x20) {
        uVar9 = 0;
      }
      else {
        uVar13 = uVar6 & 0xffffffffffffffe0;
        uVar9 = 0;
        do {
          uVar3 = ((undefined8 *)((long)pvVar2 + uVar9))[1];
          puVar1 = (undefined8 *)((long)pvVar2 + uVar9 + 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)((long)pvVar2 + uVar9);
          *(undefined8 *)((long)(puVar7 + uVar9) + 8) = uVar3;
          *(undefined8 *)(puVar7 + uVar9 + 0x10) = uVar4;
          *(undefined8 *)((long)(puVar7 + uVar9 + 0x10) + 8) = uVar5;
          uVar9 = uVar9 + 0x20;
        } while (uVar13 != uVar9);
        if (uVar6 == uVar13) goto LAB_10003d1f;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_10003cb5;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_10003d1f;
    }
LAB_10003cb5:
    uVar11 = uVar6 & 3;
    uVar9 = uVar13;
    if (uVar11 != 0) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar13 - uVar6 < 0xfffffffffffffffd) {
      do {
        puVar7[uVar9] = *(undefined1 *)((long)pvVar2 + uVar9);
        puVar7[uVar9 + 1] = *(undefined1 *)((long)pvVar2 + uVar9 + 1);
        puVar7[uVar9 + 2] = *(undefined1 *)((long)pvVar2 + uVar9 + 2);
        puVar7[uVar9 + 3] = *(undefined1 *)((long)pvVar2 + uVar9 + 3);
        uVar9 = uVar9 + 4;
      } while (uVar6 != uVar9);
    }
  }
LAB_10003d1f:
  puVar7[uVar6] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_10003d36:
  uVar15 = (ulong)((uint)param_3 & 3);
  if (param_3 - 1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      *(undefined1 *)(uVar6 + 1 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 1 + uVar6);
      *(undefined1 *)(uVar6 + 2 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 2 + uVar6);
      *(undefined1 *)(uVar6 + 3 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + 3 + uVar6);
      uVar6 = uVar6 + 4;
    } while ((param_3 & 0xfffffffffffffffc) != uVar6);
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  }
LAB_10003ddb:
  puVar8 = (undefined1 *)*param_1;
LAB_10003dde:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x10003b65:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_10003b73;
  goto LAB_10003b60;
}


#undef DAT_100051c4
#define DAT_100051c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_100040a7
#define LAB_100040a7 (*(uint8_t *)(0x100040a7U))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(long * *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fc0
 */

void recovered_10003fc0(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10006000;
  local_68 = &DAT_100051c4;
  local_58 = &LAB_100040a7;
  _Unwind_SjLj_Register(&local_90);
  if (param_1 == 7) {
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) goto LAB_1000408c;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 2;
      local_38 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
LAB_1000405e:
      param_2 = local_38;
      plVar2 = (long *)*local_38;
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
  }
  else {
    if (param_1 != 6) {
      local_88 = 0xffffffff;
      recovered_100040e0(param_1,param_2);
      goto LAB_1000408c;
    }
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) goto LAB_1000408c;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 1;
      local_38 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      goto LAB_1000405e;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1000408c:
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_100051c4
#undef DAT_10006000
#undef LAB_100040a7
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef auStack_98
#undef local_50
#undef local_38

#undef DAT_100051d4
#define DAT_100051d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_100041b3
#define LAB_100041b3 (*(uint8_t *)(0x100041b3U))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(long * *)(pf_stack_frame + 120))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e0
 */

void recovered_100040e0(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10006000;
  local_68 = &DAT_100051d4;
  local_58 = &LAB_100041b3;
  _Unwind_SjLj_Register(&local_90);
  if (param_1 == 9) {
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) goto LAB_10004198;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 2;
      local_38 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      goto LAB_1000417e;
    }
  }
  else {
    if ((param_1 != 8) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) goto LAB_10004198;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 1;
      local_38 = param_2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
LAB_1000417e:
      param_2 = local_38;
      plVar2 = (long *)*local_38;
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_10004198:
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_100051d4
#undef DAT_10006000
#undef LAB_100041b3
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38
#undef auStack_98

#undef DAT_100051e4
#define DAT_100051e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10004933
#define LAB_10004933 (*(uint8_t *)(0x10004933U))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(undefined8 *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(long *)(pf_stack_frame + 112))
#define local_48 (*(long *)(pf_stack_frame + 120))
#define local_40 (*(long *)(pf_stack_frame + 128))
#define local_38 (*(long * *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f0
 */

void recovered_100041f0(long *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;

  _ZdlPv((void *)param_1[0x1b4]);
  _ZdlPv((void *)param_1[0x1ae]);
  local_68 = (undefined1 *)&local_a8;
  lVar3 = param_1[0x1ab];
  local_88 = DAT_10006000;
  local_80 = &DAT_100051e4;
  local_70 = &LAB_10004933;
  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  _Unwind_SjLj_Register(&local_a8);
  local_38 = param_1;
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      lVar5 = param_1[0x1aa];
      plVar1 = *(long **)(lVar5 + lVar4);
      if (plVar1 != (long *)0x0) {
        plVar2 = plVar1 + 1;
        *plVar2 = *plVar2 + -1;
        if (*plVar2 == 0) {
          local_a0 = 1;
          local_50 = lVar3;
          local_48 = lVar4;
          local_40 = lVar5;
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
          param_1 = local_38;
          lVar5 = local_40;
          lVar4 = local_48;
          lVar3 = local_50;
          plVar2 = *(long **)(local_40 + local_48);
          plVar1 = plVar2 + 2;
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
          }
        }
        *(undefined8 *)(lVar5 + lVar4) = 0;
        ((undefined8 *)(lVar5 + lVar4))[1] = 0;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x1ab] = 0;
  _ZdlPv((void *)param_1[0x1aa]);
  lVar3 = param_1[0x1a8];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x10;
    do {
      lVar4 = lVar4 + -0x10;
      lVar5 = param_1[0x1a7];
      plVar1 = *(long **)(lVar5 + lVar4);
      if (plVar1 != (long *)0x0) {
        plVar2 = plVar1 + 1;
        *plVar2 = *plVar2 + -1;
        if (*plVar2 == 0) {
          local_a0 = 2;
          local_50 = lVar3;
          local_48 = lVar4;
          local_40 = lVar5;
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
          param_1 = local_38;
          lVar5 = local_40;
          lVar4 = local_48;
          lVar3 = local_50;
          plVar2 = *(long **)(local_40 + local_48);
          plVar1 = plVar2 + 2;
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
          }
        }
        *(undefined8 *)(lVar5 + lVar4) = 0;
        ((undefined8 *)(lVar5 + lVar4))[1] = 0;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x1a8] = 0;
  _ZdlPv((void *)param_1[0x1a7]);
  param_1[0x1a4] = 0;
  _ZdlPv((void *)param_1[0x1a3]);
  param_1[0x1a1] = 0;
  _ZdlPv((void *)param_1[0x1a0]);
  recovered_10004980(param_1 + 0x19d);
  param_1[0x19a] = 0;
  _ZdlPv((void *)param_1[0x199]);
  param_1[0x197] = 0;
  _ZdlPv((void *)param_1[0x196]);
  lVar3 = param_1[0x194];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x50;
    do {
      lVar4 = lVar4 + -0x50;
      recovered_10004a30((undefined8 *)(param_1[0x193] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x194] = 0;
  _ZdlPv((void *)param_1[0x193]);
  param_1[399] = 0;
  _ZdlPv((void *)param_1[0x18e]);
  param_1[0x18c] = 0;
  _ZdlPv((void *)param_1[0x18b]);
  lVar3 = param_1[0x189];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0xf0 + -0xe8;
    do {
      recovered_10004b50((long *)(param_1[0x188] + lVar4));
      lVar4 = lVar4 + -0xf0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x189] = 0;
  _ZdlPv((void *)param_1[0x188]);
  plVar1 = (long *)param_1[0x184];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_a0 = 3;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      param_1 = local_38;
      plVar2 = (long *)local_38[0x184];
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
    param_1[0x184] = 0;
    param_1[0x185] = 0;
  }
  plVar1 = (long *)param_1[0x182];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_a0 = 4;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      param_1 = local_38;
      plVar2 = (long *)local_38[0x182];
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
    param_1[0x182] = 0;
    param_1[0x183] = 0;
  }
  _ZdlPv((void *)param_1[0x17c]);
  param_1[0x178] = 0;
  _ZdlPv((void *)param_1[0x177]);
  param_1[0x39] = 0;
  _ZdlPv((void *)param_1[0x38]);
  param_1[0x36] = 0;
  _ZdlPv((void *)param_1[0x35]);
  lVar3 = param_1[0x33];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x20;
    do {
      lVar4 = lVar4 + -0x20;
      _ZdlPv(*(void **)(param_1[0x32] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x33] = 0;
  _ZdlPv((void *)param_1[0x32]);
  lVar3 = param_1[0x30];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      recovered_10004df0((long *)(param_1[0x2f] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x30] = 0;
  _ZdlPv((void *)param_1[0x2f]);
  param_1[0x2d] = 0;
  _ZdlPv((void *)param_1[0x2c]);
  param_1[0x2a] = 0;
  _ZdlPv((void *)param_1[0x29]);
  lVar3 = param_1[0x24];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      lVar5 = param_1[0x23];
      recovered_10004cb0((long *)(lVar5 + lVar4));
      _ZdlPv(*(void **)(lVar5 + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x24] = 0;
  _ZdlPv((void *)param_1[0x23]);
  lVar3 = param_1[0x21];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      lVar5 = param_1[0x20];
      recovered_10004cb0((long *)(lVar5 + lVar4));
      _ZdlPv(*(void **)(lVar5 + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x21] = 0;
  _ZdlPv((void *)param_1[0x20]);
  lVar3 = param_1[0x1e];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      lVar5 = param_1[0x1d];
      recovered_10004cb0((long *)(lVar5 + lVar4));
      _ZdlPv(*(void **)(lVar5 + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x1e] = 0;
  _ZdlPv((void *)param_1[0x1d]);
  recovered_10004cb0(param_1 + 0x1a);
  _ZdlPv((void *)param_1[0x1a]);
  param_1[0x17] = 0;
  _ZdlPv((void *)param_1[0x16]);
  param_1[0x14] = 0;
  _ZdlPv((void *)param_1[0x13]);
  lVar3 = param_1[0x11];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x20 + -8;
    do {
      lVar5 = param_1[0x10];
      plVar1 = *(long **)(lVar5 + lVar4);
      if (plVar1 != (long *)0x0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 8)))(plVar1);
      }
      _ZdlPv(*(void **)(lVar5 + -0x18 + lVar4));
      lVar4 = lVar4 + -0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x11] = 0;
  _ZdlPv((void *)param_1[0x10]);
  param_1[0xe] = 0;
  _ZdlPv((void *)param_1[0xd]);
  recovered_10004df0(param_1 + 10);
  param_1[7] = 0;
  _ZdlPv((void *)param_1[6]);
  param_1[4] = 0;
  _ZdlPv((void *)param_1[3]);
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x20;
    do {
      lVar4 = lVar4 + -0x20;
      _ZdlPv(*(void **)(*param_1 + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_a8);
  return;
}

#undef DAT_100051e4
#undef DAT_10006000
#undef LAB_10004933
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

void recovered_10004980(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;

  lVar5 = param_1[1];
  if (lVar5 != 0) {
    lVar6 = lVar5 * 0x40 + -0x10;
    do {
      lVar3 = *param_1;
      plVar4 = *(long **)(lVar3 + -8 + lVar6);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 2;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (plVar4[1] == 0)) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar4 + 8)))(plVar4);
        }
        puVar2 = (undefined8 *)(lVar3 + -8 + lVar6);
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      plVar4 = *(long **)(lVar3 + -0x18 + lVar6);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 2;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (plVar4[1] == 0)) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar4 + 8)))(plVar4);
        }
        puVar2 = (undefined8 *)(lVar3 + -0x18 + lVar6);
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      _ZdlPv(*(void **)(lVar3 + -0x30 + lVar6));
      lVar6 = lVar6 + -0x40;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return;
}


#undef DAT_100051f8
#define DAT_100051f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d4U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10004b1d
#define LAB_10004b1d (*(uint8_t *)(0x10004b1dU))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a30
 */

void recovered_10004a30(undefined8 *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  plVar1 = (long *)param_1[5];
  local_70 = DAT_10006000;
  local_68 = &DAT_100051f8;
  local_58 = &LAB_10004b1d;
  _Unwind_SjLj_Register(&local_90);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 1;
      local_38 = param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      param_1 = local_38;
      plVar2 = (long *)local_38[5];
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 2;
      local_38 = param_1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar1 + 0x10)))(plVar1);
      param_1 = local_38;
      plVar2 = (long *)local_38[3];
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
      }
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_100051f8
#undef DAT_10006000
#undef LAB_10004b1d
#undef local_90
#undef auStack_98
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b50
 */

void recovered_10004b50(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;

  param_1[0x18] = 0;
  _ZdlPv((void *)param_1[0x17]);
  param_1[0x15] = 0;
  _ZdlPv((void *)param_1[0x14]);
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x20;
    do {
      lVar4 = lVar4 + -0x20;
      _ZdlPv(*(void **)(param_1[0x11] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0x12] = 0;
  _ZdlPv((void *)param_1[0x11]);
  recovered_10004df0(param_1 + 0xe);
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      _ZdlPv(*(void **)(param_1[0xb] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[0xc] = 0;
  _ZdlPv((void *)param_1[0xb]);
  recovered_10004df0(param_1 + 7);
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x18;
    do {
      lVar4 = lVar4 + -0x18;
      _ZdlPv(*(void **)(param_1[4] + lVar4));
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[5] = 0;
  _ZdlPv((void *)param_1[4]);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 2;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (plVar2[1] == 0)) {
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)plVar2 + 8)))(plVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


#undef DAT_10005208
#define DAT_10005208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10004dbb
#define LAB_10004dbb (*(uint8_t *)(0x10004dbbU))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 32))
#define local_88 (*(undefined8 *)(pf_stack_frame + 56))
#define local_80 (*(undefined * *)(pf_stack_frame + 64))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(long *)(pf_stack_frame + 112))
#define local_48 (*(long *)(pf_stack_frame + 120))
#define local_40 (*(long *)(pf_stack_frame + 128))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb0
 */

void recovered_10004cb0(long *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;

  local_78 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_68 = (undefined1 *)&local_a8;
  lVar3 = param_1[1];
  local_88 = DAT_10006000;
  local_80 = &DAT_10005208;
  local_70 = &LAB_10004dbb;
  _Unwind_SjLj_Register(&local_a8);
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x40 + -0x20;
    local_38 = param_1;
    do {
      lVar2 = *param_1;
      uVar1 = *(ulong *)(lVar2 + 0x18 + lVar4);
      if (1 < uVar1) {
        if (uVar1 != 2) {
          if (uVar1 != 3) {
            if ((uVar1 & 0xfffffffffffffffe) != 4) {
              local_a0 = 1;
              local_50 = lVar3;
              local_48 = lVar4;
              local_40 = lVar2;
              recovered_10003fc0(uVar1,(long *)(lVar2 + lVar4));
              param_1 = local_38;
              lVar2 = local_40;
              lVar3 = local_50;
              lVar4 = local_48;
            }
            goto LAB_10004d31;
          }
          *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
        }
        _ZdlPv(*(void **)(lVar2 + lVar4));
      }
LAB_10004d31:
      _ZdlPv(*(void **)(lVar2 + -0x20 + lVar4));
      lVar4 = lVar4 + -0x40;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[1] = 0;
  _Unwind_SjLj_Unregister(&local_a8);
  return;
}

#undef DAT_10005208
#undef DAT_10006000
#undef LAB_10004dbb
#undef local_a8
#undef local_a0
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_10005218
#define DAT_10005218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2f4U)))
#undef DAT_10006000
#define DAT_10006000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10dcU)))
#undef LAB_10004ef1
#define LAB_10004ef1 (*(uint8_t *)(0x10004ef1U))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_48 (*(long *)(pf_stack_frame + 120))
#define local_40 (*(long *)(pf_stack_frame + 128))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_80 (*(undefined8 *)(pf_stack_frame + 64))
#define local_78 (*(undefined * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df0
 */

void recovered_10004df0(long *param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_60 = auStack_a8;
  lVar3 = param_1[1];
  local_80 = DAT_10006000;
  local_78 = &DAT_10005218;
  local_68 = &LAB_10004ef1;
  _Unwind_SjLj_Register(&local_a0);
  if (lVar3 != 0) {
    lVar4 = lVar3 * 0x28 + -0x20;
    local_38 = param_1;
    do {
      lVar1 = *param_1;
      uVar2 = *(ulong *)(lVar1 + 0x18 + lVar4);
      if (1 < uVar2) {
        if (uVar2 != 2) {
          if (uVar2 != 3) {
            if ((uVar2 & 0xfffffffffffffffe) != 4) {
              local_98 = 1;
              local_48 = lVar3;
              local_40 = lVar4;
              recovered_10003fc0(uVar2,(long *)(lVar1 + lVar4));
              param_1 = local_38;
              lVar3 = local_48;
              lVar4 = local_40;
            }
            goto LAB_10004e71;
          }
          *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
        }
        _ZdlPv(*(void **)(lVar1 + lVar4));
      }
LAB_10004e71:
      lVar4 = lVar4 + -0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_a0);
  return;
}

#undef DAT_10005218
#undef DAT_10006000
#undef LAB_10004ef1
#undef local_60
#undef local_48
#undef local_40
#undef local_38
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef auStack_a8
#undef local_68
