/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_34 (*(uint *)(frame + 44))
#define local_38 (*(int *)(frame + 40))
#define local_3c (*(uint *)(frame + 36))
#define local_48 (*(char * *)(frame + 24))
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020a5c68 (*(char (*)[1])(0x20f640aU))
#define str_020a5e16 (*(char (*)[1])(0x20f65b4U))
#define str_020a5e3c (*(char (*)[1])(0x20ec660U))
#define str_020a5e49 (*(char (*)[1])(0x20f65daU))
ulong recovered_20b5000(int *param_1,char *param_2,int *param_3,ulong param_4,undefined8 *param_5,
                       uint *in_R9)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  void *out;
  ulong uVar9;

  local_34 = 0;
  if (param_4 < 2) {
    pcVar6 = str_020a5e16;
    goto LAB_02077958;
  }
  if (param_3 == (int *)0x0) {
    pcVar6 = str_020a5763;
    goto LAB_02077a55;
  }
  iVar7 = *param_3;
  switch((uintptr_t)(iVar7)) {
  case 1:
  case 5:
    uVar3 = param_3[1];
    if (-1 < (int)uVar3) goto LAB_02077a73;
    if (iVar7 == 3) goto switchD_0207798a_caseD_3;
    if (iVar7 == 2) goto switchD_0207798a_caseD_2;
    break;
  case 2:
switchD_0207798a_caseD_2:
    if (0.0 <= pf_bits_float((uint32_t)param_3[2])) {
      local_34 = (uint)(long)pf_bits_float((uint32_t)param_3[2]);
      goto LAB_02077a76;
    }
    break;
  case 3:
switchD_0207798a_caseD_3:
    if (*(long *)(param_3 + 4) != 0) {
      uVar3 = recovered_208f550(*(long *)(param_3 + 4),&local_34);
      if ((char)uVar3 != '\0') goto LAB_02077a76;
      iVar7 = *param_3;
    }
    break;
  case 6:
    uVar3 = param_3[1];
LAB_02077a73:
    local_34 = uVar3;
LAB_02077a76:
    local_3c = 0;
    local_38 = 1;
    iVar7 = param_3[0x10];
    uVar9 = 0;
    switch((uintptr_t)(iVar7)) {
    case 1:
    case 5:
      goto switchD_02077aa4_caseD_1;
    case 2:
switchD_02077aa4_caseD_2:
      if (0.0 <= (float)param_3[0x12]) {
        uVar3 = (uint)(long)(float)param_3[0x12];
joined_r0x02077abb:
        uVar9 = 1;
        local_3c = uVar3;
        goto joined_r0x02077abb;
      }
      goto LAB_02077c30;
    case 3:
      goto switchD_02077aa4_caseD_3;
    default:
      goto switchD_02077aa4_caseD_4;
    case 6:
      local_3c = param_3[0x11];
      uVar9 = 1;
      goto joined_r0x02077abb;
    }
  }
  local_48 = (char *)0x0;
  if ((iVar7 != 3) || (uVar9 = *(ulong *)(param_3 + 4), uVar9 == 0)) {
    pcVar6 = str_020a577d;
LAB_02077a55:
    uVar9 = 0;
    pf_varargs_205eb00__8__4_(param_1,param_2,pcVar6,(ulonglong)param_2,1);
    goto LAB_02077dc6;
  }
  if ((param_4 == 2) && (param_3[0x10] == 4)) {
    uVar3 = recovered_203f020(uVar9,*(long *)(param_3 + 0x16),*(long *)(param_3 + 0x18));
    cVar1 = (char)uVar3;
joined_r0x02077b10:
    if (cVar1 != '\0') {
      *param_5 = 0x100000005;
      *(undefined4 *)(param_5 + 1) = 0x3f800000;
      param_5[2] = 0;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      param_5[6] = 0;
      param_5[7] = 0;
LAB_02077dc3:
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      goto LAB_02077dc6;
    }
    pcVar6 = str_020a5e3c;
  }
  else {
    uVar3 = recovered_20c5840((long)(param_3 + 0x10),param_4 - 1,(long *)&local_48);
    pcVar6 = local_48;
    if ((char)uVar3 != '\0') {
      uVar5 = recovered_2002e80(local_48);
      uVar3 = recovered_203f020(uVar9,(long)pcVar6,uVar5);
      uVar9 = (ulong)uVar3;
      recovered_2000bb0(local_48);
      cVar1 = (char)uVar3;
      goto joined_r0x02077b10;
    }
    recovered_2000bb0(local_48);
    pcVar6 = str_020a5e49;
  }
  uVar9 = 0;
