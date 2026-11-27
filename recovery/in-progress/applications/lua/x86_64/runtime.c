/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002ae0
#define DAT_10002ae0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a5U)))
#undef DAT_10002bbb
#define DAT_10002bbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10002bcb
#define DAT_10002bcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_10002bd0
#define DAT_10002bd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_10002bd4
#define DAT_10002bd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef LAB_10001b7e
#define LAB_10001b7e (*(uint8_t *)(0x10001b7eU))
#undef str_10002bbc
#define str_10002bbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x281U)))
#undef str_10002bc3
#define str_10002bc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
#undef str_10002bd7
#define str_10002bd7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_10002be1
#define str_10002be1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a6U)))
#undef str_10002beb
#define str_10002beb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b0U)))
#undef str_10002c18
#define str_10002c18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_10002c26
#define str_10002c26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ebU)))
#define lStack_190 (*(long *)(pf_stack_frame + 4192))
#define uStack_170 (*(undefined8 *)(pf_stack_frame + 4224))
#define uStack_158 (*(ulong *)(pf_stack_frame + 4248))
#define uStack_148 (*(undefined8 *)(pf_stack_frame + 4264))
#define uStack_140 (*(undefined8 *)(pf_stack_frame + 4272))
#define uStack_120 (*(undefined8 *)(pf_stack_frame + 4304))
#define uStack_f8 (*(ulong *)(pf_stack_frame + 4344))
#define uStack_e8 (*(undefined8 *)(pf_stack_frame + 4360))
#define uStack_e0 (*(undefined8 *)(pf_stack_frame + 4368))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 4392))
#define uStack_a8 (*(ulong *)(pf_stack_frame + 4424))
#define local_11d8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_11c8 (*(ulong (*)[569])(pf_stack_frame + 40))
#define local_11b0 (*(ulong *)(pf_stack_frame + 64))
#define local_11a8 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_11a0 (*(ulong *)(pf_stack_frame + 80))
#define local_1190 (*(byte *)(pf_stack_frame + 96))
#define local_1d8 (*(void * *)(pf_stack_frame + 4120))
#define local_1c8 (*(undefined8 *)(pf_stack_frame + 4136))
#define local_1c0 (*(ulong *)(pf_stack_frame + 4144))
#define local_1b8 (*(undefined1 * *)(pf_stack_frame + 4152))
#define local_1a8 (*(undefined8 *)(pf_stack_frame + 4168))
#define local_198 (*(void * *)(pf_stack_frame + 4184))
#define local_188 (*(undefined8 *)(pf_stack_frame + 4200))
#define local_180 (*(char *)(pf_stack_frame + 4208))
#define local_178 (*(undefined1 * *)(pf_stack_frame + 4216))
#define local_168 (*(undefined8 *)(pf_stack_frame + 4232))
#define local_160 (*(char * *)(pf_stack_frame + 4240))
#define local_150 (*(long *)(pf_stack_frame + 4256))
#define local_138 (*(ulong *)(pf_stack_frame + 4280))
#define local_130 (*(void * *)(pf_stack_frame + 4288))
#define local_128 (*(undefined8 *)(pf_stack_frame + 4296))
#define local_118 (*(ulong *)(pf_stack_frame + 4312))
#define local_110 (*(undefined8 *)(pf_stack_frame + 4320))
#define local_108 (*(ulong *)(pf_stack_frame + 4328))
#define local_100 (*(char * *)(pf_stack_frame + 4336))
#define local_f0 (*(long *)(pf_stack_frame + 4352))
#define local_d8 (*(ulong *)(pf_stack_frame + 4376))
#define local_d0 (*(void * *)(pf_stack_frame + 4384))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 4400))
#define local_b8 (*(ulong *)(pf_stack_frame + 4408))
#define local_b0 (*(char * *)(pf_stack_frame + 4416))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 4432))
#define local_98 (*(ulong *)(pf_stack_frame + 4440))
#define local_90 (*(undefined8 *)(pf_stack_frame + 4448))
#define local_88 (*(undefined4 *)(pf_stack_frame + 4456))
#define local_70 (*(undefined8 *)(pf_stack_frame + 4480))
#define local_68 (*(undefined * *)(pf_stack_frame + 4488))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 4496))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 4504))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 4512))
#define local_38 (*(undefined8 *)(pf_stack_frame + 4536))
#define uStack_11d0 (*(ulong *)(pf_stack_frame + 32))
#define uStack_1d0 (*(undefined8 *)(pf_stack_frame + 4128))
#define uStack_1b0 (*(ulong *)(pf_stack_frame + 4160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000670
 */

