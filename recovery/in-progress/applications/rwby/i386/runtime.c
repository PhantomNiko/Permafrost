/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003deb
#define DAT_10003deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef DAT_10003dfb
#define DAT_10003dfb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44fU)))
#undef DAT_10003e00
#define DAT_10003e00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x454U)))
#undef DAT_10003e04
#define DAT_10003e04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x458U)))
#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#undef DAT_10004088
#define DAT_10004088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dcU)))
#undef DAT_100040d4
#define DAT_100040d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x728U)))
#undef str_10003dec
#define str_10003dec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x440U)))
#undef str_10003df3
#define str_10003df3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_10003e66
#define str_10003e66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_10003e88
#define str_10003e88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dcU)))
#undef str_10003ec0
#define str_10003ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x514U)))
#undef str_10003ef3
#define str_10003ef3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x547U)))
#undef str_10003f16
#define str_10003f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56aU)))
#undef str_10003f43
#define str_10003f43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#undef str_10003f52
#define str_10003f52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_10003f5b
#define str_10003f5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5afU)))
#undef str_10003f65
#define str_10003f65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b9U)))
#undef str_10003f93
#define str_10003f93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e7U)))
#undef str_10003fa1
#define str_10003fa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#define uStack_1044 (*(uint *)(pf_stack_frame + 316))
#define pvStack_1040 (*(void * *)(pf_stack_frame + 320))
#define uStack_ff4 (*(uint *)(pf_stack_frame + 396))
#define auStack_ff0 (*(undefined1 (*)[4080])(pf_stack_frame + 400))
#define local_10cc (*(uint *)(pf_stack_frame + 180))
#define local_10c8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_10c4 (*(undefined4 *)(pf_stack_frame + 188))
#define local_10b0 (*(undefined4 *)(pf_stack_frame + 208))
#define local_10ac (*(undefined4 *)(pf_stack_frame + 212))
#define local_10a8 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_10a4 (*(undefined4 *)(pf_stack_frame + 220))
#define local_10a0 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_1090 (*(byte * *)(pf_stack_frame + 240))
#define local_108c (*(undefined8 *** *)(pf_stack_frame + 244))
#define local_1088 (*(byte * *)(pf_stack_frame + 248))
#define local_1084 (*(uint *)(pf_stack_frame + 252))
#define local_1080 (*(undefined4 *)(pf_stack_frame + 256))
#define local_107c (*(byte * *)(pf_stack_frame + 260))
#define local_1078 (*(uint *)(pf_stack_frame + 264))
#define local_1074 (*(undefined4 *)(pf_stack_frame + 268))
#define local_1070 (*(char * *)(pf_stack_frame + 272))
#define local_106c (*(byte * *)(pf_stack_frame + 276))
#define local_1068 (*(int * *)(pf_stack_frame + 280))
#define local_1064 (*(int * *)(pf_stack_frame + 284))
#define local_1060 (*(byte * *)(pf_stack_frame + 288))
#define local_105c (*(uint *)(pf_stack_frame + 292))
#define local_1058 (*(undefined4 *)(pf_stack_frame + 296))
#define local_1050 (*(int (*)[1044])(pf_stack_frame + 304))
#define local_1030 (*(void * *)(pf_stack_frame + 336))
#define local_102c (*(int *)(pf_stack_frame + 340))
#define local_1028 (*(undefined4 *)(pf_stack_frame + 344))
#define local_1024 (*(char *)(pf_stack_frame + 348))
#define local_101c (*(byte * *)(pf_stack_frame + 356))
#define auStackY_1170 (*(undefined1 (*)[4464])(pf_stack_frame + 16))
#define local_1018 (*(undefined4 *)(pf_stack_frame + 360))
#define local_1014 (*(uint *)(pf_stack_frame + 364))
#define local_1010 (*(undefined4 (*)[1028])(pf_stack_frame + 368))
#define local_1008 (*(int (*)[1026])(pf_stack_frame + 376))
#define local_ffc (*(uint *)(pf_stack_frame + 388))
#define local_ff8 (*(byte * *)(pf_stack_frame + 392))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f60
 */

int recovered_10000f60(uint argc,char **argv)

