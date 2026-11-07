/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define DAT_020c77e4 (*(uint32_t volatile *)(0x223dbfcU))
#define DAT_020c77e8 (*(uint32_t volatile *)(0x223dc00U))
#define DAT_020c77ec (*(uint32_t volatile *)(0x223dc04U))
#define local_14 (*(byte * *)(frame + 1372))
#define local_154 (*(byte (*)[320])(frame + 1052))
#define local_554 (*(char (*)[1024])(frame + 28))
#define str_02097498 (*(char (*)[1])(0x20d6e1aU))
#define str_020974b2 (*(char (*)[1])(0x20d6e34U))
#define str_020974d9 (*(char (*)[1])(0x20d6e5bU))
#define str_020974ff (*(char (*)[1])(0x20d6e81U))
#define str_0209751f (*(char (*)[1])(0x20d6ea1U))
#define str_02097542 (*(char (*)[1])(0x20d6ec4U))
undefined4 recovered_2048850(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[1424] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar7;
  ushort uVar3;
  uint uVar4;
  ulong size;
  void *pf_output_slot;
  void *pvVar5;
  undefined4 uVar6;
  uchar extraout_CL;
  uchar in_CL;
  uchar extraout_CL_00;
  uchar in_CL_00;
  char *pcVar8;
  int iVar9;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 *puVar10;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  byte bVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;

  if (incoming_ecx == 0) {
    return 0;
  }
  pf_varargs_2003aa0__4_((char *)local_154,0x140,&DAT_0208e323,incoming_ecx);
  pbVar12 = local_154;
  do {
    do {
      pbVar12 = pbVar12 + 1;
      bVar11 = pbVar12[-1];
      uVar4 = (uint)bVar11;
    } while (uVar4 - 9 < 5);
  } while (uVar4 == 0x20);
  if (uVar4 != 0x3e) {
    if ((byte)(bVar11 + 0xbf) < 0x1a) {
      bVar11 = bVar11 | 0x20;
    }
    uVar4 = (uint)(bVar11 == 0x69);
    bVar7 = pbVar12[uVar4 - 1] - 0x30U;
    uVar3 = CONCAT11(bVar7,pbVar12[uVar4 - 1]);
    if (9 < bVar7) {
      return 0;
    }
    pbVar14 = pbVar12 + uVar4;
    pbVar12 = pbVar12 + uVar4 + 1;
    uVar4 = 0;
LAB_02036240:
    local_14 = pbVar12;
    if (uVar4 <= (0x2f - (uVar3 & 0xff)) / 10) goto code_r0x0203625b;
    uVar4 = 0;
    pcVar8 = str_020974b2;
    while( true ) {
      do {
        pcVar15 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar15;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0(local_554,uVar4,1,'\x01');
        uVar4 = 0;
      }
      else if (uVar4 + 1 < 0x400) {
        local_554[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
      }
    }
    goto LAB_020363de;
  }
  if (*pbVar12 == 0x20) {
    pbVar12 = pbVar12 + 1;
  }
  size = recovered_2002270((char *)pbVar12);
  pf_output_slot = recovered_2001650(size + 1);
  if (pf_output_slot != (void *)0x0) {
    if (size != 0) {
      recovered_2001b70(pf_output_slot,pbVar12,size);
    }
    *(undefined1 *)((int)pf_output_slot + size) = 0;
    iVar9 = DAT_020c77e8;
    uVar4 = iVar9 + 1;
    uVar2 = DAT_020c77ec;
    if (uVar2 < uVar4) {
      uVar13 = 0x10;
      if (uVar2 != 0) {
        uVar13 = uVar2;
      }
      for (; uVar13 < uVar4; uVar13 = uVar13 * 2) {
        if ((int)uVar13 < 0) {
          uVar13 = uVar4;
          break;
        }
      }
      pvVar5 = (void *)DAT_020c77e4;
      pvVar5 = recovered_2001860(pvVar5,uVar13 * 4);
      if (pvVar5 == (void *)0x0) {
        recovered_2001710(pf_output_slot);
        goto LAB_02036387;
      }
      uVar4 = DAT_020c77ec;
      iVar9 = uVar13 - uVar4;
      if (uVar4 <= uVar13 && iVar9 != 0) {
        puVar10 = (undefined4 *)((int)pvVar5 + uVar4 * 4);
        do {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      DAT_020c77e4 = pvVar5;
      DAT_020c77ec = uVar13;
      iVar9 = DAT_020c77e8;
      uVar4 = iVar9 + 1;
    }
    else {
      pvVar5 = (void *)DAT_020c77e4;
    }
    *(void **)((int)pvVar5 + iVar9 * 4) = pf_output_slot;
    DAT_020c77e8 = uVar4;
    goto LAB_020363f8;
  }
LAB_02036387:
  uVar4 = 0;
  pcVar8 = str_02097498;
  while( true ) {
    do {
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_20a11d0(local_554,uVar4,1,'\x01');
      uVar4 = 0;
    }
    else if (uVar4 + 1 < 0x400) {
      local_554[uVar4] = cVar1;
      uVar4 = uVar4 + 1;
    }
  }
LAB_020363de:
  recovered_20a11d0(local_554,uVar4,1,'\x01');
  in_CL = extraout_CL;
LAB_020363f3:
  pvVar5 = (void *)recovered_2027720(in_CL);
LAB_020363f8:
  return CONCAT31((int3)((uint)pvVar5 >> 8),1);
code_r0x0203625b:
  uVar4 = ((uVar3 & 0xff) - 0x30) + uVar4 * 10;
  bVar7 = *pbVar14;
  uVar3 = CONCAT11(bVar7 - 0x30U,bVar7);
  pbVar12 = pbVar12 + 1;
  pbVar14 = pbVar14 + 1;
  if (9 < (byte)(bVar7 - 0x30U)) goto code_r0x02036274;
  goto LAB_02036240;
code_r0x02036274:
  if (bVar7 != 0x3e) {
    return 0;
  }
  if (uVar4 == 0) {
    pcVar8 = str_020974d9;
  }
  else {
    if (*pbVar14 != 0x20) {
      pbVar12 = pbVar14;
    }
    uVar2 = DAT_020c77e8;
    if (bVar11 == 0x69) {
      if (uVar4 <= uVar2 + 1) {
        uVar6 = recovered_20be1b0(uVar4 - 1,(char *)pbVar12);
        local_14 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
        if ((char)uVar6 != '\0') {
          return local_14;
        }
        pcVar8 = str_02097498;
        uVar4 = extraout_EDX;
LAB_0203644c:
        recovered_203e190(pcVar8,uVar4);
        recovered_2027720(in_CL_00);
        return local_14;
      }
      pcVar8 = str_020974ff;
    }
    else {
      if (uVar4 <= uVar2) {
        uVar6 = recovered_20be2e0(uVar4 - 1,(char *)pbVar12);
        local_14 = (byte *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
        if ((char)uVar6 != '\0') {
          return local_14;
        }
        pcVar8 = str_02097542;
        uVar4 = extraout_EDX_00;
        goto LAB_0203644c;
      }
      pcVar8 = str_0209751f;
    }
  }
  recovered_203e190(pcVar8,(uint)pbVar12);
  in_CL = extraout_CL_00;
  goto LAB_020363f3;
}
