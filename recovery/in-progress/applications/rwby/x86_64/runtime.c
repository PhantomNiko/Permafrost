/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100035cc
#define DAT_100035cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
#undef DAT_10003715
#define DAT_10003715 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x495U)))
#undef DAT_1000371a
#define DAT_1000371a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49aU)))
#undef DAT_1000371e
#define DAT_1000371e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49eU)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_10001895
#define LAB_10001895 (*(uint8_t *)(0x10001895U))
#undef PTR_recovered_10001cd0_10004040
#define PTR_recovered_10001cd0_10004040 (*(void * *)(((uintptr_t)pf_module_state + 0xdc0U)))
#undef PTR_recovered_10002470_100040d8
#define PTR_recovered_10002470_100040d8 (*(void * *)(((uintptr_t)pf_module_state + 0xe58U)))
#undef str_10003706
#define str_10003706 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_1000370d
#define str_1000370d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
#undef str_1000387f
#define str_1000387f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_100038ad
#define str_100038ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62dU)))
#undef str_100038bb
#define str_100038bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63bU)))
#define uStack_1160 (*(ulong *)(pf_stack_frame + 32))
#define local_1168 (*(undefined8 *)(pf_stack_frame + 24))
#define local_1158 (*(ulong (*)[555])(pf_stack_frame + 40))
#define local_1140 (*(ulong *)(pf_stack_frame + 64))
#define local_1138 (*(undefined1 * *)(pf_stack_frame + 72))
#define lStack_140 (*(long *)(pf_stack_frame + 4160))
#define local_1130 (*(ulong *)(pf_stack_frame + 80))
#define local_160 (*(long *)(pf_stack_frame + 4128))
#define local_158 (*(ulong *)(pf_stack_frame + 4136))
#define local_148 (*(void * *)(pf_stack_frame + 4152))
#define local_138 (*(undefined8 *)(pf_stack_frame + 4168))
#define local_130 (*(char *)(pf_stack_frame + 4176))
#define local_128 (*(long * *)(pf_stack_frame + 4184))
#define uStack_110 (*(ulong *)(pf_stack_frame + 4208))
#define local_120 (*(long * *)(pf_stack_frame + 4192))
#define local_118 (*(char * *)(pf_stack_frame + 4200))
#define local_108 (*(long (*)[33])(pf_stack_frame + 4216))
#define local_f0 (*(ulong *)(pf_stack_frame + 4240))
#define local_e8 (*(void * *)(pf_stack_frame + 4248))
#define uStack_c8 (*(ulong *)(pf_stack_frame + 4280))
#define local_d0 (*(char * *)(pf_stack_frame + 4272))
#define local_c0 (*(undefined8 *)(pf_stack_frame + 4288))
#define local_b8 (*(char * *)(pf_stack_frame + 4296))
#define uStack_b0 (*(ulong *)(pf_stack_frame + 4304))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 4312))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 4320))
#define local_98 (*(ulong *)(pf_stack_frame + 4328))
#define local_90 (*(undefined8 *)(pf_stack_frame + 4336))
#define local_88 (*(undefined4 *)(pf_stack_frame + 4344))
#define local_70 (*(undefined8 *)(pf_stack_frame + 4368))
#define local_68 (*(undefined * *)(pf_stack_frame + 4376))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 4384))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 4392))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 4400))
#define local_38 (*(undefined8 *)(pf_stack_frame + 4424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000670
 */

ulong recovered_10000670(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[4512] __attribute__((aligned(16))) = {0};

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

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 4480) + -8);
  local_50 = (undefined1 *)&local_1168;
  local_148 = (void *)0x0;
  lStack_140 = 0;
  local_138 = 0;
  local_130 = (int)param_1 < 2;
  local_70 = DAT_10004000;
  local_68 = &DAT_100035cc;
  local_58 = &LAB_10001895;
  local_160 = param_2;
  _Unwind_SjLj_Register(&local_90);
  if (param_2 != 0 && 1 < (int)param_1) {
    uVar5 = 1;
    local_158 = (ulong)param_1;
LAB_1000077c:
    puVar8 = *(undefined1 **)(local_160 + uVar5 * 8);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_10003705;
    }
    local_118 = (char *)0x0;
    uStack_110 = 0;
    local_108[0] = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      lVar2 = uVar7 + 1;
      uVar7 = uVar7 + 1;
    } while (puVar8[lVar2] != '\0');
    local_88 = 1;
    local_98 = uVar5;
    recovered_10001a20((long *)&local_118,(long)puVar8,uVar7);
    pcVar9 = local_118;
    if (local_118 == (char *)0x0) {
      pcVar9 = &DAT_10003705;
    }
    if (uStack_110 != 0) {
      uVar5 = 0;
      do {
        if (pcVar9[uVar5] == '=') {
          if (uVar5 != 0xffffffffffffffff) {
            uVar7 = uStack_110;
            if (uVar5 <= uStack_110) {
              uVar7 = uVar5;
            }
            local_d0 = (char *)0x0;
            uStack_c8 = 0;
            local_c0 = 0;
            local_88 = 2;
            local_38 = uVar5;
            recovered_10001a20((long *)&local_d0,(long)pcVar9,uVar7);
            uVar5 = local_38 + 1;
            if (uStack_110 < local_38 + 1) {
              uVar5 = uStack_110;
            }
            pcVar9 = local_118;
            if (local_118 == (char *)0x0) {
              pcVar9 = &DAT_10003705;
            }
            local_b8 = (char *)0x0;
            uStack_b0 = 0;
            local_a8 = 0;
            local_88 = 3;
            recovered_10001a20((long *)&local_b8,(long)(pcVar9 + uVar5),uStack_110 - uVar5);
            local_38 = uStack_c8;
            local_1168 = (void *)0x0;
            uStack_1160 = 0;
            local_1158[0] = 0;
            local_88 = 4;
            recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x486U),6);
            uVar5 = uStack_1160;
            _ZdlPv(local_1168);
            if (local_38 != uVar5) goto LAB_10000994;
            if (uStack_c8 == 0) goto LAB_10000705;
            pcVar9 = local_d0;
            if (local_d0 == (char *)0x0) {
              pcVar9 = &DAT_10003705;
            }
            uVar5 = 0;
            goto LAB_10000950;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uStack_110 != uVar5);
    }
    goto LAB_10000760;
  }