{
  unsigned char pf_stack_frame[4512] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;

  local_10a8 = auStack_ff0 + 0xfec;
  local_10a0 = auStackY_1170 + 0x80;
  local_1030 = (void *)0x0;
  local_102c = 0;
  local_1028 = 0;
  local_1024 = (int)argc < 2;
  local_10b0 = DAT_10004014;
  local_10ac = 0x3b38;
  local_10a4 = 0x143c;
  _Unwind_SjLj_Register(&local_10c8);
  if (argv != (char **)0x0 && 1 < (int)argc) {
    pcVar7 = (char *)0x1;
    local_106c = (byte *)str_10003dec;
LAB_10001079:
    pbVar12 = (byte *)argv[(int)pcVar7];
    if ((byte *)argv[(int)pcVar7] == (byte *)0x0) {
      pbVar12 = &DAT_10003deb;
    }
    local_1060 = (byte *)0x0;
    local_105c = 0;
    local_1058 = 0;
    uVar8 = 0xffffffff;
    do {
      iVar1 = uVar8 + 1;
      uVar8 = uVar8 + 1;
    } while (pbVar12[iVar1] != 0);
    local_10c4 = 1;
    local_1070 = pcVar7;
    recovered_10002560((int *)&local_1060,(int)pbVar12,uVar8);
    pbVar12 = local_1060;
    if (local_1060 == (byte *)0x0) {
      pbVar12 = &DAT_10003deb;
    }
    if (local_105c != 0) {
      uVar8 = 1;
      do {
        if (pbVar12[uVar8 - 1] == 0x3d) {
          if (uVar8 != 0) {
            uVar11 = uVar8 - 1;
            if (local_105c < uVar8 - 1) {
              uVar11 = local_105c;
            }
            local_107c = (byte *)0x0;
            local_1078 = 0;
            local_1074 = 0;
            local_10c4 = 2;
            recovered_10002560((int *)&local_107c,(int)pbVar12,uVar11);
            if (local_105c < uVar8) {
              uVar8 = local_105c;
            }
            pbVar12 = local_1060;
            if (local_1060 == (byte *)0x0) {
              pbVar12 = &DAT_10003deb;
            }
            local_1088 = (byte *)0x0;
            local_1084 = 0;
            local_1080 = 0;
            local_10c4 = 3;
            recovered_10002560((int *)&local_1088,(int)(pbVar12 + uVar8),local_105c - uVar8);
            uVar8 = local_1078;
            local_1018 = (void *)0x0;
            local_1014 = 0;
            local_1010[0] = 0;
            local_10c4 = 4;
            recovered_10002560(&local_1018,(int)local_106c,6);
            uVar3 = local_1014;
            _ZdlPv(local_1018);
            uVar11 = local_1078;
            if (uVar8 != uVar3) goto LAB_100012b8;
            if (local_1078 == 0) goto LAB_1000100a;
            pbVar12 = local_107c;
            if (local_107c == (byte *)0x0) {
              pbVar12 = &DAT_10003deb;
            }
            pbVar9 = local_106c;
            uVar8 = local_1078;
            goto LAB_10001280;
          }
          break;
        }
        iVar1 = (1 - local_105c) + uVar8;
        uVar8 = uVar8 + 1;
      } while (iVar1 != 1);
    }
    goto LAB_10001060;
  }
LAB_10001645:
  local_10c4 = 10;
  _ZN6winter4ruby6RubyVMC1Ev(&local_108c);
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_10c4 = 0xb;
  recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x45bU),6);
  local_10c4 = 0xc;
  local_1064 = _Znwm(8);
  *local_1064 = (int)&DAT_10004088;
  local_10c4 = 0xd;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&local_108c,&local_1018,&local_1064);
  if (local_1064 != (int *)0x0) {
    ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)local_1064 + 4)))(local_1064);
  }
  _ZdlPv(local_1018);
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_10c4 = 0xe;
  recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x462U),8);
  local_10c4 = 0xf;
  local_1068 = _Znwm(8);
  *local_1068 = (int)&DAT_100040d4;
  local_10c4 = 0x10;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&local_108c,&local_1018,&local_1068);
  if (local_1068 != (int *)0x0) {
    ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)local_1068 + 4)))(local_1068);
  }
  _ZdlPv(local_1018);
  if (local_1024 == '\x01') {
    local_10c4 = 0x11;
    wm_lua_write(str_10003e66,0x21);
    local_10c4 = 0x12;
    wm_lua_writeline();
    local_10c4 = 0x13;
    wm_lua_write(str_10003e88,0x37);
    local_10c4 = 0x14;
    wm_lua_writeline();
    local_10c4 = 0x15;
    wm_lua_write(str_10003ec0,0x32);
    local_10c4 = 0x16;
    wm_lua_writeline();
    local_10c4 = 0x17;
    wm_lua_write(str_10003ef3,0x22);
    local_10c4 = 0x18;
    wm_lua_writeline();
    local_10c4 = 0x19;
    wm_lua_write(str_10003f16,0x2c);
    local_10c4 = 0x1a;
    wm_lua_writeline();
    local_10c4 = 0x1b;
    wm_lua_write(&DAT_10003deb,0);
    local_10c4 = 0x1c;
    wm_lua_writeline();
    local_10c4 = 0x1d;
    wm_lua_write(str_10003f43,0xe);
    local_10c4 = 0x1e;
    wm_lua_writeline();
    local_10c4 = 0x1f;
    wm_lua_write(&DAT_10003deb,0);
    local_10c4 = 0x20;
    wm_lua_writeline();
    local_1060 = (byte *)0x0;
    local_105c = 0;
    local_1058 = 0;
    local_10c4 = 0x21;
    local_1070 = str_10003f52;
    recovered_10002560((int *)&local_1060,((uintptr_t)pf_module_state + 0x5a6U),8);
    local_10c4 = 0x22;
    pf_command_result_100039c4(&local_1018,&local_108c,&local_1060);
    _ZdlPv(local_1060);
    if ((char)local_1018 == '\x01') {
      local_10c4 = 0x23;
      wm_lua_write(str_10003f5b,9);
      local_10c4 = 0x24;
      wm_lua_write(local_1070,8);
      local_10c4 = 0x25;
      wm_lua_writeline();
      if ((char)local_1010[0] != '\0') {
        local_10c4 = 0x26;
        pf_command_result_100039e2(&local_1060,local_1010);
        pbVar12 = &DAT_10003deb;
        if (local_1060 != (byte *)0x0) {
          pbVar12 = local_1060;
        }
        local_10c4 = 0x27;
        wm_lua_write((char *)pbVar12,local_105c);
        local_10c4 = 0x28;
        wm_lua_writeline();
        _ZdlPv(local_1060);
      }
    }
    else {
      pbVar12 = &DAT_10003deb;
      if (local_ff8 != (byte *)0x0) {
        pbVar12 = local_ff8;
      }
      if (0x19 < uStack_ff4) {
        uVar8 = 0;
        do {
          if ((((((((pbVar12[uVar8] == 0x75) && (pbVar12[uVar8 + 1] == 0x6e)) &&
                  (pbVar12[uVar8 + 2] == 0x61)) &&
                 ((pbVar12[uVar8 + 3] == 0x62 && (pbVar12[uVar8 + 4] == 0x6c)))) &&
                ((pbVar12[uVar8 + 5] == 0x65 &&
                 ((pbVar12[uVar8 + 6] == 0x20 && (pbVar12[uVar8 + 7] == 0x74)))))) &&
               (pbVar12[uVar8 + 8] == 0x6f)) &&
              (((((pbVar12[uVar8 + 9] == 0x20 && (pbVar12[uVar8 + 10] == 0x6f)) &&
                 (pbVar12[uVar8 + 0xb] == 0x70)) &&
                (((pbVar12[uVar8 + 0xc] == 0x65 && (pbVar12[uVar8 + 0xd] == 0x6e)) &&
                 ((pbVar12[uVar8 + 0xe] == 0x20 &&
                  ((pbVar12[uVar8 + 0xf] == 0x73 && (pbVar12[uVar8 + 0x10] == 99)))))))) &&
               ((pbVar12[uVar8 + 0x11] == 0x72 &&
                (((pbVar12[uVar8 + 0x12] == 0x69 && (pbVar12[uVar8 + 0x13] == 0x70)) &&
                 (pbVar12[uVar8 + 0x14] == 0x74)))))))) &&
             (((pbVar12[uVar8 + 0x15] == 0x20 && (pbVar12[uVar8 + 0x16] == 0x66)) &&
              ((pbVar12[uVar8 + 0x17] == 0x69 &&
               ((pbVar12[uVar8 + 0x18] == 0x6c && (pbVar12[uVar8 + 0x19] == 0x65)))))))) {
            if (uVar8 != 0xffffffff) goto LAB_10001b06;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uStack_ff4 - 0x1a);
      }
      local_10c4 = 0x29;
      recovered_10003780((char *)&local_1018,str_10003f65);
    }
LAB_10001b06:
    _ZdlPv(local_ff8);
    if (3 < local_ffc) {
      local_10c4 = 0x2a;
      recovered_10002cb0(local_ffc,local_1008);
    }
  }
  if (local_102c == 0) {
    local_10cc = 1;
  }
  else {
    local_10c4 = 0x2b;
    pf_command_result_100039c4(&local_1018,&local_108c,&local_1030);
    pcVar7 = (char *)0x0;
    if ((char)local_1018 == '\0') {
      pcVar7 = str_10003f93;
    }
    local_10c4 = 0x2c;
    recovered_10003780((char *)&local_1018,pcVar7);
    local_10cc = (uint)local_1018 & 0xff;
    _ZdlPv(local_ff8);
    if (3 < local_ffc) {
      local_10c4 = 0x2d;
      recovered_10002cb0(local_ffc,local_1008);
    }
  }
  if (local_1024 == '\x01') {
    local_1070 = str_10003fa1;
    local_106c = (byte *)str_10003f43;
    do {
      local_10c4 = 0x2e;
      bVar6 = wm_lua_readline((int)&local_1018,0x1000,local_1070,1);
      if (!bVar6) break;
      local_1060 = (byte *)0x0;
      local_105c = 0;
      local_1058 = 0;
      uVar8 = 0xffffffff;
      do {
        iVar1 = uVar8 - 7;
        uVar8 = uVar8 + 1;
      } while (*(char *)((int)local_1010 + iVar1) != '\0');
      local_10c4 = 0x2f;
      recovered_10002560((int *)&local_1060,(int)&local_1018,uVar8);
      pbVar12 = local_1060;
      if (local_1060 == (byte *)0x0) {
        pbVar12 = &DAT_10003deb;
      }
      if (local_105c == 5) {
        if ((((*pbVar12 == 0x2e) && (pbVar12[1] == 0x65)) && (pbVar12[2] == 0x78)) &&
           (pbVar12[3] == 0x69)) {
          bVar4 = pbVar12[4];
joined_r0x10001d3b:
          if (bVar4 == 0x74) {
            _ZdlPv(local_1060);
            break;
          }
        }
      }
      else if (local_105c == 4) {
        if (*pbVar12 == 0x71) {
          if (pbVar12[1] == 0x75) goto LAB_10001d48;
        }
        else if ((*pbVar12 == 0x65) && (pbVar12[1] == 0x78)) {
LAB_10001d48:
          if (pbVar12[2] == 0x69) {
            bVar4 = pbVar12[3];
            goto joined_r0x10001d3b;
          }
        }
      }
      _ZdlPv(local_1060);
      local_1060 = (byte *)0x0;
      local_105c = 0;
      local_1058 = 0;
      uVar8 = 0xffffffff;
      do {
        iVar1 = uVar8 - 7;
        uVar8 = uVar8 + 1;
      } while (*(char *)((int)local_1010 + iVar1) != '\0');
      local_10c4 = 0x30;
      recovered_10002560((int *)&local_1060,(int)&local_1018,uVar8);
      pbVar12 = local_1060;
      if (local_1060 == (byte *)0x0) {
        pbVar12 = &DAT_10003deb;
      }
      if (((local_105c == 5) && (*pbVar12 == 0x3a)) &&
         ((pbVar12[1] == 0x68 &&
          (((pbVar12[2] == 0x65 && (pbVar12[3] == 0x6c)) && (pbVar12[4] == 0x70)))))) {
LAB_10001eaa:
        _ZdlPv(local_1060);
        local_10c4 = 0x32;
        wm_lua_write((char *)local_106c,0xe);
        local_10c4 = 0x33;
        wm_lua_writeline();
        local_10c4 = 0x34;
        wm_lua_write(&DAT_10003deb,0);
        local_10c4 = 0x35;
        wm_lua_writeline();
      }
      else {
        local_107c = (byte *)0x0;
        local_1078 = 0;
        local_1074 = 0;
        uVar8 = 0xffffffff;
        do {
          iVar1 = uVar8 - 7;
          uVar8 = uVar8 + 1;
        } while (*(char *)((int)local_1010 + iVar1) != '\0');
        local_10c4 = 0x31;
        recovered_10002560((int *)&local_107c,(int)&local_1018,uVar8);
        pbVar12 = local_107c;
        if (local_107c == (byte *)0x0) {
          pbVar12 = &DAT_10003deb;
        }
        if ((((local_1078 == 6) && (*pbVar12 == 0x68)) &&
            (((pbVar12[1] == 0x65 && ((pbVar12[2] == 0x6c && (pbVar12[3] == 0x70)))) &&
             (pbVar12[4] == 0x28)))) && (pbVar12[5] == 0x29)) {
          _ZdlPv(local_107c);
          goto LAB_10001eaa;
        }
        _ZdlPv(local_107c);
        _ZdlPv(local_1060);
        if ((char)local_1018 != '\0') {
          local_107c = (byte *)0x0;
          local_1078 = 0;
          local_1074 = 0;
          uVar8 = 0xffffffff;
          do {
            iVar1 = uVar8 - 7;
            uVar8 = uVar8 + 1;
          } while (*(char *)((int)local_1010 + iVar1) != '\0');
          local_10c4 = 0x36;
          recovered_10002560((int *)&local_107c,(int)&local_1018,uVar8);
          local_1088 = (byte *)0x0;
          local_1084 = 0;
          local_1080 = 0;
          local_10c4 = 0x37;
          recovered_10002560((int *)&local_1088,((uintptr_t)pf_module_state + 0x602U),7);
          local_10c4 = 0x38;
          pf_command_result_100039ca(&local_1060,&local_108c,&local_107c,&local_1088);
          _ZdlPv(local_1088);
          _ZdlPv(local_107c);
          local_10c4 = 0x39;
          recovered_10003780((char *)&local_1060,(char *)0x0);
          _ZdlPv(pvStack_1040);
          if (3 < uStack_1044) {
            local_10c4 = 0x3a;
            recovered_10002cb0(uStack_1044,local_1050);
          }
        }
      }
    } while (local_1024 != '\0');
  }
  _ZN6winter4ruby6RubyVMD1Ev(&local_108c);
  _ZdlPv(local_1030);
  local_10c4 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_10c8);
  return local_10cc;
  while( true ) {
    pbVar9 = pbVar9 + 1;
    pbVar12 = pbVar12 + 1;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
LAB_10001280:
    bVar4 = *pbVar12;
    bVar2 = *pbVar9;
    bVar10 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar10 = bVar4;
    }
    bVar4 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar4 = bVar2;
    }
    if (bVar10 != bVar4) goto LAB_100012b8;
  }
