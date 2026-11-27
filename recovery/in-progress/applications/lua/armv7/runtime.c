/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002bdc
#define DAT_10002bdc (*(int *)(0x10002bdcU))
#undef DAT_10002c04
#define DAT_10002c04 (*(int *)(0x10002c04U))
#undef DAT_10003f0b
#define DAT_10003f0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_10003f20
#define DAT_10003f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
#undef DAT_10003f24
#define DAT_10003f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42fcU)))
#undef str_10003f0c
#define str_10003f0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x200U)))
#undef str_10003f13
#define str_10003f13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x207U)))
#undef str_10003f27
#define str_10003f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_10003f31
#define str_10003f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_10003f3b
#define str_10003f3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_10003f56
#define str_10003f56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24aU)))
#undef str_10003f83
#define str_10003f83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x277U)))
#undef str_10003f91
#define str_10003f91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x285U)))
#define local_10b4 (*(byte (*)[4276])(pf_stack_frame + 204))
#define local_10b0 (*(undefined4 *)(pf_stack_frame + 208))
#define local_10a4 (*(byte * *)(pf_stack_frame + 220))
#define local_10a0 (*(undefined4 * *)(pf_stack_frame + 224))
#define local_109c (*(undefined4 *)(pf_stack_frame + 228))
#define local_1098 (*(void * (*)[1062])(pf_stack_frame + 232))
#define local_1090 (*(undefined4 (*)[1060])(pf_stack_frame + 240))
#define local_107c (*(uint *)(pf_stack_frame + 260))
#define local_1078 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_1074 (*(uint *)(pf_stack_frame + 268))
#define local_106c (*(byte *)(pf_stack_frame + 276))
#define local_90 (*(undefined4 *)(pf_stack_frame + 4336))
#define local_7c (*(undefined4 *)(pf_stack_frame + 4356))
#define local_78 (*(int *)(pf_stack_frame + 4360))
#define local_74 (*(undefined1 * *)(pf_stack_frame + 4364))
#define local_70 (*(int *)(pf_stack_frame + 4368))
#define local_6c (*(undefined1 * *)(pf_stack_frame + 4372))
#define auStack_1170 (*(undefined1 (*)[4464])(pf_stack_frame + 16))
#define iStack_1150 (*(int *)(pf_stack_frame + 48))
#define local_116c (*(uint *)(pf_stack_frame + 20))
#define uStack_1104 (*(undefined4 *)(pf_stack_frame + 124))
#define local_1168 (*(int * *)(pf_stack_frame + 24))
#define local_1164 (*(uint *)(pf_stack_frame + 28))
#define local_1160 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_115c (*(byte * *)(pf_stack_frame + 36))
#define local_1158 (*(int * *)(pf_stack_frame + 40))
#define local_1154 (*(byte * *)(pf_stack_frame + 44))
#define local_114c (*(void * *)(pf_stack_frame + 52))
#define local_1148 (*(int *)(pf_stack_frame + 56))
#define local_1144 (*(undefined4 *)(pf_stack_frame + 60))
#define local_1140 (*(char *)(pf_stack_frame + 64))
#define local_113c (*(void * *)(pf_stack_frame + 68))
#define local_1138 (*(undefined4 *)(pf_stack_frame + 72))
#define local_1134 (*(undefined4 *)(pf_stack_frame + 76))
#define local_1130 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_112c (*(uint *)(pf_stack_frame + 84))
#define local_1128 (*(undefined4 *)(pf_stack_frame + 88))
#define local_1124 (*(undefined1 * *)(pf_stack_frame + 92))
#define local_1120 (*(undefined4 *)(pf_stack_frame + 96))
#define local_111c (*(undefined4 *)(pf_stack_frame + 100))
#define local_1118 (*(byte * *)(pf_stack_frame + 104))
#define local_1114 (*(undefined4 * *)(pf_stack_frame + 108))
#define local_1110 (*(undefined4 *)(pf_stack_frame + 112))
#define aiStack_1088 (*(int (*)[1058])(pf_stack_frame + 248))
#define local_1108 (*(int *)(pf_stack_frame + 120))
#define local_1100 (*(undefined4 *)(pf_stack_frame + 128))
#define local_10fc (*(uint *)(pf_stack_frame + 132))
#define local_10f8 (*(void * *)(pf_stack_frame + 136))
#define local_10f4 (*(undefined4 *)(pf_stack_frame + 140))
#define local_10f0 (*(undefined4 *)(pf_stack_frame + 144))
#define uStack_94 (*(undefined4 *)(pf_stack_frame + 4332))
#define local_10ec (*(int (*)[1083])(pf_stack_frame + 148))
#define local_10e0 (*(char * *)(pf_stack_frame + 160))
#define local_10dc (*(uint *)(pf_stack_frame + 164))
#define local_10d8 (*(undefined4 (*)[1078])(pf_stack_frame + 168))
#define local_10d0 (*(undefined8 *)(pf_stack_frame + 176))
#define auStack_68 (*(undefined1 (*)[104])(pf_stack_frame + 4376))
#define local_10c8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_10c4 (*(uint *)(pf_stack_frame + 188))
#define local_10c0 (*(void * *)(pf_stack_frame + 192))
#define local_10bc (*(undefined4 *)(pf_stack_frame + 196))
#define local_10b8 (*(undefined4 *)(pf_stack_frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba4
 */

uint recovered_10001ba4(byte *param_1,int *param_2)

