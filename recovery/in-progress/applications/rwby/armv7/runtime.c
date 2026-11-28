/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001ec0
#define DAT_10001ec0 (*(int *)(0x10001ec0U))
#undef DAT_10001ec4
#define DAT_10001ec4 (*(int *)(0x10001ec4U))
#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_10003dc7
#define DAT_10003dc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x407U)))
#undef DAT_10003dcc
#define DAT_10003dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef DAT_10003dd0
#define DAT_10003dd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x410U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4668U)))
#undef DAT_10008074
#define DAT_10008074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46b4U)))
#undef str_10003db8
#define str_10003db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f8U)))
#undef str_10003dbf
#define str_10003dbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ffU)))
#undef str_10003e32
#define str_10003e32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x472U)))
#undef str_10003e54
#define str_10003e54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x494U)))
#undef str_10003e8c
#define str_10003e8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ccU)))
#undef str_10003ebf
#define str_10003ebf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#undef str_10003ee2
#define str_10003ee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x522U)))
#undef str_10003f0f
#define str_10003f0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54fU)))
#undef str_10003f1e
#define str_10003f1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55eU)))
#undef str_10003f27
#define str_10003f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x567U)))
#undef str_10003f31
#define str_10003f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x571U)))
#undef str_10003f4c
#define str_10003f4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58cU)))
#undef str_10003f7a
#define str_10003f7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5baU)))
#undef str_10003f88
#define str_10003f88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c8U)))
#define auStack_1120 (*(undefined1 (*)[4384])(pf_stack_frame + 16))
#define uStack_1100 (*(undefined4 *)(pf_stack_frame + 48))
#define aiStack_10c8 (*(int (*)[1074])(pf_stack_frame + 104))
#define aiStack_1098 (*(int (*)[1062])(pf_stack_frame + 152))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 4252))
#define local_1110 (*(uint *)(pf_stack_frame + 32))
#define local_110c (*(int * *)(pf_stack_frame + 36))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 4296))
#define local_1108 (*(uint *)(pf_stack_frame + 40))
#define local_1104 (*(int * *)(pf_stack_frame + 44))
#define local_10fc (*(void * *)(pf_stack_frame + 52))
#define local_10f8 (*(int *)(pf_stack_frame + 56))
#define local_10f4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_10f0 (*(char *)(pf_stack_frame + 64))
#define local_10ec (*(int * *)(pf_stack_frame + 68))
#define local_10e8 (*(int * *)(pf_stack_frame + 72))
#define local_10e4 (*(byte * *)(pf_stack_frame + 76))
#define local_10e0 (*(uint *)(pf_stack_frame + 80))
#define local_10dc (*(undefined4 *)(pf_stack_frame + 84))
#define local_10d8 (*(char * *)(pf_stack_frame + 88))
#define local_10d4 (*(uint *)(pf_stack_frame + 92))
#define local_10d0 (*(undefined4 *)(pf_stack_frame + 96))
#define local_10bc (*(uint *)(pf_stack_frame + 116))
#define local_10b8 (*(void * *)(pf_stack_frame + 120))
#define local_10a8 (*(void * *)(pf_stack_frame + 136))
#define local_10a4 (*(uint *)(pf_stack_frame + 140))
#define local_10a0 (*(undefined4 (*)[1064])(pf_stack_frame + 144))
#define local_108c (*(uint *)(pf_stack_frame + 164))
#define local_1088 (*(int * *)(pf_stack_frame + 168))
#define local_1084 (*(uint *)(pf_stack_frame + 172))
#define local_a4 (*(byte * *)(pf_stack_frame + 4236))
#define local_a0 (*(uint *)(pf_stack_frame + 4240))
#define local_9c (*(undefined4 *)(pf_stack_frame + 4244))
#define local_90 (*(undefined4 *)(pf_stack_frame + 4256))
#define local_7c (*(undefined4 *)(pf_stack_frame + 4276))
#define local_78 (*(int *)(pf_stack_frame + 4280))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 4284))
#define local_70 (*(int *)(pf_stack_frame + 4288))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 4292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eac
 */

uint recovered_10000eac(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[4432] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_1120;
  local_10f4 = 0;
  local_10f8 = 0;
  local_10fc = (void *)0x0;
  local_10f0 = (int)param_1 < 2;
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x144U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x1460ULL}) + 0x10000f2c;
  local_1108 = param_2;
  _Unwind_SjLj_Register(&uStack_94);
  local_110c = param_1;
  if ((1 < (int)param_1) && (local_1108 != 0)) {
    piVar4 = (int *)0x1;
LAB_10000fc0:
    puVar5 = *(undefined1 **)(local_1108 + (int)(uintptr_t)piVar4 * 4);
    local_10d0 = 0;
    local_10d4 = 0;
    local_10d8 = (char *)0x0;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_10003db7;
    }
    uVar8 = 0;
    do {
      uVar10 = uVar8;
      uVar8 = uVar10 + 1;
    } while (puVar5[uVar10] != '\0');
    local_90 = 1;
    local_1104 = piVar4;
    recovered_10002440((int *)&local_10d8,(int)puVar5,uVar10);
    pcVar6 = local_10d8;
    if (local_10d8 == (char *)0x0) {
      pcVar6 = &DAT_10003db7;
    }
    if (local_10d4 != 0) {
      iVar11 = 0;
      do {
        if (pcVar6[-iVar11] == '=') {
          if (iVar11 != 1) {
            local_9c = 0;
            uVar8 = -iVar11;
            if (local_10d4 < (uint)-iVar11) {
              uVar8 = local_10d4;
            }
            local_a0 = 0;
            local_a4 = (byte *)0x0;
            local_90 = 2;
            local_1110 = iVar11;
            recovered_10002440((int *)&local_a4,(int)pcVar6,uVar8);
            local_10dc = 0;
            local_10e0 = 0;
            local_10e4 = (byte *)0x0;
            local_90 = 3;
            uVar8 = 1 - local_1110;
            if (local_10d4 < 1 - local_1110) {
              uVar8 = local_10d4;
            }
            pcVar6 = local_10d8;
            if (local_10d8 == (char *)0x0) {
              pcVar6 = &DAT_10003db7;
            }
            recovered_10002440((int *)&local_10e4,(int)(pcVar6 + uVar8),local_10d4 - uVar8);
            local_1110 = local_a0;
            local_90 = 4;
            local_10a0[0] = 0;
            local_10a4 = 0;
            local_10a8 = (void *)0x0;
            recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x3f8U),6);
            uVar8 = local_10a4;
            _ZdlPv(local_10a8);
            if (local_1110 != uVar8) goto LAB_100011dc;
            if (local_a0 == 0) goto LAB_10000f58;
            pbVar9 = local_a4;
            if (local_a4 == (byte *)0x0) {
              pbVar9 = &DAT_10003db7;
            }
            pbVar7 = (byte *)str_10003db8;
            uVar8 = local_a0;
            goto LAB_100011a8;
          }
          break;
        }
        iVar11 = iVar11 + -1;
      } while (-iVar11 != local_10d4);
    }
    goto LAB_10000fa8;
  }