LAB_10000d03:
  local_88 = 10;
  _ZN6winter4ruby6RubyVMC1Ev(&local_a0);
  local_1168 = (void *)0x0;
  uStack_1160 = 0;
  local_1158[0] = 0;
  local_88 = 0xb;
  recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x4a1U),6);
  local_88 = 0xc;
  local_128 = _Znwm(0x10);
  *local_128 = (long)&PTR_recovered_10001cd0_10004040;
  local_88 = 0xd;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&local_a0,&local_1168,&local_128);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 8))();
  }
  _ZdlPv(local_1168);
  local_1168 = (void *)0x0;
  uStack_1160 = 0;
  local_1158[0] = 0;
  local_88 = 0xe;
  recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x4a8U),8);
  local_88 = 0xf;
  local_120 = _Znwm(0x10);
  *local_120 = (long)&PTR_recovered_10002470_100040d8;
  local_88 = 0x10;
  _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(&local_a0,&local_1168,&local_120);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 8))();
  }
  _ZdlPv(local_1168);
  if (local_130 == '\x01') {
    local_88 = 0x11;
    wm_lua_write(((uintptr_t)pf_module_state + 0x500U),0x21);
    local_88 = 0x12;
    wm_lua_writeline();
    local_88 = 0x13;
    wm_lua_write(((uintptr_t)pf_module_state + 0x522U),0x37);
    local_88 = 0x14;
    wm_lua_writeline();
    local_88 = 0x15;
    wm_lua_write(((uintptr_t)pf_module_state + 0x55aU),0x32);
    local_88 = 0x16;
    wm_lua_writeline();
    local_88 = 0x17;
    wm_lua_write(((uintptr_t)pf_module_state + 0x58dU),0x22);
    local_88 = 0x18;
    wm_lua_writeline();
    local_88 = 0x19;
    wm_lua_write(((uintptr_t)pf_module_state + 0x5b0U),0x2c);
    local_88 = 0x1a;
    wm_lua_writeline();
    local_88 = 0x1b;
    wm_lua_write(((uintptr_t)pf_module_state + 0x485U),0);
    local_88 = 0x1c;
    wm_lua_writeline();
    local_88 = 0x1d;
    wm_lua_write(((uintptr_t)pf_module_state + 0x5ddU),0xe);
    local_88 = 0x1e;
    wm_lua_writeline();
    local_88 = 0x1f;
    wm_lua_write(((uintptr_t)pf_module_state + 0x485U),0);
    local_88 = 0x20;
    wm_lua_writeline();
    local_118 = (char *)0x0;
    uStack_110 = 0;
    local_108[0] = 0;
    local_88 = 0x21;
    recovered_10001a20((long *)&local_118,((uintptr_t)pf_module_state + 0x5ecU),8);
    local_88 = 0x22;
    _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(&local_1168,&local_a0,&local_118);
    _ZdlPv(local_118);
    if ((byte)local_1168 == '\x01') {
      local_88 = 0x23;
      wm_lua_write(((uintptr_t)pf_module_state + 0x5f5U),9);
      local_88 = 0x24;
      wm_lua_write(((uintptr_t)pf_module_state + 0x5ecU),8);
      local_88 = 0x25;
      wm_lua_writeline();
      if ((char)uStack_1160 != '\0') {
        local_88 = 0x26;
        _ZNK6winter4ruby9RubyValue8toStringEv(&local_118,&uStack_1160);
        pcVar9 = &DAT_10003705;
        if (local_118 != (char *)0x0) {
          pcVar9 = local_118;
        }
        local_88 = 0x27;
        wm_lua_write((long)pcVar9,uStack_110);
        local_88 = 0x28;
        wm_lua_writeline();
        _ZdlPv(local_118);
      }
    }
    else {
      puVar8 = &DAT_10003705;
      if (local_1138 != (undefined1 *)0x0) {
        puVar8 = local_1138;
      }
      if (0x19 < local_1130) {
        uVar5 = 0;
        do {
          if ((((((((puVar8[uVar5] == 'u') && (puVar8[uVar5 + 1] == 'n')) &&
                  (puVar8[uVar5 + 2] == 'a')) &&
                 ((puVar8[uVar5 + 3] == 'b' && (puVar8[uVar5 + 4] == 'l')))) &&
                ((puVar8[uVar5 + 5] == 'e' &&
                 ((puVar8[uVar5 + 6] == ' ' && (puVar8[uVar5 + 7] == 't')))))) &&
               (puVar8[uVar5 + 8] == 'o')) &&
              (((((puVar8[uVar5 + 9] == ' ' && (puVar8[uVar5 + 10] == 'o')) &&
                 (puVar8[uVar5 + 0xb] == 'p')) &&
                (((puVar8[uVar5 + 0xc] == 'e' && (puVar8[uVar5 + 0xd] == 'n')) &&
                 ((puVar8[uVar5 + 0xe] == ' ' &&
                  ((puVar8[uVar5 + 0xf] == 's' && (puVar8[uVar5 + 0x10] == 'c')))))))) &&
               ((puVar8[uVar5 + 0x11] == 'r' &&
                (((puVar8[uVar5 + 0x12] == 'i' && (puVar8[uVar5 + 0x13] == 'p')) &&
                 (puVar8[uVar5 + 0x14] == 't')))))))) &&
             (((puVar8[uVar5 + 0x15] == ' ' && (puVar8[uVar5 + 0x16] == 'f')) &&
              ((puVar8[uVar5 + 0x17] == 'i' &&
               ((puVar8[uVar5 + 0x18] == 'l' && (puVar8[uVar5 + 0x19] == 'e')))))))) {
            if (uVar5 != 0xffffffffffffffff) goto LAB_100010ba;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= local_1130 - 0x1a);
      }
      local_88 = 0x29;
      recovered_10003060((char *)&local_1168,str_1000387f);
    }
LAB_100010ba:
    _ZdlPv(local_1138);
    if (3 < local_1140) {
      local_88 = 0x2a;
      recovered_10002260(local_1140,(long *)local_1158);
    }
  }
  if (lStack_140 == 0) {
    local_98 = CONCAT44(PF_PART4(local_98, 4),1);
  }
  else {
    local_88 = 0x2b;
    _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(&local_1168,&local_a0,&local_148);
    pcVar9 = (char *)0x0;
    if ((byte)local_1168 == '\0') {
      pcVar9 = str_100038ad;
    }
    local_88 = 0x2c;
    recovered_10003060((char *)&local_1168,pcVar9);
    local_98 = CONCAT44(PF_PART4(local_98, 4),(uint)(byte)local_1168);
    _ZdlPv(local_1138);
    if (3 < local_1140) {
      local_88 = 0x2d;
      recovered_10002260(local_1140,(long *)local_1158);
    }
  }
  if (local_130 == '\x01') {
    do {
      local_88 = 0x2e;
      bVar4 = wm_lua_readline((long)&local_1168,0x1000,str_100038bb,1);
      if (!bVar4) break;
      local_118 = (char *)0x0;
      uStack_110 = 0;
      local_108[0] = 0;
      uVar5 = 0xffffffffffffffff;
      do {
        lVar2 = uVar5 - 0xf;
        uVar5 = uVar5 + 1;
      } while (*(char *)((long)local_1158 + lVar2) != '\0');
      local_88 = 0x2f;
      recovered_10001a20((long *)&local_118,(long)&local_1168,uVar5);
      pcVar9 = local_118;
      if (local_118 == (char *)0x0) {
        pcVar9 = &DAT_10003705;
      }
      if (uStack_110 == 5) {
        if ((((*pcVar9 == '.') && (pcVar9[1] == 'e')) && (pcVar9[2] == 'x')) && (pcVar9[3] == 'i'))
        {
          cVar3 = pcVar9[4];
joined_r0x100012cb:
          if (cVar3 == 't') {
            _ZdlPv(local_118);
            break;
          }
        }
      }
      else if (uStack_110 == 4) {
        if (*pcVar9 == 'q') {
          if (pcVar9[1] == 'u') goto LAB_100012d8;
        }
        else if ((*pcVar9 == 'e') && (pcVar9[1] == 'x')) {
LAB_100012d8:
          if (pcVar9[2] == 'i') {
            cVar3 = pcVar9[3];
            goto joined_r0x100012cb;
          }
        }
      }
      _ZdlPv(local_118);
      local_118 = (char *)0x0;
      uStack_110 = 0;
      local_108[0] = 0;
      uVar5 = 0xffffffffffffffff;
      do {
        lVar2 = uVar5 - 0xf;
        uVar5 = uVar5 + 1;
      } while (*(char *)((long)local_1158 + lVar2) != '\0');
      local_88 = 0x30;
      recovered_10001a20((long *)&local_118,(long)&local_1168,uVar5);
      pcVar9 = local_118;
      if (local_118 == (char *)0x0) {
        pcVar9 = &DAT_10003705;
      }
      if (((uStack_110 == 5) && (*pcVar9 == ':')) &&
         ((pcVar9[1] == 'h' && (((pcVar9[2] == 'e' && (pcVar9[3] == 'l')) && (pcVar9[4] == 'p'))))))
      {
LAB_10001431:
        _ZdlPv(local_118);
        local_88 = 0x32;
        wm_lua_write(((uintptr_t)pf_module_state + 0x5ddU),0xe);
        local_88 = 0x33;
        wm_lua_writeline();
        local_88 = 0x34;
        wm_lua_write(((uintptr_t)pf_module_state + 0x485U),0);
        local_88 = 0x35;
        wm_lua_writeline();
      }
      else {
        local_d0 = (char *)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        uVar5 = 0xffffffffffffffff;
        do {
          lVar2 = uVar5 - 0xf;
          uVar5 = uVar5 + 1;
        } while (*(char *)((long)local_1158 + lVar2) != '\0');
        local_88 = 0x31;
        recovered_10001a20((long *)&local_d0,(long)&local_1168,uVar5);
        pcVar9 = local_d0;
        if (local_d0 == (char *)0x0) {
          pcVar9 = &DAT_10003705;
        }
        if ((((uStack_c8 == 6) && (*pcVar9 == 'h')) &&
            (((pcVar9[1] == 'e' && ((pcVar9[2] == 'l' && (pcVar9[3] == 'p')))) && (pcVar9[4] == '(')
             ))) && (pcVar9[5] == ')')) {
          _ZdlPv(local_d0);
          goto LAB_10001431;
        }
        _ZdlPv(local_d0);
        _ZdlPv(local_118);
        if ((byte)local_1168 != '\0') {
          local_d0 = (char *)0x0;
          uStack_c8 = 0;
          local_c0 = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            lVar2 = uVar5 - 0xf;
            uVar5 = uVar5 + 1;
          } while (*(char *)((long)local_1158 + lVar2) != '\0');
          local_88 = 0x36;
          recovered_10001a20((long *)&local_d0,(long)&local_1168,uVar5);
          local_b8 = (char *)0x0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_88 = 0x37;
          recovered_10001a20((long *)&local_b8,((uintptr_t)pf_module_state + 0x648U),7);
          local_88 = 0x38;
          _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(&local_118,&local_a0,&local_d0,&local_b8);
          _ZdlPv(local_b8);
          _ZdlPv(local_d0);
          local_88 = 0x39;
          recovered_10003060((char *)&local_118,(char *)0x0);
          _ZdlPv(local_e8);
          if (3 < local_f0) {
            local_88 = 0x3a;
            recovered_10002260(local_f0,local_108);
          }
        }
      }
    } while (local_130 != '\0');
  }
  _ZN6winter4ruby6RubyVMD1Ev(&local_a0);
  _ZdlPv(local_148);
  local_88 = 0xffffffff;
  wm_lua_flush_output();
  _Unwind_SjLj_Unregister(&local_90);
  return local_98 & 0xffffffff;
  while (uVar5 = uVar5 + 1, uStack_c8 != uVar5) {
LAB_10000950:
    bVar6 = pcVar9[uVar5];
    bVar1 = str_10003706[uVar5];
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
  pcVar9 = local_b8;
  if (local_b8 == (char *)0x0) {
    pcVar9 = &DAT_10003705;
  }
  local_88 = 5;
  recovered_10001a20((long *)&local_148,(long)pcVar9,uStack_b0);
  goto LAB_10000734;
LAB_10000994:
  local_38 = uStack_c8;
  local_1168 = (void *)0x0;
  uStack_1160 = 0;
  local_1158[0] = 0;
  local_88 = 6;
  recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x48dU),7);
  uVar5 = uStack_1160;
  _ZdlPv(local_1168);
  if (local_38 != uVar5) goto LAB_10000734;
  if (uStack_c8 != 0) {
    pcVar9 = local_d0;
    if (local_d0 == (char *)0x0) {
      pcVar9 = &DAT_10003705;
    }
    uVar5 = 0;
    do {
      bVar6 = pcVar9[uVar5];
      bVar1 = str_1000370d[uVar5];
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
    } while (uStack_c8 != uVar5);
  }
  local_38 = uStack_b0;
  local_1168 = (void *)0x0;
  uStack_1160 = 0;
  local_1158[0] = 0;
  local_88 = 7;
  recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x495U),4);
  uVar5 = uStack_1160;
  _ZdlPv(local_1168);
  if (local_38 == uVar5) {
    cVar3 = '\x01';
    if (uStack_b0 != 0) {
      pcVar9 = local_b8;
      if (local_b8 == (char *)0x0) {
        pcVar9 = &DAT_10003705;
      }
      uVar5 = 0;
      do {
        bVar6 = pcVar9[uVar5];
        bVar1 = (&DAT_10003715)[uVar5];
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
      } while (uStack_b0 != uVar5);
    }
  }
  else {
LAB_10000b47:
    if (uStack_b0 == 1) {
      pcVar9 = local_b8;
      if (local_b8 == (char *)0x0) {
        pcVar9 = &DAT_10003705;
      }
      cVar3 = '\x01';
      if (*pcVar9 == '1') goto LAB_10000cf8;
    }
    local_38 = uStack_b0;
    local_1168 = (void *)0x0;
    uStack_1160 = 0;
    local_1158[0] = 0;
    local_88 = 8;
    recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x49aU),3);
    uVar5 = uStack_1160;
    _ZdlPv(local_1168);
    if (local_38 == uVar5) {
      cVar3 = '\x01';
      if (uStack_b0 != 0) {
        pcVar9 = local_b8;
        if (local_b8 == (char *)0x0) {
          pcVar9 = &DAT_10003705;
        }
        uVar5 = 0;
        do {
          bVar6 = pcVar9[uVar5];
          bVar1 = (&DAT_1000371a)[uVar5];
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
        } while (uStack_b0 != uVar5);
      }
    }
    else {
LAB_10000c3a:
      local_38 = uStack_b0;
      local_1168 = (void *)0x0;
      uStack_1160 = 0;
      local_1158[0] = 0;
      local_88 = 9;
      recovered_10001a20(&local_1168,((uintptr_t)pf_module_state + 0x49eU),2);
      uVar5 = uStack_1160;
      _ZdlPv(local_1168);
      if (local_38 == uVar5) {
        cVar3 = '\x01';
        if (uStack_b0 != 0) {
          pcVar9 = local_b8;
          if (local_b8 == (char *)0x0) {
            pcVar9 = &DAT_10003705;
          }
          uVar5 = 0;
          do {
            bVar6 = pcVar9[uVar5];
            bVar1 = (&DAT_1000371e)[uVar5];
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
          } while (uStack_b0 != uVar5);
        }
      }
      else {
LAB_10000cf6:
        cVar3 = '\0';
      }
    }
  }