LAB_1000100a:
  pbVar12 = local_1088;
  if (local_1088 == (byte *)0x0) {
    pbVar12 = &DAT_10003deb;
  }
  local_10c4 = 5;
  recovered_10002560((int *)&local_1030,(int)pbVar12,local_1084);
  goto LAB_10001038;
LAB_100012b8:
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_10c4 = 6;
  local_1090 = (byte *)str_10003df3;
  recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x447U),7);
  uVar3 = local_1014;
  pbVar12 = local_1090;
  _ZdlPv(local_1018);
  uVar8 = local_1084;
  if (uVar11 != uVar3) goto LAB_10001038;
  if (local_1078 != 0) {
    pbVar9 = local_107c;
    uVar11 = local_1078;
    if (local_107c == (byte *)0x0) {
      pbVar9 = &DAT_10003deb;
    }
    do {
      bVar4 = *pbVar9;
      bVar2 = *pbVar12;
      bVar10 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar10 = bVar4;
      }
      bVar4 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar4 = bVar2;
      }
      if (bVar10 != bVar4) goto LAB_10001038;
      pbVar12 = pbVar12 + 1;
      pbVar9 = pbVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010[0] = 0;
  local_10c4 = 7;
  local_1090 = &DAT_10003dfb;
  recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x44fU),4);
  uVar3 = local_1014;
  _ZdlPv(local_1018);
  uVar11 = local_1084;
  if (uVar8 == uVar3) {
    cVar5 = '\x01';
    if (local_1084 != 0) {
      local_101c = local_1088;
      pbVar12 = local_1088;
      if (local_1088 == (byte *)0x0) {
        pbVar12 = &DAT_10003deb;
      }
      uVar8 = 0;
      pbVar9 = local_1090;
      do {
        bVar4 = pbVar12[uVar8];
        bVar2 = *pbVar9;
        bVar10 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar10 = bVar4;
        }
        bVar4 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar4 = bVar2;
        }
        if (bVar10 != bVar4) goto joined_r0x10001479;
        uVar8 = uVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (local_1084 != uVar8);
LAB_10001633:
      cVar5 = '\x01';
    }
  }
  else {
joined_r0x10001479:
    if (local_1084 == 1) {
      pbVar12 = local_1088;
      if (local_1088 == (byte *)0x0) {
        pbVar12 = &DAT_10003deb;
      }
      cVar5 = '\x01';
      if (*pbVar12 == 0x31) goto LAB_10001639;
    }
    local_1018 = (void *)0x0;
    local_1014 = 0;
    local_1010[0] = 0;
    local_10c4 = 8;
    local_1090 = &DAT_10003e00;
    recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x454U),3);
    uVar3 = local_1014;
    _ZdlPv(local_1018);
    uVar8 = local_1084;
    if (uVar11 == uVar3) {
      cVar5 = '\x01';
      if (local_1084 != 0) {
        pbVar12 = local_1088;
        if (local_1088 == (byte *)0x0) {
          pbVar12 = &DAT_10003deb;
        }
        uVar11 = local_1084;
        pbVar9 = local_1090;
        do {
          bVar4 = *pbVar12;
          bVar2 = *pbVar9;
          bVar10 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar10 = bVar4;
          }
          bVar4 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar4 = bVar2;
          }
          if (bVar10 != bVar4) goto LAB_10001578;
          pbVar9 = pbVar9 + 1;
          pbVar12 = pbVar12 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        goto LAB_10001633;
      }
    }
    else {
LAB_10001578:
      local_1018 = (void *)0x0;
      local_1014 = 0;
      local_1010[0] = 0;
      local_10c4 = 9;
      local_1090 = &DAT_10003e04;
      recovered_10002560(&local_1018,((uintptr_t)pf_module_state + 0x458U),2);
      uVar11 = local_1014;
      _ZdlPv(local_1018);
      if (uVar8 == uVar11) {
        cVar5 = '\x01';
        if (local_1084 != 0) {
          pbVar12 = local_1088;
          if (local_1088 == (byte *)0x0) {
            pbVar12 = &DAT_10003deb;
          }
          uVar8 = local_1084;
          pbVar9 = local_1090;
          do {
            bVar4 = *pbVar12;
            bVar2 = *pbVar9;
            bVar10 = bVar4 | 0x20;
            if (0x19 < (byte)(bVar4 + 0xbf)) {
              bVar10 = bVar4;
            }
            bVar4 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar4 = bVar2;
            }
            if (bVar10 != bVar4) goto LAB_10001637;
            pbVar9 = pbVar9 + 1;
            pbVar12 = pbVar12 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          goto LAB_10001633;
        }
      }
      else {
LAB_10001637:
        cVar5 = '\0';
      }
    }
  }