ulong recovered_10000670(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[4624] __attribute__((aligned(16))) = {0};

  byte bVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte bVar10;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 4592) + -8);
  local_50 = (undefined1 *)&local_11d8;
  local_198 = (void *)0x0;
  lStack_190 = 0;
  local_188 = 0;
  local_180 = (int)param_1 < 2;
  local_70 = DAT_10003000;
  local_68 = &DAT_10002ae0;
  local_58 = &LAB_10001b7e;
  local_108 = param_2;
  _Unwind_SjLj_Register(&local_90);
  if (param_2 != 0 && 1 < (int)param_1) {
    uVar5 = 1;
    local_1c0 = (ulong)param_1;
LAB_1000077c:
    puVar8 = *(undefined1 **)(local_108 + uVar5 * 8);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_10002bbb;
    }
    local_100 = (char *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      lVar2 = uVar7 + 1;
      uVar7 = uVar7 + 1;
    } while (puVar8[lVar2] != '\0');
    local_88 = 1;
    local_98 = uVar5;
    recovered_10001d00((long *)&local_100,(long)puVar8,uVar7);
    pcVar9 = local_100;
    if (local_100 == (char *)0x0) {
      pcVar9 = &DAT_10002bbb;
    }
    if (uStack_f8 != 0) {
      uVar5 = 0;
      do {
        if (pcVar9[uVar5] == '=') {
          if (uVar5 != 0xffffffffffffffff) {
            uVar7 = uStack_f8;
            if (uVar5 <= uStack_f8) {
              uVar7 = uVar5;
            }
            local_160 = (char *)0x0;
            uStack_158 = 0;
            local_150 = 0;
            local_88 = 2;
            local_38 = uVar5;
            recovered_10001d00((long *)&local_160,(long)pcVar9,uVar7);
            uVar5 = local_38 + 1;
            if (uStack_f8 < local_38 + 1) {
              uVar5 = uStack_f8;
            }
            pcVar9 = local_100;
            if (local_100 == (char *)0x0) {
              pcVar9 = &DAT_10002bbb;
            }
            local_b0 = (char *)0x0;
            uStack_a8 = 0;
            local_a0 = 0;
            local_88 = 3;
            recovered_10001d00((long *)&local_b0,(long)(pcVar9 + uVar5),uStack_f8 - uVar5);
            local_38 = uStack_158;
            local_11d8 = (void *)0x0;
            uStack_11d0 = 0;
            local_11c8[0] = 0;
            local_88 = 4;
            recovered_10001d00(&local_11d8,((uintptr_t)pf_module_state + 0x281U),6);
            uVar5 = uStack_11d0;
            _ZdlPv(local_11d8);
            if (local_38 != uVar5) goto LAB_10000994;
            if (uStack_158 == 0) goto LAB_10000705;
            pcVar9 = local_160;
            if (local_160 == (char *)0x0) {
              pcVar9 = &DAT_10002bbb;
            }
            uVar5 = 0;
            goto LAB_10000950;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uStack_f8 != uVar5);
    }
    goto LAB_10000760;
  }
LAB_10000d03:
  local_88 = 10;
  _ZN6winter3lua5LuaVMC1Ev(&local_110);
  if (local_180 == '\x01') {
    local_88 = 0xb;
    wm_lua_show_banner();
    local_88 = 0xc;
    wm_lua_show_help();
    local_100 = (char *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_88 = 0xd;
    recovered_10001d00((long *)&local_100,((uintptr_t)pf_module_state + 0x29cU),9);
    local_88 = 0xe;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)&local_11d8,&local_110,&local_100);
    _ZdlPv(local_100);
    if ((byte)local_11d8 == '\x01') {
      local_88 = 0xf;
      wm_lua_write(str_10002be1,9);
      local_88 = 0x10;
      wm_lua_write(str_10002bd7,9);
      local_88 = 0x11;
      wm_lua_writeline();
      if ((char)uStack_11d0 != '\0') {
        local_88 = 0x12;
        _ZNK6winter3lua8LuaValue8toStringEv((long *)&local_100,(undefined1 *)&uStack_11d0);
        pcVar9 = &DAT_10002bbb;
        if (local_100 != (char *)0x0) {
          pcVar9 = local_100;
        }
        local_88 = 0x13;
        wm_lua_write(pcVar9,uStack_f8);
        local_88 = 0x14;
        wm_lua_writeline();
        _ZdlPv(local_100);
      }
    }
    else {
      puVar8 = &DAT_10002bbb;
      if (local_11a8 != (undefined1 *)0x0) {
        puVar8 = local_11a8;
      }
      if (0x12 < local_11a0) {
        uVar5 = 0;
        do {
          if (((((((puVar8[uVar5] == 'f') && (puVar8[uVar5 + 1] == 'a')) &&
                 (puVar8[uVar5 + 2] == 'i')) &&
                ((puVar8[uVar5 + 3] == 'l' && (puVar8[uVar5 + 4] == 'e')))) &&
               (puVar8[uVar5 + 5] == 'd')) &&
              (((puVar8[uVar5 + 6] == ' ' && (puVar8[uVar5 + 7] == 't')) &&
               ((puVar8[uVar5 + 8] == 'o' &&
                (((puVar8[uVar5 + 9] == ' ' && (puVar8[uVar5 + 10] == 'o')) &&
                 (puVar8[uVar5 + 0xb] == 'p')))))))) &&
             (((puVar8[uVar5 + 0xc] == 'e' && (puVar8[uVar5 + 0xd] == 'n')) &&
              ((puVar8[uVar5 + 0xe] == ' ' &&
               (((puVar8[uVar5 + 0xf] == 'f' && (puVar8[uVar5 + 0x10] == 'i')) &&
                ((puVar8[uVar5 + 0x11] == 'l' && (puVar8[uVar5 + 0x12] == 'e')))))))))) {
            if (uVar5 != 0xffffffffffffffff) goto LAB_10000f46;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= local_11a0 - 0x13);
        if (0x19 < local_11a0) {
          uVar5 = 0;
          do {
            if ((((((((puVar8[uVar5] == 'u') && (puVar8[uVar5 + 1] == 'n')) &&
                    (puVar8[uVar5 + 2] == 'a')) &&
                   ((puVar8[uVar5 + 3] == 'b' && (puVar8[uVar5 + 4] == 'l')))) &&
                  (((puVar8[uVar5 + 5] == 'e' &&
                    ((puVar8[uVar5 + 6] == ' ' && (puVar8[uVar5 + 7] == 't')))) &&
                   (puVar8[uVar5 + 8] == 'o')))) &&
                 (((((puVar8[uVar5 + 9] == ' ' && (puVar8[uVar5 + 10] == 'o')) &&
                    (puVar8[uVar5 + 0xb] == 'p')) &&
                   ((puVar8[uVar5 + 0xc] == 'e' && (puVar8[uVar5 + 0xd] == 'n')))) &&
                  ((puVar8[uVar5 + 0xe] == ' ' &&
                   ((puVar8[uVar5 + 0xf] == 's' && (puVar8[uVar5 + 0x10] == 'c')))))))) &&
                ((puVar8[uVar5 + 0x11] == 'r' &&
                 (((puVar8[uVar5 + 0x12] == 'i' && (puVar8[uVar5 + 0x13] == 'p')) &&
                  (puVar8[uVar5 + 0x14] == 't')))))) &&
               (((puVar8[uVar5 + 0x15] == ' ' && (puVar8[uVar5 + 0x16] == 'f')) &&
                ((puVar8[uVar5 + 0x17] == 'i' &&
                 ((puVar8[uVar5 + 0x18] == 'l' && (puVar8[uVar5 + 0x19] == 'e')))))))) {
              if (uVar5 != 0xffffffffffffffff) goto LAB_10000f46;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 <= local_11a0 - 0x1a);
        }
      }
      local_88 = 0x15;
      recovered_10001fb0((char *)&local_11d8,str_10002beb);
    }
LAB_10000f46:
    _ZdlPv(local_11a8);
    if (3 < local_11b0) {
      local_88 = 0x16;
      recovered_10002290(local_11b0,(long *)local_11c8);
    }
  }
  if (lStack_190 == 0) {
    local_108 = CONCAT44(PF_PART4(local_108, 4),1);
    local_1190 = 0;
  }
  else {
    local_88 = 0x17;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)&local_11d8,&local_110,&local_198);
    pcVar9 = (char *)0x0;
    if ((byte)local_11d8 == '\0') {
      pcVar9 = str_10002c18;
    }
    local_88 = 0x18;
    recovered_10001fb0((char *)&local_11d8,pcVar9);
    local_108 = CONCAT44(PF_PART4(local_108, 4),(uint)(byte)local_11d8);
    _ZdlPv(local_11a8);
    if (3 < local_11b0) {
      local_88 = 0x19;
      local_98 = CONCAT44(PF_PART4(local_98, 4),(uint)local_1190);
      recovered_10002290(local_11b0,(long *)local_11c8);
      local_1190 = (byte)local_98;
    }
  }
  if ((local_180 == '\x01') && (local_1190 == 0)) {
    do {
      local_88 = 0x1a;
      bVar4 = wm_lua_readline((long)&local_11d8,0x1000,str_10002c26,1);
      if (!bVar4) break;
      local_100 = (char *)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      uVar5 = 0xffffffffffffffff;
      do {
        lVar2 = uVar5 - 0xf;
        uVar5 = uVar5 + 1;
      } while (*(char *)((long)local_11c8 + lVar2) != '\0');
      local_88 = 0x1b;
      recovered_10001d00((long *)&local_100,(long)&local_11d8,uVar5);
      pcVar9 = local_100;
      if (local_100 == (char *)0x0) {
        pcVar9 = &DAT_10002bbb;
      }
      if (uStack_f8 == 5) {
        if ((((*pcVar9 == '.') && (pcVar9[1] == 'e')) && (pcVar9[2] == 'x')) && (pcVar9[3] == 'i'))
        {
          cVar3 = pcVar9[4];
joined_r0x1000117b:
          if (cVar3 == 't') {
            _ZdlPv(local_100);
            break;
          }
        }
      }
      else if (uStack_f8 == 4) {
        if (*pcVar9 == 'q') {
          if (pcVar9[1] == 'u') goto LAB_10001188;
        }
        else if ((*pcVar9 == 'e') && (pcVar9[1] == 'x')) {
LAB_10001188:
          if (pcVar9[2] == 'i') {
            cVar3 = pcVar9[3];
            goto joined_r0x1000117b;
          }
        }
      }
      _ZdlPv(local_100);
      local_100 = (char *)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      uVar5 = 0xffffffffffffffff;
      do {
        lVar2 = uVar5 - 0xf;
        uVar5 = uVar5 + 1;
      } while (*(char *)((long)local_11c8 + lVar2) != '\0');
      local_88 = 0x1c;
      recovered_10001d00((long *)&local_100,(long)&local_11d8,uVar5);
      pcVar9 = local_100;
      if (local_100 == (char *)0x0) {
        pcVar9 = &DAT_10002bbb;
      }
      if (((uStack_f8 == 5) && (*pcVar9 == ':')) &&
         ((pcVar9[1] == 'h' && (((pcVar9[2] == 'e' && (pcVar9[3] == 'l')) && (pcVar9[4] == 'p'))))))
      {
LAB_100012d9:
        _ZdlPv(local_100);
        local_88 = 0x1e;
        wm_lua_show_help();
      }
      else {
        local_160 = (char *)0x0;
        uStack_158 = 0;
        local_150 = 0;
        uVar5 = 0xffffffffffffffff;
        do {
          lVar2 = uVar5 - 0xf;
          uVar5 = uVar5 + 1;
        } while (*(char *)((long)local_11c8 + lVar2) != '\0');
        local_88 = 0x1d;
        recovered_10001d00((long *)&local_160,(long)&local_11d8,uVar5);
        pcVar9 = local_160;
        if (local_160 == (char *)0x0) {
          pcVar9 = &DAT_10002bbb;
        }
        if ((((uStack_158 == 6) && (*pcVar9 == 'h')) &&
            ((pcVar9[1] == 'e' && ((pcVar9[2] == 'l' && (pcVar9[3] == 'p')))))) &&
           ((pcVar9[4] == '(' && (pcVar9[5] == ')')))) {
          _ZdlPv(local_160);
          goto LAB_100012d9;
        }
        _ZdlPv(local_160);
        _ZdlPv(local_100);
        if ((byte)local_11d8 != '\0') {
          local_b0 = (char *)0x0;
          uStack_a8 = 0;
          local_a0 = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            lVar2 = uVar5 - 0xf;
            uVar5 = uVar5 + 1;
          } while (*(char *)((long)local_11c8 + lVar2) != '\0');
          local_88 = 0x1f;
          recovered_10001d00((long *)&local_b0,(long)&local_11d8,uVar5);
          local_100 = (char *)((ulong)local_100 & 0xffffffffffffff00);
          local_88 = 0x20;
          _ZN6winter3lua8LuaValueC1Ev((undefined1 *)&uStack_f8);
          local_d0 = (void *)0x0;
          uStack_c8 = 0;
          local_c0 = 0;
          local_b8 = (local_b8 >> 8 & 0xffffff) << 8;
          if (uStack_a8 == 0) {
LAB_10001530:
            local_178 = (undefined1 *)0x0;
            uStack_170 = 0;
            local_168 = 0;
            local_88 = 0x28;
            recovered_10001d00((long *)&local_178,((uintptr_t)pf_module_state + 0x2ffU),7);
            local_88 = 0x29;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)&local_160,&local_110,&local_b0,&local_178);
            local_100 = (char *)CONCAT71(PF_PART7(local_100, 1),PF_PART1(local_160, 0));
            uStack_f8 = CONCAT71(PF_PART7(uStack_f8, 1),(undefined1)uStack_158);
            if (3 < local_d8) {
              local_88 = 0x2a;
              recovered_10002290(local_d8,&local_f0);
            }
            local_d8 = local_138;
            switch((uintptr_t)(local_138)) {
            case 0:
              break;
            case 1:
              local_f0 = local_150;
              break;
            case 2:
              local_f0 = local_150;
              break;
            case 3:
              local_f0 = CONCAT71(PF_PART7(local_f0, 1),(undefined1)local_150);
              break;
            case 4:
              local_f0 = local_150;
              uStack_e8 = uStack_148;
              uStack_e0 = uStack_140;
              local_150 = 0;
              uStack_148 = 0;
              uStack_140 = 0;
              break;
            default:
              if (local_138 - 5 < 3) {
                local_f0 = local_150;
                uStack_e8 = uStack_148;
                local_150 = 0;
                uStack_148 = 0;
              }
            }
            _ZdlPv(local_d0);
            local_d0 = local_130;
            uStack_c8 = local_128;
            local_c0 = uStack_120;
            local_130 = (void *)0x0;
            local_128 = 0;
            uStack_120 = 0;
            local_b8 = local_118;
            _ZdlPv((void *)0x0);
            if (3 < local_138) {
              local_88 = 0x2b;
              recovered_10002290(local_138,&local_150);
            }
            puVar8 = local_178;
          }
          else {
            pcVar9 = local_b0;
            if (local_b0 == (char *)0x0) {
              pcVar9 = &DAT_10002bbb;
            }
            if (*pcVar9 != '=') goto LAB_10001530;
            local_1b8 = (undefined1 *)0x0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            local_88 = 0x21;
            recovered_10001d00((long *)&local_1b8,(long)(pcVar9 + 1),uStack_a8 - 1);
            local_178 = (undefined1 *)0x0;
            uStack_170 = 0;
            local_168 = 0;
            local_88 = 0x22;
            recovered_10001d00((long *)&local_178,((uintptr_t)pf_module_state + 0x2f7U),7);
            puVar8 = local_1b8;
            if (local_1b8 == (undefined1 *)0x0) {
              puVar8 = &DAT_10002bbb;
            }
            local_88 = 0x23;
            recovered_100024a0((long *)&local_178,(long)puVar8,uStack_1b0);
            local_1d8 = (void *)0x0;
            uStack_1d0 = 0;
            local_1c8 = 0;
            local_88 = 0x24;
            recovered_10001d00((long *)&local_1d8,((uintptr_t)pf_module_state + 0x2ffU),7);
            local_88 = 0x25;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)&local_160,&local_110,&local_178,&local_1d8);
            local_100 = (char *)CONCAT71(PF_PART7(local_100, 1),PF_PART1(local_160, 0));
            uStack_f8 = CONCAT71(PF_PART7(uStack_f8, 1),(undefined1)uStack_158);
            if (3 < local_d8) {
              local_88 = 0x26;
              recovered_10002290(local_d8,&local_f0);
            }
            local_d8 = local_138;
            switch((uintptr_t)(local_138)) {
            case 0:
              break;
            case 1:
              local_f0 = local_150;
              break;
            case 2:
              local_f0 = local_150;
              break;
            case 3:
              local_f0 = CONCAT71(PF_PART7(local_f0, 1),(undefined1)local_150);
              break;
            case 4:
              local_f0 = local_150;
              uStack_e8 = uStack_148;
              uStack_e0 = uStack_140;
              local_150 = 0;
              uStack_148 = 0;
              uStack_140 = 0;
              break;
            default:
              if (local_138 - 5 < 3) {
                local_f0 = local_150;
                uStack_e8 = uStack_148;
                local_150 = 0;
                uStack_148 = 0;
              }
            }
            _ZdlPv(local_d0);
            local_d0 = local_130;
            uStack_c8 = local_128;
            local_c0 = uStack_120;
            local_130 = (void *)0x0;
            local_128 = 0;
            uStack_120 = 0;
            local_b8 = local_118;
            _ZdlPv((void *)0x0);
            if (3 < local_138) {
              local_88 = 0x27;
              recovered_10002290(local_138,&local_150);
            }
            _ZdlPv(local_1d8);
            _ZdlPv(local_178);
            puVar8 = local_1b8;
          }
          _ZdlPv(puVar8);
          local_88 = 0x2c;
          recovered_10001fb0((char *)&local_100,(char *)0x0);
          cVar3 = (char)local_b8;
          _ZdlPv(local_d0);
          if (3 < local_d8) {
            local_88 = 0x2d;
            local_98 = CONCAT71(PF_PART7(local_98, 1),cVar3);
            recovered_10002290(local_d8,&local_f0);
            cVar3 = (byte)local_98;
          }
          _ZdlPv(local_b0);
          if (cVar3 != '\0') break;
        }
      }
    } while (local_180 != '\0');
  }
  _ZN6winter3lua5LuaVMD1Ev(&local_110);
  _ZdlPv(local_198);
  local_88 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_90);
  return local_108 & 0xffffffff;
  while (uVar5 = uVar5 + 1, uStack_158 != uVar5) {
LAB_10000950:
    bVar6 = pcVar9[uVar5];
    bVar1 = str_10002bbc[uVar5];
    bVar10 = bVar6 | 0x20;
    if (0x19 < (byte)(bVar6 + 0xbf)) {
      bVar10 = bVar6;
    }
    bVar6 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar6 = bVar1;
    }
    if (bVar10 != bVar6) goto LAB_10000994;
  }