LAB_10000cf8:
  local_130 = cVar3;
LAB_10000734:
  _ZdlPv(local_b8);
  _ZdlPv(local_d0);
LAB_10000760:
  _ZdlPv(local_118);
  uVar5 = local_98 + 1;
  if (uVar5 == local_158) goto LAB_10000d03;
  goto LAB_1000077c;
}

#undef DAT_100035cc
#undef DAT_10003705
#undef DAT_10003715
#undef DAT_1000371a
#undef DAT_1000371e
#undef DAT_10004000
#undef LAB_10001895
#undef PTR_recovered_10001cd0_10004040
#undef PTR_recovered_10002470_100040d8
#undef str_10003706
#undef str_1000370d
#undef str_1000387f
#undef str_100038ad
#undef str_100038bb
#undef uStack_1160
#undef local_1168
#undef local_1158
#undef local_1140
#undef local_1138
#undef lStack_140
#undef local_1130
#undef local_160
#undef local_158
#undef local_148
#undef local_138
#undef local_130
#undef local_128
#undef uStack_110
#undef local_120
#undef local_118
#undef local_108
#undef local_f0
#undef local_e8
#undef uStack_c8
#undef local_d0
#undef local_c0
#undef local_b8
#undef uStack_b0
#undef local_a8
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

