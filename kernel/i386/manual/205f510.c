/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c7754 (*(char (*)[1])(0x20c7754U))
#define str_020c7779 (*(char (*)[1])(0x20c7779U))
#define str_020c77e9 (*(char (*)[1])(0x20c77e9U))
#define str_020c7821 (*(char (*)[1])(0x20c7821U))
#define str_020c783e (*(char (*)[1])(0x20c783eU))
#define str_020c785f (*(char (*)[1])(0x20c785fU))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define local_18 (*(uint *)(frame + 1064))
#define local_14 (*(char * *)(frame + 1068))
#define format (*(char * *)(frame + 28))
#define local_40e (*(char (*)[241])(frame + 50))
#define local_31d (*(char (*)[241])(frame + 291))
#define local_22c (*(char (*)[484])(frame + 532))
#define local_48 (*(byte * *)(frame + 1016))
#define local_44 (*(uint *)(frame + 1020))
#define local_40 (*(int (*)[5])(frame + 1024))
#define local_2c (*(uint (*)[2])(frame + 1044))
#define local_24 (*(int *)(frame + 1052))
#define local_20 (*(uint (*)[2])(frame + 1056))


undefined4 recovered_205f510(char *in_ECX,char *in_EDX,char *param_3,char *param_4,uint param_5)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte *bytes;

  recovered_2001e00(local_22c,0,0x200);
  recovered_2001e00(local_2c,0,0x14);
  if ((((in_ECX == (char *)0x0) || (in_EDX == (char *)0x0)) || (*in_ECX == '\0')) ||
     (*in_EDX == '\0')) {
    if (param_5 == 0 || param_4 == (char *)0x0) {
      return 0;
    }
    if ((*param_4 != '\0') && (uVar2 = recovered_2002270(param_4), uVar2 + 1 < param_5)) {
      (param_4 + uVar2)[0] = '\n';
      (param_4 + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(param_4);
    if (param_5 <= uVar2 + 1) {
      return 0;
    }
    pcVar8 = param_4 + uVar2;
    cVar5 = 'l';
    iVar4 = 0;
    do {
      pcVar8[iVar4] = cVar5;
      cVar5 = str_020c77e9[iVar4 + 1];
      iVar7 = iVar4 + 1;
      if (cVar5 == '\0') break;
      uVar6 = iVar4 + uVar2 + 2;
      iVar4 = iVar7;
    } while (uVar6 < param_5);
LAB_0205f679:
    pcVar8[iVar7] = '\0';
    return 0;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    if (param_5 == 0 || param_4 == (char *)0x0) {
      return 0;
    }
    if ((*param_4 != '\0') && (uVar2 = recovered_2002270(param_4), uVar2 + 1 < param_5)) {
      (param_4 + uVar2)[0] = '\n';
      (param_4 + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(param_4);
    if (param_5 <= uVar2 + 1) {
      return 0;
    }
    pcVar8 = param_4 + uVar2;
    cVar5 = 'l';
    iVar4 = 0;
    do {
      pcVar8[iVar4] = cVar5;
      cVar5 = str_020c7821[iVar4 + 1];
      iVar7 = iVar4 + 1;
      if (cVar5 == '\0') break;
      uVar6 = iVar4 + uVar2 + 2;
      iVar4 = iVar7;
    } while (uVar6 < param_5);
    goto LAB_0205f679;
  }
  local_14 = in_EDX;
  uVar1 = recovered_205fdd0(in_ECX,local_22c,param_4,param_5);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  if ((local_44 < 8 || local_48 == (byte *)0x0) ||
     ((local_48[3] & 0xfffffffe |
      (uint)local_48[2] << 8 | (uint)local_48[1] << 0x10 | (uint)*local_48 << 0x18) != 0xcafebabe))
  {
    uVar1 = recovered_2060280(local_40,local_14);
    if ((char)uVar1 == '\0') goto LAB_0205f76a;
    puVar3 = &local_44;
    bytes = local_48;
LAB_0205f757:
    uVar6 = *puVar3;
    if (uVar6 == 0 || bytes == (byte *)0x0) goto LAB_0205f76a;
    recovered_2030400(param_3,str_020d9e14,local_31d);
    iVar4 = recovered_20022a0(local_31d,&DAT_020c5359);
    if (iVar4 != 0) {
      recovered_205e5b0(local_31d,local_40e);
      iVar4 = DAT_020d9d5c;
      uVar6 = recovered_202b490(iVar4,local_40e,bytes,uVar6);
      pcVar8 = local_31d;
      if (uVar6 != 0) {
        pf_varargs_202ecc0__4_(param_4,param_5,str_020c785f,(uint)pcVar8);
        uVar1 = 1;
        goto LAB_0205f780;
      }
      format = str_020c7779;
      goto LAB_0205f775;
    }
    recovered_202dd30(param_4,param_5,str_020c7754);
  }
  else {
    local_18 = recovered_2060230(local_48,local_44);
    if (local_18 != 0) {
      uVar6 = 0;
      do {
        uVar1 = recovered_2060040(local_48,local_44,uVar6,local_2c);
        if (((char)uVar1 != '\0') &&
           (uVar1 = recovered_2060280((int *)local_2c,local_14), (char)uVar1 != '\0')) {
          puVar3 = local_20;
          bytes = local_48 + local_24;
          goto LAB_0205f757;
        }
        uVar6 = uVar6 + 1;
      } while (local_18 != uVar6);
    }
LAB_0205f76a:
    format = str_020c783e;
    pcVar8 = local_14;
LAB_0205f775:
    pf_varargs_202ecc0__4_(param_4,param_5,format,(uint)pcVar8);
  }
  uVar1 = 0;
LAB_0205f780:
  recovered_2001710(local_48);
  return uVar1;
}
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c7754
#undef str_020c7779
#undef str_020c77e9
#undef str_020c7821
#undef str_020c783e
#undef str_020c785f
#undef str_020d9e14
#undef local_18
#undef local_14
#undef format
#undef local_40e
#undef local_31d
#undef local_22c
#undef local_48
#undef local_44
#undef local_40
#undef local_2c
#undef local_24
#undef local_20
