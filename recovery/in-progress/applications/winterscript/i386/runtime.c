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
#undef DAT_10004d9d
#define DAT_10004d9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef DAT_10004dad
#define DAT_10004dad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d1U)))
#undef DAT_10004db1
#define DAT_10004db1 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d5U)))
#undef DAT_10004db5
#define DAT_10004db5 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d9U)))
#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_10004d9e
#define str_10004d9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c2U)))
#undef str_10004da5
#define str_10004da5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c9U)))
#undef str_10004db9
#define str_10004db9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_10004ddd
#define str_10004ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x301U)))
#undef str_10004e1d
#define str_10004e1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x341U)))
#undef str_10004e50
#define str_10004e50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_10004e73
#define str_10004e73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x397U)))
#undef str_10004ea1
#define str_10004ea1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#undef str_10004eb2
#define str_10004eb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
#undef str_10004ebb
#define str_10004ebb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dfU)))
#undef str_10004f85
#define str_10004f85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a9U)))
#define auStackY_1d90 (*(undefined1 (*)[7568])(pf_stack_frame + 16))
#define uStack_1ca5 (*(undefined1 *)(pf_stack_frame + 251))
#define pcStack_1c8c (*(char * *)(pf_stack_frame + 276))
#define local_1cfc (*(byte * *)(pf_stack_frame + 164))
#define local_1ce0 (*(undefined4 *)(pf_stack_frame + 192))
#define local_1cdc (*(undefined4 *)(pf_stack_frame + 196))
#define local_1cc8 (*(undefined4 *)(pf_stack_frame + 216))
#define pvStack_1c54 (*(void * *)(pf_stack_frame + 332))
#define local_1cc4 (*(undefined4 *)(pf_stack_frame + 220))
#define local_1cc0 (*(undefined1 * *)(pf_stack_frame + 224))
#define uStack_1c48 (*(uint *)(pf_stack_frame + 344))
#define local_1cbc (*(undefined4 *)(pf_stack_frame + 228))
#define local_1cb8 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_1cac (*(byte * *)(pf_stack_frame + 244))
#define local_1ca4 (*(byte * *)(pf_stack_frame + 252))
#define local_1ca0 (*(uint *)(pf_stack_frame + 256))
#define local_1c9c (*(undefined4 *)(pf_stack_frame + 260))
#define local_1c98 (*(byte * *)(pf_stack_frame + 264))
#define local_1c94 (*(uint *)(pf_stack_frame + 268))
#define local_1c90 (*(undefined4 *)(pf_stack_frame + 272))
#define uStack_1c1c (*(undefined4 *)(pf_stack_frame + 388))
#define local_1c78 (*(uint *)(pf_stack_frame + 296))
#define local_1c74 (*(byte * *)(pf_stack_frame + 300))
#define local_1c70 (*(uint *)(pf_stack_frame + 304))
#define local_1c6c (*(undefined4 *)(pf_stack_frame + 308))
#define local_1c68 (*(void * *)(pf_stack_frame + 312))
#define pcStack_1c04 (*(char * *)(pf_stack_frame + 412))
#define local_1c64 (*(int *)(pf_stack_frame + 316))
#define local_1c60 (*(undefined4 *)(pf_stack_frame + 320))
#define uStack_1bfc (*(undefined4 *)(pf_stack_frame + 420))
#define local_1c5c (*(char *)(pf_stack_frame + 324))
#define ppvStack_1bf8 (*(void ** *)(pf_stack_frame + 424))
#define iStack_1bf0 (*(int *)(pf_stack_frame + 432))
#define local_1c58 (*(int *)(pf_stack_frame + 328))
#define local_1c50 (*(undefined4 *)(pf_stack_frame + 336))
#define local_1c44 (*(byte * *)(pf_stack_frame + 348))
#define acStack_1014 (*(char (*)[4116])(pf_stack_frame + 3468))
#define local_1c40 (*(char * *)(pf_stack_frame + 352))
#define local_1c3c (*(int *)(pf_stack_frame + 356))
#define local_1c38 (*(undefined4 *)(pf_stack_frame + 360))
#define local_1c34 (*(uint *)(pf_stack_frame + 364))
#define local_1c30 (*(uint *)(pf_stack_frame + 368))
#define local_1c2c (*(uint *)(pf_stack_frame + 372))
#define local_1c24 (*(char * *)(pf_stack_frame + 380))
#define local_1c20 (*(int *)(pf_stack_frame + 384))
#define local_1c18 (*(void * *)(pf_stack_frame + 392))
#define local_1c14 (*(undefined4 *)(pf_stack_frame + 396))
#define local_1c10 (*(undefined4 *)(pf_stack_frame + 400))
#define local_1c0c (*(byte * *)(pf_stack_frame + 404))
#define local_1c08 (*(char * *)(pf_stack_frame + 408))
#define local_1c00 (*(int *)(pf_stack_frame + 416))
#define local_1bdc (*(void * *)(pf_stack_frame + 452))
#define local_1bd8 (*(uint *)(pf_stack_frame + 456))
#define local_1bd4 (*(undefined4 *)(pf_stack_frame + 460))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000970(int param_1,int param_2)

{
  unsigned char pf_stack_frame[7616] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;

  local_1cc0 = acStack_1014 + 0x1010;
  local_1cb8 = auStackY_1d90 + 0x80;
  local_1c68 = (void *)0x0;
  local_1c64 = 0;
  local_1c60 = 0;
  local_1c5c = param_1 < 2;
  local_1cc8 = DAT_10005008;
  local_1cc4 = 0x4be8;
  local_1cbc = 0x10b1;
  _Unwind_SjLj_Register(&local_1ce0);
  local_1c08 = &DAT_10004d9d;
  if (param_2 != 0 && 1 < param_1) {
    iVar8 = 1;
    local_1cfc = &DAT_10004d9d;
    local_1c44 = (byte *)str_10004d9e;
LAB_10000a96:
    pbVar13 = *(byte **)(param_2 + iVar8 * 4);
    if (pbVar13 == (byte *)0x0) {
      pbVar13 = local_1cfc;
    }
    local_1ca4 = (byte *)0x0;
    local_1ca0 = 0;
    local_1c9c = 0;
    uVar9 = 0xffffffff;
    do {
      iVar1 = uVar9 + 1;
      uVar9 = uVar9 + 1;
    } while (pbVar13[iVar1] != 0);
    local_1cdc = 1;
    recovered_100020c0((int *)&local_1ca4,(int)pbVar13,uVar9);
    pbVar13 = local_1ca4;
    if (local_1ca4 == (byte *)0x0) {
      pbVar13 = local_1cfc;
    }
    if (local_1ca0 != 0) {
      uVar9 = 1;
      do {
        if (pbVar13[uVar9 - 1] == 0x3d) {
          if (uVar9 != 0) {
            uVar12 = uVar9 - 1;
            if (local_1ca0 < uVar9 - 1) {
              uVar12 = local_1ca0;
            }
            local_1c74 = (byte *)0x0;
            local_1c70 = 0;
            local_1c6c = 0;
            local_1cdc = 2;
            recovered_100020c0((int *)&local_1c74,(int)pbVar13,uVar12);
            if (local_1ca0 < uVar9) {
              uVar9 = local_1ca0;
            }
            pbVar13 = local_1ca4;
            if (local_1ca4 == (byte *)0x0) {
              pbVar13 = local_1cfc;
            }
            local_1c98 = (byte *)0x0;
            local_1c94 = 0;
            local_1c90 = 0;
            local_1cdc = 3;
            recovered_100020c0((int *)&local_1c98,(int)(pbVar13 + uVar9),local_1ca0 - uVar9);
            uVar9 = local_1c70;
            local_1bdc = (void *)0x0;
            local_1bd8 = 0;
            local_1bd4 = 0;
            local_1cdc = 4;
            recovered_100020c0((int *)&local_1bdc,(int)local_1c44,6);
            uVar4 = local_1bd8;
            _ZdlPv(local_1bdc);
            uVar12 = local_1c70;
            if (uVar9 != uVar4) goto LAB_10000cc8;
            if (local_1c70 == 0) goto LAB_10000a27;
            pbVar13 = local_1c74;
            if (local_1c74 == (byte *)0x0) {
              pbVar13 = local_1cfc;
            }
            pbVar10 = local_1c44;
            uVar9 = local_1c70;
            goto LAB_10000c90;
          }
          break;
        }
        iVar1 = (1 - local_1ca0) + uVar9;
        uVar9 = uVar9 + 1;
      } while (iVar1 != 1);
    }
    goto LAB_10000a80;
  }
LAB_10001055:
  local_1cdc = 10;
  _ZN12WinterScriptC1Ev((int *)&local_1bdc);
  if (local_1c5c == '\x01') {
    local_1cdc = 0xb;
    wm_lua_write(str_10004db9,0x23);
    local_1cdc = 0xc;
    wm_lua_writeline();
    local_1cdc = 0xd;
    wm_lua_write(str_10004ddd,0x3f);
    local_1cdc = 0xe;
    wm_lua_writeline();
    local_1cdc = 0xf;
    wm_lua_write(str_10004e1d,0x32);
    local_1cdc = 0x10;
    wm_lua_writeline();
    local_1cdc = 0x11;
    wm_lua_write(str_10004e50,0x22);
    local_1cdc = 0x12;
    wm_lua_writeline();
    local_1cdc = 0x13;
    wm_lua_write(str_10004e73,0x2d);
    local_1cdc = 0x14;
    wm_lua_writeline();
    local_1cdc = 0x15;
    wm_lua_write(&DAT_10004d9d,0);
    local_1cdc = 0x16;
    wm_lua_writeline();
    local_1cdc = 0x17;
    wm_lua_write(str_10004ea1,0x10);
    local_1cdc = 0x18;
    wm_lua_writeline();
    local_1cdc = 0x19;
    wm_lua_write(&DAT_10004d9d,0);
    local_1cdc = 0x1a;
    wm_lua_writeline();
    local_1c38 = 0;
    local_1c3c = 0;
    local_1c40 = (char *)0x0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)))) {
      local_1cdc = 0x1b;
      iVar8 = (*_DAT_00280834)();
      if (iVar8 != 0) {
        local_1ca4 = (byte *)0x0;
        local_1ca0 = 0;
        local_1c9c = 0;
        local_1cdc = 0x1c;
        recovered_100020c0((int *)&local_1ca4,((uintptr_t)pf_module_state + 0x3d6U),8);
        local_1cdc = 0x1d;
        _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&local_1c58,&local_1bdc,&local_1ca4);
        _ZdlPv(local_1ca4);
        local_1cdc = 0x1e;
        wm_lua_write(str_10004ebb,9);
        local_1cdc = 0x1f;
        wm_lua_write(str_10004eb2,8);
        local_1cdc = 0x20;
        wm_lua_writeline();
        if (local_1c58 != 0) {
          local_1cdc = 0x21;
          recovered_10002230((int *)&local_1ca4,&local_1c58);
          pbVar13 = &DAT_10004d9d;
          if (local_1ca4 != (byte *)0x0) {
            pbVar13 = local_1ca4;
          }
          local_1cdc = 0x22;
          wm_lua_write((char *)pbVar13,local_1ca0);
          local_1cdc = 0x23;
          wm_lua_writeline();
          _ZdlPv(local_1ca4);
        }
        if (1 < uStack_1c48) {
          if (uStack_1c48 != 2) {
            if (uStack_1c48 != 3) {
              if ((uStack_1c48 & 0xfffffffe) != 4) {
                local_1cdc = 0x24;
                recovered_10003c80(uStack_1c48,(int *)&pvStack_1c54);
              }
              goto LAB_100013e0;
            }
            local_1c50 = 0;
          }
          _ZdlPv(pvStack_1c54);
        }
      }
    }
  }
