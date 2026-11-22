/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c748d (*(uint8_t *)(0x20c748dU))
#define DAT_020c7548 (*(uint8_t *)(0x20c7548U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020c7375 (*(char (*)[1])(0x20c7375U))
#define str_020c7490 (*(char (*)[1])(0x20c7490U))
#define str_020c74b4 (*(char (*)[1])(0x20c74b4U))
#define str_020c74de (*(char (*)[1])(0x20c74deU))
#define str_020c7507 (*(char (*)[1])(0x20c7507U))
#define str_020c751e (*(char (*)[1])(0x20c751eU))
#define str_020c7524 (*(char (*)[1])(0x20c7524U))
#define str_020c752b (*(char (*)[1])(0x20c752bU))
#define str_020c7533 (*(char (*)[1])(0x20c7533U))
#define str_020c7539 (*(char (*)[1])(0x20c7539U))
#define str_020c7540 (*(char (*)[1])(0x20c7540U))
#define str_020c754b (*(char (*)[1])(0x20c754bU))
#define str_020c7554 (*(char (*)[1])(0x20c7554U))
#define str_020c755a (*(char (*)[1])(0x20c755aU))
#define str_020c7573 (*(char (*)[1])(0x20c7573U))
#define str_020c758e (*(char (*)[1])(0x20c758eU))
#define str_020c75b9 (*(char (*)[1])(0x20c75b9U))
#define str_020c75e2 (*(char (*)[1])(0x20c75e2U))
#define str_020c760b (*(char (*)[1])(0x20c760bU))
#define str_020c7636 (*(char (*)[1])(0x20c7636U))
#define str_020c7662 (*(char (*)[1])(0x20c7662U))
#define local_30 (*(uint *)(frame + 4448))
#define local_2c (*(char * *)(frame + 4452))
#define local_28 (*(uint *)(frame + 4456))
#define local_24 (*(uint *)(frame + 4460))
#define local_20 (*(uint *)(frame + 4464))
#define local_1c (*(uint *)(frame + 4468))
#define local_17 (*(byte *)(frame + 4473))
#define local_16 (*(byte *)(frame + 4474))
#define local_15 (*(byte *)(frame + 4475))
#define local_14 (*(byte *)(frame + 4476))
#define local_13 (*(byte *)(frame + 4477))
#define local_12 (*(byte *)(frame + 4478))
#define local_11 (*(byte *)(frame + 4479))
#define left (*(byte * *)(frame + 32))
#define local_1162 (*(char (*)[3856])(frame + 46))
#define local_252 (*(char (*)[241])(frame + 3902))
#define local_161 (*(byte (*)[6])(frame + 4143))
#define local_15b (*(undefined1 (*)[2])(frame + 4149))
#define local_159 (*(byte (*)[233])(frame + 4151))
#define local_70 (*(char (*)[64])(frame + 4384))


