/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a3abe (*(uint8_t *)(0x20ecf0bU))
#define DAT_020a3ac3 (*(uint8_t *)(0x20ecf10U))
#define local_1b8 (*(char (*)[256])(frame + 536))
#define local_2b8 (*(char (*)[256])(frame + 280))
#define local_38 (*(char * *)(frame + 920))
#define local_3b8 (*(byte (*)[256])(frame + 24))
#define local_3c (*(int *)(frame + 916))
#define local_3f (*(char (*)[3])(frame + 913))
#define local_47 (*(char (*)[8])(frame + 905))
#define local_50 (*(ulong *)(frame + 896))
#define local_58 (*(long *)(frame + 888))
#define local_60 (*(long *)(frame + 880))
#define local_68 (*(ulong *)(frame + 872))
#define local_70 (*(int * *)(frame + 864))
#define local_78 (*(long *)(frame + 856))
#define local_80 (*(long *)(frame + 848))
#define local_88 (*(undefined8 *)(frame + 840))
#define local_90 (*(ulong *)(frame + 832))
#define local_98 (*(void * *)(frame + 824))
#define local_a0 (*(char * *)(frame + 816))
#define local_b8 (*(char (*)[24])(frame + 792))
uchar recovered_206da70(long param_1,ulong param_2)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  byte *out;
  long lVar1;
  int *piVar2;
  char cVar3;
  uchar uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  void *left;
  bool bVar16;

  if (param_2 < 2) {
    return '\x01';
  }
  local_60 = param_1 + 0x228;
  local_78 = -param_2;
  local_98 = (void *)(param_1 + 0x1f2);
  local_58 = 0;
  local_88 = 0;
  local_90 = 1;
  local_80 = param_1;
  local_50 = param_2;
LAB_02057a33:
  local_70 = (int *)(local_80 + local_90 * 0x218);
  local_38 = (char *)(local_90 * 0x218 + local_80 + 0x10);
  local_3c = 0;
LAB_02057a60:
  if ((local_3c == 0) && (cVar8 = *local_38, cVar8 != '\0')) {
    pcVar15 = (char *)0x0;
    pcVar13 = local_38;
    do {
      if (cVar8 == '.') {
        pcVar15 = pcVar13;
      }
      else if (cVar8 == '\0') goto code_r0x02057b76;
      cVar8 = pcVar13[1];
      pcVar13 = pcVar13 + 1;
    } while( true );
  }
  goto LAB_02057a6b;
code_r0x02057b76:
  if (pcVar15 == (char *)0x0) {
    uVar12 = recovered_2002e80(local_38);
    uVar14 = 0;
  }
  else {
    uVar12 = (long)pcVar15 - (long)local_38;
    if ((uVar12 == 0) || (pcVar15[1] == '\0')) goto LAB_02057a6b;
    uVar14 = recovered_2002e80(pcVar15 + 1);
  }
  if (3 < uVar14 || uVar12 - 9 < 0xfffffffffffffff8) {
LAB_02057a6b:
    local_a0 = (char *)0x0;
    pcVar13 = local_38;
    do {
      if (*pcVar13 == '.') {
        local_a0 = pcVar13;
      }
      else if (*pcVar13 == '\0') goto code_r0x02057a92;
      pcVar13 = pcVar13 + 1;
    } while( true );
  }
  recovered_2002110(local_47,0x20,0xb);
  uVar11 = 0;
  do {
    cVar8 = *(char *)(local_60 + uVar11);
    cVar3 = cVar8 + -0x20;
    if (0x19 < (byte)(cVar8 + 0x9fU)) {
      cVar3 = cVar8;
    }
    uVar4 = recovered_206e9c0((int)cVar3);
    if (uVar4 == '\0') goto LAB_02057a6b;
    local_47[uVar11] = cVar3;
    uVar11 = uVar11 + 1;
  } while (uVar12 != uVar11);
  if (uVar14 != 0) {
    uVar12 = 0;
    do {
      cVar8 = pcVar15[uVar12 + 1];
      cVar3 = cVar8 + -0x20;
      if (0x19 < (byte)(cVar8 + 0x9fU)) {
        cVar3 = cVar8;
      }
      uVar4 = recovered_206e9c0((int)cVar3);
      if (uVar4 == '\0') goto LAB_02057a6b;
      local_3f[uVar12] = cVar3;
      uVar12 = uVar12 + 1;
    } while (uVar14 != uVar12);
  }
  goto LAB_02057d93;
