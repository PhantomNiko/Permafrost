/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002f2b
#define DAT_10002f2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x237U)))
#undef DAT_10002f3b
#define DAT_10002f3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef DAT_10002f40
#define DAT_10002f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24cU)))
#undef DAT_10002f44
#define DAT_10002f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x250U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x314U)))
#undef str_10002f2c
#define str_10002f2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10002f33
#define str_10002f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_10002f47
#define str_10002f47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#undef str_10002f51
#define str_10002f51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_10002f5b
#define str_10002f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x267U)))
#undef str_10002f88
#define str_10002f88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_10002f96
#define str_10002f96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a2U)))
#define local_10ac (*(uint *)(pf_stack_frame + 292))
#define local_10a8 (*(void * *)(pf_stack_frame + 296))
#define local_10a4 (*(undefined4 *)(pf_stack_frame + 300))
#define local_10a0 (*(undefined4 *)(pf_stack_frame + 304))
#define local_109c (*(uint *)(pf_stack_frame + 308))
#define local_1098 (*(undefined4 *)(pf_stack_frame + 312))
#define local_1090 (*(byte * *)(pf_stack_frame + 320))
#define local_108c (*(uint *)(pf_stack_frame + 324))
#define local_1088 (*(undefined4 *)(pf_stack_frame + 328))
#define uStack_106c (*(undefined4 *)(pf_stack_frame + 356))
#define local_1080 (*(int *)(pf_stack_frame + 336))
#define local_107c (*(undefined4 *)(pf_stack_frame + 340))
#define local_1078 (*(undefined4 *)(pf_stack_frame + 344))
#define local_1074 (*(uint *)(pf_stack_frame + 348))
#define local_1070 (*(void * *)(pf_stack_frame + 352))
#define local_1068 (*(undefined4 *)(pf_stack_frame + 360))
#define local_1064 (*(uint *)(pf_stack_frame + 364))
#define local_1060 (*(undefined4 *)(pf_stack_frame + 368))
#define local_1058 (*(byte * *)(pf_stack_frame + 376))
#define local_1054 (*(undefined4 *)(pf_stack_frame + 380))
#define local_1050 (*(undefined4 *)(pf_stack_frame + 384))
#define local_104c (*(char * *)(pf_stack_frame + 388))
#define local_1048 (*(void * *)(pf_stack_frame + 392))
#define local_1044 (*(int *)(pf_stack_frame + 396))
#define pvStack_1028 (*(void * *)(pf_stack_frame + 424))
#define local_1040 (*(undefined4 *)(pf_stack_frame + 400))
#define local_103c (*(char *)(pf_stack_frame + 404))
#define local_1034 (*(byte * *)(pf_stack_frame + 412))
#define local_1030 (*(uint *)(pf_stack_frame + 416))
#define local_102c (*(undefined4 *)(pf_stack_frame + 420))
#define local_1024 (*(undefined4 *)(pf_stack_frame + 428))
#define local_1020 (*(undefined4 *)(pf_stack_frame + 432))
#define local_101c (*(byte * *)(pf_stack_frame + 436))
#define local_1018 (*(undefined4 *)(pf_stack_frame + 440))
#define uStack_ff4 (*(uint *)(pf_stack_frame + 476))
#define cStack_fec (*(char *)(pf_stack_frame + 484))
#define local_1014 (*(uint *)(pf_stack_frame + 444))
#define auStack_feb (*(undefined1 (*)[4075])(pf_stack_frame + 485))
#define local_1010 (*(undefined4 (*)[1028])(pf_stack_frame + 448))
#define local_1008 (*(int (*)[1026])(pf_stack_frame + 456))
#define local_ffc (*(uint *)(pf_stack_frame + 468))
#define local_ff8 (*(undefined1 * *)(pf_stack_frame + 472))
#define auStackY_11c0 (*(undefined1 (*)[4544])(pf_stack_frame + 16))
#define local_1118 (*(undefined4 *)(pf_stack_frame + 184))
#define local_1114 (*(undefined4 *)(pf_stack_frame + 188))
#define local_1100 (*(undefined4 *)(pf_stack_frame + 208))
#define local_10fc (*(undefined4 *)(pf_stack_frame + 212))
#define local_10f8 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_10f4 (*(undefined4 *)(pf_stack_frame + 220))
#define local_10f0 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_10e0 (*(byte * *)(pf_stack_frame + 240))
#define local_10dc (*(uint *)(pf_stack_frame + 244))
#define local_10d8 (*(undefined4 *)(pf_stack_frame + 248))
#define local_10d4 (*(byte * *)(pf_stack_frame + 252))
#define local_10d0 (*(byte * *)(pf_stack_frame + 256))
#define local_10cc (*(int *)(pf_stack_frame + 260))
#define local_10c8 (*(byte * *)(pf_stack_frame + 264))
#define local_10c4 (*(uint *)(pf_stack_frame + 268))
#define local_10c0 (*(undefined4 (*)[1072])(pf_stack_frame + 272))
#define local_10b8 (*(undefined8 *)(pf_stack_frame + 280))
#define local_10b0 (*(undefined4 *)(pf_stack_frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