{
  unsigned char pf_stack_frame[4512] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  void *pvVar4;
  bool bVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_1170;
  local_1144 = 0;
  local_1148 = 0;
  local_114c = (void *)0x0;
  local_1140 = (int)param_1 < 2;
  local_7c = DAT_10008008;
  local_78 = ((uintptr_t)pf_module_state + 0x114U);
  local_70 = (*(uint32_t *)(uint32_t[]){0x1624ULL}) + 0x10001c28;
  local_1158 = param_2;
  _Unwind_SjLj_Register(&uStack_94);
  local_115c = param_1;
  if ((1 < (int)param_1) && (local_1158 != (int *)0x0)) {
    pbVar6 = (byte *)0x1;
LAB_10001cb4:
    puVar7 = (undefined1 *)local_1158[(int)pbVar6];
    local_10d8[0] = 0;
    local_10dc = 0;
    local_10e0 = (char *)0x0;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_10003f0b;
    }
    uVar12 = 0;
    do {
      uVar13 = uVar12;
      uVar12 = uVar13 + 1;
    } while (puVar7[uVar13] != '\0');
    local_90 = 1;
    local_1154 = pbVar6;
    recovered_10003308((int *)&local_10e0,(int)puVar7,uVar13);
    pcVar8 = local_10e0;
    if (local_10e0 == (char *)0x0) {
      pcVar8 = &DAT_10003f0b;
    }
    if (local_10dc != 0) {
      iVar11 = 0;
      do {
        if (pcVar8[-iVar11] == '=') {
          if (iVar11 != 1) {
            local_1110 = 0;
            local_1114 = (undefined4 *)0x0;
            local_1118 = (byte *)0x0;
            local_90 = 2;
            uVar12 = -iVar11;
            if (local_10dc < (uint)-iVar11) {
              uVar12 = local_10dc;
            }
            local_1160 = (undefined4 *)iVar11;
            recovered_10003308((int *)&local_1118,(int)pcVar8,uVar12);
            local_109c = 0;
            local_10a0 = (undefined4 *)0x0;
            local_10a4 = (byte *)0x0;
            local_90 = 3;
            uVar12 = 1U - (int)local_1160;
            if (local_10dc < 1U - (int)local_1160) {
              uVar12 = local_10dc;
            }
            pcVar8 = local_10e0;
            if (local_10e0 == (char *)0x0) {
              pcVar8 = &DAT_10003f0b;
            }
            recovered_10003308((int *)&local_10a4,(int)(pcVar8 + uVar12),local_10dc - uVar12);
            local_1160 = local_1114;
            local_90 = 4;
            local_1090[0] = 0;
            local_1098[1] = (undefined4 *)0x0;
            local_1098[0] = (void *)0x0;
            recovered_10003308((int *)local_1098,((uintptr_t)pf_module_state + 0x200U),6);
            pvVar4 = local_1098[1];
            _ZdlPv(local_1098[0]);
            if (local_1160 != pvVar4) goto LAB_10001ebc;
            if (local_1114 == (undefined4 *)0x0) goto LAB_10001c54;
            pbVar6 = local_1118;
            if (local_1118 == (byte *)0x0) {
              pbVar6 = &DAT_10003f0b;
            }
            pbVar9 = (byte *)str_10003f0c;
            puVar10 = local_1114;
            goto LAB_10001e88;
          }
          break;
        }
        iVar11 = iVar11 + -1;
      } while (-iVar11 != local_10dc);
    }
    goto LAB_10001c9c;
  }