LAB_100013e0:
  if (local_1c64 != 0) {
    local_1cdc = 0x29;
    _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(&local_1c58,&local_1bdc,&local_1c68);
    if (local_1c58 != 0) {
      local_1cdc = 0x2a;
      recovered_10002230((int *)&local_1c40,&local_1c58);
      pcVar7 = &DAT_10004d9d;
      if (local_1c40 != (char *)0x0) {
        pcVar7 = local_1c40;
      }
      local_1cdc = 0x2b;
      wm_lua_write(pcVar7,local_1c3c);
      local_1cdc = 0x2c;
      wm_lua_writeline();
      _ZdlPv(local_1c40);
    }
    ppvStack_1bf8 = &pvStack_1c54;
    local_1c78 = uStack_1c48;
    if (1 < uStack_1c48) {
      if (uStack_1c48 != 2) {
        if (uStack_1c48 != 3) {
          if ((uStack_1c48 & 0xfffffffe) != 4) {
            local_1cdc = 0x2d;
            recovered_10003c80(uStack_1c48,(int *)ppvStack_1bf8);
          }
          goto LAB_100014f5;
        }
        local_1c50 = 0;
      }
      _ZdlPv(pvStack_1c54);
    }
  }
LAB_100014f5:
  iStack_1bf0 = 1;
  if (local_1c5c == '\x01') {
    do {
      local_1cdc = 0x33;
      uStack_1ca5 = wm_lua_readline((int)acStack_1014,0x1000,str_10004f85,1);
      if (!(bool)uStack_1ca5) break;
      pcStack_1c04 = (char *)0x0;
      local_1c00 = 0;
      uStack_1bfc = 0;
      uVar9 = 0xffffffff;
      do {
        local_1c34 = uVar9 + 1;
        iVar8 = uVar9 + 1;
        uVar9 = local_1c34;
      } while (acStack_1014[iVar8] != '\0');
      local_1cdc = 0x34;
      recovered_100020c0((int *)&pcStack_1c04,(int)acStack_1014,local_1c34);
      pcStack_1c8c = pcStack_1c04;
      pcVar7 = local_1c08;
      if (pcStack_1c04 != (char *)0x0) {
        pcVar7 = pcStack_1c04;
      }
      if (local_1c00 == 5) {
        if (((*pcVar7 == '.') && (pcVar7[1] == 'e')) && ((pcVar7[2] == 'x' && (pcVar7[3] == 'i'))))
        {
          cVar6 = pcVar7[4];
joined_r0x10001bdf:
          if (cVar6 == 't') {
            _ZdlPv(pcStack_1c04);
            break;
          }
        }
      }
      else if (local_1c00 == 4) {
        if (*pcVar7 == 'q') {
          if (pcVar7[1] == 'u') goto LAB_10001bf0;
        }
        else if ((*pcVar7 == 'e') && (pcVar7[1] == 'x')) {
LAB_10001bf0:
          if (pcVar7[2] == 'i') {
            cVar6 = pcVar7[3];
            goto joined_r0x10001bdf;
          }
        }
      }
      _ZdlPv(pcStack_1c04);
      local_1c24 = (char *)0x0;
      local_1c20 = 0;
      uStack_1c1c = 0;
      uVar9 = 0xffffffff;
      do {
        local_1c30 = uVar9 + 1;
        iVar8 = uVar9 + 1;
        uVar9 = local_1c30;
      } while (acStack_1014[iVar8] != '\0');
      local_1cdc = 0x35;
      recovered_100020c0((int *)&local_1c24,(int)acStack_1014,local_1c30);
      pcVar7 = &DAT_10004d9d;
      if (local_1c24 != (char *)0x0) {
        pcVar7 = local_1c24;
      }
      if (local_1c20 == 5) {
        bVar3 = false;
        if ((((*pcVar7 == ':') && (bVar3 = false, pcVar7[1] == 'h')) &&
            (bVar3 = false, pcVar7[2] == 'e')) && (bVar3 = false, pcVar7[3] == 'l')) {
          bVar14 = pcVar7[4] == 'p';
          goto LAB_10001d8b;
        }
      }
      else {
        bVar3 = false;
        if ((((local_1c20 == 6) && (bVar3 = false, *pcVar7 == 'h')) &&
            ((bVar3 = false, pcVar7[1] == 'e' &&
             ((bVar3 = false, pcVar7[2] == 'l' && (bVar3 = false, pcVar7[3] == 'p')))))) &&
           (bVar3 = false, pcVar7[4] == '(')) {
          bVar14 = pcVar7[5] == ')';
LAB_10001d8b:
          bVar3 = false;
          if (bVar14) {
            local_1cdc = 0x36;
            wm_lua_write(str_10004ea1,0x10);
            local_1cdc = 0x37;
            wm_lua_writeline();
            local_1cdc = 0x38;
            wm_lua_write(&DAT_10004d9d,0);
            local_1cdc = 0x39;
            wm_lua_writeline();
            bVar3 = true;
          }
        }
      }
      _ZdlPv(local_1c24);
      if ((!bVar3) && (acStack_1014[0] != '\0')) {
        local_1c18 = (void *)0x0;
        local_1c14 = 0;
        local_1c10 = 0;
        uVar9 = 0xffffffff;
        do {
          local_1c2c = uVar9 + 1;
          iVar8 = uVar9 + 1;
          uVar9 = local_1c2c;
        } while (acStack_1014[iVar8] != '\0');
        local_1cdc = 0x3a;
        recovered_100020c0((int *)&local_1c18,(int)acStack_1014,local_1c2c);
        local_1cdc = 0x3b;
        _ZN12WinterScript9runScriptERKN2wm6stringE((int)&local_1bdc,&local_1c18);
        _ZdlPv(local_1c18);
      }
    } while (local_1c5c != '\0');
  }
  recovered_10003e80((int *)&local_1bdc);
  _ZdlPv(local_1c68);
  iVar8 = iStack_1bf0;
  local_1cdc = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_1ce0);
  return iVar8;
  while( true ) {
    pbVar10 = pbVar10 + 1;
    pbVar13 = pbVar13 + 1;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) break;
LAB_10000c90:
    bVar5 = *pbVar13;
    bVar2 = *pbVar10;
    bVar11 = bVar5 | 0x20;
    if (0x19 < (byte)(bVar5 + 0xbf)) {
      bVar11 = bVar5;
    }
    bVar5 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar5 = bVar2;
    }
    if (bVar11 != bVar5) goto LAB_10000cc8;
  }