LAB_10000705:
  pcVar9 = local_b0;
  if (local_b0 == (char *)0x0) {
    pcVar9 = &DAT_10002bbb;
  }
  local_88 = 5;
  recovered_10001d00((long *)&local_198,(long)pcVar9,uStack_a8);
  goto LAB_10000734;
LAB_10000994:
  local_38 = uStack_158;
  local_11d8 = (void *)0x0;
  uStack_11d0 = 0;
  local_11c8[0] = 0;
  local_88 = 6;
  recovered_10001d00(&local_11d8,((uintptr_t)pf_module_state + 0x288U),7);
  uVar5 = uStack_11d0;
  _ZdlPv(local_11d8);
  if (local_38 != uVar5) goto LAB_10000734;
  if (uStack_158 != 0) {
    pcVar9 = local_160;
    if (local_160 == (char *)0x0) {
      pcVar9 = &DAT_10002bbb;
    }
    uVar5 = 0;
    do {
      bVar6 = pcVar9[uVar5];
      bVar1 = str_10002bc3[uVar5];
      bVar10 = bVar6 | 0x20;
      if (0x19 < (byte)(bVar6 + 0xbf)) {
        bVar10 = bVar6;
      }
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      if (bVar10 != bVar6) goto LAB_10000734;
      uVar5 = uVar5 + 1;
    } while (uStack_158 != uVar5);
  }
  local_38 = uStack_a8;
  local_11d8 = (void *)0x0;
  uStack_11d0 = 0;
  local_11c8[0] = 0;
  local_88 = 7;
  recovered_10001d00(&local_11d8,((uintptr_t)pf_module_state + 0x290U),4);
  uVar5 = uStack_11d0;
  _ZdlPv(local_11d8);
  if (local_38 == uVar5) {
    cVar3 = '\x01';
    if (uStack_a8 != 0) {
      pcVar9 = local_b0;
      if (local_b0 == (char *)0x0) {
        pcVar9 = &DAT_10002bbb;
      }
      uVar5 = 0;
      do {
        bVar6 = pcVar9[uVar5];
        bVar1 = (&DAT_10002bcb)[uVar5];
        bVar10 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar10 = bVar6;
        }
        bVar6 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar6 = bVar1;
        }
        if (bVar10 != bVar6) goto LAB_10000b47;
        uVar5 = uVar5 + 1;
      } while (uStack_a8 != uVar5);
    }
  }
  else {
LAB_10000b47:
    if (uStack_a8 == 1) {
      pcVar9 = local_b0;
      if (local_b0 == (char *)0x0) {
        pcVar9 = &DAT_10002bbb;
      }
      cVar3 = '\x01';
      if (*pcVar9 == '1') goto LAB_10000cf8;
    }
    local_38 = uStack_a8;
    local_11d8 = (void *)0x0;
    uStack_11d0 = 0;
    local_11c8[0] = 0;
    local_88 = 8;
    recovered_10001d00(&local_11d8,((uintptr_t)pf_module_state + 0x295U),3);
    uVar5 = uStack_11d0;
    _ZdlPv(local_11d8);
    if (local_38 == uVar5) {
      cVar3 = '\x01';
      if (uStack_a8 != 0) {
        pcVar9 = local_b0;
        if (local_b0 == (char *)0x0) {
          pcVar9 = &DAT_10002bbb;
        }
        uVar5 = 0;
        do {
          bVar6 = pcVar9[uVar5];
          bVar1 = (&DAT_10002bd0)[uVar5];
          bVar10 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar10 = bVar6;
          }
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          if (bVar10 != bVar6) goto LAB_10000c3a;
          uVar5 = uVar5 + 1;
        } while (uStack_a8 != uVar5);
      }
    }
    else {
LAB_10000c3a:
      local_38 = uStack_a8;
      local_11d8 = (void *)0x0;
      uStack_11d0 = 0;
      local_11c8[0] = 0;
      local_88 = 9;
      recovered_10001d00(&local_11d8,((uintptr_t)pf_module_state + 0x299U),2);
      uVar5 = uStack_11d0;
      _ZdlPv(local_11d8);
      if (local_38 == uVar5) {
        cVar3 = '\x01';
        if (uStack_a8 != 0) {
          pcVar9 = local_b0;
          if (local_b0 == (char *)0x0) {
            pcVar9 = &DAT_10002bbb;
          }
          uVar5 = 0;
          do {
            bVar6 = pcVar9[uVar5];
            bVar1 = (&DAT_10002bd4)[uVar5];
            bVar10 = bVar6 | 0x20;
            if (0x19 < (byte)(bVar6 + 0xbf)) {
              bVar10 = bVar6;
            }
            bVar6 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar6 = bVar1;
            }
            if (bVar10 != bVar6) goto LAB_10000cf6;
            uVar5 = uVar5 + 1;
          } while (uStack_a8 != uVar5);
        }
      }
      else {
LAB_10000cf6:
        cVar3 = '\0';
      }
    }
  }
