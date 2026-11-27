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
#define local_1090 (*(byte * *)(pf_stack_frame + 208))
#define local_108c (*(uint *)(pf_stack_frame + 212))
#define local_1088 (*(undefined4 *)(pf_stack_frame + 216))
#define local_1058 (*(int (*)[1046])(pf_stack_frame + 264))
#define local_1048 (*(int *)(pf_stack_frame + 280))
#define local_1044 (*(undefined4 *)(pf_stack_frame + 284))
#define local_1040 (*(undefined4 *)(pf_stack_frame + 288))
#define local_103c (*(char *)(pf_stack_frame + 292))
#define local_1024 (*(byte (*)[4132])(pf_stack_frame + 316))
#define local_101c (*(byte * *)(pf_stack_frame + 324))
#define local_1018 (*(void * *)(pf_stack_frame + 328))
#define local_1014 (*(uint *)(pf_stack_frame + 332))
#define local_1010 (*(undefined4 *)(pf_stack_frame + 336))
#define local_1008 (*(uint (*)[1026])(pf_stack_frame + 344))
#define local_ff8 (*(uint (*)[1022])(pf_stack_frame + 360))
#define local_1150 (*(uint (*)[1108])(pf_stack_frame + 16))
#define local_1130 (*(uint (*)[1100])(pf_stack_frame + 48))
#define local_1128 (*(char * *)(pf_stack_frame + 56))
#define local_1120 (*(undefined4 (*)[1096])(pf_stack_frame + 64))
#define local_1100 (*(undefined4 *)(pf_stack_frame + 96))
#define local_10fc (*(undefined4 *)(pf_stack_frame + 100))
#define local_10f8 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_10f4 (*(undefined4 *)(pf_stack_frame + 108))
#define local_10f0 (*(undefined1 * *)(pf_stack_frame + 112))
#define local_10e0 (*(byte * *)(pf_stack_frame + 128))
#define local_10dc (*(uint (*)[1079])(pf_stack_frame + 132))
#define local_10d4 (*(byte * *)(pf_stack_frame + 140))
#define local_10d0 (*(byte * *)(pf_stack_frame + 144))
#define local_10cc (*(void * *)(pf_stack_frame + 148))
#define local_10c8 (*(byte * *)(pf_stack_frame + 152))
#define local_10c4 (*(uint *)(pf_stack_frame + 156))
#define local_10c0 (*(undefined4 *)(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bd0
 */

undefined4 recovered_10000bd0(int param_1,int param_2)