uint recovered_10000bd0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[4592] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;

  local_10f8 = auStack_feb + 0xfe7;
  local_10f0 = auStackY_11c0 + 0x80;
  local_1048 = (void *)0x0;
  local_1044 = 0;
  local_1040 = 0;
  local_103c = param_1 < 2;
  local_1100 = DAT_10003008;
  local_10fc = 0x2e40;
  local_10f4 = 0x179e;
  _Unwind_SjLj_Register(&local_1118);
  if (param_2 != 0 && 1 < param_1) {
    pcVar7 = (char *)0x1;
    local_10d0 = (byte *)str_10002f2c;
LAB_10000ce9:
    pbVar13 = *(byte **)(param_2 + (int)(uintptr_t)pcVar7 * 4);
    if (pbVar13 == (byte *)0x0) {
      pbVar13 = &DAT_10002f2b;
    }
    local_10c8 = (byte *)0x0;
    local_10c4 = 0;
    local_10c0[0] = 0;
    uVar8 = 0xffffffff;
    do {
      iVar1 = uVar8 + 1;
      uVar8 = uVar8 + 1;
    } while (pbVar13[iVar1] != 0);
    local_1114 = 1;
    local_104c = pcVar7;
    recovered_10002530((int *)&local_10c8,(int)pbVar13,uVar8);
    pbVar13 = local_10c8;
    if (local_10c8 == (byte *)0x0) {
      pbVar13 = &DAT_10002f2b;
    }
    if (local_10c4 != 0) {
      uVar8 = 1;
      do {
        if (pbVar13[uVar8 - 1] == 0x3d) {
          if (uVar8 != 0) {
            uVar12 = uVar8 - 1;
            if (local_10c4 < uVar8 - 1) {
              uVar12 = local_10c4;
            }
            local_1090 = (byte *)0x0;
            local_108c = 0;
            local_1088 = 0;
            local_1114 = 2;
            recovered_10002530((int *)&local_1090,(int)pbVar13,uVar12);
            if (local_10c4 < uVar8) {
              uVar8 = local_10c4;
            }
            pbVar13 = local_10c8;
            if (local_10c8 == (byte *)0x0) {
              pbVar13 = &DAT_10002f2b;
            }
            local_10e0 = (byte *)0x0;
            local_10dc = 0;
            local_10d8 = 0;
            local_1114 = 3;
            recovered_10002530((int *)&local_10e0,(int)(pbVar13 + uVar8),local_10c4 - uVar8);
            uVar8 = local_108c;
            local_1018 = (void *)0x0;
            local_1014 = 0;
            local_1010[0] = 0;
            local_1114 = 4;
            recovered_10002530(&local_1018,(int)local_10d0,6);
            uVar3 = local_1014;
            _ZdlPv(local_1018);
            uVar12 = local_108c;
            if (uVar8 != uVar3) goto LAB_10000f08;
            if (local_108c == 0) goto LAB_10000c77;
            pbVar13 = local_1090;
            if (local_1090 == (byte *)0x0) {
              pbVar13 = &DAT_10002f2b;
            }
            pbVar9 = local_10d0;
            uVar8 = local_108c;
            goto LAB_10000ed0;
          }
          break;
        }
        iVar1 = (1 - local_10c4) + uVar8;
        uVar8 = uVar8 + 1;
      } while (iVar1 != 1);
    }
    goto LAB_10000cd0;
  }