LAB_10002214:
  local_90 = 10;
  _ZN6winter3lua5LuaVMC1Ev(&iStack_1150);
  if (local_1140 == '\x01') {
    local_90 = 0xb;
    wm_lua_show_banner();
    local_90 = 0xc;
    wm_lua_show_help();
    local_90 = 0xd;
    local_10d8[0] = 0;
    local_10dc = 0;
    local_10e0 = (char *)0x0;
    recovered_10003308((int *)&local_10e0,((uintptr_t)pf_module_state + 0x21bU),9);
    local_90 = 0xe;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)local_1098,&iStack_1150,(int *)&local_10e0);
    _ZdlPv(local_10e0);
    if ((char)local_1098[0] == '\x01') {
      local_90 = 0xf;
      wm_lua_write(str_10003f31,9);
      local_90 = 0x10;
      wm_lua_write(str_10003f27,9);
      local_90 = 0x11;
      wm_lua_writeline();
      if ((char)local_1090[0] != '\0') {
        local_90 = 0x12;
        _ZNK6winter3lua8LuaValue8toStringEv((int *)&local_10e0,(undefined1 *)local_1090);
        pcVar8 = &DAT_10003f0b;
        if (local_10e0 != (char *)0x0) {
          pcVar8 = local_10e0;
        }
        local_90 = 0x13;
        wm_lua_write(pcVar8,local_10dc);
        local_90 = 0x14;
        wm_lua_writeline();
        _ZdlPv(local_10e0);
      }
    }
    else {
      puVar7 = &DAT_10003f0b;
      if (local_1078 != (undefined1 *)0x0) {
        puVar7 = local_1078;
      }
      if (0x12 < local_1074) {
        uVar12 = 0;
        do {
          if (puVar7[uVar12] == 'f') {
            puVar14 = puVar7 + uVar12;
            cVar1 = puVar14[1];
            bVar5 = cVar1 == 'a';
            if (bVar5) {
              cVar1 = puVar14[2];
            }
            if (bVar5 && cVar1 == 'i') {
              cVar1 = puVar14[3];
              bVar5 = cVar1 == 'l';
              if (bVar5) {
                cVar1 = puVar14[4];
              }
              if (bVar5 && cVar1 == 'e') {
                cVar1 = puVar14[5];
                bVar5 = cVar1 == 'd';
                if (bVar5) {
                  cVar1 = puVar14[6];
                }
                if (bVar5 && cVar1 == ' ') {
                  cVar1 = puVar14[7];
                  bVar5 = cVar1 == 't';
                  if (bVar5) {
                    cVar1 = puVar14[8];
                  }
                  if (bVar5 && cVar1 == 'o') {
                    cVar1 = puVar14[9];
                    bVar5 = cVar1 == ' ';
                    if (bVar5) {
                      cVar1 = puVar14[10];
                    }
                    if (bVar5 && cVar1 == 'o') {
                      cVar1 = puVar14[0xb];
                      bVar5 = cVar1 == 'p';
                      if (bVar5) {
                        cVar1 = puVar14[0xc];
                      }
                      if (bVar5 && cVar1 == 'e') {
                        cVar1 = puVar14[0xd];
                        bVar5 = cVar1 == 'n';
                        if (bVar5) {
                          cVar1 = puVar14[0xe];
                        }
                        if (bVar5 && cVar1 == ' ') {
                          cVar1 = puVar14[0xf];
                          bVar5 = cVar1 == 'f';
                          if (bVar5) {
                            cVar1 = puVar14[0x10];
                          }
                          if (bVar5 && cVar1 == 'i') {
                            pcVar8 = puVar14 + 0x11;
                            if (*pcVar8 == 'l') {
                              puVar14 = (undefined1 *)(uint)(byte)puVar14[0x12];
                            }
                            if (*pcVar8 == 'l' && puVar14 == (undefined1 *)0x65) {
                              if (uVar12 != 0xffffffff) goto LAB_10002524;
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
          uVar12 = uVar12 + 1;
        } while (uVar12 <= local_1074 - 0x13);
        if (0x19 < local_1074) {
          uVar12 = 0;
          do {
            iVar11 = 0;
            while (puVar7[-iVar11] == str_10003f3b[-iVar11]) {
              bVar5 = iVar11 == -0x19;
              iVar11 = iVar11 + -1;
              if (bVar5) {
                if (uVar12 != 0xffffffff) goto LAB_10002524;
                goto LAB_10002500;
              }
            }
            uVar12 = uVar12 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar12 <= local_1074 - 0x1a);
        }
      }
LAB_10002500:
      local_90 = 0x15;
      recovered_100034cc((char *)local_1098,(byte *)str_10003f56);
    }
LAB_10002524:
    _ZdlPv(local_1078);
    if (3 < local_107c) {
      local_90 = 0x16;
      recovered_100037f0(local_107c,aiStack_1088);
    }
  }
  if (local_1148 == 0) {
    pbVar6 = (byte *)0x0;
    local_116c = 1;
  }
  else {
    local_90 = 0x17;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)local_1098,&iStack_1150,(int *)&local_114c);
    pcVar8 = str_10003f83;
    local_90 = 0x18;
    if ((char)local_1098[0] != '\0') {
      pcVar8 = (char *)0x0;
    }
    recovered_100034cc((char *)local_1098,(byte *)pcVar8);
    local_116c = (uint)local_1098[0] & 0xff;
    _ZdlPv(local_1078);
    pbVar6 = (byte *)(uint)local_106c;
    if (3 < local_107c) {
      local_90 = 0x19;
      local_1154 = (byte *)(uint)local_106c;
      recovered_100037f0(local_107c,aiStack_1088);
      pbVar6 = local_1154;
    }
  }
  if (local_1140 == '\x01' && pbVar6 == (byte *)0x0) {
    local_1168 = &local_1108;
    local_1154 = (byte *)&local_10d0;
    local_1158 = local_10ec;
    local_115c = local_10b4;
    local_1160 = local_10d8;
    do {
      local_90 = 0x1a;
      bVar5 = wm_lua_readline((int)local_1098,0x1000,str_10003f91,1);
      if (!bVar5) break;
      local_10d8[0] = 0;
      local_10dc = 0;
      local_10e0 = (char *)0x0;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (*(char *)((int)local_1098 + uVar13) != '\0');
      local_90 = 0x1b;
      recovered_10003308((int *)&local_10e0,(int)local_1098,uVar13);
      pcVar8 = local_10e0;
      if (local_10e0 == (char *)0x0) {
        pcVar8 = &DAT_10003f0b;
      }
      if (local_10dc == 5) {
        cVar1 = *pcVar8;
        bVar5 = cVar1 == '.';
        if (bVar5) {
          cVar1 = pcVar8[1];
        }
        if (bVar5 && cVar1 == 'e') {
          cVar1 = pcVar8[2];
          bVar5 = cVar1 == 'x';
          if (bVar5) {
            cVar1 = pcVar8[3];
          }
          if (bVar5 && cVar1 == 'i') {
            cVar1 = pcVar8[4];
joined_r0x10002d4c:
            if (cVar1 == 't') {
              _ZdlPv(local_10e0);
              break;
            }
          }
        }
      }
      else if (local_10dc == 4) {
        cVar1 = *pcVar8;
        if (cVar1 == 'q') {
          if (pcVar8[1] == 'u') goto LAB_10002bc0;
        }
        else {
          bVar5 = cVar1 == 'e';
          if (bVar5) {
            cVar1 = pcVar8[1];
          }
          if (bVar5 && cVar1 == 'x') {
LAB_10002bc0:
            if (pcVar8[2] == 'i') {
              cVar1 = pcVar8[3];
              goto joined_r0x10002d4c;
            }
          }
        }
      }
      _ZdlPv(local_10e0);
      local_10d8[0] = 0;
      local_10dc = 0;
      local_10e0 = (char *)0x0;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (*(char *)((int)local_1098 + uVar13) != '\0');
      local_90 = 0x1c;
      recovered_10003308((int *)&local_10e0,(int)local_1098,uVar13);
      pcVar8 = local_10e0;
      if (local_10e0 == (char *)0x0) {
        pcVar8 = &DAT_10003f0b;
      }
      if (local_10dc == 5) {
        cVar1 = *pcVar8;
        bVar5 = cVar1 == ':';
        if (bVar5) {
          cVar1 = pcVar8[1];
        }
        if (!bVar5 || cVar1 != 'h') goto LAB_1000281c;
        cVar1 = pcVar8[2];
        bVar5 = cVar1 != 'e';
        if (!bVar5) {
          cVar1 = pcVar8[3];
        }
        if ((bVar5 || cVar1 != 'l') || (pcVar8[4] != 'p')) goto LAB_1000281c;
LAB_10002c38:
        _ZdlPv(local_10e0);
        local_90 = 0x1e;
        wm_lua_show_help();
      }
      else {
LAB_1000281c:
        local_1110 = 0;
        local_1114 = (undefined4 *)0x0;
        local_1118 = (byte *)0x0;
        uVar12 = 0;
        do {
          uVar13 = uVar12;
          uVar12 = uVar13 + 1;
        } while (*(char *)((int)local_1098 + uVar13) != '\0');
        local_90 = 0x1d;
        recovered_10003308((int *)&local_1118,(int)local_1098,uVar13);
        pbVar6 = local_1118;
        if (local_1118 == (byte *)0x0) {
          pbVar6 = &DAT_10003f0b;
        }
        if (local_1114 == (undefined4 *)0x6) {
          bVar2 = *pbVar6;
          bVar5 = bVar2 == 0x68;
          if (bVar5) {
            bVar2 = pbVar6[1];
          }
          if (bVar5 && bVar2 == 0x65) {
            bVar2 = pbVar6[2];
            bVar5 = bVar2 == 0x6c;
            if (bVar5) {
              bVar2 = pbVar6[3];
            }
            if (bVar5 && bVar2 == 0x70) {
              pbVar9 = pbVar6 + 4;
              if (*pbVar9 == 0x28) {
                pbVar6 = (byte *)(uint)pbVar6[5];
              }
              if (*pbVar9 == 0x28 && pbVar6 == (byte *)0x29) {
                _ZdlPv(local_1118);
                goto LAB_10002c38;
              }
            }
          }
        }
        _ZdlPv(local_1118);
        _ZdlPv(local_10e0);
        if ((char)local_1098[0] != '\0') {
          local_109c = 0;
          local_10a0 = (undefined4 *)0x0;
          local_10a4 = (byte *)0x0;
          uVar12 = 0;
          do {
            uVar13 = uVar12;
            uVar12 = uVar13 + 1;
          } while (*(char *)((int)local_1098 + uVar13) != '\0');
          local_90 = 0x1f;
          recovered_10003308((int *)&local_10a4,(int)local_1098,uVar13);
          local_90 = 0x20;
          local_10e0 = (char *)((uint)local_10e0 & 0xffffff00);
          _ZN6winter3lua8LuaValueC1Ev((undefined1 *)local_1160);
          local_10b0 = 0;
          local_10b4[0] = 0;
          local_10b8 = 0;
          local_10bc = 0;
          local_10c0 = (void *)0x0;
          if (local_10a0 == (undefined4 *)0x0) {
LAB_10002ad8:
            local_90 = 0x28;
            local_111c = 0;
            local_1120 = 0;
            local_1124 = (undefined1 *)0x0;
            recovered_10003308((int *)&local_1124,((uintptr_t)pf_module_state + 0x299U),7);
            local_90 = 0x29;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)&local_1118,&iStack_1150,(int *)&local_10a4,
                               (int *)&local_1124);
            local_10e0 = (char *)CONCAT31(PF_PART3(local_10e0, 1),PF_PART1(local_1118, 0));
            local_10d8[0] = CONCAT31(PF_PART3(local_10d8[0], 1),(undefined1)local_1110);
            if (3 < local_10c4) {
              local_90 = 0x2a;
              recovered_100037f0(local_10c4,(int *)local_1154);
            }
            uVar3 = local_1100;
            local_10c4 = local_10fc;
            switch((uintptr_t)(local_10fc)) {
            case 0:
              break;
            case 1:
              iVar11 = *local_1168;
              *(int *)(local_1154 + 4) = local_1168[1];
              *(int *)local_1154 = iVar11;
              break;
            case 2:
              local_10d0 = CONCAT44(uStack_1104,local_1108);
              break;
            case 3:
              local_10d0 = CONCAT71(PF_PART7(local_10d0, 1),(undefined1)local_1108);
              break;
            case 4:
              local_1100 = 0;
              local_10c8 = uVar3;
LAB_10002cb8:
              local_10d0 = CONCAT44(uStack_1104,local_1108);
              uStack_1104 = 0;
              local_1108 = 0;
              break;
            default:
              if (local_10fc - 5 < 3) goto LAB_10002cb8;
            }
            _ZdlPv(local_10c0);
            local_10b8 = local_10f0;
            local_10bc = local_10f4;
            iVar11 = *local_1158;
            local_10c0 = local_10f8;
            *(int *)(local_115c + 4) = local_1158[1];
            *(int *)local_115c = iVar11;
            local_10f4 = 0;
            local_10f0 = 0;
            local_10f8 = (void *)0x0;
            _ZdlPv((void *)0x0);
            if (3 < local_10fc) {
              local_90 = 0x2b;
              recovered_100037f0(local_10fc,local_1168);
            }
            puVar7 = local_1124;
          }
          else {
            pbVar6 = local_10a4;
            if (local_10a4 == (byte *)0x0) {
              pbVar6 = &DAT_10003f0b;
            }
            if (*pbVar6 != 0x3d) goto LAB_10002ad8;
            local_90 = 0x21;
            local_1128 = 0;
            local_112c = 0;
            local_1130 = (undefined1 *)0x0;
            recovered_10003308((int *)&local_1130,(int)(pbVar6 + 1),(int)local_10a0 - 1);
            local_111c = 0;
            local_1120 = 0;
            local_1124 = (undefined1 *)0x0;
            local_90 = 0x22;
            recovered_10003308((int *)&local_1124,((uintptr_t)pf_module_state + 0x291U),7);
            local_90 = 0x23;
            puVar7 = local_1130;
            if (local_1130 == (undefined1 *)0x0) {
              puVar7 = &DAT_10003f0b;
            }
            recovered_10003ab4((int *)&local_1124,(int)puVar7,local_112c);
            local_1134 = 0;
            local_1138 = 0;
            local_113c = (void *)0x0;
            local_90 = 0x24;
            recovered_10003308((int *)&local_113c,((uintptr_t)pf_module_state + 0x299U),7);
            local_90 = 0x25;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)&local_1118,&iStack_1150,(int *)&local_1124,
                               (int *)&local_113c);
            local_10e0 = (char *)CONCAT31(PF_PART3(local_10e0, 1),PF_PART1(local_1118, 0));
            local_10d8[0] = CONCAT31(PF_PART3(local_10d8[0], 1),(undefined1)local_1110);
            if (3 < local_10c4) {
              local_90 = 0x26;
              recovered_100037f0(local_10c4,(int *)local_1154);
            }
            uVar3 = local_1100;
            local_10c4 = local_10fc;
            switch((uintptr_t)(local_10fc)) {
            case 0:
              break;
            case 1:
              iVar11 = *local_1168;
              *(int *)(local_1154 + 4) = local_1168[1];
              *(int *)local_1154 = iVar11;
              break;
            case 2:
              local_10d0 = CONCAT44(uStack_1104,local_1108);
              break;
            case 3:
              local_10d0 = CONCAT71(PF_PART7(local_10d0, 1),(undefined1)local_1108);
              break;
            case 4:
              local_1100 = 0;
              local_10c8 = uVar3;
LAB_10002db4:
              local_10d0 = CONCAT44(uStack_1104,local_1108);
              uStack_1104 = 0;
              local_1108 = 0;
              break;
            default:
              if (local_10fc - 5 < 3) goto LAB_10002db4;
            }
            _ZdlPv(local_10c0);
            local_10b8 = local_10f0;
            local_10bc = local_10f4;
            iVar11 = *local_1158;
            local_10c0 = local_10f8;
            *(int *)(local_115c + 4) = local_1158[1];
            *(int *)local_115c = iVar11;
            local_10f4 = 0;
            local_10f0 = 0;
            local_10f8 = (void *)0x0;
            _ZdlPv((void *)0x0);
            if (3 < local_10fc) {
              local_90 = 0x27;
              recovered_100037f0(local_10fc,local_1168);
            }
            _ZdlPv(local_113c);
            _ZdlPv(local_1124);
            puVar7 = local_1130;
          }
          _ZdlPv(puVar7);
          local_90 = 0x2c;
          recovered_100034cc((char *)&local_10e0,(byte *)0x0);
          uVar12 = (uint)local_10b4[0];
          _ZdlPv(local_10c0);
          if (3 < local_10c4) {
            local_90 = 0x2d;
            local_1164 = uVar12;
            recovered_100037f0(local_10c4,(int *)local_1154);
            uVar12 = local_1164;
          }
          _ZdlPv(local_10a4);
          if (uVar12 != 0) break;
        }
      }
    } while (local_1140 != '\0');
  }
  _ZN6winter3lua5LuaVMD1Ev(&iStack_1150);
  _ZdlPv(local_114c);
  local_90 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&uStack_94);
  return local_116c;
  while (puVar10 = (undefined4 *)((int)puVar10 + -1), pbVar6 = pbVar6 + 1, pbVar9 = pbVar9 + 1,
        puVar10 != (undefined4 *)0x0) {
LAB_10001e88:
    uVar12 = (uint)*pbVar9;
    uVar13 = (uint)*pbVar6;
    if (uVar12 - 0x41 < 0x1a) {
      uVar12 = uVar12 | 0x20;
    }
    if (uVar13 - 0x41 < 0x1a) {
      uVar13 = uVar13 | 0x20;
    }
    if (uVar13 != uVar12) goto LAB_10001ebc;
  }
LAB_10001c54:
  local_90 = 5;
  pbVar6 = local_10a4;
  if (local_10a4 == (byte *)0x0) {
    pbVar6 = &DAT_10003f0b;
  }
  recovered_10003308((int *)&local_114c,(int)pbVar6,(uint)local_10a0);
  goto LAB_10001c88;
LAB_10001ebc:
  local_1090[0] = 0;
  local_1098[1] = (undefined4 *)0x0;
  local_1098[0] = (void *)0x0;
  local_1160 = local_1114;
  local_90 = 6;
  recovered_10003308((int *)local_1098,((uintptr_t)pf_module_state + 0x207U),7);
  pvVar4 = local_1098[1];
  _ZdlPv(local_1098[0]);
  if (local_1160 != pvVar4) goto LAB_10001c88;
  if (local_1114 != (undefined4 *)0x0) {
    pbVar6 = local_1118;
    if (local_1118 == (byte *)0x0) {
      pbVar6 = &DAT_10003f0b;
    }
    puVar10 = local_1114;
    pbVar9 = (byte *)str_10003f13;
    do {
      uVar12 = (uint)*pbVar9;
      uVar13 = (uint)*pbVar6;
      if (uVar12 - 0x41 < 0x1a) {
        uVar12 = uVar12 | 0x20;
      }
      if (uVar13 - 0x41 < 0x1a) {
        uVar13 = uVar13 | 0x20;
      }
      if (uVar13 != uVar12) goto LAB_10001c88;
      puVar10 = (undefined4 *)((int)puVar10 + -1);
      pbVar6 = pbVar6 + 1;
      pbVar9 = pbVar9 + 1;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_1160 = local_10a0;
  local_90 = 7;
  local_1090[0] = 0;
  local_1098[1] = (undefined4 *)0x0;
  local_1098[0] = (void *)0x0;
  recovered_10003308((int *)local_1098,((uintptr_t)pf_module_state + 0x20fU),4);
  pvVar4 = local_1098[1];
  _ZdlPv(local_1098[0]);
  if (local_1160 == pvVar4) {
    bVar5 = true;
    if (local_10a0 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      pbVar6 = local_10a4;
      if (local_10a4 == (byte *)0x0) {
        pbVar6 = &DAT_10003f0b;
      }
      do {
        uVar13 = (uint)pbVar6[(int)puVar10];
        uVar12 = (uint)*(byte *)((int)puVar10 + ((uintptr_t)pf_module_state + 0x20fU));
        if (uVar13 - 0x41 < 0x1a) {
          uVar13 = uVar13 | 0x20;
        }
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar13 != uVar12) goto LAB_10002044;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      } while (local_10a0 != puVar10);
    }
  }
  else {
LAB_10002044:
    if (local_10a0 == (undefined4 *)0x1) {
      bVar5 = true;
      pbVar6 = local_10a4;
      if (local_10a4 == (byte *)0x0) {
        pbVar6 = &DAT_10003f0b;
      }
      if (*pbVar6 == 0x31) goto LAB_1000220c;
    }
    local_1160 = local_10a0;
    local_1090[0] = 0;
    local_1098[1] = (undefined4 *)0x0;
    local_1098[0] = (void *)0x0;
    local_90 = 8;
    recovered_10003308((int *)local_1098,((uintptr_t)pf_module_state + 0x214U),3);
    pvVar4 = local_1098[1];
    _ZdlPv(local_1098[0]);
    if (local_1160 == pvVar4) {
      bVar5 = true;
      if (local_10a0 != (undefined4 *)0x0) {
        pbVar6 = local_10a4;
        if (local_10a4 == (byte *)0x0) {
          pbVar6 = &DAT_10003f0b;
        }
        pbVar9 = &DAT_10003f20;
        puVar10 = local_10a0;
        do {
          uVar13 = (uint)*pbVar9;
          uVar12 = (uint)*pbVar6;
          if (uVar13 - 0x41 < 0x1a) {
            uVar13 = uVar13 | 0x20;
          }
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != uVar13) goto LAB_10002130;
          puVar10 = (undefined4 *)((int)puVar10 + -1);
          pbVar6 = pbVar6 + 1;
          pbVar9 = pbVar9 + 1;
        } while (puVar10 != (undefined4 *)0x0);
      }
    }
    else {
LAB_10002130:
      local_1090[0] = 0;
      local_1098[1] = (undefined4 *)0x0;
      local_1098[0] = (void *)0x0;
      local_1160 = local_10a0;
      local_90 = 9;
      recovered_10003308((int *)local_1098,((uintptr_t)pf_module_state + 0x218U),2);
      pvVar4 = local_1098[1];
      _ZdlPv(local_1098[0]);
      bVar5 = false;
      if (local_1160 == pvVar4) {
        if (local_10a0 == (undefined4 *)0x0) {
          bVar5 = true;
        }
        else {
          pbVar6 = local_10a4;
          if (local_10a4 == (byte *)0x0) {
            pbVar6 = &DAT_10003f0b;
          }
          pbVar9 = &DAT_10003f24;
          puVar10 = local_10a0;
          do {
            puVar10 = (undefined4 *)((int)puVar10 + -1);
            uVar12 = (uint)*pbVar9;
            uVar13 = (uint)*pbVar6;
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar13 - 0x41 < 0x1a) {
              uVar13 = uVar13 | 0x20;
            }
            bVar5 = uVar13 == uVar12;
          } while ((uVar13 == uVar12) &&
                  (pbVar6 = pbVar6 + 1, pbVar9 = pbVar9 + 1, puVar10 != (undefined4 *)0x0));
        }
      }
    }
  }
LAB_1000220c:
  local_1140 = bVar5;
LAB_10001c88:
  _ZdlPv(local_10a4);
  _ZdlPv(local_1118);
LAB_10001c9c:
  _ZdlPv(local_10e0);
  pbVar6 = local_1154 + 1;
  if (pbVar6 == local_115c) goto LAB_10002214;
  goto LAB_10001cb4;
}