LAB_10000cf8:
  local_180 = cVar3;
LAB_10000734:
  _ZdlPv(local_b0);
  _ZdlPv(local_160);
LAB_10000760:
  _ZdlPv(local_100);
  uVar5 = local_98 + 1;
  if (uVar5 == local_1c0) goto LAB_10000d03;
  goto LAB_1000077c;
}

#undef DAT_10002ae0
#undef DAT_10002bbb
#undef DAT_10002bcb
#undef DAT_10002bd0
#undef DAT_10002bd4
#undef DAT_10003000
#undef LAB_10001b7e
#undef str_10002bbc
#undef str_10002bc3
#undef str_10002bd7
#undef str_10002be1
#undef str_10002beb
#undef str_10002c18
#undef str_10002c26
#undef lStack_190
#undef uStack_170
#undef uStack_158
#undef uStack_148
#undef uStack_140
#undef uStack_120
#undef uStack_f8
#undef uStack_e8
#undef uStack_e0
#undef uStack_c8
#undef uStack_a8
#undef local_11d8
#undef local_11c8
#undef local_11b0
#undef local_11a8
#undef local_11a0
#undef local_1190
#undef local_1d8
#undef local_1c8
#undef local_1c0
#undef local_1b8
#undef local_1a8
#undef local_198
#undef local_188
#undef local_180
#undef local_178
#undef local_168
#undef local_160
#undef local_150
#undef local_138
#undef local_130
#undef local_128
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef local_f0
#undef local_d8
#undef local_d0
#undef local_c0
#undef local_b8
#undef local_b0
#undef local_a0
#undef local_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38
#undef uStack_11d0
#undef uStack_1d0
#undef uStack_1b0