LAB_10001295:
  local_1114 = 10;
  _ZN6winter3lua5LuaVMC1Ev(&local_10cc);
  if (local_103c == '\x01') {
    local_1114 = 0xb;
    wm_lua_show_banner();
    local_1114 = 0xc;
    wm_lua_show_help();
    local_10c8 = (byte *)0x0;
    local_10c4 = 0;
    local_10c0[0] = 0;
    local_1114 = 0xd;
    recovered_10002530((int *)&local_10c8,((uintptr_t)pf_module_state + 0x253U),9);
    local_1114 = 0xe;
    pf_command_result_10002d06((undefined1 *)&local_1018,&local_10cc,(int *)&local_10c8);
    _ZdlPv(local_10c8);
    if ((char)local_1018 == '\x01') {
      local_1114 = 0xf;
      wm_lua_write(str_10002f51,9);
      local_1114 = 0x10;
      wm_lua_write(str_10002f47,9);
      local_1114 = 0x11;
      wm_lua_writeline();
      if ((char)local_1010[0] != '\0') {
        local_1114 = 0x12;
        pf_command_result_10002d24((int *)&local_10c8,(undefined1 *)local_1010);
        pbVar13 = &DAT_10002f2b;
        if (local_10c8 != (byte *)0x0) {
          pbVar13 = local_10c8;
        }
        local_1114 = 0x13;
        wm_lua_write((char *)pbVar13,local_10c4);
        local_1114 = 0x14;
        wm_lua_writeline();
        _ZdlPv(local_10c8);
      }
    }
    else {
      puVar10 = &DAT_10002f2b;
      if (local_ff8 != (undefined1 *)0x0) {
        puVar10 = local_ff8;
      }
      if (0x12 < uStack_ff4) {
        uVar8 = 0;
        do {
          if (((((((puVar10[uVar8] == 'f') && (puVar10[uVar8 + 1] == 'a')) &&
                 (puVar10[uVar8 + 2] == 'i')) &&
                ((puVar10[uVar8 + 3] == 'l' && (puVar10[uVar8 + 4] == 'e')))) &&
               (puVar10[uVar8 + 5] == 'd')) &&
              (((puVar10[uVar8 + 6] == ' ' && (puVar10[uVar8 + 7] == 't')) &&
               ((puVar10[uVar8 + 8] == 'o' &&
                (((puVar10[uVar8 + 9] == ' ' && (puVar10[uVar8 + 10] == 'o')) &&
                 (puVar10[uVar8 + 0xb] == 'p')))))))) &&
             (((puVar10[uVar8 + 0xc] == 'e' && (puVar10[uVar8 + 0xd] == 'n')) &&
              ((puVar10[uVar8 + 0xe] == ' ' &&
               (((puVar10[uVar8 + 0xf] == 'f' && (puVar10[uVar8 + 0x10] == 'i')) &&
                ((puVar10[uVar8 + 0x11] == 'l' && (puVar10[uVar8 + 0x12] == 'e')))))))))) {
            if (uVar8 != 0xffffffff) goto LAB_10001511;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uStack_ff4 - 0x13);
        if (0x19 < uStack_ff4) {
          uVar8 = 0;
          do {
            if ((((((((puVar10[uVar8] == 'u') && (puVar10[uVar8 + 1] == 'n')) &&
                    (puVar10[uVar8 + 2] == 'a')) &&
                   ((puVar10[uVar8 + 3] == 'b' && (puVar10[uVar8 + 4] == 'l')))) &&
                  (((puVar10[uVar8 + 5] == 'e' &&
                    ((puVar10[uVar8 + 6] == ' ' && (puVar10[uVar8 + 7] == 't')))) &&
                   (puVar10[uVar8 + 8] == 'o')))) &&
                 (((((puVar10[uVar8 + 9] == ' ' && (puVar10[uVar8 + 10] == 'o')) &&
                    (puVar10[uVar8 + 0xb] == 'p')) &&
                   ((puVar10[uVar8 + 0xc] == 'e' && (puVar10[uVar8 + 0xd] == 'n')))) &&
                  ((puVar10[uVar8 + 0xe] == ' ' &&
                   ((puVar10[uVar8 + 0xf] == 's' && (puVar10[uVar8 + 0x10] == 'c')))))))) &&
                ((puVar10[uVar8 + 0x11] == 'r' &&
                 (((puVar10[uVar8 + 0x12] == 'i' && (puVar10[uVar8 + 0x13] == 'p')) &&
                  (puVar10[uVar8 + 0x14] == 't')))))) &&
               (((puVar10[uVar8 + 0x15] == ' ' && (puVar10[uVar8 + 0x16] == 'f')) &&
                ((puVar10[uVar8 + 0x17] == 'i' &&
                 ((puVar10[uVar8 + 0x18] == 'l' && (puVar10[uVar8 + 0x19] == 'e')))))))) {
              if (uVar8 != 0xffffffff) goto LAB_10001511;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 <= uStack_ff4 - 0x1a);
        }
      }
      local_1114 = 0x15;
      recovered_100026a0((char *)&local_1018,str_10002f5b);
    }
LAB_10001511:
    _ZdlPv(local_ff8);
    if (3 < local_ffc) {
      local_1114 = 0x16;
      recovered_10002980(local_ffc,local_1008);
    }
  }
  if (local_1044 == 0) {
    local_10d0 = (byte *)0x1;
    cStack_fec = '\0';
  }
  else {
    local_1114 = 0x17;
    pf_command_result_10002d06((undefined1 *)&local_1018,&local_10cc,(int *)&local_1048);
    pcVar7 = (char *)0x0;
    if ((char)local_1018 == '\0') {
      pcVar7 = str_10002f88;
    }
    local_1114 = 0x18;
    recovered_100026a0((char *)&local_1018,pcVar7);
    local_10d0 = (byte *)((uint)local_1018 & 0xff);
    _ZdlPv(local_ff8);
    if (3 < local_ffc) {
      local_1114 = 0x19;
      recovered_10002980(local_ffc,local_1008);
    }
  }
  if ((local_103c == '\x01') && (cStack_fec == '\0')) {
    local_104c = str_10002f96;
    do {
      local_1114 = 0x1a;
      bVar6 = wm_lua_readline((int)&local_1018,0x1000,local_104c,1);
      if (!bVar6) break;
      local_10c8 = (byte *)0x0;
      local_10c4 = 0;
      local_10c0[0] = 0;
      uVar8 = 0xffffffff;
      do {
        iVar1 = uVar8 - 7;
        uVar8 = uVar8 + 1;
      } while (*(char *)((int)local_1010 + iVar1) != '\0');
      local_1114 = 0x1b;
      recovered_10002530((int *)&local_10c8,(int)&local_1018,uVar8);
      pbVar13 = local_10c8;
      if (local_10c8 == (byte *)0x0) {
        pbVar13 = &DAT_10002f2b;
      }
      if (local_10c4 == 5) {
        if ((((*pbVar13 == 0x2e) && (pbVar13[1] == 0x65)) && (pbVar13[2] == 0x78)) &&
           (pbVar13[3] == 0x69)) {
          bVar4 = pbVar13[4];
joined_r0x1000174b:
          if (bVar4 == 0x74) {
            _ZdlPv(local_10c8);
            break;
          }
        }
      }
      else if (local_10c4 == 4) {
        if (*pbVar13 == 0x71) {
          if (pbVar13[1] == 0x75) goto LAB_10001758;
        }
        else if ((*pbVar13 == 0x65) && (pbVar13[1] == 0x78)) {
LAB_10001758:
          if (pbVar13[2] == 0x69) {
            bVar4 = pbVar13[3];
            goto joined_r0x1000174b;
          }
        }
      }
      _ZdlPv(local_10c8);
      local_10c8 = (byte *)0x0;
      local_10c4 = 0;
      local_10c0[0] = 0;
      uVar8 = 0xffffffff;
      do {
        iVar1 = uVar8 - 7;
        uVar8 = uVar8 + 1;
      } while (*(char *)((int)local_1010 + iVar1) != '\0');
      local_1114 = 0x1c;
      recovered_10002530((int *)&local_10c8,(int)&local_1018,uVar8);
      pbVar13 = local_10c8;
      if (local_10c8 == (byte *)0x0) {
        pbVar13 = &DAT_10002f2b;
      }
      if (((local_10c4 == 5) && (*pbVar13 == 0x3a)) &&
         ((pbVar13[1] == 0x68 &&
          (((pbVar13[2] == 0x65 && (pbVar13[3] == 0x6c)) && (pbVar13[4] == 0x70)))))) {
LAB_100018bc:
        _ZdlPv(local_10c8);
        local_1114 = 0x1e;
        wm_lua_show_help();
      }
      else {
        local_1090 = (byte *)0x0;
        local_108c = 0;
        local_1088 = 0;
        uVar8 = 0xffffffff;
        do {
          iVar1 = uVar8 - 7;
          uVar8 = uVar8 + 1;
        } while (*(char *)((int)local_1010 + iVar1) != '\0');
        local_1114 = 0x1d;
        recovered_10002530((int *)&local_1090,(int)&local_1018,uVar8);
        pbVar13 = local_1090;
        if (local_1090 == (byte *)0x0) {
          pbVar13 = &DAT_10002f2b;
        }
        if ((((local_108c == 6) && (*pbVar13 == 0x68)) &&
            ((pbVar13[1] == 0x65 && ((pbVar13[2] == 0x6c && (pbVar13[3] == 0x70)))))) &&
           ((pbVar13[4] == 0x28 && (pbVar13[5] == 0x29)))) {
          _ZdlPv(local_1090);
          goto LAB_100018bc;
        }
        _ZdlPv(local_1090);
        _ZdlPv(local_10c8);
        if ((char)local_1018 != '\0') {
          local_10e0 = (byte *)0x0;
          local_10dc = 0;
          local_10d8 = 0;
          uVar8 = 0xffffffff;
          do {
            iVar1 = uVar8 - 7;
            uVar8 = uVar8 + 1;
          } while (*(char *)((int)local_1010 + iVar1) != '\0');
          local_1114 = 0x1f;
          recovered_10002530((int *)&local_10e0,(int)&local_1018,uVar8);
          local_10c8 = (byte *)((uint)local_10c8 & 0xffffff00);
          local_1114 = 0x20;
          _ZN6winter3lua8LuaValueC1Ev((undefined1 *)local_10c0);
          local_10a8 = (void *)0x0;
          local_10a4 = 0;
          local_10a0 = 0;
          local_109c = local_109c & 0xffffff00;
          local_1098 = 0;
          if (local_10dc == 0) {
LAB_10001ba0:
            local_1058 = (byte *)0x0;
            local_1054 = 0;
            local_1050 = 0;
            local_1114 = 0x28;
            recovered_10002530((int *)&local_1058,((uintptr_t)pf_module_state + 0x2b6U),7);
            local_1114 = 0x29;
            pf_command_result_10002d0c((undefined1 *)&local_1090,&local_10cc,(int *)&local_10e0,
                               (int *)&local_1058);
            local_10c8 = (byte *)CONCAT31(PF_PART3(local_10c8, 1),PF_PART1(local_1090, 0));
            local_10c0[0] = CONCAT31(PF_PART3(local_10c0[0], 1),(undefined1)local_1088);
            if (3 < local_10ac) {
              local_1114 = 0x2a;
              recovered_10002980(local_10ac,(int *)&local_10b8);
            }
            local_10ac = local_1074;
            switch((uintptr_t)(local_1074)) {
            case 0:
              break;
            case 1:
              local_10b8 = CONCAT44(local_107c,local_1080);
              break;
            case 2:
              local_10b8 = CONCAT44(local_107c,local_1080);
              break;
            case 3:
              local_10b8 = CONCAT71(PF_PART7(local_10b8, 1),(undefined1)local_1080);
              break;
            case 4:
              local_10b8 = CONCAT44(local_107c,local_1080);
              local_10b0 = local_1078;
              local_1080 = 0;
              local_107c = 0;
              local_1078 = 0;
              break;
            default:
              if (local_1074 - 5 < 3) {
                local_10b8 = CONCAT44(local_107c,local_1080);
                local_1080 = 0;
                local_107c = 0;
              }
            }
            _ZdlPv(local_10a8);
            local_10a8 = local_1070;
            local_10a4 = uStack_106c;
            local_10a0 = local_1068;
            local_1070 = (void *)0x0;
            uStack_106c = 0;
            local_1068 = 0;
            local_1098 = local_1060;
            local_109c = local_1064;
            _ZdlPv((void *)0x0);
            if (3 < local_1074) {
              local_1114 = 0x2b;
              recovered_10002980(local_1074,&local_1080);
            }
            pbVar13 = local_1058;
          }
          else {
            pbVar13 = local_10e0;
            if (local_10e0 == (byte *)0x0) {
              pbVar13 = &DAT_10002f2b;
            }
            if (*pbVar13 != 0x3d) goto LAB_10001ba0;
            local_1034 = (byte *)0x0;
            local_1030 = 0;
            local_102c = 0;
            local_1114 = 0x21;
            recovered_10002530((int *)&local_1034,(int)(pbVar13 + 1),local_10dc - 1);
            local_1058 = (byte *)0x0;
            local_1054 = 0;
            local_1050 = 0;
            local_1114 = 0x22;
            recovered_10002530((int *)&local_1058,((uintptr_t)pf_module_state + 0x2aeU),7);
            pbVar13 = local_1034;
            if (local_1034 == (byte *)0x0) {
              pbVar13 = &DAT_10002f2b;
            }
            local_1114 = 0x23;
            recovered_10002b60((int *)&local_1058,(int)pbVar13,local_1030);
            pvStack_1028 = (void *)0x0;
            local_1024 = 0;
            local_1020 = 0;
            local_1114 = 0x24;
            recovered_10002530((int *)&pvStack_1028,((uintptr_t)pf_module_state + 0x2b6U),7);
            local_1114 = 0x25;
            pf_command_result_10002d0c((undefined1 *)&local_1090,&local_10cc,(int *)&local_1058,
                               (int *)&pvStack_1028);
            local_10c8 = (byte *)CONCAT31(PF_PART3(local_10c8, 1),PF_PART1(local_1090, 0));
            local_10c0[0] = CONCAT31(PF_PART3(local_10c0[0], 1),(undefined1)local_1088);
            if (3 < local_10ac) {
              local_1114 = 0x26;
              recovered_10002980(local_10ac,(int *)&local_10b8);
            }
            local_10ac = local_1074;
            switch((uintptr_t)(local_1074)) {
            case 0:
              break;
            case 1:
              local_10b8 = CONCAT44(local_107c,local_1080);
              break;
            case 2:
              local_10b8 = CONCAT44(local_107c,local_1080);
              break;
            case 3:
              local_10b8 = CONCAT71(PF_PART7(local_10b8, 1),(undefined1)local_1080);
              break;
            case 4:
              local_10b8 = CONCAT44(local_107c,local_1080);
              local_10b0 = local_1078;
              local_1080 = 0;
              local_107c = 0;
              local_1078 = 0;
              break;
            default:
              if (local_1074 - 5 < 3) {
                local_10b8 = CONCAT44(local_107c,local_1080);
                local_1080 = 0;
                local_107c = 0;
              }
            }
            _ZdlPv(local_10a8);
            local_10a8 = local_1070;
            local_10a4 = uStack_106c;
            local_10a0 = local_1068;
            local_1070 = (void *)0x0;
            uStack_106c = 0;
            local_1068 = 0;
            local_1098 = local_1060;
            local_109c = local_1064;
            _ZdlPv((void *)0x0);
            if (3 < local_1074) {
              local_1114 = 0x27;
              recovered_10002980(local_1074,&local_1080);
            }
            _ZdlPv(pvStack_1028);
            _ZdlPv(local_1058);
            pbVar13 = local_1034;
          }
          _ZdlPv(pbVar13);
          local_1114 = 0x2c;
          recovered_100026a0((char *)&local_10c8,(char *)0x0);
          cVar5 = (char)local_109c;
          _ZdlPv(local_10a8);
          if (3 < local_10ac) {
            local_1114 = 0x2d;
            recovered_10002980(local_10ac,(int *)&local_10b8);
          }
          _ZdlPv(local_10e0);
          if (cVar5 != '\0') break;
        }
      }
    } while (local_103c != '\0');
  }
  _ZN6winter3lua5LuaVMD1Ev(&local_10cc);
  _ZdlPv(local_1048);
  local_1114 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_1118);
  return (uint)local_10d0;
  while( true ) {
    pbVar9 = pbVar9 + 1;
    pbVar13 = pbVar13 + 1;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
LAB_10000ed0:
    bVar4 = *pbVar13;
    bVar2 = *pbVar9;
    bVar11 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar11 = bVar4;
    }
    bVar4 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar4 = bVar2;
    }
    if (bVar11 != bVar4) goto LAB_10000f08;
  }