#undef DAT_10002bdc
#undef DAT_10002c04
#undef DAT_10003f0b
#undef DAT_10003f20
#undef DAT_10003f24
#undef DAT_10008008
#undef str_10003f0c
#undef str_10003f13
#undef str_10003f27
#undef str_10003f31
#undef str_10003f3b
#undef str_10003f56
#undef str_10003f83
#undef str_10003f91
#undef local_10b4
#undef local_10b0
#undef local_10a4
#undef local_10a0
#undef local_109c
#undef local_1098
#undef local_1090
#undef local_107c
#undef local_1078
#undef local_1074
#undef local_106c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_1170
#undef iStack_1150
#undef local_116c
#undef uStack_1104
#undef local_1168
#undef local_1164
#undef local_1160
#undef local_115c
#undef local_1158
#undef local_1154
#undef local_114c
#undef local_1148
#undef local_1144
#undef local_1140
#undef local_113c
#undef local_1138
#undef local_1134
#undef local_1130
#undef local_112c
#undef local_1128
#undef local_1124
#undef local_1120
#undef local_111c
#undef local_1118
#undef local_1114
#undef local_1110
#undef aiStack_1088
#undef local_1108
#undef local_1100
#undef local_10fc
#undef local_10f8
#undef local_10f4
#undef local_10f0
#undef uStack_94
#undef local_10ec
#undef local_10e0
#undef local_10dc
#undef local_10d8
#undef local_10d0
#undef auStack_68
#undef local_10c8
#undef local_10c4
#undef local_10c0
#undef local_10bc
#undef local_10b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c4
 */

