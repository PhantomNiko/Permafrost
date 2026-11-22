/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c4df3 (*(uint8_t *)(0x20c4df3U))
#define DAT_020c4df9 (*(uint8_t *)(0x20c4df9U))
#define DAT_02148040 (*(uint8_t volatile *)(0x2148040U))
#define DAT_02148044 (*(uint32_t volatile *)(0x2148044U))
#define DAT_0214804c (*(uint32_t volatile *)(0x214804cU))
#define DAT_0214820c (*(uint32_t volatile *)(0x214820cU))
#define DAT_02148210 (*(uint32_t volatile *)(0x2148210U))
#define DAT_0214821c (*(uint32_t volatile *)(0x214821cU))
#define DAT_02148220 (*(uint32_t volatile *)(0x2148220U))
#define DAT_02148224 (*(uint32_t volatile *)(0x2148224U))
#define DAT_02148228 (*(uint32_t volatile *)(0x2148228U))
#define str_020d0931 (*(char (*)[1])(0x20d0931U))
#define str_020d0941 (*(char (*)[1])(0x20d0941U))
#define str_020d094d (*(char (*)[1])(0x20d094dU))
#define str_020d0966 (*(char (*)[1])(0x20d0966U))
#define local_864 (*(undefined1 (*)[12])(frame + 44))
#define local_858 (*(ushort *)(frame + 56))
#define local_856 (*(ushort *)(frame + 58))
#define local_854 (*(ushort *)(frame + 60))
#define local_852 (*(char *)(frame + 62))
#define local_851 (*(char *)(frame + 63))
#define local_850 (*(ushort *)(frame + 64))
#define local_84e (*(undefined1 (*)[6])(frame + 66))
#define local_848 (*(uint *)(frame + 72))
#define local_83e (*(uint *)(frame + 82))
#define local_64 (*(uint *)(frame + 2092))
#define local_5e (*(undefined1 (*)[6])(frame + 2098))
#define local_58 (*(undefined4 *)(frame + 2104))
#define local_54 (*(undefined4 *)(frame + 2108))
#define local_50 (*(undefined2 *)(frame + 2112))
#define local_4e (*(undefined1 (*)[6])(frame + 2114))
#define local_48 (*(uint *)(frame + 2120))
#define local_44 (*(undefined1 (*)[6])(frame + 2124))
#define local_3e (*(undefined1 *)(frame + 2130))
#define local_3d (*(undefined1 *)(frame + 2131))
#define local_3c (*(undefined1 *)(frame + 2132))
#define local_3b (*(undefined1 *)(frame + 2133))
#define local_28 (*(int *)(frame + 2152))
#define local_24 (*(void * *)(frame + 2156))
#define local_20 (*(uint *)(frame + 2160))
#define local_1c (*(uint *)(frame + 2164))
#define local_18 (*(uint *)(frame + 2168))
#define format (*(char * *)(frame + 28))
#define local_14 (*(int *)(frame + 2172))


undefined4 recovered_20a1d50(int in_ECX,uint in_EDX,char *param_3,char *param_4)