LAB_10001544:
  local_90 = 10;
  _ZN6winter4ruby6RubyVMC1Ev(&uStack_1100);
  local_90 = 0xb;
  local_10a0[0] = 0;
  local_10a4 = 0;
  local_10a8 = (void *)0x0;
  recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x413U),6);
  local_90 = 0xc;
  local_10e8 = _Znwm(8);
  *local_10e8 = (int)&DAT_10008028;
  local_90 = 0xd;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&uStack_1100,(int *)&local_10a8,&local_10e8);
  if (local_10e8 != (int *)0x0) {
    (**(code **)(*local_10e8 + 4))();
  }
  _ZdlPv(local_10a8);
  local_90 = 0xe;
  local_10a0[0] = 0;
  local_10a4 = 0;
  local_10a8 = (void *)0x0;
  recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x41aU),8);
  local_90 = 0xf;
  local_10ec = _Znwm(8);
  *local_10ec = (int)&DAT_10008074;
  local_90 = 0x10;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&uStack_1100,(int *)&local_10a8,&local_10ec);
  if (local_10ec != (int *)0x0) {
    (**(code **)(*local_10ec + 4))();
  }
  _ZdlPv(local_10a8);
  if (local_10f0 == '\x01') {
    local_90 = 0x11;
    wm_lua_write(str_10003e32,0x21);
    local_90 = 0x12;
    wm_lua_writeline();
    local_90 = 0x13;
    wm_lua_write(str_10003e54,0x37);
    local_90 = 0x14;
    wm_lua_writeline();
    local_90 = 0x15;
    wm_lua_write(str_10003e8c,0x32);
    local_90 = 0x16;
    wm_lua_writeline();
    local_90 = 0x17;
    wm_lua_write(str_10003ebf,0x22);
    local_90 = 0x18;
    wm_lua_writeline();
    local_90 = 0x19;
    wm_lua_write(str_10003ee2,0x2c);
    local_90 = 0x1a;
    wm_lua_writeline();
    local_90 = 0x1b;
    wm_lua_write(&DAT_10003db7,0);
    local_90 = 0x1c;
    wm_lua_writeline();
    local_90 = 0x1d;
    wm_lua_write(str_10003f0f,0xe);
    local_90 = 0x1e;
    wm_lua_writeline();
    local_90 = 0x1f;
    local_1104 = (int *)&DAT_10003db7;
    wm_lua_write(&DAT_10003db7,0);
    local_90 = 0x20;
    wm_lua_writeline();
    local_90 = 0x21;
    local_10d0 = 0;
    local_10d4 = 0;
    local_10d8 = (char *)0x0;
    recovered_10002440((int *)&local_10d8,((uintptr_t)pf_module_state + 0x55eU),8);
    local_90 = 0x22;
    pf_command_result_10003fb0(&local_10a8,&uStack_1100,&local_10d8);
    _ZdlPv(local_10d8);
    if ((char)local_10a8 == '\x01') {
      local_90 = 0x23;
      wm_lua_write(str_10003f27,9);
      local_90 = 0x24;
      wm_lua_write(str_10003f1e,8);
      local_90 = 0x25;
      wm_lua_writeline();
      if ((char)local_10a0[0] != '\0') {
        local_90 = 0x26;
        pf_command_result_10003fc4(&local_10d8,local_10a0);
        local_90 = 0x27;
        pcVar6 = &DAT_10003db7;
        if (local_10d8 != (char *)0x0) {
          pcVar6 = local_10d8;
        }
        wm_lua_write(pcVar6,local_10d4);
        local_90 = 0x28;
        wm_lua_writeline();
        _ZdlPv(local_10d8);
      }
    }
    else {
      if (local_1088 != (int *)0x0) {
        local_1104 = local_1088;
      }
      if (0x19 < local_1084) {
        uVar8 = 0;
        do {
          iVar11 = 0;
          while (*(char *)((int)local_1104 - iVar11) == str_10003f31[-iVar11]) {
            bVar3 = iVar11 == -0x19;
            iVar11 = iVar11 + -1;
            if (bVar3) {
              if (uVar8 != 0xffffffff) goto LAB_10001a5c;
              goto LAB_10001a38;
            }
          }
          uVar8 = uVar8 + 1;
          local_1104 = (int *)((int)local_1104 + 1);
        } while (uVar8 <= local_1084 - 0x1a);
      }
LAB_10001a38:
      local_90 = 0x29;
      recovered_10003788((char *)&local_10a8,(byte *)str_10003f4c);
    }
LAB_10001a5c:
    _ZdlPv(local_1088);
    if (3 < local_108c) {
      local_90 = 0x2a;
      recovered_10002ba4(local_108c,aiStack_1098);
    }
  }
  if (local_10f8 == 0) {
    local_1108 = 1;
  }
  else {
    local_90 = 0x2b;
    pf_command_result_10003fb0(&local_10a8,&uStack_1100,&local_10fc);
    pcVar6 = str_10003f7a;
    local_90 = 0x2c;
    if ((char)local_10a8 != '\0') {
      pcVar6 = (char *)0x0;
    }
    recovered_10003788((char *)&local_10a8,(byte *)pcVar6);
    local_1108 = (uint)local_10a8 & 0xff;
    _ZdlPv(local_1088);
    if (3 < local_108c) {
      local_90 = 0x2d;
      recovered_10002ba4(local_108c,aiStack_1098);
    }
  }
  if (local_10f0 == '\x01') {
    local_1104 = aiStack_10c8;
    do {
      local_90 = 0x2e;
      bVar3 = wm_lua_readline((int)&local_10a8,0x1000,str_10003f88,1);
      if (!bVar3) break;
      local_10d0 = 0;
      local_10d4 = 0;
      local_10d8 = (char *)0x0;
      uVar8 = 0;
      do {
        uVar10 = uVar8;
        uVar8 = uVar10 + 1;
      } while (*(char *)((int)&local_10a8 + uVar10) != '\0');
      local_90 = 0x2f;
      recovered_10002440((int *)&local_10d8,(int)&local_10a8,uVar10);
      pcVar6 = local_10d8;
      if (local_10d8 == (char *)0x0) {
        pcVar6 = &DAT_10003db7;
      }
      if (local_10d4 == 5) {
        cVar1 = *pcVar6;
        bVar3 = cVar1 == '.';
        if (bVar3) {
          cVar1 = pcVar6[1];
        }
        if (bVar3 && cVar1 == 'e') {
          cVar1 = pcVar6[2];
          bVar3 = cVar1 == 'x';
          if (bVar3) {
            cVar1 = pcVar6[3];
          }
          if (bVar3 && cVar1 == 'i') {
            cVar1 = pcVar6[4];
joined_r0x10001f8c:
            if (cVar1 == 't') {
              _ZdlPv(local_10d8);
              break;
            }
          }
        }
      }
      else if (local_10d4 == 4) {
        cVar1 = *pcVar6;
        if (cVar1 == 'q') {
          if (pcVar6[1] == 'u') goto LAB_10001e80;
        }
        else {
          bVar3 = cVar1 == 'e';
          if (bVar3) {
            cVar1 = pcVar6[1];
          }
          if (bVar3 && cVar1 == 'x') {
LAB_10001e80:
            if (pcVar6[2] == 'i') {
              cVar1 = pcVar6[3];
              goto joined_r0x10001f8c;
            }
          }
        }
      }
      _ZdlPv(local_10d8);
      local_10d0 = 0;
      local_10d4 = 0;
      local_10d8 = (char *)0x0;
      uVar8 = 0;
      do {
        uVar10 = uVar8;
        uVar8 = uVar10 + 1;
      } while (*(char *)((int)&local_10a8 + uVar10) != '\0');
      local_90 = 0x30;
      recovered_10002440((int *)&local_10d8,(int)&local_10a8,uVar10);
      pcVar6 = local_10d8;
      if (local_10d8 == (char *)0x0) {
        pcVar6 = &DAT_10003db7;
      }
      if (local_10d4 == 5) {
        cVar1 = *pcVar6;
        bVar3 = cVar1 == ':';
        if (bVar3) {
          cVar1 = pcVar6[1];
        }
        if (!bVar3 || cVar1 != 'h') goto LAB_10001cbc;
        cVar1 = pcVar6[2];
        bVar3 = cVar1 != 'e';
        if (!bVar3) {
          cVar1 = pcVar6[3];
        }
        if ((bVar3 || cVar1 != 'l') || (pcVar6[4] != 'p')) goto LAB_10001cbc;
LAB_10001ef8:
        _ZdlPv(local_10d8);
        local_90 = 0x32;
        wm_lua_write(str_10003f0f,0xe);
        local_90 = 0x33;
        wm_lua_writeline();
        local_90 = 0x34;
        wm_lua_write(&DAT_10003db7,0);
        local_90 = 0x35;
        wm_lua_writeline();
      }
      else {
LAB_10001cbc:
        local_9c = 0;
        local_a0 = 0;
        local_a4 = (byte *)0x0;
        uVar8 = 0;
        do {
          uVar10 = uVar8;
          uVar8 = uVar10 + 1;
        } while (*(char *)((int)&local_10a8 + uVar10) != '\0');
        local_90 = 0x31;
        recovered_10002440((int *)&local_a4,(int)&local_10a8,uVar10);
        pbVar9 = local_a4;
        if (local_a4 == (byte *)0x0) {
          pbVar9 = &DAT_10003db7;
        }
        if (local_a0 == 6) {
          bVar2 = *pbVar9;
          bVar3 = bVar2 == 0x68;
          if (bVar3) {
            bVar2 = pbVar9[1];
          }
          if (bVar3 && bVar2 == 0x65) {
            bVar2 = pbVar9[2];
            bVar3 = bVar2 == 0x6c;
            if (bVar3) {
              bVar2 = pbVar9[3];
            }
            if (bVar3 && bVar2 == 0x70) {
              pbVar7 = pbVar9 + 4;
              if (*pbVar7 == 0x28) {
                pbVar9 = (byte *)(uint)pbVar9[5];
              }
              if (*pbVar7 == 0x28 && pbVar9 == (byte *)0x29) {
                _ZdlPv(local_a4);
                goto LAB_10001ef8;
              }
            }
          }
        }
        _ZdlPv(local_a4);
        _ZdlPv(local_10d8);
        if ((char)local_10a8 != '\0') {
          local_9c = 0;
          local_a0 = 0;
          local_a4 = (byte *)0x0;
          uVar8 = 0;
          do {
            uVar10 = uVar8;
            uVar8 = uVar10 + 1;
          } while (*(char *)((int)&local_10a8 + uVar10) != '\0');
          local_90 = 0x36;
          recovered_10002440((int *)&local_a4,(int)&local_10a8,uVar10);
          local_10dc = 0;
          local_10e0 = 0;
          local_10e4 = (byte *)0x0;
          local_90 = 0x37;
          recovered_10002440((int *)&local_10e4,((uintptr_t)pf_module_state + 0x5d5U),7);
          local_90 = 0x38;
          pf_command_result_10003fb4(&local_10d8,&uStack_1100,&local_a4,&local_10e4);
          _ZdlPv(local_10e4);
          _ZdlPv(local_a4);
          local_90 = 0x39;
          recovered_10003788((char *)&local_10d8,(byte *)0x0);
          _ZdlPv(local_10b8);
          if (3 < local_10bc) {
            local_90 = 0x3a;
            recovered_10002ba4(local_10bc,local_1104);
          }
        }
      }
    } while (local_10f0 != '\0');
  }
  _ZN6winter4ruby6RubyVMD1Ev(&uStack_1100);
  _ZdlPv(local_10fc);
  local_90 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&uStack_94);
  return local_1108;
  while (uVar8 = uVar8 - 1, pbVar9 = pbVar9 + 1, pbVar7 = pbVar7 + 1, uVar8 != 0) {
LAB_100011a8:
    uVar10 = (uint)*pbVar7;
    uVar12 = (uint)*pbVar9;
    if (uVar10 - 0x41 < 0x1a) {
      uVar10 = uVar10 | 0x20;
    }
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar12 != uVar10) goto LAB_100011dc;
  }