undefined4 recovered_2031a60(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[4528] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 extraout_ECX_01 = 0;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;

  local_252[0] = '\0';
  local_70[0] = '\0';
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0;
  bVar9 = 0;
  bVar2 = 0;
  local_2c = in_EDX;
  bVar10 = 0;
LAB_02031aea:
  local_11 = bVar10;
  local_16 = (byte)local_24;
  local_12 = (byte)local_1c;
  uVar1 = CONCAT11(bVar9,local_12);
  local_17 = (byte)local_28;
  local_14 = (byte)local_20;
  if (in_ECX == (byte *)0x0) {
    in_ECX = &DAT_020c5084;
  }
  else {
    for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
    }
  }
  uVar11 = (uint)CONCAT11(local_17,local_14);
  local_161[0] = 0;
  bVar10 = *in_ECX;
  uVar8 = (uint)bVar10;
  local_15 = bVar2;
  if ((uVar8 != 0x22) && (uVar8 != 0x27)) {
    if (uVar8 != 0) {
      uVar8 = 0;
      goto LAB_02031b64;
    }
LAB_02031f9a:
    pcVar13 = local_2c;
    if ((local_16 & 1) != 0) {
      if (param_3 == 0 || local_2c == (char *)0x0) {
        return 0;
      }
      if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
        (pcVar13 + uVar5)[0] = '\n';
        (pcVar13 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar13);
      if (param_3 <= uVar5 + 1) {
        return 0;
      }
      pcVar13 = pcVar13 + uVar5;
      cVar7 = 'l';
      iVar4 = 0;
      goto LAB_02032000;
    }
    if ((local_15 & 1) != 0) {
      if (param_3 == 0 || local_2c == (char *)0x0) {
        return 0;
      }
      if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
        (pcVar13 + uVar5)[0] = '\n';
        (pcVar13 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar13);
      if (param_3 <= uVar5 + 1) {
        return 0;
      }
      pcVar13 = pcVar13 + uVar5;
      cVar7 = 'l';
      iVar4 = 0;
      goto LAB_02032090;
    }
    if ((uVar1 & 0x100) != 0) {
      if (param_3 == 0 || local_2c == (char *)0x0) {
        return 0;
      }
      if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
        (pcVar13 + uVar5)[0] = '\n';
        (pcVar13 + uVar5)[1] = '\0';
      }
      uVar5 = recovered_2002270(pcVar13);
      if (param_3 <= uVar5 + 1) {
        return 0;
      }
      pcVar13 = pcVar13 + uVar5;
      cVar7 = 'l';
      iVar4 = 0;
      goto LAB_02032110;
    }
    if ((uVar11 & 1) == 0) {
      if ((uVar11 & 0x100) == 0) {
        if (local_30 != 0) {
          uVar6 = recovered_205f840((int)local_1162,local_30,local_11 & ~(byte)uVar1 & 1,local_2c,
                                    param_3);
          return uVar6;
        }
        pcVar13 = str_020c7662;
      }
      else {
        if (local_30 == 1) {
          uVar6 = recovered_205f510(local_1162,local_70,local_252,local_2c,param_3);
          return uVar6;
        }
        pcVar13 = str_020c7636;
      }
LAB_02032431:
      recovered_202dd30(local_2c,param_3,pcVar13);
      return 0;
    }
    if ((uVar11 & 0x100) == 0) {
      uVar6 = recovered_205ed90((int)local_1162,local_30,local_252,local_2c,param_3);
      return uVar6;
    }
    if (param_3 == 0 || local_2c == (char *)0x0) {
      return 0;
    }
    if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
      (pcVar13 + uVar5)[0] = '\n';
      (pcVar13 + uVar5)[1] = '\0';
    }
    uVar5 = recovered_2002270(pcVar13);
    if (param_3 <= uVar5 + 1) {
      return 0;
    }
    pcVar13 = pcVar13 + uVar5;
    cVar7 = 'l';
    iVar4 = 0;
    goto LAB_020322ea;
  }
  bVar10 = in_ECX[1];
  in_ECX = in_ECX + 1;
LAB_02031b64:
  local_13 = bVar9;
  if (bVar10 == 0) {
    uVar3 = 0;
  }
  else {
    in_ECX = in_ECX + 1;
    uVar3 = 0;
    do {
      if (uVar8 == 0) {
        if ((bVar10 - 9 < 0x18) && ((0x80001fU >> (bVar10 - 9 & 0x1f) & 1) != 0)) break;
      }
      else if (uVar8 == (int)(char)bVar10) goto LAB_02031be2;
      if (uVar3 + 1 < 0xf1) {
        local_161[uVar3] = bVar10;
        uVar3 = uVar3 + 1;
      }
      bVar10 = *in_ECX;
      in_ECX = in_ECX + 1;
    } while (bVar10 != 0);
    in_ECX = in_ECX + -1;
  }