#undef DAT_10004098
#define DAT_10004098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x175dU)))
#undef _DAT_10004098
#define _DAT_10004098 (*(code * *)(((uintptr_t)pf_module_state + 0x175dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001cc0(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  if (param_1 == (char *)0x0) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x72U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_10004098)();
    return;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
  } while (param_1[lVar1] != '\0');
  wm_lua_write(param_1,lVar2);
  wm_lua_writeline();
  return;
}

#undef DAT_10004098
#undef _DAT_10004098

#define pvStack_50 (*(void * *)(pf_stack_frame + 16))
#define lStack_48 (*(long *)(pf_stack_frame + 24))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf0
 */

void recovered_10001cf0(long param_1)

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
  ulong extraout_RDX;
  ulong uVar9;
  long in_RSI;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  uVar13 = extraout_RDX;
  if (in_RSI == 0) {
    uVar13 = 0;
  }
  puVar8 = *(undefined1 **)param_1;
  if (puVar8 != (undefined1 *)0x0 && in_RSI != 0) {
    uVar11 = in_RSI - (long)puVar8;
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        uVar12 = *(ulong *)(param_1 + 8) - uVar11;
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        pvStack_50 = (void *)0x0;
        lStack_48 = 0;
        lStack_40 = 0;
        recovered_10001d00((long *)&pvStack_50,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = *(void **)param_1;
        *(void **)param_1 = pvStack_50;
        lVar3 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 8) = lStack_48;
        *(long *)(param_1 + 0x10) = lStack_40;
        pvStack_50 = pvVar2;
        lStack_48 = lVar3;
        lStack_40 = lVar4;
        _ZdlPv(pvVar2);
        return;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 <= *(ulong *)(param_1 + 8));
  }
  *(long *)(param_1 + 8) = 0;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (uVar13 == 0) {
    if (*(long *)param_1 == 0) {
      puVar8 = _Znwm(1);
      *puVar8 = 0;
      *(undefined1 **)param_1 = puVar8;
      *(long *)(param_1 + 0x10) = 0;
      return;
    }
    return;
  }
  if (uVar13 <= *(ulong *)(param_1 + 0x10)) goto LAB_10001f26;
  puVar8 = _Znwm(uVar13 + 1);
  *puVar8 = 0;
  pvVar2 = *(void **)param_1;
  uVar11 = *(ulong *)(param_1 + 8);
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
        if (uVar11 == uVar12) goto LAB_10001f0f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_10001ea5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_10001f0f;
    }