LAB_10000f58:
  local_90 = 5;
  pbVar9 = local_10e4;
  if (local_10e4 == (byte *)0x0) {
    pbVar9 = &DAT_10003db7;
  }
  recovered_10002440((int *)&local_10fc,(int)pbVar9,local_10e0);
  goto LAB_10000f8c;
LAB_100011dc:
  local_10a0[0] = 0;
  local_10a4 = 0;
  local_10a8 = (void *)0x0;
  local_1110 = local_a0;
  local_90 = 6;
  recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x3ffU),7);
  uVar8 = local_10a4;
  _ZdlPv(local_10a8);
  if (local_1110 != uVar8) goto LAB_10000f8c;
  if (local_a0 != 0) {
    pbVar9 = local_a4;
    if (local_a4 == (byte *)0x0) {
      pbVar9 = &DAT_10003db7;
    }
    uVar8 = local_a0;
    pbVar7 = (byte *)str_10003dbf;
    do {
      uVar10 = (uint)*pbVar7;
      uVar12 = (uint)*pbVar9;
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      if (uVar12 - 0x41 < 0x1a) {
        uVar12 = uVar12 | 0x20;
      }
      if (uVar12 != uVar10) goto LAB_10000f8c;
      uVar8 = uVar8 - 1;
      pbVar9 = pbVar9 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
  }
  local_1110 = local_10e0;
  local_90 = 7;
  local_10a0[0] = 0;
  local_10a4 = 0;
  local_10a8 = (void *)0x0;
  recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x407U),4);
  uVar8 = local_10a4;
  _ZdlPv(local_10a8);
  if (local_1110 == uVar8) {
    bVar3 = true;
    if (local_10e0 != 0) {
      uVar8 = 0;
      pbVar9 = local_10e4;
      if (local_10e4 == (byte *)0x0) {
        pbVar9 = &DAT_10003db7;
      }
      do {
        uVar12 = (uint)pbVar9[uVar8];
        uVar10 = (uint)(byte)(&DAT_10003dc7)[uVar8];
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar10 - 0x41 < 0x1a) {
          uVar10 = uVar10 | 0x20;
        }
        if (uVar12 != uVar10) goto LAB_10001374;
        uVar8 = uVar8 + 1;
      } while (local_10e0 != uVar8);
    }
  }
  else {
LAB_10001374:
    if (local_10e0 == 1) {
      bVar3 = true;
      pbVar9 = local_10e4;
      if (local_10e4 == (byte *)0x0) {
        pbVar9 = &DAT_10003db7;
      }
      if (*pbVar9 == 0x31) goto LAB_1000153c;
    }
    local_1110 = local_10e0;
    local_10a0[0] = 0;
    local_10a4 = 0;
    local_10a8 = (void *)0x0;
    local_90 = 8;
    recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x40cU),3);
    uVar8 = local_10a4;
    _ZdlPv(local_10a8);
    if (local_1110 == uVar8) {
      bVar3 = true;
      if (local_10e0 != 0) {
        pbVar9 = local_10e4;
        if (local_10e4 == (byte *)0x0) {
          pbVar9 = &DAT_10003db7;
        }
        pbVar7 = &DAT_10003dcc;
        uVar8 = local_10e0;
        do {
          uVar12 = (uint)*pbVar7;
          uVar10 = (uint)*pbVar9;
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar10 - 0x41 < 0x1a) {
            uVar10 = uVar10 | 0x20;
          }
          if (uVar10 != uVar12) goto LAB_10001460;
          uVar8 = uVar8 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
LAB_10001460:
      local_10a0[0] = 0;
      local_10a4 = 0;
      local_10a8 = (void *)0x0;
      local_1110 = local_10e0;
      local_90 = 9;
      recovered_10002440((int *)&local_10a8,((uintptr_t)pf_module_state + 0x410U),2);
      uVar8 = local_10a4;
      _ZdlPv(local_10a8);
      bVar3 = false;
      if (local_1110 == uVar8) {
        if (local_10e0 == 0) {
          bVar3 = true;
        }
        else {
          pbVar9 = local_10e4;
          if (local_10e4 == (byte *)0x0) {
            pbVar9 = &DAT_10003db7;
          }
          pbVar7 = &DAT_10003dd0;
          uVar8 = local_10e0;
          do {
            uVar8 = uVar8 - 1;
            uVar10 = (uint)*pbVar7;
            uVar12 = (uint)*pbVar9;
            if (uVar10 - 0x41 < 0x1a) {
              uVar10 = uVar10 | 0x20;
            }
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            bVar3 = uVar12 == uVar10;
          } while ((uVar12 == uVar10) && (pbVar9 = pbVar9 + 1, pbVar7 = pbVar7 + 1, uVar8 != 0));
        }
      }
    }
  }
