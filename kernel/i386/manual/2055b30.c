/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_02130750 (*(uint32_t volatile *)(0x2130750U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define DAT_021408f0 (*(uint32_t volatile *)(0x21408f0U))
#define DAT_0214acf8 (*(uint8_t volatile *)(0x214acf8U))
#define DAT_0214acfc (*(uint8_t volatile *)(0x214acfcU))
#define DAT_0214acfe (*(uint8_t volatile *)(0x214acfeU))
#define DAT_0214acff (*(uint8_t volatile *)(0x214acffU))
#define DAT_0214adff (*(uint8_t volatile *)(0x214adffU))
#define DAT_0214aff0 (*(uint32_t volatile *)(0x214aff0U))
#define Ram0214acf8 (*(uint32_t volatile *)(0x214acf8U))
#define Ram0214acfc (*(uint16_t volatile *)(0x214acfcU))
#define str_020c5e97 (*(char (*)[1])(0x20c5e97U))
#define local_5b1 (*(uchar (*)[241])(frame + 31))
#define local_4c0 (*(uchar (*)[764])(frame + 272))
#define local_1c4 (*(undefined1 (*)[191])(frame + 1036))
#define local_105 (*(char (*)[241])(frame + 1227))
#define local_14 (*(int *)(frame + 1468))


uint recovered_2055b30(char *bundle,char *platform,char *executable,char *path,char *error)

{
  unsigned char frame[1520] __attribute__((aligned(16))) = {0};

  char cVar1;
  void *data;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint incoming_edx;
  uint extraout_EDX = 0;
  uint incoming_edx_00;
  uint extraout_EDX_00 = 0;
  int *piVar10;
  int *piVar11;
  int *piVar12;

  if (path == (char *)0x0 ||
      (executable == (char *)0x0 || (platform == (char *)0x0 || bundle == (char *)0x0))) {
    return 0;
  }
  uVar4 = pf_varargs_20044f0__4__4__4_
                    (local_105,0xf1,str_020c5e97,(uint)bundle,(uint)platform,(uint)executable);
  if (0xf0 < uVar4) goto LAB_02055b8b;
  if (local_105[0] == '\0') {
    return 0;
  }
  bVar2 = DAT_021307dc;
  if (bVar2 == 1) {
    recovered_202a060((int)local_105,local_4c0);
    uVar4 = recovered_202af10(local_4c0,incoming_edx);
    if (uVar4 == 0xffffffff) {
      bVar2 = DAT_021307dc;
      goto LAB_02055bf5;
    }
  }
  else {
LAB_02055bf5:
    if ((bVar2 & 1) != 0) {
      uVar4 = recovered_20559e0(local_105,(char *)local_4c0);
      if ((char)uVar4 != '\0') goto LAB_02055c0e;
      bVar2 = DAT_021307dc;
    }
    iVar6 = DAT_020d9d44;
    if (((-1 < iVar6 & bVar2) == 1) && (iVar8 = DAT_021408ec, iVar8 != 0)) {
      iVar9 = 0;
      piVar10 = &DAT_021408f0;
      do {
        if (*piVar10 == iVar6) {
          if ((((-1 < iVar9) && (uVar7 = recovered_20bdc00((int)piVar10), (char)uVar7 != '\0')) &&
              ((char)piVar10[8] == '\0')) &&
             (((piVar10[0x17] - 3U < 3 && (iVar8 = DAT_0213075c, iVar8 - 3U < 3)) &&
              ((cVar1 = DAT_0213073c, cVar1 == (char)piVar10[1] &&
               ((iVar8 = DAT_0213074c, iVar8 == piVar10[2] &&
                (iVar8 = DAT_02130750, iVar8 == piVar10[3])))))))) {
            return 0;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 0x18;
      } while (iVar8 != iVar9);
    }
    cVar1 = DAT_021408ea;
    if ((cVar1 == '\0') && (uVar3 = recovered_202a5c0(), uVar3 == '\0')) {
      return 0;
    }
    iVar8 = DAT_021408ec;
    if (iVar8 == 0) {
      return 0;
    }
    piVar10 = &DAT_021408f0;
    piVar12 = (int *)0x0;
    do {
      piVar11 = piVar12;
      if (((char)piVar10[8] == '\x01') && ((piVar10[0x17] != 0 || (piVar10[0x16] != 0)))) {
        if (piVar10[7] != 0) goto LAB_02055d55;
        piVar11 = piVar10;
        if (piVar12 != (int *)0x0) {
          piVar11 = piVar12;
        }
      }
      piVar10 = piVar10 + 0x18;
      iVar8 = iVar8 + -1;
      piVar12 = piVar11;
    } while (iVar8 != 0);
    piVar10 = piVar11;
    if (piVar11 == (int *)0x0) {
      return 0;
    }
LAB_02055d55:
    if (*piVar10 == iVar6) {
      return 0;
    }
    local_14 = piVar10[0x17];
    if (local_14 == 0) {
      local_14 = piVar10[0x16];
      if (local_14 == 0) {
        return 0;
      }
      if ((local_14 == 1) &&
         ((((-1 < piVar10[7] || (piVar10[0x15] != 4)) || (piVar10[2] != 0x41)) ||
          (local_14 = 6, (*(byte *)(piVar10 + 6) & 1) == 0)))) {
        local_14 = 1;
      }
    }
    recovered_2001b70(local_1c4,&DAT_02130724,0xbc);
    recovered_2001b70(local_4c0,&DAT_0214acf8,0x2fc);
    recovered_2001e00(&DAT_02130724,0,0xbc);
    recovered_2001e00(&DAT_0214acf8,0,0x2fc);
    uVar3 = recovered_20562d0(piVar10,local_14);
    if (uVar3 == '\0') {
      local_14 = 0;
      uVar4 = extraout_EDX;
    }
    else {
      recovered_202a060((int)local_105,local_5b1);
      uVar4 = recovered_202af10(local_5b1,incoming_edx_00);
      local_14 = CONCAT31((int3)(uVar4 >> 8),uVar4 != 0xffffffff);
      uVar4 = extraout_EDX_00;
    }
    recovered_20539f0(&DAT_02130724,uVar4);
    data = (void *)DAT_0214aff0;
    if (data != (void *)0x0) {
      recovered_2001710(data);
      DAT_0214aff0 = 0;
    }
    Ram0214acf8 = 0;
    Ram0214acfc = 0;
    DAT_0214acfe = 0;
    recovered_2001e00(&DAT_0214acff,0,0x100);
    recovered_2001e00(&DAT_0214adff,0,0x100);
    recovered_2001b70(&DAT_02130724,local_1c4,0xbc);
    recovered_2001b70(&DAT_0214acf8,local_4c0,0x2fc);
    DAT_020d9d44 = iVar6;
    recovered_2043440();
    if ((char)local_14 == '\0') {
      return 0;
    }
  }
LAB_02055c0e:
  cVar1 = DAT_021307dc;
  if (cVar1 == '\x01') {
    uVar4 = recovered_20559e0(local_105,path);
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  uVar5 = recovered_2002270(local_105);
  if (uVar5 < 0xf1) {
    iVar6 = pf_varargs_20044f0__4_(path,0xf1,&DAT_020c5119,(uint)local_105);
    return CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
LAB_02055b8b:
  if (error != (char *)0x0) {
    pf_varargs_20044f0__4_(error,0xa0,&DAT_020c5119,0x20c5de5);
  }
  return 0;
}
#undef DAT_020c5119
#undef DAT_020d9d44
#undef DAT_02130724
#undef DAT_0213073c
#undef DAT_0213074c
#undef DAT_02130750
#undef DAT_0213075c
#undef DAT_021307dc
#undef DAT_021408ea
#undef DAT_021408ec
#undef DAT_021408f0
#undef DAT_0214acf8
#undef DAT_0214acfc
#undef DAT_0214acfe
#undef DAT_0214acff
#undef DAT_0214adff
#undef DAT_0214aff0
#undef Ram0214acf8
#undef Ram0214acfc
#undef str_020c5e97
#undef local_5b1
#undef local_4c0
#undef local_1c4
#undef local_105
#undef local_14