{
  unsigned char pf_stack_frame[4480] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  byte bVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  byte *pbVar18;

  local_10f8 = (undefined1 *)(local_ff8 + 0x3fd);
  local_10f0 = (undefined1 *)(local_1150 + 4);
  local_1048 = 0;
  local_1044 = 0;
  local_1040 = 0;
  local_103c = param_1 < 2;
  local_1100 = DAT_10003008;
  local_10fc = 0x2e40;
  local_10f4 = 0x179e;
  _Unwind_SjLj_Register(local_1120 + 2);
  puVar14 = local_1150 + 4;
  if (param_2 != 0 && 1 < param_1) {
    iVar9 = 1;
    local_10d0 = (byte *)str_10002f2c;
LAB_10000ce9:
    pbVar18 = *(byte **)(param_2 + iVar9 * 4);
    if (pbVar18 == (byte *)0x0) {
      pbVar18 = &DAT_10002f2b;
    }
    local_10c8 = (byte *)0x0;
    local_10c4 = 0;
    local_10c0 = 0;
    uVar10 = 0xffffffff;
    do {
      iVar2 = uVar10 + 1;
      uVar10 = uVar10 + 1;
    } while (pbVar18[iVar2] != 0);
    local_1120[3] = 1;
    local_1058[3] = iVar9;
    recovered_10002530((int *)&local_10c8,(int)pbVar18,uVar10);
    pbVar18 = local_10c8;
    if (local_10c8 == (byte *)0x0) {
      pbVar18 = &DAT_10002f2b;
    }
    if (local_10c4 != 0) {
      uVar10 = 1;
      do {
        if (pbVar18[uVar10 - 1] == 0x3d) {
          if (uVar10 != 0) {
            uVar17 = uVar10 - 1;
            if (local_10c4 < uVar10 - 1) {
              uVar17 = local_10c4;
            }
            local_1090 = (byte *)0x0;
            local_108c = 0;
            local_1088 = 0;
            local_1120[3] = 2;
            recovered_10002530((int *)&local_1090,(int)pbVar18,uVar17);
            if (local_10c4 < uVar10) {
              uVar10 = local_10c4;
            }
            pbVar18 = local_10c8;
            if (local_10c8 == (byte *)0x0) {
              pbVar18 = &DAT_10002f2b;
            }
            local_10e0 = (byte *)0x0;
            local_10dc[0] = 0;
            local_10dc[1] = 0;
            local_1120[3] = 3;
            recovered_10002530((int *)&local_10e0,(int)(pbVar18 + uVar10),local_10c4 - uVar10);
            uVar10 = local_108c;
            local_1018 = (void *)0x0;
            local_1014 = 0;
            local_1010 = 0;
            local_1120[3] = 4;
            recovered_10002530((int *)&local_1018,(int)local_10d0,6);
            uVar3 = local_1014;
            _ZdlPv(local_1018);
            uVar17 = local_108c;
            if (uVar10 != uVar3) goto LAB_10000f08;
            if (local_108c == 0) goto LAB_10000c77;
            pbVar18 = local_1090;
            if (local_1090 == (byte *)0x0) {
              pbVar18 = &DAT_10002f2b;
            }
            pbVar11 = local_10d0;
            uVar10 = local_108c;
            goto LAB_10000ed0;
          }
          break;
        }
        iVar9 = (1 - local_10c4) + uVar10;
        uVar10 = uVar10 + 1;
      } while (iVar9 != 1);
    }
    goto LAB_10000cd0;
  }
LAB_10001295:
  local_1120[3] = 10;
  _ZN6winter3lua5LuaVMC1Ev(&local_10cc);
  if (local_103c == '\x01') {
    local_1120[3] = 0xb;
    wm_lua_show_banner();
    local_1120[3] = 0xc;
    wm_lua_show_help();
    local_10c8 = (byte *)0x0;
    local_10c4 = 0;
    local_10c0 = 0;
    local_1120[3] = 0xd;
    recovered_10002530((int *)&local_10c8,((uintptr_t)pf_module_state + 0x253U),9);
    local_1120[3] = 0xe;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)&local_1018,(int *)&local_10cc,(int *)&local_10c8);
    _ZdlPv(local_10cc);
    if ((char)local_101c == '\x01') {
      local_1120[2] = 0xf;
      wm_lua_write((char *)0x100052b4,9);
      local_1120[2] = 0x10;
      wm_lua_write(local_1128,9);
      local_1120[2] = 0x11;
      wm_lua_writeline();
      puVar14 = local_1150 + 3;
      if ((char)local_1014 != '\0') {
        local_1120[2] = 0x12;
        _ZNK6winter3lua8LuaValue8toStringEv((int *)&local_10cc,(undefined1 *)&local_1014);
        pbVar18 = (byte *)(local_1128 + 0x2347);
        if (local_10d0 != (byte *)0x0) {
          pbVar18 = local_10d0;
        }
        wm_lua_write((char *)pbVar18,(int)local_10cc);
        wm_lua_writeline();
        _ZdlPv(local_10d0);
        puVar14 = local_1150 + 2;
      }
    }
    else {
      uVar10 = 0x1000528e;
      if (local_1008[3] != 0) {
        uVar10 = local_1008[3];
      }
      if (0x12 < local_ff8[0]) {
        uVar17 = 0;
        do {
          if (((((((*(char *)(uVar10 + uVar17) == 'f') && (*(char *)(uVar10 + 1 + uVar17) == 'a'))
                 && (*(char *)(uVar10 + 2 + uVar17) == 'i')) &&
                ((*(char *)(uVar10 + 3 + uVar17) == 'l' && (*(char *)(uVar10 + 4 + uVar17) == 'e')))
                ) && (*(char *)(uVar10 + 5 + uVar17) == 'd')) &&
              (((*(char *)(uVar10 + 6 + uVar17) == ' ' && (*(char *)(uVar10 + 7 + uVar17) == 't'))
               && ((*(char *)(uVar10 + 8 + uVar17) == 'o' &&
                   (((*(char *)(uVar10 + 9 + uVar17) == ' ' &&
                     (*(char *)(uVar10 + 10 + uVar17) == 'o')) &&
                    (*(char *)(uVar10 + 0xb + uVar17) == 'p')))))))) &&
             (((*(char *)(uVar10 + 0xc + uVar17) == 'e' && (*(char *)(uVar10 + 0xd + uVar17) == 'n')
               ) && ((*(char *)(uVar10 + 0xe + uVar17) == ' ' &&
                     (((*(char *)(uVar10 + 0xf + uVar17) == 'f' &&
                       (*(char *)(uVar10 + 0x10 + uVar17) == 'i')) &&
                      ((*(char *)(uVar10 + 0x11 + uVar17) == 'l' &&
                       (*(char *)(uVar10 + 0x12 + uVar17) == 'e')))))))))) {
            puVar14 = local_1150 + 3;
            if (uVar17 != 0xffffffff) goto LAB_10001511;
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= local_ff8[0] - 0x13);
        if (0x19 < local_ff8[0]) {
          uVar17 = 0;
          do {
            if ((((((((*(char *)(uVar10 + uVar17) == 'u') && (*(char *)(uVar10 + 1 + uVar17) == 'n')
                     ) && (*(char *)(uVar10 + 2 + uVar17) == 'a')) &&
                   ((*(char *)(uVar10 + 3 + uVar17) == 'b' &&
                    (*(char *)(uVar10 + 4 + uVar17) == 'l')))) &&
                  (((*(char *)(uVar10 + 5 + uVar17) == 'e' &&
                    ((*(char *)(uVar10 + 6 + uVar17) == ' ' &&
                     (*(char *)(uVar10 + 7 + uVar17) == 't')))) &&
                   (*(char *)(uVar10 + 8 + uVar17) == 'o')))) &&
                 (((((*(char *)(uVar10 + 9 + uVar17) == ' ' &&
                     (*(char *)(uVar10 + 10 + uVar17) == 'o')) &&
                    (*(char *)(uVar10 + 0xb + uVar17) == 'p')) &&
                   ((*(char *)(uVar10 + 0xc + uVar17) == 'e' &&
                    (*(char *)(uVar10 + 0xd + uVar17) == 'n')))) &&
                  ((*(char *)(uVar10 + 0xe + uVar17) == ' ' &&
                   ((*(char *)(uVar10 + 0xf + uVar17) == 's' &&
                    (*(char *)(uVar10 + 0x10 + uVar17) == 'c')))))))) &&
                ((*(char *)(uVar10 + 0x11 + uVar17) == 'r' &&
                 (((*(char *)(uVar10 + 0x12 + uVar17) == 'i' &&
                   (*(char *)(uVar10 + 0x13 + uVar17) == 'p')) &&
                  (*(char *)(uVar10 + 0x14 + uVar17) == 't')))))) &&
               (((*(char *)(uVar10 + 0x15 + uVar17) == ' ' &&
                 (*(char *)(uVar10 + 0x16 + uVar17) == 'f')) &&
                ((*(char *)(uVar10 + 0x17 + uVar17) == 'i' &&
                 ((*(char *)(uVar10 + 0x18 + uVar17) == 'l' &&
                  (*(char *)(uVar10 + 0x19 + uVar17) == 'e')))))))) {
              puVar14 = local_1150 + 3;
              if (uVar17 != 0xffffffff) goto LAB_10001511;
              break;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 <= local_ff8[0] - 0x1a);
        }
      }
      local_1120[2] = 0x15;
      recovered_100026a0();
      puVar14 = local_1150 + 3;
    }
LAB_10001511:
    *puVar14 = puVar14[0x52];
    puVar14[-1] = 0x10001520;
    _ZdlPv((void *)*puVar14);
    if (3 < puVar14[0x51]) {
      puVar14[0xb] = 0x16;
      puVar14[1] = (uint)(puVar14 + 0x4e);
      *puVar14 = puVar14[0x51];
      puVar14[-1] = 0x10001547;
      recovered_10002980(*puVar14,(int *)puVar14[1]);
    }
  }
  if (puVar14[0x3f] == 0) {
    puVar14[0x1c] = 1;
    bVar4 = 0;
    cVar5 = *(char *)(puVar14 + 0x41);
    piVar16 = (int *)puVar14;
  }
  else {
    puVar14[0xb] = 0x17;
    puVar14[2] = (uint)(puVar14 + 0x3e);
    puVar14[1] = (uint)(puVar14 + 0x1d);
    *puVar14 = (uint)(puVar14 + 0x4a);
    puVar14[-1] = 0x1000157f;
    _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE((undefined1 *)*puVar14,(int *)puVar14[1],(int *)puVar14[2]);
    puVar14[10] = 0x18;
    puVar14[-2] = 0x100015ad;
    recovered_100026a0();
    bVar4 = *(byte *)(puVar14 + 0x54);
    puVar14[0x1b] = (uint)*(byte *)(puVar14 + 0x49);
    puVar14[-1] = puVar14[0x51];
    puVar14[-2] = 0x100015d0;
    _ZdlPv((void *)puVar14[-1]);
    if (3 < puVar14[0x50]) {
      puVar14[10] = 0x19;
      *puVar14 = (uint)(puVar14 + 0x4d);
      puVar14[-1] = puVar14[0x50];
      puVar14[6] = (uint)bVar4;
      puVar14[-2] = 0x100015fb;
      recovered_10002980(puVar14[-1],(int *)*puVar14);
      bVar4 = (byte)puVar14[6];
    }
    piVar16 = (int *)(puVar14 + -1);
    cVar5 = *(char *)(puVar14 + 0x40);
  }
  if ((cVar5 == '\x01') && (bVar4 == 0)) {
    *(int *)((int)piVar16 + 0xf4) = *(int *)((int)piVar16 + 0x20) + 0x23b2;
    *(int *)((int)piVar16 + 0x1c) = *(int *)((int)piVar16 + 0x20) + 0x2347;
    do {
      piVar16[0xb] = 0x1a;
      piVar16[2] = piVar16[0x3d];
      *piVar16 = (int)(piVar16 + 0x4a);
      piVar16[3] = 1;
      piVar16[1] = 0x1000;
      piVar16[-1] = 0x100016a4;
      bVar6 = wm_lua_readline(*piVar16,piVar16[1],piVar16[2],piVar16[3]);
      if (!bVar6) break;
      piVar16[0x1e] = 0;
      piVar16[0x1f] = 0;
      piVar16[0x20] = 0;
      iVar9 = -1;
      do {
        iVar2 = iVar9 + 0x129;
        iVar9 = iVar9 + 1;
      } while (*(char *)((int)piVar16 + iVar2) != '\0');
      piVar16[0xb] = 0x1b;
      piVar16[2] = iVar9;
      piVar16[1] = (int)(piVar16 + 0x4a);
      *piVar16 = (int)(piVar16 + 0x1e);
      piVar16[-1] = 0x10001700;
      recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
      pcVar7 = (char *)piVar16[0x1e];
      pcVar12 = pcVar7;
      if (pcVar7 == (char *)0x0) {
        pcVar12 = (char *)piVar16[7];
      }
      if (piVar16[0x1f] == 5) {
        if ((((*pcVar12 == '.') && (pcVar12[1] == 'e')) && (pcVar12[2] == 'x')) &&
           (pcVar12[3] == 'i')) {
          cVar5 = pcVar12[4];
joined_r0x1000174b:
          if (cVar5 == 't') {
            *piVar16 = (int)pcVar7;
            piVar16[-1] = 0x100020f8;
            _ZdlPv((void *)*piVar16);
            break;
          }
        }
      }
      else if (piVar16[0x1f] == 4) {
        if (*pcVar12 == 'q') {
          if (pcVar12[1] == 'u') goto LAB_10001758;
        }
        else if ((*pcVar12 == 'e') && (pcVar12[1] == 'x')) {
LAB_10001758:
          if (pcVar12[2] == 'i') {
            cVar5 = pcVar12[3];
            goto joined_r0x1000174b;
          }
        }
      }
      *piVar16 = (int)pcVar7;
      piVar16[-1] = 0x10001778;
      _ZdlPv((void *)*piVar16);
      piVar16[0x1e] = 0;
      piVar16[0x1f] = 0;
      piVar16[0x20] = 0;
      iVar9 = -1;
      do {
        iVar2 = iVar9 + 0x129;
        iVar9 = iVar9 + 1;
      } while (*(char *)((int)piVar16 + iVar2) != '\0');
      piVar16[0xb] = 0x1c;
      piVar16[2] = iVar9;
      piVar16[1] = (int)(piVar16 + 0x4a);
      *piVar16 = (int)(piVar16 + 0x1e);
      piVar16[-1] = 0x100017d0;
      recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
      pcVar7 = (char *)piVar16[0x1e];
      pcVar12 = pcVar7;
      if (pcVar7 == (char *)0x0) {
        pcVar12 = (char *)piVar16[7];
      }
      piVar15 = piVar16;
      if (((piVar16[0x1f] == 5) && (*pcVar12 == ':')) &&
         ((pcVar12[1] == 'h' &&
          (((pcVar12[2] == 'e' && (pcVar12[3] == 'l')) && (pcVar12[4] == 'p')))))) {
LAB_100018bc:
        *piVar16 = (int)pcVar7;
        piVar16[-1] = 0x100018c4;
        _ZdlPv((void *)*piVar16);
        piVar16[0xb] = 0x1e;
        piVar16[-1] = 0x100018d1;
        wm_lua_show_help();
      }
      else {
        piVar16[0x2c] = 0;
        piVar16[0x2d] = 0;
        piVar16[0x2e] = 0;
        iVar9 = -1;
        do {
          iVar2 = iVar9 + 0x129;
          iVar9 = iVar9 + 1;
        } while (*(char *)((int)piVar16 + iVar2) != '\0');
        piVar16[0xb] = 0x1d;
        piVar16[2] = iVar9;
        piVar16[1] = (int)(piVar16 + 0x4a);
        *piVar16 = (int)(piVar16 + 0x2c);
        piVar16[-1] = 0x10001873;
        recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
        pcVar7 = (char *)piVar16[0x2c];
        pcVar12 = pcVar7;
        if (pcVar7 == (char *)0x0) {
          pcVar12 = (char *)piVar16[7];
        }
        if ((((piVar16[0x2d] == 6) && (*pcVar12 == 'h')) &&
            ((pcVar12[1] == 'e' && ((pcVar12[2] == 'l' && (pcVar12[3] == 'p')))))) &&
           ((pcVar12[4] == '(' && (pcVar12[5] == ')')))) {
          *piVar16 = (int)pcVar7;
          piVar16[-1] = 0x100018b8;
          _ZdlPv((void *)*piVar16);
          pcVar7 = (char *)piVar16[0x1e];
          goto LAB_100018bc;
        }
        *piVar16 = (int)pcVar7;
        piVar16[-1] = 0x100018e8;
        _ZdlPv((void *)*piVar16);
        *piVar16 = piVar16[0x1e];
        piVar16[-1] = 0x100018f4;
        _ZdlPv((void *)*piVar16);
        if ((char)piVar16[0x4a] != '\0') {
          piVar16[0x18] = 0;
          piVar16[0x19] = 0;
          piVar16[0x1a] = 0;
          iVar9 = -1;
          do {
            iVar2 = iVar9 + 0x129;
            iVar9 = iVar9 + 1;
          } while (*(char *)((int)piVar16 + iVar2) != '\0');
          piVar16[0xb] = 0x1f;
          piVar16[2] = iVar9;
          piVar16[1] = (int)(piVar16 + 0x4a);
          *piVar16 = (int)(piVar16 + 0x18);
          piVar16[-1] = 0x10001950;
          recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
          *(undefined1 *)(piVar16 + 0x1e) = 0;
          piVar16[0xb] = 0x20;
          *piVar16 = (int)(piVar16 + 0x20);
          piVar16[-1] = 0x1000196c;
          _ZN6winter3lua8LuaValueC1Ev((undefined1 *)*piVar16);
          piVar16[0x26] = 0;
          piVar16[0x27] = 0;
          piVar16[0x28] = 0;
          *(undefined1 *)(piVar16 + 0x29) = 0;
          piVar16[0x2a] = 0;
          if (piVar16[0x19] == 0) {
LAB_10001ba0:
            piVar16[0x3a] = 0;
            piVar16[0x3b] = 0;
            piVar16[0x3c] = 0;
            piVar16[0xb] = 0x28;
            piVar16[1] = piVar16[8] + 0x23c6;
            *piVar16 = (int)(piVar16 + 0x3a);
            piVar16[2] = 7;
            piVar16[-1] = 0x10001bee;
            recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
            piVar16[0xb] = 0x29;
            piVar16[3] = (int)(piVar16 + 0x3a);
            piVar16[2] = (int)(piVar16 + 0x18);
            piVar16[1] = (int)(piVar16 + 0x1d);
            *piVar16 = (int)(piVar16 + 0x2c);
            piVar16[-1] = 0x10001c20;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)*piVar16,(int *)piVar16[1],(int *)piVar16[2],
                               (int *)piVar16[3]);
            *(char *)(piVar16 + 0x1d) = (char)piVar16[0x2b];
            *(char *)(piVar16 + 0x1f) = (char)piVar16[0x2d];
            if (3 < (uint)piVar16[0x24]) {
              piVar16[10] = 0x2a;
              *piVar16 = (int)(piVar16 + 0x21);
              piVar16[-1] = piVar16[0x24];
              piVar16[-2] = 0x10001c65;
              recovered_10002980(piVar16[-1],(int *)*piVar16);
            }
            uVar10 = piVar16[0x32];
            piVar16[0x24] = uVar10;
            if (uVar10 < 5) {
                    /* WARNING: Could not recover jumptable at 0x10001c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (*(code *)(*(int *)(piVar16[7] + 0x180c + uVar10 * 4) + piVar16[7]))();
              return uVar8;
            }
            if (uVar10 - 5 < 3) {
              piVar16[0x21] = piVar16[0x2f];
              piVar16[0x22] = piVar16[0x30];
              piVar16[0x2f] = 0;
              piVar16[0x30] = 0;
            }
            piVar16[-1] = piVar16[0x25];
            piVar16[-2] = 0x10001d6f;
            _ZdlPv((void *)piVar16[-1]);
            piVar16[0x25] = piVar16[0x33];
            piVar16[0x26] = piVar16[0x34];
            piVar16[0x27] = piVar16[0x35];
            piVar16[0x33] = 0;
            piVar16[0x34] = 0;
            piVar16[0x35] = 0;
            piVar16[0x29] = piVar16[0x37];
            piVar16[0x28] = piVar16[0x36];
            piVar16[-1] = 0;
            piVar16[-2] = 0x10001de2;
            _ZdlPv((void *)piVar16[-1]);
            if (3 < (uint)piVar16[0x32]) {
              piVar16[10] = 0x2b;
              *piVar16 = (int)(piVar16 + 0x2f);
              piVar16[-1] = piVar16[0x32];
              piVar16[-2] = 0x10001e09;
              recovered_10002980(piVar16[-1],(int *)*piVar16);
            }
            iVar9 = piVar16[0x39];
          }
          else {
            pcVar7 = (char *)piVar16[0x18];
            if ((char *)piVar16[0x18] == (char *)0x0) {
              pcVar7 = (char *)piVar16[7];
            }
            if (*pcVar7 != '=') goto LAB_10001ba0;
            piVar16[0x43] = 0;
            piVar16[0x44] = 0;
            piVar16[0x45] = 0;
            piVar16[0xb] = 0x21;
            piVar16[2] = piVar16[0x19] + -1;
            piVar16[1] = (int)(pcVar7 + 1);
            *piVar16 = (int)(piVar16 + 0x43);
            piVar16[-1] = 0x10001a02;
            recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
            piVar16[0x3a] = 0;
            piVar16[0x3b] = 0;
            piVar16[0x3c] = 0;
            piVar16[0xb] = 0x22;
            piVar16[1] = piVar16[8] + 0x23be;
            *piVar16 = (int)(piVar16 + 0x3a);
            piVar16[2] = 7;
            piVar16[-1] = 0x10001a50;
            recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
            iVar9 = piVar16[0x43];
            if (piVar16[0x43] == 0) {
              iVar9 = piVar16[7];
            }
            piVar16[0xb] = 0x23;
            piVar16[2] = piVar16[0x44];
            piVar16[1] = iVar9;
            *piVar16 = (int)(piVar16 + 0x3a);
            piVar16[-1] = 0x10001a84;
            recovered_10002b60((int *)*piVar16,piVar16[1],piVar16[2]);
            piVar16[0x46] = 0;
            piVar16[0x47] = 0;
            piVar16[0x48] = 0;
            piVar16[0xb] = 0x24;
            piVar16[1] = piVar16[8] + 0x23c6;
            *piVar16 = (int)(piVar16 + 0x46);
            piVar16[2] = 7;
            piVar16[-1] = 0x10001ad2;
            recovered_10002530((int *)*piVar16,piVar16[1],piVar16[2]);
            piVar16[0xb] = 0x25;
            piVar16[3] = (int)(piVar16 + 0x46);
            piVar16[2] = (int)(piVar16 + 0x3a);
            piVar16[1] = (int)(piVar16 + 0x1d);
            *piVar16 = (int)(piVar16 + 0x2c);
            piVar16[-1] = 0x10001b07;
            _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_((undefined1 *)*piVar16,(int *)piVar16[1],(int *)piVar16[2],
                               (int *)piVar16[3]);
            *(char *)(piVar16 + 0x1d) = (char)piVar16[0x2b];
            *(char *)(piVar16 + 0x1f) = (char)piVar16[0x2d];
            if (3 < (uint)piVar16[0x24]) {
              piVar16[10] = 0x26;
              *piVar16 = (int)(piVar16 + 0x21);
              piVar16[-1] = piVar16[0x24];
              piVar16[-2] = 0x10001b4c;
              recovered_10002980(piVar16[-1],(int *)*piVar16);
            }
            uVar10 = piVar16[0x32];
            piVar16[0x24] = uVar10;
            if (uVar10 < 5) {
                    /* WARNING: Could not recover jumptable at 0x10001b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (*(code *)(*(int *)(piVar16[7] + 0x17f8 + uVar10 * 4) + piVar16[7]))();
              return uVar8;
            }
            if (uVar10 - 5 < 3) {
              piVar16[0x21] = piVar16[0x2f];
              piVar16[0x22] = piVar16[0x30];
              piVar16[0x2f] = 0;
              piVar16[0x30] = 0;
            }
            piVar16[-1] = piVar16[0x25];
            piVar16[-2] = 0x10001ecc;
            _ZdlPv((void *)piVar16[-1]);
            piVar16[0x25] = piVar16[0x33];
            piVar16[0x26] = piVar16[0x34];
            piVar16[0x27] = piVar16[0x35];
            piVar16[0x33] = 0;
            piVar16[0x34] = 0;
            piVar16[0x35] = 0;
            piVar16[0x29] = piVar16[0x37];
            piVar16[0x28] = piVar16[0x36];
            piVar16[-1] = 0;
            piVar16[-2] = 0x10001f3f;
            _ZdlPv((void *)piVar16[-1]);
            if (3 < (uint)piVar16[0x32]) {
              piVar16[10] = 0x27;
              *piVar16 = (int)(piVar16 + 0x2f);
              piVar16[-1] = piVar16[0x32];
              piVar16[-2] = 0x10001f66;
              recovered_10002980(piVar16[-1],(int *)*piVar16);
            }
            piVar16[-1] = piVar16[0x45];
            piVar16[-2] = 0x10001f75;
            _ZdlPv((void *)piVar16[-1]);
            piVar16[-1] = piVar16[0x39];
            piVar16[-2] = 0x10001f84;
            _ZdlPv((void *)piVar16[-1]);
            iVar9 = piVar16[0x42];
          }
          piVar16[-1] = iVar9;
          piVar16[-2] = 0x10001f93;
          _ZdlPv((void *)piVar16[-1]);
          piVar16[10] = 0x2c;
          piVar16[-2] = 0x10001fa6;
          recovered_100026a0();
          cVar5 = (char)piVar16[0x28];
          piVar16[-1] = piVar16[0x25];
          piVar16[-2] = 0x10001fbd;
          _ZdlPv((void *)piVar16[-1]);
          if (3 < (uint)piVar16[0x24]) {
            piVar16[10] = 0x2d;
            *piVar16 = (int)(piVar16 + 0x21);
            piVar16[-1] = piVar16[0x24];
            *(char *)(piVar16 + 8) = cVar5;
            piVar16[-2] = 0x10001fec;
            recovered_10002980(piVar16[-1],(int *)*piVar16);
            cVar5 = (char)piVar16[8];
          }
          piVar15 = piVar16 + -1;
          piVar16[-1] = piVar16[0x17];
          piVar16[-2] = 0x1000165c;
          _ZdlPv((void *)piVar16[-1]);
          piVar16 = piVar16 + -1;
          if (cVar5 != '\0') break;
        }
      }
      piVar16 = piVar15;
    } while (*(char *)((int)piVar15 + 0x104) != '\0');
  }
  *piVar16 = (int)(piVar16 + 0x1d);
  piVar16[-1] = 0x10002104;
  _ZN6winter3lua5LuaVMD1Ev((int *)*piVar16);
  *piVar16 = piVar16[0x3e];
  piVar16[-1] = 0x10002113;
  _ZdlPv((void *)*piVar16);
  piVar16[0xb] = 0xffffffff;
  piVar16[-1] = 0x10002120;
  wm_lua_flush_output();
  *piVar16 = (int)(piVar16 + 10);
  piVar16[-1] = 0x1000212c;
  _Unwind_SjLj_Unregister((undefined4 *)*piVar16);
  return piVar16[0x1c];
  while( true ) {
    pbVar11 = pbVar11 + 1;
    pbVar18 = pbVar18 + 1;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) break;
LAB_10000ed0:
    bVar4 = *pbVar18;
    bVar1 = *pbVar11;
    bVar13 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar13 = bVar4;
    }
    bVar4 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar4 = bVar1;
    }
    if (bVar13 != bVar4) goto LAB_10000f08;
  }
LAB_10000c77:
  pbVar18 = local_10e0;
  if (local_10e0 == (byte *)0x0) {
    pbVar18 = &DAT_10002f2b;
  }
  local_1120[3] = 5;
  recovered_10002530(&local_1048,(int)pbVar18,local_10dc[0]);
  goto LAB_10000ca5;
LAB_10000f08:
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010 = 0;
  local_1120[3] = 6;
  local_10d4 = (byte *)str_10002f33;
  recovered_10002530((int *)&local_1018,((uintptr_t)pf_module_state + 0x23fU),7);
  uVar3 = local_1014;
  pbVar18 = local_10d4;
  _ZdlPv(local_1018);
  uVar10 = local_10dc[0];
  if (uVar17 != uVar3) goto LAB_10000ca5;
  if (local_108c != 0) {
    pbVar11 = local_1090;
    uVar17 = local_108c;
    if (local_1090 == (byte *)0x0) {
      pbVar11 = &DAT_10002f2b;
    }
    do {
      bVar4 = *pbVar11;
      bVar1 = *pbVar18;
      bVar13 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar13 = bVar4;
      }
      bVar4 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar4 = bVar1;
      }
      if (bVar13 != bVar4) goto LAB_10000ca5;
      pbVar18 = pbVar18 + 1;
      pbVar11 = pbVar11 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  local_1018 = (void *)0x0;
  local_1014 = 0;
  local_1010 = 0;
  local_1120[3] = 7;
  local_10d4 = &DAT_10002f3b;
  recovered_10002530((int *)&local_1018,((uintptr_t)pf_module_state + 0x247U),4);
  uVar3 = local_1014;
  _ZdlPv(local_1018);
  uVar17 = local_10dc[0];
  if (uVar10 == uVar3) {
    cVar5 = '\x01';
    if (local_10dc[0] != 0) {
      local_101c = local_10e0;
      pbVar18 = local_10e0;
      if (local_10e0 == (byte *)0x0) {
        pbVar18 = &DAT_10002f2b;
      }
      uVar10 = 0;
      pbVar11 = local_10d4;
      do {
        bVar4 = pbVar18[uVar10];
        bVar1 = *pbVar11;
        bVar13 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar13 = bVar4;
        }
        bVar4 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if (bVar13 != bVar4) goto joined_r0x100010c9;
        uVar10 = uVar10 + 1;
        pbVar11 = pbVar11 + 1;
      } while (local_10dc[0] != uVar10);
LAB_10001283:
      cVar5 = '\x01';
    }
  }
  else {
joined_r0x100010c9:
    if (local_10dc[0] == 1) {
      pbVar18 = local_10e0;
      if (local_10e0 == (byte *)0x0) {
        pbVar18 = &DAT_10002f2b;
      }
      cVar5 = '\x01';
      if (*pbVar18 == 0x31) goto LAB_10001289;
    }
    local_1018 = (void *)0x0;
    local_1014 = 0;
    local_1010 = 0;
    local_1120[3] = 8;
    local_10d4 = &DAT_10002f40;
    recovered_10002530((int *)&local_1018,((uintptr_t)pf_module_state + 0x24cU),3);
    uVar3 = local_1014;
    _ZdlPv(local_1018);
    uVar10 = local_10dc[0];
    if (uVar17 == uVar3) {
      cVar5 = '\x01';
      if (local_10dc[0] != 0) {
        pbVar18 = local_10e0;
        if (local_10e0 == (byte *)0x0) {
          pbVar18 = &DAT_10002f2b;
        }
        uVar17 = local_10dc[0];
        pbVar11 = local_10d4;
        do {
          bVar4 = *pbVar18;
          bVar1 = *pbVar11;
          bVar13 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar13 = bVar4;
          }
          bVar4 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar4 = bVar1;
          }
          if (bVar13 != bVar4) goto LAB_100011c8;
          pbVar11 = pbVar11 + 1;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        goto LAB_10001283;
      }
    }
    else {
LAB_100011c8:
      local_1018 = (void *)0x0;
      local_1014 = 0;
      local_1010 = 0;
      local_1120[3] = 9;
      local_10d4 = &DAT_10002f44;
      recovered_10002530((int *)&local_1018,((uintptr_t)pf_module_state + 0x250U),2);
      uVar17 = local_1014;
      _ZdlPv(local_1018);
      if (uVar10 == uVar17) {
        cVar5 = '\x01';
        if (local_10dc[0] != 0) {
          pbVar18 = local_10e0;
          if (local_10e0 == (byte *)0x0) {
            pbVar18 = &DAT_10002f2b;
          }
          uVar10 = local_10dc[0];
          pbVar11 = local_10d4;
          do {
            bVar4 = *pbVar18;
            bVar1 = *pbVar11;
            bVar13 = bVar4 | 0x20;
            if (0x19 < (byte)(bVar4 + 0xbf)) {
              bVar13 = bVar4;
            }
            bVar4 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar4 = bVar1;
            }
            if (bVar13 != bVar4) goto LAB_10001287;
            pbVar11 = pbVar11 + 1;
            pbVar18 = pbVar18 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
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
  iVar9 = local_1058[3] + 1;
  if (iVar9 == param_1) goto LAB_10001295;
  goto LAB_10000ce9;
}

#undef DAT_10002f2b
#undef DAT_10002f3b
#undef DAT_10002f40
#undef DAT_10002f44
#undef DAT_10003008
#undef str_10002f2c
#undef str_10002f33
#undef local_1090
#undef local_108c
#undef local_1088
#undef local_1058
#undef local_1048
#undef local_1044
#undef local_1040
#undef local_103c
#undef local_1024
#undef local_101c
#undef local_1018
#undef local_1014
#undef local_1010
#undef local_1008
#undef local_ff8
#undef local_1150
#undef local_1130
#undef local_1128
#undef local_1120
#undef local_1100
#undef local_10fc
#undef local_10f8
#undef local_10f4
#undef local_10f0
#undef local_10e0
#undef local_10dc
#undef local_10d4
#undef local_10d0
#undef local_10cc
#undef local_10c8
#undef local_10c4
#undef local_10c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

void recovered_100024d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *in_ECX;

  if (in_ECX != (char *)0x0) {
    iVar2 = -1;
    do {
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (in_ECX[iVar1] != '\0');
    wm_lua_write(in_ECX,iVar2);
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
#define local_5c (*(char * *)(pf_stack_frame + 180))
#define local_58 (*(char * *)(pf_stack_frame + 184))
#define local_54 (*(int *)(pf_stack_frame + 188))
#define auStackY_f4 (*(undefined1 (*)[244])(pf_stack_frame + 28))
#define local_50 (*(int *)(pf_stack_frame + 192))
#define local_4c (*(int *)(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 200))
#define local_44 (*(undefined4 *)(pf_stack_frame + 204))
#define local_30 (*(undefined4 *)(pf_stack_frame + 224))
#define local_2c (*(undefined4 *)(pf_stack_frame + 228))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_24 (*(undefined4 *)(pf_stack_frame + 236))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 240))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 244))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

void recovered_100026a0(void)

{
  unsigned char pf_stack_frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *in_ECX;
  char *in_EDX;
  char *pcVar5;
  int *piVar6;
  uint uVar7;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f4 + 0x84;
  cVar1 = *in_ECX;
  local_4c = 0x100026b5;
  local_30 = DAT_10003008;
  local_2c = 0x2eb8;
  local_24 = 0x1cf;
  _Unwind_SjLj_Register(&local_48);
  iVar3 = local_4c;
  piVar6 = (int *)(auStackY_f4 + 0x84);
  if (cVar1 == '\x01') {
    if (in_ECX[8] == '\0') goto LAB_10002870;
    local_44 = 0xffffffff;
    _ZNK6winter3lua8LuaValue8toStringEv((int *)&local_58,in_ECX + 8);
    pcVar5 = (char *)(local_50 + 0x876);
    if (local_5c != (char *)0x0) {
      pcVar5 = local_5c;
    }
    local_48 = 1;
    wm_lua_write(pcVar5,(int)local_58);
    local_48 = 2;
    wm_lua_writeline();
    piVar6 = (int *)(auStackY_f4 + 0x80);
  }
  else {
    if ((in_EDX != (char *)0x0) && (*in_EDX != '\0')) {
      iVar4 = -1;
      do {
        iVar2 = iVar4 + 1;
        iVar4 = iVar4 + 1;
      } while (in_EDX[iVar2] != '\0');
      local_44 = 0xffffffff;
      wm_lua_write(in_EDX,iVar4);
      local_44 = 0xffffffff;
      wm_lua_write((char *)(iVar3 + 0x8b5),2);
    }
    uVar7 = *(uint *)(in_ECX + 0x24);
    if (uVar7 == 0) {
      iVar4 = iVar3 + 0x8b8;
      uVar7 = 0x1a;
    }
    else {
      iVar4 = iVar3 + 0x876;
      if (*(int *)(in_ECX + 0x20) != 0) {
        iVar4 = *(int *)(in_ECX + 0x20);
      }
    }
    local_44 = 0xffffffff;
    local_50 = 0;
    local_54 = 0;
    local_58 = (char *)0x0;
    recovered_10002530((int *)&local_58,iVar4,uVar7);
    pcVar5 = (char *)(iVar3 + 0x876);
    if (local_58 != (char *)0x0) {
      pcVar5 = local_58;
    }
    local_44 = 3;
    wm_lua_write(pcVar5,local_54);
    local_44 = 4;
    wm_lua_writeline();
    piVar6 = (int *)(auStackY_f4 + 0x84);
  }
  *piVar6 = piVar6[6];
  piVar6[-1] = 0x10002870;
  _ZdlPv((void *)*piVar6);
LAB_10002870:
  *piVar6 = (int)(piVar6 + 10);
  piVar6[-1] = 0x1000287c;
  _Unwind_SjLj_Unregister((undefined4 *)*piVar6);
  return;
}

#undef DAT_10003008
#undef local_5c
#undef local_58
#undef local_54
#undef auStackY_f4
#undef local_50
#undef local_4c
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