LAB_10000a27:
  pbVar13 = local_1c98;
  if (local_1c98 == (byte *)0x0) {
    pbVar13 = local_1cfc;
  }
  local_1cdc = 5;
  recovered_100020c0((int *)&local_1c68,(int)pbVar13,local_1c94);
  goto LAB_10000a55;
LAB_10000cc8:
  local_1bdc = (void *)0x0;
  local_1bd8 = 0;
  local_1bd4 = 0;
  local_1cdc = 6;
  local_1cac = (byte *)str_10004da5;
  recovered_100020c0((int *)&local_1bdc,((uintptr_t)pf_module_state + 0x2c9U),7);
  uVar4 = local_1bd8;
  pbVar13 = local_1cac;
  _ZdlPv(local_1bdc);
  uVar9 = local_1c94;
  if (uVar12 != uVar4) goto LAB_10000a55;
  if (local_1c70 != 0) {
    pbVar10 = local_1c74;
    uVar12 = local_1c70;
    if (local_1c74 == (byte *)0x0) {
      pbVar10 = local_1cfc;
    }
    do {
      bVar5 = *pbVar10;
      bVar2 = *pbVar13;
      bVar11 = bVar5 | 0x20;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        bVar11 = bVar5;
      }
      bVar5 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar5 = bVar2;
      }
      if (bVar11 != bVar5) goto LAB_10000a55;
      pbVar13 = pbVar13 + 1;
      pbVar10 = pbVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_1bdc = (void *)0x0;
  local_1bd8 = 0;
  local_1bd4 = 0;
  local_1cdc = 7;
  local_1cac = &DAT_10004dad;
  recovered_100020c0((int *)&local_1bdc,((uintptr_t)pf_module_state + 0x2d1U),4);
  uVar4 = local_1bd8;
  _ZdlPv(local_1bdc);
  uVar12 = local_1c94;
  if (uVar9 == uVar4) {
    cVar6 = '\x01';
    if (local_1c94 != 0) {
      local_1c0c = local_1c98;
      pbVar13 = local_1c98;
      if (local_1c98 == (byte *)0x0) {
        pbVar13 = local_1cfc;
      }
      uVar9 = 0;
      pbVar10 = local_1cac;
      do {
        bVar5 = pbVar13[uVar9];
        bVar2 = *pbVar10;
        bVar11 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar11 = bVar5;
        }
        bVar5 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar5 = bVar2;
        }
        if (bVar11 != bVar5) goto joined_r0x10000e89;
        uVar9 = uVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (local_1c94 != uVar9);
LAB_10001043:
      cVar6 = '\x01';
    }
  }
  else {
joined_r0x10000e89:
    if (local_1c94 == 1) {
      pbVar13 = local_1c98;
      if (local_1c98 == (byte *)0x0) {
        pbVar13 = local_1cfc;
      }
      cVar6 = '\x01';
      if (*pbVar13 == 0x31) goto LAB_10001049;
    }
    local_1bdc = (void *)0x0;
    local_1bd8 = 0;
    local_1bd4 = 0;
    local_1cdc = 8;
    local_1cac = (byte *)((int)&DAT_10004db1 + 1);
    recovered_100020c0((int *)&local_1bdc,((uintptr_t)pf_module_state + 0x2d6U),3);
    uVar4 = local_1bd8;
    _ZdlPv(local_1bdc);
    uVar9 = local_1c94;
    if (uVar12 == uVar4) {
      cVar6 = '\x01';
      if (local_1c94 != 0) {
        pbVar13 = local_1c98;
        if (local_1c98 == (byte *)0x0) {
          pbVar13 = local_1cfc;
        }
        uVar12 = local_1c94;
        pbVar10 = local_1cac;
        do {
          bVar5 = *pbVar13;
          bVar2 = *pbVar10;
          bVar11 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar11 = bVar5;
          }
          bVar5 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar5 = bVar2;
          }
          if (bVar11 != bVar5) goto LAB_10000f88;
          pbVar10 = pbVar10 + 1;
          pbVar13 = pbVar13 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        goto LAB_10001043;
      }
    }
    else {
LAB_10000f88:
      local_1bdc = (void *)0x0;
      local_1bd8 = 0;
      local_1bd4 = 0;
      local_1cdc = 9;
      local_1cac = (byte *)((int)&DAT_10004db5 + 1);
      recovered_100020c0((int *)&local_1bdc,((uintptr_t)pf_module_state + 0x2daU),2);
      uVar12 = local_1bd8;
      _ZdlPv(local_1bdc);
      if (uVar9 == uVar12) {
        cVar6 = '\x01';
        if (local_1c94 != 0) {
          pbVar13 = local_1c98;
          if (local_1c98 == (byte *)0x0) {
            pbVar13 = local_1cfc;
          }
          uVar9 = local_1c94;
          pbVar10 = local_1cac;
          do {
            bVar5 = *pbVar13;
            bVar2 = *pbVar10;
            bVar11 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar11 = bVar5;
            }
            bVar5 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar5 = bVar2;
            }
            if (bVar11 != bVar5) goto LAB_10001047;
            pbVar10 = pbVar10 + 1;
            pbVar13 = pbVar13 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          goto LAB_10001043;
        }
      }
      else {
LAB_10001047:
        cVar6 = '\0';
      }
    }
  }
LAB_10001049:
  local_1c5c = cVar6;
LAB_10000a55:
  _ZdlPv(local_1c98);
  _ZdlPv(local_1c74);
LAB_10000a80:
  _ZdlPv(local_1ca4);
  iVar8 = iVar8 + 1;
  if (iVar8 == param_1) goto LAB_10001055;
  goto LAB_10000a96;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_10004d9d
#undef DAT_10004dad
#undef DAT_10004db1
#undef DAT_10004db5
#undef DAT_10005008
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_10004d9e
#undef str_10004da5
#undef str_10004db9
#undef str_10004ddd
#undef str_10004e1d
#undef str_10004e50
#undef str_10004e73
#undef str_10004ea1
#undef str_10004eb2
#undef str_10004ebb
#undef str_10004f85
#undef auStackY_1d90
#undef uStack_1ca5
#undef pcStack_1c8c
#undef local_1cfc
#undef local_1ce0
#undef local_1cdc
#undef local_1cc8
#undef pvStack_1c54
#undef local_1cc4
#undef local_1cc0
#undef uStack_1c48
#undef local_1cbc
#undef local_1cb8
#undef local_1cac
#undef local_1ca4
#undef local_1ca0
#undef local_1c9c
#undef local_1c98
#undef local_1c94
#undef local_1c90
#undef uStack_1c1c
#undef local_1c78
#undef local_1c74
#undef local_1c70
#undef local_1c6c
#undef local_1c68
#undef pcStack_1c04
#undef local_1c64
#undef local_1c60
#undef uStack_1bfc
#undef local_1c5c
#undef ppvStack_1bf8
#undef iStack_1bf0
#undef local_1c58
#undef local_1c50
#undef local_1c44
#undef acStack_1014
#undef local_1c40
#undef local_1c3c
#undef local_1c38
#undef local_1c34
#undef local_1c30
#undef local_1c2c
#undef local_1c24
#undef local_1c20
#undef local_1c18
#undef local_1c14
#undef local_1c10
#undef local_1c0c
#undef local_1c08
#undef local_1c00
#undef local_1bdc
#undef local_1bd8
#undef local_1bd4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002000
 */

void recovered_10002000(char *arg_ecx)

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


#define piStack_1c (*(int * *)(pf_stack_frame + 20))
#define iStack_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002040
 */

void recovered_10002040(int param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  uint uVar3;

  __cxa_begin_catch(param_1);
  _ZSt9terminatev();
  *piStack_1c = 0;
  piStack_1c[1] = 0;
  piStack_1c[2] = 0;
  if (iStack_18 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar2 = uVar3 + 1;
      pcVar1 = (char *)(iStack_18 + 1 + uVar3);
      uVar3 = uVar2;
    } while (*pcVar1 != '\0');
  }
  recovered_100020c0(piStack_1c,iStack_18,uVar2);
  return;
}

#undef piStack_1c
#undef iStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002060
 */

void recovered_10002060(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  uint uVar3;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
  recovered_100020c0(param_1,param_2,uVar2);
  return;
}


#define local_20 (*(void * *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c0
 */