#undef DAT_100050b0
#define DAT_100050b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e30U)))
#undef _DAT_100050b0
#define _DAT_100050b0 (*(code * *)(((uintptr_t)pf_module_state + 0x1e30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100019e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x84U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_100050b0)();
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

#undef DAT_100050b0
#undef _DAT_100050b0

#define pvStack_50 (*(void * *)(pf_stack_frame + 16))
#define lStack_48 (*(long *)(pf_stack_frame + 24))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

void recovered_10001a10(long *param_1,long param_2)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  __cxa_begin_catch((long)param_1);
  _ZSt9terminatev();
  uVar13 = extraout_RDX;
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
        pvStack_50 = (void *)0x0;
        lStack_48 = 0;
        lStack_40 = 0;
        recovered_10001a20((long *)&pvStack_50,(long)(puVar8 + uVar11),uVar12);
        pvVar2 = (void *)*param_1;
        *param_1 = (long)pvStack_50;
        lVar3 = param_1[1];
        lVar4 = param_1[2];
        param_1[1] = lStack_48;
        param_1[2] = lStack_40;
        pvStack_50 = pvVar2;
        lStack_48 = lVar3;
        lStack_40 = lVar4;
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
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10001c46;
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
        if (uVar11 == uVar12) goto LAB_10001c2f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_10001bc5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_10001c2f;
    }
LAB_10001bc5:
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
LAB_10001c2f:
  puVar8[uVar11] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10001c46:
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
  param_1[1] = extraout_RDX;
  *(undefined1 *)(*param_1 + extraout_RDX) = 0;
  return;
}

#undef pvStack_50
#undef lStack_48
#undef lStack_40

#define lStack_40 (*(long *)(pf_stack_frame + 32))
#define local_48 (*(void * *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

void recovered_10001a20(long *param_1,long param_2,ulong param_3)

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
        recovered_10001a20((long *)&local_48,(long)(puVar8 + uVar11),uVar12);
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
  if (uVar13 <= (ulong)param_1[2]) goto LAB_10001c46;
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
        if (uVar11 == uVar12) goto LAB_10001c2f;
        uVar9 = uVar12;
        if ((uVar11 & 0x1c) == 0) goto LAB_10001bc5;
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar8 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar12 != uVar9);
      if (uVar11 == uVar12) goto LAB_10001c2f;
    }
LAB_10001bc5:
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
LAB_10001c2f:
  puVar8[uVar11] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar8;
  param_1[2] = uVar13;
LAB_10001c46:
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd0
 */

void recovered_10001cd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce0
 */

void recovered_10001ce0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv(param_1);
  return;
}