void recovered_100032c4(char *param_1)

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
 * Address: 0x100032f8
 */

void recovered_100032f8(int param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *extraout_r0 = 0;
  undefined8 *puVar2;
  undefined8 *owner;
  void *owner_00;
  int extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint uVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  puVar10 = (undefined1 *)*extraout_r0;
  uVar1 = 0;
  if (extraout_r1 != 0) {
    uVar1 = extraout_r2;
  }
  if (extraout_r1 != 0 && puVar10 != (undefined1 *)0x0) {
    uVar11 = extraout_r1 - (int)puVar10;
    uVar4 = 0;
    do {
      if (uVar11 == uVar4) {
        uVar4 = extraout_r0[1] - uVar11;
        iStack_2c = 0;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        iStack_30 = 0;
        pvStack_34 = (void *)0x0;
        recovered_10003308((int *)&pvStack_34,(int)(puVar10 + uVar11),uVar4);
        owner_00 = (void *)*extraout_r0;
        iVar5 = extraout_r0[1];
        iVar6 = extraout_r0[2];
        *extraout_r0 = (int)pvStack_34;
        extraout_r0[1] = iStack_30;
        extraout_r0[2] = iStack_2c;
        pvStack_34 = owner_00;
        iStack_30 = iVar5;
        iStack_2c = iVar6;
        _ZdlPv(owner_00);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)extraout_r0[1]);
  }
  extraout_r0[1] = 0;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  if (uVar1 == 0) {
    if (*extraout_r0 == 0) {
      puVar10 = _Znwm(1);
      *extraout_r0 = (int)puVar10;
      *puVar10 = 0;
      extraout_r0[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)extraout_r0[2]) goto LAB_100033f4;
  puVar2 = _Znwm(uVar1 + 1);
  uVar11 = extraout_r0[1];
  owner = (undefined8 *)*extraout_r0;
  uVar4 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar11 != 0) {
    bVar12 = uVar11 == 0x10;
    uVar3 = extraout_r1_00;
    if (0xf < uVar11) {
      uVar3 = (int)puVar2 - (int)owner;
      bVar12 = uVar3 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar3) && !bVar12) {
      uVar4 = uVar11 & 0xfffffff0;
      uVar3 = uVar4;
      puVar7 = puVar2;
      puVar9 = owner;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar7 = uVar13;
        puVar7[1] = uVar14;
        puVar7 = puVar7 + 2;
      } while (uVar3 != 0);
      if (uVar11 == uVar4) goto LAB_100033d8;
    }
    iVar5 = uVar11 - uVar4;
    puVar10 = (undefined1 *)((int)puVar2 + uVar4);
    puVar8 = (undefined1 *)((int)owner + uVar4);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar8;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_100033d8:
  *(undefined1 *)((int)puVar2 + uVar11) = 0;
  _ZdlPv(owner);
  extraout_r0[2] = uVar1;
  *extraout_r0 = (int)puVar2;
