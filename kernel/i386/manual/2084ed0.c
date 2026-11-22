/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020901bc (*(uint8_t *)(0x20cd79eU))
#define DAT_020c77f8 (*(uint32_t volatile *)(0x223dc10U))
#define DAT_020c77fc (*(uint32_t volatile *)(0x223dc14U))
#define local_14 (*(int * *)(frame + 108))
#define local_18 (*(char * *)(frame + 104))
#define local_1c (*(char * *)(frame + 100))
#define local_20 (*(int * *)(frame + 96))
#define local_24 (*(int * *)(frame + 92))
#define local_64 (*(char (*)[64])(frame + 28))
#define str_020901c1 (*(char (*)[1])(0x20cd7a3U))
#define str_02090506 (*(char (*)[1])(0x20cdac9U))
#define str_02090512 (*(char (*)[1])(0x20cdad5U))
#define str_02090518 (*(char (*)[1])(0x20cdadbU))
undefined4 recovered_2084ed0(int *incoming_ecx,int *incoming_edx,undefined4 *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *extraout_EAX = 0;
  uint uVar6;
  int iVar7;
  char *extraout_EAX_00 = 0;
  char *extraout_EAX_01 = 0;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;

  local_1c = (char *)0x0;
  if (param_3 == (undefined4 *)0x0 || (incoming_edx == (int *)0x0 || incoming_ecx == (int *)0x0)) {
    return 0;
  }
  iVar11 = *incoming_ecx;
  if (iVar11 == 3) {
    if (*incoming_edx == 1) {
      pcVar4 = (char *)incoming_ecx[3];
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      pcVar1 = (char *)incoming_edx[1];
      if ((0 < (int)pcVar1) &&
         (local_14 = incoming_ecx, pcVar4 = (char *)recovered_2002270(pcVar4), pcVar1 <= pcVar4)) {
        uVar3 = recovered_2086a30(param_3,(undefined1 *)(local_14[3] + -1 + incoming_edx[1]),1);
        return uVar3;
      }
    }
    else {
      if (*incoming_edx != 3) {
        return 0;
      }
      if (incoming_edx[3] == 0) {
        return 0;
      }
      pf_varargs_2003aa0__4_(local_64,0x40,str_02090518,incoming_edx[3]);
      pcVar4 = (char *)recovered_2086910(param_3,(uint)local_64,(int)incoming_ecx);
      if ((char)pcVar4 != '\0') goto LAB_0205aefd;
    }
  }
  else {
    if (iVar11 == 8) {
      if ((incoming_ecx[7] == 0) ||
         (local_24 = incoming_edx, local_14 = incoming_ecx,
         bVar2 = recovered_2085e30(incoming_edx,&local_1c), !bVar2)) {
        recovered_2001710(local_1c);
        return 0;
      }
      local_20 = param_3;
      piVar8 = local_14;
      if (((*local_14 == 8) && (local_18 = (char *)local_14[7], local_18 != (char *)0x0)) &&
         (uVar6 = *(uint *)((int)local_18 + 4), uVar6 != 0)) {
        iVar11 = 0;
        uVar9 = 0;
        do {
          pcVar4 = *(char **)(*(int *)((int)local_18 + 0xc) + iVar11);
          if (pcVar4 != (char *)0x0) {
            iVar5 = recovered_20022a0(pcVar4,str_02090506);
            piVar8 = local_14;
            if (iVar5 == 0) {
              if (((-1 < (int)uVar9) && (*(int *)(*(int *)((int)local_18 + 0xc) + 4 + iVar11) == 6))
                 && ((iVar11 = *(int *)(*(int *)((int)local_18 + 0xc) + 8 + iVar11), iVar11 != 0 &&
                     (iVar5 = DAT_020c77f8, iVar5 != 0)))) {
                iVar7 = DAT_020c77fc;
                piVar10 = (int *)(iVar7 + 4);
                goto LAB_0205acbb;
              }
              break;
            }
            uVar6 = *(uint *)((int)local_18 + 4);
          }
          uVar9 = uVar9 + 1;
          iVar11 = iVar11 + 0x28;
        } while (uVar9 < uVar6);
      }
      goto LAB_0205ae51;
    }
    if (iVar11 != 7) {
      return 0;
    }
    pcVar4 = (char *)0x0;
    if ((((*incoming_edx == 1) && (pcVar4 = (char *)incoming_ecx[6], pcVar4 != (char *)0x0)) &&
        (uVar6 = incoming_edx[1], 0 < (int)uVar6)) && (uVar6 <= *(uint *)(pcVar4 + 8))) {
      uVar3 = recovered_207e1d0(param_3,(undefined4 *)
                                        (*(int *)(pcVar4 + 0x10) + -0x24 + uVar6 * 0x24));
      return uVar3;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  goto LAB_0205aefd;
  while( true ) {
    piVar10 = piVar10 + 2;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
LAB_0205acbb:
    if (piVar10[-1] == iVar11) {
      if (((*piVar10 == 0) || (*local_24 != 3)) || ((char *)local_24[3] == (char *)0x0)) break;
      iVar11 = recovered_20022a0((char *)local_24[3],&DAT_020901bc);
      if (iVar11 == 0) {
        iVar11 = recovered_20869c0(local_14[7],str_02090506);
        uVar3 = recovered_2086910(local_20,0x20cda9aU,iVar11);
        if ((char)uVar3 == '\0') goto LAB_0205adc2;
      }
      else {
LAB_0205adc2:
        iVar11 = recovered_20022a0((char *)local_24[3],str_020901c1);
        if (iVar11 == 0) {
          iVar11 = recovered_20869c0(local_14[7],str_02090506);
          uVar3 = recovered_2086910(local_20,0x20cdaa9U,iVar11);
          if ((char)uVar3 != '\0') goto LAB_0205ae41;
        }
        iVar11 = recovered_20022a0((char *)local_24[3],str_02090512);
        piVar8 = local_14;
        if (iVar11 != 0) break;
        iVar11 = recovered_20869c0(local_14[7],str_02090506);
        uVar3 = recovered_2086910(local_20,0x20cdab9U,iVar11);
        piVar8 = local_14;
        if ((char)uVar3 == '\0') break;
      }
LAB_0205ae41:
      recovered_2001710(local_1c);
      pcVar4 = extraout_EAX;
      goto LAB_0205aefd;
    }
  }
LAB_0205ae51:
  iVar11 = piVar8[7];
  local_18 = local_1c;
  if ((local_1c != (char *)0x0 && iVar11 != 0) && (uVar6 = *(uint *)(iVar11 + 4), uVar6 != 0)) {
    uVar9 = 0;
    iVar5 = 4;
    do {
      pcVar4 = *(char **)(*(int *)(iVar11 + 0xc) + -4 + iVar5);
      if (pcVar4 != (char *)0x0) {
        iVar7 = recovered_20022a0(pcVar4,local_18);
        if (iVar7 == 0) {
          recovered_2001710(local_1c);
          pcVar4 = extraout_EAX_01;
          if (-1 < (int)uVar9) {
            uVar3 = recovered_207e1d0(local_20,(undefined4 *)(iVar5 + *(int *)(local_14[7] + 0xc)));
            return uVar3;
          }
          goto LAB_0205aebf;
        }
        uVar6 = *(uint *)(iVar11 + 4);
      }
      uVar9 = uVar9 + 1;
      iVar5 = iVar5 + 0x28;
    } while (uVar9 < uVar6);
    local_18 = local_1c;
  }
  local_1c = local_18;
  recovered_2001710(local_18);
  pcVar4 = extraout_EAX_00;
LAB_0205aebf:
  *local_20 = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 0;
LAB_0205aefd:
  return CONCAT31((int3)((uint)pcVar4 >> 8),1);
}