#undef DAT_10001fd4
#define DAT_10001fd4 (*(uint8_t *)(0x10001fd4U))
#undef DAT_1000365c
#define DAT_1000365c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dcU)))
#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef PTR_DAT_10004010
#define PTR_DAT_10004010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd90U)))
#undef PTR_recovered_10002130_100040b0
#define PTR_recovered_10002130_100040b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe30U)))
#define auStack_108 (*(undefined1 (*)[264])(pf_stack_frame + 24))
#define uStack_f8 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_d7 (*(undefined7 *)(pf_stack_frame + 73))
#define local_100 (*(void * *)(pf_stack_frame + 32))
#define local_f0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_e8 (*(char (*)[232])(pf_stack_frame + 56))
#define local_e0 (*(undefined1 *)(pf_stack_frame + 64))
#define local_d8 (*(undefined1 *)(pf_stack_frame + 72))
#define local_d0 (*(ulong *)(pf_stack_frame + 80))
#define local_c0 (*(ulong *)(pf_stack_frame + 96))
#define local_b8 (*(undefined1 * *)(pf_stack_frame + 104))
#define local_b0 (*(ulong *)(pf_stack_frame + 112))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 128))
#define local_98 (*(undefined4 *)(pf_stack_frame + 136))
#define local_80 (*(undefined8 *)(pf_stack_frame + 160))
#define local_78 (*(undefined * *)(pf_stack_frame + 168))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 176))
#define local_68 (*(undefined * *)(pf_stack_frame + 184))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 192))
#define local_48 (*(undefined8 * *)(pf_stack_frame + 216))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf0
 */

undefined1 *
recovered_10001cf0(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 288) + -8);
  local_60 = auStack_108;
  lVar2 = param_4[1];
  local_80 = DAT_10004000;
  local_78 = &DAT_1000365c;
  local_68 = &DAT_10001fd4;
  local_40 = param_1;
  _Unwind_SjLj_Register(&local_a0);
  if (lVar2 == 1) {
    local_98 = 0xffffffff;
    pcVar4 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_100 = (void *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    puVar5 = *(undefined1 **)pcVar4;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_10003705;
    }
    local_98 = 0xffffffff;
    recovered_10001a20((long *)&local_100,(long)puVar5,*(ulong *)(pcVar4 + 8));
    local_98 = 2;
    _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(local_e8,param_3,&local_100);
    if (local_e8[0] != '\0') {
      *local_40 = local_e0;
      *(ulong *)(local_40 + 0x20) = local_c0;
      if ((local_c0 != 0) && (local_c0 - 1 < 7)) {
        plVar1 = (long *)(local_40 + 8);
        switch((uintptr_t)(local_c0)) {
        case 1:
          *plVar1 = CONCAT71(uStack_d7,local_d8);
          break;
        case 2:
          *plVar1 = CONCAT71(uStack_d7,local_d8);
          break;
        case 3:
          *(undefined1 *)plVar1 = local_d8;
          break;
        case 4:
          *(undefined8 *)(local_40 + 8) = 0;
          *(undefined8 *)(local_40 + 0x10) = 0;
          *(undefined8 *)(local_40 + 0x18) = 0;
          puVar5 = &DAT_10003705;
          if ((undefined1 *)CONCAT71(uStack_d7,local_d8) != (undefined1 *)0x0) {
            puVar5 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
          }
          local_98 = 5;
          recovered_10001a20(plVar1,(long)puVar5,local_d0);
          break;
        default:
          lVar2 = CONCAT71(uStack_d7,local_d8);
          *(long *)(local_40 + 8) = lVar2;
          *(ulong *)(local_40 + 0x10) = local_d0;
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
          }
        }
      }
      puVar5 = local_40;
      _ZdlPv(local_b8);
      if (3 < local_c0) {
        local_98 = 6;
        recovered_10002260(local_c0,(long *)&local_d8);
        puVar5 = local_40;
      }
      _ZdlPv(local_100);
      _Unwind_SjLj_Unregister(&local_a0);
      return puVar5;
    }
  }
  else {
    local_48 = (undefined8 *)__cxa_allocate_exception(0x20);
    local_98 = 1;
    recovered_100020d0(local_48,((uintptr_t)pf_module_state + 0x4b1U));
    local_98 = 0xffffffff;
    __cxa_throw((long)local_48,PTR_DAT_10004010,recovered_10002130);
  }
  local_38 = (undefined8 *)__cxa_allocate_exception(0x20);
  *local_38 = &PTR_recovered_10002130_100040b0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  puVar5 = &DAT_10003705;
  if (local_b8 != (undefined1 *)0x0) {
    puVar5 = local_b8;
  }
  local_98 = 3;
  recovered_10001a20(local_38 + 1,(long)puVar5,local_b0);
  local_98 = 4;
  __cxa_throw((long)local_38,PTR_DAT_10004010,recovered_10002130);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

#undef DAT_10001fd4
#undef DAT_1000365c
#undef DAT_10003705
#undef DAT_10004000
#undef PTR_DAT_10004010
#undef PTR_recovered_10002130_100040b0
#undef auStack_108
#undef uStack_f8
#undef uStack_d7
#undef local_100
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c0
#undef local_b8
#undef local_b0
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

#undef PTR_recovered_10001cd0_10004040
#define PTR_recovered_10001cd0_10004040 (*(void * *)(((uintptr_t)pf_module_state + 0xdc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

void recovered_100020b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = _Znwm(0x10);
  *puVar1 = &PTR_recovered_10001cd0_10004040;
  return;
}

#undef PTR_recovered_10001cd0_10004040

#undef PTR_recovered_10002130_100040b0
#define PTR_recovered_10002130_100040b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d0
 */

void recovered_100020d0(undefined8 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  ulong uVar3;

  *param_1 = &PTR_recovered_10002130_100040b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == 0) {
    recovered_10001a20(param_1 + 1,0,0);
    return;
  }
  uVar3 = 0xffffffffffffffff;
  do {
    uVar1 = uVar3 + 1;
    pcVar2 = (char *)(param_2 + 1 + uVar3);
    uVar3 = uVar1;
  } while (*pcVar2 != '\0');
  recovered_10001a20(param_1 + 1,param_2,uVar1);
  return;
}

#undef PTR_recovered_10002130_100040b0

#undef PTR_recovered_10002130_100040b0
#define PTR_recovered_10002130_100040b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002130
 */

void recovered_10002130(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10002130_100040b0;
  _ZdlPv((void *)param_1[1]);
  return;
}

#undef PTR_recovered_10002130_100040b0

#undef DAT_10003674
#define DAT_10003674 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f4U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_100021d7
#define LAB_100021d7 (*(uint8_t *)(0x100021d7U))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined4 *)(pf_stack_frame + 32))
#define local_68 (*(undefined8 *)(pf_stack_frame + 56))
#define local_60 (*(undefined * *)(pf_stack_frame + 64))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 80))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002150
 */