LAB_100033f4:
  uVar4 = 0;
  do {
    *(undefined1 *)(*extraout_r0 + uVar4) = *(undefined1 *)(extraout_r1 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
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
 * Address: 0x10003308
 */

void recovered_10003308(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *owner;
  void *owner_00;
  uint extraout_r1 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;

  puVar10 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar10 != (undefined1 *)0x0) {
    uVar11 = param_2 - (int)puVar10;
    uVar4 = 0;
    do {
      if (uVar11 == uVar4) {
        uVar4 = param_1[1] - uVar11;
        local_24 = 0;
        if (uVar1 < uVar4) {
          uVar4 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_10003308((int *)&local_2c,(int)(puVar10 + uVar11),uVar4);
        owner_00 = (void *)*param_1;
        iVar5 = param_1[1];
        iVar6 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = owner_00;
        local_28 = iVar5;
        local_24 = iVar6;
        _ZdlPv(owner_00);
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar10 != (undefined1 *)0x0) {
    *puVar10 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar10 = _Znwm(1);
      *param_1 = (int)puVar10;
      *puVar10 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_100033f4;
  puVar2 = _Znwm(uVar1 + 1);
  uVar11 = param_1[1];
  owner = (undefined8 *)*param_1;
  uVar4 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar11 != 0) {
    bVar12 = uVar11 == 0x10;
    uVar3 = extraout_r1;
    if (0xf < uVar11) {
      uVar3 = (int)puVar2 - (int)owner;
      bVar12 = uVar3 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar3) && !bVar12) {
      uVar4 = uVar11 & 0xfffffff0;
      uVar3 = uVar4;
      puVar7 = puVar2;
      puVar9 = owner;
      do {
        uVar13 = *puVar9;
        uVar14 = puVar9[1];
        puVar9 = puVar9 + 2;
        uVar3 = uVar3 - 0x10;
        *puVar7 = uVar13;
        puVar7[1] = uVar14;
        puVar7 = puVar7 + 2;
      } while (uVar3 != 0);
      if (uVar11 == uVar4) goto LAB_100033d8;
    }
    iVar5 = uVar11 - uVar4;
    puVar10 = (undefined1 *)((int)puVar2 + uVar4);
    puVar8 = (undefined1 *)((int)owner + uVar4);
    do {
      iVar5 = iVar5 + -1;
      *puVar10 = *puVar8;
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
  }
LAB_100033d8:
  *(undefined1 *)((int)puVar2 + uVar11) = 0;
  _ZdlPv(owner);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_100033f4:
  uVar4 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

#undef DAT_100036fc
#define DAT_100036fc (*(int *)(0x100036fcU))
#undef DAT_10003700
#define DAT_10003700 (*(int *)(0x10003700U))
#undef DAT_10003f0b
#define DAT_10003f0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ffU)))
#undef DAT_10003f65
#define DAT_10003f65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x259U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42fcU)))
#undef str_10003f68
#define str_10003f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25cU)))
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
 * Address: 0x100034cc
 */

void recovered_100034cc(char *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  cVar1 = *param_1;
  local_7c = DAT_10008008;
  local_78 = ((uintptr_t)pf_module_state + 0x18cU);
  local_70 = (*(uint32_t *)(uint32_t[]){0x180ULL}) + 0x10003528;
  uVar3 = _Unwind_SjLj_Register(&uStack_94);
  if (cVar1 == '\x01') {
    if (param_1[8] == '\0') goto LAB_10003688;
    local_90 = 0xffffffff;
    _ZNK6winter3lua8LuaValue8toStringEv((int *)&local_a0,param_1 + 8);
    local_90 = 1;
    pcVar5 = &DAT_10003f0b;
    if (local_a0 != (char *)0x0) {
      pcVar5 = local_a0;
    }
    wm_lua_write(pcVar5,local_9c);
    local_90 = 2;
    wm_lua_writeline();
  }
  else {
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
      wm_lua_write(&DAT_10003f65,2);
    }
    uVar3 = *(uint *)(param_1 + 0x24);
    if (uVar3 == 0) {
      pcVar5 = str_10003f68;
      uVar3 = 0x1a;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x20);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = &DAT_10003f0b;
      }
    }
    local_90 = 0xffffffff;
    local_98 = 0;
    local_9c = 0;
    local_a0 = (char *)0x0;
    recovered_10003308((int *)&local_a0,(int)pcVar5,uVar3);
    local_90 = 3;
    pcVar5 = &DAT_10003f0b;
    if (local_a0 != (char *)0x0) {
      pcVar5 = local_a0;
    }
    wm_lua_write(pcVar5,local_9c);
    local_90 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_a0);
LAB_10003688:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_100036fc
#undef DAT_10003700
#undef DAT_10003f0b
#undef DAT_10003f65
#undef DAT_10008008
#undef str_10003f68
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

#undef DAT_100037e8
#define DAT_100037e8 (*(int *)(0x100037e8U))
#undef DAT_100037ec
#define DAT_100037ec (*(int *)(0x100037ecU))
#undef DAT_10008008
#define DAT_10008008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42fcU)))
#define local_98 (*(void * *)(pf_stack_frame + 24))
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
 * Address: 0x10003704
 */

void * recovered_10003704(void *owner)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;

  _ZdlPv(*(void **)((int)owner + 0x20));
  local_7c = DAT_10008008;
  local_78 = ((uintptr_t)pf_module_state + 0x198U);
  uVar1 = *(uint *)((int)owner + 0x1c);
  local_70 = (*(uint32_t *)(uint32_t[]){0x54ULL}) + 0x10003764;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  _Unwind_SjLj_Register(&uStack_94);
  if (3 < uVar1) {
    local_90 = 1;
    local_98 = owner;
    recovered_100037f0(uVar1,(int *)((int)owner + 0x10));
    owner = local_98;
  }
  _Unwind_SjLj_Unregister(&uStack_94);
  return owner;
}

#undef DAT_100037e8
#undef DAT_100037ec
#undef DAT_10008008
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

#undef DAT_1000393c
#define DAT_1000393c (*(int *)(0x1000393cU))
#undef DAT_10003940
#define DAT_10003940 (*(int *)(0x10003940U))
#undef DAT_10008008
#define DAT_10008008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42fcU)))
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
 * Address: 0x100037f0
 */

void recovered_100037f0(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10008008;
  local_78 = ((uintptr_t)pf_module_state + 0x1a8U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xc4ULL}) + 0x10003848;
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
    recovered_10003944(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_1000393c
#undef DAT_10003940
#undef DAT_10008008
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

#undef DAT_10003aac
#define DAT_10003aac (*(int *)(0x10003aacU))
#undef DAT_10003ab0
#define DAT_10003ab0 (*(int *)(0x10003ab0U))
#undef DAT_10008008
#define DAT_10008008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x42fcU)))
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
 * Address: 0x10003944
 */

void recovered_10003944(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10008008;
  local_78 = ((uintptr_t)pf_module_state + 0x1b8U);
  local_70 = (*(uint32_t *)(uint32_t[]){0xd8ULL}) + 0x1000399c;
  _Unwind_SjLj_Register(&uStack_94);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10003a54;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 2;
      local_98 = param_2;
      (**(code **)(*piVar1 + 8))();
      goto LAB_10003a24;
    }
  }
  else {
    if ((param_1 != 6) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10003a54;
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_90 = 1;
      local_98 = param_2;
      (**(code **)(*piVar1 + 8))();
LAB_10003a24:
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
LAB_10003a54:
  _Unwind_SjLj_Unregister(&uStack_94);
  return;
}

#undef DAT_10003aac
#undef DAT_10003ab0
#undef DAT_10008008
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
 * Address: 0x10003ab4
 */

void recovered_10003ab4(int *param_1,int param_2,uint param_3)

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
LAB_10003af0:
    if (uVar10 != uVar6) goto code_r0x10003af8;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_10003cbc;
    puVar12 = _Znwm(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_10003c9c;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_10003c80;
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
LAB_10003c80:
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
LAB_10003c9c:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    _ZdlPv(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_10003cbc:
    if (param_3 == 0) goto LAB_10003ce8;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_10003ce4;
  }
  uVar11 = param_1[1];
LAB_10003b0c:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_10003bc8;
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
      if (uVar6 == uVar10) goto LAB_10003ba8;
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
LAB_10003ba8:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  _ZdlPv(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_10003bc8:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_10003ce4:
  puVar12 = (undefined8 *)*param_1;
LAB_10003ce8:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x10003af8:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_10003b0c;
  goto LAB_10003af0;
}