LAB_1000153c:
  local_10f0 = bVar3;
LAB_10000f8c:
  _ZdlPv(local_10e4);
  _ZdlPv(local_a4);
LAB_10000fa8:
  _ZdlPv(local_10d8);
  piVar4 = (int *)((int)local_1104 + 1);
  if (piVar4 == local_110c) goto LAB_10001544;
  goto LAB_10000fc0;
}

#undef DAT_10001ec0
#undef DAT_10001ec4
#undef DAT_10003db7
#undef DAT_10003dc7
#undef DAT_10003dcc
#undef DAT_10003dd0
#undef DAT_10008014
#undef DAT_10008028
#undef DAT_10008074
#undef str_10003db8
#undef str_10003dbf
#undef str_10003e32
#undef str_10003e54
#undef str_10003e8c
#undef str_10003ebf
#undef str_10003ee2
#undef str_10003f0f
#undef str_10003f1e
#undef str_10003f27
#undef str_10003f31
#undef str_10003f4c
#undef str_10003f7a
#undef str_10003f88
#undef auStack_1120
#undef uStack_1100
#undef aiStack_10c8
#undef aiStack_1098
#undef uStack_94
#undef local_1110
#undef local_110c
#undef auStack_68
#undef local_1108
#undef local_1104
#undef local_10fc
#undef local_10f8
#undef local_10f4
#undef local_10f0
#undef local_10ec
#undef local_10e8
#undef local_10e4
#undef local_10e0
#undef local_10dc
#undef local_10d8
#undef local_10d4
#undef local_10d0
#undef local_10bc
#undef local_10b8
#undef local_10a8
#undef local_10a4
#undef local_10a0
#undef local_108c
#undef local_1088
#undef local_1084
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023fc
 */