void recovered_10002150(long param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  _ZdlPv(*(void **)(param_1 + 0x30));
  local_48 = (undefined1 *)&local_88;
  uVar1 = *(ulong *)(param_1 + 0x28);
  local_68 = DAT_10004000;
  local_60 = &DAT_10003674;
  local_50 = &LAB_100021d7;
  local_58 = auStack_40 + 0x38;
  _Unwind_SjLj_Register(&local_88);
  if (3 < uVar1) {
    local_80 = 1;
    recovered_10002260(uVar1,(long *)(param_1 + 0x10));
  }
  _Unwind_SjLj_Unregister(&local_88);
  return;
}

#undef DAT_10003674
#undef DAT_10004000
#undef LAB_100021d7
#undef local_88
#undef local_80
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef auStack_40
#undef local_48

#undef PTR_recovered_10002130_100040b0
#define PTR_recovered_10002130_100040b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002210
 */

void recovered_10002210(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = &PTR_recovered_10002130_100040b0;
  _ZdlPv((void *)param_1[1]);
  _ZdlPv(param_1);
  return;
}

#undef PTR_recovered_10002130_100040b0

#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002240
 */

undefined1 * recovered_10002240(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = &DAT_10003705;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}

#undef DAT_10003705

#undef DAT_10003684
#define DAT_10003684 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x404U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_1000232d
#define LAB_1000232d (*(uint8_t *)(0x1000232dU))
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
 * Address: 0x10002260
 */

void recovered_10002260(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10004000;
  local_68 = &DAT_10003684;
  local_58 = &LAB_1000232d;
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
    recovered_10002360(param_1,param_2);
  }
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_10003684
#undef DAT_10004000
#undef LAB_1000232d
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef auStack_98
#undef local_50
#undef local_38

#undef DAT_10003694
#define DAT_10003694 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x414U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_10002433
#define LAB_10002433 (*(uint8_t *)(0x10002433U))
#define auStack_98 (*(undefined1 (*)[152])(pf_stack_frame + 24))
#define local_90 (*(undefined8 *)(pf_stack_frame + 32))
#define local_88 (*(undefined4 *)(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 64))
#define local_68 (*(undefined * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_50 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_38 (*(long * *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002360
 */

void recovered_10002360(long param_1,long *param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long *plVar2;

  local_60 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_50 = auStack_98;
  local_70 = DAT_10004000;
  local_68 = &DAT_10003694;
  local_58 = &LAB_10002433;
  _Unwind_SjLj_Register(&local_90);
  if (param_1 == 7) {
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) goto LAB_10002418;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 2;
      local_38 = param_2;
      (**(code **)(*plVar1 + 0x10))();
      goto LAB_100023fe;
    }
  }
  else {
    if ((param_1 != 6) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) goto LAB_10002418;
    plVar2 = plVar1 + 1;
    *plVar2 = *plVar2 + -1;
    if (*plVar2 == 0) {
      local_88 = 1;
      local_38 = param_2;
      (**(code **)(*plVar1 + 0x10))();
LAB_100023fe:
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
LAB_10002418:
  _Unwind_SjLj_Unregister(&local_90);
  return;
}

#undef DAT_10003694
#undef DAT_10004000
#undef LAB_10002433
#undef auStack_98
#undef local_90
#undef local_88
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002470
 */

void recovered_10002470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002480
 */

void recovered_10002480(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  _ZdlPv(param_1);
  return;
}


#undef DAT_100028ef
#define DAT_100028ef (*(uint8_t *)(0x100028efU))
#undef DAT_100036a4
#define DAT_100036a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x424U)))
#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef PTR_DAT_10004010
#define PTR_DAT_10004010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd90U)))
#undef PTR_recovered_10002130_100040b0
#define PTR_recovered_10002130_100040b0 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xe30U)))
#define local_80 (*(undefined1 * *)(pf_stack_frame + 208))
#define local_78 (*(undefined * *)(pf_stack_frame + 216))
#define uStack_ef (*(undefined7 *)(pf_stack_frame + 97))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 224))
#define local_58 (*(undefined8 * *)(pf_stack_frame + 248))
#define local_50 (*(void * *)(pf_stack_frame + 256))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_40 (*(undefined8 * *)(pf_stack_frame + 272))
#define local_38 (*(undefined8 * *)(pf_stack_frame + 280))
#define local_138 (*(void * *)(pf_stack_frame + 24))
#define local_128 (*(undefined8 *)(pf_stack_frame + 40))
#define local_120 (*(void * *)(pf_stack_frame + 48))
#define local_118 (*(undefined1 * *)(pf_stack_frame + 56))
#define local_108 (*(undefined8 *)(pf_stack_frame + 72))
#define local_100 (*(char *)(pf_stack_frame + 80))
#define local_f8 (*(undefined1 *)(pf_stack_frame + 88))
#define local_f0 (*(undefined1 *)(pf_stack_frame + 96))
#define uStack_130 (*(undefined8 *)(pf_stack_frame + 32))
#define local_e8 (*(ulong *)(pf_stack_frame + 104))
#define local_d8 (*(ulong *)(pf_stack_frame + 120))
#define local_d0 (*(undefined1 * *)(pf_stack_frame + 128))
#define local_c8 (*(ulong *)(pf_stack_frame + 136))
#define uStack_110 (*(undefined8 *)(pf_stack_frame + 64))
#define local_b8 (*(ulong *)(pf_stack_frame + 152))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 160))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 168))
#define uStack_ff (*(undefined7 *)(pf_stack_frame + 81))
#define local_90 (*(undefined8 *)(pf_stack_frame + 192))
#define local_88 (*(undefined * *)(pf_stack_frame + 200))
#define uStack_f7 (*(undefined7 *)(pf_stack_frame + 89))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002490
 */

undefined1 *
recovered_10002490(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined1 *puVar6;

  local_80 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 336) + -8);
  local_70 = (undefined1 *)&local_138;
  lVar2 = param_4[1];
  local_90 = DAT_10004000;
  local_88 = &DAT_100036a4;
  local_78 = &DAT_100028ef;
  local_120 = param_3;
  local_48 = param_1;
  _Unwind_SjLj_Register(&local_b0);
  if (lVar2 == 1) {
    local_a8 = 0xffffffff;
    pcVar4 = _ZNK6winter4ruby9RubyValue8asStringEv((char *)*param_4);
    local_118 = (undefined1 *)0x0;
    uStack_110 = 0;
    local_108 = 0;
    puVar6 = *(undefined1 **)pcVar4;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_10003705;
    }
    local_a8 = 0xffffffff;
    recovered_10001a20((long *)&local_118,(long)puVar6,*(ulong *)(pcVar4 + 8));
    local_50 = (void *)0x0;
    local_b8 = 0;
    puVar6 = local_118;
    if (local_118 == (undefined1 *)0x0) {
      puVar6 = &DAT_10003705;
    }
    local_a8 = 2;
    uVar5 = wmfs_read_entire_file((long)puVar6,&local_50,&local_b8);
    if ((char)uVar5 != '\0') {
      local_138 = (void *)0x0;
      uStack_130 = 0;
      local_128 = 0;
      if (local_b8 != 0 && local_50 != (void *)0x0) {
        local_a8 = 6;
        recovered_10001a20((long *)&local_138,(long)local_50,local_b8);
      }
      local_a8 = 7;
      free(local_50);
      local_a8 = 8;
      _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(&local_100,local_120,&local_138,&local_118);
      if (local_100 != '\0') {
        *local_48 = local_f8;
        *(ulong *)(local_48 + 0x20) = local_d8;
        if ((local_d8 != 0) && (local_d8 - 1 < 7)) {
          plVar1 = (long *)(local_48 + 8);
          switch((uintptr_t)(local_d8)) {
          case 1:
            *plVar1 = CONCAT71(uStack_ef,local_f0);
            break;
          case 2:
            *plVar1 = CONCAT71(uStack_ef,local_f0);
            break;
          case 3:
            *(undefined1 *)plVar1 = local_f0;
            break;
          case 4:
            *(undefined8 *)(local_48 + 8) = 0;
            *(undefined8 *)(local_48 + 0x10) = 0;
            *(undefined8 *)(local_48 + 0x18) = 0;
            puVar6 = &DAT_10003705;
            if ((undefined1 *)CONCAT71(uStack_ef,local_f0) != (undefined1 *)0x0) {
              puVar6 = (undefined1 *)CONCAT71(uStack_ef,local_f0);
            }
            local_a8 = 0xb;
            recovered_10001a20(plVar1,(long)puVar6,local_e8);
            break;
          default:
            lVar2 = CONCAT71(uStack_ef,local_f0);
            *(long *)(local_48 + 8) = lVar2;
            *(ulong *)(local_48 + 0x10) = local_e8;
            if (lVar2 != 0) {
              *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
            }
          }
        }
        _ZdlPv(local_d0);
        if (3 < local_d8) {
          local_a8 = 0xc;
          recovered_10002260(local_d8,(long *)&local_f0);
        }
        _ZdlPv(local_138);
        _ZdlPv(local_118);
        _Unwind_SjLj_Unregister(&local_b0);
        return local_48;
      }
      local_40 = (undefined8 *)__cxa_allocate_exception(0x20);
      *local_40 = &PTR_recovered_10002130_100040b0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      puVar6 = &DAT_10003705;
      if (local_d0 != (undefined1 *)0x0) {
        puVar6 = local_d0;
      }
      local_a8 = 9;
      recovered_10001a20(local_40 + 1,(long)puVar6,local_c8);
      local_a8 = 10;
      __cxa_throw((long)local_40,PTR_DAT_10004010,recovered_10002130);
      goto LAB_100028fa;
    }
  }
  else {
    local_58 = (undefined8 *)__cxa_allocate_exception(0x20);
    local_a8 = 1;
    recovered_100020d0(local_58,((uintptr_t)pf_module_state + 0x4c9U));
    local_a8 = 0xffffffff;
    __cxa_throw((long)local_58,PTR_DAT_10004010,recovered_10002130);
  }
  local_38 = (undefined8 *)__cxa_allocate_exception(0x20);
  local_a8 = 3;
  recovered_10002a70((long *)&local_100,((uintptr_t)pf_module_state + 0x4e3U),&local_118);
  *local_38 = &PTR_recovered_10002130_100040b0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  puVar6 = &DAT_10003705;
  if ((undefined1 *)CONCAT71(uStack_ff,local_100) != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)CONCAT71(uStack_ff,local_100);
  }
  local_a8 = 4;
  recovered_10001a20(local_38 + 1,(long)puVar6,CONCAT71(uStack_f7,local_f8));
  local_a8 = 5;
  __cxa_throw((long)local_38,PTR_DAT_10004010,recovered_10002130);