void recovered_100020c0(int *param_1,int param_2,uint param_3)

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
        recovered_100020c0((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
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

#undef DAT_10004d9d
#define DAT_10004d9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef DAT_10004dad
#define DAT_10004dad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d1U)))
#undef DAT_10004ed4
#define DAT_10004ed4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f8U)))
#undef DAT_10004ee2
#define DAT_10004ee2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x406U)))
#undef DAT_10004ef6
#define DAT_10004ef6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41aU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10004ed8
#define str_10004ed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fcU)))
#undef str_10004ee7
#define str_10004ee7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10004efb
#define str_10004efb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41fU)))
#undef str_10004f06
#define str_10004f06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42aU)))
#define auStackY_170 (*(undefined1 (*)[368])(pf_stack_frame + 16))
#define local_cc (*(uint *)(pf_stack_frame + 180))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_c4 (*(undefined4 *)(pf_stack_frame + 188))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 208))
#define local_ac (*(undefined4 *)(pf_stack_frame + 212))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 216))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 220))
#define local_a0 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_90 (*(undefined * *)(pf_stack_frame + 240))
#define local_8c (*(undefined * *)(pf_stack_frame + 244))
#define local_88 (*(undefined4 *)(pf_stack_frame + 248))
#define local_84 (*(undefined4 *)(pf_stack_frame + 252))
#define local_80 (*(uint *)(pf_stack_frame + 256))
#define uStack_3c (*(uint *)(pf_stack_frame + 324))
#define local_7c (*(undefined4 *)(pf_stack_frame + 260))
#define local_78 (*(undefined4 *)(pf_stack_frame + 264))
#define local_74 (*(undefined1 *)(pf_stack_frame + 268))
#define auStack_28 (*(undefined1 (*)[40])(pf_stack_frame + 344))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 320))
#define local_34 (*(undefined1 * *)(pf_stack_frame + 332))
#define local_30 (*(uint *)(pf_stack_frame + 336))
#define local_2c (*(undefined4 *)(pf_stack_frame + 340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002230
 */

int * recovered_10002230(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 **ppuVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;

  local_a8 = auStack_28 + 0x24;
  local_a0 = auStackY_170 + 0x80;
  uVar1 = *param_2;
  local_b0 = DAT_10005008;
  local_ac = 0x4c88;
  local_a4 = 0x8ca;
  _Unwind_SjLj_Register(&local_c8);
  switch((uintptr_t)(uVar1)) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar9 = &DAT_10004ed4;
    uVar14 = 3;
    break;
  case 1:
    if (param_2[4] != 0) {
LAB_10002b17:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = param_2[1];
    uVar8 = -uVar14;
    if ((int)-uVar14 < 0) {
      uVar8 = uVar14;
    }
    uVar18 = 0;
    uVar19 = 0;
    do {
      uVar16 = uVar18;
      uVar11 = uVar19 << 0x1f | uVar8 >> 1;
      uVar20 = uVar19 >> 1;
      uVar17 = (uVar11 + uVar20 + (uint)CARRY4(uVar11,uVar20)) % 5;
      uVar12 = uVar11 - uVar17;
      lVar4 = (ulonglong)uVar12 * 0xcccccccd;
      auStack_28[uVar16 - 0x5c] = (char)uVar8 + (char)lVar4 * -10 | 0x30;
      uVar18 = uVar16 + 1;
      bVar21 = 9 < uVar8;
      bVar22 = uVar19 != 0;
      uVar6 = -uVar19;
      uVar8 = (uint)lVar4;
      uVar19 = (uVar20 - (uVar11 < uVar17)) * -0x33333333 +
               uVar12 * -0x33333334 + (int)((ulonglong)lVar4 >> 0x20);
    } while (bVar22 || uVar6 < bVar21);
    if ((int)uVar14 < 0) {
      auStack_28[uVar16 - 0x5b] = 0x2d;
      uVar18 = uVar16 + 2;
    }
    if (uVar18 < 0x21) {
      if (uVar18 != 0) {
        ppuVar7 = &local_34;
        uVar14 = uVar18;
        do {
          *(undefined1 *)ppuVar7 = auStack_28[uVar14 - 0x5d];
          ppuVar7 = (undefined1 **)((int)ppuVar7 + 1);
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_c4 = 0xffffffff;
      recovered_100020c0(param_1,(int)&local_34,uVar18);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    goto LAB_10002afc;
  case 2:
    if (param_2[4] != 1) goto LAB_10002b17;
    local_c4 = 0xffffffff;
    recovered_10003090(param_1,(double)pf_bits_float((uintptr_t)param_2[1]));
    goto LAB_10002afc;
  case 3:
    if (param_2[4] != 2) goto LAB_10002b17;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar14 = param_2[2];
    pcVar9 = &DAT_10004d9d;
    if ((char *)param_2[1] != (char *)0x0) {
      pcVar9 = (char *)param_2[1];
    }
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar9 = str_10004f06;
    uVar14 = 0x14;
    break;
  case 5:
    if (param_2[4] != 4) goto LAB_10002b17;
    pcVar9 = str_10004ed8;
    if (*(char *)(param_2 + 1) != '\0') {
      pcVar9 = &DAT_10004dad;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar14 = 0xffffffff;
    do {
      iVar13 = uVar14 + 1;
      uVar14 = uVar14 + 1;
    } while (pcVar9[iVar13] != '\0');
    break;
  case 6:
    local_84 = (undefined1 *)0x0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 10;
    local_74 = 0;
    local_c4 = 1;
    recovered_10003ae0(&local_84,((uintptr_t)pf_module_state + 0x402U),1);
    local_74 = 1;
    local_78 = 0x10;
    if (param_2[4] != 5) goto LAB_10002b17;
    local_c4 = 2;
    recovered_10003860(&local_84,param_2[1],0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar10 = &DAT_10004d9d;
    if (local_84 != (undefined1 *)0x0) {
      puVar10 = local_84;
    }
    local_c4 = 3;
    recovered_100020c0(param_1,(int)puVar10,local_80);
    _ZdlPv(local_84);
    goto LAB_10002afc;
  case 7:
    if (param_2[4] != 6) goto LAB_10002b17;
    piVar2 = (int *)param_2[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_c4 = 0xffffffff;
    recovered_100020c0(param_1,((uintptr_t)pf_module_state + 0x404U),1);
    if (piVar2[1] != 0) {
      iVar13 = 0;
      local_90 = &DAT_10004ee2;
      uVar14 = 0;
      do {
        local_c4 = 5;
        recovered_10002230(&local_84,(undefined4 *)(*piVar2 + iVar13));
        puVar10 = local_84;
        if (local_84 == (undefined1 *)0x0) {
          puVar10 = &DAT_10004d9d;
        }
        local_c4 = 6;
        recovered_10003ae0(param_1,(int)puVar10,local_80);
        _ZdlPv(local_84);
        uVar14 = uVar14 + 1;
        uVar8 = piVar2[1];
        if (uVar14 < uVar8) {
          local_c4 = 7;
          recovered_10003ae0(param_1,(int)local_90,2);
          uVar8 = piVar2[1];
        }
        iVar13 = iVar13 + 0x14;
      } while (uVar14 < uVar8);
    }
    local_c4 = 4;
    recovered_10003ae0(param_1,((uintptr_t)pf_module_state + 0x409U),1);
    goto LAB_10002afc;
  case 8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar9 = str_10004ee7;
    uVar14 = 0xc;
    break;
  case 9:
    if (param_2[4] != 7) goto LAB_10002b17;
    puVar3 = (undefined4 *)param_2[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_c4 = 0xffffffff;
    recovered_100020c0(param_1,((uintptr_t)pf_module_state + 0x418U),1);
    if (puVar3[1] != 0) {
      puVar15 = (undefined4 *)*puVar3;
      local_88 = puVar15 + puVar3[1] * 8;
      local_cc = 1;
      local_90 = &DAT_10004ef6;
      local_8c = &DAT_10004ee2;
      do {
        local_34 = (undefined1 *)0x0;
        local_30 = 0;
        local_2c = 0;
        puVar10 = (undefined1 *)*puVar15;
        if ((undefined1 *)*puVar15 == (undefined1 *)0x0) {
          puVar10 = &DAT_10004d9d;
        }
        local_c4 = 9;
        recovered_100020c0((int *)&local_34,(int)puVar10,puVar15[1]);
        local_c4 = 10;
        recovered_10003ae0((int *)&local_34,(int)local_90,2);
        local_c4 = 0xb;
        recovered_10002230((int *)&local_40,puVar15 + 3);
        local_84 = (undefined1 *)0x0;
        local_80 = 0;
        local_7c = 0;
        puVar10 = local_34;
        if (local_34 == (undefined1 *)0x0) {
          puVar10 = &DAT_10004d9d;
        }
        local_c4 = 0xc;
        recovered_100020c0(&local_84,(int)puVar10,local_30);
        puVar10 = local_40;
        if (local_40 == (undefined1 *)0x0) {
          puVar10 = &DAT_10004d9d;
        }
        local_c4 = 0xd;
        recovered_10003ae0(&local_84,(int)puVar10,uStack_3c);
        puVar10 = local_84;
        if (local_84 == (undefined1 *)0x0) {
          puVar10 = &DAT_10004d9d;
        }
        local_c4 = 0xe;
        recovered_10003ae0(param_1,(int)puVar10,local_80);
        _ZdlPv(local_84);
        _ZdlPv(local_40);
        _ZdlPv(local_34);
        if (local_cc < (uint)puVar3[1]) {
          local_c4 = 0xf;
          recovered_10003ae0(param_1,(int)local_8c,2);
        }
        local_cc = local_cc + 1;
        puVar15 = puVar15 + 8;
      } while (puVar15 != local_88);
    }
    local_c4 = 8;
    recovered_10003ae0(param_1,((uintptr_t)pf_module_state + 0x41dU),1);
    goto LAB_10002afc;
  case 10:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pcVar9 = str_10004efb;
    uVar14 = 10;
  }
  local_c4 = 0xffffffff;
  recovered_100020c0(param_1,(int)pcVar9,uVar14);
LAB_10002afc:
  _Unwind_SjLj_Unregister(&local_c8);
  return param_1;
}

#undef DAT_10004d9d
#undef DAT_10004dad
#undef DAT_10004ed4
#undef DAT_10004ee2
#undef DAT_10004ef6
#undef DAT_10005008
#undef str_10004ed8
#undef str_10004ee7
#undef str_10004efb
#undef str_10004f06
#undef auStackY_170
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef uStack_3c
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_28
#undef local_40
#undef local_34
#undef local_30
#undef local_2c

#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c20
 */

void recovered_10002c20(int param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  uVar1 = *(uint *)(param_1 + 0x10);
  local_30 = DAT_10005008;
  local_2c = 0x4cac;
  local_24 = 0x8b;
  _Unwind_SjLj_Register(&local_48);
  if (1 < uVar1) {
    if (uVar1 != 2) {
      if (uVar1 != 3) {
        if ((uVar1 & 0xfffffffe) != 4) {
          local_44 = 1;
          recovered_10003c80(uVar1,(int *)(param_1 + 4));
        }
        goto LAB_10002c88;
      }
      *(undefined4 *)(param_1 + 8) = 0;
    }
    _ZdlPv(*(void **)(param_1 + 4));
  }
LAB_10002c88:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef local_20
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10004d9d
#define DAT_10004d9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c1U)))
#undef PTR_DAT_10002c01
#define PTR_DAT_10002c01 (*(void * *)(0x10002c01U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

undefined ** recovered_10002cf0(undefined4 *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;

  uVar1 = arg_ecx[1];
  puVar3 = &DAT_10004d9d;
  if ((undefined1 *)*arg_ecx != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*arg_ecx;
  }
  if (0x19 < uVar1) {
    uVar2 = 0;
    do {
      if (((((((puVar3[uVar2] == 'F') && (puVar3[uVar2 + 1] == 'a')) && (puVar3[uVar2 + 2] == 'i'))
            && ((puVar3[uVar2 + 3] == 'l' && (puVar3[uVar2 + 4] == 'e')))) &&
           ((puVar3[uVar2 + 5] == 'd' && ((puVar3[uVar2 + 6] == ' ' && (puVar3[uVar2 + 7] == 't'))))
           )) && ((puVar3[uVar2 + 8] == 'o' &&
                  (((puVar3[uVar2 + 9] == ' ' && (puVar3[uVar2 + 10] == 'o')) &&
                   (puVar3[uVar2 + 0xb] == 'p')))))) &&
         ((((puVar3[uVar2 + 0xc] == 'e' && (puVar3[uVar2 + 0xd] == 'n')) &&
           ((puVar3[uVar2 + 0xe] == ' ' &&
            ((puVar3[uVar2 + 0xf] == 's' && (puVar3[uVar2 + 0x10] == 'c')))))) &&
          ((puVar3[uVar2 + 0x11] == 'r' &&
           (((((puVar3[uVar2 + 0x12] == 'i' && (puVar3[uVar2 + 0x13] == 'p')) &&
              (puVar3[uVar2 + 0x14] == 't')) &&
             ((puVar3[uVar2 + 0x15] == ' ' && (puVar3[uVar2 + 0x16] == 'f')))) &&
            ((puVar3[uVar2 + 0x17] == 'i' &&
             ((puVar3[uVar2 + 0x18] == 'l' && (puVar3[uVar2 + 0x19] == 'e')))))))))))) {
        if (uVar2 != 0xffffffff) {
          return &PTR_DAT_10002c01;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= uVar1 - 0x1a);
  }
  uVar2 = 0;
  if (0x12 < uVar1) {
    do {
      if (((((((puVar3[uVar2] == 'f') && ((puVar3 + 1)[uVar2] == 'a')) &&
             ((puVar3 + 2)[uVar2] == 'i')) &&
            (((puVar3 + 3)[uVar2] == 'l' && ((puVar3 + 4)[uVar2] == 'e')))) &&
           ((puVar3 + 5)[uVar2] == 'd')) &&
          ((((puVar3 + 6)[uVar2] == ' ' && ((puVar3 + 7)[uVar2] == 't')) &&
           (((puVar3 + 8)[uVar2] == 'o' &&
            ((((puVar3 + 9)[uVar2] == ' ' && ((puVar3 + 10)[uVar2] == 'o')) &&
             ((puVar3 + 0xb)[uVar2] == 'p')))))))) &&
         ((((puVar3 + 0xc)[uVar2] == 'e' && ((puVar3 + 0xd)[uVar2] == 'n')) &&
          (((puVar3 + 0xe)[uVar2] == ' ' &&
           ((((puVar3 + 0xf)[uVar2] == 'f' && ((puVar3 + 0x10)[uVar2] == 'i')) &&
            (((puVar3 + 0x11)[uVar2] == 'l' && ((puVar3 + 0x12)[uVar2] == 'e')))))))))) {
        if (uVar1 < 0x1a || uVar2 != 0xffffffff) {
          return (undefined **)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0xffffffff);
        }
        goto LAB_10002eed;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= uVar1 - 0x13);
    if (0x19 < uVar1) {
LAB_10002eed:
      uVar2 = 0;
      do {
        if (((((((puVar3[uVar2] == 'u') && (puVar3[uVar2 + 1] == 'n')) && (puVar3[uVar2 + 2] == 'a')
               ) && ((puVar3[uVar2 + 3] == 'b' && (puVar3[uVar2 + 4] == 'l')))) &&
             (((((puVar3[uVar2 + 5] == 'e' &&
                 ((puVar3[uVar2 + 6] == ' ' && (puVar3[uVar2 + 7] == 't')))) &&
                (puVar3[uVar2 + 8] == 'o')) &&
               ((((puVar3[uVar2 + 9] == ' ' && (puVar3[uVar2 + 10] == 'o')) &&
                 (puVar3[uVar2 + 0xb] == 'p')) &&
                ((puVar3[uVar2 + 0xc] == 'e' && (puVar3[uVar2 + 0xd] == 'n')))))) &&
              ((puVar3[uVar2 + 0xe] == ' ' &&
               ((puVar3[uVar2 + 0xf] == 's' && (puVar3[uVar2 + 0x10] == 'c')))))))) &&
            ((puVar3[uVar2 + 0x11] == 'r' &&
             (((puVar3[uVar2 + 0x12] == 'i' && (puVar3[uVar2 + 0x13] == 'p')) &&
              (puVar3[uVar2 + 0x14] == 't')))))) &&
           (((puVar3[uVar2 + 0x15] == ' ' && (puVar3[uVar2 + 0x16] == 'f')) &&
            ((puVar3[uVar2 + 0x17] == 'i' &&
             ((puVar3[uVar2 + 0x18] == 'l' && (puVar3[uVar2 + 0x19] == 'e')))))))) {
          return (undefined **)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0xffffffff);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 <= uVar1 - 0x1a);
    }
  }
  return (undefined **)0x0;
}

#undef DAT_10004d9d
#undef PTR_DAT_10002c01

#undef DAT_10004ef6
#define DAT_10004ef6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff0
 */

void recovered_10002ff0(int *arg_ecx,char *arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;

  if ((arg_edx != (char *)0x0) && (*arg_edx != '\0')) {
    iVar2 = -1;
    do {
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (arg_edx[iVar1] != '\0');
    wm_lua_write(arg_edx,iVar2);
    wm_lua_write(&DAT_10004ef6,2);
  }
  pcVar3 = (char *)(**(code **)(*arg_ecx + 8))(arg_ecx);
  if (pcVar3 != (char *)0x0) {
    iVar2 = -1;
    do {
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (pcVar3[iVar1] != '\0');
    wm_lua_write(pcVar3,iVar2);
  }
  wm_lua_writeline();
  return;
}

#undef DAT_10004ef6

#undef DAT_10004d40
#define DAT_10004d40 (*(float *)(((uintptr_t)pf_module_state + 0x264U)))
#undef DAT_10004d44
#define DAT_10004d44 (*(float *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_10004d48
#define DAT_10004d48 (*(float *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_10004d4c
#define DAT_10004d4c (*(float *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10004d50
#define DAT_10004d50 (*(float *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_10004d58
#define DAT_10004d58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef DAT_10004f1b
#define DAT_10004f1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43fU)))
#undef DAT_10004f1f
#define DAT_10004f1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x443U)))
#undef DAT_10004f23
#define DAT_10004f23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x447U)))
#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define uStack_8c (*(uint *)(pf_stack_frame + 276))
#define abStack_57 (*(byte (*)[87])(pf_stack_frame + 329))
#define local_e0 (*(void * *)(pf_stack_frame + 192))
#define local_dc (*(uint *)(pf_stack_frame + 196))
#define local_d8 (*(undefined4 *)(pf_stack_frame + 200))
#define local_d4 (*(int *)(pf_stack_frame + 204))
#define local_d0 (*(undefined4 *)(pf_stack_frame + 208))
#define local_cc (*(undefined4 *)(pf_stack_frame + 212))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 232))
#define local_b4 (*(undefined4 *)(pf_stack_frame + 236))
#define local_b0 (*(undefined1 * *)(pf_stack_frame + 240))
#define local_ac (*(undefined4 *)(pf_stack_frame + 244))
#define local_a8 (*(undefined1 * *)(pf_stack_frame + 248))
#define local_98 (*(undefined8 *)(pf_stack_frame + 264))
#define local_90 (*(uint *)(pf_stack_frame + 272))
#define local_88 (*(undefined8 *)(pf_stack_frame + 280))
#define local_80 (*(double *)(pf_stack_frame + 288))
#define local_75 (*(byte (*)[117])(pf_stack_frame + 299))
#define auStackY_190 (*(undefined1 (*)[400])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

int * recovered_10003090(int *param_1,double param_2)

{
  unsigned char pf_stack_frame[448] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined *puVar23;
  uint uVar24;

  local_b0 = abStack_57 + 0x53;
  local_a8 = auStackY_190 + 0x80;
  local_b8 = DAT_10005008;
  local_b4 = 0x4cbc;
  local_ac = 0x690;
  _Unwind_SjLj_Register(&local_d0);
  if (NAN(param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar23 = &DAT_10004f1b;
  }
  else {
    bVar20 = 1.0 / param_2 < 0.0;
    if (param_2 < (double)DAT_10004d40) {
      if ((double)DAT_10004d44 < param_2) {
        dVar3 = param_2;
        if (param_2 < 0.0 || bVar20 && param_2 == 0.0) {
          dVar3 = -param_2;
        }
        dVar5 = (double)DAT_10004d48;
        dVar4 = 0.0;
        if (dVar5 <= dVar3) {
          dVar4 = dVar5;
        }
        lVar1 = (longlong)ROUND(dVar3 - dVar4);
        PF_PART4(local_88, 4) = (uint)((ulonglong)lVar1 >> 0x20);
        uStack_8c = (uint)(dVar5 <= dVar3) << 0x1f ^ PF_PART4(local_88, 4);
        PF_PART4(local_88, 0) = (uint)lVar1;
        local_90 = (uint)local_88;
        local_80 = (double)(pf_bits_float(CONCAT44(uStack_8c,(uint)local_88)) +
                           *(float *)(&DAT_10004d58 + ((int)uStack_8c >> 0x1f) * -4));
        local_d4 = 0x100030a4;
        dVar3 = (dVar3 - local_80) * (double)DAT_10004d4c + (double)DAT_10004d50;
        dVar4 = 0.0;
        if (dVar5 <= dVar3) {
          dVar4 = dVar5;
        }
        lVar2 = (longlong)ROUND(dVar3 - dVar4);
        PF_PART4(local_98, 4) = (uint)((ulonglong)lVar2 >> 0x20);
        PF_PART4(local_98, 4) = (uint)(dVar5 <= dVar3) << 0x1f ^ PF_PART4(local_98, 4);
        PF_PART4(local_98, 0) = (uint)lVar2;
        bVar21 = -PF_PART4(local_98, 4) < (uint)(999999 < (uint)local_98);
        uVar15 = (uint)local_98 - 1000000;
        uVar24 = (PF_PART4(local_98, 4) - 1) + (uint)(999999 < (uint)local_98);
        if (PF_PART4(local_98, 4) == 0 && !bVar21) {
          uVar15 = (uint)local_98;
          uVar24 = PF_PART4(local_98, 4);
        }
        uVar8 = (uint)(PF_PART4(local_98, 4) != 0 || bVar21);
        uVar9 = uVar8 + (uint)local_88;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar8 = uStack_8c + CARRY4(uVar8,(uint)local_88);
        local_98 = lVar2;
        local_88 = lVar1;
        if (param_2 < 0.0 || bVar20 && param_2 == 0.0) {
          local_cc = 1;
          recovered_100037b0(param_1,0x2d);
        }
        uVar19 = 0;
        do {
          uVar18 = uVar19;
          uVar11 = uVar8 << 0x1f | uVar9 >> 1;
          uVar16 = uVar8 >> 1;
          uVar17 = (uVar11 + uVar16 + (uint)CARRY4(uVar11,uVar16)) % 5;
          uVar12 = uVar11 - uVar17;
          lVar1 = (ulonglong)uVar12 * 0xcccccccd;
          abStack_57[uVar18 + 2] = (char)uVar9 + (char)lVar1 * -10 | 0x30;
          uVar19 = uVar18 + 1;
          bVar20 = 9 < uVar9;
          bVar21 = uVar8 != 0;
          uVar6 = -uVar8;
          uVar9 = (uint)lVar1;
          uVar8 = (uVar16 - (uVar11 < uVar17)) * -0x33333333 +
                  uVar12 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
        } while (bVar21 || uVar6 < bVar20);
        if (uVar19 < 0x21) {
          if (uVar19 != 0) {
            iVar10 = uVar18 + 2;
            pbVar13 = local_75;
            uVar9 = uVar19;
            do {
              *pbVar13 = abStack_57[iVar10];
              pbVar13 = pbVar13 + 1;
              iVar10 = iVar10 + -1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          local_e0 = (void *)0x0;
          local_dc = 0;
          local_d8 = 0;
          local_cc = 2;
          recovered_100020c0((int *)&local_e0,(int)local_75,uVar19);
        }
        else {
          local_e0 = (void *)0x0;
          local_dc = 0;
          local_d8 = 0;
        }
        pvVar14 = (void *)(((uintptr_t)pf_module_state+0x2c1U));
        if (local_e0 != (void *)0x0) {
          pvVar14 = local_e0;
        }
        local_cc = 3;
        recovered_10003ae0(param_1,(int)pvVar14,local_dc);
        _ZdlPv(local_e0);
        local_cc = 4;
        recovered_100037b0(param_1,0x2e);
        uVar22 = __udivdi3(uVar15,uVar24,100000,0);
        uVar7 = uVar22 >> 1;
        local_cc = 5;
        recovered_100037b0(param_1,((byte)uVar22 & 1) +
                                   (char)((uint)(uVar7 + CONCAT44((int)uVar7,(int)(uVar7 >> 0x20))
                                                >> 0x20) % 5) * '\x02' | 0x30);
        uVar22 = __udivdi3(uVar15,uVar24,10000,0);
        uVar7 = uVar22 >> 1;
        local_cc = 6;
        recovered_100037b0(param_1,((byte)uVar22 & 1) +
                                   (char)((uint)(uVar7 + CONCAT44((int)uVar7,(int)(uVar7 >> 0x20))
                                                >> 0x20) % 5) * '\x02' | 0x30);
        uVar22 = __udivdi3(uVar15,uVar24,1000,0);
        uVar7 = uVar22 >> 1;
        local_cc = 7;
        recovered_100037b0(param_1,((byte)uVar22 & 1) +
                                   (char)((uint)(uVar7 + CONCAT44((int)uVar7,(int)(uVar7 >> 0x20))
                                                >> 0x20) % 5) * '\x02' | 0x30);
        uVar22 = __udivdi3(uVar15,uVar24,100,0);
        uVar7 = uVar22 >> 1;
        local_cc = 8;
        recovered_100037b0(param_1,((byte)uVar22 & 1) +
                                   (char)((uint)(uVar7 + CONCAT44((int)uVar7,(int)(uVar7 >> 0x20))
                                                >> 0x20) % 5) * '\x02' | 0x30);
        uVar9 = uVar24 << 0x1f | uVar15 >> 1;
        uVar24 = uVar24 >> 1;
        uVar19 = (uVar9 + uVar24 + (uint)CARRY4(uVar9,uVar24)) % 5;
        uVar8 = uVar9 - uVar19;
        lVar1 = (ulonglong)uVar8 * 0xcccccccd;
        uVar9 = (uVar24 - (uVar9 < uVar19)) * -0x33333333 +
                uVar8 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
        uVar24 = uVar9 * -0x80000000LL | (uint)lVar1 >> 1;
        uVar9 = uVar9 >> 1;
        local_cc = 9;
        recovered_100037b0(param_1,((byte)lVar1 & 1) +
                                   (char)((uVar9 + uVar24 + (uint)CARRY4(uVar9,uVar24)) % 5) *
                                   '\x02' | 0x30);
        local_cc = 10;
        recovered_100037b0(param_1,(char)uVar15 + (byte)lVar1 * -10 | 0x30);
        _Unwind_SjLj_Unregister(&local_d0);
        return param_1;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar23 = &DAT_10004f23;
      uVar24 = 4;
      goto LAB_100031b6;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar23 = &DAT_10004f1f;
  }
  uVar24 = 3;
LAB_100031b6:
  local_cc = 0xffffffff;
  recovered_100020c0(param_1,(int)puVar23,uVar24);
  _Unwind_SjLj_Unregister(&local_d0);
  return param_1;
}

#undef DAT_10004d40
#undef DAT_10004d44
#undef DAT_10004d48
#undef DAT_10004d4c
#undef DAT_10004d50
#undef DAT_10004d58
#undef DAT_10004f1b
#undef DAT_10004f1f
#undef DAT_10004f23
#undef DAT_10005008
#undef uStack_8c
#undef abStack_57
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_75
#undef auStackY_190

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037b0
 */

void recovered_100037b0(int *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar5 = 0x10;
    if (uVar1 != 0) {
      uVar5 = uVar1 * 2;
    }
    if (uVar5 <= uVar1) goto LAB_1000381d;
    puVar4 = _Znwm(uVar5 | 1);
    *puVar4 = 0;
    pvVar2 = (void *)*param_1;
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        puVar4[iVar6] = *(undefined1 *)((int)pvVar2 + iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    puVar4[iVar3] = 0;
    _ZdlPv(pvVar2);
  }
  else {
LAB_1000381d:
    puVar4 = (undefined1 *)*param_1;
    if (puVar4 != (undefined1 *)0x0) goto LAB_1000383b;
    puVar4 = _Znwm(1);
    *puVar4 = 0;
    uVar5 = 0;
  }
  *param_1 = (int)puVar4;
  param_1[2] = uVar5;
LAB_1000383b:
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  puVar4[iVar3] = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_10004f28
#define str_10004f28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10004f39
#define str_10004f39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
#define auStackY_160 (*(undefined1 (*)[352])(pf_stack_frame + 16))
#define local_c0 (*(void * *)(pf_stack_frame + 176))
#define local_bc (*(uint *)(pf_stack_frame + 180))
#define abStack_57 (*(byte (*)[87])(pf_stack_frame + 281))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 184))
#define local_b4 (*(int *)(pf_stack_frame + 188))
#define local_b0 (*(undefined4 *)(pf_stack_frame + 192))
#define local_ac (*(undefined4 *)(pf_stack_frame + 196))
#define local_98 (*(undefined4 *)(pf_stack_frame + 216))
#define local_94 (*(undefined4 *)(pf_stack_frame + 220))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_8c (*(undefined4 *)(pf_stack_frame + 228))
#define local_88 (*(undefined1 * *)(pf_stack_frame + 232))
#define local_75 (*(byte (*)[117])(pf_stack_frame + 251))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003860
 */

int * recovered_10003860(int *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  char *pcVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;

  local_90 = abStack_57 + 0x53;
  local_88 = auStackY_160 + 0x80;
  iVar2 = param_1[3];
  local_98 = DAT_10005008;
  local_94 = 0x4cd4;
  local_8c = 0x228;
  _Unwind_SjLj_Register(&local_b0);
  if (iVar2 == 10) {
    local_b4 = 0x10003874;
    uVar13 = 0;
    do {
      uVar11 = uVar13;
      uVar5 = param_3 << 0x1f | param_2 >> 1;
      uVar10 = param_3 >> 1;
      uVar12 = (uVar5 + uVar10 + (uint)CARRY4(uVar5,uVar10)) % 5;
      uVar6 = uVar5 - uVar12;
      lVar1 = (ulonglong)uVar6 * 0xcccccccd;
      abStack_57[uVar11 + 2] = (char)param_2 + (char)lVar1 * -10 | 0x30;
      uVar13 = uVar11 + 1;
      bVar15 = 9 < param_2;
      bVar16 = param_3 != 0;
      uVar8 = -param_3;
      param_3 = (uVar10 - (uVar5 < uVar12)) * -0x33333333 +
                uVar6 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      param_2 = (uint)lVar1;
    } while (bVar16 || uVar8 < bVar15);
    if (uVar13 < 0x21) {
      if (uVar13 != 0) {
        iVar2 = uVar11 + 2;
        pbVar7 = local_75;
        uVar8 = uVar13;
        do {
          *pbVar7 = abStack_57[iVar2];
          pbVar7 = pbVar7 + 1;
          iVar2 = iVar2 + -1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      local_c0 = (void *)0x0;
      local_bc = 0;
      local_b8 = 0;
      local_ac = 0xffffffff;
      recovered_100020c0((int *)&local_c0,(int)local_75,uVar13);
    }
    else {
      local_c0 = (void *)0x0;
      local_bc = 0;
      local_b8 = 0;
    }
    pvVar9 = (void *)(((uintptr_t)pf_module_state+0x2c1U));
    if (local_c0 != (void *)0x0) {
      pvVar9 = local_c0;
    }
    local_ac = 1;
    recovered_10003ae0(param_1,(int)pvVar9,local_bc);
    _ZdlPv(local_c0);
  }
  else {
    pcVar3 = str_10004f39;
    if ((char)param_1[4] != '\0') {
      pcVar3 = str_10004f28;
    }
    sVar4 = (iVar2 != 8) + 3;
    iVar14 = 0;
    do {
      abStack_57[iVar14 + 2] = pcVar3[param_2 & (uint)(iVar2 != 8) * 8 + 7];
      iVar14 = iVar14 + 1;
      param_2 = param_2 >> sVar4 | param_3 << 0x20 - sVar4;
      param_3 = param_3 >> sVar4;
    } while (param_2 != 0 || param_3 != 0);
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      local_ac = 0xffffffff;
      recovered_100037b0(param_1,abStack_57[iVar14 + 1]);
    }
  }
  _Unwind_SjLj_Unregister(&local_b0);
  return param_1;
}

#undef DAT_10005008
#undef str_10004f28
#undef str_10004f39
#undef auStackY_160
#undef local_c0
#undef local_bc
#undef abStack_57
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_75

#define local_28 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae0
 */

int * recovered_10003ae0(int *param_1,int param_2,uint param_3)

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
LAB_10003b20:
      if (uVar7 != uVar2) goto code_r0x10003b28;
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
        goto LAB_10003c56;
      }
      goto LAB_10003c58;
    }
    uVar6 = param_1[1];
LAB_10003b32:
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
LAB_10003c56:
    local_28 = (undefined1 *)*param_1;
LAB_10003c58:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_28[iVar4] = 0;
  }
  return param_1;
code_r0x10003b28:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10003b32;
  goto LAB_10003b20;
}

#undef local_28

#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c80
 */

void recovered_10003c80(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10005008;
  local_2c = 0x4cdc;
  local_24 = 0xc6;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 7) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10003d47;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
LAB_10003d0e:
      piVar2 = (int *)*param_2;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
  }
  else {
    if (param_1 != 6) {
      local_44 = 0xffffffff;
      recovered_10003d90(param_1,param_2);
      goto LAB_10003d47;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10003d47;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      goto LAB_10003d0e;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_10003d47:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef auStack_1c
#undef local_20

#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

void recovered_10003d90(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = DAT_10005008;
  local_2c = 0x4cec;
  local_24 = 0xb0;
  _Unwind_SjLj_Register(&local_48);
  if (param_1 == 9) {
    piVar1 = (int *)*param_2;
    if (piVar1 == (int *)0x0) goto LAB_10003e41;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      goto LAB_10003e1e;
    }
  }
  else {
    if ((param_1 != 8) || (piVar1 = (int *)*param_2, piVar1 == (int *)0x0)) goto LAB_10003e41;
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
LAB_10003e1e:
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
LAB_10003e41:
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef auStack_1c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined4 *)(pf_stack_frame + 192))
#define local_2c (*(undefined4 *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

void recovered_10003e80(int *param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;

  _ZdlPv((void *)param_1[0x2ed]);
  _ZdlPv((void *)param_1[0x2e7]);
  local_20 = auStackY_e0 + 0x80;
  iVar5 = param_1[0x2e4];
  local_30 = DAT_10005008;
  local_2c = 0x4cfc;
  local_24 = 0x6a7;
  local_28 = auStack_1c + 0x18;
  _Unwind_SjLj_Register(&local_48);
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar1 = param_1[0x2e3];
      piVar2 = *(int **)(iVar1 + iVar4);
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          local_44 = 1;
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 8)))(piVar2);
          piVar3 = *(int **)(iVar1 + iVar4);
          piVar2 = piVar3 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar3 + 4)))(piVar3);
          }
        }
        *(undefined4 *)(iVar1 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar4) = 0;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x2e4] = 0;
  _ZdlPv((void *)param_1[0x2e3]);
  for (iVar5 = param_1[0x2e1]; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar4 = param_1[0x2e0];
    piVar2 = *(int **)(iVar4 + -8 + iVar5 * 8);
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        local_44 = 2;
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 8)))(piVar2);
        piVar3 = *(int **)(iVar4 + -8 + iVar5 * 8);
        piVar2 = piVar3 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar3 + 4)))(piVar3);
        }
      }
      *(undefined4 *)(iVar4 + -8 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar4 + -4 + iVar5 * 8) = 0;
    }
  }
  param_1[0x2e1] = 0;
  _ZdlPv((void *)param_1[0x2e0]);
  param_1[0x2dd] = 0;
  _ZdlPv((void *)param_1[0x2dc]);
  param_1[0x2da] = 0;
  _ZdlPv((void *)param_1[0x2d9]);
  recovered_10004570(param_1 + 0x2d6);
  param_1[0x2d3] = 0;
  _ZdlPv((void *)param_1[0x2d2]);
  param_1[0x2d0] = 0;
  _ZdlPv((void *)param_1[0x2cf]);
  iVar5 = param_1[0x2cd];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x34;
    do {
      iVar4 = iVar4 + -0x34;
      recovered_10004640((undefined4 *)(param_1[0x2cc] + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x2cd] = 0;
  _ZdlPv((void *)param_1[0x2cc]);
  param_1[0x2c8] = 0;
  _ZdlPv((void *)param_1[0x2c7]);
  param_1[0x2c5] = 0;
  _ZdlPv((void *)param_1[0x2c4]);
  iVar5 = param_1[0x2c2];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x88 + -0x84;
    do {
      recovered_10004760((int *)(param_1[0x2c1] + iVar4));
      iVar4 = iVar4 + -0x88;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x2c2] = 0;
  _ZdlPv((void *)param_1[0x2c1]);
  piVar2 = (int *)param_1[0x2bd];
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      local_44 = 3;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 8)))(piVar2);
      piVar3 = (int *)param_1[0x2bd];
      piVar2 = piVar3 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar3 + 4)))(piVar3);
      }
    }
    param_1[0x2bd] = 0;
    param_1[0x2be] = 0;
  }
  piVar2 = (int *)param_1[699];
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      local_44 = 4;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 8)))(piVar2);
      piVar3 = (int *)param_1[699];
      piVar2 = piVar3 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar3 + 4)))(piVar3);
      }
    }
    param_1[699] = 0;
    param_1[700] = 0;
  }
  _ZdlPv((void *)param_1[0x2b5]);
  param_1[0x2b1] = 0;
  _ZdlPv((void *)param_1[0x2b0]);
  param_1[0x39] = 0;
  _ZdlPv((void *)param_1[0x38]);
  param_1[0x36] = 0;
  _ZdlPv((void *)param_1[0x35]);
  iVar5 = param_1[0x33];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x10;
    do {
      iVar4 = iVar4 + -0x10;
      _ZdlPv(*(void **)(param_1[0x32] + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x33] = 0;
  _ZdlPv((void *)param_1[0x32]);
  iVar5 = param_1[0x30];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      recovered_100049d0((int *)(param_1[0x2f] + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x30] = 0;
  _ZdlPv((void *)param_1[0x2f]);
  param_1[0x2d] = 0;
  _ZdlPv((void *)param_1[0x2c]);
  param_1[0x2a] = 0;
  _ZdlPv((void *)param_1[0x29]);
  iVar5 = param_1[0x24];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar1 = param_1[0x23];
      recovered_100048b0((int *)(iVar1 + iVar4));
      _ZdlPv(*(void **)(iVar1 + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x24] = 0;
  _ZdlPv((void *)param_1[0x23]);
  iVar5 = param_1[0x21];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar1 = param_1[0x20];
      recovered_100048b0((int *)(iVar1 + iVar4));
      _ZdlPv(*(void **)(iVar1 + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x21] = 0;
  _ZdlPv((void *)param_1[0x20]);
  iVar5 = param_1[0x1e];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0xc;
    do {
      iVar4 = iVar4 + -0xc;
      iVar1 = param_1[0x1d];
      recovered_100048b0((int *)(iVar1 + iVar4));
      _ZdlPv(*(void **)(iVar1 + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x1e] = 0;
  _ZdlPv((void *)param_1[0x1d]);
  recovered_100048b0(param_1 + 0x1a);
  _ZdlPv((void *)param_1[0x1a]);
  param_1[0x17] = 0;
  _ZdlPv((void *)param_1[0x16]);
  param_1[0x14] = 0;
  _ZdlPv((void *)param_1[0x13]);
  iVar5 = param_1[0x11];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x10 + -4;
    do {
      iVar1 = param_1[0x10];
      piVar2 = *(int **)(iVar1 + iVar4);
      if (piVar2 != (int *)0x0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
      _ZdlPv(*(void **)(iVar1 + -0xc + iVar4));
      iVar4 = iVar4 + -0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0x11] = 0;
  _ZdlPv((void *)param_1[0x10]);
  param_1[0xe] = 0;
  _ZdlPv((void *)param_1[0xd]);
  recovered_100049d0(param_1 + 10);
  param_1[7] = 0;
  _ZdlPv((void *)param_1[6]);
  param_1[4] = 0;
  _ZdlPv((void *)param_1[3]);
  iVar5 = param_1[1];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x10;
    do {
      iVar4 = iVar4 + -0x10;
      _ZdlPv(*(void **)(*param_1 + iVar4));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

void recovered_10004570(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;

  iVar5 = param_1[1];
  if (iVar5 != 0) {
    iVar4 = iVar5 * 0x24 + -0xc;
    do {
      iVar2 = *param_1;
      piVar3 = *(int **)(iVar2 + -4 + iVar4);
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 2;
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (piVar3[1] == 0)) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        *(undefined4 *)(iVar2 + -4 + iVar4) = 0;
        *(undefined4 *)(iVar2 + iVar4) = 0;
      }
      piVar3 = *(int **)(iVar2 + -0xc + iVar4);
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 2;
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && (piVar3[1] == 0)) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        *(undefined4 *)(iVar2 + -0xc + iVar4) = 0;
        *(undefined4 *)(iVar2 + -8 + iVar4) = 0;
      }
      _ZdlPv(*(void **)(iVar2 + -0x18 + iVar4));
      iVar4 = iVar4 + -0x24;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  return;
}


#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(undefined4 *)(pf_stack_frame + 176))
#define local_2c (*(undefined4 *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004640
 */

void recovered_10004640(undefined4 *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  piVar1 = (int *)param_1[5];
  local_30 = DAT_10005008;
  local_2c = 0x4d10;
  local_24 = 0xd4;
  _Unwind_SjLj_Register(&local_48);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 1;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      piVar2 = (int *)param_1[5];
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_44 = 2;
      ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar1 + 8)))(piVar1);
      piVar2 = (int *)param_1[3];
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((void (*)(void *))(*(uintptr_t *)(*(uintptr_t *)piVar2 + 4)))(piVar2);
      }
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef local_24
#undef auStackY_d0
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004760
 */

void recovered_10004760(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  param_1[0x1b] = 0;
  _ZdlPv((void *)param_1[0x1a]);
  param_1[0x18] = 0;
  _ZdlPv((void *)param_1[0x17]);
  iVar4 = param_1[0x15];
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x10;
    do {
      iVar3 = iVar3 + -0x10;
      _ZdlPv(*(void **)(param_1[0x14] + iVar3));
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0x15] = 0;
  _ZdlPv((void *)param_1[0x14]);
  recovered_100049d0(param_1 + 0x11);
  iVar4 = param_1[0xf];
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0xc;
    do {
      iVar3 = iVar3 + -0xc;
      _ZdlPv(*(void **)(param_1[0xe] + iVar3));
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0xf] = 0;
  _ZdlPv((void *)param_1[0xe]);
  recovered_100049d0(param_1 + 9);
  iVar4 = param_1[7];
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0xc;
    do {
      iVar3 = iVar3 + -0xc;
      _ZdlPv(*(void **)(param_1[6] + iVar3));
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[7] = 0;
  _ZdlPv((void *)param_1[6]);
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (piVar2[1] == 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined4 *)(pf_stack_frame + 192))
#define local_2c (*(undefined4 *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048b0
 */

void recovered_100048b0(int *param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  iVar4 = param_1[1];
  local_30 = DAT_10005008;
  local_2c = 0x4d20;
  local_24 = 0xe5;
  _Unwind_SjLj_Register(&local_48);
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x20 + -0x10;
    do {
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0xc + iVar3);
      if (1 < uVar2) {
        if (uVar2 != 2) {
          if (uVar2 != 3) {
            if ((uVar2 & 0xfffffffe) != 4) {
              local_44 = 1;
              recovered_10003c80(uVar2,(int *)(iVar1 + iVar3));
            }
            goto LAB_10004922;
          }
          *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
        }
        _ZdlPv(*(void **)(iVar1 + iVar3));
      }
LAB_10004922:
      _ZdlPv(*(void **)(iVar1 + -0x10 + iVar3));
      iVar3 = iVar3 + -0x20;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = 0;
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_e0
#undef auStack_1c

#undef DAT_10005008
#define DAT_10005008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x52cU)))
#define local_48 (*(undefined4 *)(pf_stack_frame + 168))
#define local_44 (*(undefined4 *)(pf_stack_frame + 172))
#define local_30 (*(undefined4 *)(pf_stack_frame + 192))
#define local_2c (*(undefined4 *)(pf_stack_frame + 196))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 200))
#define local_24 (*(undefined4 *)(pf_stack_frame + 204))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 208))
#define auStackY_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d0
 */

void recovered_100049d0(int *param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_e0 + 0x80;
  iVar4 = param_1[1];
  local_30 = DAT_10005008;
  local_2c = 0x4d30;
  local_24 = 0xd4;
  _Unwind_SjLj_Register(&local_48);
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x14 + -0x10;
    do {
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0xc + iVar3);
      if (1 < uVar2) {
        if (uVar2 != 2) {
          if (uVar2 != 3) {
            if ((uVar2 & 0xfffffffe) != 4) {
              local_44 = 1;
              recovered_10003c80(uVar2,(int *)(iVar1 + iVar3));
            }
            goto LAB_10004a42;
          }
          *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
        }
        _ZdlPv(*(void **)(iVar1 + iVar3));
      }
LAB_10004a42:
      iVar3 = iVar3 + -0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = 0;
  _ZdlPv((void *)*param_1);
  _Unwind_SjLj_Unregister(&local_48);
  return;
}

#undef DAT_10005008
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_e0
#undef auStack_1c
