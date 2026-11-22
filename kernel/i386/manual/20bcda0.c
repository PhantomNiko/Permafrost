/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148044 (*(uint32_t volatile *)(0x2148044U))
#define DAT_0214804c (*(uint32_t volatile *)(0x214804cU))
#define DAT_0214820c (*(uint32_t volatile *)(0x214820cU))
#define DAT_02148210 (*(uint32_t volatile *)(0x2148210U))
#define DAT_0214821c (*(uint32_t volatile *)(0x214821cU))
#define DAT_02148224 (*(uint32_t volatile *)(0x2148224U))
#define local_814 (*(undefined1 (*)[6])(frame + 28))
#define local_80e (*(undefined1 (*)[6])(frame + 34))
#define local_808 (*(undefined2 *)(frame + 40))
#define local_806 (*(undefined1 (*)[20])(frame + 42))
#define local_7f2 (*(undefined1 *)(frame + 62))
#define local_7f1 (*(undefined1 *)(frame + 63))
#define local_7f0 (*(undefined1 *)(frame + 64))
#define local_7ef (*(undefined1 *)(frame + 65))
#define local_7ee (*(undefined1 *)(frame + 66))
#define local_7ed (*(undefined1 *)(frame + 67))
#define local_7ec (*(undefined2 *)(frame + 68))
#define local_7ea (*(undefined1 (*)[2006])(frame + 70))
#define local_14 (*(uint *)(frame + 2076))


bool recovered_20bcda0(int in_ECX,void *in_EDX,uint param_3,uint param_4,undefined2 param_5,
                      undefined2 param_6,void *param_7,uint param_8)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ushort uVar9;
  uint uVar10;
  bool bVar11;

  if (in_EDX == (void *)0x0 || in_ECX == 0) {
    return false;
  }
  local_14 = param_8 & 0xffff;
  bVar11 = false;
  if ((local_14 < 0x7d7) && (param_7 != (void *)0x0 || (short)param_8 == 0)) {
    recovered_2001b70(local_814,in_EDX,6);
    recovered_2001b70(local_80e,(void *)(in_ECX + 2),6);
    local_808 = 8;
    uVar6 = recovered_20081a0();
    uVar10 = local_14;
    uVar5 = *(ushort *)(in_ECX + 0x20);
    if (*(ushort *)(in_ECX + 0x20) == 0) {
      if ((ushort)uVar6 < 2) {
        uVar5 = 1;
      }
      else {
        uVar5 = (ushort)uVar6;
      }
    }
    uVar9 = uVar5 + 1;
    if (uVar9 == 0) {
      uVar9 = uVar5 + 2;
    }
    *(ushort *)(in_ECX + 0x20) = uVar9;
    recovered_20a2200(local_806,param_8 + 0x1c & 0xffff,uVar9,0x11,param_3,param_4);
    local_7f2 = (undefined1)((ushort)param_5 >> 8);
    local_7f1 = (undefined1)param_5;
    local_7f0 = (undefined1)((ushort)param_6 >> 8);
    local_7ef = (undefined1)param_6;
    local_7ee = (undefined1)(param_8 + 8 >> 8);
    local_7ed = (undefined1)(param_8 + 8);
    local_7ec = 0;
    if ((short)param_8 != 0) {
      recovered_2001b70(local_7ea,param_7,uVar10);
    }
    recovered_2026f10();
    cVar1 = DAT_02148040;
    if ((cVar1 == '\x01') && (pcVar2 = (code *)DAT_0214804c, pcVar2 != (code *)0x0)) {
      uVar10 = uVar10 + 0x2a;
      uVar6 = 1;
      while( true ) {
        iVar7 = __atomic_exchange_n(&(DAT_02148044),1,__ATOMIC_SEQ_CST);
        if (iVar7 == 0) break;
        do {
          iVar7 = DAT_02148044;
        } while (iVar7 != 0);
      }
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      iVar7 = (*pcVar2)(local_814,uVar10);
      if (iVar7 == 0) {
        puVar8 = &DAT_02148224;
      }
      else {
        uVar6 = DAT_0214820c;
        uVar3 = DAT_0214820c;
        iVar4 = DAT_0214820c;
        DAT_0214820c = iVar4 + 1;
        uVar3 = DAT_0214820c;
        uVar3 = DAT_0214820c;
        uVar3 = DAT_0214820c;
        uVar3 = DAT_02148210;
        uVar3 = DAT_02148210;
        iVar4 = DAT_02148210;
        DAT_02148210 = iVar4 + (uint)(0xfffffffe < uVar6);
        uVar3 = DAT_02148210;
        uVar3 = DAT_02148210;
        uVar3 = DAT_02148210;
        puVar8 = &DAT_0214821c;
        uVar6 = uVar10;
      }
      uVar10 = *puVar8;
      *puVar8 = *puVar8 + uVar6;
      puVar8[1] = puVar8[1] + (uint)CARRY4(uVar10,uVar6);
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_02148044 = 0;
      bVar11 = iVar7 != 0;
    }
    else {
      bVar11 = false;
    }
  }
  return bVar11;
}
#undef DAT_02148040
#undef DAT_02148044
#undef DAT_0214804c
#undef DAT_0214820c
#undef DAT_02148210
#undef DAT_0214821c
#undef DAT_02148224
#undef local_814
#undef local_80e
#undef local_808
#undef local_806
#undef local_7f2
#undef local_7f1
#undef local_7f0
#undef local_7ef
#undef local_7ee
#undef local_7ed
#undef local_7ec
#undef local_7ea
#undef local_14