LAB_100028fa:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

#undef DAT_100028ef
#undef DAT_100036a4
#undef DAT_10003705
#undef DAT_10004000
#undef PTR_DAT_10004010
#undef PTR_recovered_10002130_100040b0
#undef local_80
#undef local_78
#undef uStack_ef
#undef local_70
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_138
#undef local_128
#undef local_120
#undef local_118
#undef local_108
#undef local_100
#undef local_f8
#undef local_f0
#undef uStack_130
#undef local_e8
#undef local_d8
#undef local_d0
#undef local_c8
#undef uStack_110
#undef local_b8
#undef local_b0
#undef local_a8
#undef uStack_ff
#undef local_90
#undef local_88
#undef uStack_f7

#undef PTR_recovered_10002470_100040d8
#define PTR_recovered_10002470_100040d8 (*(void * *)(((uintptr_t)pf_module_state + 0xe58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a50
 */

void recovered_10002a50(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = _Znwm(0x10);
  *puVar1 = &PTR_recovered_10002470_100040d8;
  return;
}

#undef PTR_recovered_10002470_100040d8

#undef DAT_100036c8
#define DAT_100036c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x448U)))
#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_10002b70
#define LAB_10002b70 (*(uint8_t *)(0x10002b70U))
#define local_98 (*(undefined8 *)(pf_stack_frame + 24))
#define local_90 (*(undefined4 *)(pf_stack_frame + 32))
#define local_78 (*(undefined8 *)(pf_stack_frame + 56))
#define local_70 (*(undefined * *)(pf_stack_frame + 64))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 72))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_58 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_40 (*(long * *)(pf_stack_frame + 112))
#define local_38 (*(undefined8 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

long * recovered_10002a70(long *param_1,long param_2,undefined8 *param_3)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;

  local_68 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 176) + -8);
  local_58 = (undefined1 *)&local_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_78 = DAT_10004000;
  local_70 = &DAT_100036c8;
  local_60 = &LAB_10002b70;
  local_40 = param_1;
  local_38 = param_1;
  _Unwind_SjLj_Register(&local_98);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar3 = uVar2 + 1;
      pcVar1 = (char *)(param_2 + 1 + uVar2);
      uVar2 = uVar3;
    } while (*pcVar1 != '\0');
  }
  local_90 = 0xffffffff;
  recovered_10001a20(local_38,param_2,uVar3);
  puVar4 = &DAT_10003705;
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_3;
  }
  local_90 = 1;
  recovered_10002bc0(local_38,(long)puVar4,param_3[1]);
  _Unwind_SjLj_Unregister(&local_98);
  return local_40;
}