LAB_02077d7c:
  pf_varargs_205eb00___(param_1,param_2,pcVar6);
LAB_02077dc6:
  return uVar9 & 0xffffffff;
switchD_02077aa4_caseD_1:
  uVar3 = param_3[0x11];
  if (-1 < (int)uVar3) goto joined_r0x02077abb;
  if (iVar7 != 3) {
    if (iVar7 == 2) goto switchD_02077aa4_caseD_2;
    goto LAB_02077c30;
  }
switchD_02077aa4_caseD_3:
  if (*(long *)(param_3 + 0x14) != 0) {
    uVar3 = recovered_208f550(*(long *)(param_3 + 0x14),&local_3c);
    uVar9 = (ulong)uVar3;
switchD_02077aa4_caseD_4:

    if (param_4 == 3) goto LAB_02077bcc;
    goto switchD_02077bf0_caseD_4;
  }
LAB_02077c30:
  uVar9 = 0;
  if (param_4 != 3) goto switchD_02077bf0_caseD_4;
LAB_02077bcc:
  iVar7 = param_3[0x20];
  cVar1 = (char)uVar9;
  switch((uintptr_t)(iVar7)) {
  case 1:
  case 5:
    iVar4 = param_3[0x21];
    if (-1 < iVar4) goto LAB_02077ce2;
    if (iVar7 == 3) goto switchD_02077bf0_caseD_3;
    if (iVar7 == 2) goto switchD_02077bf0_caseD_2;
    break;
  case 2:
switchD_02077bf0_caseD_2:
    if ((float)param_3[0x22] < 0.0) break;
    bVar2 = 1;
    local_38 = (int)(long)(float)param_3[0x22];
    goto joined_r0x02077c28;
  case 3:
switchD_02077bf0_caseD_3:
    if (*(long *)(param_3 + 0x24) != 0) {
      uVar3 = recovered_208f550(*(long *)(param_3 + 0x24),&local_38);
      bVar2 = (byte)uVar3;
      goto joined_r0x02077c28;
    }
    break;
  case 6:
    iVar4 = param_3[0x21];
LAB_02077ce2:
    bVar2 = 1;
    local_38 = iVar4;
    goto joined_r0x02077c28;
  }
switchD_02077bf0_caseD_4:
  bVar2 = 0;
  cVar1 = (char)uVar9;
joined_r0x02077c28:
  if ((cVar1 != '\0') && (puVar8 = (uint *)(ulong)local_34, param_4 == 2 || (bVar2 & 1) != 0)) {
    if (local_38 == 4) {
      *puVar8 = local_3c;
    }
    else if (local_38 == 2) {
      *(short *)puVar8 = (short)local_3c;
      local_3c = local_3c & 0xffff;
    }
    else {
      if (local_38 != 1) {
        pcVar6 = str_020a5c68;
LAB_02077958:
        uVar9 = 0;
        pf_varargs_205eb00__8_(param_1,param_2,pcVar6,(ulonglong)param_2);
        goto LAB_02077dc6;
      }
      *(char *)puVar8 = (char)local_3c;
      local_3c = local_3c & 0xff;
    }
    *(undefined4 *)param_5 = 1;
    *(uint *)((long)param_5 + 4) = local_3c;
    *(float *)(param_5 + 1) = (float)(int)local_3c;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    goto LAB_02077dc3;
  }
  out = (void *)(ulong)local_34;
  local_48 = (char *)0x0;
  uVar3 = recovered_20c5840((long)(param_3 + 0x10),param_4 - 1,(long *)&local_48);
  uVar9 = (ulong)uVar3;
  if ((char)uVar3 != '\0') {
    uVar5 = recovered_2002e80(local_48);
    recovered_2001410(out,local_48,uVar5 + 1);
    recovered_2000bb0(local_48);
    *(undefined4 *)param_5 = 1;
    *(int *)((long)param_5 + 4) = (int)uVar5;
    *(float *)(param_5 + 1) = (float)(int)uVar5;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    goto LAB_02077dc6;
  }
  recovered_2000bb0(local_48);
  pcVar6 = str_020a5e49;
  goto LAB_02077d7c;
}