LAB_10001ea5:
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
LAB_10001f0f:
  puVar8[uVar11] = 0;
  _ZdlPv(pvVar2);
  *(undefined1 **)param_1 = puVar8;
  *(ulong *)(param_1 + 0x10) = uVar13;
LAB_10001f26:
  uVar11 = (ulong)((uint)uVar13 & 3);
  if (uVar13 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      *(undefined1 *)(*(long *)param_1 + uVar12) = *(undefined1 *)(in_RSI + uVar12);
      *(undefined1 *)(*(long *)param_1 + 1 + uVar12) = *(undefined1 *)(in_RSI + 1 + uVar12);
      *(undefined1 *)(*(long *)param_1 + 2 + uVar12) = *(undefined1 *)(in_RSI + 2 + uVar12);
      *(undefined1 *)(*(long *)param_1 + 3 + uVar12) = *(undefined1 *)(in_RSI + 3 + uVar12);
      uVar12 = uVar12 + 4;
    } while ((uVar13 & 0xfffffffffffffffc) != uVar12);
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)(*(long *)param_1 + uVar12) = *(undefined1 *)(in_RSI + uVar12);
    uVar12 = uVar12 + 1;
  }
  *(ulong *)(param_1 + 8) = extraout_RDX;
  *(undefined1 *)(*(long *)param_1 + extraout_RDX) = 0;
  return;
}