LAB_10000c77:
  pbVar13 = local_10e0;
  if (local_10e0 == (byte *)0x0) {
    pbVar13 = &DAT_10002f2b;
  }
  local_1114 = 5;
  recovered_10002530((int *)&local_1048,(int)pbVar13,local_10dc);
  goto LAB_10000ca5;
LAB_10000f08:
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_1114 = 6;
  local_10d4 = (byte *)str_10002f33;
  recovered_10002530(&local_1018,((uintptr_t)pf_module_state + 0x23fU),7);
  uVar3 = local_1014;
  pbVar13 = local_10d4;
  _ZdlPv(local_1018);
  uVar8 = local_10dc;
  if (uVar12 != uVar3) goto LAB_10000ca5;
  if (local_108c != 0) {
    pbVar9 = local_1090;
    uVar12 = local_108c;
    if (local_1090 == (byte *)0x0) {
      pbVar9 = &DAT_10002f2b;
    }
    do {
      bVar4 = *pbVar9;
      bVar2 = *pbVar13;
      bVar11 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar11 = bVar4;
      }
      bVar4 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar4 = bVar2;
      }
      if (bVar11 != bVar4) goto LAB_10000ca5;
      pbVar13 = pbVar13 + 1;
      pbVar9 = pbVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_1114 = 7;
  local_10d4 = &DAT_10002f3b;
  recovered_10002530(&local_1018,((uintptr_t)pf_module_state + 0x247U),4);
  uVar3 = local_1014;
  _ZdlPv(local_1018);
  uVar12 = local_10dc;
  if (uVar8 == uVar3) {
    cVar5 = '\x01';
    if (local_10dc != 0) {
      local_101c = local_10e0;
      pbVar13 = local_10e0;
      if (local_10e0 == (byte *)0x0) {
        pbVar13 = &DAT_10002f2b;
      }
      uVar8 = 0;
      pbVar9 = local_10d4;
      do {
        bVar4 = pbVar13[uVar8];
        bVar2 = *pbVar9;
        bVar11 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar11 = bVar4;
        }
        bVar4 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar4 = bVar2;
        }
        if (bVar11 != bVar4) goto joined_r0x100010c9;
        uVar8 = uVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (local_10dc != uVar8);
LAB_10001283:
      cVar5 = '\x01';
    }
  }
  else {
joined_r0x100010c9:
    if (local_10dc == 1) {
      pbVar13 = local_10e0;
      if (local_10e0 == (byte *)0x0) {
        pbVar13 = &DAT_10002f2b;
      }
      cVar5 = '\x01';
      if (*pbVar13 == 0x31) goto LAB_10001289;
    }
    local_1018 = (void *)0x0;
    local_1014 = 0;
    local_1010[0] = 0;
    local_1114 = 8;
    local_10d4 = &DAT_10002f40;
    recovered_10002530(&local_1018,((uintptr_t)pf_module_state + 0x24cU),3);
    uVar3 = local_1014;
    _ZdlPv(local_1018);
    uVar8 = local_10dc;
    if (uVar12 == uVar3) {
      cVar5 = '\x01';
      if (local_10dc != 0) {
        pbVar13 = local_10e0;
        if (local_10e0 == (byte *)0x0) {
          pbVar13 = &DAT_10002f2b;
        }
        uVar12 = local_10dc;
        pbVar9 = local_10d4;
        do {
          bVar4 = *pbVar13;
          bVar2 = *pbVar9;
          bVar11 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar11 = bVar4;
          }
          bVar4 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar4 = bVar2;
          }
          if (bVar11 != bVar4) goto LAB_100011c8;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        goto LAB_10001283;
      }
    }
    else {
LAB_100011c8:
      local_1018 = (void *)0x0;
      local_1014 = 0;
      local_1010[0] = 0;
      local_1114 = 9;
      local_10d4 = &DAT_10002f44;
      recovered_10002530(&local_1018,((uintptr_t)pf_module_state + 0x250U),2);
      uVar12 = local_1014;
      _ZdlPv(local_1018);
      if (uVar8 == uVar12) {
        cVar5 = '\x01';
        if (local_10dc != 0) {
          pbVar13 = local_10e0;
          if (local_10e0 == (byte *)0x0) {
            pbVar13 = &DAT_10002f2b;
          }
          uVar8 = local_10dc;
          pbVar9 = local_10d4;
          do {
            bVar4 = *pbVar13;
            bVar2 = *pbVar9;
            bVar11 = bVar4 | 0x20;
            if (0x19 < (byte)(bVar4 + 0xbf)) {
              bVar11 = bVar4;
            }
            bVar4 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar4 = bVar2;
            }
            if (bVar11 != bVar4) goto LAB_10001287;
            pbVar9 = pbVar9 + 1;
            pbVar13 = pbVar13 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          goto LAB_10001283;
        }
      }
      else {
LAB_10001287:
        cVar5 = '\0';
      }
    }
  }