LAB_10001639:
  local_1024 = cVar5;
LAB_10001038:
  _ZdlPv(local_1088);
  _ZdlPv(local_107c);
LAB_10001060:
  _ZdlPv(local_1060);
  pcVar7 = local_1070 + 1;
  if (pcVar7 == (char *)argc) goto LAB_10001645;
  goto LAB_10001079;
}

#undef DAT_10003deb
#undef DAT_10003dfb
#undef DAT_10003e00
#undef DAT_10003e04
#undef DAT_10004014
#undef DAT_10004088
#undef DAT_100040d4
#undef str_10003dec
#undef str_10003df3
#undef str_10003e66
#undef str_10003e88
#undef str_10003ec0
#undef str_10003ef3
#undef str_10003f16
#undef str_10003f43
#undef str_10003f52
#undef str_10003f5b
#undef str_10003f65
#undef str_10003f93
#undef str_10003fa1
#undef uStack_1044
#undef pvStack_1040
#undef uStack_ff4
#undef auStack_ff0
#undef local_10cc
#undef local_10c8
#undef local_10c4
#undef local_10b0
#undef local_10ac
#undef local_10a8
#undef local_10a4
#undef local_10a0
#undef local_1090
#undef local_108c
#undef local_1088
#undef local_1084
#undef local_1080
#undef local_107c
#undef local_1078
#undef local_1074
#undef local_1070
#undef local_106c
#undef local_1068
#undef local_1064
#undef local_1060
#undef local_105c
#undef local_1058
#undef local_1050
#undef local_1030
#undef local_102c
#undef local_1028
#undef local_1024
#undef local_101c
#undef auStackY_1170
#undef local_1018
#undef local_1014
#undef local_1010
#undef local_1008
#undef local_ffc
#undef local_ff8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002500
 */