code_r0x02057a92:
  if (local_a0 == (char *)0x0) {
    uVar14 = recovered_2002e80(local_38);
    local_68 = 0;
    if (uVar14 == 0) goto LAB_02057bcd;
LAB_02057abf:
    uVar11 = 0;
    uVar12 = 0;
    do {
      cVar8 = *(char *)(local_60 + uVar11);
      cVar3 = cVar8 + -0x20;
      if (0x19 < (byte)(cVar8 + 0x9fU)) {
        cVar3 = cVar8;
      }
      if ((cVar3 != ' ') && (cVar3 != '.')) {
        if (0xf0 < uVar12 + 1) break;
        uVar4 = recovered_206e9c0((int)cVar3);
        if (uVar4 == '\0') {
          cVar3 = '_';
        }
        local_1b8[uVar12] = cVar3;
        uVar12 = uVar12 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar14 != uVar11);
  }
  else {
    uVar14 = (long)local_a0 - (long)local_38;
    local_68 = recovered_2002e80(local_a0 + 1);
    if (uVar14 != 0) goto LAB_02057abf;
LAB_02057bcd:
    uVar12 = 0;
  }
  pcVar13 = local_a0 + 1;
  local_1b8[uVar12] = '\0';
  if (local_a0 == (char *)0x0) {
    pcVar13 = &DAT_020a259c;
  }
  if (local_68 == 0) {
    uVar14 = 0;
  }
  else {
    uVar12 = 0;
    uVar14 = 0;
    do {
      cVar8 = pcVar13[uVar12];
      cVar3 = cVar8 + -0x20;
      if (0x19 < (byte)(cVar8 + 0x9fU)) {
        cVar3 = cVar8;
      }
      if ((cVar3 != ' ') && (cVar3 != '.')) {
        if (0xf0 < uVar14 + 1) break;
        uVar4 = recovered_206e9c0((int)cVar3);
        if (uVar4 == '\0') {
          cVar3 = '_';
        }
        local_2b8[uVar14] = cVar3;
        uVar14 = uVar14 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (local_68 != uVar12);
  }
  local_2b8[uVar14] = '\0';
  if (local_1b8[0] == '\0') {
    pf_varargs_20039e0___(local_1b8,0xf1,&DAT_020a3abe);
  }
  pf_varargs_20039e0__4_(local_b8,0x10,&DAT_020a3ac3,local_3c + (uint)(local_3c == 0));
  uVar14 = recovered_2002e80(local_b8);
  uVar12 = -(uVar14 - 8);
  if (7 < uVar14) {
    uVar12 = 1;
  }
  uVar11 = recovered_2002e80(local_1b8);
  if (uVar11 < uVar12) {
    uVar12 = recovered_2002e80(local_1b8);
  }
  uVar12 = uVar12 + (uVar12 == 0);
  recovered_2002110(local_47,0x20,0xb);
  recovered_2001410(local_47,local_1b8,uVar12);
  uVar11 = 8 - uVar12;
  if (uVar14 < 8 - uVar12) {
    uVar11 = uVar14;
  }
  recovered_2001410(local_47 + uVar12,local_b8,uVar11);
  uVar14 = recovered_2002e80(local_2b8);
  uVar12 = 3;
  if (uVar14 < 4) {
    uVar12 = recovered_2002e80(local_2b8);
  }
  recovered_2001410(local_3f,local_2b8,uVar12);
LAB_02057d93:
  uVar14 = local_50;
  iVar7 = *local_70;
  uVar12 = 1;
  bVar16 = false;
  lVar9 = local_78;
  lVar10 = local_58;
  left = local_98;
  do {
    if (lVar10 + uVar12 != 2) {
      if (*(int *)((long)left + -0x1f2) == iVar7) {
        iVar6 = recovered_2002a00(left,local_47,0xb);
        lVar9 = local_78;
        lVar10 = local_58;
        if (iVar6 == 0) break;
      }
    }
    bVar16 = uVar14 <= uVar12;
    lVar1 = lVar9 + uVar12;
    uVar12 = uVar12 + 1;
    left = (void *)((long)left + 0x218);
  } while (lVar1 != 0);
  piVar2 = local_70;
  if (bVar16) goto LAB_02057f00;
  local_3c = local_3c + 1;
  if (local_3c == 1000000) {
    bVar5 = (byte)local_88;
    goto LAB_02057f75;
  }
  goto LAB_02057a60;
LAB_02057f00:
  out = (byte *)((long)local_70 + 0x1f2);
  recovered_2001410(out,local_47,0xb);
  recovered_206e440(out,local_3b8);
  iVar7 = recovered_2002eb0((char *)local_3b8,local_38);
  *(bool *)((long)piVar2 + 0x211) = iVar7 != 0;
  local_90 = local_90 + 1;
  local_60 = local_60 + 0x218;
  local_58 = local_58 + -1;
  local_88 = CONCAT71((int7)((ulong)lVar9 >> 8),uVar14 <= local_90);
  if (local_90 == uVar14) {
    bVar5 = 1;
LAB_02057f75:
    return bVar5 & 1;
  }
  goto LAB_02057a33;
}
