/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8244c9fc
 */

ulonglong recovered_8244c9fc(long param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulonglong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1 == 0) {
LAB_8244cc70:
    uVar5 = 1;
  }
  else {
    uVar4 = recovered_82400de8((char *)param_1);
    bVar10 = false;
    uVar9 = 0;
    bVar3 = false;
    uVar6 = 0;
    for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
      bVar1 = *(byte *)(param_1 + uVar8);
      uVar7 = (ulong)bVar1;
      if (((!(bool)(bVar3 | bVar1 != 0x40)) && (uVar8 + 1 < uVar4)) &&
         (*(char *)(param_1 + uVar8 + 1) == '@')) {
        uVar4 = uVar8;
        goto LAB_8244cc60;
      }
      uVar11 = (uint)bVar1;
      if (bVar3) {
        if (!bVar10) {
          if (uVar11 == 0x5c) {
            bVar3 = true;
            bVar10 = true;
            goto LAB_8244cc30;
          }
          if (uVar11 == (uint)uVar9) {
            uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),
                                       (uVar8 + 1) - uVar6);
            if ((uVar5 & 1) != 0) {
              uVar9 = 0;
              bVar10 = false;
LAB_8244cc2c:
              bVar3 = false;
              uVar6 = uVar8 + 1;
              goto LAB_8244cc30;
            }
            goto LAB_8244cc78;
          }
        }
        bVar10 = false;
        bVar3 = true;
      }
      else if (bVar1 < 0x28) {
        if ((1L << (uVar7 & 0x3f) & 0x100003e00U) == 0) {
          if ((1L << (uVar7 & 0x3f) & 0x8400000000U) == 0) goto LAB_8244cb34;
          if ((uVar6 <= uVar8 && uVar8 - uVar6 != 0) &&
             (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),uVar8 - uVar6),
             (uVar5 & 1) == 0)) goto LAB_8244cc78;
          bVar10 = false;
          bVar3 = true;
          uVar6 = uVar8;
          uVar9 = uVar7;
        }
        else {
          if ((uVar6 <= uVar8 && uVar8 - uVar6 != 0) &&
             (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),uVar8 - uVar6),
             (int)uVar5 == 0)) goto LAB_8244cc78;
          bVar3 = false;
          uVar6 = uVar8 + 1;
        }
      }
      else {
LAB_8244cb34:
        uVar7 = uVar8 + 1;
        uVar12 = (uint)bVar1;
        if (uVar7 < uVar4 &&
            (((bVar1 == '=' || bVar1 == '!' || bVar1 == '~' ||
               bVar1 == '<' || bVar1 == '>' || bVar1 == '*' ||
               bVar1 == '+' || bVar1 == '-' || bVar1 == '/') &&
              *(char *)(param_1+uVar7) == '=') ||
             (bVar1 == '&' && *(char *)(param_1+uVar7) == '&') ||
             (bVar1 == '|' && *(char *)(param_1+uVar7) == '|'))) {
          if (((uVar6 <= uVar8 && uVar8 - uVar6 != 0) &&
              (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),uVar8 - uVar6),
              (int)uVar5 == 0)) ||
             (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar8),2),
             (uVar5 & 1) == 0)) goto LAB_8244cc78;
          bVar3 = false;
          uVar6 = uVar8 + 2;
          uVar8 = uVar7;
        }
        else {
          if (((uVar12 - 0x21 < 0x3e &&
                (1L << ((ulong)(uVar12 - 0x21) & 0x3f) & 0x3c0000003e005f95U) != 0) ||
              (uVar12 == 0x7d)) || (uVar12 == 0x7b)) {
            if (((uVar8 < uVar6 || uVar8 - uVar6 == 0) ||
                (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),uVar8 - uVar6
                                           ), (int)uVar5 != 0)) &&
               (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar8),1),
               (uVar5 & 1) != 0)) goto LAB_8244cc2c;
            goto LAB_8244cc78;
          }
          bVar3 = false;
        }
      }
LAB_8244cc30:
    }
    if (!bVar3) {
LAB_8244cc60:
      if ((uVar4 < uVar6 || uVar4 - uVar6 == 0) ||
         (uVar5 = recovered_8244f838((long *)param_2,(uchar *)(param_1 + uVar6),uVar4 - uVar6),
         (uVar5 & 1) != 0)) goto LAB_8244cc70;
    }
LAB_8244cc78:
    recovered_8244cc8c(param_2);
    uVar5 = 0;
  }
  return uVar5;
}

