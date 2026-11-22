/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c531e (*(uint8_t *)(0x20c531eU))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define DAT_020d9d66 (*(uint8_t volatile *)(0x20d9d66U))
#define DAT_020d9db4 (*(uint8_t volatile *)(0x20d9db4U))
#define str_020c6adc (*(char (*)[1])(0x20c6adcU))
#define local_7f18 (*(char (*)[496])(frame + 24))
#define local_7d28 (*(int (*)[7940])(frame + 520))
#define local_118 (*(char (*)[4])(frame + 32280))
#define local_114 (*(uint *)(frame + 32284))
#define local_110 (*(uint *)(frame + 32288))
#define local_24 (*(undefined1 (*)[8])(frame + 32524))
#define local_1c (*(uint *)(frame + 32532))
#define local_18 (*(uint *)(frame + 32536))
#define local_14 (*(int *)(frame + 32540))


byte recovered_205e0e0(void)

{
  unsigned char frame[32592] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;

  local_18 = 0;
  iVar6 = DAT_020d9d5c;
  if ((-1 < iVar6) && (uVar2 = recovered_205e600(iVar6), (char)uVar2 != '\0')) {
    iVar6 = DAT_020d9d5c;
    recovered_205e700(iVar6);
    iVar6 = DAT_020d9d5c;
    cVar1 = DAT_020d9db4;
    puVar3 = &DAT_020c531e;
    if (cVar1 != '\0') {
      puVar3 = &DAT_020d9db4;
    }
    pf_varargs_20044f0__4_(local_7f18,0xf1,str_020c6adc,(uint)puVar3);
    uVar2 = recovered_205e600(iVar6);
    if (((char)uVar2 != '\0') && (-1 < iVar6)) {
      recovered_2001e00(local_118,0,0xc);
      uVar2 = recovered_202ad00(iVar6,local_7f18,local_118);
      if ((uVar2 != 0) && ((local_110 & 2) != 0)) {
        return 1;
      }
    }
  }
  recovered_2001e00(local_7f18,0,0x7e00);
  uVar2 = recovered_202a350(local_7f18,0x40,&local_18);
  if (uVar2 != 0) {
    if (local_18 < 0x41) {
      if (local_18 == 0) goto LAB_0205e4cc;
    }
    else {
      local_18 = 0x40;
    }
    uVar2 = 0;
    piVar7 = local_7d28;
    do {
      uVar4 = recovered_205e600(*piVar7);
      if ((char)uVar4 != '\0') {
        iVar6 = *piVar7;
        iVar5 = DAT_020d9d5c;
        if (iVar5 != iVar6) {
          DAT_020d9d66 = 0;
        }
        DAT_020d9d5c = iVar6;
        recovered_205e700(iVar6);
        cVar1 = DAT_020d9db4;
        puVar3 = &DAT_020c531e;
        if (cVar1 != '\0') {
          puVar3 = &DAT_020d9db4;
        }
        iVar6 = DAT_020d9d5c;
        pf_varargs_20044f0__4_(local_118,0xf1,str_020c6adc,(uint)puVar3);
        uVar4 = recovered_205e600(iVar6);
        if (((char)uVar4 != '\0') && (-1 < iVar6)) {
          recovered_2001e00(local_24,0,0xc);
          uVar4 = recovered_202ad00(iVar6,local_118,local_24);
          if ((uVar4 != 0) && ((local_1c & 2) != 0)) {
            return 1;
          }
        }
      }
      uVar2 = uVar2 + 1;
      piVar7 = piVar7 + 0x7e;
    } while (uVar2 < local_18);
    if (local_18 != 0) {
      iVar6 = -1;
      uVar2 = 0;
      piVar7 = local_7d28;
      do {
        iVar5 = *piVar7;
        if (-1 < iVar5) {
          local_14 = iVar6;
          recovered_2001e00(local_118,0,0x8c);
          iVar5 = recovered_203c7d0(iVar5,(undefined4 *)local_118);
          iVar6 = local_14;
          if (((iVar5 != 0) && ((local_114 & 10) == 2)) && ((local_114 & 4) == 0)) {
            DAT_020d9d5c = *piVar7;
            DAT_020d9d66 = 0;
            recovered_205e700(*piVar7);
            cVar1 = DAT_020d9db4;
            puVar3 = &DAT_020c531e;
            if (cVar1 != '\0') {
              puVar3 = &DAT_020d9db4;
            }
            iVar6 = DAT_020d9d5c;
            pf_varargs_20044f0__4_(local_118,0xf1,str_020c6adc,(uint)puVar3);
            uVar4 = recovered_205e600(iVar6);
            if (((char)uVar4 == '\0') || (iVar6 < 0)) {
              iVar6 = local_14;
            }
            else {
              recovered_2001e00(local_24,0,0xc);
              uVar4 = recovered_202ad00(iVar6,local_118,local_24);
              iVar6 = local_14;
              if ((uVar4 != 0) && ((local_1c & 2) != 0)) {
                return 1;
              }
            }
          }
        }
        if ((iVar6 < 0) && (iVar5 = *piVar7, -1 < iVar5)) {
          local_14 = iVar6;
          recovered_2001e00(local_118,0,0x8c);
          iVar5 = recovered_203c7d0(iVar5,(undefined4 *)local_118);
          iVar6 = local_14;
          if ((iVar5 != 0) && ((local_114 & 10) == 2)) {
            iVar6 = *piVar7;
          }
        }
        uVar2 = uVar2 + 1;
        piVar7 = piVar7 + 0x7e;
      } while (uVar2 < local_18);
      if (-1 < iVar6) {
        DAT_020d9d5c = iVar6;
        DAT_020d9d66 = 0;
        recovered_205e700(iVar6);
        iVar6 = DAT_020d9d5c;
        cVar1 = DAT_020d9db4;
        puVar3 = &DAT_020c531e;
        if (cVar1 != '\0') {
          puVar3 = &DAT_020d9db4;
        }
        pf_varargs_20044f0__4_(local_118,0xf1,str_020c6adc,(uint)puVar3);
        uVar2 = recovered_205e600(iVar6);
        if (((char)uVar2 != '\0') && (-1 < iVar6)) {
          recovered_2001e00(local_24,0,0xc);
          uVar2 = recovered_202ad00(iVar6,local_118,local_24);
          if ((uVar2 != 0) && ((local_1c & 2) != 0)) {
            return 1;
          }
        }
      }
    }
  }
LAB_0205e4cc:
  iVar6 = DAT_020d9d44;
  if (-1 < iVar6) {
    recovered_2001e00(local_118,0,0x8c);
    iVar6 = recovered_203c7d0(iVar6,(undefined4 *)local_118);
    if ((iVar6 != 0) && ((local_114 & 10) == 2)) {
      iVar6 = DAT_020d9d44;
      DAT_020d9d5c = iVar6;
      DAT_020d9d66 = 0;
      recovered_205e700(iVar6);
      iVar6 = DAT_020d9d5c;
      cVar1 = DAT_020d9db4;
      puVar3 = &DAT_020c531e;
      if (cVar1 != '\0') {
        puVar3 = &DAT_020d9db4;
      }
      pf_varargs_20044f0__4_(local_118,0xf1,str_020c6adc,(uint)puVar3);
      uVar2 = recovered_205e600(iVar6);
      if (((char)uVar2 != '\0') && (-1 < iVar6)) {
        recovered_2001e00(local_24,0,0xc);
        uVar2 = recovered_202ad00(iVar6,local_118,local_24);
        return (byte)((local_1c & 2) >> 1) & uVar2 != 0;
      }
    }
  }
  return 0;
}
#undef DAT_020c531e
#undef DAT_020d9d44
#undef DAT_020d9d5c
#undef DAT_020d9d66
#undef DAT_020d9db4
#undef str_020c6adc
#undef local_7f18
#undef local_7d28
#undef local_118
#undef local_114
#undef local_110
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