void recovered_100023fc(char *param_1)

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


#define pvStack_34 (*(void * *)(pf_stack_frame + 28))
#define iStack_30 (*(int *)(pf_stack_frame + 32))
#define iStack_2c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002430
 */

void recovered_10002430(int param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *extraout_r0 = 0;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint uVar5;
  uint extraout_r2 = 0;
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

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  puVar12 = (undefined1 *)*extraout_r0;
  uVar1 = 0;
  if (extraout_r1 != 0) {
    uVar1 = extraout_r2;
  }
  if (extraout_r1 != 0 && puVar12 != (undefined1 *)0x0) {
    uVar13 = extraout_r1 - (int)puVar12;
    uVar6 = 0;
    do {
      if (uVar13 == uVar6) {
        uVar6 = extraout_r0[1] - uVar13;
        iStack_2c = 0;
        if (uVar1 < uVar6) {
          uVar6 = uVar1;
        }
        iStack_30 = 0;
        pvStack_34 = (void *)0x0;
        recovered_10002440((int *)&pvStack_34,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*extraout_r0;
        iVar7 = extraout_r0[1];
        iVar8 = extraout_r0[2];
        *extraout_r0 = (int)pvStack_34;
        extraout_r0[1] = iStack_30;
        extraout_r0[2] = iStack_2c;
        pvStack_34 = pvVar4;
        iStack_30 = iVar7;
        iStack_2c = iVar8;
        _ZdlPv(pvVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= (uint)extraout_r0[1]);
  }
  extraout_r0[1] = 0;
  if (puVar12 != (undefined1 *)0x0) {
    *puVar12 = 0;
  }
  if (uVar1 == 0) {
    if (*extraout_r0 == 0) {
      puVar12 = _Znwm(1);
      *extraout_r0 = (int)puVar12;
      *puVar12 = 0;
      extraout_r0[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)extraout_r0[2]) goto LAB_1000252c;
  puVar2 = _Znwm(uVar1 + 1);
  uVar13 = extraout_r0[1];
  puVar3 = (undefined8 *)*extraout_r0;
  uVar6 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar13 != 0) {
    bVar14 = uVar13 == 0x10;
    uVar5 = extraout_r1_00;
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
      if (uVar13 == uVar6) goto LAB_10002510;
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
LAB_10002510:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  _ZdlPv(puVar3);
  extraout_r0[2] = uVar1;
  *extraout_r0 = (int)puVar2;
LAB_1000252c:
  uVar6 = 0;
  do {
    *(undefined1 *)(*extraout_r0 + uVar6) = *(undefined1 *)(extraout_r1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  extraout_r0[1] = extraout_r2;
  *(undefined1 *)(*extraout_r0 + extraout_r2) = 0;
  return;
}

#undef pvStack_34
#undef iStack_30
#undef iStack_2c

#define local_2c (*(void * *)(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

void recovered_10002440(int *param_1,int param_2,uint param_3)

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
        recovered_10002440((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
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
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000252c;
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
      if (uVar13 == uVar6) goto LAB_10002510;
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
LAB_10002510:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  _ZdlPv(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000252c:
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002604
 */

void recovered_10002604(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000402c
#define DAT_1000402c (*(code * *)(((uintptr_t)pf_module_state + 0x66cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002608
 */

void recovered_10002608(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x60cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000402c)(param_1);
  return;
}

#undef DAT_1000402c

#undef DAT_100029a8
#define DAT_100029a8 (*(int *)(0x100029a8U))
#undef DAT_100029ac
#define DAT_100029ac (*(int *)(0x100029acU))
#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4644U)))
#undef DAT_10008010
#define DAT_10008010 (*(int *)(((uintptr_t)pf_module_state + 0x4650U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4648U)))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 92))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 136))
#define local_dc (*(undefined1 * *)(pf_stack_frame + 20))
#define local_d8 (*(char (*)[216])(pf_stack_frame + 24))
#define local_d0 (*(undefined1 *)(pf_stack_frame + 32))
#define local_c8 (*(undefined1 * *)(pf_stack_frame + 40))
#define local_bc (*(uint *)(pf_stack_frame + 52))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 56))
#define local_b4 (*(uint *)(pf_stack_frame + 60))
#define local_a8 (*(void * *)(pf_stack_frame + 72))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 80))
#define local_9c (*(int * *)(pf_stack_frame + 84))
#define local_98 (*(int * *)(pf_stack_frame + 88))
#define local_90 (*(undefined4 *)(pf_stack_frame + 96))
#define local_7c (*(undefined4 *)(pf_stack_frame + 116))
#define local_78 (*(int *)(pf_stack_frame + 120))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 124))
#define local_70 (*(int *)(pf_stack_frame + 128))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 132))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define uStack_c4 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000260c
 */

void recovered_1000260c(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_e0;
  iVar5 = param_4[1];
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x1d4U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x29cULL}) + 0x1000266c;
  local_dc = param_1;
  _Unwind_SjLj_Register(&uStack_94);
  if (iVar5 == 1) {
    local_90 = 0xffffffff;
    pcVar2 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_a8 = (void *)0x0;
    puVar4 = *(undefined1 **)pcVar2;
    local_a4 = 0;
    local_a0 = 0;
    local_90 = 0xffffffff;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_10003db7;
    }
    recovered_10002440((int *)&local_a8,(int)puVar4,*(uint *)(pcVar2 + 4));
    local_90 = 2;
    pf_command_result_10003fb0(local_d8,param_3,&local_a8);
    if (local_d8[0] != '\0') {
      *local_dc = local_d0;
      *(uint *)(local_dc + 0x14) = local_bc;
      if ((local_bc != 0) && (local_bc - 1 < 7)) {
        piVar3 = (int *)(local_dc + 8);
        switch((uintptr_t)(local_bc)) {
        case 1:
          *(uint *)(local_dc + 0xc) = uStack_c4;
          *piVar3 = (int)local_c8;
          break;
        case 2:
          *(ulonglong *)piVar3 = CONCAT44(uStack_c4,local_c8);
          break;
        case 3:
          *(undefined1 *)piVar3 = PF_PART1(local_c8, 0);
          break;
        case 4:
          *(undefined4 *)(local_dc + 0x10) = 0;
          *(undefined4 *)(local_dc + 0xc) = 0;
          *(undefined4 *)(local_dc + 8) = 0;
          local_90 = 5;
          puVar4 = &DAT_10003db7;
          if (local_c8 != (undefined1 *)0x0) {
            puVar4 = local_c8;
          }
          recovered_10002440(piVar3,(int)puVar4,uStack_c4);
          break;
        default:
          *(uint *)(local_dc + 0xc) = uStack_c4;
          if (local_c8 != (undefined1 *)0x0) {
            uStack_c4 = *(uint *)(local_c8 + 4);
          }
          *(undefined1 **)(local_dc + 8) = local_c8;
          if (local_c8 != (undefined1 *)0x0) {
            *(uint *)(local_c8 + 4) = uStack_c4 + 1;
          }
        }
      }
      _ZdlPv(local_b8);
      if (3 < local_bc) {
        local_90 = 6;
        recovered_10002ba4(local_bc,(int *)&local_c8);
      }
      _ZdlPv(local_a8);
      _Unwind_SjLj_Unregister(&uStack_94);
      return;
    }
  }
  else {
    local_9c = __cxa_allocate_exception(0x10);
    local_90 = 1;
    recovered_100029d8(local_9c,((uintptr_t)pf_module_state + 0x423U));
    local_90 = 0xffffffff;
    __cxa_throw((int)local_9c,PTR_DAT_10008008,DAT_10008004);
  }
  local_98 = __cxa_allocate_exception(0x10);
  *local_98 = DAT_10008010 + 8;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_90 = 3;
  puVar4 = &DAT_10003db7;
  if (local_b8 != (undefined1 *)0x0) {
    puVar4 = local_b8;
  }
  recovered_10002440(local_98 + 1,(int)puVar4,local_b4);
  local_90 = 4;
  __cxa_throw((int)local_98,PTR_DAT_10008008,DAT_10008004);
                    /* WARNING: Does not return */
  __builtin_trap();
}

#undef DAT_100029a8
#undef DAT_100029ac
#undef DAT_10003db7
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008014
#undef PTR_DAT_10008008
#undef uStack_94
#undef auStack_68
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_e0
#undef uStack_c4

#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4668U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b0
 */

void recovered_100029b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = _Znwm(8);
  *puVar1 = &DAT_10008028;
  return;
}

#undef DAT_10008028

#undef DAT_10008010
#define DAT_10008010 (*(int *)(((uintptr_t)pf_module_state + 0x4650U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029d8
 */

int * recovered_100029d8(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  iVar1 = DAT_10008010;
  uVar3 = 0;
  param_1[3] = 0;
  *param_1 = iVar1 + 8;
  param_1[2] = 0;
  param_1[1] = 0;
  uVar2 = uVar3;
  if (param_2 != 0) {
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 + 1;
    } while (*(char *)(param_2 + uVar3) != '\0');
  }
  recovered_10002440(param_1 + 1,param_2,uVar3);
  return param_1;
}

#undef DAT_10008010

#undef DAT_10008010
#define DAT_10008010 (*(int *)(((uintptr_t)pf_module_state + 0x4650U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a34
 */

int * recovered_10002a34(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10008010 + 8;
  _ZdlPv((void *)param_1[1]);
  return param_1;
}

#undef DAT_10008010

#undef DAT_10002b48
#define DAT_10002b48 (*(int *)(0x10002b48U))
#undef DAT_10002b4c
#define DAT_10002b4c (*(int *)(0x10002b4cU))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#define local_98 (*(int *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a64
 */

int recovered_10002a64(int param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;

  _ZdlPv(*(void **)(param_1 + 0x20));
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x1ecU);
  uVar1 = *(uint *)(param_1 + 0x1c);
  local_70 = (*(uint32_t *)(uint32_t[]){0x54ULL}) + 0x10002ac4;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  _Unwind_SjLj_Register(&uStack_94);
  if (3 < uVar1) {
    local_90 = 1;
    local_98 = param_1;
    recovered_10002ba4(uVar1,(int *)(param_1 + 0x10));
    param_1 = local_98;
  }
  _Unwind_SjLj_Unregister(&uStack_94);
  return param_1;
}

#undef DAT_10002b48
#undef DAT_10002b4c
#undef DAT_10008014
#undef local_98
#undef local_90
#undef auStack_68
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_10008010
#define DAT_10008010 (*(int *)(((uintptr_t)pf_module_state + 0x4650U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b50
 */

void recovered_10002b50(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10008010 + 8;
  _ZdlPv((void *)param_1[1]);
  _ZdlPv(param_1);
  return;
}

#undef DAT_10008010

#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b84
 */

undefined1 * recovered_10002b84(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10003db7;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 4);
  }
  return puVar1;
}

#undef DAT_10003db7

#undef DAT_10002cf0
#define DAT_10002cf0 (*(int *)(0x10002cf0U))
#undef DAT_10002cf4
#define DAT_10002cf4 (*(int *)(0x10002cf4U))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba4
 */

void recovered_10002ba4(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x1fcU);
  local_70 = (*(uint32_t *)(uint32_t[]){0xc4ULL}) + 0x10002bfc;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_1 == 5) {
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[1];
      piVar1[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        local_90 = 1;
        local_98 = param_2;
        (**(code **)(*piVar1 + 8))();
        param_2 = local_98;
        piVar1 = (int *)*local_98;
        iVar2 = piVar1[2];
        piVar1[2] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      param_2[1] = 0;
      *param_2 = 0;
    }
  }
  else if (param_1 == 4) {
    _ZdlPv((void *)*param_2);
  }
  else {
    local_90 = 0xffffffff;
    recovered_10002cf8(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10002cf0
#undef DAT_10002cf4
#undef DAT_10008014
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

#undef DAT_10002e60
#define DAT_10002e60 (*(int *)(0x10002e60U))
#undef DAT_10002e64
#define DAT_10002e64 (*(int *)(0x10002e64U))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf8
 */

void recovered_10002cf8(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x20cU);
  local_70 = (*(uint32_t *)(uint32_t[]){0xd8ULL}) + 0x10002d50;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10002e08;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 2;
      local_98 = param_2;
      (**(code **)(*piVar1 + 8))();
      goto LAB_10002dd8;
    }
  }
  else {
    if ((param_1 != 6) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10002e08;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 1;
      local_98 = param_2;
      (**(code **)(*piVar1 + 8))();
LAB_10002dd8:
      param_2 = local_98;
      piVar1 = (int *)*local_98;
      iVar2 = piVar1[2];
      piVar1[2] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
LAB_10002e08:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10002e60
#undef DAT_10002e64
#undef DAT_10008014
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e68
 */

void recovered_10002e68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000402c
#define DAT_1000402c (*(code * *)(((uintptr_t)pf_module_state + 0x66cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e6c
 */

void recovered_10002e6c(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x60cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000402c)(param_1);
  return;
}

#undef DAT_1000402c

#undef DAT_100033ac
#define DAT_100033ac (*(int *)(0x100033acU))
#undef DAT_100033b0
#define DAT_100033b0 (*(int *)(0x100033b0U))
#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4644U)))
#undef DAT_10008010
#define DAT_10008010 (*(int *)(((uintptr_t)pf_module_state + 0x4650U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4648U)))
#define local_f8 (*(void * *)(pf_stack_frame + 24))
#define local_f4 (*(undefined1 * *)(pf_stack_frame + 28))
#define local_f0 (*(undefined1 * *)(pf_stack_frame + 32))
#define local_ec (*(uint *)(pf_stack_frame + 36))
#define local_e8 (*(undefined1 *)(pf_stack_frame + 40))
#define local_e0 (*(undefined1 * *)(pf_stack_frame + 48))
#define local_d4 (*(uint *)(pf_stack_frame + 60))
#define local_d0 (*(undefined1 * *)(pf_stack_frame + 64))
#define local_cc (*(uint *)(pf_stack_frame + 68))
#define local_c0 (*(void * *)(pf_stack_frame + 80))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 16))
#define local_bc (*(undefined4 *)(pf_stack_frame + 84))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 88))
#define local_b4 (*(ulong *)(pf_stack_frame + 92))
#define local_b0 (*(void * *)(pf_stack_frame + 96))
#define local_ac (*(undefined1 * *)(pf_stack_frame + 100))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 104))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 108))
#define local_a0 (*(int * *)(pf_stack_frame + 112))
#define uStack_dc (*(uint *)(pf_stack_frame + 52))
#define local_9c (*(int * *)(pf_stack_frame + 116))
#define local_98 (*(int * *)(pf_stack_frame + 120))
#define local_90 (*(undefined4 *)(pf_stack_frame + 128))
#define local_7c (*(undefined4 *)(pf_stack_frame + 148))
#define local_78 (*(int *)(pf_stack_frame + 152))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 156))
#define local_70 (*(int *)(pf_stack_frame + 160))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 164))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 124))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e70
 */

void recovered_10002e70(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  iVar5 = param_4[1];
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x21cU);
  local_70 = (*(uint32_t *)(uint32_t[]){0x3d4ULL}) + 0x10002ed0;
  local_f8 = param_3;
  local_f4 = param_1;
  _Unwind_SjLj_Register(&uStack_94);
  if (iVar5 == 1) {
    local_90 = 0xffffffff;
    pcVar2 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_ac = (undefined1 *)0x0;
    puVar4 = *(undefined1 **)pcVar2;
    local_a8 = 0;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_10003db7;
    }
    local_a4 = 0;
    local_90 = 0xffffffff;
    recovered_10002440((int *)&local_ac,(int)puVar4,*(uint *)(pcVar2 + 4));
    local_b0 = (void *)0x0;
    local_90 = 2;
    puVar4 = local_ac;
    if (local_ac == (undefined1 *)0x0) {
      puVar4 = &DAT_10003db7;
    }
    local_b4 = 0;
    iVar5 = wmfs_read_entire_file((int)puVar4,&local_b0,&local_b4);
    if (iVar5 != 0) {
      local_b8 = 0;
      local_bc = 0;
      local_c0 = (void *)0x0;
      if (local_b0 != (void *)0x0 && local_b4 != 0) {
        local_90 = 6;
        recovered_10002440((int *)&local_c0,(int)local_b0,local_b4);
      }
      local_90 = 7;
      free(local_b0);
      local_90 = 8;
      pf_command_result_10003fb4(&local_f0,local_f8,&local_c0,&local_ac);
      if ((char)local_f0 != '\0') {
        *local_f4 = local_e8;
        *(uint *)(local_f4 + 0x14) = local_d4;
        if ((local_d4 != 0) && (local_d4 - 1 < 7)) {
          piVar3 = (int *)(local_f4 + 8);
          switch((uintptr_t)(local_d4)) {
          case 1:
            *(uint *)(local_f4 + 0xc) = uStack_dc;
            *piVar3 = (int)local_e0;
            break;
          case 2:
            *(ulonglong *)piVar3 = CONCAT44(uStack_dc,local_e0);
            break;
          case 3:
            *(undefined1 *)piVar3 = PF_PART1(local_e0, 0);
            break;
          case 4:
            *(undefined4 *)(local_f4 + 0x10) = 0;
            *(undefined4 *)(local_f4 + 0xc) = 0;
            *(undefined4 *)(local_f4 + 8) = 0;
            local_90 = 0xb;
            puVar4 = &DAT_10003db7;
            if (local_e0 != (undefined1 *)0x0) {
              puVar4 = local_e0;
            }
            recovered_10002440(piVar3,(int)puVar4,uStack_dc);
            break;
          default:
            *(undefined1 **)(local_f4 + 8) = local_e0;
            *(uint *)(local_f4 + 0xc) = uStack_dc;
            if (local_e0 != (undefined1 *)0x0) {
              *(int *)(local_e0 + 4) = *(int *)(local_e0 + 4) + 1;
            }
          }
        }
        _ZdlPv(local_d0);
        if (3 < local_d4) {
          local_90 = 0xc;
          recovered_10002ba4(local_d4,(int *)&local_e0);
        }
        _ZdlPv(local_c0);
        _ZdlPv(local_ac);
        _Unwind_SjLj_Unregister(&uStack_94);
        return;
      }
      local_98 = __cxa_allocate_exception(0x10);
      *local_98 = DAT_10008010 + 8;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_90 = 9;
      puVar4 = &DAT_10003db7;
      if (local_d0 != (undefined1 *)0x0) {
        puVar4 = local_d0;
      }
      recovered_10002440(local_98 + 1,(int)puVar4,local_cc);
      local_90 = 10;
      __cxa_throw((int)local_98,PTR_DAT_10008008,DAT_10008004);
      goto LAB_100032b0;
    }
  }
  else {
    local_a0 = __cxa_allocate_exception(0x10);
    local_90 = 1;
    recovered_100029d8(local_a0,((uintptr_t)pf_module_state + 0x43bU));
    local_90 = 0xffffffff;
    __cxa_throw((int)local_a0,PTR_DAT_10008008,DAT_10008004);
  }
  local_9c = __cxa_allocate_exception(0x10);
  local_90 = 3;
  recovered_100033dc((int *)&local_f0,((uintptr_t)pf_module_state + 0x455U),&local_ac);
  *local_9c = DAT_10008010 + 8;
  local_9c[2] = 0;
  local_9c[3] = 0;
  local_9c[1] = 0;
  local_90 = 4;
  puVar4 = &DAT_10003db7;
  if (local_f0 != (undefined1 *)0x0) {
    puVar4 = local_f0;
  }
  recovered_10002440(local_9c + 1,(int)puVar4,local_ec);
  local_90 = 5;
  __cxa_throw((int)local_9c,PTR_DAT_10008008,DAT_10008004);