void recovered_10002500(char *arg_ecx)

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
 * Address: 0x10002540
 */

void recovered_10002540(int param_1)

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
        recovered_10002560((int *)&pvStack_40,(int)(puVar3 + uVar4),uVar7);
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
 * Address: 0x10002560
 */

void recovered_10002560(int *param_1,int param_2,uint param_3)

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
        recovered_10002560((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026d0
 */

void recovered_100026d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

void recovered_100026e0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv(param_1);
  return;
}


#undef DAT_10003deb
#define DAT_10003deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x658U)))
#undef DAT_10004008
#define DAT_10004008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65cU)))
#undef DAT_10004010
#define DAT_10004010 (*(int *)(((uintptr_t)pf_module_state + 0x664U)))
#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define local_8c (*(undefined1 * *)(pf_stack_frame + 180))
#define local_88 (*(undefined4 *)(pf_stack_frame + 184))
#define local_84 (*(undefined4 *)(pf_stack_frame + 188))
#define local_70 (*(undefined4 *)(pf_stack_frame + 208))
#define local_6c (*(undefined4 *)(pf_stack_frame + 212))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_64 (*(undefined4 *)(pf_stack_frame + 220))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 224))
#define uStack_40 (*(undefined1 *)(pf_stack_frame + 256))
#define local_54 (*(void * *)(pf_stack_frame + 236))
#define puStack_38 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_50 (*(undefined4 *)(pf_stack_frame + 240))
#define uStack_34 (*(uint *)(pf_stack_frame + 268))
#define local_4c (*(undefined4 *)(pf_stack_frame + 244))
#define local_48 (*(char (*)[72])(pf_stack_frame + 248))
#define uStack_24 (*(uint *)(pf_stack_frame + 284))
#define auStack_20 (*(undefined1 (*)[32])(pf_stack_frame + 288))
#define local_2c (*(uint *)(pf_stack_frame + 276))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 280))
#define auStackY_130 (*(undefined1 (*)[304])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002700
 */

undefined1 *
recovered_10002700(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;

  local_68 = auStack_20 + 0x1c;
  local_60 = auStackY_130 + 0x80;
  iVar1 = param_4[1];
  local_70 = DAT_10004014;
  local_6c = 0x3bc8;
  local_64 = 0x2d1;
  _Unwind_SjLj_Register(&local_88);
  if (iVar1 == 1) {
    local_84 = 0xffffffff;
    pcVar3 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_54 = (void *)0x0;
    local_50 = 0;
    local_4c = 0;
    local_8c = &DAT_10003deb;
    puVar5 = *(undefined1 **)pcVar3;
    if (*(undefined1 **)pcVar3 == (undefined1 *)0x0) {
      puVar5 = &DAT_10003deb;
    }
    local_84 = 0xffffffff;
    recovered_10002560((int *)&local_54,(int)puVar5,*(uint *)(pcVar3 + 4));
    local_84 = 2;
    pf_command_result_100039c4(local_48,param_3,&local_54);
    if (local_48[0] != '\0') {
      *param_1 = uStack_40;
      *(uint *)(param_1 + 0x14) = local_2c;
      if ((local_2c != 0) && (local_2c - 1 < 7)) {
        piVar4 = (int *)(param_1 + 8);
        switch((uintptr_t)(local_2c)) {
        case 1:
          *piVar4 = (int)puStack_38;
          *(uint *)(param_1 + 0xc) = uStack_34;
          break;
        case 2:
          *(ulonglong *)piVar4 = CONCAT44(uStack_34,puStack_38);
          break;
        case 3:
          *(undefined1 *)piVar4 = PF_PART1(puStack_38, 0);
          break;
        case 4:
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
          if (puStack_38 != (undefined1 *)0x0) {
            local_8c = puStack_38;
          }
          local_84 = 5;
          recovered_10002560(piVar4,(int)local_8c,uStack_34);
          break;
        default:
          *(undefined1 **)(param_1 + 8) = puStack_38;
          *(uint *)(param_1 + 0xc) = uStack_34;
          if (puStack_38 != (undefined1 *)0x0) {
            *(int *)(puStack_38 + 4) = *(int *)(puStack_38 + 4) + 1;
          }
        }
      }
      _ZdlPv(local_28);
      if (3 < local_2c) {
        local_84 = 6;
        recovered_10002cb0(local_2c,(int *)&puStack_38);
      }
      _ZdlPv(local_54);
      _Unwind_SjLj_Unregister(&local_88);
      return param_1;
    }
  }
  else {
    piVar4 = (int *)__cxa_allocate_exception(0x10);
    local_84 = 1;
    recovered_10002ae0(piVar4,((uintptr_t)pf_module_state + 0x46bU));
    local_84 = 0xffffffff;
    __cxa_throw((int)piVar4,DAT_10004008,DAT_10004004);
  }
  piVar4 = (int *)__cxa_allocate_exception(0x10);
  *piVar4 = DAT_10004010 + 8;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  if (local_28 != (undefined1 *)0x0) {
    local_8c = local_28;
  }
  local_84 = 3;
  recovered_10002560(piVar4 + 1,(int)local_8c,uStack_24);
  local_84 = 4;
  __cxa_throw((int)piVar4,DAT_10004008,DAT_10004004);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

#undef DAT_10003deb
#undef DAT_10004004
#undef DAT_10004008
#undef DAT_10004010
#undef DAT_10004014
#undef local_8c
#undef local_88
#undef local_84
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef uStack_40
#undef local_54
#undef puStack_38
#undef local_50
#undef uStack_34
#undef local_4c
#undef local_48
#undef uStack_24
#undef auStack_20
#undef local_2c
#undef local_28
#undef auStackY_130

#undef DAT_10004088
#define DAT_10004088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ab0
 */

void recovered_10002ab0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = _Znwm(8);
  *puVar1 = &DAT_10004088;
  return;
}

#undef DAT_10004088

#undef DAT_10004010
#define DAT_10004010 (*(int *)(((uintptr_t)pf_module_state + 0x664U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae0
 */

void recovered_10002ae0(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  uint uVar3;

  *param_1 = DAT_10004010 + 8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      pcVar1 = (char *)(param_2 + 1 + uVar3);
      uVar3 = uVar2;
    } while (*pcVar1 != '\0');
  }
  recovered_10002560(param_1 + 1,param_2,uVar2);
  return;
}