LAB_02031be2:
  left = local_161;
  local_161[uVar3] = 0;
  for (; ((uint)(*in_ECX) - 9 < 5 || (*in_ECX == 0x20)); in_ECX = in_ECX + 1) {
  }
  uVar1 = CONCAT11(local_13,local_12);
  uVar11 = (uint)CONCAT11(local_17,local_14);
  if (uVar3 == 0) goto LAB_02031f9a;
  if ((local_16 & 1) != 0) {
    pf_varargs_20044f0__4_(local_252,0xf1,&DAT_020c5119,(uint)left);
    local_24 = 0;
    local_28 = (uint)local_17;
LAB_02031c58:
    local_1c = (uint)local_12;
    local_20 = (uint)local_14;
    bVar9 = local_13;
    bVar2 = local_15;
    bVar10 = local_11;
    goto LAB_02031aea;
  }
  if ((local_15 & 1) != 0) {
    pf_varargs_20044f0__4_(local_70,0x40,&DAT_020c5119,(uint)left);
    bVar2 = 0;
    local_20 = (uint)local_14;
    local_28 = (uint)local_17;
    local_1c = (uint)local_12;
    local_24 = (uint)local_16;
    bVar9 = local_13;
    bVar10 = local_11;
    goto LAB_02031aea;
  }
  local_28 = (uint)CONCAT11(local_17,local_17);
  local_1c = (uint)local_12;
  local_24 = (uint)CONCAT11(local_15,local_16);
  bVar9 = 0;
  bVar2 = local_15;
  local_20 = uVar11;
  bVar10 = local_11;
  if ((local_13 & 1) != 0) goto LAB_02031aea;
  iVar4 = recovered_20022a0((char *)left,str_020c7213);
  if ((iVar4 == 0) || (iVar4 = recovered_20022a0((char *)left,&DAT_020c748d), iVar4 == 0)) {
    pcVar13 = local_2c;
    if (param_3 == 0 || local_2c == (char *)0x0) {
      return 1;
    }
    if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
      (pcVar13 + uVar5)[0] = '\n';
      (pcVar13 + uVar5)[1] = '\0';
    }
    uVar5 = recovered_2002270(pcVar13);
    if (param_3 <= uVar5 + 1) goto LAB_020321b1;
    cVar7 = 'u';
    iVar4 = 0;
    goto LAB_02032190;
  }
  iVar4 = recovered_20022a0((char *)left,str_020c7375);
  pcVar13 = local_2c;
  if (iVar4 != 0) {
    iVar4 = recovered_20022a0((char *)left,str_020c751e);
    local_1c = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    local_20 = (uint)local_14;
    local_28 = (uint)local_17;
    local_24 = (uint)local_16;
    bVar9 = local_13;
    bVar2 = local_15;
    bVar10 = local_11;
    if (iVar4 != 0) {
      iVar4 = recovered_20022a0((char *)left,str_020c7524);
      local_20 = (uint)local_14;
      local_28 = (uint)local_17;
      local_1c = (uint)local_12;
      local_24 = (uint)local_16;
      bVar9 = local_13;
      bVar2 = local_15;
      bVar10 = 1;
      if (iVar4 != 0) {
        iVar4 = recovered_20022a0((char *)left,str_020c752b);
        local_20 = CONCAT31((int3)((uint)iVar4 >> 8),1);
        local_28 = (uint)local_17;
        local_1c = (uint)local_12;
        local_24 = (uint)local_16;
        bVar9 = local_13;
        bVar2 = local_15;
        bVar10 = local_11;
        if (iVar4 != 0) {
          iVar4 = recovered_20022a0((char *)left,str_020c7533);
          local_28 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
          local_20 = (uint)local_14;
          local_1c = (uint)local_12;
          local_24 = (uint)local_16;
          bVar9 = local_13;
          bVar2 = 1;
          bVar10 = local_11;
          if (iVar4 != 0) {
            iVar4 = recovered_2019320((char *)left,str_020c7539,6);
            if (iVar4 == 0) {
              pf_varargs_20044f0__4_(local_70,0x40,&DAT_020c5119,(uint)local_15b);
            }
            else {
              iVar4 = recovered_20022a0((char *)left,str_020c7540);
              local_24 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),1);
              local_20 = (uint)local_14;
              local_28 = (uint)local_17;
              local_1c = (uint)local_12;
              bVar9 = local_13;
              bVar2 = local_15;
              bVar10 = local_11;
              if (iVar4 == 0) goto LAB_02031aea;
              iVar4 = recovered_20022a0((char *)left,&DAT_020c7548);
              local_20 = (uint)local_14;
              local_28 = (uint)local_17;
              local_1c = (uint)local_12;
              bVar9 = local_13;
              bVar2 = local_15;
              bVar10 = local_11;
              if (iVar4 == 0) goto LAB_02031aea;
              iVar4 = recovered_2019320((char *)left,str_020c754b,8);
              if (iVar4 == 0) {
                left = local_159;
                pcVar13 = local_252;
              }
              else {
                iVar4 = recovered_20022a0((char *)left,str_020c7554);
                local_20 = (uint)local_14;
                local_28 = (uint)local_17;
                local_1c = (uint)local_12;
                local_24 = (uint)local_16;
                bVar9 = 1;
                bVar2 = local_15;
                bVar10 = local_11;
                if (iVar4 == 0) goto LAB_02031aea;
                if ((local_161[0] == 0x2d) && (local_161[1] != '\0')) {
                  pf_varargs_202ecc0__4_(local_2c,param_3,str_020c755a,(uint)left);
                  return 0;
                }
                if (0xf < local_30) {
                  pcVar13 = str_020c7573;
                  goto LAB_02032431;
                }
                iVar4 = local_30 * 0xf1;
                local_30 = local_30 + 1;
                pcVar13 = local_1162 + iVar4;
              }
              pf_varargs_20044f0__4_(pcVar13,0xf1,&DAT_020c5119,(uint)left);
              local_28 = (uint)local_17;
            }
            local_24 = (uint)local_16;
            goto LAB_02031c58;
          }
        }
      }
    }
    goto LAB_02031aea;
  }
  if (param_3 == 0 || local_2c == (char *)0x0) {
    return 1;
  }
  if ((*local_2c != '\0') && (uVar5 = recovered_2002270(local_2c), uVar5 + 1 < param_3)) {
    (pcVar13 + uVar5)[0] = '\n';
    (pcVar13 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar13);
  if (param_3 <= uVar5 + 1) {
    return 1;
  }
  pcVar13 = pcVar13 + uVar5;
  cVar7 = 'l';
  iVar4 = 0;
  do {
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c7507[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
    uVar11 = iVar4 + uVar5 + 2;
    iVar4 = iVar12;
  } while (uVar11 < param_3);
LAB_0203238a:
  pcVar13[iVar12] = '\0';
  return 1;
  while (uVar11 = iVar4 + uVar5 + 2, iVar4 = iVar12, uVar11 < param_3) {
LAB_02032000:
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c758e[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
  }
  goto LAB_0203212a;
  while (uVar11 = iVar4 + uVar5 + 2, iVar4 = iVar12, uVar11 < param_3) {
LAB_02032090:
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c75b9[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
  }
  goto LAB_0203212a;
  while (uVar11 = iVar4 + uVar5 + 2, iVar4 = iVar12, uVar11 < param_3) {
LAB_02032110:
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c75e2[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
  }
  goto LAB_0203212a;
  while (uVar11 = iVar4 + uVar5 + 2, iVar4 = iVar12, uVar11 < param_3) {
LAB_02032190:
    pcVar13[iVar4 + uVar5] = cVar7;
    cVar7 = str_020c7490[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
  }
  pcVar13[iVar12 + uVar5] = '\0';
  pcVar13 = local_2c;
LAB_020321b1:
  if ((*pcVar13 != '\0') && (uVar5 = recovered_2002270(pcVar13), uVar5 + 1 < param_3)) {
    (pcVar13 + uVar5)[0] = '\n';
    (pcVar13 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar13);
  if (uVar5 + 1 < param_3) {
    cVar7 = ' ';
    iVar4 = 0;
    do {
      pcVar13[iVar4 + uVar5] = cVar7;
      cVar7 = str_020c74b4[iVar4 + 1];
      iVar12 = iVar4 + 1;
      if (cVar7 == '\0') break;
      uVar11 = iVar4 + uVar5 + 2;
      iVar4 = iVar12;
    } while (uVar11 < param_3);
    pcVar13[iVar12 + uVar5] = '\0';
    pcVar13 = local_2c;
  }
  if ((*pcVar13 != '\0') && (uVar5 = recovered_2002270(pcVar13), uVar5 + 1 < param_3)) {
    (pcVar13 + uVar5)[0] = '\n';
    (pcVar13 + uVar5)[1] = '\0';
  }
  uVar5 = recovered_2002270(pcVar13);
  if (param_3 <= uVar5 + 1) {
    return 1;
  }
  pcVar13 = pcVar13 + uVar5;
  cVar7 = ' ';
  iVar4 = 0;
  do {
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c74de[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
    uVar11 = iVar4 + uVar5 + 2;
    iVar4 = iVar12;
  } while (uVar11 < param_3);
  goto LAB_0203238a;
  while (uVar11 = iVar4 + uVar5 + 2, iVar4 = iVar12, uVar11 < param_3) {
LAB_020322ea:
    pcVar13[iVar4] = cVar7;
    cVar7 = str_020c760b[iVar4 + 1];
    iVar12 = iVar4 + 1;
    if (cVar7 == '\0') break;
  }
LAB_0203212a:
  pcVar13[iVar12] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c748d
#undef DAT_020c7548
#undef str_020c7213
#undef str_020c7375
#undef str_020c7490
#undef str_020c74b4
#undef str_020c74de
#undef str_020c7507
#undef str_020c751e
#undef str_020c7524
#undef str_020c752b
#undef str_020c7533
#undef str_020c7539
#undef str_020c7540
#undef str_020c754b
#undef str_020c7554
#undef str_020c755a
#undef str_020c7573
#undef str_020c758e
#undef str_020c75b9
#undef str_020c75e2
#undef str_020c760b
#undef str_020c7636
#undef str_020c7662
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_17
#undef local_16
#undef local_15
#undef local_14
#undef local_13
#undef local_12
#undef local_11
#undef left
#undef local_1162
#undef local_252
#undef local_161
#undef local_15b
#undef local_159
#undef local_70