LAB_100032b0:
                    /* WARNING: Does not return */
  __builtin_trap();
}

#undef DAT_100033ac
#undef DAT_100033b0
#undef DAT_10003db7
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008014
#undef PTR_DAT_10008008
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e0
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c0
#undef auStack_100
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef uStack_dc
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10008074
#define DAT_10008074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b4
 */

void recovered_100033b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = _Znwm(8);
  *puVar1 = &DAT_10008074;
  return;
}

#undef DAT_10008074

#undef DAT_10003528
#define DAT_10003528 (*(int *)(0x10003528U))
#undef DAT_1000352c
#define DAT_1000352c (*(int *)(0x1000352cU))
#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 16))
#define local_98 (*(int * *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033dc
 */

void recovered_100033dc(int *param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;

  local_78 = (*(uint32_t *)(uint32_t[]){0x7c8ULL});
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_7c = DAT_10008014;
  local_78 = local_78 + 0x10003438;
  param_1[2] = 0;
  local_70 = (*(uint32_t *)(uint32_t[]){0x90ULL}) + 0x10003454;
  local_98 = param_1;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 + 1;
    } while (*(char *)(param_2 + uVar3) != '\0');
  }
  local_90 = 0xffffffff;
  recovered_10002440(local_98,param_2,uVar3);
  local_90 = 1;
  puVar2 = &DAT_10003db7;
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*param_3;
  }
  recovered_10003530(local_98,(int)puVar2,param_3[1]);
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10003528
#undef DAT_1000352c
#undef DAT_10003db7
#undef DAT_10008014
#undef local_70
#undef local_6c
#undef auStack_68
#undef auStack_a0
#undef local_98
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