{
  unsigned char frame[2224] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  void *data;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX = 0;
  int iVar7;

  if (in_ECX == 0 || in_EDX == 0) {
    format = str_020d094d;
  }
  else {
    if (in_EDX == 0xffffffff) {
      in_EDX = 0xffffffff;
    }
    else if (((*(uint *)(in_ECX + 0xc) == 0) ||
             (((*(uint *)(in_ECX + 8) ^ in_EDX) & *(uint *)(in_ECX + 0xc)) != 0)) &&
            (in_EDX = *(uint *)(in_ECX + 0x10), in_EDX == 0)) {
      format = str_020d0966;
      goto LAB_020a20ad;
    }
    if (in_EDX == *(uint *)(in_ECX + 8)) {
      uVar6 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (param_3 == (char *)0x0) {
        return uVar6;
      }
      recovered_2001b70(param_3,(void *)(in_ECX + 2),6);
      return uVar6;
    }
    local_24 = (void *)(in_ECX + 2);
    local_20 = in_EDX >> 0x18;
    local_1c = in_EDX >> 0x10;
    iVar3 = 0;
    local_18 = in_EDX;
    local_14 = in_ECX;
    do {
      local_28 = iVar3;
      uVar4 = recovered_20081a0();
      recovered_2001e00(&local_64,0,0x3c);
      recovered_2001b70(&local_64,&DAT_020c4df3,6);
      data = local_24;
      recovered_2001b70(local_5e,local_24,6);
      local_58 = 0x1000608;
      local_54 = 0x4060008;
      local_50 = 0x100;
      recovered_2001b70(local_4e,data,6);
      uVar5 = *(uint *)(local_14 + 8);
      local_48 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      recovered_2001b70(local_44,&DAT_020c4df9,6);
      local_3e = (undefined1)local_20;
      local_3d = (undefined1)local_1c;
      local_3c = (undefined1)(local_18 >> 8);
      local_3b = (undefined1)local_18;
      recovered_2026f10();
      cVar1 = DAT_02148040;
      if ((cVar1 != '\x01') || (pcVar2 = (code *)DAT_0214804c, pcVar2 == (code *)0x0)) {
LAB_020a2093:
        format = str_020d0931;
        goto LAB_020a20ad;
      }
      iVar3 = __atomic_exchange_n(&(DAT_02148044),1,__ATOMIC_SEQ_CST);
      while (iVar3 != 0) {
        do {
          iVar3 = DAT_02148044;
        } while (iVar3 != 0);
        iVar3 = __atomic_exchange_n(&(DAT_02148044),1,__ATOMIC_SEQ_CST);
      }
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      iVar3 = (*pcVar2)(&local_64,0x3c);
      if (iVar3 == 0) {
        uVar5 = DAT_02148224;
        uVar6 = DAT_02148224;
        iVar3 = DAT_02148224;
        DAT_02148224 = iVar3 + 1;
        uVar6 = DAT_02148224;
        uVar6 = DAT_02148224;
        uVar6 = DAT_02148224;
        uVar6 = DAT_02148228;
        uVar6 = DAT_02148228;
        iVar3 = DAT_02148228;
        DAT_02148228 = iVar3 + (uint)(0xfffffffe < uVar5);
        uVar6 = DAT_02148228;
        uVar6 = DAT_02148228;
        uVar6 = DAT_02148228;
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_02148044 = 0;
        goto LAB_020a2093;
      }
      iVar7 = uVar4 + 0x13;
      uVar5 = DAT_0214820c;
      uVar6 = DAT_0214820c;
      iVar3 = DAT_0214820c;
      DAT_0214820c = iVar3 + 1;
      uVar6 = DAT_0214820c;
      uVar6 = DAT_0214820c;
      uVar6 = DAT_0214820c;
      uVar6 = DAT_02148210;
      uVar6 = DAT_02148210;
      iVar3 = DAT_02148210;
      DAT_02148210 = iVar3 + (uint)(0xfffffffe < uVar5);
      uVar6 = DAT_02148210;
      uVar6 = DAT_02148210;
      uVar6 = DAT_02148210;
      uVar5 = DAT_0214821c;
      uVar6 = DAT_0214821c;
      iVar3 = DAT_0214821c;
      DAT_0214821c = iVar3 + 0x3c;
      uVar6 = DAT_0214821c;
      uVar6 = DAT_0214821c;
      uVar6 = DAT_0214821c;
      uVar6 = DAT_02148220;
      uVar6 = DAT_02148220;
      iVar3 = DAT_02148220;
      DAT_02148220 = iVar3 + (uint)(0xffffffc3 < uVar5);
      uVar6 = DAT_02148220;
      uVar6 = DAT_02148220;
      uVar6 = DAT_02148220;
      __atomic_thread_fence(__ATOMIC_SEQ_CST);
      DAT_02148044 = 0;
      while (uVar5 = recovered_20081a0(), 0 < (int)(iVar7 - uVar5)) {
        local_64 = 0;
        uVar6 = recovered_20a20d0((int)local_864,&local_64,iVar7);
        if ((((((char)uVar6 != '\0') && (param_3 != (char *)0x0)) &&
             ((0x29 < local_64 &&
              (((((ushort)(local_858 << 8 | local_858 >> 8) == 0x806 &&
                 ((ushort)(local_856 << 8 | local_856 >> 8) == 1)) &&
                ((ushort)(local_854 << 8 | local_854 >> 8) == 0x800)) &&
               ((local_852 == '\x06' && (local_851 == '\x04')))))))) &&
            (((ushort)(local_850 << 8 | local_850 >> 8) == 2 &&
             (((local_848 >> 0x18 | (local_848 & 0xff0000) >> 8 | (local_848 & 0xff00) << 8 |
               local_848 << 0x18) == local_18 &&
              ((local_83e >> 0x18 | (local_83e & 0xff0000) >> 8 | (local_83e & 0xff00) << 8 |
               local_83e << 0x18) == *(uint *)(local_14 + 8))))))) &&
           (((recovered_2001b70(param_3,local_84e,6), *param_3 != '\0' ||
             (((param_3[1] != '\0' || (param_3[2] != '\0')) || (param_3[3] != '\0')))) ||
            ((param_3[4] != '\0' || (param_3[5] != '\0')))))) {
          return CONCAT31((int3)((uint)iVar7 >> 8),1);
        }
        recovered_2026f10();
        recovered_200afa0(1000);
      }
      iVar3 = local_28 + 1;
    } while (iVar3 != 3);
    format = str_020d0941;
  }
LAB_020a20ad:
  pf_varargs_20044f0___(param_4,0x80,format);
  return 0;
}
#undef DAT_020c4df3
#undef DAT_020c4df9
#undef DAT_02148040
#undef DAT_02148044
#undef DAT_0214804c
#undef DAT_0214820c
#undef DAT_02148210
#undef DAT_0214821c
#undef DAT_02148220
#undef DAT_02148224
#undef DAT_02148228
#undef str_020d0931
#undef str_020d0941
#undef str_020d094d
#undef str_020d0966
#undef local_864
#undef local_858
#undef local_856
#undef local_854
#undef local_852
#undef local_851
#undef local_850
#undef local_84e
#undef local_848
#undef local_83e
#undef local_64
#undef local_5e
#undef local_58
#undef local_54
#undef local_50
#undef local_4e
#undef local_48
#undef local_44
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef format
#undef local_14