#undef DAT_10004010

#undef DAT_10004010
#define DAT_10004010 (*(int *)(((uintptr_t)pf_module_state + 0x664U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

void recovered_10002b60(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10004010 + 8;
  _ZdlPv((void *)param_1[1]);
  return;
}

#undef DAT_10004010

#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
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
 * Address: 0x10002b90
 */

void recovered_10002b90(int param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;

  _ZdlPv(*(void **)(param_1 + 0x20));
  local_20 = auStackY_d0 + 0x80;
  uVar1 = *(uint *)(param_1 + 0x1c);
  local_30 = DAT_10004014;
  local_2c = 0x3be0;
  local_24 = 0x72;
  local_28 = auStack_1c + 0x18;
  _Unwind_SjLj_Register(&local_48);
  if (3 < uVar1) {
    local_44 = 1;
    recovered_10002cb0(uVar1,(int *)(param_1 + 0x10));
  }
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10004014
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10004010
#define DAT_10004010 (*(int *)(((uintptr_t)pf_module_state + 0x664U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c40
 */

void recovered_10002c40(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10004010 + 8;
  _ZdlPv((void *)param_1[1]);
  _ZdlPv(param_1);
  return;
}

#undef DAT_10004010

#undef DAT_10003deb
#define DAT_10003deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c80
 */

undefined1 * recovered_10002c80(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10003deb;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 4);
  }
  return puVar1;
}

#undef DAT_10003deb

#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb0
 */