#undef DAT_100036c8
#undef DAT_10003705
#undef DAT_10004000
#undef LAB_10002b70
#undef local_98
#undef local_90
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc0
 */

long * recovered_10002bc0(long *param_1,long param_2,ulong param_3)

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
LAB_10002c00:
    if (uVar13 != uVar6) goto code_r0x10002c05;
    uVar6 = uVar15 - uVar13;
    if (param_3 <= uVar15 - uVar13) {
      uVar6 = param_3;
    }
    param_3 = uVar6;
    uVar6 = uVar15 + param_3;
    puVar8 = puVar7;
    if (uVar6 <= (ulong)param_1[2]) goto LAB_10002f90;
    puVar8 = _Znwm(uVar6 + 1);
    *puVar8 = 0;
    pvVar2 = (void *)*param_1;
    uVar9 = param_1[1];
    if (uVar9 == 0) goto LAB_10002f6f;
    uVar11 = 0;
    if ((uVar9 < 4) || ((ulong)((long)puVar8 - (long)pvVar2) < 0x20)) goto LAB_10002f05;
    if (uVar9 < 0x20) {
      uVar10 = 0;
      goto LAB_10002eda;
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
LAB_10002eda:
        uVar11 = uVar9 & 0xfffffffffffffffc;
        do {
          *(undefined4 *)(puVar8 + uVar10) = *(undefined4 *)((long)pvVar2 + uVar10);
          uVar10 = uVar10 + 4;
        } while (uVar11 != uVar10);
        if (uVar9 == uVar11) goto LAB_10002f6f;
      }
LAB_10002f05:
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
LAB_10002f6f:
    puVar8[uVar9] = 0;
    _ZdlPv(pvVar2);
    *param_1 = (long)puVar8;
    param_1[2] = uVar6;
LAB_10002f90:
    if (param_3 == 0) goto LAB_10002e7e;
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
    goto LAB_10002e7b;
  }
  uVar15 = param_1[1];
LAB_10002c13:
  uVar15 = uVar15 + param_3;
  if (uVar15 <= (ulong)param_1[2]) goto LAB_10002dd6;
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
        if (uVar6 == uVar13) goto LAB_10002dbf;
        uVar9 = uVar13;
        if ((uVar6 & 0x1c) == 0) goto LAB_10002d55;
      }
      uVar13 = uVar6 & 0xfffffffffffffffc;
      do {
        *(undefined4 *)(puVar7 + uVar9) = *(undefined4 *)((long)pvVar2 + uVar9);
        uVar9 = uVar9 + 4;
      } while (uVar13 != uVar9);
      if (uVar6 == uVar13) goto LAB_10002dbf;
    }
LAB_10002d55:
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
LAB_10002dbf:
  puVar7[uVar6] = 0;
  _ZdlPv(pvVar2);
  *param_1 = (long)puVar7;
  param_1[2] = uVar15;
LAB_10002dd6:
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
LAB_10002e7b:
  puVar8 = (undefined1 *)*param_1;
LAB_10002e7e:
  lVar14 = param_3 + param_1[1];
  param_1[1] = lVar14;
  puVar8[lVar14] = 0;
  return param_1;
code_r0x10002c05:
  uVar6 = uVar6 + 1;
  if (uVar15 < uVar6) goto LAB_10002c13;
  goto LAB_10002c00;
}


#undef DAT_100036d0
#define DAT_100036d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x450U)))
#undef DAT_10003705
#define DAT_10003705 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x485U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef LAB_10003226
#define LAB_10003226 (*(uint8_t *)(0x10003226U))
#undef str_10003891
#define str_10003891 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x611U)))
#define local_98 (*(undefined4 *)(pf_stack_frame + 40))
#define local_80 (*(undefined8 *)(pf_stack_frame + 64))
#define local_78 (*(undefined * *)(pf_stack_frame + 72))
#define local_70 (*(undefined1 * *)(pf_stack_frame + 80))
#define local_68 (*(undefined1 * *)(pf_stack_frame + 88))
#define local_60 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 120))
#define local_38 (*(undefined8 *)(pf_stack_frame + 136))
#define lStack_40 (*(long *)(pf_stack_frame + 128))
#define auStack_a8 (*(undefined1 (*)[168])(pf_stack_frame + 24))
#define local_a0 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

void recovered_10003060(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *puVar6;

  local_70 = (undefined1 *)((long)(uintptr_t)(pf_stack_frame + 192) + -8);
  local_60 = auStack_a8;
  cVar1 = *param_1;
  local_80 = DAT_10004000;
  local_78 = &DAT_100036d0;
  local_68 = &LAB_10003226;
  _Unwind_SjLj_Register(&local_a0);
  if (cVar1 == '\x01') {
    if (param_1[8] == '\0') goto LAB_1000320b;
    local_98 = 0xffffffff;
    _ZNK6winter4ruby9RubyValue8toStringEv(&local_48,param_1 + 8);
    puVar6 = &DAT_10003705;
    if (local_48 != (undefined1 *)0x0) {
      puVar6 = local_48;
    }
    local_98 = 1;
    wm_lua_write((long)puVar6,lStack_40);
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
      wm_lua_write((long)param_2,lVar4);
      local_98 = 0xffffffff;
      wm_lua_write(((uintptr_t)pf_module_state + 0x60eU),2);
    }
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (uVar3 == 0) {
      uVar3 = 0x1b;
      pcVar5 = str_10003891;
    }
    else {
      pcVar5 = &DAT_10003705;
      if (*(char **)(param_1 + 0x30) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 0x30);
      }
    }
    local_38 = 0;
    lStack_40 = 0;
    local_48 = (undefined1 *)0x0;
    local_98 = 0xffffffff;
    recovered_10001a20((long *)&local_48,(long)pcVar5,uVar3);
    puVar6 = &DAT_10003705;
    if (local_48 != (undefined1 *)0x0) {
      puVar6 = local_48;
    }
    local_98 = 3;
    wm_lua_write((long)puVar6,lStack_40);
    local_98 = 4;
    wm_lua_writeline();
  }
  _ZdlPv(local_48);
LAB_1000320b:
  _Unwind_SjLj_Unregister(&local_a0);
  return;
}

#undef DAT_100036d0
#undef DAT_10003705
#undef DAT_10004000
#undef LAB_10003226
#undef str_10003891
#undef local_98
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_48
#undef local_38
#undef lStack_40
#undef auStack_a8
#undef local_a0