LAB_10001289:
  local_103c = cVar5;
LAB_10000ca5:
  _ZdlPv(local_10e0);
  _ZdlPv(local_1090);
LAB_10000cd0:
  _ZdlPv(local_10c8);
  pcVar7 = local_104c + 1;
  if (pcVar7 == (char *)param_1) goto LAB_10001295;
  goto LAB_10000ce9;
}

#undef DAT_10002f2b
#undef DAT_10002f3b
#undef DAT_10002f40
#undef DAT_10002f44
#undef DAT_10003008
#undef str_10002f2c
#undef str_10002f33
#undef str_10002f47
#undef str_10002f51
#undef str_10002f5b
#undef str_10002f88
#undef str_10002f96
#undef local_10ac
#undef local_10a8
#undef local_10a4
#undef local_10a0
#undef local_109c
#undef local_1098
#undef local_1090
#undef local_108c
#undef local_1088
#undef uStack_106c
#undef local_1080
#undef local_107c
#undef local_1078
#undef local_1074
#undef local_1070
#undef local_1068
#undef local_1064
#undef local_1060
#undef local_1058
#undef local_1054
#undef local_1050
#undef local_104c
#undef local_1048
#undef local_1044
#undef pvStack_1028
#undef local_1040
#undef local_103c
#undef local_1034
#undef local_1030
#undef local_102c
#undef local_1024
#undef local_1020
#undef local_101c
#undef local_1018
#undef uStack_ff4
#undef cStack_fec
#undef local_1014
#undef auStack_feb
#undef local_1010
#undef local_1008
#undef local_ffc
#undef local_ff8
#undef auStackY_11c0
#undef local_1118
#undef local_1114
#undef local_1100
#undef local_10fc
#undef local_10f8
#undef local_10f4
#undef local_10f0
#undef local_10e0
#undef local_10dc
#undef local_10d8
#undef local_10d4
#undef local_10d0
#undef local_10cc
#undef local_10c8
#undef local_10c4
#undef local_10c0
#undef local_10b8
#undef local_10b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