void recovered_10003530(int *param_1,int param_2,uint param_3)

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
LAB_1000356c:
    if (uVar10 != uVar6) goto code_r0x10003574;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_10003738;
    puVar12 = _Znwm(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_10003718;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_100036fc;
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
LAB_100036fc:
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
LAB_10003718:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    _ZdlPv(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_10003738:
    if (param_3 == 0) goto LAB_10003764;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_10003760;
  }
  uVar11 = param_1[1];
LAB_10003588:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_10003644;
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
      if (uVar6 == uVar10) goto LAB_10003624;
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
LAB_10003624:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  _ZdlPv(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_10003644:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_10003760:
  puVar12 = (undefined8 *)*param_1;
LAB_10003764:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x10003574:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_10003588;
  goto LAB_1000356c;
}


#undef DAT_100039b8
#define DAT_100039b8 (*(int *)(0x100039b8U))
#undef DAT_100039bc
#define DAT_100039bc (*(int *)(0x100039bcU))
#undef DAT_10003db7
#define DAT_10003db7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f7U)))
#undef DAT_10003f5b
#define DAT_10003f5b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bU)))
#undef DAT_10008014
#define DAT_10008014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4654U)))
#undef str_10003f5e
#define str_10003f5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59eU)))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 28))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 72))
#define local_a0 (*(char * *)(pf_stack_frame + 16))
#define local_9c (*(int *)(pf_stack_frame + 20))
#define local_98 (*(undefined4 *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_7c (*(undefined4 *)(pf_stack_frame + 52))
#define local_78 (*(int *)(pf_stack_frame + 56))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 60))
#define local_70 (*(int *)(pf_stack_frame + 64))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003788
 */

void recovered_10003788(char *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint extraout_r0 = 0;
  uint uVar3;
  int iVar4;
  char *pcVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  cVar1 = *param_1;
  local_7c = DAT_10008014;
  local_78 = ((uintptr_t)pf_module_state + 0x248U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x180ULL}) + 0x100037e4;
  _Unwind_SjLj_Register(&uStack_94);
  if (cVar1 == '\x01') {
    if (param_1[8] == '\0') goto LAB_10003944;
    local_90 = 0xffffffff;
    pf_command_result_10003fc4(&local_a0,param_1 + 8);
    local_90 = 1;
    pcVar5 = &DAT_10003db7;
    if (local_a0 != (char *)0x0) {
      pcVar5 = local_a0;
    }
    wm_lua_write(pcVar5,local_9c);
    local_90 = 2;
    wm_lua_writeline();
  }
  else {
    uVar3 = extraout_r0;
    if (param_2 != (byte *)0x0) {
      uVar3 = (uint)*param_2;
    }
    if (param_2 != (byte *)0x0 && uVar3 != 0) {
      iVar2 = 0;
      do {
        iVar4 = iVar2;
        iVar2 = iVar4 + 1;
      } while (param_2[iVar4] != 0);
      local_90 = 0xffffffff;
      wm_lua_write((char *)param_2,iVar4);
      local_90 = 0xffffffff;
      wm_lua_write(&DAT_10003f5b,2);
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    if (uVar3 == 0) {
      pcVar5 = str_10003f5e;
      uVar3 = 0x1b;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x20);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = &DAT_10003db7;
      }
    }
    local_90 = 0xffffffff;
    local_98 = 0;
    local_9c = 0;
    local_a0 = (char *)0x0;
    recovered_10002440((int *)&local_a0,(int)pcVar5,uVar3);
    local_90 = 3;
    pcVar5 = &DAT_10003db7;
    if (local_a0 != (char *)0x0) {
      pcVar5 = local_a0;
    }
    wm_lua_write(pcVar5,local_9c);
    local_90 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_a0);
LAB_10003944:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_100039b8
#undef DAT_100039bc
#undef DAT_10003db7
#undef DAT_10003f5b
#undef DAT_10008014
#undef str_10003f5e
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