#undef pvStack_50
#undef lStack_48
#undef lStack_40

#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

void recovered_10001d00(long *param_1,long param_2,ulong param_3)

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
        recovered_10001d00((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
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
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10001f26;
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
        if (uVar11 == uVar12) goto LAB_10001f0f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_10001ea5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_10001f0f;
    }
LAB_10001ea5:
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
LAB_10001f0f:
  puVar8[uVar11] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10001f26:
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

#undef local_48
#undef local_38
#undef lStack_40

#undef DAT_10002b58
#define DAT_10002b58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef DAT_10002bbb
#define DAT_10002bbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10002bfa
#define DAT_10002bfa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bfU)))
#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef LAB_10002176
#define LAB_10002176 (*(uint8_t *)(0x10002176U))
#undef str_10002bfd
#define str_10002bfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
#define local_48 (*(char * *)(pf_stack_frame + 120))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
#define lStack_40 (*(long *)(pf_stack_frame + 128))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 32))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_80 (*(undefined8 *)(pf_stack_frame + 64))
#define local_78 (*(undefined * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb0
 */

void recovered_10001fb0(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_60 = auStack_a8;
  cVar1 = *param_1;
  local_80 = DAT_10003000;
  local_78 = &DAT_10002b58;
  local_68 = &LAB_10002176;
  _Unwind_SjLj_Register(&local_a0);
  if (cVar1 == '\x01') {
    if (param_1[8] == '\0') goto LAB_1000215b;
    local_98 = 0xffffffff;
    _ZNK6winter3lua8LuaValue8toStringEv((long *)&local_48,param_1 + 8);
    pcVar5 = &DAT_10002bbb;
    if (local_48 != (char *)0x0) {
      pcVar5 = local_48;
    }
    local_98 = 1;
    wm_lua_write(pcVar5,lStack_40);
    local_98 = 2;
    wm_lua_writeline();
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar4 = -1;
      do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (param_2[lVar2] != '\0');
      local_98 = 0xffffffff;
      wm_lua_write(param_2,lVar4);
      local_98 = 0xffffffff;
      wm_lua_write(&DAT_10002bfa,2);
    }
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (uVar3 == 0) {
      uVar3 = 0x1a;
      pcVar5 = str_10002bfd;
    }
    else {
      pcVar5 = &DAT_10002bbb;
      if (*(char **)(param_1 + 0x30) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 0x30);
      }
    }
    local_38 = 0;
    lStack_40 = 0;
    local_48 = (char *)0x0;
    local_98 = 0xffffffff;
    recovered_10001d00((long *)&local_48,(long)pcVar5,uVar3);
    pcVar5 = &DAT_10002bbb;
    if (local_48 != (char *)0x0) {
      pcVar5 = local_48;
    }
    local_98 = 3;
    wm_lua_write(pcVar5,lStack_40);
    local_98 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_48);