void recovered_100024d0(char *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (arg_ecx != (char *)0x0) {
    iVar2 = -1;
    do {
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (arg_ecx[iVar1] != '\0');
    wm_lua_write(arg_ecx,iVar2);
  }
  wm_lua_writeline();
  return;
}


#define iStack_18 (*(int *)(pf_stack_frame + 56))
#define uStack_14 (*(uint *)(pf_stack_frame + 60))
#define pvStack_40 (*(void * *)(pf_stack_frame + 16))
#define iStack_3c (*(int *)(pf_stack_frame + 20))
#define iStack_38 (*(int *)(pf_stack_frame + 24))
#define piStack_1c (*(int * *)(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

void recovered_10002510(int param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  uVar6 = uStack_14;
  if (iStack_18 == 0) {
    uVar6 = 0;
  }
  puVar3 = (undefined1 *)*piStack_1c;
  if (puVar3 != (undefined1 *)0x0 && iStack_18 != 0) {
    uVar4 = iStack_18 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = piStack_1c[1] - uVar4;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        pvStack_40 = (void *)0x0;
        iStack_3c = 0;
        iStack_38 = 0;
        recovered_10002530((int *)&pvStack_40,(int)(puVar3 + uVar4),uVar7);
        pvVar1 = (void *)*piStack_1c;
        *piStack_1c = (int)pvStack_40;
        iVar2 = piStack_1c[1];
        piStack_1c[1] = iStack_3c;
        iVar5 = piStack_1c[2];
        piStack_1c[2] = iStack_38;
        pvStack_40 = pvVar1;
        iStack_3c = iVar2;
        iStack_38 = iVar5;
        _ZdlPv(pvVar1);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)piStack_1c[1]);
  }
  piStack_1c[1] = 0;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  if (uVar6 == 0) {
    if (*piStack_1c == 0) {
      puVar3 = _Znwm(1);
      *puVar3 = 0;
      *piStack_1c = (int)puVar3;
      piStack_1c[2] = 0;
    }
  }
  else {
    if ((uint)piStack_1c[2] < uVar6) {
      puVar3 = _Znwm(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*piStack_1c;
      iVar2 = piStack_1c[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      _ZdlPv(pvVar1);
      *piStack_1c = (int)puVar3;
      piStack_1c[2] = uVar6;
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*piStack_1c + uVar4) = *(undefined1 *)(iStack_18 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
    piStack_1c[1] = uStack_14;
    *(undefined1 *)(*piStack_1c + uStack_14) = 0;
  }
  return;
}

#undef iStack_18
#undef uStack_14
#undef pvStack_40
#undef iStack_3c
#undef iStack_38
#undef piStack_1c

#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002530
 */

void recovered_10002530(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = param_3;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != (undefined1 *)0x0 && param_2 != 0) {
    uVar4 = param_2 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = param_1[1] - uVar4;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        local_20 = (void *)0x0;
        local_1c = 0;
        local_18 = 0;
        recovered_10002530((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_20;
        iVar2 = param_1[1];
        param_1[1] = local_1c;
        iVar5 = param_1[2];
        param_1[2] = local_18;
        local_20 = pvVar1;
        local_1c = iVar2;
        local_18 = iVar5;
        _ZdlPv(pvVar1);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  if (uVar6 == 0) {
    if (*param_1 == 0) {
      puVar3 = _Znwm(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = _Znwm(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      _ZdlPv(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
    param_1[1] = param_3;
    *(undefined1 *)(*param_1 + param_3) = 0;
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18

#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x314U)))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_58 (*(char * *)(pf_stack_frame + 168))
#define local_54 (*(int *)(pf_stack_frame + 172))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(int *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined4 *)(pf_stack_frame + 208))
#define local_2c (*(undefined4 *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

void recovered_100026a0(char *arg_ecx,char *arg_edx)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  cVar1 = *arg_ecx;
  local_4c = 0x100026b5;
  local_30 = DAT_10003008;
  local_2c = 0x2eb8;
  local_24 = 0x1cf;
  _Unwind_SjLj_Register(&local_48);
  iVar3 = local_4c;
  if (cVar1 == '\x01') {
    if (arg_ecx[8] == '\0') goto LAB_10002870;
    local_44 = 0xffffffff;
    pf_command_result_10002d24((int *)&local_58,arg_ecx + 8);
    pcVar5 = (char *)(((uintptr_t)pf_module_state+0x237U));
    if (local_58 != (char *)0x0) {
      pcVar5 = local_58;
    }
    local_44 = 1;
    wm_lua_write(pcVar5,local_54);
    local_44 = 2;
    wm_lua_writeline();
  }
  else {
    if ((arg_edx != (char *)0x0) && (*arg_edx != '\0')) {
      iVar4 = -1;
      do {
        iVar2 = iVar4 + 1;
        iVar4 = iVar4 + 1;
      } while (arg_edx[iVar2] != '\0');
      local_44 = 0xffffffff;
      wm_lua_write(arg_edx,iVar4);
      local_44 = 0xffffffff;
      wm_lua_write((char *)(((uintptr_t)pf_module_state+0x276U)),2);
    }
    uVar6 = *(uint *)(arg_ecx + 0x24);
    if (uVar6 == 0) {
      iVar4 = ((uintptr_t)pf_module_state+0x279U);
      uVar6 = 0x1a;
    }
    else {
      iVar4 = ((uintptr_t)pf_module_state+0x237U);
      if (*(int *)(arg_ecx + 0x20) != 0) {
        iVar4 = *(int *)(arg_ecx + 0x20);
      }
    }
    local_44 = 0xffffffff;
    local_50 = 0;
    local_54 = 0;
    local_58 = (char *)0x0;
    recovered_10002530((int *)&local_58,iVar4,uVar6);
    pcVar5 = (char *)(((uintptr_t)pf_module_state+0x237U));
    if (local_58 != (char *)0x0) {
      pcVar5 = local_58;
    }
    local_44 = 3;
    wm_lua_write(pcVar5,local_54);
    local_44 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_58);
LAB_10002870:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10003008
#undef auStackY_f0
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef auStack_1c
#undef local_24
#undef local_20

#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x314U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

void recovered_100028d0(int param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;

  _ZdlPv(*(void **)(param_1 + 0x20));
  local_20 = auStackY_d0 + 0x80;
  uVar1 = *(uint *)(param_1 + 0x1c);
  local_30 = DAT_10003008;
  local_2c = 0x2ec4;
  local_24 = 0x72;
  local_28 = auStack_1c + 0x18;
  _Unwind_SjLj_Register(&local_48);
  if (3 < uVar1) {
    local_44 = 1;
    recovered_10002980(uVar1,(int *)(param_1 + 0x10));
  }
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10003008
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x314U)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

void recovered_10002980(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10003008;
  local_2c = 0x2ed4;
  local_24 = 0xb3;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 5) {
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      piVar2 = piVar1 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        local_44 = 1;
        (**(code **)(*piVar1 + 8))();
        piVar2 = (int *)*param_2;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*piVar2 + 4))();
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
    local_44 = 0xffffffff;
    recovered_10002a70(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10003008
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_d0
#undef local_20
#undef auStack_1c

#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x314U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

void recovered_10002a70(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10003008;
  local_2c = 0x2ee4;
  local_24 = 0xb0;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10002b21;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 2;
      (**(code **)(*piVar1 + 8))();
      goto LAB_10002afe;
    }
  }
  else {
    if ((param_1 != 6) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10002b21;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 1;
      (**(code **)(*piVar1 + 8))();
LAB_10002afe:
      piVar2 = (int *)*param_2;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_10002b21:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10003008
#undef local_24
#undef local_20
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28

#define local_28 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

int * recovered_10002b60(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 != 0 && param_2 != 0) {
    local_28 = (undefined1 *)*param_1;
    if (local_28 != (undefined1 *)0x0) {
      uVar6 = param_1[1];
      uVar7 = param_2 - (int)local_28;
      uVar2 = 0;
LAB_10002ba0:
      if (uVar7 != uVar2) goto code_r0x10002ba8;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_28 = _Znwm(uVar2 + 1);
        *local_28 = 0;
        pvVar1 = (void *)*param_1;
        iVar4 = param_1[1];
        if (iVar4 != 0) {
          iVar5 = 0;
          do {
            local_28[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        local_28[iVar4] = 0;
        _ZdlPv(pvVar1);
        *param_1 = (int)local_28;
        param_1[2] = uVar2;
      }
      if (param_3 != 0) {
        uVar2 = param_3;
        do {
          *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        goto LAB_10002cd6;
      }
      goto LAB_10002cd8;
    }
    uVar6 = param_1[1];
LAB_10002bb2:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = _Znwm(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      puVar3[iVar4] = 0;
      _ZdlPv(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_10002cd6:
    local_28 = (undefined1 *)*param_1;
LAB_10002cd8:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_28[iVar4] = 0;
  }
  return param_1;
code_r0x10002ba8:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10002bb2;
  goto LAB_10002ba0;
}

#undef local_28