void recovered_10002cb0(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10004014;
  local_2c = 0x3bf0;
  local_24 = 0xb3;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 5) {
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      piVar2 = piVar1 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        local_44 = 1;
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
        piVar2 = (int *)*param_2;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
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
    recovered_10002da0(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10004014
#undef local_48
#undef local_44
#undef local_30
#undef auStackY_d0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002da0
 */

void recovered_10002da0(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10004014;
  local_2c = 0x3c00;
  local_24 = 0xb0;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10002e51;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      goto LAB_10002e2e;
    }
  }
  else {
    if ((param_1 != 6) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10002e51;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
LAB_10002e2e:
      piVar2 = (int *)*param_2;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_10002e51:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10004014
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef auStackY_d0
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

void recovered_10002e90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea0
 */

void recovered_10002ea0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv(param_1);
  return;
}


#undef DAT_10003deb
#define DAT_10003deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x658U)))
#undef DAT_10004008
#define DAT_10004008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x65cU)))
#undef DAT_10004010
#define DAT_10004010 (*(int *)(((uintptr_t)pf_module_state + 0x664U)))
#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define uStack_24 (*(uint *)(pf_stack_frame + 300))
#define auStack_20 (*(undefined1 (*)[32])(pf_stack_frame + 304))
#define local_a4 (*(undefined1 * *)(pf_stack_frame + 172))
#define local_a0 (*(void * *)(pf_stack_frame + 176))
#define local_9c (*(int * *)(pf_stack_frame + 180))
#define local_98 (*(undefined4 *)(pf_stack_frame + 184))
#define local_94 (*(undefined4 *)(pf_stack_frame + 188))
#define local_80 (*(undefined4 *)(pf_stack_frame + 208))
#define local_7c (*(undefined4 *)(pf_stack_frame + 212))
#define local_78 (*(undefined1 * *)(pf_stack_frame + 216))
#define auStackY_140 (*(undefined1 (*)[320])(pf_stack_frame + 16))
#define local_74 (*(undefined4 *)(pf_stack_frame + 220))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_64 (*(ulong *)(pf_stack_frame + 236))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_5c (*(undefined4 *)(pf_stack_frame + 244))
#define local_58 (*(undefined4 *)(pf_stack_frame + 248))
#define local_54 (*(void * *)(pf_stack_frame + 252))
#define local_50 (*(undefined4 *)(pf_stack_frame + 256))
#define local_4c (*(undefined4 *)(pf_stack_frame + 260))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_44 (*(uint *)(pf_stack_frame + 268))
#define local_2c (*(uint *)(pf_stack_frame + 292))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 296))
#define uStack_40 (*(undefined1 *)(pf_stack_frame + 272))
#define puStack_38 (*(undefined1 * *)(pf_stack_frame + 280))
#define uStack_34 (*(uint *)(pf_stack_frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

undefined1 *
recovered_10002ec0(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;

  local_78 = auStack_20 + 0x1c;
  local_70 = auStackY_140 + 0x80;
  iVar1 = param_4[1];
  local_80 = DAT_10004014;
  local_7c = 0x3c10;
  local_74 = 0x477;
  _Unwind_SjLj_Register(&local_98);
  if (iVar1 == 1) {
    local_94 = 0xffffffff;
    pcVar3 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_60 = (undefined1 *)0x0;
    local_5c = 0;
    local_58 = 0;
    puVar4 = *(undefined1 **)pcVar3;
    if (*(undefined1 **)pcVar3 == (undefined1 *)0x0) {
      puVar4 = &DAT_10003deb;
    }
    local_94 = 0xffffffff;
    recovered_10002560((int *)&local_60,(int)puVar4,*(uint *)(pcVar3 + 4));
    local_a0 = (void *)0x0;
    local_64 = 0;
    local_a4 = &DAT_10003deb;
    puVar4 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar4 = &DAT_10003deb;
    }
    local_94 = 2;
    uVar5 = wmfs_read_entire_file((int)puVar4,&local_a0,&local_64);
    if ((char)uVar5 != '\0') {
      local_54 = (void *)0x0;
      local_50 = 0;
      local_4c = 0;
      if (local_64 != 0 && local_a0 != (void *)0x0) {
        local_94 = 6;
        recovered_10002560((int *)&local_54,(int)local_a0,local_64);
      }
      local_94 = 7;
      free(local_a0);
      local_94 = 8;
      pf_command_result_100039ca(&local_48,param_3,&local_54,&local_60);
      if ((char)local_48 != '\0') {
        *param_1 = uStack_40;
        *(uint *)(param_1 + 0x14) = local_2c;
        if ((local_2c != 0) && (local_2c - 1 < 7)) {
          piVar6 = (int *)(param_1 + 8);
          switch((uintptr_t)(local_2c)) {
          case 1:
            *piVar6 = (int)puStack_38;
            *(uint *)(param_1 + 0xc) = uStack_34;
            break;
          case 2:
            *(ulonglong *)piVar6 = CONCAT44(uStack_34,puStack_38);
            break;
          case 3:
            *(undefined1 *)piVar6 = PF_PART1(puStack_38, 0);
            break;
          case 4:
            *(undefined4 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0xc) = 0;
            *(undefined4 *)(param_1 + 0x10) = 0;
            if (puStack_38 != (undefined1 *)0x0) {
              local_a4 = puStack_38;
            }
            local_94 = 0xb;
            recovered_10002560(piVar6,(int)local_a4,uStack_34);
            break;
          default:
            *(undefined1 **)(param_1 + 8) = puStack_38;
            *(uint *)(param_1 + 0xc) = uStack_34;
            if (puStack_38 != (undefined1 *)0x0) {
              *(int *)(puStack_38 + 4) = *(int *)(puStack_38 + 4) + 1;
            }
          }
        }
        _ZdlPv(local_28);
        if (3 < local_2c) {
          local_94 = 0xc;
          recovered_10002cb0(local_2c,(int *)&puStack_38);
        }
        _ZdlPv(local_54);
        _ZdlPv(local_60);
        _Unwind_SjLj_Unregister(&local_98);
        return param_1;
      }
      piVar6 = (int *)__cxa_allocate_exception(0x10);
      *piVar6 = DAT_10004010 + 8;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (local_28 != (undefined1 *)0x0) {
        local_a4 = local_28;
      }
      local_94 = 9;
      recovered_10002560(piVar6 + 1,(int)local_a4,uStack_24);
      local_94 = 10;
      __cxa_throw((int)piVar6,DAT_10004008,DAT_10004004);
      goto LAB_10003354;
    }
  }
  else {
    local_9c = (int *)__cxa_allocate_exception(0x10);
    local_94 = 1;
    recovered_10002ae0(local_9c,((uintptr_t)pf_module_state + 0x483U));
    local_94 = 0xffffffff;
    __cxa_throw((int)local_9c,DAT_10004008,DAT_10004004);
  }
  piVar6 = (int *)__cxa_allocate_exception(0x10);
  local_94 = 3;
  recovered_100034b0((int *)&local_48,((uintptr_t)pf_module_state + 0x49dU),&local_60);
  *piVar6 = DAT_10004010 + 8;
  piVar6[1] = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  if (local_48 != (undefined1 *)0x0) {
    local_a4 = local_48;
  }
  local_94 = 4;
  recovered_10002560(piVar6 + 1,(int)local_a4,local_44);
  local_94 = 5;
  __cxa_throw((int)piVar6,DAT_10004008,DAT_10004004);
LAB_10003354:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

#undef DAT_10003deb
#undef DAT_10004004
#undef DAT_10004008
#undef DAT_10004010
#undef DAT_10004014
#undef uStack_24
#undef auStack_20
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_80
#undef local_7c
#undef local_78
#undef auStackY_140
#undef local_74
#undef local_70
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_2c
#undef local_28
#undef uStack_40
#undef puStack_38
#undef uStack_34

#undef DAT_100040d4
#define DAT_100040d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x728U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

void recovered_10003480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = _Znwm(8);
  *puVar1 = &DAT_100040d4;
  return;
}

#undef DAT_100040d4

#undef DAT_10003deb
#define DAT_10003deb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined4 *)(pf_stack_frame + 192))
#define local_2c (*(undefined4 *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034b0
 */

int * recovered_100034b0(int *param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = DAT_10004014;
  local_2c = 0x3c34;
  local_24 = 0xe0;
  _Unwind_SjLj_Register(&local_48);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      pcVar1 = (char *)(param_2 + 1 + uVar3);
      uVar3 = uVar2;
    } while (*pcVar1 != '\0');
  }
  local_44 = 0xffffffff;
  recovered_10002560(param_1,param_2,uVar2);
  puVar4 = &DAT_10003deb;
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_3;
  }
  local_44 = 1;
  recovered_100035e0(param_1,(int)puVar4,param_3[1]);
  _Unwind_SjLj_Unregister(&local_48);
  return param_1;
}