LAB_1000215b:
  _Unwind_SjLj_Unregister(&local_a0);
  return;
}

#undef DAT_10002b58
#undef DAT_10002bbb
#undef DAT_10002bfa
#undef DAT_10003000
#undef LAB_10002176
#undef str_10002bfd
#undef local_48
#undef local_38
#undef lStack_40
#undef local_a0
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef auStack_a8
#undef local_60

#undef DAT_10002b64
#define DAT_10002b64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef LAB_10002257
#define LAB_10002257 (*(uint8_t *)(0x10002257U))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(undefined8 *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021d0
 */

void recovered_100021d0(void *owner)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  _ZdlPv(*(void **)((long)owner + 0x30));
  local_48 = (undefined1 *)&local_88;
  uVar1 = *(ulong *)((long)owner + 0x28);
  local_68 = DAT_10003000;
  local_60 = &DAT_10002b64;
  local_50 = &LAB_10002257;
  local_58 = auStack_40 + 0x38;
  _Unwind_SjLj_Register(&local_88);
  if (3 < uVar1) {
    local_80 = 1;
    recovered_10002290(uVar1,(long *)((long)owner + 0x10));
  }
  _Unwind_SjLj_Unregister(&local_88);
  return;
}

#undef DAT_10002b64
#undef DAT_10003000
#undef LAB_10002257
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef auStack_40

#undef DAT_10002b74
#define DAT_10002b74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef LAB_1000235d
#define LAB_1000235d (*(uint8_t *)(0x1000235dU))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(long * *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002290
 */

void recovered_10002290(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10003000;
  local_68 = &DAT_10002b74;
  local_58 = &LAB_1000235d;
  _Unwind_SjLj_Register(&local_90);
  if (param_1 == 5) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      *plVar2 = *plVar2 + -1;
      if (*plVar2 == 0) {
        local_88 = 1;
        local_38 = param_2;
        (**(code **)(*plVar1 + 0x10))();
        param_2 = local_38;
        plVar2 = (long *)*local_38;
        plVar1 = plVar2 + 2;
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  else if (param_1 == 4) {
    _ZdlPv((void *)*param_2);
  }
  else {
    local_88 = 0xffffffff;
    recovered_10002390(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_10002b74
#undef DAT_10003000
#undef LAB_1000235d
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef auStack_98
#undef local_60
#undef local_58
#undef local_50
#undef local_38

#undef DAT_10002b84
#define DAT_10002b84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x249U)))
#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6c5U)))
#undef LAB_10002463
#define LAB_10002463 (*(uint8_t *)(0x10002463U))
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
 * Address: 0x10002390
 */

void recovered_10002390(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10003000;
  local_68 = &DAT_10002b84;
  local_58 = &LAB_10002463;
  _Unwind_SjLj_Register(&local_90);
  if (param_1 == 7) {
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) goto LAB_10002448;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 2;
      local_38 = param_2;
      (**(code **)(*plVar1 + 0x10))();
      goto LAB_1000242e;
    }
  }
  else {
    if ((param_1 != 6) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) goto LAB_10002448;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 1;
      local_38 = param_2;
      (**(code **)(*plVar1 + 0x10))();
LAB_1000242e:
      param_2 = local_38;
      plVar2 = (long *)*local_38;
      plVar1 = plVar2 + 2;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_10002448:
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_10002b84
#undef DAT_10003000
#undef LAB_10002463
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38
#undef auStack_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024a0
 */

long * recovered_100024a0(long *param_1,long param_2,ulong param_3)

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
LAB_100024e0:
    if (uVar13 != uVar6) goto code_r0x100024e5;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_10002870;
    puVar8 = _Znwm(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_1000284f;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_100027e5;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_100027ba;
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
LAB_100027ba:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_1000284f;
      }
LAB_100027e5:
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
LAB_1000284f:
    puVar8[uVar9] = 0;
    _ZdlPv(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_10002870:
    if (param_3 == 0) goto LAB_1000275e;
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
    goto LAB_1000275b;
  }
  uVar15 = param_1[1];
LAB_100024f3:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_100026b6;
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
        if (uVar6 == uVar13) goto LAB_1000269f;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_10002635;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_1000269f;
    }
LAB_10002635:
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
LAB_1000269f:
  puVar7[uVar6] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_100026b6:
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
LAB_1000275b:
  puVar8 = (undefined1 *)*param_1;
LAB_1000275e:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x100024e5:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_100024f3;
  goto LAB_100024e0;
}