#undef DAT_10003deb
#undef DAT_10004014
#undef local_20
#undef auStackY_e0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#define local_28 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e0
 */

int * recovered_100035e0(int *param_1,int param_2,uint param_3)

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
LAB_10003620:
      if (uVar7 != uVar2) goto code_r0x10003628;
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
        goto LAB_10003756;
      }
      goto LAB_10003758;
    }
    uVar6 = param_1[1];
LAB_10003632:
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
LAB_10003756:
    local_28 = (undefined1 *)*param_1;
LAB_10003758:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_28[iVar4] = 0;
  }
  return param_1;
code_r0x10003628:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10003632;
  goto LAB_10003620;
}

#undef local_28

#undef DAT_10004014
#define DAT_10004014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x668U)))
#define local_50 (*(undefined4 *)(pf_stack_frame + 176))
#define local_4c (*(int *)(pf_stack_frame + 180))
#define local_48 (*(undefined4 *)(pf_stack_frame + 184))
#define local_44 (*(undefined4 *)(pf_stack_frame + 188))
#define local_30 (*(undefined4 *)(pf_stack_frame + 208))
#define auStackY_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
#define local_2c (*(undefined4 *)(pf_stack_frame + 212))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_24 (*(undefined4 *)(pf_stack_frame + 220))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 224))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 228))
#define local_58 (*(char * *)(pf_stack_frame + 168))
#define local_54 (*(int *)(pf_stack_frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003780
 */

void recovered_10003780(char *arg_ecx,char *arg_edx)

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
  local_4c = 0x10003795;
  local_30 = DAT_10004014;
  local_2c = 0x3c3c;
  local_24 = 0x1cf;
  _Unwind_SjLj_Register(&local_48);
  iVar3 = local_4c;
  if (cVar1 == '\x01') {
    if (arg_ecx[8] == '\0') goto LAB_10003950;
    local_44 = 0xffffffff;
    pf_command_result_100039e2(&local_58,arg_ecx + 8);
    pcVar5 = (char *)(((uintptr_t)pf_module_state+0x43fU));
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
      wm_lua_write((char *)(((uintptr_t)pf_module_state+0x5c8U)),2);
    }
    uVar6 = *(uint *)(arg_ecx + 0x24);
    if (uVar6 == 0) {
      iVar4 = ((uintptr_t)pf_module_state+0x5cbU);
      uVar6 = 0x1b;
    }
    else {
      iVar4 = ((uintptr_t)pf_module_state+0x43fU);
      if (*(int *)(arg_ecx + 0x20) != 0) {
        iVar4 = *(int *)(arg_ecx + 0x20);
      }
    }
    local_44 = 0xffffffff;
    local_50 = 0;
    local_54 = 0;
    local_58 = (char *)0x0;
    recovered_10002560((int *)&local_58,iVar4,uVar6);
    pcVar5 = (char *)(((uintptr_t)pf_module_state+0x43fU));
    if (local_58 != (char *)0x0) {
      pcVar5 = local_58;
    }
    local_44 = 3;
    wm_lua_write(pcVar5,local_54);
    local_44 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_58);
LAB_10003950:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10004014
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_30
#undef auStackY_f0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_58
#undef local_54
